#include <stdint.h>

/*
 * The current local XboxRecomp toolkit already provides the legacy CPU,
 * MMIO, semaphore, and D3D11 compatibility symbols.  This game-specific
 * file only needs to keep the optional QPR2 v126 registration hooks linkable
 * when RECOMP_QPR2_V126_HOOKS is explicitly enabled.
 */
int xbox_Nv2aSoftwareEvent(uint32_t device_ptr_va, uint32_t event_off,
                           uint32_t value)
{
    (void)device_ptr_va;
    (void)event_off;
    (void)value;
    return 0;
}

int xbox_Nv2aPushBufferRing(uint32_t device_ptr_va, uint32_t begin_off,
                            uint32_t end_off)
{
    (void)device_ptr_va;
    (void)begin_off;
    (void)end_off;
    return 0;
}

int xbox_Nv2aCommandFence(uint32_t device_ptr_va, uint32_t pointer_off,
                          uint32_t context, uint32_t bytes)
{
    (void)device_ptr_va;
    (void)pointer_off;
    (void)context;
    (void)bytes;
    return 0;
}

int xbox_Nv2aVblankEvent(uint32_t device_ptr_va, uint32_t event_off)
{
    (void)device_ptr_va;
    (void)event_off;
    return 0;
}
