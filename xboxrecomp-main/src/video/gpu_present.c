/*
 * D3D11 presentation for the framebuffer window (fb_present.c).
 *
 * GDI shows each frame with StretchDIBits on a 16 ms timer, scaled on the
 * CPU. This puts a D3D11 device and a swap chain on the same window and
 * presents the flipped frame through it, vsync-paced. The frame (the guest's
 * A8R8G8B8, i.e. B8G8R8A8 in memory order) is uploaded into its own texture
 * and drawn into a back buffer the size of the window's client area,
 * letterboxed to the frame's aspect ratio on black -- the window can be any
 * size (or borderless fullscreen) without stretching the picture.
 *
 * Opt-in with RECOMP_D3D_PRESENT=1; anything that fails falls back to GDI.
 * Linear filtering, RECOMP_PRESENT_FILTER=point for sharp pixels;
 * RECOMP_PRESENT_VSYNC=0 presents without waiting for the display, as the
 * SDL window does.
 */
#if defined(_WIN32)
#define COBJMACROS
#include <windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include <d3dcompiler.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "gpu_present.h"
#include "pvideo_scanout.h"
#include "../nv2a/nv2a_mmio_hook.h"

extern ptrdiff_t xbox_GetMemoryOffset(void);

static ID3D11Device             *s_dev;
static ID3D11DeviceContext      *s_ctx;
static IDXGISwapChain           *s_chain;
static ID3D11RenderTargetView   *s_rtv;
static ID3D11Texture2D          *s_frame;      /* the guest frame, w x h */
static ID3D11ShaderResourceView *s_srv;
static ID3D11SamplerState       *s_samp;
static ID3D11VertexShader       *s_vs;
static ID3D11PixelShader        *s_ps;
static HWND                      s_hwnd;
static uint32_t                  s_w, s_h;      /* frame size */
static uint32_t                  s_bw, s_bh;    /* back buffer (client) size */
static int                       s_vsync = 1;
static ID3D11BlendState          *s_video_blend;
static ID3D11RasterizerState     *s_video_raster;
static uint32_t                  *s_video_overlay_pixels;
static CRITICAL_SECTION           s_video_overlay_lock;
static int                        s_video_overlay_lock_ready;
static int                        s_video_overlay_enabled;
static int                        s_video_overlay_visible;
static uint32_t                  *s_pvideo_pixels;
static uint8_t                   *s_pvideo_source;
static size_t                     s_pvideo_bytes;
static unsigned                   s_pvideo_bank;
static uint32_t                   s_pvideo_regs[0x1000 / 4];
static uint32_t                   s_pvideo_last_state[11];
static uint32_t                   s_pvideo_state_traces;
static int                        s_pvideo_have_state;

/* A triangle covering the viewport, from the vertex id; uv 0..1. */
static const char s_hlsl[] =
    "Texture2D t : register(t0); SamplerState s : register(s0);\n"
    "struct V { float4 p : SV_Position; float2 uv : TEXCOORD0; };\n"
    "V vs(uint i : SV_VertexID) { V o; float2 q = float2((i << 1) & 2, i & 2);\n"
    "  o.uv = q; o.p = float4(q * float2(2, -2) + float2(-1, 1), 0, 1); return o; }\n"
    "float4 ps(V i) : SV_Target { return t.Sample(s, i.uv); }\n";

int gpu_present_enabled(void)
{
    static int on = -1;
    if (on < 0) {
        const char *e = getenv("RECOMP_D3D_PRESENT");
        on = (e && *e && *e != '0') ||
             (getenv("RECOMP_D3D_BACKEND") &&
              strcmp(getenv("RECOMP_D3D_BACKEND"), "direct") == 0);
    }
    return on;
}

static void client_size(uint32_t *w, uint32_t *h)
{
    RECT r;
    GetClientRect(s_hwnd, &r);
    *w = r.right > r.left ? (uint32_t)(r.right - r.left) : 1;
    *h = r.bottom > r.top ? (uint32_t)(r.bottom - r.top) : 1;
}

