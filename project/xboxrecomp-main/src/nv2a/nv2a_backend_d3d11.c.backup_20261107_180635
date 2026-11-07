#if defined(_WIN32)
#define COBJMACROS
#include <windows.h>
#include <d3d11.h>
#include <d3dcompiler.h>
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../kernel/nv2a_backend.h"
#include "../d3d/d3d8_internal.h"
#include "../d3d/d3d8_combiners.h"
#include "../input/keyboard.h"
#include "../video/gpu_present.h"
#include "nv2a_backend_d3d11.h"
#include "nv2a_regs.h"

extern ptrdiff_t xbox_GetMemoryOffset(void);

/* First milestone: GPU rasterisation with a readback at flip. Textures,
 * depth/stencil and uncommon blend equations are intentionally left to the
 * CPU fallback until the solid-colour path is verified against the title. */
typedef struct {
    float x, y, z, rhw;
    float color[4];
    float specular[4];
    float tex[4][4];
    float fog;
} D3DVertex;

typedef struct {
    float width, height;
    float tex_width, tex_height;
    float use_texture, combiner_mode, reserved0, reserved1;
    float alpha_test, alpha_func, alpha_ref, reserved2;
} FrameCB;

typedef struct {
    ID3D11Texture2D *texture;
    ID3D11ShaderResourceView *srv;
    uint32_t offset, width, height, pitch, color;
    uint32_t levels, checked_frame;
    uint32_t age;
    uint64_t content_hash;
} D3DTextureCacheEntry;

#define D3D_RENDER_TARGET_CACHE_SIZE 32
typedef struct {
    ID3D11Texture2D *texture;
    ID3D11RenderTargetView *rtv;
    ID3D11ShaderResourceView *srv;
    uint32_t color_va, width, height, pitch, age;
} D3DRenderTargetCacheEntry;

#define D3D_DEPTH_CACHE_SIZE 4
#define D3D_VERTEX_BUFFER_CAPACITY 262144u
typedef struct {
    ID3D11Texture2D *depth;
    ID3D11DepthStencilView *dsv;
    uint32_t width, height;
} D3DDepthCacheEntry;

static ID3D11Device           *s_dev;
static ID3D11DeviceContext    *s_ctx;
static ID3D11Texture2D        *s_color;
static ID3D11RenderTargetView *s_rtv;
static ID3D11Texture2D        *s_readback;
static ID3D11Texture2D        *s_depth;
static ID3D11DepthStencilView *s_dsv;
static ID3D11Buffer           *s_vb;
static uint32_t s_vb_cursor;
static ID3D11Buffer           *s_cb;
static ID3D11Buffer           *s_rcb;
static ID3D11VertexShader     *s_vs;
static ID3D11PixelShader     *s_ps;
static ID3D11InputLayout     *s_layout;
static ID3D11BlendState      *s_blend;
static ID3D11DepthStencilState *s_depth_disabled;
static ID3D11DepthStencilState *s_depth_dynamic;
static ID3D11RasterizerState *s_rasterizer;
static uint32_t s_blend_key[5];
static uint32_t s_depth_key[2];
static uint32_t s_raster_key[3];
static int s_blend_key_valid, s_depth_key_valid, s_raster_key_valid;
static int s_binding_cache_valid;
static ID3D11RenderTargetView *s_bound_rtv;
static ID3D11DepthStencilView *s_bound_dsv;
static ID3D11RasterizerState *s_bound_rasterizer;
static ID3D11BlendState *s_bound_blend;
static ID3D11DepthStencilState *s_bound_depth;
static ID3D11Buffer *s_bound_vb;
static ID3D11InputLayout *s_bound_layout;
static ID3D11VertexShader *s_bound_vs;
static ID3D11PixelShader *s_bound_ps;
static ID3D11Buffer *s_bound_vs_cb;
static ID3D11Buffer *s_bound_ps_cb;
static ID3D11ShaderResourceView *s_bound_srvs[4];
static ID3D11SamplerState *s_bound_samplers[4];
static UINT s_bound_vb_offset;
static UINT s_bound_vb_stride;
static UINT s_bound_viewport_width;
static UINT s_bound_viewport_height;

static void invalidate_binding_cache(void)
{
    s_binding_cache_valid = 0;
    s_bound_rtv = NULL;
    s_bound_dsv = NULL;
    s_bound_rasterizer = NULL;
    s_bound_blend = NULL;
    s_bound_depth = NULL;
    s_bound_vb = NULL;
    s_bound_layout = NULL;
    s_bound_vs = NULL;
    s_bound_ps = NULL;
    s_bound_vs_cb = NULL;
    s_bound_ps_cb = NULL;
    ZeroMemory(s_bound_srvs, sizeof(s_bound_srvs));
    ZeroMemory(s_bound_samplers, sizeof(s_bound_samplers));
    s_bound_vb_offset = 0;
    s_bound_vb_stride = 0;
    s_bound_viewport_width = 0;
    s_bound_viewport_height = 0;
}
static ID3D11Texture2D       *s_tex;
static ID3D11ShaderResourceView *s_srv;
static ID3D11SamplerState     *s_sampler;
static ID3D11SamplerState     *s_shadow_stage_samplers[4];
static uint32_t s_sampler_u, s_sampler_v, s_sampler_filter;
static const char *s_texture_upload_failure;
/* The frontend alternates through more than eight atlases during a menu
 * frame. Keep enough decoded resources resident to avoid upload thrashing;
 * the LRU replacement still bounds memory use. */
/* A race frame asks for 250-odd distinct textures, so 64 slots thrashed: every
 * frame re-decoded about 250 textures out of guest memory and re-uploaded them
 * (35-40 ms of a heavy frame). The array is only pointers; the D3D resources
 * behind it are what cost memory, and RECOMP_D3D_TEXTURE_CACHE caps how many of
 * those stay resident. */
#define D3D_TEXTURE_CACHE_MAX 512
static D3DTextureCacheEntry s_tex_cache[D3D_TEXTURE_CACHE_MAX];
static int s_tex_cache_slots;
static int texture_cache_slots(void)
{
    if (!s_tex_cache_slots) {
        const char *e = getenv("RECOMP_D3D_TEXTURE_CACHE");
        long n = e && *e ? strtol(e, NULL, 10) : 256;
        if (n < 8) n = 8;
        if (n > D3D_TEXTURE_CACHE_MAX) n = D3D_TEXTURE_CACHE_MAX;
        s_tex_cache_slots = (int)n;
        fprintf(stderr, "[D3D11-BACKEND] texture cache slots=%d\n", s_tex_cache_slots);
    }
    return s_tex_cache_slots;
}
static D3DRenderTargetCacheEntry s_render_target_cache[D3D_RENDER_TARGET_CACHE_SIZE];
static D3DDepthCacheEntry s_direct_depth_cache[D3D_DEPTH_CACHE_SIZE];
static ID3D11RenderTargetView *s_backbuffer_rtv;
static uint32_t s_backbuffer_width, s_backbuffer_height;
static uint32_t s_render_target_age, s_render_target_trace_count;
static uint32_t s_render_target_evictions;
static int s_trace_render_targets;
static uint32_t s_active_surface_va;
static uint32_t s_tex_cache_age;
static uint32_t s_dynamic_texture_updates;
static uint32_t s_surface_route_trace_count;
static uint32_t s_sky_texture_route_mask;
static uint32_t s_record_rt_dump_mask;
static uint32_t s_panel_texture_dump_mask;
static uint32_t s_target_texture_dump_mask;
static uint32_t s_shadow_texture_dump_mask;
static uint32_t s_target_texture_dump_offsets[16];
static uint32_t s_target_texture_dump_count;
static int s_target_texture_dump_addresses_loaded;
static int s_sky_texture_trace = -1;
static int s_shadow_bound_texture_dumped;
static int s_perf_trace;
static uint64_t s_perf_draw_ticks, s_perf_present_ticks;
static uint32_t s_perf_report_count;
static uint64_t s_perf_stage_ticks[7];
static uint32_t s_perf_texture_calls, s_perf_texture_rt_hits;
static uint32_t s_perf_texture_cache_hits, s_perf_texture_cache_misses;
static uint32_t s_perf_texture_hash_calls, s_perf_texture_refreshes;
static uint32_t s_perf_texture_dynamic_decodes, s_perf_texture_full_decodes;
static uint32_t s_perf_vertex_count;
static LARGE_INTEGER s_perf_qpc_frequency;
static LARGE_INTEGER s_perf_last_present_qpc;
static uint32_t s_width, s_height, s_pitch;
static uint32_t s_color_va;
static uint32_t s_tex_offset, s_tex_width, s_tex_height, s_tex_pitch, s_tex_color;
static uint32_t s_draw_count;
static uint32_t s_max_draws;
static uint32_t s_callback_count;
static int s_combiner_logged;
static int s_alpha_logged;
static int s_depth_logged;
static uint32_t s_depth_batches;
static uint32_t s_frame_count;
static uint32_t s_frame_callbacks;
static uint32_t s_batch_trace_samples;
static int s_batch_trace = -1;
static int s_sun_trace = -1;
static uint32_t s_sun_trace_samples;
static int s_panel_trace = -1;
static uint32_t s_panel_trace_samples;
static uint32_t s_records_trace_samples;
static int s_panel_frame_dump_done;
static int s_panel_frame_capture_requested;
static int s_probe;
static int s_present_once;
static int s_continuous;
static int s_present_pending;
static int s_frame_limited;
static int s_active;
static int s_direct;
static IDXGISwapChain *s_swap_chain;
static int s_draw_entry_logged;
static int s_trace;
static int s_first_batch_traced;
static int s_raw_texture;
static int s_bypass_combiner;
static uint32_t s_combiner_trace_hashes[32];
static uint32_t s_combiner_trace_count;
static int s_texture_hash_trace = -1;
static int s_texture_hash_probe_logged;
static uint32_t s_texture_hash_probe_calls;
static uint64_t s_texture_hash_probe_ticks;
static LARGE_INTEGER s_texture_hash_qpc_frequency;
/* Unattended benchmarking and visual capture.
 *
 * RECOMP_D3D_FRAME_DUMP=<prefix> writes the presented backbuffer to
 * <prefix>%05u.bmp every RECOMP_D3D_FRAME_DUMP_EVERY frames (default 60), and
 * RECOMP_D3D_FPS_REPORT=<seconds> prints wall-clock frame pacing. The window's
 * own FPS field and the pushbuffer's [GPU] fps are both measured against CPU
 * time, which says nothing about how long a frame took on the wall; a run
 * nobody is watching needs the wall number to be comparable across builds.
 *
 * The images matter as much: the framebuffer window follows guest memory,
 * which the direct backend does not write, so its dumps are blank. Only the
 * backbuffer shows what the renderer actually drew. */
static const char *s_fb_dump_prefix;
static uint32_t s_fb_dump_every;
static uint32_t s_fb_dump_seq;
static int s_fps_report;
static LARGE_INTEGER s_fps_qpc_frequency;
static LARGE_INTEGER s_fps_last_qpc;
static uint32_t s_fps_frames, s_fps_draws;
static double s_fps_elapsed_ms;
static uint32_t s_fps_frame_ms[600];
static uint32_t s_fps_frame_ms_len;

static int batch_trace_enabled(void)
{
    if (s_batch_trace < 0) {
        const char *e = getenv("RECOMP_D3D_BATCH_TRACE");
        s_batch_trace = e && e[0] ? atoi(e) : 0;
        if (s_batch_trace < 0)
            s_batch_trace = 0;
    }
    return s_batch_trace;
}

static int sun_trace_enabled(void)
{
    if (s_sun_trace < 0) {
        const char *e = getenv("RECOMP_D3D_SUN_TRACE");
        s_sun_trace = e && e[0] && e[0] != '0';
    }
    return s_sun_trace;
}

static int sun_trace_active(void)
{
    const char *e = getenv("RECOMP_D3D_SUN_TRACE_ALWAYS");
    return e && e[0] && e[0] != '0';
}

/* The compatibility GetAsyncKeyState stub is always zero in this host path. */
static int diagnostic_f12_down(void)
{
    return xbox_FramebufferKeyDown(XBOX_VK_F12);
}

static int panel_trace_enabled(void)
{
    const char *value;
    if (s_panel_trace < 0) {
        value = getenv("RECOMP_D3D_PANEL_TRACE");
        s_panel_trace = value && value[0] && value[0] != '0';
    }
    return s_panel_trace;
}

static uint64_t panel_texture_hash(const Nv2aTexture *texture)
{
    uint32_t i;
    if (!texture)
        return 0;
    for (i = 0; i < texture_cache_slots(); i++) {
        const D3DTextureCacheEntry *entry = &s_tex_cache[i];
        if (entry->texture && entry->offset == texture->offset &&
            entry->width == texture->width && entry->height == texture->height &&
            entry->pitch == texture->pitch && entry->color == texture->color &&
            entry->levels == texture->levels)
            return entry->content_hash;
    }
    return 0;
}

static int texture_hash_trace_enabled(void)
{
    const char *value;
    if (s_texture_hash_trace < 0) {
        value = getenv("RECOMP_D3D_TEXTURE_HASH_TRACE");
        s_texture_hash_trace =
            (value && value[0] && value[0] != '0' &&
             QueryPerformanceFrequency(&s_texture_hash_qpc_frequency) &&
             s_texture_hash_qpc_frequency.QuadPart > 0) ? 1 : 0;
    }
    return s_texture_hash_trace;
}

static int sky_texture_trace_enabled(void)
{
    const char *value;
    if (s_sky_texture_trace < 0) {
        value = getenv("RECOMP_D3D_TRACE_TEXTURE");
        s_sky_texture_trace = value && value[0] && value[0] != '0';
    }
    return s_sky_texture_trace;
}

static void perf_stage_record(uint32_t stage, LARGE_INTEGER *previous)
{
    LARGE_INTEGER now;
    if (stage >= 7 || !previous)
        return;
    QueryPerformanceCounter(&now);
    if (now.QuadPart >= previous->QuadPart)
        s_perf_stage_ticks[stage] += (uint64_t)(now.QuadPart - previous->QuadPart);
    *previous = now;
}

static D3D11_BLEND d3d_blend_factor(uint32_t f)
{
    switch (f) {
    case 0x0: return D3D11_BLEND_ZERO;
    case 0x1: return D3D11_BLEND_ONE;
    case 0x300: return D3D11_BLEND_SRC_COLOR;
    case 0x301: return D3D11_BLEND_INV_SRC_COLOR;
    case 0x302: return D3D11_BLEND_SRC_ALPHA;
    case 0x303: return D3D11_BLEND_INV_SRC_ALPHA;
    case 0x304: return D3D11_BLEND_DEST_ALPHA;
    case 0x305: return D3D11_BLEND_INV_DEST_ALPHA;
    case 0x306: return D3D11_BLEND_DEST_COLOR;
    case 0x307: return D3D11_BLEND_INV_DEST_COLOR;
    case 0x308: return D3D11_BLEND_SRC_ALPHA_SAT;
    default: return D3D11_BLEND_ONE;
    }
}

static D3D11_COMPARISON_FUNC d3d_compare_func(uint32_t f)
{
    switch (f) {
    case 0x200: return D3D11_COMPARISON_NEVER;
    case 0x201: return D3D11_COMPARISON_LESS;
    case 0x202: return D3D11_COMPARISON_EQUAL;
    case 0x203: return D3D11_COMPARISON_LESS_EQUAL;
    case 0x204: return D3D11_COMPARISON_GREATER;
    case 0x205: return D3D11_COMPARISON_NOT_EQUAL;
    case 0x206: return D3D11_COMPARISON_GREATER_EQUAL;
    case 0x207: return D3D11_COMPARISON_ALWAYS;
    default: return D3D11_COMPARISON_ALWAYS;
    }
}

static D3D11_BLEND_OP d3d_blend_op(uint32_t op)
{
    switch (op) {
    case 0x800A: return D3D11_BLEND_OP_SUBTRACT;
    case 0x800B: return D3D11_BLEND_OP_REV_SUBTRACT;
    case 0x8007: return D3D11_BLEND_OP_MIN;
    case 0x8008: return D3D11_BLEND_OP_MAX;
    default: return D3D11_BLEND_OP_ADD;
    }
}

static D3D11_TEXTURE_ADDRESS_MODE d3d_address_mode(uint32_t mode)
{
    switch (mode) {
    case 1: return D3D11_TEXTURE_ADDRESS_WRAP;
    case 2: return D3D11_TEXTURE_ADDRESS_MIRROR;
    case 3: return D3D11_TEXTURE_ADDRESS_CLAMP;
    case 4: return D3D11_TEXTURE_ADDRESS_BORDER;
    default: return D3D11_TEXTURE_ADDRESS_CLAMP;
    }
}

static float d3d_depth_value(float z)
{
    /* Fixed-function batches arrive with normalized window depth. Vertex
     * programs convert their viewport depth to the Xbox integer Z range
     * before the backend callback; ATV uses the Z24 path. */
    if (z > 1.0f)
        z /= 16777215.0f;
    if (z < 0.0f) return 0.0f;
    if (z > 1.0f) return 1.0f;
    return z;
}

static int update_sampler(const Nv2aTexture *t)
{
    D3D11_SAMPLER_DESC sampler;
    HRESULT hr;
    uint32_t u, v, mag, min;
    int linear;

    if (!t || !s_dev) return 0;
    u = t->addr_u; v = t->addr_v;
    mag = (t->filter >> 24) & 0xF;
    min = (t->filter >> 16) & 0xFF;
    linear = mag == 2 || min == 2 || min == 4 || min == 6;
    if (s_sampler && s_sampler_u == u && s_sampler_v == v &&
        s_sampler_filter == (uint32_t)linear) return 1;
    if (s_sampler) { ID3D11SamplerState_Release(s_sampler); s_sampler = NULL; }
    ZeroMemory(&sampler, sizeof(sampler));
    sampler.Filter = linear ? D3D11_FILTER_MIN_MAG_LINEAR_MIP_POINT
                             : D3D11_FILTER_MIN_MAG_MIP_POINT;
    sampler.AddressU = d3d_address_mode(u);
    sampler.AddressV = d3d_address_mode(v);
    sampler.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;
    sampler.BorderColor[0] = sampler.BorderColor[1] = sampler.BorderColor[2] = 0.0f;
    sampler.BorderColor[3] = 0.0f;
    sampler.MaxLOD = D3D11_FLOAT32_MAX;
    hr = ID3D11Device_CreateSamplerState(s_dev, &sampler, &s_sampler);
    if (FAILED(hr)) {
        s_texture_upload_failure = "sampler-create";
        return 0;
    }
    s_sampler_u = u; s_sampler_v = v; s_sampler_filter = (uint32_t)linear;
    if (s_trace)
        fprintf(stderr, "[D3D11-BACKEND] sampler address_u=%u address_v=%u filter=%s\n",
                u, v, linear ? "linear" : "point");
    return 1;
}

static void trace_shadow_card_candidate(const Nv2aSurface *surface,
                                        const Nv2aBatch *batch,
                                        const Nv2aTexture *tex0,
                                        const Nv2aTexture *tex1)
{
    static int enabled = -1;
    static uint32_t total, last_frame = UINT32_MAX, frame_logs;
    const char *env;
    uint32_t i, frame;
    float xmin, xmax, ymin, ymax, zmin, zmax;
    float umin[2], umax[2], vmin[2], vmax[2];

    if (enabled < 0) {
        env = getenv("RECOMP_D3D_SHADOW_CARD_TRACE");
        enabled = env && env[0] && env[0] != '0';
    }
    if (!enabled || !diagnostic_f12_down() || !surface ||
        surface->width != 640 || surface->height != 480 || !batch ||
        !batch->vertices || batch->count < 3 || batch->count > 12 ||
        !batch->state || batch->state->blend_enable ||
        !batch->state->alpha_test_enable || !tex0 || !tex1 ||
        tex0->color != 0x06 || tex1->color != 0x0B ||
        batch->vertices[0].diffuse != 0xFF808080)
        return;

    frame = s_frame_count + 1u;
    if (frame != last_frame) {
        last_frame = frame;
        frame_logs = 0;
    }
    if (total >= 64u || frame_logs >= 16u)
        return;

    xmin = xmax = batch->vertices[0].x;
    ymin = ymax = batch->vertices[0].y;
    zmin = zmax = batch->vertices[0].z;
    umin[0] = umax[0] = batch->vertices[0].tex[0][0];
    vmin[0] = vmax[0] = batch->vertices[0].tex[0][1];
    umin[1] = umax[1] = batch->vertices[0].tex[1][0];
    vmin[1] = vmax[1] = batch->vertices[0].tex[1][1];
    for (i = 1; i < batch->count; ++i) {
        const Nv2aVertex *v = &batch->vertices[i];
        if (v->x < xmin) xmin = v->x;
        if (v->x > xmax) xmax = v->x;
        if (v->y < ymin) ymin = v->y;
        if (v->y > ymax) ymax = v->y;
        if (v->z < zmin) zmin = v->z;
        if (v->z > zmax) zmax = v->z;
        if (v->tex[0][0] < umin[0]) umin[0] = v->tex[0][0];
        if (v->tex[0][0] > umax[0]) umax[0] = v->tex[0][0];
        if (v->tex[0][1] < vmin[0]) vmin[0] = v->tex[0][1];
        if (v->tex[0][1] > vmax[0]) vmax[0] = v->tex[0][1];
        if (v->tex[1][0] < umin[1]) umin[1] = v->tex[1][0];
        if (v->tex[1][0] > umax[1]) umax[1] = v->tex[1][0];
        if (v->tex[1][1] < vmin[1]) vmin[1] = v->tex[1][1];
        if (v->tex[1][1] > vmax[1]) vmax[1] = v->tex[1][1];
    }
    if (ymax < 145.0f || ymin > 465.0f || xmax < 0.0f || xmin > 640.0f)
        return;

    fprintf(stderr,
        "[D3D11-SHADOW-CANDIDATE] n=%u frame=%u draw=%u verts=%u "
        "xy=%.2f..%.2f,%.2f..%.2f z=%.5f..%.5f "
        "tex0=0x%08X/fmt%02X/%ux%u addr=%u/%u filter=0x%08X "
        "uv0=%.4f..%.4f,%.4f..%.4f "
        "tex1=0x%08X/fmt%02X/%ux%u addr1=%u/%u filter1=0x%08X "
        "uv1=%.4f..%.4f,%.4f..%.4f "
        "blend=%u alpha=%u/0x%X/%u depth=%u/0x%X/write%u "
        "diffuse0=0x%08X comb=0x%08X expected_tex1=%u\n",
        total + 1u, frame, s_draw_count, batch->count,
        xmin, xmax, ymin, ymax, zmin, zmax,
        tex0->offset, tex0->color & 0xFFu, tex0->width, tex0->height,
        tex0->addr_u, tex0->addr_v, tex0->filter,
        umin[0], umax[0], vmin[0], vmax[0],
        tex1->offset, tex1->color & 0xFFu, tex1->width, tex1->height,
        tex1->addr_u, tex1->addr_v, tex1->filter,
        umin[1], umax[1], vmin[1], vmax[1],
        batch->state->blend_enable, batch->state->alpha_test_enable,
        batch->state->alpha_func, batch->state->alpha_ref,
        batch->state->depth_test_enable, batch->state->depth_func,
        batch->state->depth_write, batch->vertices[0].diffuse,
        batch->combiner ? batch->combiner->control : 0u,
        tex1->offset == 0x83552000u);
    total++;
    frame_logs++;
}

static int is_shadow_geometry_candidate(const Nv2aSurface *surface,
                                         const Nv2aBatch *batch,
                                         const Nv2aTexture *tex0,
                                         const Nv2aTexture *tex1)
{
    uint32_t i;
    float xmin, xmax, ymin, ymax, rhwmin, rhwmax;
    if (!surface || surface->width != 640u || surface->height != 480u ||
        !batch || !batch->vertices || batch->count < 3u || batch->count > 384u ||
        !tex0 || tex0->color != 0x06u || tex0->width != 256u || tex0->height != 256u ||
        !tex1 || tex1->color != 0x0Bu || tex1->width != 128u || tex1->height != 128u)
        return 0;
    xmin = xmax = batch->vertices[0].x;
    ymin = ymax = batch->vertices[0].y;
    rhwmin = rhwmax = batch->vertices[0].rhw;
    for (i = 1; i < batch->count; ++i) {
        const Nv2aVertex *v = &batch->vertices[i];
        if (v->x < xmin) xmin = v->x;
        if (v->x > xmax) xmax = v->x;
        if (v->y < ymin) ymin = v->y;
        if (v->y > ymax) ymax = v->y;
        if (v->rhw < rhwmin) rhwmin = v->rhw;
        if (v->rhw > rhwmax) rhwmax = v->rhw;
    }
    return !(ymax < 145.0f || ymin > 465.0f || xmax < 0.0f ||
             xmin > 640.0f || rhwmin >= 0.95f);
}

