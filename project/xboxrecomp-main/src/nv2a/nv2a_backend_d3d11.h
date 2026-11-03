#ifndef XBOX_NV2A_BACKEND_D3D11_H
#define XBOX_NV2A_BACKEND_D3D11_H

/* Optional generic D3D11 backend for the pushbuffer executor.
 * Enabled by RECOMP_D3D_BACKEND=1. The first milestone renders solid-color
 * triangles and clears on the GPU, then reads the completed frame back into
 * the guest framebuffer so the existing window path remains unchanged. */
int  nv2a_backend_d3d11_init(void);
void nv2a_backend_d3d11_shutdown(void);
int  nv2a_backend_d3d11_active(void);

#endif