static int make_rtv(void)
{
    ID3D11Texture2D *back = NULL;
    HRESULT hr = IDXGISwapChain_GetBuffer(s_chain, 0, &IID_ID3D11Texture2D, (void **)&back);
    if (FAILED(hr))
        return 0;
    hr = ID3D11Device_CreateRenderTargetView(s_dev, (ID3D11Resource *)back, NULL, &s_rtv);
    ID3D11Texture2D_Release(back);
    return SUCCEEDED(hr);
}

static ID3DBlob *compile(const char *entry, const char *target)
{
    ID3DBlob *code = NULL, *err = NULL;
    HRESULT hr = D3DCompile(s_hlsl, sizeof s_hlsl - 1, "present", NULL, NULL, entry, target,
                            0, 0, &code, &err);
    if (FAILED(hr)) {
        fprintf(stderr, "  [D3D] present shader %s: %s\n", entry,
                err ? (const char *)ID3D10Blob_GetBufferPointer(err) : "failed");
        if (err) ID3D10Blob_Release(err);
        return NULL;
    }
    if (err) ID3D10Blob_Release(err);
    return code;
}

int gpu_present_init(HWND hwnd, uint32_t width, uint32_t height)
{
    DXGI_SWAP_CHAIN_DESC sd;
    D3D11_TEXTURE2D_DESC td;
    D3D11_SAMPLER_DESC smp;
    D3D11_BLEND_DESC blend;
    D3D11_RASTERIZER_DESC raster;
    ID3DBlob *vsb, *psb;
    HRESULT hr;
    const char *v = getenv("RECOMP_PRESENT_VSYNC"), *f = getenv("RECOMP_PRESENT_FILTER");

    if (v && v[0] == '0')
        s_vsync = 0;
    s_hwnd = hwnd;
    s_w = width; s_h = height;
    client_size(&s_bw, &s_bh);
    ZeroMemory(&sd, sizeof sd);
    sd.BufferDesc.Width  = s_bw;
    sd.BufferDesc.Height = s_bh;
    sd.BufferDesc.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
    sd.SampleDesc.Count  = 1;
    sd.BufferUsage       = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.BufferCount       = 1;
    sd.OutputWindow      = hwnd;
    sd.Windowed          = TRUE;
    sd.SwapEffect        = DXGI_SWAP_EFFECT_DISCARD;

    hr = D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, 0,
                                       NULL, 0, D3D11_SDK_VERSION, &sd,
                                       &s_chain, &s_dev, NULL, &s_ctx);
    if (FAILED(hr)) {
        fprintf(stderr, "  [D3D] device/swap chain failed (0x%08lX); staying on GDI\n",
                (unsigned long)hr);
        return 0;
    }
    {
        /* Alt+Enter is the window's (borderless fullscreen, fb_present.c),
         * not DXGI's exclusive mode at 640x480. */
        IDXGIFactory *fac = NULL;
        if (SUCCEEDED(IDXGISwapChain_GetParent(s_chain, &IID_IDXGIFactory, (void **)&fac))) {
            IDXGIFactory_MakeWindowAssociation(fac, hwnd, DXGI_MWA_NO_ALT_ENTER);
            IDXGIFactory_Release(fac);
        }
    }
    ZeroMemory(&td, sizeof td);
    td.Width = width; td.Height = height; td.MipLevels = 1; td.ArraySize = 1;
    td.Format = DXGI_FORMAT_B8G8R8A8_UNORM; td.SampleDesc.Count = 1;
    td.Usage = D3D11_USAGE_DEFAULT; td.BindFlags = D3D11_BIND_SHADER_RESOURCE;
    ZeroMemory(&smp, sizeof smp);
    smp.Filter = (f && (f[0] == 'p' || f[0] == 'P')) ? D3D11_FILTER_MIN_MAG_MIP_POINT
                                                     : D3D11_FILTER_MIN_MAG_MIP_LINEAR;
    smp.AddressU = smp.AddressV = smp.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;
    smp.MaxLOD = D3D11_FLOAT32_MAX;
    vsb = compile("vs", "vs_4_0");
    psb = compile("ps", "ps_4_0");
    if (!vsb || !psb || !make_rtv()
        || FAILED(ID3D11Device_CreateTexture2D(s_dev, &td, NULL, &s_frame))
        || FAILED(ID3D11Device_CreateShaderResourceView(s_dev, (ID3D11Resource *)s_frame, NULL, &s_srv))
        || FAILED(ID3D11Device_CreateSamplerState(s_dev, &smp, &s_samp))
        || FAILED(ID3D11Device_CreateVertexShader(s_dev, ID3D10Blob_GetBufferPointer(vsb),
                                                  ID3D10Blob_GetBufferSize(vsb), NULL, &s_vs))
        || FAILED(ID3D11Device_CreatePixelShader(s_dev, ID3D10Blob_GetBufferPointer(psb),
                                                 ID3D10Blob_GetBufferSize(psb), NULL, &s_ps))) {
        fprintf(stderr, "  [D3D] present resources failed; staying on GDI\n");
        if (vsb) ID3D10Blob_Release(vsb);
        if (psb) ID3D10Blob_Release(psb);
        gpu_present_shutdown();
        return 0;
    }
    ID3D10Blob_Release(vsb);
    ID3D10Blob_Release(psb);
    ZeroMemory(&blend, sizeof(blend));
    blend.RenderTarget[0].BlendEnable = TRUE;
    blend.RenderTarget[0].SrcBlend = D3D11_BLEND_SRC_ALPHA;
    blend.RenderTarget[0].DestBlend = D3D11_BLEND_INV_SRC_ALPHA;
    blend.RenderTarget[0].BlendOp = D3D11_BLEND_OP_ADD;
    blend.RenderTarget[0].SrcBlendAlpha = D3D11_BLEND_ONE;
    blend.RenderTarget[0].DestBlendAlpha = D3D11_BLEND_INV_SRC_ALPHA;
    blend.RenderTarget[0].BlendOpAlpha = D3D11_BLEND_OP_ADD;
    blend.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;
    if (SUCCEEDED(ID3D11Device_CreateBlendState(s_dev, &blend, &s_video_blend))) {
        ZeroMemory(&raster, sizeof(raster));
        raster.FillMode = D3D11_FILL_SOLID;
        raster.CullMode = D3D11_CULL_NONE;
        raster.DepthClipEnable = TRUE;
        if (SUCCEEDED(ID3D11Device_CreateRasterizerState(s_dev, &raster, &s_video_raster))) {
            s_video_overlay_pixels = (uint32_t *)calloc((size_t)width * height, sizeof(uint32_t));
            s_pvideo_pixels = (uint32_t *)calloc((size_t)width * height, sizeof(uint32_t));
            if (s_video_overlay_pixels && s_pvideo_pixels) {
                InitializeCriticalSection(&s_video_overlay_lock);
                s_video_overlay_lock_ready = 1;
                s_video_overlay_enabled = 1;
            }
        }
    }
    if (!s_video_overlay_enabled)
        fprintf(stderr, "  [D3D] PVIDEO overlay compositor unavailable; direct video overlay disabled\n");
    fprintf(stderr, "  [D3D] presenting through D3D11 (%ux%u frame, vsync %s, %s filter)\n",
            width, height, s_vsync ? "on" : "off",
            smp.Filter == D3D11_FILTER_MIN_MAG_MIP_POINT ? "point" : "linear");
    return 1;
}