static void trace_shadow_tile_candidate(const Nv2aSurface *surface,
                                        const Nv2aBatch *batch,
                                        const Nv2aTexture *tex0,
                                        const Nv2aTexture *tex1)
{
    static int enabled = -1;
    static int auto_trace = -1;
    static int geom_trace = -1;
    static uint32_t total, last_frame = UINT32_MAX, frame_samples;
    static uint32_t total_limit = 128u, frame_limit = 32u;
    const char *env, *auto_env, *geom_env;
    const Nv2aTexture *tex2, *tex3;
    uint32_t i, frame;
    float umin[4], umax[4], vmin[4], vmax[4];
    float xmin, xmax, ymin, ymax, zmin, zmax, rhwmin, rhwmax;
    char uv_list[4][256];
    size_t used[4] = { 0, 0, 0, 0 };

    if (enabled < 0) {
        env = getenv("RECOMP_D3D_SHADOW_TILE_TRACE");
        enabled = env && env[0] && env[0] != '0';
        if (env && env[0] == '2') {
            total_limit = 512u;
            frame_limit = 128u;
        }
    }
    if (auto_trace < 0) {
        auto_env = getenv("RECOMP_D3D_SHADOW_AUTO_TRACE");
        auto_trace = auto_env && auto_env[0] && auto_env[0] != '0';
        if (auto_trace) {
            total_limit = 96u;
            frame_limit = 12u;
        }
    }
    if (geom_trace < 0) {
        geom_env = getenv("RECOMP_D3D_SHADOW_GEOM_TRACE");
        geom_trace = geom_env && geom_env[0] && geom_env[0] != '0';
    }
    if ((!enabled && !auto_trace) || (!auto_trace && !diagnostic_f12_down()) || !surface ||
        surface->width != 640 || surface->height != 480 || !batch ||
        !batch->vertices || batch->count < 3 || batch->count > 384u)
        return;

    frame = s_frame_count + 1u;
    if (frame != last_frame) {
        last_frame = frame;
        frame_samples = 0;
    }
    if (total >= total_limit || frame_samples >= frame_limit)
        return;

    if (auto_trace && (!tex0 || tex0->color != 0x06 ||
                       tex0->width != 256u || tex0->height != 256u ||
                       !tex1 || tex1->color != 0x0B ||
                       tex1->width != 128u || tex1->height != 128u))
        return;

    for (i = 0; i < 4; ++i) {
        umin[i] = umax[i] = batch->vertices[0].tex[i][0];
        vmin[i] = vmax[i] = batch->vertices[0].tex[i][1];
        uv_list[i][0] = '\0';
    }
    xmin = xmax = batch->vertices[0].x;
    ymin = ymax = batch->vertices[0].y;
    zmin = zmax = batch->vertices[0].z;
    rhwmin = rhwmax = batch->vertices[0].rhw;
    for (i = 0; i < batch->count; ++i) {
        const Nv2aVertex *v = &batch->vertices[i];
        uint32_t stage;
        if (v->z < zmin) zmin = v->z;
        if (v->z > zmax) zmax = v->z;
        if (v->rhw < rhwmin) rhwmin = v->rhw;
        if (v->rhw > rhwmax) rhwmax = v->rhw;
        if (v->x < xmin) xmin = v->x;
        if (v->x > xmax) xmax = v->x;
        if (v->y < ymin) ymin = v->y;
        if (v->y > ymax) ymax = v->y;
        for (stage = 0; stage < 4; ++stage) {
            if (v->tex[stage][0] < umin[stage]) umin[stage] = v->tex[stage][0];
            if (v->tex[stage][0] > umax[stage]) umax[stage] = v->tex[stage][0];
            if (v->tex[stage][1] < vmin[stage]) vmin[stage] = v->tex[stage][1];
            if (v->tex[stage][1] > vmax[stage]) vmax[stage] = v->tex[stage][1];
        }
        if (i < 4u) {
            for (stage = 0; stage < 4; ++stage) {
                int n = snprintf(uv_list[stage] + used[stage],
                                 sizeof(uv_list[stage]) - used[stage],
                                 "%s%.3f,%.3f", i ? ";" : "",
                                 v->tex[stage][0], v->tex[stage][1]);
                if (n > 0 && (size_t)n < sizeof(uv_list[stage]) - used[stage])
                    used[stage] += (size_t)n;
            }
        }
    }
    if (ymax < 145.0f || ymin > 465.0f || xmax < 0.0f || xmin > 640.0f ||
        rhwmin >= 0.95f)
        return;

    tex2 = batch->textures[2];
    tex3 = batch->textures[3];
    fprintf(stderr,
        "[D3D11-SCENE-UV] n=%u frame=%u draw=%u verts=%u target=0x%08X "
        "xy=%.2f..%.2f,%.2f..%.2f z=%.5f..%.5f rhw=%.5f..%.5f "
        "blend=%u src=0x%X dst=0x%X alpha=%u/0x%X/%u "
        "depth=%u/0x%X/write%u tex0=0x%08X/fmt%02X/%ux%u addr=%u/%u "
        "filter=0x%08X uv0=%.4f..%.4f,%.4f..%.4f uv0v={%s} "
        "tex1=0x%08X/fmt%02X/%ux%u addr1=%u/%u filter1=0x%08X "
        "uv1=%.4f..%.4f,%.4f..%.4f uv1v={%s} "
        "tex2=0x%08X/fmt%02X addr2=%u/%u uv2=%.4f..%.4f,%.4f..%.4f uv2v={%s} "
        "tex3=0x%08X/fmt%02X addr3=%u/%u uv3=%.4f..%.4f,%.4f..%.4f uv3v={%s} "
        "diffuse0=0x%08X comb=0x%08X\n",
        total + 1u, frame, s_draw_count, batch->count, surface->color_va,
        xmin, xmax, ymin, ymax, zmin, zmax, rhwmin, rhwmax,
        batch->state ? batch->state->blend_enable : 0u,
        batch->state ? batch->state->blend_src : 0u,
        batch->state ? batch->state->blend_dst : 0u,
        batch->state ? batch->state->alpha_test_enable : 0u,
        batch->state ? batch->state->alpha_func : 0u,
        batch->state ? batch->state->alpha_ref : 0u,
        batch->state ? batch->state->depth_test_enable : 0u,
        batch->state ? batch->state->depth_func : 0u,
        batch->state ? batch->state->depth_write : 0u,
        tex0 ? tex0->offset : 0u, tex0 ? tex0->color & 0xFFu : 0u,
        tex0 ? tex0->width : 0u, tex0 ? tex0->height : 0u,
        tex0 ? tex0->addr_u : 0u, tex0 ? tex0->addr_v : 0u,
        tex0 ? tex0->filter : 0u,
        umin[0], umax[0], vmin[0], vmax[0], uv_list[0],
        tex1 ? tex1->offset : 0u, tex1 ? tex1->color & 0xFFu : 0u,
        tex1 ? tex1->width : 0u, tex1 ? tex1->height : 0u,
        tex1 ? tex1->addr_u : 0u, tex1 ? tex1->addr_v : 0u,
        tex1 ? tex1->filter : 0u,
        umin[1], umax[1], vmin[1], vmax[1], uv_list[1],
        tex2 ? tex2->offset : 0u, tex2 ? tex2->color & 0xFFu : 0u,
        tex2 ? tex2->addr_u : 0u, tex2 ? tex2->addr_v : 0u,
        umin[2], umax[2], vmin[2], vmax[2], uv_list[2],
        tex3 ? tex3->offset : 0u, tex3 ? tex3->color & 0xFFu : 0u,
        tex3 ? tex3->addr_u : 0u, tex3 ? tex3->addr_v : 0u,
        umin[3], umax[3], vmin[3], vmax[3], uv_list[3],
        batch->vertices[0].diffuse,
        batch->combiner ? batch->combiner->control : 0u);
    if (geom_trace) {
        uint32_t geom_count = batch->count < 16u ? batch->count : 16u;
        for (i = 0; i < geom_count; ++i) {
            const Nv2aVertex *v = &batch->vertices[i];
            fprintf(stderr,
                "[D3D11-SHADOW-GEOM] n=%u frame=%u draw=%u vi=%u "
                "xy=%.3f,%.3f z=%.6f rhw=%.6f "
                "tc0=%.6f,%.6f,%.6f,%.6f diffuse=0x%08X\n",
                total + 1u, frame, s_draw_count, i, v->x, v->y, v->z, v->rhw,
                v->tex[0][0], v->tex[0][1], v->tex[0][2], v->tex[0][3],
                v->diffuse);
        }
    }
    total++;
    frame_samples++;
}

static const char s_hlsl[] =
    "cbuffer Frame : register(b0) { float2 size; float2 texSize; float useTexture; float combinerMode; float2 unused; float alphaTest; float alphaFunc; float alphaRef; float debugRaw; };\n"
    "Texture2D tex0 : register(t0); Texture2D tex1 : register(t1); Texture2D tex2 : register(t2); Texture2D tex3 : register(t3);\n"
    "SamplerState samp0 : register(s0); SamplerState samp1 : register(s1); SamplerState samp2 : register(s2); SamplerState samp3 : register(s3);\n"
    "struct VSIn { float3 pos : POSITION; float rhw : TEXCOORD4;"
                 " float4 color0 : COLOR0; float4 color1 : COLOR1;"
                 " float4 tc0 : TEXCOORD0; float4 tc1 : TEXCOORD1;"
                 " float4 tc2 : TEXCOORD2; float4 tc3 : TEXCOORD3; float fog : TEXCOORD5; };\n"
    "struct VSOut { float4 pos : SV_Position; float4 color0 : COLOR0; float4 color1 : COLOR1;"
                   " float3 tc0 : TEXCOORD0; float3 tc1 : TEXCOORD1;"
    " float3 tc2 : TEXCOORD2; float3 tc3 : TEXCOORD3; float fog : TEXCOORD5; };\n"
    "VSOut vs(VSIn i) { VSOut o; float2 p = i.pos.xy;"
    " float w = abs(i.rhw) > 1.0e-20 ? rcp(i.rhw) : 1.0;"
    " float2 ndc = float2(p.x / size.x * 2.0 - 1.0,"
    " 1.0 - p.y / size.y * 2.0);"
    " o.pos = float4(ndc * w, i.pos.z * w, w);"
    " o.color0 = i.color0; o.color1 = i.color1;"
    " o.tc0 = i.tc0.xyz; o.tc1 = i.tc1.xyz; o.tc2 = i.tc2.xyz; o.tc3 = i.tc3.xyz; o.fog = i.fog; return o; }\n"
    "float4 ps(VSOut i) : SV_Target {\n"
    "  float4 outColor = i.color0;\n"
    "  if (useTexture > 0.5) {\n"
    "    if (unused.x > 0.5 && (i.tc0.x < 0.0 || i.tc0.x > 1.0 || i.tc0.y < 0.0 || i.tc0.y > 1.0)) discard;\n"
    "    float4 t = tex0.Sample(samp0, i.tc0.xy);\n"
    "    if (debugRaw > 0.5) return t;\n"
    "    outColor = combinerMode > 0.5 ? saturate(float4(t.rgb * i.color0.rgb * 2.0, t.a * i.color0.a)) : t * i.color0;\n"
    "  }\n"
    "  if (alphaTest > 0.5) {\n"
    "    int f = (int)alphaFunc; bool alphaPass = true;\n"
    "    if (f == 0x0200) alphaPass = false;\n"
    "    else if (f == 0x0201) alphaPass = outColor.a < alphaRef;\n"
    "    else if (f == 0x0202) alphaPass = abs(outColor.a - alphaRef) <= (1.0 / 255.0);\n"
    "    else if (f == 0x0203) alphaPass = outColor.a <= alphaRef;\n"
    "    else if (f == 0x0204) alphaPass = outColor.a > alphaRef;\n"
    "    else if (f == 0x0205) alphaPass = abs(outColor.a - alphaRef) > (1.0 / 255.0);\n"
    "    else if (f == 0x0206) alphaPass = outColor.a >= alphaRef;\n"
    "    if (!alphaPass) discard;\n"
    "  }\n"
    "  return outColor;\n"
    "}\n";

static void release_all(void)
{
    if (s_ctx) ID3D11DeviceContext_ClearState(s_ctx);
    if (s_blend) ID3D11BlendState_Release(s_blend);
    if (s_rasterizer) ID3D11RasterizerState_Release(s_rasterizer);
    if (s_sampler) ID3D11SamplerState_Release(s_sampler);
    {
        uint32_t i;
        for (i = 0; i < texture_cache_slots(); i++) {
            if (s_tex_cache[i].srv) ID3D11ShaderResourceView_Release(s_tex_cache[i].srv);
            if (s_tex_cache[i].texture) ID3D11Texture2D_Release(s_tex_cache[i].texture);
            ZeroMemory(&s_tex_cache[i], sizeof(s_tex_cache[i]));
        }
        for (i = 0; i < D3D_RENDER_TARGET_CACHE_SIZE; i++) {
            if (s_render_target_cache[i].srv)
                ID3D11ShaderResourceView_Release(s_render_target_cache[i].srv);
            if (s_render_target_cache[i].rtv)
                ID3D11RenderTargetView_Release(s_render_target_cache[i].rtv);
            if (s_render_target_cache[i].texture)
                ID3D11Texture2D_Release(s_render_target_cache[i].texture);
            ZeroMemory(&s_render_target_cache[i], sizeof(s_render_target_cache[i]));
        }
        for (i = 0; i < D3D_DEPTH_CACHE_SIZE; i++) {
            if (s_direct_depth_cache[i].dsv)
                ID3D11DepthStencilView_Release(s_direct_depth_cache[i].dsv);
            if (s_direct_depth_cache[i].depth)
                ID3D11Texture2D_Release(s_direct_depth_cache[i].depth);
            ZeroMemory(&s_direct_depth_cache[i], sizeof(s_direct_depth_cache[i]));
        }
    }
    if (s_depth_disabled) ID3D11DepthStencilState_Release(s_depth_disabled);
    if (s_depth_dynamic) ID3D11DepthStencilState_Release(s_depth_dynamic);
    if (s_layout) ID3D11InputLayout_Release(s_layout);
    if (s_vs) ID3D11VertexShader_Release(s_vs);
    if (s_ps) ID3D11PixelShader_Release(s_ps);
    if (s_rcb) ID3D11Buffer_Release(s_rcb);
    if (s_cb) ID3D11Buffer_Release(s_cb);
    if (s_vb) ID3D11Buffer_Release(s_vb);
    if (!s_direct) {
        if (s_dsv) ID3D11DepthStencilView_Release(s_dsv);
        if (s_depth) ID3D11Texture2D_Release(s_depth);
    }
    if (s_readback) ID3D11Texture2D_Release(s_readback);
    if (s_rtv && !s_direct) ID3D11RenderTargetView_Release(s_rtv);
    if (s_color) ID3D11Texture2D_Release(s_color);
    if (s_ctx && !s_direct) ID3D11DeviceContext_Release(s_ctx);
    if (s_dev && !s_direct) ID3D11Device_Release(s_dev);
    s_blend = NULL; s_sampler = NULL; s_srv = NULL; s_tex = NULL;
    s_depth_disabled = NULL; s_depth_dynamic = NULL; s_layout = NULL;
    s_vs = NULL; s_ps = NULL; s_rcb = NULL; s_cb = NULL; s_vb = NULL;
    s_dsv = NULL; s_depth = NULL; s_readback = NULL;
    s_rasterizer = NULL;
    s_rtv = NULL; s_backbuffer_rtv = NULL; s_color = NULL;
    s_ctx = NULL; s_dev = NULL; s_swap_chain = NULL;
    s_backbuffer_width = s_backbuffer_height = 0;
    s_render_target_age = s_render_target_trace_count = s_render_target_evictions = 0;
    s_record_rt_dump_mask = 0;
    s_active_surface_va = 0;
    s_width = s_height = s_pitch = s_color_va = 0;
    s_tex_offset = s_tex_width = s_tex_height = s_tex_pitch = s_tex_color = 0;
    s_tex_cache_age = 0;
    s_draw_count = s_frame_count = s_callback_count = 0;
    s_frame_callbacks = s_batch_trace_samples = 0;
    s_batch_trace = -1;
    s_panel_trace = -1;
    s_panel_trace_samples = 0;
    s_records_trace_samples = 0;
    s_panel_frame_dump_done = 0;
    s_panel_frame_capture_requested = 0;
    s_probe = s_present_once = s_continuous = s_present_pending = s_frame_limited = 0;
    s_direct = 0;
    s_blend_key_valid = s_depth_key_valid = s_raster_key_valid = 0;
    s_depth_logged = 0;
    s_depth_batches = 0;
    s_sampler_u = s_sampler_v = s_sampler_filter = 0;
}

static ID3DBlob *compile_shader(const char *entry, const char *target)
{
    ID3DBlob *code = NULL, *errors = NULL;
    HRESULT hr = D3DCompile(s_hlsl, sizeof(s_hlsl) - 1, "nv2a_backend_d3d11",
                            NULL, NULL, entry, target, 0, 0, &code, &errors);
    if (FAILED(hr)) {
        fprintf(stderr, "[D3D11-BACKEND] shader %s failed: %s\n", entry,
                errors ? (const char *)ID3D10Blob_GetBufferPointer(errors) : "unknown");
        if (errors) ID3D10Blob_Release(errors);
        return NULL;
    }
    if (errors) ID3D10Blob_Release(errors);
    return code;
}

static int init_gpu_objects(void)
{
    D3D11_INPUT_ELEMENT_DESC input[] = {
        {"POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0,  D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"COLOR",    0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 16, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 4, DXGI_FORMAT_R32_FLOAT,       0, 12, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"COLOR",    1, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 32, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 48, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 1, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 64, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 2, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 80, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 3, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 96, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 5, DXGI_FORMAT_R32_FLOAT, 0, 112, D3D11_INPUT_PER_VERTEX_DATA, 0}
    };
    ID3DBlob *vsb, *psb;
    HRESULT hr;

    if (!s_dev && s_direct) {
        s_dev = d3d8_GetD3D11Device();
        s_ctx = d3d8_GetD3D11Context();
        s_swap_chain = d3d8_GetSwapChain();
        if (!s_dev || !s_ctx || !s_swap_chain) {
            void *device = NULL, *context = NULL, *swap_chain = NULL, *rtv = NULL;
            if (gpu_present_get_d3d11(&device, &context, &swap_chain, &rtv)) {
                s_dev = (ID3D11Device *)device;
                s_ctx = (ID3D11DeviceContext *)context;
                s_swap_chain = (IDXGISwapChain *)swap_chain;
                s_rtv = (ID3D11RenderTargetView *)rtv;
                fprintf(stderr, "[D3D11-BACKEND] acquired shared gpu_present device\n");
            }
        }
    }
    if (!s_dev || !s_ctx || !s_swap_chain && s_direct)
        return 0;
    if (s_direct && s_rtv && !s_backbuffer_rtv)
        s_backbuffer_rtv = s_rtv;
    if (s_direct && s_swap_chain &&
        (!s_backbuffer_width || !s_backbuffer_height)) {
        DXGI_SWAP_CHAIN_DESC swap_desc;
        if (SUCCEEDED(IDXGISwapChain_GetDesc(s_swap_chain, &swap_desc))) {
            s_backbuffer_width = swap_desc.BufferDesc.Width;
            s_backbuffer_height = swap_desc.BufferDesc.Height;
        }
    }
    if (s_vs && s_ps && s_layout)
        return 1;

    vsb = compile_shader("vs", "vs_4_0");
    psb = compile_shader("ps", "ps_4_0");
    if (!vsb || !psb) {
        if (vsb) ID3D10Blob_Release(vsb);
        if (psb) ID3D10Blob_Release(psb);
        return 0;
    }
    hr = ID3D11Device_CreateVertexShader(s_dev, ID3D10Blob_GetBufferPointer(vsb),
                                         ID3D10Blob_GetBufferSize(vsb), NULL, &s_vs);
    if (SUCCEEDED(hr))
        hr = ID3D11Device_CreatePixelShader(s_dev, ID3D10Blob_GetBufferPointer(psb),
                                            ID3D10Blob_GetBufferSize(psb), NULL, &s_ps);
    if (SUCCEEDED(hr))
        hr = ID3D11Device_CreateInputLayout(s_dev, input,
                                            (UINT)(sizeof(input) / sizeof(input[0])),
                                            ID3D10Blob_GetBufferPointer(vsb),
                                            ID3D10Blob_GetBufferSize(vsb), &s_layout);
    ID3D10Blob_Release(vsb);
    ID3D10Blob_Release(psb);
    if (FAILED(hr)) {
        if (s_layout) { ID3D11InputLayout_Release(s_layout); s_layout = NULL; }
        if (s_ps) { ID3D11PixelShader_Release(s_ps); s_ps = NULL; }
        if (s_vs) { ID3D11VertexShader_Release(s_vs); s_vs = NULL; }
        return 0;
    }
    fprintf(stderr, "[D3D11-BACKEND] GPU device acquired lazily\n");
    return 1;
}

static int create_target(uint32_t width, uint32_t height)
{
    D3D11_TEXTURE2D_DESC td;
    D3D11_RENDER_TARGET_VIEW_DESC rv;
    D3D11_DEPTH_STENCIL_VIEW_DESC dv;
    D3D11_DEPTH_STENCIL_DESC ds;
    D3D11_BUFFER_DESC bd;
    D3D11_SUBRESOURCE_DATA init;
    D3D11_SAMPLER_DESC sampler;
    HRESULT hr;
    uint32_t i;

    if (!s_dev || !width || !height || width > 4096 || height > 4096)
        return 0;
    if (s_width == width && s_height == height && s_rtv)
        return 1;

    if (s_ctx) {
        ID3D11DeviceContext_OMSetRenderTargets(s_ctx, 0, NULL, NULL);
        invalidate_binding_cache();
    }
    if (!s_direct) {
        if (s_rtv) ID3D11RenderTargetView_Release(s_rtv);
        s_rtv = NULL;
        if (s_color) { ID3D11Texture2D_Release(s_color); s_color = NULL; }
        if (s_readback) { ID3D11Texture2D_Release(s_readback); s_readback = NULL; }
    }
    if (!s_direct) {
        if (s_dsv) { ID3D11DepthStencilView_Release(s_dsv); s_dsv = NULL; }
        if (s_depth) { ID3D11Texture2D_Release(s_depth); s_depth = NULL; }
    } else {
        s_dsv = NULL; s_depth = NULL;
        for (i = 0; i < D3D_DEPTH_CACHE_SIZE; i++) {
            if (s_direct_depth_cache[i].dsv &&
                s_direct_depth_cache[i].width == width &&
                s_direct_depth_cache[i].height == height) {
                s_dsv = s_direct_depth_cache[i].dsv;
                s_depth = s_direct_depth_cache[i].depth;
                break;
            }
        }
    }

    if (s_direct && !s_rtv) {
        s_rtv = d3d8_GetDefaultRTV();
        s_swap_chain = d3d8_GetSwapChain();
        if (!s_rtv || !s_swap_chain)
            return 0;
        s_backbuffer_rtv = s_rtv;
        {
            DXGI_SWAP_CHAIN_DESC swap_desc;
            if (SUCCEEDED(IDXGISwapChain_GetDesc(s_swap_chain, &swap_desc))) {
                s_backbuffer_width = swap_desc.BufferDesc.Width;
                s_backbuffer_height = swap_desc.BufferDesc.Height;
            }
        }
    }

    ZeroMemory(&td, sizeof(td));
    td.Width = width; td.Height = height; td.MipLevels = 1; td.ArraySize = 1;
    td.Format = DXGI_FORMAT_B8G8R8A8_UNORM; td.SampleDesc.Count = 1;
    if (!s_direct) {
        td.Usage = D3D11_USAGE_DEFAULT; td.BindFlags = D3D11_BIND_RENDER_TARGET;
        hr = ID3D11Device_CreateTexture2D(s_dev, &td, NULL, &s_color);
        if (FAILED(hr)) return 0;
        ZeroMemory(&rv, sizeof(rv)); rv.Format = td.Format; rv.ViewDimension = D3D11_RTV_DIMENSION_TEXTURE2D;
        hr = ID3D11Device_CreateRenderTargetView(s_dev, (ID3D11Resource *)s_color, &rv, &s_rtv);
        if (FAILED(hr)) return 0;
    }

    if (!s_dsv || !s_depth) {
        td.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;
        td.BindFlags = D3D11_BIND_DEPTH_STENCIL;
        hr = ID3D11Device_CreateTexture2D(s_dev, &td, NULL, &s_depth);
        if (FAILED(hr)) return 0;
        ZeroMemory(&dv, sizeof(dv)); dv.Format = td.Format; dv.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;
        hr = ID3D11Device_CreateDepthStencilView(s_dev, (ID3D11Resource *)s_depth, &dv, &s_dsv);
        if (FAILED(hr)) {
            ID3D11Texture2D_Release(s_depth); s_depth = NULL;
            return 0;
        }
        if (s_direct) {
            for (i = 0; i < D3D_DEPTH_CACHE_SIZE; i++)
                if (!s_direct_depth_cache[i].dsv) break;
            if (i == D3D_DEPTH_CACHE_SIZE) {
                ID3D11DepthStencilView_Release(s_dsv); s_dsv = NULL;
                ID3D11Texture2D_Release(s_depth); s_depth = NULL;
                return 0;
            }
            s_direct_depth_cache[i].width = width;
            s_direct_depth_cache[i].height = height;
            s_direct_depth_cache[i].depth = s_depth;
            s_direct_depth_cache[i].dsv = s_dsv;
        }
    }

    if (!s_direct) {
        td.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
        td.Usage = D3D11_USAGE_STAGING; td.BindFlags = 0;
        td.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
        hr = ID3D11Device_CreateTexture2D(s_dev, &td, NULL, &s_readback);
        if (FAILED(hr)) return 0;
    }

    if (!s_depth_disabled) {
        ZeroMemory(&ds, sizeof(ds));
        ds.DepthEnable = FALSE; ds.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ZERO;
        ds.DepthFunc = D3D11_COMPARISON_ALWAYS;
        hr = ID3D11Device_CreateDepthStencilState(s_dev, &ds, &s_depth_disabled);
        if (FAILED(hr)) return 0;
    }

    if (!s_vb) {
        ZeroMemory(&bd, sizeof(bd));
        bd.Usage = D3D11_USAGE_DYNAMIC; bd.ByteWidth = sizeof(D3DVertex) * D3D_VERTEX_BUFFER_CAPACITY;
        bd.BindFlags = D3D11_BIND_VERTEX_BUFFER; bd.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
        hr = ID3D11Device_CreateBuffer(s_dev, &bd, NULL, &s_vb);
        if (FAILED(hr)) return 0;
    }

    if (!s_cb) {
        ZeroMemory(&bd, sizeof(bd));
        bd.Usage = D3D11_USAGE_DEFAULT; bd.ByteWidth = sizeof(FrameCB);
        bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
        ZeroMemory(&init, sizeof(init));
        {
            FrameCB cb = { (float)width, (float)height };
            init.pSysMem = &cb;
            hr = ID3D11Device_CreateBuffer(s_dev, &bd, &init, &s_cb);
        }
        if (FAILED(hr)) return 0;
    }

    if (!s_rcb) {
        ZeroMemory(&bd, sizeof(bd));
        bd.Usage = D3D11_USAGE_DYNAMIC;
        bd.ByteWidth = (UINT)((sizeof(NV2APSConstants) + 15u) & ~15u);
        bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
        bd.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
        hr = ID3D11Device_CreateBuffer(s_dev, &bd, NULL, &s_rcb);
        if (FAILED(hr)) return 0;
    }

    if (!s_sampler) {
        ZeroMemory(&sampler, sizeof(sampler));
        sampler.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;
        sampler.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;
        sampler.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;
        sampler.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;
        sampler.MaxLOD = D3D11_FLOAT32_MAX;
        hr = ID3D11Device_CreateSamplerState(s_dev, &sampler, &s_sampler);
        if (FAILED(hr)) return 0;
    }

    s_width = width; s_height = height;
    return 1;
}

static int select_direct_surface(const Nv2aSurface *surface)
{
    D3DRenderTargetCacheEntry *entry = NULL;
    ID3D11ShaderResourceView *null_srvs[4] = { NULL, NULL, NULL, NULL };
    D3D11_TEXTURE2D_DESC td;
    D3D11_RENDER_TARGET_VIEW_DESC rvd;
    D3D11_SHADER_RESOURCE_VIEW_DESC svd;
    ID3D11Texture2D *texture = NULL;
    ID3D11RenderTargetView *rtv = NULL;
    ID3D11ShaderResourceView *srv = NULL;
    DXGI_SWAP_CHAIN_DESC swap_desc;
    HRESULT hr;
    uint32_t i, slot = D3D_RENDER_TARGET_CACHE_SIZE, oldest_age = UINT32_MAX;
    static uint32_t trace_512_routes;

    if (!s_direct)
        return 1;
    if (!surface)
        return 0;
    if (!s_backbuffer_rtv) {
        if (s_rtv)
            s_backbuffer_rtv = s_rtv;
        else {
            s_backbuffer_rtv = d3d8_GetDefaultRTV();
            s_swap_chain = d3d8_GetSwapChain();
        }
    }
    if (!s_backbuffer_rtv || !s_swap_chain)
        return 0;
    if (!s_backbuffer_width || !s_backbuffer_height) {
        if (SUCCEEDED(IDXGISwapChain_GetDesc(s_swap_chain, &swap_desc))) {
            s_backbuffer_width = swap_desc.BufferDesc.Width;
            s_backbuffer_height = swap_desc.BufferDesc.Height;
        }
        if (!s_backbuffer_width || !s_backbuffer_height) {
            s_backbuffer_width = 640;
            s_backbuffer_height = 480;
        }
    }

    if (s_trace_render_targets && surface->width == 512 &&
        surface->height == 512 && trace_512_routes < 32u) {
        const char *route =
            (!surface->color_va ||
             (surface->width == s_backbuffer_width &&
              surface->height == s_backbuffer_height) ||
             (surface->width >= s_backbuffer_width &&
              surface->height >= s_backbuffer_height)) ? "backbuffer" : "offscreen-cache";
        fprintf(stderr,
            "[D3D11-RT-512] guest=0x%08X surface=%ux%u pitch=%u route=%s frame=%u\n",
            surface->color_va, surface->width, surface->height,
            surface->pitch, route, s_frame_count);
        trace_512_routes++;
    }
    if (!surface->color_va ||
        (surface->width == s_backbuffer_width && surface->height == s_backbuffer_height) ||
        (surface->width >= s_backbuffer_width && surface->height >= s_backbuffer_height)) {
        s_rtv = s_backbuffer_rtv;
        if (s_trace_render_targets && s_surface_route_trace_count < 32u &&
            (s_surface_route_trace_count == 0u ||
             s_active_surface_va != surface->color_va)) {
            const char *reason = !surface->color_va ? "zero-color-va" :
                (surface->width == s_backbuffer_width &&
                 surface->height == s_backbuffer_height) ?
                    "backbuffer-dimensions" : "at-or-above-backbuffer";
            fprintf(stderr,
                "[D3D11-RT-ROUTE] guest=0x%08X surface=%ux%u pitch=%u backbuffer=%ux%u route=backbuffer reason=%s\n",
                surface->color_va, surface->width, surface->height,
                surface->pitch, s_backbuffer_width, s_backbuffer_height, reason);
            s_surface_route_trace_count++;
        }
    } else {
        for (i = 0; i < D3D_RENDER_TARGET_CACHE_SIZE; ++i) {
            D3DRenderTargetCacheEntry *candidate = &s_render_target_cache[i];
            if (candidate->rtv && candidate->color_va == surface->color_va &&
                candidate->width == surface->width && candidate->height == surface->height &&
                candidate->pitch == surface->pitch) {
                entry = candidate;
                break;
            }
            if (!candidate->rtv && slot == D3D_RENDER_TARGET_CACHE_SIZE)
                slot = i;
        }
        if (!entry) {
            if (slot == D3D_RENDER_TARGET_CACHE_SIZE) {
                /* The title can use more temporary render targets than fit in
                 * the cache during track loading. Evict the least-recently
                 * used target instead of silently dropping the whole batch
                 * (which made the level sky and other passes black). The
                 * bindings are cleared first because the candidate may be the
                 * target from the preceding callback. */
                for (i = 0; i < D3D_RENDER_TARGET_CACHE_SIZE; ++i) {
                    D3DRenderTargetCacheEntry *candidate = &s_render_target_cache[i];
                    if (candidate->age < oldest_age) {
                        oldest_age = candidate->age;
                        slot = i;
                    }
                }
                if (slot == D3D_RENDER_TARGET_CACHE_SIZE)
                    return 0;
                ID3D11DeviceContext_PSSetShaderResources(s_ctx, 0, 4, null_srvs);
                ID3D11DeviceContext_OMSetRenderTargets(s_ctx, 0, NULL, NULL);
                invalidate_binding_cache();
                entry = &s_render_target_cache[slot];
                if (entry->srv) ID3D11ShaderResourceView_Release(entry->srv);
                if (entry->rtv) ID3D11RenderTargetView_Release(entry->rtv);
                if (entry->texture) ID3D11Texture2D_Release(entry->texture);
                ZeroMemory(entry, sizeof(*entry));
                if ((s_trace || s_trace_render_targets) && s_render_target_evictions < 8)
                    fprintf(stderr, "[D3D11-BACKEND] evicting direct offscreen target slot=%u count=%u\n",
                            slot, s_render_target_evictions + 1);
                s_render_target_evictions++;
            }
            ZeroMemory(&td, sizeof(td));
            td.Width = surface->width; td.Height = surface->height;
            td.MipLevels = 1; td.ArraySize = 1;
            td.Format = DXGI_FORMAT_B8G8R8A8_UNORM; td.SampleDesc.Count = 1;
            td.Usage = D3D11_USAGE_DEFAULT;
            td.BindFlags = D3D11_BIND_RENDER_TARGET | D3D11_BIND_SHADER_RESOURCE;
            hr = ID3D11Device_CreateTexture2D(s_dev, &td, NULL, &texture);
            if (FAILED(hr))
                return 0;
            ZeroMemory(&rvd, sizeof(rvd));
            rvd.Format = td.Format; rvd.ViewDimension = D3D11_RTV_DIMENSION_TEXTURE2D;
            hr = ID3D11Device_CreateRenderTargetView(s_dev, (ID3D11Resource *)texture,
                                                      &rvd, &rtv);
            if (SUCCEEDED(hr)) {
                ZeroMemory(&svd, sizeof(svd));
                svd.Format = td.Format; svd.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
                svd.Texture2D.MipLevels = 1;
                hr = ID3D11Device_CreateShaderResourceView(s_dev,
                    (ID3D11Resource *)texture, &svd, &srv);
            }
            if (FAILED(hr)) {
                if (srv) ID3D11ShaderResourceView_Release(srv);
                if (rtv) ID3D11RenderTargetView_Release(rtv);
                ID3D11Texture2D_Release(texture);
                return 0;
            }
            entry = &s_render_target_cache[slot];
            entry->texture = texture; entry->rtv = rtv; entry->srv = srv;
            entry->color_va = surface->color_va;
            entry->width = surface->width; entry->height = surface->height;
            entry->pitch = surface->pitch;
            {
                const float clear_color[4] = { 0.0f, 0.0f, 0.0f, 0.0f };
                ID3D11DeviceContext_ClearRenderTargetView(s_ctx, entry->rtv, clear_color);
            }
            if (s_trace_render_targets &&
                s_render_target_trace_count < D3D_RENDER_TARGET_CACHE_SIZE) {
                fprintf(stderr, "[D3D11-BACKEND] direct offscreen target slot=%u guest=0x%08X %ux%u pitch=%u\n",
                        slot, surface->color_va, surface->width, surface->height,
                        surface->pitch);
                s_render_target_trace_count++;
            }
        }
        entry->age = ++s_render_target_age;
        s_rtv = entry->rtv;
    }

    if (s_active_surface_va != surface->color_va) {
        if (s_ctx) {
            ID3D11DeviceContext_PSSetShaderResources(s_ctx, 0, 4, null_srvs);
            ID3D11DeviceContext_OMSetRenderTargets(s_ctx, 0, NULL, NULL);
            invalidate_binding_cache();
        }
        s_active_surface_va = surface->color_va;
    }
    return s_rtv != NULL;
}

static uint64_t decoded_texture_sample_hash(const uint32_t *pixels,
                                           uint32_t width, uint32_t height)
{
    uint64_t hash = 1469598103934665603ull;
    uint32_t gx, gy, byte;
    if (!pixels || !width || !height)
        return 0;
    for (gy = 0; gy < 16; ++gy) {
        uint32_t y = (uint32_t)(((uint64_t)gy * (height - 1)) / 15);
        for (gx = 0; gx < 16; ++gx) {
            uint32_t x = (uint32_t)(((uint64_t)gx * (width - 1)) / 15);
            uint32_t pixel = pixels[(size_t)y * width + x];
            for (byte = 0; byte < 4; ++byte) {
                hash ^= (pixel >> (byte * 8)) & 0xFFu;
                hash *= 1099511628211ull;
            }
        }
    }
    return hash;
}

static int panel_texture_dump_index(uint32_t offset)
{
    switch (offset) {
    case 0x8251C000: return 0;
    case 0x82505000: return 1;
    case 0x824B8000: return 2;
    case 0x824D1000: return 3;
    default: return -1;
    }
}

/* Optional comma/semicolon-delimited guest offsets; at most 16 are accepted. */
static int target_texture_dump_index(uint32_t offset)
{
    const char *value;
    const char *cursor;
    uint32_t i;

    if (!s_target_texture_dump_addresses_loaded) {
        s_target_texture_dump_addresses_loaded = 1;
        value = getenv("RECOMP_D3D_TEXTURE_DUMP_ADDRS");
        cursor = value;
        while (cursor && *cursor && s_target_texture_dump_count < 16) {
            char *end;
            unsigned long parsed;
            while (*cursor == ',' || *cursor == ';' || *cursor == ' ' ||
                   *cursor == '\t' || *cursor == '\r' || *cursor == '\n')
                cursor++;
            if (!*cursor)
                break;
            parsed = strtoul(cursor, &end, 0);
            if (end == cursor) {
                while (*cursor && *cursor != ',' && *cursor != ';' &&
                       *cursor != ' ' && *cursor != '\t' &&
                       *cursor != '\r' && *cursor != '\n')
                    cursor++;
                continue;
            }
            if (parsed <= 0xFFFFFFFFul)
                s_target_texture_dump_offsets[s_target_texture_dump_count++] =
                    (uint32_t)parsed;
            cursor = end;
        }
    }

    for (i = 0; i < s_target_texture_dump_count; ++i) {
        if (s_target_texture_dump_offsets[i] == offset)
            return (int)i;
    }
    return -1;
}

static void dump_panel_texture_once(const Nv2aTexture *texture,
                                    const uint32_t *pixels)
{
    const char *panel_prefix = getenv("RECOMP_D3D_PANEL_TEXTURE_DUMP_PREFIX");
    const char *target_prefix = getenv("RECOMP_D3D_TEXTURE_DUMP_PREFIX");
    const char *shadow_prefix = getenv("RECOMP_D3D_SHADOW_TEXTURE_DUMP_PREFIX");
    const char *prefix = NULL;
    FILE *file, *alpha_file;
    char path[512], alpha_path[512];
    uint8_t header[54], padding_bytes[3] = {0, 0, 0};
    uint32_t index, bit, row_bytes, pad, image_bytes, file_bytes;
    uint32_t x, y, alpha_zero = 0, alpha_partial = 0, alpha_opaque = 0;
    uint32_t near_white = 0, near_black = 0;
    uint32_t r_min = 255, r_max = 0, g_min = 255, g_max = 0;
    uint32_t b_min = 255, b_max = 0, a_min = 255, a_max = 0;
    uint64_t r_sum = 0, g_sum = 0, b_sum = 0, a_sum = 0, count;
    uint32_t *dump_mask = NULL;
    uint64_t hash;
    const char *log_tag = "[D3D11-PANEL-TEX]";
    int write_failed = 0;
    int panel_index, target_index;

    if (!texture || !pixels)
        return;

    if (shadow_prefix && *shadow_prefix &&
        (texture->color & 0xFFu) == 0x06u &&
        texture->width == 256u && texture->height == 256u) {
        index = 0;
        prefix = shadow_prefix;
        dump_mask = &s_shadow_texture_dump_mask;
        log_tag = "[D3D11-SHADOW-TEX]";
    }
    if (!prefix && panel_trace_enabled() && panel_prefix && *panel_prefix) {
        panel_index = panel_texture_dump_index(texture->offset);
        if (panel_index >= 0) {
            index = (uint32_t)panel_index;
            prefix = panel_prefix;
            dump_mask = &s_panel_texture_dump_mask;
        }
    }
    if (!prefix && target_prefix && *target_prefix) {
        target_index = target_texture_dump_index(texture->offset);
        if (target_index >= 0) {
            index = (uint32_t)target_index;
            prefix = target_prefix;
            dump_mask = &s_target_texture_dump_mask;
            log_tag = "[D3D11-TEXTURE-DUMP]";
        }
    }
    if (!prefix || !dump_mask || !texture->width || !texture->height ||
        texture->width > 2048 || texture->height > 2048)
        return;
    bit = 1u << index;
    if (*dump_mask & bit)
        return;

    row_bytes = texture->width * 3u;
    pad = (4u - (row_bytes & 3u)) & 3u;
    image_bytes = (row_bytes + pad) * texture->height;
    file_bytes = 54u + image_bytes;
    snprintf(path, sizeof(path), "%stex_%08X.bmp", prefix, texture->offset);
    snprintf(alpha_path, sizeof(alpha_path), "%stex_%08X_alpha.bmp",
             prefix, texture->offset);
    file = fopen(path, "wb");
    if (!file) {
        fprintf(stderr, "%s open failed guest=0x%08X path=%s\n",
                log_tag, texture->offset, path);
        return;
    }
    alpha_file = fopen(alpha_path, "wb");
    if (!alpha_file) {
        fclose(file);
        remove(path);
        fprintf(stderr, "%s alpha open failed guest=0x%08X path=%s\n",
                log_tag, texture->offset, alpha_path);
        return;
    }

    ZeroMemory(header, sizeof(header));
    header[0] = 'B'; header[1] = 'M';
    memcpy(header + 2, &file_bytes, 4);
    header[10] = 54; header[14] = 40;
    memcpy(header + 18, &texture->width, 4);
    memcpy(header + 22, &texture->height, 4);
    header[26] = 1; header[28] = 24;
    memcpy(header + 34, &image_bytes, 4);
    if (fwrite(header, 1, sizeof(header), file) != sizeof(header))
        write_failed = 1;
    if (fwrite(header, 1, sizeof(header), alpha_file) != sizeof(header))
        write_failed = 1;

    for (y = 0; y < texture->height; ++y) {
        uint32_t source_y = texture->height - 1u - y;
        for (x = 0; x < texture->width; ++x) {
            uint32_t pixel = pixels[(size_t)source_y * texture->width + x];
            uint32_t b = pixel & 0xFFu;
            uint32_t g = (pixel >> 8) & 0xFFu;
            uint32_t r = (pixel >> 16) & 0xFFu;
            uint32_t a = (pixel >> 24) & 0xFFu;
            uint8_t bgr[3] = {(uint8_t)b, (uint8_t)g, (uint8_t)r};
            uint8_t alpha_bgr[3] = {(uint8_t)a, (uint8_t)a, (uint8_t)a};
            if (fwrite(bgr, 1, sizeof(bgr), file) != sizeof(bgr))
                write_failed = 1;
            if (fwrite(alpha_bgr, 1, sizeof(alpha_bgr), alpha_file) !=
                sizeof(alpha_bgr))
                write_failed = 1;
            if (a == 0) alpha_zero++;
            else if (a == 255) alpha_opaque++;
            else alpha_partial++;
            if (r >= 248 && g >= 248 && b >= 248) near_white++;
            if (r <= 7 && g <= 7 && b <= 7) near_black++;
            if (r < r_min) r_min = r;
            if (r > r_max) r_max = r;
            if (g < g_min) g_min = g;
            if (g > g_max) g_max = g;
            if (b < b_min) b_min = b;
            if (b > b_max) b_max = b;
            if (a < a_min) a_min = a;
            if (a > a_max) a_max = a;
            r_sum += r; g_sum += g; b_sum += b; a_sum += a;
        }
        if (pad && fwrite(padding_bytes, 1, pad, file) != pad)
            write_failed = 1;
        if (pad && fwrite(padding_bytes, 1, pad, alpha_file) != pad)
            write_failed = 1;
    }
    if (fclose(file) != 0)
        write_failed = 1;
    if (fclose(alpha_file) != 0)
        write_failed = 1;
    if (write_failed) {
        remove(path);
        remove(alpha_path);
        fprintf(stderr, "%s write failed guest=0x%08X path=%s\n",
                log_tag, texture->offset, path);
        return;
    }

    count = (uint64_t)texture->width * texture->height;
    hash = decoded_texture_sample_hash(pixels, texture->width, texture->height);
    *dump_mask |= bit;
    fprintf(stderr,
        "%s guest=0x%08X size=%ux%u fmt=0x%02X hash=%016llX alpha=%u/%u/%u range=%u..%u white=%u black=%u rgb=%u..%u/%u..%u/%u..%u avg=%llu/%llu/%llu file=%s alpha_file=%s\n",
        log_tag, texture->offset, texture->width, texture->height, texture->color & 0xFF,
        (unsigned long long)hash, alpha_zero, alpha_partial, alpha_opaque,
        a_min, a_max, near_white, near_black,
        r_min, r_max, g_min, g_max, b_min, b_max,
        (unsigned long long)(r_sum / count),
        (unsigned long long)(g_sum / count),
        (unsigned long long)(b_sum / count), path, alpha_path);
}

static int record_rt_index(uint32_t color_va)
{
    switch (color_va) {
    case 0x82741000: return 0;
    case 0x82721000: return 1;
    case 0x82781000: return 2;
    case 0x82761000: return 3;
    case 0x827C1000: return 4;
    case 0x827A1000: return 5;
    case 0x82809000: return 6;
    default: return -1;
    }
}

static void dump_record_rt_once(uint32_t slot,
                                const D3DRenderTargetCacheEntry *entry,
                                int shadow_bridge,
                                int sampled_texture);

static void dump_record_rt_once(uint32_t slot,
                                const D3DRenderTargetCacheEntry *entry,
                                int shadow_bridge,
                                int sampled_texture)
{
    const char *prefix = shadow_bridge ?
        getenv("RECOMP_D3D_SHADOW_TEXTURE_DUMP_PREFIX") :
        getenv("RECOMP_D3D_RECORD_RT_DUMP_PREFIX");
    const char *dump_tag = sampled_texture ? "[D3D11-SHADOW-SAMPLED-TEX-DUMP]" :
        (shadow_bridge ? "[D3D11-SHADOW-RT-DUMP]" : "[D3D11-RECORD-RT-DUMP]");
    D3D11_TEXTURE2D_DESC desc;
    D3D11_MAPPED_SUBRESOURCE mapped;
    ID3D11Texture2D *staging = NULL;
    HRESULT hr;
    FILE *file, *alpha_file = NULL;
    char path[512], alpha_path[512];
    uint8_t header[54], zero[3] = {0, 0, 0}, alpha_gray[3];
    int index;
    uint32_t bit, row_bytes, pad, image_bytes, file_bytes;
    uint32_t x, y, nonzero_pixels = 0, nonzero_bytes = 0, or_byte = 0;

    if (!entry || !entry->texture || !prefix || !*prefix ||
        !s_dev || !s_ctx)
        return;
    index = record_rt_index(entry->color_va);
    if (sampled_texture) {
        if (s_shadow_bound_texture_dumped)
            return;
        s_shadow_bound_texture_dumped = 1;
        bit = 0;
    } else if (shadow_bridge) {
        /* Keep one dump per distinct guest surface. The first format-0x06
         * 256x256 target is not necessarily the projected rider mask. */
        bit = 1u << ((entry->color_va >> 12) & 31u);
        if (s_shadow_texture_dump_mask & bit)
            return;
    } else {
        if (index < 0 || index >= 7)
            return;
        bit = 1u << (uint32_t)index;
        if (s_record_rt_dump_mask & bit)
            return;
    }
    if (!entry->width || !entry->height ||
        entry->width > 2048 || entry->height > 2048) {
        if (shadow_bridge) s_shadow_texture_dump_mask |= bit;
    else s_record_rt_dump_mask |= bit;
        return;
    }

    ZeroMemory(&desc, sizeof(desc));
    if (sampled_texture) {
        ID3D11Texture2D_GetDesc(entry->texture, &desc);
        if (desc.Width != entry->width || desc.Height != entry->height ||
            desc.SampleDesc.Count != 1) {
            fprintf(stderr, "%s unsupported D3D resource guest=0x%08X size=%ux%u format=%u samples=%u\n",
                    dump_tag, entry->color_va, desc.Width, desc.Height,
                    (unsigned)desc.Format, desc.SampleDesc.Count);
            return;
        }
    } else {
        desc.Width = entry->width;
        desc.Height = entry->height;
        desc.MipLevels = 1;
        desc.ArraySize = 1;
        desc.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
        desc.SampleDesc.Count = 1;
    }
    desc.Usage = D3D11_USAGE_STAGING;
    desc.BindFlags = 0;
    desc.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
    desc.MiscFlags = 0;
    hr = ID3D11Device_CreateTexture2D(s_dev, &desc, NULL, &staging);
    if (FAILED(hr)) {
        fprintf(stderr, "%s create failed guest=0x%08X hr=0x%08X\n",
                dump_tag, entry->color_va, (unsigned)hr);
        if (shadow_bridge) s_shadow_texture_dump_mask |= bit;
    else s_record_rt_dump_mask |= bit;
        return;
    }
    ID3D11DeviceContext_CopyResource(s_ctx, (ID3D11Resource *)staging,
                                     (ID3D11Resource *)entry->texture);
    if (FAILED(ID3D11DeviceContext_Map(s_ctx, (ID3D11Resource *)staging, 0,
                                       D3D11_MAP_READ, 0, &mapped))) {
        fprintf(stderr, "%s map failed guest=0x%08X\n",
                dump_tag, entry->color_va);
        ID3D11Texture2D_Release(staging);
        if (shadow_bridge) s_shadow_texture_dump_mask |= bit;
    else s_record_rt_dump_mask |= bit;
        return;
    }

    row_bytes = entry->width * 3u;
    pad = (4u - (row_bytes & 3u)) & 3u;
    image_bytes = (row_bytes + pad) * entry->height;
    file_bytes = 54u + image_bytes;
    if (shadow_bridge) {
        if (sampled_texture)
            snprintf(alpha_path, sizeof(alpha_path), "%ssampled_tex_%08X_stage%u_alpha.bmp",
                     prefix, entry->color_va, slot);
        else
            snprintf(alpha_path, sizeof(alpha_path), "%srt_%08X_slot%u_alpha.bmp",
                     prefix, entry->color_va, slot);
    }
    if (sampled_texture)
        snprintf(path, sizeof(path), "%ssampled_tex_%08X_stage%u.bmp",
                 prefix, entry->color_va, slot);
    else
        snprintf(path, sizeof(path), "%srt_%08X_slot%u.bmp",
                 prefix, entry->color_va, slot);
    file = fopen(path, "wb");
    if (!file) {
        fprintf(stderr, "%s open failed guest=0x%08X path=%s\n",
                dump_tag, entry->color_va, path);
        ID3D11DeviceContext_Unmap(s_ctx, (ID3D11Resource *)staging, 0);
        ID3D11Texture2D_Release(staging);
        if (shadow_bridge) s_shadow_texture_dump_mask |= bit;
        else s_record_rt_dump_mask |= bit;
        return;
    }
    if (shadow_bridge) {
        alpha_file = fopen(alpha_path, "wb");
        if (!alpha_file) {
            fprintf(stderr, sampled_texture ?
                    "[D3D11-SHADOW-SAMPLED-TEX-DUMP-ALPHA] open failed guest=0x%08X path=%s\n" :
                    "[D3D11-SHADOW-RT-DUMP-ALPHA] open failed guest=0x%08X path=%s\n",
                    entry->color_va, alpha_path);
            fclose(file);
            ID3D11DeviceContext_Unmap(s_ctx, (ID3D11Resource *)staging, 0);
            ID3D11Texture2D_Release(staging);
            s_shadow_texture_dump_mask |= bit;
            return;
        }
    }
    ZeroMemory(header, sizeof(header));
    header[0] = 'B'; header[1] = 'M';
    memcpy(header + 2, &file_bytes, 4);
    header[10] = 54; header[14] = 40;
    memcpy(header + 18, &entry->width, 4);
    memcpy(header + 22, &entry->height, 4);
    header[26] = 1; header[28] = 24;
    memcpy(header + 34, &image_bytes, 4);
    fwrite(header, 1, sizeof(header), file);
    if (alpha_file)
        fwrite(header, 1, sizeof(header), alpha_file);
    for (y = 0; y < entry->height; ++y) {
        const uint8_t *row = (const uint8_t *)mapped.pData +
            (size_t)(entry->height - 1u - y) * mapped.RowPitch;
        for (x = 0; x < entry->width; ++x) {
            const uint8_t *pixel = row + (size_t)x * 4u;
            fwrite(pixel, 1, 3, file);
            if (alpha_file) {
                alpha_gray[0] = alpha_gray[1] = alpha_gray[2] = pixel[3];
                fwrite(alpha_gray, 1, sizeof(alpha_gray), alpha_file);
            }
            nonzero_pixels += (pixel[0] | pixel[1] | pixel[2] | pixel[3]) != 0;
            nonzero_bytes += (pixel[0] != 0) + (pixel[1] != 0) +
                             (pixel[2] != 0) + (pixel[3] != 0);
            or_byte |= pixel[0] | pixel[1] | pixel[2] | pixel[3];
        }
        if (pad)
            fwrite(zero, 1, pad, file);
        if (alpha_file && pad)
            fwrite(zero, 1, pad, alpha_file);
    }
    fclose(file);
    if (alpha_file)
        fclose(alpha_file);
    ID3D11DeviceContext_Unmap(s_ctx, (ID3D11Resource *)staging, 0);
    ID3D11Texture2D_Release(staging);
    if (shadow_bridge) s_shadow_texture_dump_mask |= bit;
    else s_record_rt_dump_mask |= bit;
    if (sampled_texture)
        fprintf(stderr, "%s guest=0x%08X stage=%u size=%ux%u nonzero_pixels=%u nonzero_bytes=%u OR=0x%02X file=%s\n",
                dump_tag, entry->color_va, slot, entry->width, entry->height,
                nonzero_pixels, nonzero_bytes, or_byte, path);
    else
        fprintf(stderr, shadow_bridge ?
            "[D3D11-SHADOW-RT-DUMP] guest=0x%08X slot=%u size=%ux%u nonzero_pixels=%u nonzero_bytes=%u OR=0x%02X file=%s\n" :
            "[D3D11-RECORD-RT-DUMP] guest=0x%08X slot=%u size=%ux%u nonzero_pixels=%u nonzero_bytes=%u OR=0x%02X file=%s\n",
            entry->color_va, slot, entry->width, entry->height,
            nonzero_pixels, nonzero_bytes, or_byte, path);
    if (alpha_file)
        fprintf(stderr, sampled_texture ?
                "[D3D11-SHADOW-SAMPLED-TEX-DUMP-ALPHA] guest=0x%08X file=%s\n" :
                "[D3D11-SHADOW-RT-DUMP-ALPHA] guest=0x%08X file=%s\n",
                entry->color_va, alpha_path);
}

static void dump_bound_shadow_texture_once(uint32_t stage,
                                           const Nv2aTexture *texture,
                                           ID3D11Texture2D *resource)
{
    D3DRenderTargetCacheEntry sampled;
    if (!texture || !resource)
        return;
    ZeroMemory(&sampled, sizeof(sampled));
    sampled.texture = resource;
    sampled.color_va = texture->offset;
    sampled.width = texture->width;
    sampled.height = texture->height;
    dump_record_rt_once(stage, &sampled, 1, 1);
}

/* Copy the current backbuffer to a 24-bit BMP. No once-only guard here: the
 * scheduled dump below needs it repeatedly, and the F12 capture wraps it. */
static int dump_backbuffer_bmp(const char *path)
{
    D3D11_TEXTURE2D_DESC source_desc, staging_desc;
    D3D11_MAPPED_SUBRESOURCE mapped;
    ID3D11Resource *resource = NULL;
    ID3D11Texture2D *source, *staging = NULL;
    HRESULT hr;
    FILE *file = NULL;
    char reason[96] = "capture failed";
    uint8_t header[54], padding_bytes[3] = {0, 0, 0};
    uint32_t row_bytes, pad, image_bytes, file_bytes, x, y;
    int mapped_ok = 0, write_failed = 0;

    if (!path || !*path)
        return 0;
    if (!s_dev || !s_ctx || !s_backbuffer_rtv) {
        fprintf(stderr, "[D3D11-PANEL-FRAME] no D3D11 backbuffer is available\n");
        return 0;
    }

    ID3D11RenderTargetView_GetResource(s_backbuffer_rtv, &resource);
    if (!resource) {
        fprintf(stderr, "[D3D11-PANEL-FRAME] backbuffer resource lookup failed\n");
        return 0;
    }
    source = (ID3D11Texture2D *)resource;
    ID3D11Texture2D_GetDesc(source, &source_desc);
    if (!source_desc.Width || !source_desc.Height ||
        source_desc.Width > 4096 || source_desc.Height > 4096 ||
        source_desc.SampleDesc.Count != 1 ||
        (source_desc.Format != DXGI_FORMAT_R8G8B8A8_UNORM &&
         source_desc.Format != DXGI_FORMAT_B8G8R8A8_UNORM)) {
        fprintf(stderr,
            "[D3D11-PANEL-FRAME] unsupported backbuffer %ux%u fmt=%u samples=%u\n",
            source_desc.Width, source_desc.Height, source_desc.Format,
            source_desc.SampleDesc.Count);
        ID3D11Resource_Release(resource);
        return 0;
    }

    staging_desc = source_desc;
    staging_desc.Usage = D3D11_USAGE_STAGING;
    staging_desc.BindFlags = 0;
    staging_desc.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
    staging_desc.MiscFlags = 0;
    hr = ID3D11Device_CreateTexture2D(s_dev, &staging_desc, NULL, &staging);
    if (FAILED(hr)) {
        fprintf(stderr, "[D3D11-PANEL-FRAME] staging texture create failed hr=0x%08X\n",
                (unsigned)hr);
        ID3D11Resource_Release(resource);
        return 0;
    }

    /* Release the backbuffer's output binding before copying it to staging. */
    ID3D11DeviceContext_OMSetRenderTargets(s_ctx, 0, NULL, NULL);
    s_bound_rtv = NULL;
    s_bound_dsv = NULL;
    s_binding_cache_valid = 0;
    ID3D11DeviceContext_CopyResource(s_ctx, (ID3D11Resource *)staging, resource);
    hr = ID3D11DeviceContext_Map(s_ctx, (ID3D11Resource *)staging, 0,
                                 D3D11_MAP_READ, 0, &mapped);
    if (FAILED(hr)) {
        fprintf(stderr, "[D3D11-PANEL-FRAME] staging map failed hr=0x%08X\n",
                (unsigned)hr);
        ID3D11Texture2D_Release(staging);
        ID3D11Resource_Release(resource);
        return 0;
    }
    mapped_ok = 1;

    row_bytes = source_desc.Width * 3u;
    pad = (4u - (row_bytes & 3u)) & 3u;
    image_bytes = (row_bytes + pad) * source_desc.Height;
    file_bytes = 54u + image_bytes;
    file = fopen(path, "wb");
    if (!file) {
        snprintf(reason, sizeof(reason), "open failed");
        write_failed = 1;
    } else {
        ZeroMemory(header, sizeof(header));
        header[0] = 'B'; header[1] = 'M';
        memcpy(header + 2, &file_bytes, 4);
        header[10] = 54; header[14] = 40;
        memcpy(header + 18, &source_desc.Width, 4);
        memcpy(header + 22, &source_desc.Height, 4);
        header[26] = 1; header[28] = 24;
        memcpy(header + 34, &image_bytes, 4);
        if (fwrite(header, 1, sizeof(header), file) != sizeof(header))
            write_failed = 1;
        for (y = 0; y < source_desc.Height; ++y) {
            const uint8_t *row = (const uint8_t *)mapped.pData +
                (size_t)(source_desc.Height - 1u - y) * mapped.RowPitch;
            for (x = 0; x < source_desc.Width; ++x) {
                const uint8_t *pixel = row + (size_t)x * 4u;
                uint8_t bgr[3];
                if (source_desc.Format == DXGI_FORMAT_R8G8B8A8_UNORM) {
                    bgr[0] = pixel[2]; bgr[1] = pixel[1]; bgr[2] = pixel[0];
                } else {
                    bgr[0] = pixel[0]; bgr[1] = pixel[1]; bgr[2] = pixel[2];
                }
                if (fwrite(bgr, 1, sizeof(bgr), file) != sizeof(bgr))
                    write_failed = 1;
            }
            if (pad && fwrite(padding_bytes, 1, pad, file) != pad)
                write_failed = 1;
        }
        if (fclose(file) != 0)
            write_failed = 1;
        file = NULL;
    }

    if (mapped_ok)
        ID3D11DeviceContext_Unmap(s_ctx, (ID3D11Resource *)staging, 0);
    ID3D11Texture2D_Release(staging);
    ID3D11Resource_Release(resource);
    if (write_failed) {
        remove(path);
        fprintf(stderr, "[D3D11-PANEL-FRAME] %s path=%s\n", reason, path);
        return 0;
    }
    fprintf(stderr,
        "[D3D11-PANEL-FRAME] saved %ux%u fmt=%u path=%s via F12\n",
        source_desc.Width, source_desc.Height, source_desc.Format, path);
    return 1;
}

static void dump_panel_frame_once(const char *path)
{
    if (!path || !*path || s_panel_frame_dump_done)
        return;
    s_panel_frame_dump_done = 1;
    dump_backbuffer_bmp(path);
}

/* Screenshot every s_fb_dump_every presented frames, for a run nobody is
 * watching. Called just before the flip, so the image is the finished frame
 * rather than the previous one. */
static void frame_dump_tick(void)
{
    char path[512];
    if (!s_fb_dump_prefix || !*s_fb_dump_prefix || !s_fb_dump_every)
        return;
    if (s_frame_count % s_fb_dump_every)
        return;
    snprintf(path, sizeof path, "%s%05u.bmp", s_fb_dump_prefix, s_fb_dump_seq++);
    dump_backbuffer_bmp(path);
}

/* Wall-clock frame pacing, printed every s_fps_report seconds. The percentiles
 * are the point: an average over a run that mixes menus with a race describes
 * neither scene, and a p95 frame time is what a player feels as a stutter. */
static void fps_report_tick(void)
{
    LARGE_INTEGER now;
    double dt_ms;
    if (!s_fps_report || !s_fps_qpc_frequency.QuadPart)
        return;
    QueryPerformanceCounter(&now);
    if (!s_fps_last_qpc.QuadPart) {
        s_fps_last_qpc = now;
        return;
    }
    dt_ms = (double)(now.QuadPart - s_fps_last_qpc.QuadPart) * 1000.0 /
            (double)s_fps_qpc_frequency.QuadPart;
    s_fps_last_qpc = now;
    s_fps_frames++;
    s_fps_draws += s_draw_count;
    s_fps_elapsed_ms += dt_ms;
    if (s_fps_frame_ms_len < (uint32_t)(sizeof s_fps_frame_ms /
                                        sizeof s_fps_frame_ms[0]))
        s_fps_frame_ms[s_fps_frame_ms_len++] = (uint32_t)(dt_ms + 0.5);
    if (s_fps_elapsed_ms < (double)s_fps_report * 1000.0)
        return;
    {
        uint32_t sorted[600], i, j, n = s_fps_frame_ms_len;
        double fps = s_fps_frames * 1000.0 / s_fps_elapsed_ms;
        for (i = 0; i < n; i++) sorted[i] = s_fps_frame_ms[i];
        for (i = 1; i < n; i++) {   /* insertion sort, n <= 600 per report */
            uint32_t v = sorted[i];
            for (j = i; j > 0 && sorted[j - 1] > v; j--)
                sorted[j] = sorted[j - 1];
            sorted[j] = v;
        }
        fprintf(stderr,
            "[D3D11-FPS] frames=%u fps=%.2f avg_ms=%.2f p50_ms=%u p95_ms=%u "
            "max_ms=%u draws_per_frame=%.1f\n",
            s_fps_frames, fps, s_fps_elapsed_ms / (double)s_fps_frames,
            n ? sorted[n / 2] : 0u, n ? sorted[(n * 95u) / 100u] : 0u,
            n ? sorted[n - 1u] : 0u,
            s_fps_frames ? (double)s_fps_draws / (double)s_fps_frames : 0.0);
        fflush(stderr);
    }
    s_fps_frames = 0;
    s_fps_draws = 0;
    s_fps_elapsed_ms = 0.0;
    s_fps_frame_ms_len = 0;
}

static int upload_texture(const Nv2aTexture *t)
{
    D3D11_TEXTURE2D_DESC td;
    D3D11_SHADER_RESOURCE_VIEW_DESC sd;
    D3D11_SUBRESOURCE_DATA init;
    ID3D11Texture2D *tex = NULL;
    ID3D11ShaderResourceView *srv = NULL;
    uint32_t *pixels;
    uint32_t i, slot = 0, mip_levels;
    int generate_mips;
    size_t count;
    uint64_t content_hash;
    HRESULT hr;

    s_texture_upload_failure = NULL;
    if (!t || !t->width || !t->height || t->width > 2048 || t->height > 2048) {
        s_texture_upload_failure = "invalid-dimensions";
        return 0;
    }
    if (s_perf_trace) s_perf_texture_calls++;
    if (s_direct) {
        for (i = 0; i < D3D_RENDER_TARGET_CACHE_SIZE; i++) {
            D3DRenderTargetCacheEntry *rt = &s_render_target_cache[i];
            if (rt->srv && rt->color_va == t->offset &&
                rt->width == t->width && rt->height == t->height) {
                if (s_perf_trace) s_perf_texture_rt_hits++;
                if (getenv("RECOMP_D3D_SHADOW_TEXTURE_DUMP_PREFIX") &&
                    (t->color & 0xFFu) == 0x06u && t->width == 256u && t->height == 256u)
                    dump_record_rt_once(i, rt, 1, 0);
                dump_record_rt_once(i, rt, 0, 0);
                if (t->offset == 0x82809000 && sky_texture_trace_enabled() &&
                    !(s_sky_texture_route_mask & 1u)) {
                    fprintf(stderr,
                        "[D3D11-SKY-RESOURCE] guest=0x%08X route=render-target-cache slot=%u size=%ux%u frame=%u\n",
                        t->offset, i, t->width, t->height, s_frame_count);
                    s_sky_texture_route_mask |= 1u;
                }
                rt->age = ++s_render_target_age;
                s_tex = rt->texture; s_srv = rt->srv;
                s_tex_offset = t->offset; s_tex_width = t->width;
                s_tex_height = t->height; s_tex_pitch = t->pitch;
                s_tex_color = t->color;
                return update_sampler(t);
            }
        }
    }
    if (t->offset == 0x82809000 && sky_texture_trace_enabled() &&
        !(s_sky_texture_route_mask & 2u)) {
        fprintf(stderr,
            "[D3D11-SKY-RESOURCE] guest=0x%08X route=no-RT-cache-match fallback=texture-cache-or-guest-decode size=%ux%u fmt=0x%02X frame=%u\n",
            t->offset, t->width, t->height, t->color & 0xFF, s_frame_count);
        s_sky_texture_route_mask |= 2u;
    }
    for (i = 0; i < texture_cache_slots(); i++) {
        D3DTextureCacheEntry *entry = &s_tex_cache[i];
        if (entry->texture && entry->offset == t->offset && entry->width == t->width &&
            entry->height == t->height && entry->pitch == t->pitch &&
            entry->color == t->color && entry->levels == t->levels) {
            if (s_perf_trace) s_perf_texture_cache_hits++;
            if (entry->checked_frame != s_frame_count) {
                uint64_t hash;
                if (s_perf_trace) s_perf_texture_hash_calls++;
                if (texture_hash_trace_enabled() && !s_texture_hash_probe_logged) {
                    LARGE_INTEGER hash_start, hash_end;
                    double total_us;
                    QueryPerformanceCounter(&hash_start);
                    hash = nv2a_backend_texture_hash(t);
                    QueryPerformanceCounter(&hash_end);
                    if (hash_end.QuadPart >= hash_start.QuadPart)
                        s_texture_hash_probe_ticks +=
                            (uint64_t)(hash_end.QuadPart - hash_start.QuadPart);
                    if (++s_texture_hash_probe_calls >= 16) {
                        total_us = (double)s_texture_hash_probe_ticks * 1000000.0 /
                                   (double)s_texture_hash_qpc_frequency.QuadPart;
                        fprintf(stderr,
                            "[D3D11-TEXTURE-HASH] samples=%u total_us=%.1f avg_us=%.2f est_32_calls_us=%.1f\n",
                            s_texture_hash_probe_calls, total_us,
                            total_us / (double)s_texture_hash_probe_calls,
                            total_us * 32.0 / (double)s_texture_hash_probe_calls);
                        s_texture_hash_probe_logged = 1;
                    }
                } else {
                    hash = nv2a_backend_texture_hash(t);
                }
                entry->checked_frame = s_frame_count;
                if (hash && hash != entry->content_hash) {
                    size_t update_count = (size_t)t->width * t->height;
                    uint32_t *updated = (uint32_t *)malloc(update_count * sizeof(*updated));
                    if (s_perf_trace) s_perf_texture_refreshes++;
                    if (updated && nv2a_backend_decode_texture(t, updated)) {
                        if (s_perf_trace) s_perf_texture_dynamic_decodes++;
                        ID3D11DeviceContext_UpdateSubresource(s_ctx,
                            (ID3D11Resource *)entry->texture, 0, NULL, updated,
                            t->width * sizeof(uint32_t), 0);
                        if (entry->levels > 1)
                            ID3D11DeviceContext_GenerateMips(s_ctx, entry->srv);
                        entry->content_hash = hash;
                        {
                            const char *trace = getenv("RECOMP_D3D_TEXTURE_TRACE");
                            if (trace && trace[0] && trace[0] != '0' &&
                                s_dynamic_texture_updates < 32)
                                fprintf(stderr, "[D3D11-BACKEND] refreshed dynamic texture %ux%u fmt=0x%02X frame=%u\n",
                                        t->width, t->height, t->color & 0xFF, s_frame_count);
                        }
                        s_dynamic_texture_updates++;
                    }
                    free(updated);
                }
            }
            entry->age = ++s_tex_cache_age;
            s_tex = entry->texture; s_srv = entry->srv;
            s_tex_offset = t->offset; s_tex_width = t->width;
            s_tex_height = t->height; s_tex_pitch = t->pitch; s_tex_color = t->color;
            return update_sampler(t);
        }
    }
    if (s_perf_trace) s_perf_texture_cache_misses++;
    count = (size_t)t->width * t->height;
    if (count > 2048u * 2048u) {
        s_texture_upload_failure = "texture-too-large";
        return 0;
    }
    pixels = (uint32_t *)malloc(count * sizeof(*pixels));
    if (!pixels) {
        s_texture_upload_failure = "pixel-allocation";
        return 0;
    }
    if (!nv2a_backend_decode_texture(t, pixels)) {
        free(pixels);
        s_texture_upload_failure = "guest-decode";
        return 0;
    }
    if (panel_trace_enabled() ||
        getenv("RECOMP_D3D_TEXTURE_DUMP_PREFIX") ||
        getenv("RECOMP_D3D_SHADOW_TEXTURE_DUMP_PREFIX"))
        dump_panel_texture_once(t, pixels);
    if (t->offset == 0x82809000 && sky_texture_trace_enabled()) {
        static unsigned sky_decode_trace_count;
        if (sky_decode_trace_count < 8) {
            uint32_t p0 = pixels[0];
            uint32_t pm = pixels[((size_t)(t->height / 2) * t->width) + (t->width / 2)];
            uint32_t plast = pixels[(size_t)t->width * t->height - 1];
            uint64_t sample_hash = decoded_texture_sample_hash(pixels, t->width, t->height);
            fprintf(stderr,
                    "[D3D11-SKY-DECODE] guest=0x%08X size=%ux%u fmt=0x%02X hash=%016llX p0=%08X pm=%08X plast=%08X\n",
                    t->offset, t->width, t->height, t->color & 0xFF,
                    (unsigned long long)sample_hash, p0, pm, plast);
            sky_decode_trace_count++;
        }
    }
    if (s_perf_trace) s_perf_texture_full_decodes++;
    content_hash = decoded_texture_sample_hash(pixels, t->width, t->height);
    ZeroMemory(&td, sizeof(td));
    generate_mips = t->levels > 1;
    mip_levels = generate_mips ? t->levels : 1;
    if (mip_levels > 12) mip_levels = 12;
    td.Width = t->width; td.Height = t->height; td.MipLevels = mip_levels; td.ArraySize = 1;
    td.Format = DXGI_FORMAT_B8G8R8A8_UNORM; td.SampleDesc.Count = 1;
    td.Usage = D3D11_USAGE_DEFAULT;
    td.BindFlags = D3D11_BIND_SHADER_RESOURCE |
                   (generate_mips ? D3D11_BIND_RENDER_TARGET : 0);
    td.MiscFlags = generate_mips ? D3D11_RESOURCE_MISC_GENERATE_MIPS : 0;
    ZeroMemory(&init, sizeof(init));
    init.pSysMem = pixels; init.SysMemPitch = t->width * sizeof(uint32_t);
    hr = ID3D11Device_CreateTexture2D(s_dev, &td, generate_mips ? NULL : &init, &tex);
    if (FAILED(hr)) s_texture_upload_failure = "d3d-texture-create";
    if (SUCCEEDED(hr) && generate_mips)
        ID3D11DeviceContext_UpdateSubresource(s_ctx, (ID3D11Resource *)tex, 0,
                                              NULL, pixels, t->width * sizeof(uint32_t), 0);
    free(pixels);
    if (FAILED(hr)) return 0;
    ZeroMemory(&sd, sizeof(sd));
    sd.Format = td.Format; sd.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
    sd.Texture2D.MipLevels = mip_levels;
    hr = ID3D11Device_CreateShaderResourceView(s_dev, (ID3D11Resource *)tex, &sd, &srv);
    if (FAILED(hr)) {
        s_texture_upload_failure = "d3d-srv-create";
        ID3D11Texture2D_Release(tex);
        return 0;
    }
    if (generate_mips)
        ID3D11DeviceContext_GenerateMips(s_ctx, srv);
    for (i = 1; i < texture_cache_slots(); i++) {
        if (!s_tex_cache[i].texture) { slot = i; break; }
        if (!s_tex_cache[i].age || s_tex_cache[i].age < s_tex_cache[slot].age) slot = i;
    }
    /* Replacing an entry changes the identity of the SRV at this slot. The
     * D3D11 binding cache compares raw interface pointers, so an eviction
     * must invalidate it or a newly decoded menu/race texture can inherit a
     * stale binding and disappear until another state change occurs. */
    if (s_tex_cache[slot].texture)
        invalidate_binding_cache();
    if (s_tex_cache[slot].srv) ID3D11ShaderResourceView_Release(s_tex_cache[slot].srv);
    if (s_tex_cache[slot].texture) ID3D11Texture2D_Release(s_tex_cache[slot].texture);
    s_tex_cache[slot].texture = tex; s_tex_cache[slot].srv = srv;
    s_tex_cache[slot].offset = t->offset; s_tex_cache[slot].width = t->width;
    s_tex_cache[slot].height = t->height; s_tex_cache[slot].pitch = t->pitch;
    s_tex_cache[slot].color = t->color; s_tex_cache[slot].levels = t->levels;
    s_tex_cache[slot].checked_frame = s_frame_count;
    s_tex_cache[slot].content_hash = content_hash;
    s_tex_cache[slot].age = ++s_tex_cache_age;
    s_tex = tex; s_srv = srv;
    s_tex_offset = t->offset; s_tex_width = t->width; s_tex_pitch = t->pitch;
    s_tex_height = t->height; s_tex_color = t->color;
    if (s_trace)
        fprintf(stderr, "[D3D11-BACKEND] cached texture slot=%u %ux%u fmt=0x%02X\n",
                slot, t->width, t->height, t->color & 0xFF);
    if (s_trace && generate_mips)
        fprintf(stderr, "[D3D11-BACKEND] generated mip chain levels=%u\n", mip_levels);
    return update_sampler(t);
}

static void apply_render_state(const Nv2aRenderState *rs)
{
    static int force_no_cull = -1;
    static int force_no_depth = -1;
    const char *force_no_cull_env;
    D3D11_BLEND_DESC blend;
    D3D11_DEPTH_STENCIL_DESC depth;
    D3D11_RASTERIZER_DESC raster;
    ID3D11RasterizerState *new_rasterizer = NULL;
    UINT mask = D3D11_COLOR_WRITE_ENABLE_ALL;
    uint32_t bkey[5], dkey[2], rkey[3];
    HRESULT hr;

    if (force_no_cull < 0) {
        force_no_cull_env = getenv("RECOMP_D3D_FORCE_NO_CULL");
        force_no_cull = force_no_cull_env && force_no_cull_env[0]
                     && force_no_cull_env[0] != '0';
    }
    rkey[0] = rs && rs->cull_enable ? 1u : 0u;
    rkey[1] = rs ? rs->cull_face : 0;
    rkey[2] = rs ? rs->front_face : 0x900;
    if (!s_raster_key_valid || memcmp(s_raster_key, rkey, sizeof(rkey)) != 0) {
        ZeroMemory(&raster, sizeof(raster));
        raster.FillMode = D3D11_FILL_SOLID;
        if (!rkey[0] || force_no_cull)
            raster.CullMode = D3D11_CULL_NONE;
        else if (rkey[1] == 0x404)       /* NV097_SET_CULL_FACE_V_FRONT */
            raster.CullMode = D3D11_CULL_FRONT;
        else if (rkey[1] == 0x408)       /* FRONT_AND_BACK is rejected before Draw below. */
            raster.CullMode = D3D11_CULL_FRONT;
        else                             /* NV097_SET_CULL_FACE_V_BACK (usual default) */
            raster.CullMode = D3D11_CULL_BACK;
        raster.FrontCounterClockwise = rkey[2] == 0x901 ? TRUE : FALSE;
        raster.DepthClipEnable = TRUE;
        hr = ID3D11Device_CreateRasterizerState(s_dev, &raster, &new_rasterizer);
        if (SUCCEEDED(hr)) {
            if (s_rasterizer) ID3D11RasterizerState_Release(s_rasterizer);
            s_rasterizer = new_rasterizer;
            memcpy(s_raster_key, rkey, sizeof(rkey));
            s_raster_key_valid = 1;
        } else {
            if (new_rasterizer) ID3D11RasterizerState_Release(new_rasterizer);
            s_raster_key_valid = 0;
        }
    }
    if (!s_binding_cache_valid || s_bound_rasterizer != s_rasterizer) {
        ID3D11DeviceContext_RSSetState(s_ctx, s_rasterizer);
        s_bound_rasterizer = s_rasterizer;
    }

    if (s_raw_texture) {
        if (!s_binding_cache_valid || s_bound_blend != NULL)
            ID3D11DeviceContext_OMSetBlendState(s_ctx, NULL, NULL, 0xFFFFFFFF);
        if (!s_binding_cache_valid || s_bound_depth != s_depth_disabled)
            ID3D11DeviceContext_OMSetDepthStencilState(s_ctx, s_depth_disabled, 0);
        s_bound_blend = NULL;
        s_bound_depth = s_depth_disabled;
        return;
    }
    if (!rs) {
        if (!s_binding_cache_valid || s_bound_blend != NULL)
            ID3D11DeviceContext_OMSetBlendState(s_ctx, NULL, NULL, 0xFFFFFFFF);
        if (!s_binding_cache_valid || s_bound_depth != s_depth_disabled)
            ID3D11DeviceContext_OMSetDepthStencilState(s_ctx, s_depth_disabled, 0);
        s_bound_blend = NULL;
        s_bound_depth = s_depth_disabled;
        return;
    }
    if (rs->color_mask) {
        mask = 0;
        if (rs->color_mask & 0x00000001) mask |= D3D11_COLOR_WRITE_ENABLE_BLUE;
        if (rs->color_mask & 0x00000100) mask |= D3D11_COLOR_WRITE_ENABLE_GREEN;
        if (rs->color_mask & 0x00010000) mask |= D3D11_COLOR_WRITE_ENABLE_RED;
        if (rs->color_mask & 0x01000000) mask |= D3D11_COLOR_WRITE_ENABLE_ALPHA;
    }
    bkey[0] = rs->blend_enable; bkey[1] = rs->blend_src;
    bkey[2] = rs->blend_dst; bkey[3] = rs->blend_eq; bkey[4] = mask;
    if (!s_blend_key_valid || memcmp(s_blend_key, bkey, sizeof(bkey)) != 0) {
        if (s_blend) { ID3D11BlendState_Release(s_blend); s_blend = NULL; }
        ZeroMemory(&blend, sizeof(blend));
        blend.RenderTarget[0].BlendEnable = rs->blend_enable ? TRUE : FALSE;
        blend.RenderTarget[0].SrcBlend = d3d_blend_factor(rs->blend_src);
        blend.RenderTarget[0].DestBlend = d3d_blend_factor(rs->blend_dst);
        blend.RenderTarget[0].BlendOp = d3d_blend_op(rs->blend_eq);
        blend.RenderTarget[0].SrcBlendAlpha = blend.RenderTarget[0].SrcBlend;
        blend.RenderTarget[0].DestBlendAlpha = blend.RenderTarget[0].DestBlend;
        blend.RenderTarget[0].BlendOpAlpha = blend.RenderTarget[0].BlendOp;
        blend.RenderTarget[0].RenderTargetWriteMask = (UINT8)mask;
        hr = ID3D11Device_CreateBlendState(s_dev, &blend, &s_blend);
        s_blend_key_valid = SUCCEEDED(hr);
        if (s_blend_key_valid) memcpy(s_blend_key, bkey, sizeof(bkey));
    }
    if (!s_binding_cache_valid || s_bound_blend != s_blend)
        ID3D11DeviceContext_OMSetBlendState(s_ctx, s_blend, NULL, 0xFFFFFFFF);
    s_bound_blend = s_blend;

    if (force_no_depth < 0) {
        const char *e = getenv("RECOMP_D3D_FORCE_NO_DEPTH");
        force_no_depth = e && e[0] && e[0] != '0';
    }
    if (!rs->depth_test_enable || force_no_depth) {
        if (!s_binding_cache_valid || s_bound_depth != s_depth_disabled)
            ID3D11DeviceContext_OMSetDepthStencilState(s_ctx, s_depth_disabled, 0);
        s_bound_depth = s_depth_disabled;
        return;
    }
    dkey[0] = rs->depth_func; dkey[1] = rs->depth_write;
    if (!s_depth_key_valid || memcmp(s_depth_key, dkey, sizeof(dkey)) != 0) {
        if (s_depth_dynamic) { ID3D11DepthStencilState_Release(s_depth_dynamic); s_depth_dynamic = NULL; }
        ZeroMemory(&depth, sizeof(depth));
        depth.DepthEnable = TRUE;
        depth.DepthWriteMask = rs->depth_write ? D3D11_DEPTH_WRITE_MASK_ALL : D3D11_DEPTH_WRITE_MASK_ZERO;
        depth.DepthFunc = d3d_compare_func(rs->depth_func);
        hr = ID3D11Device_CreateDepthStencilState(s_dev, &depth, &s_depth_dynamic);
        s_depth_key_valid = SUCCEEDED(hr);
        if (s_depth_key_valid) memcpy(s_depth_key, dkey, sizeof(dkey));
    }
    {
        ID3D11DepthStencilState *depth_state =
            s_depth_dynamic ? s_depth_dynamic : s_depth_disabled;
        if (!s_binding_cache_valid || s_bound_depth != depth_state)
            ID3D11DeviceContext_OMSetDepthStencilState(s_ctx, depth_state, 0);
        s_bound_depth = depth_state;
    }
}

static void d3d11_clear(const Nv2aSurface *surface, const Nv2aRenderState *state,
                        uint32_t flags, uint32_t argb, uint32_t zstencil)
{
    static int trace_clears = -1;
    static unsigned trace_count;
    static int depth_trace = -1;
    static unsigned depth_trace_count;
    static int depth_clear_override = -1;
    static float depth_clear_override_value = 1.0f;
    static unsigned sky_target_clear_trace_count;
    const char *trace_env;
    float c[4];
    float depth_clear_value;
    uint32_t stencil_clear_value = 0;
    if (depth_clear_override < 0) {
        const char *e = getenv("RECOMP_D3D_DEPTH_CLEAR");
        if (e && *e) {
            depth_clear_override_value = (float)atof(e);
            if (depth_clear_override_value < 0.0f) depth_clear_override_value = 0.0f;
            if (depth_clear_override_value > 1.0f) depth_clear_override_value = 1.0f;
            depth_clear_override = 1;
        } else {
            depth_clear_override = 0;
        }
    }
    if (depth_clear_override) {
        depth_clear_value = depth_clear_override_value;
    } else if (state && state->zeta_format == 1) {
        depth_clear_value = (float)(zstencil & 0xFFFFu) / 65535.0f;
    } else if (state && state->zeta_format == 2) {
        depth_clear_value = (float)((zstencil >> 8) & 0x00FFFFFFu) / 16777215.0f;
        stencil_clear_value = zstencil & 0xFFu;
    } else {
        depth_clear_value = 1.0f;
    }
    if (depth_trace < 0) {
        trace_env = getenv("RECOMP_D3D_DEPTH_TRACE");
        depth_trace = trace_env && trace_env[0] && trace_env[0] != '0';
    }
    if (depth_trace && (flags & 1) && depth_trace_count < 64) {
        fprintf(stderr, "[D3D11-DEPTH-CLEAR] target=0x%08X %ux%u flags=0x%X zeta=0x%08X format=%u guest_z=0x%08X clear=%.6f stencil=%u test=%u func=0x%X write=%u\n",
                surface->color_va, surface->width, surface->height, flags,
                state ? state->zeta_va : 0, state ? state->zeta_format : 0,
                zstencil, depth_clear_value, stencil_clear_value,
                state ? state->depth_test_enable : 0,
                state ? state->depth_func : 0,
                state ? state->depth_write : 0);
        depth_trace_count++;
    }
    if (trace_clears < 0) {
        trace_env = getenv("RECOMP_D3D_TARGET_TRACE");
        trace_clears = trace_env && trace_env[0] && trace_env[0] != '0';
    }
    if (trace_clears && surface->width == 256 && surface->height == 256 &&
        trace_count < 16) {
        fprintf(stderr, "[D3D11-CLEAR] target=0x%08X %ux%u flags=0x%X argb=0x%08X alpha=%u\n",
                surface->color_va, surface->width, surface->height, flags,
                argb, (argb >> 24) & 255u);
        trace_count++;
    }
    s_color_va = surface->color_va;
    s_pitch = surface->pitch;
    if (!init_gpu_objects()) return;
    if (!select_direct_surface(surface)) return;
    if (!create_target(surface->width, surface->height)) return;
    if (sky_texture_trace_enabled() && surface->color_va == 0x82809000 &&
        sky_target_clear_trace_count < 32u) {
        fprintf(stderr,
            "[D3D11-SKY-TARGET-CLEAR] n=%u frame=%u draw=%u target=0x%08X size=%ux%u pitch=%u flags=0x%X argb=0x%08X zeta=0x%08X zfmt=%u zstencil=0x%08X rtv=%p dsv=%p\n",
            ++sky_target_clear_trace_count, s_frame_count + 1, s_draw_count,
            surface->color_va, surface->width, surface->height, surface->pitch,
            flags, argb, state ? state->zeta_va : 0,
            state ? state->zeta_format : 0, zstencil, (void *)s_rtv,
            (void *)s_dsv);
    }
    c[0] = ((argb >> 16) & 255) / 255.0f;
    c[1] = ((argb >> 8) & 255) / 255.0f;
    c[2] = (argb & 255) / 255.0f;
    c[3] = ((argb >> 24) & 255) / 255.0f;
    if (flags & 0xF0) ID3D11DeviceContext_ClearRenderTargetView(s_ctx, s_rtv, c);
    if ((flags & 3) && s_dsv)
        ID3D11DeviceContext_ClearDepthStencilView(s_ctx, s_dsv,
            (flags & 1 ? D3D11_CLEAR_DEPTH : 0) | (flags & 2 ? D3D11_CLEAR_STENCIL : 0),
            depth_clear_value, stencil_clear_value);
}

static void d3d11_decode_input(uint32_t byte, NV2ACombinerInput *out)
{
    out->reg = (NV2ACombinerRegister)(byte & 0x0F);
    out->alpha_rep = (int)((byte >> 4) & 1);
    out->mapping = (NV2AInputMapping)((byte >> 5) & 7);
}

static void d3d11_decode_inputs(uint32_t word, NV2ACombinerInput out[4])
{
    d3d11_decode_input((word >> 24) & 0xFF, &out[0]);
    d3d11_decode_input((word >> 16) & 0xFF, &out[1]);
    d3d11_decode_input((word >> 8) & 0xFF, &out[2]);
    d3d11_decode_input(word & 0xFF, &out[3]);
}

static void d3d11_decode_output(uint32_t word, NV2ACombinerOutput *out)
{
    out->cd_dst = (NV2ACombinerRegister)(word & 0x0F);
    out->ab_dst = (NV2ACombinerRegister)((word >> 4) & 0x0F);
    out->sum_dst = (NV2ACombinerRegister)((word >> 8) & 0x0F);
    out->cd_dot = (int)((word >> 12) & 1);
    out->ab_dot = (int)((word >> 13) & 1);
    out->mux_sum = (int)((word >> 14) & 1);
    out->output_map = (NV2AOutputMapping)((word >> 15) & 7);
}

static void d3d11_build_combiner_state(const Nv2aCombiner *raw,
                                       NV2ACombinerState *state)
{
    unsigned i;
    memset(state, 0, sizeof(*state));
    state->num_stages = (int)(raw->control & 0xFF);
    if (state->num_stages > NV2A_MAX_COMBINER_STAGES)
        state->num_stages = NV2A_MAX_COMBINER_STAGES;
    state->flags = raw->control >> 8;
    for (i = 0; i < NV2A_MAX_COMBINER_STAGES; i++) {
        NV2ACombinerInput *rgb = state->stages[i].rgb_input;
        NV2ACombinerInput *alpha = state->stages[i].alpha_input;
        d3d11_decode_inputs(raw->color_icw[i], rgb);
        d3d11_decode_inputs(raw->alpha_icw[i], alpha);
        d3d11_decode_output(raw->color_ocw[i], &state->stages[i].rgb_output);
        d3d11_decode_output(raw->alpha_ocw[i], &state->stages[i].alpha_output);
        state->c0[i] = raw->factor0[i];
        state->c1[i] = raw->factor1[i];
    }
    d3d11_decode_inputs(raw->final0, state->final_input);
    d3d11_decode_input((raw->final1 >> 24) & 0xFF, &state->final_input[4]);
    d3d11_decode_input((raw->final1 >> 16) & 0xFF, &state->final_input[5]);
    d3d11_decode_input((raw->final1 >> 8) & 0xFF, &state->final_input[6]);
    state->final_c0 = raw->final_c0;
    state->final_c1 = raw->final_c1;
    for (i = 0; i < NV2A_MAX_TEXTURES; i++) {
        uint32_t mode = (raw->stage_program >> (i * 5)) & 0x1F;
        state->tex_mode[i] = mode == 0 ? NV2A_TEXMODE_NONE :
                             mode == 3 ? NV2A_TEXMODE_CUBEMAP :
                             (mode <= 2 ? NV2A_TEXMODE_2D : NV2A_TEXMODE_NONE);
    }
}

static void d3d11_draw_impl(const Nv2aSurface *surface, const Nv2aBatch *batch)
{
    static int skip_preview_composite = -1;
    static int skip_preview_logged;
    static int force_simple_preview_composite = -1;
    static int simple_preview_logged;
    static int force_simple_preview_scene = -1;
    static int simple_scene_logged;
    static unsigned trace_sky_target_draws;
    static int force_shadow_blend = -1;
    static unsigned shadow_blend_override_count;
    static int force_far_racer_alpha_off = -1;
    static unsigned far_racer_alpha_override_count;
    static int force_actor_no_depth = -1;
    static unsigned actor_no_depth_override_count;
    static int force_actor_alpha_test_off = -1;
    static unsigned actor_alpha_override_count, actor_alpha_last_frame;
    static unsigned actor_alpha_frame_logs;
    static int actor_alpha_capture_on_match = -1;
    static int shadow_skip_mask = -1;
    static int shadow_no_cull = -1;
    static int shadow_force_combiner = -1;
    static int shadow_route_trace = -1;
    static int shadow_texture_dump_enabled = -1;
    static int shadow_per_stage_sampler_test = -1;
    static int shadow_per_stage_sampler_logged;
    static uint32_t shadow_route_trace_count;
    static uint32_t shadow_skip_frame = UINT32_MAX, shadow_skip_ordinal;
    static int actor_alpha_capture_requested;
    D3D11_MAPPED_SUBRESOURCE map;
    D3D11_VIEWPORT vp;
    UINT stride = sizeof(D3DVertex), offset = 0;
    FrameCB cb;
    NV2APSConstants rc_cb;
    NV2ACombinerState comb_state;
    ID3D11ShaderResourceView *srvs[4] = { NULL, NULL, NULL, NULL };
    ID3D11SamplerState *samplers[4] = { NULL, NULL, NULL, NULL };
    ID3D11PixelShader *comb_ps = NULL;
    const Nv2aTexture *tex_stage[4] = { NULL, NULL, NULL, NULL };
    const char *skip_preview_env;
    const char *simple_preview_env;
    const char *simple_scene_env;
    const char *shadow_blend_env;
    const char *far_racer_alpha_env;
    const char *actor_no_depth_env;
    const char *actor_alpha_env;
    const char *actor_alpha_capture_env;
    const char *shadow_no_cull_env;
    const char *shadow_force_combiner_env;
    const char *shadow_route_trace_env;
    Nv2aRenderState shadow_blend_state;
    Nv2aRenderState actor_depth_state;
    const Nv2aRenderState *render_state;
    const Nv2aTexture *shadow_tex0, *shadow_tex1;
    float far_racer_xmin, far_racer_xmax, far_racer_ymin, far_racer_ymax;
    uint32_t previous_surface_va;
    int textured, any_texture = 0, st, preview_composite_override = 0;
    int preview_scene_override = 0;
    int far_racer_alpha_override = 0;
    int actor_alpha_test_override = 0;
    int shadow_candidate = 0;
    int shadow_dump_candidate = 0;
    uint32_t i;
    LARGE_INTEGER perf_stage_last;
    (void)surface;
    for (i = 0; i < 4; i++) {
        if (s_shadow_stage_samplers[i]) {
            ID3D11SamplerState_Release(s_shadow_stage_samplers[i]);
            s_shadow_stage_samplers[i] = NULL;
        }
    }
    if (s_perf_trace) QueryPerformanceCounter(&perf_stage_last);
    if (!s_draw_entry_logged) {
        fprintf(stderr, "[D3D11-BACKEND] draw callback entered active=%d dev=%p ctx=%p batch=%u\n",
                s_active, (void *)s_dev, (void *)s_ctx, batch ? batch->count : 0);
        s_draw_entry_logged = 1;
    }
    previous_surface_va = s_active_surface_va;
    s_color_va = surface->color_va;
    s_pitch = surface->pitch;
    if (!s_active) return;
    if (!s_panel_frame_dump_done && diagnostic_f12_down())
        s_panel_frame_capture_requested = 1;
    if (!init_gpu_objects()) return;
    if (!select_direct_surface(surface)) return;
    if (previous_surface_va != s_active_surface_va)
        invalidate_binding_cache();
    if (skip_preview_composite < 0) {
        skip_preview_env = getenv("RECOMP_D3D_SKIP_PREVIEW_COMPOSITE");
        skip_preview_composite = skip_preview_env && skip_preview_env[0] &&
                                 skip_preview_env[0] != '0';
    }
    if (force_simple_preview_composite < 0) {
        simple_preview_env = getenv("RECOMP_D3D_SIMPLE_PREVIEW_COMPOSITE");
        force_simple_preview_composite = simple_preview_env && simple_preview_env[0] &&
                                         simple_preview_env[0] != '0';
    }
    if (force_simple_preview_scene < 0) {
        simple_scene_env = getenv("RECOMP_D3D_SIMPLE_PREVIEW_SCENE");
        force_simple_preview_scene = simple_scene_env && simple_scene_env[0] &&
                                     simple_scene_env[0] != '0';
    }
    if (force_shadow_blend < 0) {
        shadow_blend_env = getenv("RECOMP_D3D_FORCE_SHADOW_BLEND");
        force_shadow_blend = shadow_blend_env && shadow_blend_env[0] &&
                             shadow_blend_env[0] != '0';
    }
    if (force_actor_no_depth < 0) {
        actor_no_depth_env = getenv("RECOMP_D3D_FORCE_ACTOR_NO_DEPTH");
        force_actor_no_depth = actor_no_depth_env && actor_no_depth_env[0] &&
                               actor_no_depth_env[0] != '0';
    }
    if (force_actor_alpha_test_off < 0) {
        actor_alpha_env = getenv("RECOMP_D3D_FORCE_ACTOR_ALPHA_TEST_OFF");
        force_actor_alpha_test_off = actor_alpha_env && actor_alpha_env[0] &&
                                     actor_alpha_env[0] != '0';
    }
    if (actor_alpha_capture_on_match < 0) {
        actor_alpha_capture_env = getenv("RECOMP_D3D_CAPTURE_ON_ACTOR_ALPHA_MATCH");
        actor_alpha_capture_on_match = actor_alpha_capture_env &&
                                       actor_alpha_capture_env[0] &&
                                       actor_alpha_capture_env[0] != '0';
    }
    if (force_far_racer_alpha_off < 0) {
        far_racer_alpha_env = getenv("RECOMP_D3D_FORCE_FAR_RACER_ALPHA_OFF");
        force_far_racer_alpha_off = far_racer_alpha_env && far_racer_alpha_env[0] &&
                                    far_racer_alpha_env[0] != '0';
    }
    if (skip_preview_composite && surface->width >= 512 && batch) {
        const Nv2aTexture *preview_tex = batch->textures[0] ?
                                         batch->textures[0] : batch->texture;
        if (preview_tex && preview_tex->width == 256 && preview_tex->height == 256) {
            for (i = 0; i < D3D_RENDER_TARGET_CACHE_SIZE; i++) {
                D3DRenderTargetCacheEntry *rt = &s_render_target_cache[i];
                if (rt->srv && rt->color_va == preview_tex->offset &&
                    rt->width == preview_tex->width && rt->height == preview_tex->height) {
                    if (!skip_preview_logged) {
                        fprintf(stderr, "[D3D11-SKIP-RT] suppressed preview composite guest=0x%08X on %ux%u\n",
                                preview_tex->offset, surface->width, surface->height);
                        skip_preview_logged = 1;
                    }
                    return;
                }
            }
        }
    }
    s_callback_count++;
    s_frame_callbacks++;
    if (s_callback_count <= 3) {
        fprintf(stderr, "[D3D11-BACKEND] callback %u: surface=%ux%u pitch=%u bpp=%u verts=%u tex=%s\n",
                s_callback_count, surface->width, surface->height, surface->pitch,
                surface->bytes_per_pixel, batch ? batch->count : 0,
                batch && batch->texture ? "yes" : "no");
    }
    if (!batch || !batch->vertices || batch->count < 3) return;
    far_racer_alpha_override = 0;
    shadow_tex0 = batch->textures[0] ? batch->textures[0] : batch->texture;
    shadow_tex1 = batch->textures[1];
    if (force_far_racer_alpha_off && surface->width == 640 && surface->height == 480 &&
        batch->state && batch->state->alpha_test_enable && !batch->state->blend_enable &&
        batch->state->alpha_func == 0x0206 && batch->state->alpha_ref == 128 &&
        batch->count == 216 && shadow_tex0 && shadow_tex1 &&
        shadow_tex0->color == 0x0C && shadow_tex0->width == 128 &&
        shadow_tex0->height == 128 && shadow_tex1->color == 0x0F &&
        shadow_tex1->width == 64 && shadow_tex1->height == 128 &&
        (batch->vertices[0].diffuse >> 24) == 0xFF) {
        far_racer_xmin = far_racer_xmax = batch->vertices[0].x;
        far_racer_ymin = far_racer_ymax = batch->vertices[0].y;
        for (i = 1; i < batch->count; i++) {
            if (batch->vertices[i].x < far_racer_xmin) far_racer_xmin = batch->vertices[i].x;
            if (batch->vertices[i].x > far_racer_xmax) far_racer_xmax = batch->vertices[i].x;
            if (batch->vertices[i].y < far_racer_ymin) far_racer_ymin = batch->vertices[i].y;
            if (batch->vertices[i].y > far_racer_ymax) far_racer_ymax = batch->vertices[i].y;
        }
        if (far_racer_xmax - far_racer_xmin <= 32.0f &&
            far_racer_ymax - far_racer_ymin <= 32.0f && far_racer_ymin < 160.0f) {
            far_racer_alpha_override = 1;
            if (far_racer_alpha_override_count < 16u) {
                fprintf(stderr,
                    "[D3D11-FAR-ALPHA-AB] match=%u frame=%u surface=0x%08X verts=%u xy=[%.2f..%.2f,%.2f..%.2f] tex0=0x%08X tex1=0x%08X guest_alpha=1 test_alpha=0\n",
                    far_racer_alpha_override_count + 1, s_frame_count + 1,
                    surface->color_va, batch->count, far_racer_xmin, far_racer_xmax,
                    far_racer_ymin, far_racer_ymax, shadow_tex0->offset,
                    shadow_tex1->offset);
            }
            far_racer_alpha_override_count++;
        }
    }
    if (force_actor_alpha_test_off && surface->width == 640 && surface->height == 480 &&
        batch->state && batch->state->alpha_test_enable && batch->count >= 48 &&
        batch->count <= 512 && batch->combiner &&
        batch->combiner->control == 0x00011108u && shadow_tex0 && shadow_tex1 &&
        ((shadow_tex0->color & 0xFF) == 0x0C ||
         (shadow_tex0->color & 0xFF) == 0x0F) &&
        (shadow_tex1->color & 0xFF) == 0x0F) {
        uint32_t frame_now = s_frame_count + 1;
        actor_alpha_test_override = 1;
        if (actor_alpha_capture_on_match && !actor_alpha_capture_requested) {
            s_panel_frame_capture_requested = 1;
            actor_alpha_capture_requested = 1;
            fprintf(stderr, "[D3D11-ACTOR-ALPHA-AB] automatic frame capture requested on first matching draw\n");
        }
        if (actor_alpha_last_frame != frame_now) {
            actor_alpha_last_frame = frame_now;
            actor_alpha_frame_logs = 0;
        }
        if (actor_alpha_override_count < 128u && actor_alpha_frame_logs < 4u) {
            fprintf(stderr, "[D3D11-ACTOR-ALPHA-AB] frame=%u draw=%u verts=%u tex0=0x%08X/fmt%02X tex1=0x%08X/fmt%02X guest_alpha=1 func=0x%X ref=%u test_alpha=off depth=%u\n",
                    frame_now, s_draw_count, batch->count,
                    shadow_tex0->offset, shadow_tex0->color & 0xFF,
                    shadow_tex1->offset, shadow_tex1->color & 0xFF,
                    batch->state->alpha_func, batch->state->alpha_ref & 0xFF,
                    batch->state->depth_test_enable);
            actor_alpha_override_count++;
            actor_alpha_frame_logs++;
        }
    }
    if (sky_texture_trace_enabled() && surface->color_va == 0x82809000 &&
        trace_sky_target_draws < 16u) {
        const Nv2aTexture *target_tex = batch->textures[0] ?
                                        batch->textures[0] : batch->texture;
        fprintf(stderr,
            "[D3D11-SKY-TARGET-DRAW] n=%u frame=%u surface=0x%08X size=%ux%u verts=%u tex=0x%08X tex_size=%ux%u fmt=0x%02X blend=%u depth=%u cull=%u\n",
            trace_sky_target_draws + 1, s_frame_count + 1, surface->color_va,
            surface->width, surface->height, batch->count,
            target_tex ? target_tex->offset : 0,
            target_tex ? target_tex->width : 0,
            target_tex ? target_tex->height : 0,
            target_tex ? target_tex->color & 0xFF : 0,
            batch->state ? batch->state->blend_enable : 0,
            batch->state ? batch->state->depth_test_enable : 0,
            batch->state ? batch->state->cull_enable : 0);
        trace_sky_target_draws++;
    }
    if (!create_target(surface->width, surface->height)) {
        if (s_callback_count <= 3)
            fprintf(stderr, "[D3D11-BACKEND] target creation failed for %ux%u\n",
                    surface->width, surface->height);
        return;
    }
    if (s_max_draws && s_draw_count >= s_max_draws) {
        if (s_continuous) {
            if (!s_frame_limited) {
                fprintf(stderr, "[D3D11-BACKEND] frame %u draw budget %u reached; skipping remainder\n",
                        s_frame_count + 1, s_max_draws);
                s_frame_limited = 1;
            }
        } else {
            fprintf(stderr, "[D3D11-BACKEND] draw limit %u reached; disabling backend\n", s_max_draws);
            nv2a_backend_register(NULL);
            s_active = 0;
        }
        return;
    }
    if ((batch->count % 3) != 0 || batch->count > 65536) return;
    if (s_trace && !s_first_batch_traced) {
        uint32_t n = batch->count < 6 ? batch->count : 6;
        fprintf(stderr, "[D3D11-TRACE] first batch surface=%ux%u target=%ux%u pitch=%u bpp=%u verts=%u texture=%s depth=%u blend=%u cull=%u face=0x%X front=0x%X\n",
                surface->width, surface->height, s_width, s_height,
                surface->pitch, surface->bytes_per_pixel, batch->count,
                batch->texture ? "yes" : "no",
                batch->state ? batch->state->depth_test_enable : 0,
                batch->state ? batch->state->blend_enable : 0,
                batch->state ? batch->state->cull_enable : 0,
                batch->state ? batch->state->cull_face : 0,
                batch->state ? batch->state->front_face : 0);
        for (i = 0; i < n; i++) {
            const Nv2aVertex *v = &batch->vertices[i];
            fprintf(stderr, "[D3D11-TRACE] v%u xy=(%.3f,%.3f) z=%.6g rhw=%.6g rgba=%08X tc0=(%.3f,%.3f,%.3f) tc1=(%.3f,%.3f,%.3f)\n",
                    i, v->x, v->y, v->z, v->rhw, v->diffuse,
                    v->tex[0][0], v->tex[0][1], v->tex[0][3],
                    v->tex[1][0], v->tex[1][1], v->tex[1][3]);
        }
        s_first_batch_traced = 1;
    }
    if (batch->state && batch->state->cull_enable &&
        batch->state->cull_face == 0x408)
        return;
    if (s_perf_trace) perf_stage_record(0, &perf_stage_last);
    if (shadow_texture_dump_enabled < 0) {
        const char *dump_env = getenv("RECOMP_D3D_SHADOW_TEXTURE_DUMP_PREFIX");
        shadow_texture_dump_enabled = dump_env && dump_env[0] && dump_env[0] != '0';
    }
    if (shadow_per_stage_sampler_test < 0) {
        const char *sampler_test_env = getenv("RECOMP_D3D_SHADOW_PER_STAGE_SAMPLER_TEST");
        shadow_per_stage_sampler_test = sampler_test_env && sampler_test_env[0] &&
            sampler_test_env[0] != '0';
    }
    if (shadow_texture_dump_enabled || shadow_per_stage_sampler_test)
        shadow_dump_candidate = is_shadow_geometry_candidate(
            surface, batch, batch->textures[0] ? batch->textures[0] : batch->texture,
            batch->textures[1]);
    for (st = 0; st < 4; st++) {
        tex_stage[st] = batch->textures[st];
        if (!tex_stage[st] && st == 0)
            tex_stage[st] = batch->texture;
        if (tex_stage[st] && upload_texture(tex_stage[st])) {
            if (shadow_dump_candidate && st == 0)
                dump_bound_shadow_texture_once((uint32_t)st, tex_stage[st], s_tex);
            if (shadow_dump_candidate && shadow_per_stage_sampler_test && s_sampler) {
                ID3D11SamplerState_AddRef(s_sampler);
                s_shadow_stage_samplers[st] = s_sampler;
            }
            srvs[st] = s_srv;
            any_texture = 1;
        } else if (shadow_dump_candidate && shadow_per_stage_sampler_test && tex_stage[st]) {
            fprintf(stderr,
                "[D3D11-SHADOW-UPLOAD-FAIL] stage=%d tex=0x%08X size=%ux%u pitch=%u color=0x%08X levels=%u reason=%s\n",
                st, tex_stage[st]->offset, tex_stage[st]->width, tex_stage[st]->height,
                tex_stage[st]->pitch, tex_stage[st]->color, tex_stage[st]->levels,
                s_texture_upload_failure ? s_texture_upload_failure : "unknown");
        }
    }
    if (s_perf_trace) perf_stage_record(1, &perf_stage_last);
    if (shadow_skip_mask < 0) {
        const char *skip_env = getenv("RECOMP_D3D_SHADOW_SKIP_MASK");
        shadow_skip_mask = skip_env && skip_env[0] ? (int)strtol(skip_env, NULL, 0) : 0;
    }
    if (shadow_skip_frame != s_frame_count + 1u) {
        shadow_skip_frame = s_frame_count + 1u;
        shadow_skip_ordinal = 0;
    }
    if (is_shadow_geometry_candidate(surface, batch,
                                     batch->textures[0] ? batch->textures[0] : batch->texture,
                                     batch->textures[1])) {
        uint32_t shadow_bit = 1u << (shadow_skip_ordinal & 31u);
        uint32_t shadow_ordinal = shadow_skip_ordinal++;
        if (shadow_skip_mask & (int)shadow_bit) {
            fprintf(stderr, "[D3D11-SHADOW-SKIP] frame=%u ordinal=%u draw=%u mask=0x%X\n",
                    s_frame_count + 1u, shadow_ordinal + 1u, s_draw_count,
                    (unsigned)shadow_skip_mask);
            return;
        }
    }
    textured = srvs[0] != NULL;
    {
        static int trace_after = -1;
        static unsigned trace_count;
        if (trace_after < 0) {
            const char *trace_env = getenv("RECOMP_D3D_RACE_DRAW_TRACE_AFTER");
            trace_after = trace_env && trace_env[0] ? atoi(trace_env) : 0;
        }
        if (trace_after > 0 && s_frame_count + 1u >= (uint32_t)trace_after &&
            surface->width == 640 && surface->height == 480 &&
            batch->count >= 3 && batch->count <= 8192 && trace_count < 64u) {
            const Nv2aVertex *v = &batch->vertices[0];
            const Nv2aCombiner *c = batch->combiner;
            uint32_t vi;
            float min_x = v->x, max_x = v->x;
            float min_y = v->y, max_y = v->y;
            float min_z = v->z, max_z = v->z;
            float min_rhw = v->rhw, max_rhw = v->rhw;
            for (vi = 1; vi < batch->count; vi++) {
                const Nv2aVertex *bv = &batch->vertices[vi];
                if (bv->x < min_x) min_x = bv->x;
                if (bv->x > max_x) max_x = bv->x;
                if (bv->y < min_y) min_y = bv->y;
                if (bv->y > max_y) max_y = bv->y;
                if (bv->z < min_z) min_z = bv->z;
                if (bv->z > max_z) max_z = bv->z;
                if (bv->rhw < min_rhw) min_rhw = bv->rhw;
                if (bv->rhw > max_rhw) max_rhw = bv->rhw;
            }
            if (max_x - min_x >= (float)surface->width * 0.50f &&
                max_y - min_y >= (float)surface->height * 0.10f) {
                const Nv2aTexture *t0 = tex_stage[0];
                const Nv2aTexture *t1 = tex_stage[1];
                fprintf(stderr,
                    "[D3D11-RACE-LARGE-DRAW] n=%u frame=%u draw=%u target=0x%08X verts=%u bounds=(x=%.2f..%.2f,y=%.2f..%.2f,z=%.6g..%.6g,rhw=%.6g..%.6g) tex0=0x%08X/%ux%u/fmt%02X tex1=0x%08X/%ux%u/fmt%02X comb=0x%08X/%08X rgb0=%08X alpha0=%08X rgbout0=%08X alphaout0=%08X final=%08X/%08X blend=%u depth=%u func=0x%X write=%u zeta=0x%08X zfmt=%u rtv=%p dsv=%p\n",
                    ++trace_count, s_frame_count + 1u, s_draw_count,
                    surface->color_va, batch->count,
                    min_x, max_x, min_y, max_y, min_z, max_z,
                    min_rhw, max_rhw,
                    t0 ? t0->offset : 0, t0 ? t0->width : 0,
                    t0 ? t0->height : 0, t0 ? (t0->color & 0xFF) : 0,
                    t1 ? t1->offset : 0, t1 ? t1->width : 0,
                    t1 ? t1->height : 0, t1 ? (t1->color & 0xFF) : 0,
                    c ? c->control : 0, c ? c->stage_program : 0,
                    c ? c->color_icw[0] : 0, c ? c->alpha_icw[0] : 0,
                    c ? c->color_ocw[0] : 0, c ? c->alpha_ocw[0] : 0,
                    c ? c->final0 : 0, c ? c->final1 : 0,
                    batch->state ? batch->state->blend_enable : 0,
                    batch->state ? batch->state->depth_test_enable : 0,
                    batch->state ? batch->state->depth_func : 0,
                    batch->state ? batch->state->depth_write : 0,
                    batch->state ? batch->state->zeta_va : 0,
                    batch->state ? batch->state->zeta_format : 0,
                    (void *)s_rtv, (void *)s_dsv);
            }
        }
    }
    {
        static unsigned sky_target_draw_trace_count;
        if (sky_texture_trace_enabled() &&
            surface->color_va == 0x82809000 &&
            sky_target_draw_trace_count < 64u) {
            const Nv2aVertex *sv = &batch->vertices[0];
            const Nv2aCombiner *sc = batch->combiner;
            uint32_t vi;
            float min_x = sv->x, max_x = sv->x;
            float min_y = sv->y, max_y = sv->y;
            float min_z = sv->z, max_z = sv->z;
            for (vi = 1; vi < batch->count; vi++) {
                const Nv2aVertex *bv = &batch->vertices[vi];
                if (bv->x < min_x) min_x = bv->x;
                if (bv->x > max_x) max_x = bv->x;
                if (bv->y < min_y) min_y = bv->y;
                if (bv->y > max_y) max_y = bv->y;
                if (bv->z < min_z) min_z = bv->z;
                if (bv->z > max_z) max_z = bv->z;
            }
            fprintf(stderr,
                "[D3D11-SKY-TARGET-DRAW] n=%u frame=%u draw=%u target=0x%08X size=%ux%u verts=%u tex0=0x%08X/fmt%02X tex1=0x%08X/fmt%02X combiner=%08X/%08X depth=%u func=0x%X write=%u zeta=0x%08X zfmt=%u rtv=%p dsv=%p first=(%.2f,%.2f,z=%.6g,rhw=%.6g) bounds=(x=%.2f..%.2f,y=%.2f..%.2f,z=%.6g..%.6g)\n",
                ++sky_target_draw_trace_count, s_frame_count + 1, s_draw_count,
                surface->color_va, surface->width, surface->height, batch->count,
                tex_stage[0] ? tex_stage[0]->offset : 0,
                tex_stage[0] ? (tex_stage[0]->color & 0xFF) : 0,
                tex_stage[1] ? tex_stage[1]->offset : 0,
                tex_stage[1] ? (tex_stage[1]->color & 0xFF) : 0,
                sc ? sc->control : 0, sc ? sc->stage_program : 0,
                batch->state ? batch->state->depth_test_enable : 0,
                batch->state ? batch->state->depth_func : 0,
                batch->state ? batch->state->depth_write : 0,
                batch->state ? batch->state->zeta_va : 0,
                batch->state ? batch->state->zeta_format : 0,
                (void *)s_rtv, (void *)s_dsv, sv->x, sv->y, sv->z, sv->rhw,
                min_x, max_x, min_y, max_y, min_z, max_z);
        }
    }
    {
        static unsigned sky_trace_count;
        if (sky_texture_trace_enabled() && sky_trace_count < 64 && tex_stage[0] &&
            tex_stage[0]->offset == 0x82809000) {
            const Nv2aCombiner *c = batch->combiner;
            const Nv2aVertex *v = &batch->vertices[0];
            uint32_t vi;
            float min_x = v->x, max_x = v->x;
            float min_y = v->y, max_y = v->y;
            float min_z = v->z, max_z = v->z;
            float min_rhw = v->rhw, max_rhw = v->rhw;
            for (vi = 1; vi < batch->count; vi++) {
                const Nv2aVertex *bv = &batch->vertices[vi];
                if (bv->x < min_x) min_x = bv->x;
                if (bv->x > max_x) max_x = bv->x;
                if (bv->y < min_y) min_y = bv->y;
                if (bv->y > max_y) max_y = bv->y;
                if (bv->z < min_z) min_z = bv->z;
                if (bv->z > max_z) max_z = bv->z;
                if (bv->rhw < min_rhw) min_rhw = bv->rhw;
                if (bv->rhw > max_rhw) max_rhw = bv->rhw;
            }
            fprintf(stderr, "[D3D11-SKY-DRAW] n=%u frame=%u draw=%u target=%ux%u surface=0x%08X verts=%u tex=%ux%u fmt=0x%02X combiner=%p ctrl=%08X prog=%08X rgb0=%08X alpha0=%08X rgbout0=%08X alphaout0=%08X final=%08X/%08X alpha_test=%u func=0x%X ref=%u blend=%u depth=%u depthfunc=0x%X zwrite=%u zeta=0x%08X zfmt=%u cull=%u first=(%.2f,%.2f,z=%.6g,rhw=%.6g) bounds=(x=%.2f..%.2f,y=%.2f..%.2f,z=%.6g..%.6g,rhw=%.6g..%.6g) uv=(%.5f,%.5f,%.5f) color=%08X\n",
                    ++sky_trace_count, s_frame_count + 1, s_draw_count,
                    surface->width,
                    surface->height, surface->color_va, batch->count,
                    tex_stage[0]->width, tex_stage[0]->height,
                    tex_stage[0]->color & 0xFF, (const void *)c,
                    c ? c->control : 0, c ? c->stage_program : 0,
                    c ? c->color_icw[0] : 0, c ? c->alpha_icw[0] : 0,
                    c ? c->color_ocw[0] : 0, c ? c->alpha_ocw[0] : 0,
                    c ? c->final0 : 0, c ? c->final1 : 0,
                    batch->state ? batch->state->alpha_test_enable : 0,
                    batch->state ? batch->state->alpha_func : 0,
                    batch->state ? batch->state->alpha_ref : 0,
                    batch->state ? batch->state->blend_enable : 0,
                    batch->state ? batch->state->depth_test_enable : 0,
                    batch->state ? batch->state->depth_func : 0,
                    batch->state ? batch->state->depth_write : 0,
                    batch->state ? batch->state->zeta_va : 0,
                    batch->state ? batch->state->zeta_format : 0,
                    batch->state ? batch->state->cull_enable : 0,
                    v->x, v->y, v->z, v->rhw,
                    min_x, max_x, min_y, max_y, min_z, max_z, min_rhw, max_rhw,
                    v->tex[0][0], v->tex[0][1], v->tex[0][3],
                    v->diffuse);
        }
    }
    if (force_simple_preview_scene && surface->width == 256 &&
        surface->height == 256 && batch->combiner && srvs[0] && srvs[1]) {
        uint32_t stages = batch->combiner->control & 0xFF;
        if (stages == 1 || stages == 6) {
            preview_scene_override = 1;
            if (!simple_scene_logged) {
                fprintf(stderr, "[D3D11-SIMPLE-SCENE] target=0x%08X stages=%u t0=0x%08X t1=0x%08X\n",
                        surface->color_va, stages,
                        tex_stage[0] ? tex_stage[0]->offset : 0,
                        tex_stage[1] ? tex_stage[1]->offset : 0);
                simple_scene_logged = 1;
            }
        }
    }
    if (force_simple_preview_composite && surface->width >= 512 &&
        surface->height >= 400 && tex_stage[0] &&
        tex_stage[0]->width == 256 && tex_stage[0]->height == 256) {
        for (i = 0; i < D3D_RENDER_TARGET_CACHE_SIZE; i++) {
            D3DRenderTargetCacheEntry *rt = &s_render_target_cache[i];
            if (rt->srv && rt->color_va == tex_stage[0]->offset &&
                rt->width == tex_stage[0]->width && rt->height == tex_stage[0]->height) {
                preview_composite_override = 1;
                if (!simple_preview_logged) {
                    fprintf(stderr, "[D3D11-SIMPLE-RT] using simple texture shader for preview composite guest=0x%08X\n",
                            tex_stage[0]->offset);
                    simple_preview_logged = 1;
                }
                break;
            }
        }
    }
    if (shadow_dump_candidate && shadow_per_stage_sampler_test) {
        for (st = 0; st < 4; st++)
            samplers[st] = s_shadow_stage_samplers[st] ?
                s_shadow_stage_samplers[st] : s_sampler;
        if (!shadow_per_stage_sampler_logged) {
            if (s_sampler) {
                D3D11_SAMPLER_DESC sampler_desc;
                ID3D11SamplerState_GetDesc(s_sampler, &sampler_desc);
                fprintf(stderr,
                    "[D3D11-SHADOW-SAMPLER-AB] legacy-final guest-cache=%u/%u host=%u/%u\n",
                    s_sampler_u, s_sampler_v,
                    (unsigned)sampler_desc.AddressU, (unsigned)sampler_desc.AddressV);
            }
            for (st = 0; st < 4; st++) {
                D3D11_SAMPLER_DESC sampler_desc;
                uint32_t texture_va = tex_stage[st] ? tex_stage[st]->offset : 0u;
                uint32_t guest_u = tex_stage[st] ? tex_stage[st]->addr_u : 0u;
                uint32_t guest_v = tex_stage[st] ? tex_stage[st]->addr_v : 0u;
                uint32_t host_u = 0u, host_v = 0u;
                if (samplers[st]) {
                    ID3D11SamplerState_GetDesc(samplers[st], &sampler_desc);
                    host_u = (uint32_t)sampler_desc.AddressU;
                    host_v = (uint32_t)sampler_desc.AddressV;
                }
                fprintf(stderr,
                    "[D3D11-SHADOW-SAMPLER-AB] stage=%d tex=0x%08X guest=%u/%u uploaded=%u captured=%u host=%u/%u\n",
                    st, texture_va, guest_u, guest_v, srvs[st] != NULL,
                    s_shadow_stage_samplers[st] != NULL, host_u, host_v);
            }
            shadow_per_stage_sampler_logged = 1;
        }
    } else {
        for (st = 0; st < 4; st++)
            samplers[st] = s_sampler;
    }
    cb.width = (float)s_width; cb.height = (float)s_height;
    cb.tex_width = textured && tex_stage[0] ? (float)tex_stage[0]->width : 1.0f;
    cb.tex_height = textured && tex_stage[0] ? (float)tex_stage[0]->height : 1.0f;
    cb.use_texture = textured ? 1.0f : 0.0f;
    cb.combiner_mode = !s_bypass_combiner && !preview_composite_override &&
        !preview_scene_override &&
        textured && batch->combiner &&
        nv2a_rc_is_atv_texture_diffuse(batch->combiner) ? 1.0f : 0.0f;
    if (s_trace && !s_combiner_logged && any_texture) {
        fprintf(stderr, "[D3D11-BACKEND] combiner_mode=%s\n",
                cb.combiner_mode > 0.5f ? "atv_texture_diffuse" : "nv2a_generated_or_fallback");
        s_combiner_logged = 1;
    }
    if (s_trace && any_texture && batch->combiner && tex_stage[0]) {
        const uint8_t *bytes = (const uint8_t *)batch->combiner;
        uint32_t hash = 2166136261u, k, seen = 0;
        for (k = 0; k < sizeof(*batch->combiner); k++)
            hash = (hash ^ bytes[k]) * 16777619u;
        for (k = 0; k < s_combiner_trace_count; k++)
            if (s_combiner_trace_hashes[k] == hash) { seen = 1; break; }
        if (!seen && s_combiner_trace_count < 32) {
            const Nv2aCombiner *r = batch->combiner;
            s_combiner_trace_hashes[s_combiner_trace_count++] = hash;
            fprintf(stderr, "[D3D11-COMBINER] tex=0x%08X %ux%u fmt=0x%02X ctrl=%08X prog=%08X C0=%08X A0=%08X CO0=%08X AO0=%08X final=%08X/%08X const=%08X/%08X\n",
                    batch->texture->offset, batch->texture->width,
                    batch->texture->height, batch->texture->color & 0xFF,
                    r->control, r->stage_program, r->color_icw[0],
                    r->alpha_icw[0], r->color_ocw[0], r->alpha_ocw[0],
                    r->final0, r->final1, r->final_c0, r->final_c1);
        }
    }
    cb.reserved0 = (getenv("RECOMP_D3D_SHADOW_OUTSIDE_ZERO") &&
                    getenv("RECOMP_D3D_SHADOW_OUTSIDE_ZERO")[0] != '0' &&
                    tex_stage[0] && tex_stage[1] &&
                    tex_stage[0]->color == 0x06u &&
                    tex_stage[0]->width == 256u && tex_stage[0]->height == 256u &&
                    tex_stage[1]->color == 0x0Bu &&
                    tex_stage[1]->width == 128u && tex_stage[1]->height == 128u) ?
                   1.0f : 0.0f;
    cb.reserved1 = 0.0f;
    cb.alpha_test = batch->state && batch->state->alpha_test_enable &&
                    !far_racer_alpha_override && !actor_alpha_test_override ?
                    1.0f : 0.0f;
    cb.alpha_func = batch->state ? (float)batch->state->alpha_func : 0x0207;
    cb.alpha_ref = batch->state ? (float)(batch->state->alpha_ref & 0xFF) / 255.0f : 0.0f;
    cb.reserved2 = s_raw_texture ? 1.0f : 0.0f;
    if (s_trace && !s_alpha_logged && batch->state && batch->state->alpha_test_enable) {
        fprintf(stderr, "[D3D11-BACKEND] alpha_test=enabled func=0x%04X ref=%u\n",
                batch->state->alpha_func, batch->state->alpha_ref & 0xFF);
        s_alpha_logged = 1;
    }
    ID3D11DeviceContext_UpdateSubresource(s_ctx, (ID3D11Resource *)s_cb, 0,
                                          NULL, &cb, 0, 0);
    if (!s_raw_texture && !s_bypass_combiner && !preview_composite_override &&
        !preview_scene_override &&
        batch->combiner &&
        (!nv2a_rc_is_atv_texture_diffuse(batch->combiner) ||
         (shadow_force_combiner && shadow_candidate))) {
        uint32_t func = batch->state ? batch->state->alpha_func : 0x207;
        d3d11_build_combiner_state(batch->combiner, &comb_state);
        comb_ps = d3d8_combiners_get_shader_for_device(&comb_state, s_dev);
        if (comb_ps && s_rcb) {
            memset(&rc_cb, 0, sizeof(rc_cb));
            for (i = 0; i < NV2A_MAX_COMBINER_STAGES; i++) {
                nv2a_rc_unpack(batch->combiner->factor0[i], rc_cb.c0[i]);
                nv2a_rc_unpack(batch->combiner->factor1[i], rc_cb.c1[i]);
            }
            nv2a_rc_unpack(batch->combiner->final_c0, rc_cb.final_c0);
            nv2a_rc_unpack(batch->combiner->final_c1, rc_cb.final_c1);
            rc_cb.fog_color[0] = batch->state ? (float)(batch->state->fog_color & 0xFF) / 255.0f : 0.0f;
            rc_cb.fog_color[1] = batch->state ? (float)((batch->state->fog_color >> 8) & 0xFF) / 255.0f : 0.0f;
            rc_cb.fog_color[2] = batch->state ? (float)((batch->state->fog_color >> 16) & 0xFF) / 255.0f : 0.0f;
            rc_cb.fog_color[3] = 1.0f;
            rc_cb.alpha_ref = batch->state ?
                (float)(batch->state->alpha_ref & 0xFF) / 255.0f : 0.0f;
            rc_cb.alpha_func = (func >= 0x200 && func <= 0x207) ? func - 0x1FF : 8;
            rc_cb.alpha_test_enable = batch->state && batch->state->alpha_test_enable &&
                                      !far_racer_alpha_override &&
                                      !actor_alpha_test_override;
            rc_cb.fog_enable = batch->state ? batch->state->fog_enable : 0;
            for (i = 0; i < NV2A_MAX_TEXTURES; i++)
                /* 0x06 is full-color A8R8G8B8; only 0x19 is alpha-only A8. */
                rc_cb.alpha_only[i] = tex_stage[i] &&
                    (tex_stage[i]->color & 0xFF) ==
                        NV097_SET_TEXTURE_FORMAT_COLOR_SZ_A8;
            if (SUCCEEDED(ID3D11DeviceContext_Map(s_ctx, (ID3D11Resource *)s_rcb, 0,
                                                  D3D11_MAP_WRITE_DISCARD, 0, &map))) {
                memcpy(map.pData, &rc_cb, sizeof(rc_cb));
                ID3D11DeviceContext_Unmap(s_ctx, (ID3D11Resource *)s_rcb, 0);
            } else {
                comb_ps = NULL;
            }
            if (s_trace && s_combiner_trace_count <= 4) {
                uint32_t ntex = (comb_state.tex_mode[0] != NV2A_TEXMODE_NONE) +
                                (comb_state.tex_mode[1] != NV2A_TEXMODE_NONE) +
                                (comb_state.tex_mode[2] != NV2A_TEXMODE_NONE) +
                                (comb_state.tex_mode[3] != NV2A_TEXMODE_NONE);
                fprintf(stderr, "[D3D11-COMBINER-SHADER] generated stages=%d textures=%u\n",
                        comb_state.num_stages, ntex);
            }
        }
    }
    if (s_perf_trace) perf_stage_record(2, &perf_stage_last);
    /* Discard at frame start, then append into ranges not used by earlier draws. */
    if (s_vb_cursor + batch->count > D3D_VERTEX_BUFFER_CAPACITY)
        s_vb_cursor = 0;
    offset = (UINT)(s_vb_cursor * sizeof(D3DVertex));
    if (FAILED(ID3D11DeviceContext_Map(s_ctx, (ID3D11Resource *)s_vb, 0,
                                       s_vb_cursor ? D3D11_MAP_WRITE_NO_OVERWRITE :
                                                     D3D11_MAP_WRITE_DISCARD,
                                       0, &map))) return;
    if (s_perf_trace) perf_stage_record(3, &perf_stage_last);
    {
        static int actor_fog_ab_enabled = -1;
        static uint32_t actor_fog_ab_logs, actor_fog_ab_last_frame;
        static uint32_t actor_fog_ab_frame_logs;
        const char *actor_fog_env;
        int force_actor_fog = 0;
        float fog_min = 0.0f, fog_max = 0.0f;
        if (actor_fog_ab_enabled < 0) {
            actor_fog_env = getenv("RECOMP_D3D_FORCE_ACTOR_FOG");
            actor_fog_ab_enabled = actor_fog_env && actor_fog_env[0] &&
                                   actor_fog_env[0] != '0';
        }
        if (actor_fog_ab_enabled && surface->width == 640 && surface->height == 480 &&
            batch->count >= 48 && batch->count <= 512 && batch->combiner &&
            batch->combiner->control == 0x00011108u && tex_stage[0] && tex_stage[1] &&
            ((tex_stage[0]->color & 0xFF) == 0x0C ||
             (tex_stage[0]->color & 0xFF) == 0x0F) &&
            (tex_stage[1]->color & 0xFF) == 0x0F)
            force_actor_fog = 1;
        for (i = 0; i < batch->count; i++) {
            const Nv2aVertex *v = &batch->vertices[i];
            D3DVertex *o = &((D3DVertex *)map.pData)[s_vb_cursor + i];
            if (i == 0) fog_min = fog_max = v->fog;
            else {
                if (v->fog < fog_min) fog_min = v->fog;
                if (v->fog > fog_max) fog_max = v->fog;
            }
            o->x = v->x; o->y = v->y; o->z = d3d_depth_value(v->z); o->rhw = v->rhw;
            o->color[0] = ((v->diffuse >> 16) & 255) / 255.0f;
            o->color[1] = ((v->diffuse >> 8) & 255) / 255.0f;
            o->color[2] = (v->diffuse & 255) / 255.0f;
            o->color[3] = ((v->diffuse >> 24) & 255) / 255.0f;
            o->specular[0] = ((v->specular >> 16) & 255) / 255.0f;
            o->specular[1] = ((v->specular >> 8) & 255) / 255.0f;
            o->specular[2] = (v->specular & 255) / 255.0f;
            o->specular[3] = ((v->specular >> 24) & 255) / 255.0f;
            o->fog = force_actor_fog ? 1.0f : v->fog;
            for (st = 0; st < 4; st++) {
                uint32_t mode = batch->combiner ?
                    ((batch->combiner->stage_program >> (st * 5)) & 0x1F) : 0;
                o->tex[st][0] = v->tex[st][0];
                o->tex[st][1] = v->tex[st][1];
                o->tex[st][2] = mode == 3 ? v->tex[st][2] : v->tex[st][3];
                o->tex[st][3] = v->tex[st][2];
            }
        }
        if (force_actor_fog) {
            uint32_t frame_now = s_frame_count + 1;
            if (actor_fog_ab_last_frame != frame_now) {
                actor_fog_ab_last_frame = frame_now;
                actor_fog_ab_frame_logs = 0;
            }
            if (actor_fog_ab_logs < 128 && actor_fog_ab_frame_logs < 4) {
            fprintf(stderr, "[D3D11-ACTOR-FOG-AB] frame=%u draw=%u verts=%u tex0=0x%08X/fmt%02X tex1=0x%08X/fmt%02X fog=%g..%g stateFog=%u fogColor=0x%08X forced=1\n",
                    s_frame_count + 1, s_draw_count, batch->count,
                    tex_stage[0]->offset, tex_stage[0]->color & 0xFF,
                    tex_stage[1]->offset, tex_stage[1]->color & 0xFF,
                    fog_min, fog_max,
                    batch->state ? batch->state->fog_enable : 0,
                    batch->state ? batch->state->fog_color : 0);
            actor_fog_ab_logs++;
            actor_fog_ab_frame_logs++;
            }
        }
    }
    /* The per-vertex range scan below is diagnostic only; keep it off the
     * normal rendering hot path unless detailed D3D tracing was requested. */
    if (s_perf_trace) perf_stage_record(4, &perf_stage_last);
    if (s_trace && batch->state && batch->state->depth_test_enable) {
        float zmin = 1.0f, zmax = 0.0f, raw_min = batch->vertices[0].z;
        float raw_max = raw_min, rhw_min = batch->vertices[0].rhw;
        float rhw_max = rhw_min;
        uint32_t j;
        for (j = 0; j < batch->count; j++) {
            float z = d3d_depth_value(batch->vertices[j].z);
            if (z < zmin) zmin = z;
            if (z > zmax) zmax = z;
            if (batch->vertices[j].z < raw_min) raw_min = batch->vertices[j].z;
            if (batch->vertices[j].z > raw_max) raw_max = batch->vertices[j].z;
            if (batch->vertices[j].rhw < rhw_min) rhw_min = batch->vertices[j].rhw;
            if (batch->vertices[j].rhw > rhw_max) rhw_max = batch->vertices[j].rhw;
        }
        s_depth_batches++;
        if (s_trace && (!s_depth_logged || s_depth_batches <= 8 || (s_depth_batches % 100) == 0)) {
            fprintf(stderr, "[D3D11-BACKEND] depth batch=%u raw=%.6f..%.6f norm=%.6f..%.6f rhw=%.6f..%.6f\n",
                    s_depth_batches, raw_min, raw_max, zmin, zmax, rhw_min, rhw_max);
            fprintf(stderr, "[D3D11-BACKEND] depth samples z0=%.6f z1=%.6f\n",
                    d3d_depth_value(batch->vertices[0].z),
                    batch->count > 1 ? d3d_depth_value(batch->vertices[1].z) : 0.0f);
            s_depth_logged = 1;
        }
    }
    ID3D11DeviceContext_Unmap(s_ctx, (ID3D11Resource *)s_vb, 0);
    if (s_perf_trace) perf_stage_record(5, &perf_stage_last);
    vp.TopLeftX = 0; vp.TopLeftY = 0; vp.Width = (float)s_width; vp.Height = (float)s_height;
    vp.MinDepth = 0; vp.MaxDepth = 1;
    if (!s_binding_cache_valid || s_bound_viewport_width != s_width ||
        s_bound_viewport_height != s_height) {
        ID3D11DeviceContext_RSSetViewports(s_ctx, 1, &vp);
        s_bound_viewport_width = s_width;
        s_bound_viewport_height = s_height;
    }
    if (!s_binding_cache_valid || s_bound_rtv != s_rtv || s_bound_dsv != s_dsv) {
        ID3D11DeviceContext_OMSetRenderTargets(s_ctx, 1, &s_rtv, s_dsv);
        s_bound_rtv = s_rtv;
        s_bound_dsv = s_dsv;
    }
    render_state = batch->state;
    shadow_candidate = is_shadow_geometry_candidate(surface, batch, shadow_tex0, shadow_tex1);
    if (shadow_force_combiner < 0) {
        shadow_force_combiner_env = getenv("RECOMP_D3D_SHADOW_FORCE_COMBINER");
        shadow_force_combiner = shadow_force_combiner_env &&
                               shadow_force_combiner_env[0] &&
                               shadow_force_combiner_env[0] != '0';
    }
    if (shadow_route_trace < 0) {
        shadow_route_trace_env = getenv("RECOMP_D3D_SHADOW_ROUTE_TRACE");
        shadow_route_trace = shadow_route_trace_env && shadow_route_trace_env[0] &&
                             shadow_route_trace_env[0] != '0';
    }
    if (shadow_route_trace && shadow_candidate && shadow_route_trace_count < 512u) {
        const Nv2aCombiner *c = batch->combiner;
        const Nv2aVertex *v = &batch->vertices[0];
        fprintf(stderr, "[D3D11-SHADOW-ROUTE] frame=%u draw=%u verts=%u "
                "simple_class=%u force=%u comb_ctrl=0x%08X prog=0x%08X "
                "stage0=0x%08X/%02X stage1=0x%08X/%02X "
                "tc0=%.4f,%.4f,%.4f,%.4f tc1=%.4f,%.4f,%.4f,%.4f "
                "tc2=%.4f,%.4f,%.4f,%.4f diffuse=0x%08X "
                "blend=%u alpha=%u/0x%X/%u depth=%u/write%u\n",
                s_frame_count + 1u, s_draw_count, batch->count,
                c ? nv2a_rc_is_atv_texture_diffuse(c) : 0u,
                shadow_force_combiner, c ? c->control : 0u,
                c ? c->stage_program : 0u,
                shadow_tex0 ? shadow_tex0->offset : 0u,
                shadow_tex0 ? shadow_tex0->color & 0xFFu : 0u,
                shadow_tex1 ? shadow_tex1->offset : 0u,
                shadow_tex1 ? shadow_tex1->color & 0xFFu : 0u,
                v->tex[0][0], v->tex[0][1], v->tex[0][2], v->tex[0][3],
                v->tex[1][0], v->tex[1][1], v->tex[1][2], v->tex[1][3],
                v->tex[2][0], v->tex[2][1], v->tex[2][2], v->tex[2][3],
                v->diffuse, batch->state ? batch->state->blend_enable : 0u,
                batch->state ? batch->state->alpha_test_enable : 0u,
                batch->state ? batch->state->alpha_func : 0u,
                batch->state ? batch->state->alpha_ref & 0xFFu : 0u,
                batch->state ? batch->state->depth_test_enable : 0u,
                batch->state ? batch->state->depth_write : 0u);
        shadow_route_trace_count++;
    }
    if (shadow_no_cull < 0) {
        shadow_no_cull_env = getenv("RECOMP_D3D_SHADOW_NO_CULL");
        shadow_no_cull = shadow_no_cull_env && shadow_no_cull_env[0] &&
                         shadow_no_cull_env[0] != '0';
    }
    if (shadow_no_cull && shadow_candidate && batch->state) {
        shadow_blend_state = *batch->state;
        shadow_blend_state.cull_enable = 0;
        render_state = &shadow_blend_state;
        fprintf(stderr, "[D3D11-SHADOW-NO-CULL] frame=%u draw=%u verts=%u\n",
                s_frame_count + 1u, s_draw_count, batch->count);
    }
    {
        static int clip_range_trace = -1;
        static int clip_range_last_valid;
        static uint32_t clip_range_last_min, clip_range_last_max;
        static uint32_t clip_range_trace_count;
        const char *trace_env;
        if (clip_range_trace < 0) {
            trace_env = getenv("RECOMP_D3D_CLIP_RANGE_TRACE");
            clip_range_trace = trace_env && trace_env[0] && trace_env[0] != '0';
        }
        if (clip_range_trace && batch->state && clip_range_trace_count < 64u) {
            union { float f; uint32_t u; } min_bits, max_bits;
            min_bits.f = batch->state->depth_min;
            max_bits.f = batch->state->depth_max;
            if (!clip_range_last_valid || min_bits.u != clip_range_last_min ||
                max_bits.u != clip_range_last_max) {
                fprintf(stderr, "[D3D11-CLIP-RANGE] target=0x%08X %ux%u zeta=0x%08X depth=%u func=0x%X write=%u min=%.9g max=%.9g bits=%08X/%08X\n",
                        surface->color_va, surface->width, surface->height,
                        batch->state->zeta_va, batch->state->depth_test_enable,
                        batch->state->depth_func, batch->state->depth_write,
                        batch->state->depth_min, batch->state->depth_max,
                        min_bits.u, max_bits.u);
                clip_range_last_min = min_bits.u;
                clip_range_last_max = max_bits.u;
                clip_range_last_valid = 1;
                clip_range_trace_count++;
            }
        }
    }
    shadow_tex0 = batch->textures[0] ? batch->textures[0] : batch->texture;
    shadow_tex1 = batch->textures[1];
    trace_shadow_tile_candidate(surface, batch, shadow_tex0, shadow_tex1);
    trace_shadow_card_candidate(surface, batch, shadow_tex0, shadow_tex1);
    /* Match stable texture/state metadata; guest texture VAs can move per run. */
    if (force_shadow_blend && surface->width == 640 && surface->height == 480 &&
        batch->state && !batch->state->blend_enable &&
        batch->state->alpha_test_enable && batch->count <= 12 &&
        shadow_tex0 && shadow_tex1 && shadow_tex0->color == 0x06 &&
        shadow_tex1->color == 0x0B && shadow_tex1->offset == 0x83552000 &&
        batch->vertices[0].diffuse == 0xFF808080) {
        shadow_blend_state = *batch->state;
        shadow_blend_state.blend_enable = 1;
        render_state = &shadow_blend_state;
        if (shadow_blend_override_count < 16u) {
            fprintf(stderr,
                "[D3D11-SHADOW-AB] match=%u frame=%u surface=0x%08X verts=%u tex0=0x%08X tex1=0x%08X guest_blend=%u test_blend=%u\n",
                shadow_blend_override_count + 1, s_frame_count + 1,
                surface->color_va, batch->count, shadow_tex0->offset,
                shadow_tex1->offset, batch->state->blend_enable,
                shadow_blend_state.blend_enable);
        }
        shadow_blend_override_count++;
    }
    if (force_actor_no_depth && surface->width == 640 && surface->height == 480 &&
        batch->state && batch->state->depth_test_enable &&
        batch->count >= 48 && batch->count <= 512 && batch->combiner &&
        batch->combiner->control == 0x00011108u && shadow_tex0 && shadow_tex1 &&
        ((shadow_tex0->color & 0xFF) == 0x0C ||
         (shadow_tex0->color & 0xFF) == 0x0F) &&
        (shadow_tex1->color & 0xFF) == 0x0F) {
        actor_depth_state = *batch->state;
        actor_depth_state.depth_test_enable = 0;
        actor_depth_state.depth_write = 0;
        render_state = &actor_depth_state;
        if (actor_no_depth_override_count < 128u) {
            fprintf(stderr, "[D3D11-ACTOR-DEPTH-AB] frame=%u draw=%u verts=%u tex0=0x%08X/fmt%02X tex1=0x%08X/fmt%02X guest_depth=%u func=0x%X write=%u clip_range=[%.5g..%.5g] forced_depth=off\n",
                    s_frame_count + 1, s_draw_count, batch->count,
                    shadow_tex0->offset, shadow_tex0->color & 0xFF,
                    shadow_tex1->offset, shadow_tex1->color & 0xFF,
                    batch->state->depth_test_enable, batch->state->depth_func,
                    batch->state->depth_write,
                    batch->state->depth_min, batch->state->depth_max);
            actor_no_depth_override_count++;
        }
    }
    apply_render_state(render_state);
    if (!s_binding_cache_valid || s_bound_vb != s_vb ||
        s_bound_vb_stride != stride || s_bound_vb_offset != offset)
        ID3D11DeviceContext_IASetVertexBuffers(s_ctx, 0, 1, &s_vb, &stride, &offset);
    s_bound_vb = s_vb;
    s_bound_vb_stride = stride;
    s_bound_vb_offset = offset;
    if (!s_binding_cache_valid || s_bound_layout != s_layout)
        ID3D11DeviceContext_IASetInputLayout(s_ctx, s_layout);
    s_bound_layout = s_layout;
    ID3D11DeviceContext_IASetPrimitiveTopology(s_ctx, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    if (!s_binding_cache_valid || s_bound_vs != s_vs)
        ID3D11DeviceContext_VSSetShader(s_ctx, s_vs, NULL, 0);
    s_bound_vs = s_vs;
    if (!s_binding_cache_valid || s_bound_vs_cb != s_cb)
        ID3D11DeviceContext_VSSetConstantBuffers(s_ctx, 0, 1, &s_cb);
    s_bound_vs_cb = s_cb;
    if (comb_ps) {
        if (!s_binding_cache_valid || s_bound_ps != comb_ps)
            ID3D11DeviceContext_PSSetShader(s_ctx, comb_ps, NULL, 0);
        s_bound_ps = comb_ps;
        if (!s_binding_cache_valid || s_bound_ps_cb != s_rcb)
            ID3D11DeviceContext_PSSetConstantBuffers(s_ctx, 0, 1, &s_rcb);
        s_bound_ps_cb = s_rcb;
    } else {
        if (!s_binding_cache_valid || s_bound_ps != s_ps)
            ID3D11DeviceContext_PSSetShader(s_ctx, s_ps, NULL, 0);
        s_bound_ps = s_ps;
        if (!s_binding_cache_valid || s_bound_ps_cb != s_cb)
            ID3D11DeviceContext_PSSetConstantBuffers(s_ctx, 0, 1, &s_cb);
        s_bound_ps_cb = s_cb;
    }
    if (!s_binding_cache_valid || memcmp(s_bound_srvs, srvs, sizeof(srvs)) != 0) {
        ID3D11DeviceContext_PSSetShaderResources(s_ctx, 0, 4, srvs);
        memcpy(s_bound_srvs, srvs, sizeof(srvs));
    }
    if (!s_binding_cache_valid || memcmp(s_bound_samplers, samplers, sizeof(samplers)) != 0) {
        ID3D11DeviceContext_PSSetSamplers(s_ctx, 0, 4, samplers);
        memcpy(s_bound_samplers, samplers, sizeof(samplers));
    }
    s_binding_cache_valid = 1;
    ID3D11DeviceContext_Draw(s_ctx, batch->count, 0);
    s_vb_cursor += batch->count;
    s_draw_count++;
    if (s_perf_trace) {
        s_perf_vertex_count += batch->count;
        perf_stage_record(6, &perf_stage_last);
    }
    if (batch_trace_enabled() == 1 && batch->count >= 64 && s_batch_trace_samples < 32) {
        const Nv2aVertex *v = &batch->vertices[0];
        fprintf(stderr, "[D3D11-BATCH] frame=%u draw=%u verts=%u first=(%.2f,%.2f z=%.5g rhw=%.5g) cull=%u face=0x%X depth=%u tex0=%u\n",
                s_frame_count + 1, s_draw_count, batch->count, v->x, v->y,
                v->z, v->rhw,
                batch->state ? batch->state->cull_enable : 0,
                batch->state ? batch->state->cull_face : 0,
                batch->state ? batch->state->depth_test_enable : 0,
                batch->textures[0] != NULL || batch->texture != NULL);
        s_batch_trace_samples++;
    }
    /* Level 3 samples the current scene only while F12 is held. */
    if (((batch_trace_enabled() == 2 && s_frame_count >= 900 &&
          (s_frame_count % 10) == 0) ||
         (batch_trace_enabled() >= 3 &&
          diagnostic_f12_down())) &&
        s_batch_trace_samples < 2048) {
        const Nv2aTexture *t0 = batch->textures[0] ? batch->textures[0] : batch->texture;
        float min_x = 0.0f, max_x = 0.0f, min_y = 0.0f, max_y = 0.0f;
        float min_z = 0.0f, max_z = 0.0f, min_w = 0.0f, max_w = 0.0f;
        uint32_t j, finite = 0, invalid = 0;
        int model_like = batch->count >= 192 ||
            (batch->state && batch->state->cull_enable);
        for (j = 0; j < batch->count; ++j) {
            const Nv2aVertex *v = &batch->vertices[j];
            if (v->x != v->x || v->y != v->y || v->z != v->z || v->rhw != v->rhw ||
                v->x > 1.0e30f || v->x < -1.0e30f ||
                v->y > 1.0e30f || v->y < -1.0e30f ||
                v->z > 1.0e30f || v->z < -1.0e30f ||
                v->rhw > 1.0e30f || v->rhw < -1.0e30f) {
                invalid++;
                continue;
            }
            if (!finite) {
                min_x = max_x = v->x; min_y = max_y = v->y;
                min_z = max_z = v->z; min_w = max_w = v->rhw;
            } else {
                if (v->x < min_x) min_x = v->x;
                if (v->x > max_x) max_x = v->x;
                if (v->y < min_y) min_y = v->y;
                if (v->y > max_y) max_y = v->y;
                if (v->z < min_z) min_z = v->z;
                if (v->z > max_z) max_z = v->z;
                if (v->rhw < min_w) min_w = v->rhw;
                if (v->rhw > max_w) max_w = v->rhw;
            }
            if (v->z < 0.49f || v->z > 0.51f ||
                v->rhw < 0.99f || v->rhw > 1.01f)
                model_like = 1;
            finite++;
        }
        if (invalid)
            model_like = 1;
        /* Level 3 includes small screen-aligned quads such as shadow cards. */
        if (model_like || batch_trace_enabled() >= 3) {
            const Nv2aTexture *t1 = batch->textures[1];
            if (sun_trace_enabled() && (diagnostic_f12_down() || sun_trace_active()) &&
                surface->width == 640 && surface->height == 480 &&
                t0 && finite && s_sun_trace_samples < 256 &&
                (max_x - min_x) >= 24.0f && (max_y - min_y) >= 24.0f) {
                uint32_t k;
                float u0min = batch->vertices[0].tex[0][0];
                float u0max = u0min;
                float v0min = batch->vertices[0].tex[0][1];
                float v0max = v0min;
                float u1min = batch->vertices[0].tex[1][0];
                float u1max = u1min;
                float v1min = batch->vertices[0].tex[1][1];
                float v1max = v1min;
                for (k = 1; k < batch->count; ++k) {
                    const Nv2aVertex *sv = &batch->vertices[k];
                    if (sv->tex[0][0] < u0min) u0min = sv->tex[0][0];
                    if (sv->tex[0][0] > u0max) u0max = sv->tex[0][0];
                    if (sv->tex[0][1] < v0min) v0min = sv->tex[0][1];
                    if (sv->tex[0][1] > v0max) v0max = sv->tex[0][1];
                    if (sv->tex[1][0] < u1min) u1min = sv->tex[1][0];
                    if (sv->tex[1][0] > u1max) u1max = sv->tex[1][0];
                    if (sv->tex[1][1] < v1min) v1min = sv->tex[1][1];
                    if (sv->tex[1][1] > v1max) v1max = sv->tex[1][1];
                }
                fprintf(stderr, "[D3D11-SUN-CANDIDATE] frame=%u draw=%u verts=%u xy=[%.2f..%.2f,%.2f..%.2f] z=[%.5g..%.5g] rhw=[%.5g..%.5g] tex0=0x%08X %ux%u fmt=0x%02X tex1=0x%08X %ux%u fmt1=0x%02X uv0=[%.3f..%.3f,%.3f..%.3f] uv1=[%.3f..%.3f,%.3f..%.3f] blend=%u src=0x%X dst=0x%X alpha=%u/0x%X/%u depth=%u cull=%u comb=0x%08X prog=0x%08X diffuse=%08X\n",
                        s_frame_count + 1, s_draw_count, batch->count,
                        min_x, max_x, min_y, max_y, min_z, max_z, min_w, max_w,
                        t0->offset, t0->width, t0->height, t0->color & 0xFF,
                        t1 ? t1->offset : 0, t1 ? t1->width : 0,
                        t1 ? t1->height : 0, t1 ? t1->color & 0xFF : 0,
                        u0min, u0max, v0min, v0max,
                        u1min, u1max, v1min, v1max,
                        batch->state ? batch->state->blend_enable : 0,
                        batch->state ? batch->state->blend_src : 0,
                        batch->state ? batch->state->blend_dst : 0,
                        batch->state ? batch->state->alpha_test_enable : 0,
                        batch->state ? batch->state->alpha_func : 0,
                        batch->state ? batch->state->alpha_ref : 0,
                        batch->state ? batch->state->depth_test_enable : 0,
                        batch->state ? batch->state->cull_enable : 0,
                        batch->combiner ? batch->combiner->control : 0,
                        batch->combiner ? batch->combiner->stage_program : 0,
                        batch->vertices[0].diffuse);
                s_sun_trace_samples++;
            }
            static int raw_trace_enabled = -1;
            static int raw_trace_dumps;
            const char *raw_trace_env;
            unsigned raw_stage, raw_stage_count;
            if (raw_trace_enabled < 0) {
                raw_trace_env = getenv("RECOMP_D3D_COMBINER_RAW_TRACE");
                raw_trace_enabled = raw_trace_env && raw_trace_env[0] &&
                                    raw_trace_env[0] != '0';
            }
            if (raw_trace_enabled && raw_trace_dumps < 3 &&
                surface->width == 256 && surface->height == 256 &&
                batch->combiner && (batch->combiner->control & 0xFF) == 6) {
                raw_stage_count = batch->combiner->control & 0xFF;
                if (raw_stage_count > NV2A_MAX_COMBINER_STAGES)
                    raw_stage_count = NV2A_MAX_COMBINER_STAGES;
                fprintf(stderr, "[D3D11-COMBINER-RAW] target=0x%08X t0=0x%08X t1=0x%08X stages=%u prog=0x%08X final=0x%08X/0x%08X const=0x%08X/0x%08X\n",
                        surface->color_va, t0 ? t0->offset : 0,
                        t1 ? t1->offset : 0, raw_stage_count,
                        batch->combiner->stage_program, batch->combiner->final0,
                        batch->combiner->final1, batch->combiner->final_c0,
                        batch->combiner->final_c1);
                for (raw_stage = 0; raw_stage < raw_stage_count; raw_stage++) {
                    fprintf(stderr, "[D3D11-COMBINER-RAW] stage=%u rgb=0x%08X alpha=0x%08X rgbout=0x%08X alphaout=0x%08X c0=0x%08X c1=0x%08X\n",
                            raw_stage, batch->combiner->color_icw[raw_stage],
                            batch->combiner->alpha_icw[raw_stage],
                            batch->combiner->color_ocw[raw_stage],
                            batch->combiner->alpha_ocw[raw_stage],
                            batch->combiner->factor0[raw_stage],
                            batch->combiner->factor1[raw_stage]);
                }
                raw_trace_dumps++;
            }
            fprintf(stderr, "[D3D11-BATCH2] frame=%u surface=%ux%u color=0x%08X pitch=%u bpp=%u aa=%ux%u callback=%u draw=%u verts=%u finite=%u invalid=%u xy=[%.2f..%.2f,%.2f..%.2f] z=[%.5g..%.5g] rhw=[%.5g..%.5g] depth=%u cull=%u face=0x%X blend=%u src=0x%X dst=0x%X eq=0x%X mask=0x%08X alpha_test=%u alpha_func=0x%X alpha_ref=%u rc=0x%08X prog=0x%08X icw0=0x%08X/0x%08X ocw0=0x%08X/0x%08X final=0x%08X/0x%08X tex=%s off=0x%08X %ux%u texpitch=%u fmt=0x%02X tex1=%s off1=0x%08X %ux%u fmt1=0x%02X srv=%u/%u diffuse0=%08X uv0=(%.3f,%.3f) alpha_only0=%u alpha_only1=%u\n",
                    s_frame_count + 1, surface->width, surface->height,
                    surface->color_va, surface->pitch, surface->bytes_per_pixel,
                    surface->aa_sx, surface->aa_sy,
                    s_frame_callbacks, s_draw_count, batch->count,
                    finite, invalid, min_x, max_x, min_y, max_y, min_z, max_z,
                    min_w, max_w,
                    batch->state ? batch->state->depth_test_enable : 0,
                    batch->state ? batch->state->cull_enable : 0,
                    batch->state ? batch->state->cull_face : 0,
                    batch->state ? batch->state->blend_enable : 0,
                    batch->state ? batch->state->blend_src : 0,
                    batch->state ? batch->state->blend_dst : 0,
                    batch->state ? batch->state->blend_eq : 0,
                    batch->state ? batch->state->color_mask : 0,
                    batch->state ? batch->state->alpha_test_enable : 0,
                    batch->state ? batch->state->alpha_func : 0,
                    batch->state ? batch->state->alpha_ref : 0,
                    batch->combiner ? batch->combiner->control : 0,
                    batch->combiner ? batch->combiner->stage_program : 0,
                    batch->combiner ? batch->combiner->color_icw[0] : 0,
                    batch->combiner ? batch->combiner->alpha_icw[0] : 0,
                    batch->combiner ? batch->combiner->color_ocw[0] : 0,
                    batch->combiner ? batch->combiner->alpha_ocw[0] : 0,
                    batch->combiner ? batch->combiner->final0 : 0,
                    batch->combiner ? batch->combiner->final1 : 0,
                    t0 ? "yes" : "no", t0 ? t0->offset : 0,
                    t0 ? t0->width : 0, t0 ? t0->height : 0,
                    t0 ? t0->pitch : 0, t0 ? t0->color & 0xFF : 0,
                    t1 ? "yes" : "no", t1 ? t1->offset : 0,
                    t1 ? t1->width : 0, t1 ? t1->height : 0,
                    t1 ? t1->color & 0xFF : 0,
                    srvs[0] != NULL, srvs[1] != NULL,
                    batch->vertices[0].diffuse,
                    batch->vertices[0].tex[0][0], batch->vertices[0].tex[0][1],
                    t0 && (t0->color & 0xFF) == NV097_SET_TEXTURE_FORMAT_COLOR_SZ_A8 ? 1u : 0u,
                    t1 && (t1->color & 0xFF) == NV097_SET_TEXTURE_FORMAT_COLOR_SZ_A8 ? 1u : 0u);
            {
                static int actor_probe_enabled = -1;
                static unsigned actor_probe_samples;
                const char *actor_probe_env;
                if (actor_probe_enabled < 0) {
                    actor_probe_env = getenv("RECOMP_D3D_ACTOR_TRACE");
                    actor_probe_enabled = actor_probe_env && actor_probe_env[0] &&
                                          actor_probe_env[0] != '0';
                }
                if (actor_probe_enabled && actor_probe_samples < 256 &&
                    diagnostic_f12_down() &&
                    surface->width == 640 && surface->height == 480 &&
                    batch->count >= 48 && batch->count <= 512 &&
                    (max_x - min_x) <= 80.0f && (max_y - min_y) <= 80.0f &&
                    min_y < 200.0f) {
                    uint32_t k, zero_alpha = 0, min_alpha = 255, max_alpha = 0;
                    float u0min = 0.0f, u0max = 0.0f, v0min = 0.0f, v0max = 0.0f;
                    float u1min = 0.0f, u1max = 0.0f, v1min = 0.0f, v1max = 0.0f;
                    float vertex_fog_min = 0.0f, vertex_fog_max = 0.0f;
                    for (k = 0; k < batch->count; ++k) {
                        const Nv2aVertex *av = &batch->vertices[k];
                        uint32_t alpha = (av->diffuse >> 24) & 0xFF;
                        if (alpha == 0) zero_alpha++;
                        if (alpha < min_alpha) min_alpha = alpha;
                        if (alpha > max_alpha) max_alpha = alpha;
                        if (k == 0) {
                            u0min = u0max = av->tex[0][0]; v0min = v0max = av->tex[0][1];
                            u1min = u1max = av->tex[1][0]; v1min = v1max = av->tex[1][1];
                            vertex_fog_min = vertex_fog_max = av->fog;
                        } else {
                            if (av->tex[0][0] < u0min) u0min = av->tex[0][0];
                            if (av->tex[0][0] > u0max) u0max = av->tex[0][0];
                            if (av->tex[0][1] < v0min) v0min = av->tex[0][1];
                            if (av->tex[0][1] > v0max) v0max = av->tex[0][1];
                            if (av->tex[1][0] < u1min) u1min = av->tex[1][0];
                            if (av->tex[1][0] > u1max) u1max = av->tex[1][0];
                            if (av->tex[1][1] < v1min) v1min = av->tex[1][1];
                            if (av->tex[1][1] > v1max) v1max = av->tex[1][1];
                            if (av->fog < vertex_fog_min) vertex_fog_min = av->fog;
                            if (av->fog > vertex_fog_max) vertex_fog_max = av->fog;
                        }
                    }
                    fprintf(stderr, "[D3D11-ACTOR-PROBE] frame=%u draw=%u verts=%u xy=[%.2f..%.2f,%.2f..%.2f] z=[%.5g..%.5g] rhw=[%.5g..%.5g] tex=0x%08X/fmt%02X tex1=0x%08X/fmt%02X diffuse0=%08X alpha=%u..%u zero_alpha=%u uv0=[%.3f..%.3f,%.3f..%.3f] uv1=[%.3f..%.3f,%.3f..%.3f] combiner=0x%08X depth=%u cull=%u blend=%u alpha_test=%u/%u/%u vertexFog=%.5g..%.5g fogState=%u fogColor=0x%08X\n",
                            s_frame_count + 1, s_draw_count, batch->count,
                            min_x, max_x, min_y, max_y, min_z, max_z, min_w, max_w,
                            t0 ? t0->offset : 0, t0 ? t0->color & 0xFF : 0,
                            t1 ? t1->offset : 0, t1 ? t1->color & 0xFF : 0,
                            batch->vertices[0].diffuse, min_alpha, max_alpha, zero_alpha,
                            u0min, u0max, v0min, v0max, u1min, u1max, v1min, v1max,
                            batch->combiner ? batch->combiner->control : 0,
                            batch->state ? batch->state->depth_test_enable : 0,
                            batch->state ? batch->state->cull_enable : 0,
                            batch->state ? batch->state->blend_enable : 0,
                            batch->state ? batch->state->alpha_test_enable : 0,
                            batch->state ? batch->state->alpha_func : 0,
                            batch->state ? batch->state->alpha_ref : 0,
                            vertex_fog_min, vertex_fog_max,
                            batch->state ? batch->state->fog_enable : 0,
                            batch->state ? batch->state->fog_color : 0);
                    if (batch->combiner) {
                        uint32_t stage, stage_count = batch->combiner->control & 0xFF;
                        if (stage_count > NV2A_MAX_COMBINER_STAGES)
                            stage_count = NV2A_MAX_COMBINER_STAGES;
                        fprintf(stderr, "[D3D11-ACTOR-FINAL] frame=%u draw=%u stages=%u prog=0x%08X final=0x%08X/0x%08X const=0x%08X/0x%08X\n",
                                s_frame_count + 1, s_draw_count, stage_count,
                                batch->combiner->stage_program,
                                batch->combiner->final0, batch->combiner->final1,
                                batch->combiner->final_c0, batch->combiner->final_c1);
                        for (stage = 0; stage < stage_count; ++stage) {
                            uint32_t tex_mode = stage < 6 ?
                                ((batch->combiner->stage_program >> (stage * 5)) & 0x1F) : 0;
                            fprintf(stderr, "[D3D11-ACTOR-COMB] frame=%u draw=%u stage=%u texmode=%u rgbicw=0x%08X alphaicw=0x%08X rgbocw=0x%08X alphaocw=0x%08X c0=0x%08X c1=0x%08X\n",
                                    s_frame_count + 1, s_draw_count, stage, tex_mode,
                                    batch->combiner->color_icw[stage],
                                    batch->combiner->alpha_icw[stage],
                                    batch->combiner->color_ocw[stage],
                                    batch->combiner->alpha_ocw[stage],
                                    batch->combiner->factor0[stage],
                                    batch->combiner->factor1[stage]);
                        }
                    }
                    actor_probe_samples++;
                }
            }
            s_batch_trace_samples++;
        }
    }
    if (panel_trace_enabled() &&
        (s_panel_trace_samples < 1024 ||
         (s_records_trace_samples < 256 && diagnostic_f12_down())) &&
        batch->vertices && batch->count &&
        surface->width == 640 && surface->height == 480) {
        const Nv2aTexture *pt0 = batch->textures[0] ? batch->textures[0] : batch->texture;
        const Nv2aTexture *pt1 = batch->textures[1];
        float min_x = batch->vertices[0].x, max_x = min_x;
        float min_y = batch->vertices[0].y, max_y = min_y;
        uint32_t j;
        for (j = 1; j < batch->count; ++j) {
            const Nv2aVertex *v = &batch->vertices[j];
            if (v->x < min_x) min_x = v->x;
            if (v->x > max_x) max_x = v->x;
            if (v->y < min_y) min_y = v->y;
            if (v->y > max_y) max_y = v->y;
        }
        if (diagnostic_f12_down() &&
            s_records_trace_samples < 256 &&
            min_x <= 174.0f && max_x >= 6.0f &&
            ((min_y <= 233.0f && max_y >= 176.0f) ||
             (min_y <= 303.0f && max_y >= 246.0f) ||
             (min_y <= 374.0f && max_y >= 316.0f))) {
            const Nv2aVertex *record_v = &batch->vertices[0];
            const Nv2aTexture *record_t0 = batch->textures[0] ?
                batch->textures[0] : batch->texture;
            const Nv2aTexture *record_t1 = batch->textures[1];
            fprintf(stderr,
                "[D3D11-RECORDS] frame=%u target=0x%08X draw=%u verts=%u xy=[%.1f..%.1f,%.1f..%.1f] tex0=0x%08X %ux%u fmt=0x%02X srv0=%u tex1=0x%08X %ux%u fmt1=0x%02X srv1=%u blend=%u src=0x%X dst=0x%X alpha_test=%u aref=%u depth=%u zwrite=%u mask=0x%08X rc=0x%08X prog=0x%08X diffuse=%08X uv=(%.3f,%.3f)\n",
                s_frame_count + 1, surface->color_va, s_draw_count, batch->count,
                min_x, max_x, min_y, max_y,
                record_t0 ? record_t0->offset : 0,
                record_t0 ? record_t0->width : 0,
                record_t0 ? record_t0->height : 0,
                record_t0 ? record_t0->color & 0xFF : 0, srvs[0] != NULL,
                record_t1 ? record_t1->offset : 0,
                record_t1 ? record_t1->width : 0,
                record_t1 ? record_t1->height : 0,
                record_t1 ? record_t1->color & 0xFF : 0, srvs[1] != NULL,
                batch->state ? batch->state->blend_enable : 0,
                batch->state ? batch->state->blend_src : 0,
                batch->state ? batch->state->blend_dst : 0,
                batch->state ? batch->state->alpha_test_enable : 0,
                batch->state ? batch->state->alpha_ref : 0,
                batch->state ? batch->state->depth_test_enable : 0,
                batch->state ? batch->state->depth_write : 0,
                batch->state ? batch->state->color_mask : 0,
                batch->combiner ? batch->combiner->control : 0,
                batch->combiner ? batch->combiner->stage_program : 0,
                record_v->diffuse, record_v->tex[0][0], record_v->tex[0][1]);
            s_records_trace_samples++;
        }
        if (pt0 && (pt0->offset == 0x8251C000 || pt0->offset == 0x82505000 ||
                    pt0->offset == 0x824B8000 || pt0->offset == 0x824D1000) &&
            min_x >= 100.0f && max_x <= 530.0f &&
            min_y >= 70.0f && max_y <= 410.0f) {
            const Nv2aVertex *v = &batch->vertices[0];
            fprintf(stderr,
                "[D3D11-PANEL] frame=%u surface=%ux%u target=0x%08X draw=%u verts=%u xy=[%.1f..%.1f,%.1f..%.1f] tex0=0x%08X %ux%u pitch=%u fmt=0x%02X levels=%u hash=%016llX srv=%u tex1=0x%08X %ux%u fmt1=0x%02X srv1=%u depth=%u depthfunc=0x%X zwrite=%u blend=%u src=0x%X dst=0x%X eq=0x%X mask=0x%08X alpha=%u afunc=0x%X aref=%u rc=0x%08X prog=0x%08X rgb0=0x%08X alpha0=0x%08X rgbout0=0x%08X alphaout0=0x%08X final=0x%08X/0x%08X color0=%08X uv0=(%.3f,%.3f)\n",
                s_frame_count + 1, surface->width, surface->height,
                surface->color_va, s_draw_count, batch->count,
                min_x, max_x, min_y, max_y,
                pt0->offset, pt0->width, pt0->height, pt0->pitch,
                pt0->color & 0xFF, pt0->levels,
                (unsigned long long)panel_texture_hash(pt0), srvs[0] != NULL,
                pt1 ? pt1->offset : 0, pt1 ? pt1->width : 0,
                pt1 ? pt1->height : 0, pt1 ? pt1->color & 0xFF : 0,
                srvs[1] != NULL,
                batch->state ? batch->state->depth_test_enable : 0,
                batch->state ? batch->state->depth_func : 0,
                batch->state ? batch->state->depth_write : 0,
                batch->state ? batch->state->blend_enable : 0,
                batch->state ? batch->state->blend_src : 0,
                batch->state ? batch->state->blend_dst : 0,
                batch->state ? batch->state->blend_eq : 0,
                batch->state ? batch->state->color_mask : 0,
                batch->state ? batch->state->alpha_test_enable : 0,
                batch->state ? batch->state->alpha_func : 0,
                batch->state ? batch->state->alpha_ref : 0,
                batch->combiner ? batch->combiner->control : 0,
                batch->combiner ? batch->combiner->stage_program : 0,
                batch->combiner ? batch->combiner->color_icw[0] : 0,
                batch->combiner ? batch->combiner->alpha_icw[0] : 0,
                batch->combiner ? batch->combiner->color_ocw[0] : 0,
                batch->combiner ? batch->combiner->alpha_ocw[0] : 0,
                batch->combiner ? batch->combiner->final0 : 0,
                batch->combiner ? batch->combiner->final1 : 0,
                v->diffuse, v->tex[0][0], v->tex[0][1]);
            s_panel_trace_samples++;
        }
    }
    if (s_probe && s_draw_count >= s_max_draws) {
        fprintf(stderr, "[D3D11-BACKEND] probe draw %u submitted; disabling backend\n",
                s_draw_count);
        nv2a_backend_register(NULL);
        s_active = 0;
    } else if (s_present_once && s_draw_count >= s_max_draws && !s_present_pending) {
        s_present_pending = 1;
        fprintf(stderr, "[D3D11-BACKEND] present test draw %u complete; waiting for one flip\n",
                s_draw_count);
    } else if (s_continuous && s_draw_count >= s_max_draws && !s_frame_limited) {
        s_frame_limited = 1;
        fprintf(stderr, "[D3D11-BACKEND] frame %u draw budget %u reached; next flip will present\n",
                s_frame_count + 1, s_max_draws);
    }
}

static void d3d11_draw(const Nv2aSurface *surface, const Nv2aBatch *batch)
{
    if (s_perf_trace) {
        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        d3d11_draw_impl(surface, batch);
        QueryPerformanceCounter(&end);
        if (end.QuadPart >= start.QuadPart)
            s_perf_draw_ticks += (uint64_t)(end.QuadPart - start.QuadPart);
    } else {
        d3d11_draw_impl(surface, batch);
    }
}

static void d3d11_flip(void)
{
    D3D11_MAPPED_SUBRESOURCE map;
    LARGE_INTEGER present_start, present_end;
    uint64_t frame_ticks = 0;
    uint8_t *guest;
    uint32_t y;
    if (!s_active || s_probe || (s_present_once && !s_present_pending) ||
        (s_direct && !s_swap_chain)) return;
    if (s_direct) {
        gpu_present_draw_video_overlay();
        fps_report_tick();
        frame_dump_tick();
        {
            const char *panel_frame_dump_path =
                getenv("RECOMP_D3D_PANEL_FRAME_DUMP_PATH");
            if (panel_frame_dump_path && panel_frame_dump_path[0] &&
                !s_panel_frame_dump_done &&
                (s_panel_frame_capture_requested ||
                 diagnostic_f12_down())) {
                s_panel_frame_capture_requested = 0;
                dump_panel_frame_once(panel_frame_dump_path);
            }
        }
        if (s_perf_trace)
            QueryPerformanceCounter(&present_start);
        HRESULT hr = IDXGISwapChain_Present(s_swap_chain, 0, 0);
        if (s_perf_trace) {
            QueryPerformanceCounter(&present_end);
            if (s_perf_last_present_qpc.QuadPart > 0 &&
                present_end.QuadPart >= s_perf_last_present_qpc.QuadPart)
                frame_ticks = (uint64_t)(present_end.QuadPart -
                                         s_perf_last_present_qpc.QuadPart);
            s_perf_last_present_qpc = present_end;
            if (present_end.QuadPart >= present_start.QuadPart)
                s_perf_present_ticks +=
                    (uint64_t)(present_end.QuadPart - present_start.QuadPart);
        }
        if (FAILED(hr)) {
            fprintf(stderr, "[D3D11-BACKEND] direct Present failed 0x%08lX\n",
                    (unsigned long)hr);
            nv2a_backend_register(NULL);
            s_active = 0;
            return;
        }
        /* The video overlay/presentation path can touch the immediate
         * context behind this backend's binding cache. Rebind everything on
         * the next frame instead of allowing a correct first menu frame to be
         * followed by a black frame with skipped state setup. */
        invalidate_binding_cache();
        s_frame_count++;
        s_vb_cursor = 0;
        if (s_perf_trace) {
            if (s_draw_count >= 900u) {
                double draw_ms = (double)s_perf_draw_ticks * 1000.0 /
                                 (double)s_perf_qpc_frequency.QuadPart;
                double present_ms = (double)s_perf_present_ticks * 1000.0 /
                                    (double)s_perf_qpc_frequency.QuadPart;
                double frame_wall_ms = (double)frame_ticks * 1000.0 /
                                       (double)s_perf_qpc_frequency.QuadPart;
                double other_ms = frame_wall_ms - draw_ms - present_ms;
                if (other_ms < 0.0)
                    other_ms = 0.0;
                /* Split the time the renderer did not account for into our
                 * own pushbuffer walk and everything else (guest code). */
                {
                    extern double nv2a_pb_walk_ms_take(void);
                    extern uint32_t nv2a_pb_walk_entries;
                    double walk_ms = nv2a_pb_walk_ms_take();
                    double guest_ms = other_ms - walk_ms;
                    uint32_t walk_entries = nv2a_pb_walk_entries;
                    nv2a_pb_walk_entries = 0;
                    if (guest_ms < 0.0)
                        guest_ms = 0.0;
                    fprintf(stderr,
                        "[D3D11-SPLIT] frame=%u other_ms=%.3f walk_ms=%.3f guest_ms=%.3f walk_entries=%u\n",
                        s_frame_count, other_ms, walk_ms, guest_ms, walk_entries);
                }
                {
                    extern void nv2a_xf_profile_take(double *, double *, double *, uint64_t *);
                    double fetch_ms = 0.0, vsh_ms = 0.0, batch_ms = 0.0;
                    uint64_t instr = 0;
                    nv2a_xf_profile_take(&fetch_ms, &vsh_ms, &batch_ms, &instr);
                    if (fetch_ms > 0.0 || vsh_ms > 0.0 || batch_ms > 0.0)
                        fprintf(stderr,
                            "[D3D11-XF] frame=%u batch_ms=%.3f fetch_ms=%.3f vsh_ms=%.3f assemble_ms=%.3f instr=%llu vsh_ns_per_instr=%.2f\n",
                            s_frame_count, batch_ms, fetch_ms, vsh_ms,
                            batch_ms - fetch_ms - vsh_ms, (unsigned long long)instr,
                            instr ? vsh_ms * 1000000.0 / (double)instr : 0.0);
                }
                fprintf(stderr,
                    "[D3D11-PERF] heavy_frame=%u callbacks=%u draws=%u frame_wall_ms=%.3f draw_cpu_ms=%.3f present_ms=%.3f other_ms=%.3f stage_ms=setup:%.3f,texture:%.3f,combiner_cb:%.3f,vertex_map:%.3f,vertex_copy:%.3f,vertex_unmap:%.3f,bind_draw:%.3f tex_calls=%u rt_hits=%u cache_hits=%u cache_misses=%u hashes=%u refreshes=%u dynamic_decodes=%u full_decodes=%u vertices=%u\n",
                    s_frame_count, s_frame_callbacks, s_draw_count,
                    frame_wall_ms, draw_ms, present_ms, other_ms,
                    (double)s_perf_stage_ticks[0] * 1000.0 / (double)s_perf_qpc_frequency.QuadPart,
                    (double)s_perf_stage_ticks[1] * 1000.0 / (double)s_perf_qpc_frequency.QuadPart,
                    (double)s_perf_stage_ticks[2] * 1000.0 / (double)s_perf_qpc_frequency.QuadPart,
                    (double)s_perf_stage_ticks[3] * 1000.0 / (double)s_perf_qpc_frequency.QuadPart,
                    (double)s_perf_stage_ticks[4] * 1000.0 / (double)s_perf_qpc_frequency.QuadPart,
                    (double)s_perf_stage_ticks[5] * 1000.0 / (double)s_perf_qpc_frequency.QuadPart,
                    (double)s_perf_stage_ticks[6] * 1000.0 / (double)s_perf_qpc_frequency.QuadPart,
                    s_perf_texture_calls, s_perf_texture_rt_hits,
                    s_perf_texture_cache_hits, s_perf_texture_cache_misses,
                    s_perf_texture_hash_calls, s_perf_texture_refreshes,
                    s_perf_texture_dynamic_decodes, s_perf_texture_full_decodes,
                    s_perf_vertex_count);
                s_perf_report_count++;
            }
            s_perf_draw_ticks = 0;
            s_perf_present_ticks = 0;
            ZeroMemory(s_perf_stage_ticks, sizeof(s_perf_stage_ticks));
            s_perf_texture_calls = s_perf_texture_rt_hits = 0;
            s_perf_texture_cache_hits = s_perf_texture_cache_misses = 0;
            s_perf_texture_hash_calls = s_perf_texture_refreshes = 0;
            s_perf_texture_dynamic_decodes = s_perf_texture_full_decodes = 0;
            s_perf_vertex_count = 0;
        }
        if (batch_trace_enabled() && (s_frame_count % 60) == 0)
            fprintf(stderr, "[D3D11-FRAME] frame=%u accepted_draws=%u callbacks=%u\n",
                    s_frame_count, s_draw_count, s_frame_callbacks);
        s_draw_count = 0;
        s_frame_callbacks = 0;
        s_frame_limited = 0;
        return;
    }
    if (!s_color || !s_readback || !s_color_va) return;
    ID3D11DeviceContext_CopyResource(s_ctx, (ID3D11Resource *)s_readback,
                                     (ID3D11Resource *)s_color);
    if (FAILED(ID3D11DeviceContext_Map(s_ctx, (ID3D11Resource *)s_readback, 0,
                                       D3D11_MAP_READ, 0, &map))) {
        fprintf(stderr, "[D3D11-BACKEND] one-shot readback map failed; disabling backend\n");
        nv2a_backend_register(NULL);
        s_active = 0;
        return;
    }
    guest = (uint8_t *)xbox_GetMemoryOffset() + s_color_va;
    for (y = 0; y < s_height; y++)
        memcpy(guest + (size_t)y * s_pitch,
               (const uint8_t *)map.pData + (size_t)y * map.RowPitch,
               (size_t)s_width * 4);
    ID3D11DeviceContext_Unmap(s_ctx, (ID3D11Resource *)s_readback, 0);
    if (s_present_once) {
        fprintf(stderr, "[D3D11-BACKEND] one-shot readback copied; disabling backend\n");
        nv2a_backend_register(NULL);
        s_active = 0;
        s_present_pending = 0;
    } else if (s_continuous) {
        s_frame_count++;
        s_draw_count = 0;
        s_frame_callbacks = 0;
        s_frame_limited = 0;
        if (s_frame_count <= 3)
            fprintf(stderr, "[D3D11-BACKEND] continuous frame %u readback copied\n", s_frame_count);
    }
}

static const Nv2aBackend s_backend = { d3d11_clear, d3d11_draw, d3d11_flip };

int nv2a_backend_d3d11_init(void)
{
    D3D_FEATURE_LEVEL level;
    D3D11_INPUT_ELEMENT_DESC input[] = {
        {"POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0,  D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"COLOR",    0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 16, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 4, DXGI_FORMAT_R32_FLOAT,       0, 12, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"COLOR",    1, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 32, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 48, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 1, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 64, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 2, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 80, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 3, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 96, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 5, DXGI_FORMAT_R32_FLOAT, 0, 112, D3D11_INPUT_PER_VERTEX_DATA, 0}
    };
    ID3DBlob *vsb, *psb;
    HRESULT hr;
    const char *e = getenv("RECOMP_D3D_BACKEND");
    const char *limit = getenv("RECOMP_D3D_MAX_DRAWS");
    if (!e || !*e || (strcmp(e, "1") != 0 && strcmp(e, "probe") != 0 &&
                      strcmp(e, "present") != 0 && strcmp(e, "continuous") != 0 &&
                      strcmp(e, "direct") != 0)) return 0;
    s_probe = strcmp(e, "probe") == 0;
    s_present_once = strcmp(e, "present") == 0;
    s_direct = strcmp(e, "direct") == 0;
    s_continuous = strcmp(e, "continuous") == 0 || s_direct;
    s_trace = getenv("RECOMP_D3D_TRACE") && getenv("RECOMP_D3D_TRACE")[0] != '0';
    s_trace_render_targets = getenv("RECOMP_D3D_TRACE_TARGETS") &&
                             getenv("RECOMP_D3D_TRACE_TARGETS")[0] != '0';
    {
        const char *perf_trace_env = getenv("RECOMP_D3D_PERF_TRACE");
        s_perf_trace = perf_trace_env && perf_trace_env[0] &&
                       perf_trace_env[0] != '0' &&
                       QueryPerformanceFrequency(&s_perf_qpc_frequency) &&
                       s_perf_qpc_frequency.QuadPart > 0;
        s_perf_draw_ticks = s_perf_present_ticks = 0;
        s_perf_report_count = 0;
        ZeroMemory(s_perf_stage_ticks, sizeof(s_perf_stage_ticks));
        s_perf_last_present_qpc.QuadPart = 0;
        if (s_perf_trace)
            fprintf(stderr, "[D3D11-BACKEND] per-frame stage timing enabled (first 16 frames with >=900 draws)\n");
    }
    if (s_trace_render_targets)
        fprintf(stderr, "[D3D11-BACKEND] direct target eviction trace enabled\n");
    s_raw_texture = getenv("RECOMP_D3D_RAW_TEXTURE") && getenv("RECOMP_D3D_RAW_TEXTURE")[0] != '0';
    {
        const char *dump_prefix = getenv("RECOMP_D3D_FRAME_DUMP");
        const char *dump_every = getenv("RECOMP_D3D_FRAME_DUMP_EVERY");
        const char *fps_report = getenv("RECOMP_D3D_FPS_REPORT");
        s_fb_dump_prefix = (dump_prefix && dump_prefix[0]) ? dump_prefix : NULL;
        s_fb_dump_every = (dump_every && *dump_every)
                              ? (uint32_t)strtoul(dump_every, NULL, 10) : 60u;
        if (!s_fb_dump_every) s_fb_dump_every = 60u;
        s_fb_dump_seq = 0;
        s_fps_report = (fps_report && *fps_report) ? atoi(fps_report) : 0;
        if (s_fps_report < 0) s_fps_report = 0;
        s_fps_frames = s_fps_draws = 0;
        s_fps_frame_ms_len = 0;
        s_fps_elapsed_ms = 0.0;
        s_fps_last_qpc.QuadPart = 0;
        QueryPerformanceFrequency(&s_fps_qpc_frequency);
        if (s_fb_dump_prefix)
            fprintf(stderr, "[D3D11-BACKEND] frame capture every %u frames to %s%%05u.bmp\n",
                    s_fb_dump_every, s_fb_dump_prefix);
        if (s_fps_report)
            fprintf(stderr, "[D3D11-BACKEND] wall-clock frame pacing every %ds\n",
                    s_fps_report);
    }
    s_bypass_combiner = getenv("RECOMP_D3D_BYPASS_COMBINER") &&
                        getenv("RECOMP_D3D_BYPASS_COMBINER")[0] != '0';
    s_max_draws = limit && *limit ? (uint32_t)strtoul(limit, NULL, 10) :
                  (s_probe ? 1u : (s_continuous ? 100u : 1000u));
    if ((s_probe || s_present_once) && s_max_draws == 0) s_max_draws = 1;
    if (s_bypass_combiner)
        fprintf(stderr, "[D3D11-BACKEND] diagnostic: using simple texture*vertex-color shader; guest render states retained\n");
    if (s_direct) {
        /* The game creates the D3D8/D3D11 device lazily, after this host
         * initialization function returns. Acquire it from the first NV2A
         * clear/draw callback instead of falling back to the CPU renderer. */
        s_active = 1;
        s_present_pending = 0;
        s_frame_count = s_draw_count = s_callback_count = 0;
        s_frame_limited = 0;
        nv2a_backend_register(&s_backend);
        fprintf(stderr, "[D3D11-BACKEND] initialized mode=direct (device deferred) max_draws=%u\n",
                s_max_draws);
        return 1;
    }
    if (s_direct) {
        s_dev = d3d8_GetD3D11Device();
        s_ctx = d3d8_GetD3D11Context();
        s_swap_chain = d3d8_GetSwapChain();
        hr = (s_dev && s_ctx && s_swap_chain) ? S_OK : E_FAIL;
    } else {
        hr = D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, 0, NULL, 0,
                               D3D11_SDK_VERSION, &s_dev, &level, &s_ctx);
    }
    if (FAILED(hr)) {
        fprintf(stderr, "[D3D11-BACKEND] device creation failed 0x%08lX; CPU renderer remains active\n", (unsigned long)hr);
        return 0;
    }
    vsb = compile_shader("vs", "vs_4_0");
    psb = compile_shader("ps", "ps_4_0");
    if (!vsb || !psb) { release_all(); return 0; }
    hr = ID3D11Device_CreateVertexShader(s_dev, ID3D10Blob_GetBufferPointer(vsb),
                                         ID3D10Blob_GetBufferSize(vsb), NULL, &s_vs);
    if (SUCCEEDED(hr)) hr = ID3D11Device_CreatePixelShader(s_dev, ID3D10Blob_GetBufferPointer(psb),
                                                            ID3D10Blob_GetBufferSize(psb), NULL, &s_ps);
    if (SUCCEEDED(hr)) hr = ID3D11Device_CreateInputLayout(s_dev, input,
                                                            (UINT)(sizeof(input) / sizeof(input[0])),
                                                            ID3D10Blob_GetBufferPointer(vsb),
                                                            ID3D10Blob_GetBufferSize(vsb), &s_layout);
    ID3D10Blob_Release(vsb); ID3D10Blob_Release(psb);
    if (FAILED(hr)) { release_all(); return 0; }
    s_active = 1;
    s_present_pending = 0;
    s_frame_count = s_draw_count = s_callback_count = 0;
    s_frame_limited = 0;
    s_draw_entry_logged = 0;
    s_first_batch_traced = 0;
    nv2a_backend_register(&s_backend);
    fprintf(stderr, "[D3D11-BACKEND] initialized mode=%s max_draws=%u\n",
            s_direct ? "direct" : (s_probe ? "probe" : (s_present_once ? "present" :
             (s_continuous ? "continuous" : "full"))), s_max_draws);
    return 1;
}

void nv2a_backend_d3d11_shutdown(void)
{
    if (s_active) nv2a_backend_register(NULL);
    s_active = 0;
    release_all();
    if (s_dev) fprintf(stderr, "[D3D11-BACKEND] shut down\n");
}

int nv2a_backend_d3d11_active(void) { return s_active; }

#else
#include "nv2a_backend_d3d11.h"
int nv2a_backend_d3d11_init(void) { return 0; }
void nv2a_backend_d3d11_shutdown(void) {}
int nv2a_backend_d3d11_active(void) { return 0; }
#endif