/* Returns 0 when nothing was shown: the window is occluded or the display
 * is off, and Present does not wait for vsync then -- the caller must pace
 * itself instead of spinning. The pixels are read before this returns. */
int gpu_present_frame(const uint32_t *pixels)
{
    static const float black[4] = {0, 0, 0, 1};
    D3D11_VIEWPORT vp;
    uint32_t cw, ch;
    float sx, sy;

    if (gpu_present_direct_mode())
        return 0; /* The backend presents independently; this window thread still needs to sleep. */
    if (!s_rtv || !pixels)
        return 0;
    client_size(&cw, &ch);
    if (cw != s_bw || ch != s_bh) {
        /* The window was resized (or went fullscreen): a back buffer its size. */
        ID3D11DeviceContext_OMSetRenderTargets(s_ctx, 0, NULL, NULL);
        ID3D11RenderTargetView_Release(s_rtv);
        s_rtv = NULL;
        if (FAILED(IDXGISwapChain_ResizeBuffers(s_chain, 0, cw, ch, DXGI_FORMAT_UNKNOWN, 0))
            || !make_rtv())
            return 0;
        s_bw = cw; s_bh = ch;
    }
    ID3D11DeviceContext_UpdateSubresource(s_ctx, (ID3D11Resource *)s_frame, 0, NULL,
                                          pixels, s_w * 4, 0);
    ID3D11DeviceContext_OMSetRenderTargets(s_ctx, 1, &s_rtv, NULL);
    ID3D11DeviceContext_ClearRenderTargetView(s_ctx, s_rtv, black);
    /* The largest rectangle of the frame's shape that fits, centred. */
    sx = (float)s_bw / (float)s_w;
    sy = (float)s_bh / (float)s_h;
    vp.Width = (float)s_w * (sx < sy ? sx : sy);
    vp.Height = (float)s_h * (sx < sy ? sx : sy);
    vp.TopLeftX = ((float)s_bw - vp.Width) * 0.5f;
    vp.TopLeftY = ((float)s_bh - vp.Height) * 0.5f;
    vp.MinDepth = 0; vp.MaxDepth = 1;
    ID3D11DeviceContext_RSSetViewports(s_ctx, 1, &vp);
    ID3D11DeviceContext_IASetPrimitiveTopology(s_ctx, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    ID3D11DeviceContext_IASetInputLayout(s_ctx, NULL);
    ID3D11DeviceContext_VSSetShader(s_ctx, s_vs, NULL, 0);
    ID3D11DeviceContext_PSSetShader(s_ctx, s_ps, NULL, 0);
    ID3D11DeviceContext_PSSetShaderResources(s_ctx, 0, 1, &s_srv);
    ID3D11DeviceContext_PSSetSamplers(s_ctx, 0, 1, &s_samp);
    ID3D11DeviceContext_Draw(s_ctx, 3, 0);
    /* Paced only when Present waited for the vblank: with RECOMP_PRESENT_VSYNC=0
     * the caller keeps its own 16 ms sleep instead of spinning a core. */
    return IDXGISwapChain_Present(s_chain, (UINT)s_vsync, 0) == S_OK && s_vsync;
}

int gpu_present_direct_mode(void)
{
    const char *e = getenv("RECOMP_D3D_BACKEND");
    return e && strcmp(e, "direct") == 0;
}

static void capture_direct_pvideo(void)
{
    uint32_t regs[0x1000 / 4];
    unsigned bank;
    int drew = 0;
    size_t count;
    static int snapshot_logged;
    int trace = getenv("RECOMP_PVIDEO_TRACE") && getenv("RECOMP_PVIDEO_TRACE")[0] != '0';
    if (!s_video_overlay_enabled || !s_pvideo_pixels || !s_w || !s_h)
        return;
    if (!nv2a_hook_pvideo_snapshot(regs)) {
        if (trace && !snapshot_logged) {
            fprintf(stderr, "  [PVIDEO-TRACE] direct flip reached capture, but NV2A state snapshot is unavailable\n");
            snapshot_logged = 1;
        }
        gpu_present_set_video_overlay(NULL);
        return;
    }
    if (trace && !snapshot_logged) {
        fprintf(stderr, "  [PVIDEO-TRACE] direct flip reached capture: snapshot available stop=%08X buffer=%08X b0_fmt=%08X b1_fmt=%08X\n",
                regs[NV_PVIDEO_STOP / 4], regs[NV_PVIDEO_BUFFER / 4],
                regs[(NV_PVIDEO_FORMAT + 0 * 4) / 4],
                regs[(NV_PVIDEO_FORMAT + 1 * 4) / 4]);
        snapshot_logged = 1;
    }
    if (getenv("RECOMP_PVIDEO_TRACE") && getenv("RECOMP_PVIDEO_TRACE")[0] != '0' &&
        s_pvideo_state_traces < 32) {
        uint32_t state[11];
        state[0] = regs[NV_PVIDEO_STOP / 4];
        state[1] = regs[NV_PVIDEO_BUFFER / 4];
        state[2] = regs[(NV_PVIDEO_BASE + 0 * 4) / 4];
        state[3] = regs[(NV_PVIDEO_OFFSET + 0 * 4) / 4];
        state[4] = regs[(NV_PVIDEO_FORMAT + 0 * 4) / 4];
        state[5] = regs[(NV_PVIDEO_SIZE_IN + 0 * 4) / 4];
        state[6] = regs[(NV_PVIDEO_SIZE_OUT + 0 * 4) / 4];
        state[7] = regs[(NV_PVIDEO_BASE + 1 * 4) / 4];
        state[8] = regs[(NV_PVIDEO_OFFSET + 1 * 4) / 4];
        state[9] = regs[(NV_PVIDEO_FORMAT + 1 * 4) / 4];
        state[10] = regs[(NV_PVIDEO_SIZE_IN + 1 * 4) / 4];
        if (!s_pvideo_have_state || memcmp(state, s_pvideo_last_state, sizeof(state)) != 0) {
            memcpy(s_pvideo_last_state, state, sizeof(state));
            s_pvideo_have_state = 1;
            fprintf(stderr, "  [PVIDEO-STATE] stop=%08X buffer=%08X b0 base=%08X off=%08X fmt=%08X in=%08X out=%08X b1 base=%08X off=%08X fmt=%08X in=%08X\n",
                    state[0], state[1], state[2], state[3], state[4], state[5],
                    state[6], state[7], state[8], state[9], state[10]);
            s_pvideo_state_traces++;
        }
    }
    if (regs[NV_PVIDEO_STOP / 4] & 1u) {
        free(s_pvideo_source);
        s_pvideo_source = NULL;
        s_pvideo_bytes = 0;
        s_video_overlay_visible = 0;
        gpu_present_set_video_overlay(NULL);
        return;
    }
    count = (size_t)s_w * s_h;
    memset(s_pvideo_pixels, 0, count * sizeof(uint32_t));
    for (bank = 0; bank < 2; ++bank) {
        uint64_t physical, bytes;
        unsigned pitch, height;
        uintptr_t va;
        MEMORY_BASIC_INFORMATION mapping;
        uint8_t *snapshot;
        uint32_t scan_regs[0x1000 / 4];
        if (!(regs[NV_PVIDEO_BUFFER / 4] & (1u << (bank * 4u))))
            continue;
        physical = (uint64_t)regs[(NV_PVIDEO_BASE + bank * 4) / 4] +
                   regs[(NV_PVIDEO_OFFSET + bank * 4) / 4];
        pitch = regs[(NV_PVIDEO_FORMAT + bank * 4) / 4] & NV_PVIDEO_FORMAT_PITCH;
        height = (regs[(NV_PVIDEO_SIZE_IN + bank * 4) / 4] >> 16) & 0x7ff;
        bytes = (uint64_t)pitch * height;
        if (!bytes || physical + bytes > 0x04000000u)
            continue;
        va = (uintptr_t)(0x80000000u + (uint32_t)physical) +
             (uintptr_t)xbox_GetMemoryOffset();
        if (!VirtualQuery((const void *)va, &mapping, sizeof(mapping)) ||
            mapping.State != MEM_COMMIT ||
            (mapping.Protect & (PAGE_GUARD | PAGE_NOACCESS)) ||
            bytes > mapping.RegionSize - (size_t)(va - (uintptr_t)mapping.BaseAddress))
            continue;
        snapshot = (uint8_t *)malloc((size_t)bytes);
        if (!snapshot) continue;
        memcpy(snapshot, (const void *)va, (size_t)bytes);
        memcpy(scan_regs, regs, sizeof(scan_regs));
        scan_regs[(NV_PVIDEO_FORMAT + bank * 4) / 4] &= ~NV_PVIDEO_FORMAT_DISPLAY;
        if (!pvideo_scanout(scan_regs, snapshot, (size_t)bytes, s_pvideo_pixels,
                            s_w, s_h, bank)) {
            free(snapshot);
            continue;
        }
        free(s_pvideo_source);
        s_pvideo_source = snapshot;
        s_pvideo_bytes = (size_t)bytes;
        s_pvideo_bank = bank;
        memcpy(s_pvideo_regs, scan_regs, sizeof(s_pvideo_regs));
        nv2a_hook_pvideo_consume(bank);
        drew = 1;
        if (getenv("RECOMP_PVIDEO_TRACE") && getenv("RECOMP_PVIDEO_TRACE")[0] != '0' &&
            s_pvideo_state_traces < 40) {
            fprintf(stderr, "  [PVIDEO] direct overlay bank=%u pitch=%u height=%u bytes=%llu\n",
                    bank, pitch, height, (unsigned long long)bytes);
            s_pvideo_state_traces++;
        }
    }
    if (!drew && s_pvideo_source && s_pvideo_bytes)
        drew = pvideo_scanout(s_pvideo_regs, s_pvideo_source, s_pvideo_bytes,
                              s_pvideo_pixels, s_w, s_h, s_pvideo_bank);
    s_video_overlay_visible = drew;
    gpu_present_set_video_overlay(drew ? s_pvideo_pixels : NULL);
}

void gpu_present_set_video_overlay(const uint32_t *pixels)
{
    size_t i, count;
    int visible = 0;
    if (!s_video_overlay_enabled || !s_video_overlay_lock_ready || !s_video_overlay_pixels)
        return;
    count = (size_t)s_w * s_h;
    EnterCriticalSection(&s_video_overlay_lock);
    if (pixels) {
        memcpy(s_video_overlay_pixels, pixels, count * sizeof(uint32_t));
        for (i = 0; i < count; ++i) {
            if (pixels[i] >> 24) { visible = 1; break; }
        }
    }
    s_video_overlay_visible = visible;
    LeaveCriticalSection(&s_video_overlay_lock);
}

void gpu_present_draw_video_overlay(void)
{
    static const float blend_factor[4] = {0, 0, 0, 0};
    static unsigned direct_trace_calls;
    ID3D11ShaderResourceView *null_srv = NULL;
    D3D11_VIEWPORT vp;
    UINT sample_mask = 0xFFFFFFFFu;
    int direct = gpu_present_direct_mode();
    int trace = getenv("RECOMP_PVIDEO_TRACE") && getenv("RECOMP_PVIDEO_TRACE")[0] != '0';
    if (direct && trace && direct_trace_calls < 3) {
        direct_trace_calls++;
        fprintf(stderr, "  [PVIDEO-TRACE] direct flip overlay call=%u enabled=%d lock=%d ctx=%p rtv=%p frame=%p srv=%p blend=%p raster=%p\n",
                direct_trace_calls, s_video_overlay_enabled, s_video_overlay_lock_ready,
                (void *)s_ctx, (void *)s_rtv, (void *)s_frame, (void *)s_srv,
                (void *)s_video_blend, (void *)s_video_raster);
    }
    if (!s_video_overlay_enabled || !s_video_overlay_lock_ready ||
        !s_ctx || !s_rtv || !s_frame || !s_srv || !s_video_blend || !s_video_raster)
        return;
    if (direct)
        capture_direct_pvideo();
    EnterCriticalSection(&s_video_overlay_lock);
    if (!s_video_overlay_visible) {
        LeaveCriticalSection(&s_video_overlay_lock);
        return;
    }
    ID3D11DeviceContext_PSSetShaderResources(s_ctx, 0, 1, &null_srv);
    ID3D11DeviceContext_UpdateSubresource(s_ctx, (ID3D11Resource *)s_frame, 0, NULL,
                                          s_video_overlay_pixels, s_w * 4, 0);
    ID3D11DeviceContext_OMSetRenderTargets(s_ctx, 1, &s_rtv, NULL);
    vp.TopLeftX = 0; vp.TopLeftY = 0; vp.Width = (float)s_w; vp.Height = (float)s_h;
    vp.MinDepth = 0; vp.MaxDepth = 1;
    ID3D11DeviceContext_RSSetViewports(s_ctx, 1, &vp);
    ID3D11DeviceContext_RSSetState(s_ctx, s_video_raster);
    ID3D11DeviceContext_OMSetBlendState(s_ctx, s_video_blend, blend_factor, sample_mask);
    ID3D11DeviceContext_IASetPrimitiveTopology(s_ctx, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    ID3D11DeviceContext_IASetInputLayout(s_ctx, NULL);
    ID3D11DeviceContext_VSSetShader(s_ctx, s_vs, NULL, 0);
    ID3D11DeviceContext_PSSetShader(s_ctx, s_ps, NULL, 0);
    ID3D11DeviceContext_PSSetShaderResources(s_ctx, 0, 1, &s_srv);
    ID3D11DeviceContext_PSSetSamplers(s_ctx, 0, 1, &s_samp);
    ID3D11DeviceContext_Draw(s_ctx, 3, 0);
    ID3D11DeviceContext_PSSetShaderResources(s_ctx, 0, 1, &null_srv);
    ID3D11DeviceContext_OMSetBlendState(s_ctx, NULL, NULL, sample_mask);
    LeaveCriticalSection(&s_video_overlay_lock);
}

void gpu_present_shutdown(void)
{
    s_video_overlay_enabled = 0;
    if (s_video_overlay_lock_ready) {
        DeleteCriticalSection(&s_video_overlay_lock);
        s_video_overlay_lock_ready = 0;
    }
    free(s_video_overlay_pixels); s_video_overlay_pixels = NULL;
    free(s_pvideo_pixels); s_pvideo_pixels = NULL;
    free(s_pvideo_source); s_pvideo_source = NULL;
    s_pvideo_bytes = 0;
    s_video_overlay_visible = 0;
    if (s_video_raster) { ID3D11RasterizerState_Release(s_video_raster); s_video_raster = NULL; }
    if (s_video_blend) { ID3D11BlendState_Release(s_video_blend); s_video_blend = NULL; }
    if (s_ps)    { ID3D11PixelShader_Release(s_ps);           s_ps = NULL; }
    if (s_vs)    { ID3D11VertexShader_Release(s_vs);          s_vs = NULL; }
    if (s_samp)  { ID3D11SamplerState_Release(s_samp);        s_samp = NULL; }
    if (s_srv)   { ID3D11ShaderResourceView_Release(s_srv);   s_srv = NULL; }
    if (s_frame) { ID3D11Texture2D_Release(s_frame);          s_frame = NULL; }
    if (s_rtv)   { ID3D11RenderTargetView_Release(s_rtv);     s_rtv = NULL; }
    if (s_chain) { IDXGISwapChain_Release(s_chain);           s_chain = NULL; }
    if (s_ctx)   { ID3D11DeviceContext_Release(s_ctx);        s_ctx = NULL; }
    if (s_dev)   { ID3D11Device_Release(s_dev);               s_dev = NULL; }
}

int gpu_present_active(void)
{
    return s_rtv != NULL;
}

int gpu_present_get_d3d11(void **device, void **context, void **swap_chain, void **rtv)
{
    if (!s_dev || !s_ctx || !s_chain || !s_rtv)
        return 0;
    if (device) *device = s_dev;
    if (context) *context = s_ctx;
    if (swap_chain) *swap_chain = s_chain;
    if (rtv) *rtv = s_rtv;
    return 1;
}
#endif
