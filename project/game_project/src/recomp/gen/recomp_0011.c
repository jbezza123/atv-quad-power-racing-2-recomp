/**
 * ATV: Quad Power Racing 2 - Recompiled code chunk 11
 * Functions: 250 (0x00094200 - 0x0009C5E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00094200
 * Original: 0x00094200 - 0x000942F1 (241 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094200: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = 0x1BD3FC;
    if (CMP_EQ(_fa, _fb)) goto loc_00094230; /* je: equal / zero */

loc_00094210: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);

loc_00094214: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094224; /* je: equal / zero */

loc_0009421B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00094221u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00094221: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00094224: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0009422F; /* je: equal / zero */

loc_0009422A: ;
    esi = MEM32(esi + 4);
    goto loc_00094214;

loc_0009422F: ;
    POP32(esp, esi);

loc_00094230: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0x1D9A58);
    PUSH32(esp, 0x00094240u); RECOMP_ABI_CALL(0x000EBB10u, sub_000EBB10); /* call 0x000EBB10 */

loc_00094240: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0x1D9908);
    PUSH32(esp, 0x00094250u); RECOMP_ABI_CALL(0x000EBB10u, sub_000EBB10); /* call 0x000EBB10 */

loc_00094250: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0x1D9B38);
    PUSH32(esp, 0x00094260u); RECOMP_ABI_CALL(0x000EBB10u, sub_000EBB10); /* call 0x000EBB10 */

loc_00094260: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0x1D9AC8);
    PUSH32(esp, 0x00094270u); RECOMP_ABI_CALL(0x000EBB10u, sub_000EBB10); /* call 0x000EBB10 */

loc_00094270: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0x1D99E8);
    PUSH32(esp, 0x00094280u); RECOMP_ABI_CALL(0x000EBB10u, sub_000EBB10); /* call 0x000EBB10 */

loc_00094280: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0x1D9978);
    PUSH32(esp, 0x00094290u); RECOMP_ABI_CALL(0x000EBB10u, sub_000EBB10); /* call 0x000EBB10 */

loc_00094290: ;
    ecx = MEM32(edi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009429D; /* je: equal / zero */

loc_00094297: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0009429Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009429Bu); } /* indirect call */
    }

loc_0009429D: ;
    ecx = MEM32(edi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000942AA; /* je: equal / zero */

loc_000942A4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000942AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000942A8u); } /* indirect call */
    }

loc_000942AA: ;
    ecx = MEM32(edi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000942B7; /* je: equal / zero */

loc_000942B1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000942B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000942B5u); } /* indirect call */
    }

loc_000942B7: ;
    ecx = MEM32(edi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000942C4; /* je: equal / zero */

loc_000942BE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000942C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000942C2u); } /* indirect call */
    }

loc_000942C4: ;
    ecx = MEM32(edi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000942D1; /* je: equal / zero */

loc_000942CB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000942D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000942CFu); } /* indirect call */
    }

loc_000942D1: ;
    ecx = MEM32(edi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000942DE; /* je: equal / zero */

loc_000942D8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000942DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000942DCu); } /* indirect call */
    }

loc_000942DE: ;
    ecx = edi + 4;
    MEM32(0x1D98F8) = 0;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_00094100(); return; /* tail jmp 0x00094100 */

}

/**
 * sub_00094300
 * Original: 0x00094300 - 0x000948DF (1503 bytes, 426 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094300: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x98);
    MEM32(0x1D98F8) = esi;
    PUSH32(esp, 0x00094318u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00094318: ;
    edi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094338; /* je: equal / zero */

loc_00094323: ;
    ecx = edi;
    PUSH32(esp, 0x0009432Au); RECOMP_ABI_CALL(0x001161F0u, sub_001161F0); /* call 0x001161F0 */

loc_0009432A: ;
    MEM32(edi) = 0x1BD340;
    MEM32(edi + 0x94) = ebx;
    goto loc_0009433A;

loc_00094338: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009433A: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x24) = edi;
    PUSH32(esp, 0x00094345u); RECOMP_ABI_CALL(0x00093C80u, sub_00093C80); /* call 0x00093C80 */

loc_00094345: ;
    ecx = MEM32(esi + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0009434Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009434Au); } /* indirect call */
    }

loc_0009434D: ;
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x00094357u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00094357: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094375; /* je: equal / zero */

loc_00094360: ;
    ecx = edi;
    PUSH32(esp, 0x00094367u); RECOMP_ABI_CALL(0x001161F0u, sub_001161F0); /* call 0x001161F0 */

loc_00094367: ;
    MEM32(edi) = 0x1BD340;
    MEM32(edi + 0x94) = ebx;
    goto loc_00094377;

loc_00094375: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00094377: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x28) = edi;
    PUSH32(esp, 0x00094382u); RECOMP_ABI_CALL(0x00093C80u, sub_00093C80); /* call 0x00093C80 */

loc_00094382: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0009438Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094387u); } /* indirect call */
    }

loc_0009438A: ;
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x00094394u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00094394: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000943B2; /* je: equal / zero */

loc_0009439D: ;
    ecx = edi;
    PUSH32(esp, 0x000943A4u); RECOMP_ABI_CALL(0x001161F0u, sub_001161F0); /* call 0x001161F0 */

loc_000943A4: ;
    MEM32(edi) = 0x1BD340;
    MEM32(edi + 0x94) = ebx;
    goto loc_000943B4;

loc_000943B2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000943B4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x38);
    eax = esp + 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi + 0x2C) = edi;
    PUSH32(esp, 0x000943C5u); RECOMP_ABI_CALL(0x00100DA0u, sub_00100DA0); /* call 0x00100DA0 */

loc_000943C5: ;
    ecx = MEM32(0x1DE460);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x1BD394);
    PUSH32(esp, 0x000943E2u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000943E2: ;
    PUSH32(esp, 0x1BD38C);
    ecx = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(edi + 0x94) = eax;
    PUSH32(esp, 0x000943F8u); RECOMP_ABI_CALL(0x00108220u, sub_00108220); /* call 0x00108220 */

loc_000943F8: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x20) = edx;
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 0x10);
    eax = ecx;
    MEM32(esp + 0x14) = ecx;
    ecx = edx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = edx;
    edx = eax;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x1CCA98);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(0x1CCAA8);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(0x1CCAA0);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(0x1CCA9C);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(0x1CCAA4);
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x4C) = edx;
    eax = esp + 0x30;
    MEM32(esp + 0x64) = ecx;
    edx = esp + 0x20;
    ebp = 2;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = ebp;
    PUSH32(esp, 0x00094499u); RECOMP_ABI_CALL(0x00116220u, sub_00116220); /* call 0x00116220 */

loc_00094499: ;
    ecx = MEM32(0x1D9FF8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000944A5u); RECOMP_ABI_CALL(0x00107CE0u, sub_00107CE0); /* call 0x00107CE0 */

loc_000944A5: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000944ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000944AAu); } /* indirect call */
    }

loc_000944AD: ;
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x000944B7u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000944B7: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000944D5; /* je: equal / zero */

loc_000944C0: ;
    ecx = edi;
    PUSH32(esp, 0x000944C7u); RECOMP_ABI_CALL(0x001161F0u, sub_001161F0); /* call 0x001161F0 */

loc_000944C7: ;
    MEM32(edi) = 0x1BD340;
    MEM32(edi + 0x94) = ebx;
    goto loc_000944D7;

loc_000944D5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000944D7: ;
    PUSH32(esp, 0x38);
    eax = esp + 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi + 0x38) = edi;
    PUSH32(esp, 0x000944E7u); RECOMP_ABI_CALL(0x00100DA0u, sub_00100DA0); /* call 0x00100DA0 */

loc_000944E7: ;
    ecx = MEM32(0x1DE460);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x1BD394);
    PUSH32(esp, 0x00094504u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00094504: ;
    PUSH32(esp, 0x1BD38C);
    ecx = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(edi + 0x94) = eax;
    PUSH32(esp, 0x0009451Au); RECOMP_ABI_CALL(0x00108220u, sub_00108220); /* call 0x00108220 */

loc_0009451A: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x20) = edx;
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x10);
    eax = ecx;
    MEM32(esp + 0x14) = ecx;
    ecx = edx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = edx;
    edx = eax;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x1CCAE8);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(0x1CCAF8);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(0x1CCAF0);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(0x1CCAEC);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(0x1CCAF4);
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x4C) = edx;
    eax = esp + 0x30;
    MEM32(esp + 0x64) = ecx;
    edx = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = ebp;
    PUSH32(esp, 0x000945B6u); RECOMP_ABI_CALL(0x00116220u, sub_00116220); /* call 0x00116220 */

loc_000945B6: ;
    ecx = MEM32(0x1D9FF8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000945C2u); RECOMP_ABI_CALL(0x00107CE0u, sub_00107CE0); /* call 0x00107CE0 */

loc_000945C2: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000945CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000945C7u); } /* indirect call */
    }

loc_000945CA: ;
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x000945D4u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000945D4: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000945F2; /* je: equal / zero */

loc_000945DD: ;
    ecx = edi;
    PUSH32(esp, 0x000945E4u); RECOMP_ABI_CALL(0x001161F0u, sub_001161F0); /* call 0x001161F0 */

loc_000945E4: ;
    MEM32(edi) = 0x1BD340;
    MEM32(edi + 0x94) = ebx;
    goto loc_000945F4;

loc_000945F2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000945F4: ;
    PUSH32(esp, 0x38);
    eax = esp + 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi + 0x30) = edi;
    PUSH32(esp, 0x00094604u); RECOMP_ABI_CALL(0x00100DA0u, sub_00100DA0); /* call 0x00100DA0 */

loc_00094604: ;
    ecx = MEM32(0x1DE460);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x1BD394);
    PUSH32(esp, 0x00094621u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00094621: ;
    PUSH32(esp, 0x1BD38C);
    ecx = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(edi + 0x94) = eax;
    PUSH32(esp, 0x00094637u); RECOMP_ABI_CALL(0x00108220u, sub_00108220); /* call 0x00108220 */

loc_00094637: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x20) = edx;
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x10);
    eax = ecx;
    MEM32(esp + 0x14) = ecx;
    ecx = edx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = edx;
    edx = eax;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x1CCAAC);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(0x1CCABC);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(0x1CCAB4);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(0x1CCAB0);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(0x1CCAB8);
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x4C) = edx;
    eax = esp + 0x30;
    MEM32(esp + 0x64) = ecx;
    edx = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = ebp;
    PUSH32(esp, 0x000946D3u); RECOMP_ABI_CALL(0x00116220u, sub_00116220); /* call 0x00116220 */

loc_000946D3: ;
    ecx = MEM32(0x1D9FF8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000946DFu); RECOMP_ABI_CALL(0x00107CE0u, sub_00107CE0); /* call 0x00107CE0 */

loc_000946DF: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000946E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000946E4u); } /* indirect call */
    }

loc_000946E7: ;
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x000946F1u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000946F1: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009470F; /* je: equal / zero */

loc_000946FA: ;
    ecx = edi;
    PUSH32(esp, 0x00094701u); RECOMP_ABI_CALL(0x001161F0u, sub_001161F0); /* call 0x001161F0 */

loc_00094701: ;
    MEM32(edi) = 0x1BD340;
    MEM32(edi + 0x94) = ebx;
    goto loc_00094711;

loc_0009470F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00094711: ;
    PUSH32(esp, 0x38);
    eax = esp + 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi + 0x34) = edi;
    PUSH32(esp, 0x00094721u); RECOMP_ABI_CALL(0x00100DA0u, sub_00100DA0); /* call 0x00100DA0 */

loc_00094721: ;
    ecx = MEM32(0x1DE460);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x1BD394);
    PUSH32(esp, 0x0009473Eu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_0009473E: ;
    PUSH32(esp, 0x1BD38C);
    ecx = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(edi + 0x94) = eax;
    PUSH32(esp, 0x00094754u); RECOMP_ABI_CALL(0x00108220u, sub_00108220); /* call 0x00108220 */

loc_00094754: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x20) = edx;
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x10);
    eax = ecx;
    MEM32(esp + 0x14) = ecx;
    ecx = edx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = edx;
    edx = eax;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x1CCAFC);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(0x1CCB0C);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(0x1CCB04);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(0x1CCB00);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(0x1CCB08);
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x4C) = edx;
    eax = esp + 0x30;
    MEM32(esp + 0x64) = ecx;
    edx = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = ebp;
    PUSH32(esp, 0x000947F0u); RECOMP_ABI_CALL(0x00116220u, sub_00116220); /* call 0x00116220 */

loc_000947F0: ;
    ecx = MEM32(0x1D9FF8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000947FCu); RECOMP_ABI_CALL(0x00107CE0u, sub_00107CE0); /* call 0x00107CE0 */

loc_000947FC: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00094804u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094801u); } /* indirect call */
    }

loc_00094804: ;
    ecx = MEM32(0x1CCA94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_0009483E; /* jne: not equal / not zero */

loc_0009480F: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00094816u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00094816: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094836; /* je: equal / zero */

loc_0009481D: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax) = 0x1BD3B8;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    ecx = eax;
    goto loc_00094838;

loc_00094836: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00094838: ;
    MEM32(0x1CCA94) = ecx;

loc_0009483E: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x00094848u); RECOMP_ABI_CALL(0x00093E90u, sub_00093E90); /* call 0x00093E90 */

loc_00094848: ;
    esi = MEM32(0x1DE810);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1BD444);
    PUSH32(esp, 0x1D9A58);
    PUSH32(esp, 0x931B0);
    ecx = esi;
    PUSH32(esp, 0x00094865u); RECOMP_ABI_CALL(0x000EBDD0u, sub_000EBDD0); /* call 0x000EBDD0 */

loc_00094865: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1BD438);
    PUSH32(esp, 0x1D9908);
    PUSH32(esp, 0x931B0);
    ecx = esi;
    PUSH32(esp, 0x0009487Cu); RECOMP_ABI_CALL(0x000EBDD0u, sub_000EBDD0); /* call 0x000EBDD0 */

loc_0009487C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1BD42C);
    PUSH32(esp, 0x1D9B38);
    PUSH32(esp, 0x931B0);
    ecx = esi;
    PUSH32(esp, 0x00094893u); RECOMP_ABI_CALL(0x000EBDD0u, sub_000EBDD0); /* call 0x000EBDD0 */

loc_00094893: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1BD41C);
    PUSH32(esp, 0x1D9978);
    PUSH32(esp, 0x931B0);
    ecx = esi;
    PUSH32(esp, 0x000948AAu); RECOMP_ABI_CALL(0x000EBDD0u, sub_000EBDD0); /* call 0x000EBDD0 */

loc_000948AA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1BD40C);
    PUSH32(esp, 0x1D9AC8);
    PUSH32(esp, 0x931B0);
    ecx = esi;
    PUSH32(esp, 0x000948C1u); RECOMP_ABI_CALL(0x000EBDD0u, sub_000EBDD0); /* call 0x000EBDD0 */

loc_000948C1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1BD400);
    PUSH32(esp, 0x1D99E8);
    PUSH32(esp, 0x931B0);
    ecx = esi;
    PUSH32(esp, 0x000948D8u); RECOMP_ABI_CALL(0x000EBDD0u, sub_000EBDD0); /* call 0x000EBDD0 */

loc_000948D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000948E0
 * Original: 0x000948E0 - 0x000949CD (237 bytes, 73 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000948E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000948E0: ;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00094907; /* je: equal / zero */

loc_000948EC: ;
    esi = MEM32(eax + 4);
    edi = MEM32(esp + 0x60);

loc_000948F3: ;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000948FCu); RECOMP_ABI_CALL(0x00093A70u, sub_00093A70); /* call 0x00093A70 */

loc_000948FC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00094907; /* je: equal / zero */

loc_00094902: ;
    esi = MEM32(esi + 4);
    goto loc_000948F3;

loc_00094907: ;
    fp_push(MEMF(0x1D9BA4)); /* fld float */
    eax = MEM32(0x1CCA88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D0)); /* fadd dword ptr [0x1c91d0] */
    MEMF(0x1D9BA4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_000949C5; /* je: equal / zero */

loc_00094926: ;
    edi = MEM32(eax + 4);
    /* nop */

loc_00094930: ;
    fp_push(MEMF(0x1D9BA4)); /* fld float */
    esi = MEM32(eax + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF330)); /* fmul dword ptr [0x1af330] */
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    ecx = esp + 0x18;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00094969u); RECOMP_ABI_CALL(0x000CEB00u, sub_000CEB00); /* call 0x000CEB00 */

loc_00094969: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x3C;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009497Cu); RECOMP_ABI_CALL(0x000CE660u, sub_000CE660); /* call 0x000CE660 */

loc_0009497C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000949B7; /* je: equal / zero */

loc_00094983: ;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(eax + 0x20);
    MEM32(esi + 0x20) = eax;

loc_000949B7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000949C5; /* je: equal / zero */

loc_000949BD: ;
    edi = MEM32(edi + 4);
    goto loc_00094930;

loc_000949C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000949D0
 * Original: 0x000949D0 - 0x000949EE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000949D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000949D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000949D8u); RECOMP_ABI_CALL(0x00094200u, sub_00094200); /* call 0x00094200 */

loc_000949D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000949E8; /* je: equal / zero */

loc_000949DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000949E5u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000949E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000949E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000949F0
 * Original: 0x000949F0 - 0x00094A0D (29 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000949F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000949F0: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(ecx + eax * 8 + 0xF4)); /* fld float */
    fp_push(MEMF(ecx + eax * 8 + 0xF8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00094A10
 * Original: 0x00094A10 - 0x00095308 (2296 bytes, 641 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094A10: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7FFFFFFF);
    edi = ecx;
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1BD880);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x00094A37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094A31u); } /* indirect call */
    }

loc_00094A37: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD86C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00094A54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094A4Eu); } /* indirect call */
    }

loc_00094A54: ;
    edx = MEM32(esi);
    eax = edi + 0x18C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD85C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00094A67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094A64u); } /* indirect call */
    }

loc_00094A67: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD850);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094A84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094A7Eu); } /* indirect call */
    }

loc_00094A84: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD840);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094AA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094A9Bu); } /* indirect call */
    }

loc_00094AA1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD82C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094ABEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094AB8u); } /* indirect call */
    }

loc_00094ABE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD81C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094ADBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094AD5u); } /* indirect call */
    }

loc_00094ADB: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD80C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094AF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094AF2u); } /* indirect call */
    }

loc_00094AF8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x8C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD7FC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094B18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094B12u); } /* indirect call */
    }

loc_00094B18: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x90;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD7E4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094B38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094B32u); } /* indirect call */
    }

loc_00094B38: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x94;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD7D4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094B58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094B52u); } /* indirect call */
    }

loc_00094B58: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD7C0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094B78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094B72u); } /* indirect call */
    }

loc_00094B78: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x9C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD7A4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094B98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094B92u); } /* indirect call */
    }

loc_00094B98: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0xA0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD790);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094BB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094BB2u); } /* indirect call */
    }

loc_00094BB8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0xA4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD778);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094BD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094BD2u); } /* indirect call */
    }

loc_00094BD8: ;
    edx = MEM32(esi);
    eax = edi + 0x27C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD76C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00094BEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094BE8u); } /* indirect call */
    }

loc_00094BEB: ;
    edx = MEM32(esi);
    eax = edi + 0x2AC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD754);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00094BFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094BFBu); } /* indirect call */
    }

loc_00094BFE: ;
    edx = MEM32(esi);
    ebp = edi + 0x19C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x1BD748);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00094C11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094C0Eu); } /* indirect call */
    }

loc_00094C11: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    ecx = edi + 0xA8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1BD73C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x00094C31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094C2Bu); } /* indirect call */
    }

loc_00094C31: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0xAC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD734);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00094C51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094C4Bu); } /* indirect call */
    }

loc_00094C51: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0xB8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD724);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00094C71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094C6Bu); } /* indirect call */
    }

loc_00094C71: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0xBC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD71C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094C91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094C8Bu); } /* indirect call */
    }

loc_00094C91: ;
    edx = MEM32(esi);
    eax = edi + 0x1BC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD710);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00094CA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094CA1u); } /* indirect call */
    }

loc_00094CA4: ;
    edx = MEM32(esi);
    eax = edi + 0x29C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD6FC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00094CB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094CB4u); } /* indirect call */
    }

loc_00094CB7: ;
    edx = MEM32(esi);
    eax = edi + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD6E4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00094CC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094CC4u); } /* indirect call */
    }

loc_00094CC7: ;
    edx = MEM32(esi);
    eax = edi + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD6D4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00094CD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094CD4u); } /* indirect call */
    }

loc_00094CD7: ;
    edx = MEM32(esi);
    eax = edi + 0x6C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD6C8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00094CE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094CE4u); } /* indirect call */
    }

loc_00094CE7: ;
    edx = MEM32(esi);
    eax = edi + 0x7C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD6B8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00094CF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094CF4u); } /* indirect call */
    }

loc_00094CF7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = edi + 0xD4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD6A4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00094D11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094D0Bu); } /* indirect call */
    }

loc_00094D11: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = edi + 0xD8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD68C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00094D2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094D25u); } /* indirect call */
    }

loc_00094D2B: ;
    edx = MEM32(esi);
    eax = edi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD680);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00094D3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094D38u); } /* indirect call */
    }

loc_00094D3B: ;
    edx = MEM32(esi);
    eax = edi + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD674);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00094D4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094D48u); } /* indirect call */
    }

loc_00094D4B: ;
    edx = MEM32(esi);
    eax = edi + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD664);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00094D5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094D58u); } /* indirect call */
    }

loc_00094D5B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    ebx = edi + 0xE8;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1BD64C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00094D7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094D75u); } /* indirect call */
    }

loc_00094D7B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1BD64C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x00094D95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094D8Fu); } /* indirect call */
    }

loc_00094D95: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    ebx = edi + 0xEC;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1BD638);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00094DB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094DAFu); } /* indirect call */
    }

loc_00094DB5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    ecx = edi + 0xE4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1BD62C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00094DD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094DCFu); } /* indirect call */
    }

loc_00094DD5: ;
    eax = MEM32(0x1D7434);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094DE4; /* je: equal / zero */

loc_00094DDE: ;
    MEM32(ebx) = 0;

loc_00094DE4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1BD628);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00094DF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094DEDu); } /* indirect call */
    }

loc_00094DF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094F3B; /* je: equal / zero */

loc_00094DF8: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1B88E8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00094E04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094E01u); } /* indirect call */
    }

loc_00094E04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094E95; /* je: equal / zero */

loc_00094E0C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0xF8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD61C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094E2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094E26u); } /* indirect call */
    }

loc_00094E2C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x100;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD60C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094E4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094E46u); } /* indirect call */
    }

loc_00094E4C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x108;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD5FC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094E6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094E66u); } /* indirect call */
    }

loc_00094E6C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x110;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD5EC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094E8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094E86u); } /* indirect call */
    }

loc_00094E8C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00094E95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094E92u); } /* indirect call */
    }

loc_00094E95: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1BABA4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00094EA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094E9Eu); } /* indirect call */
    }

loc_00094EA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094F32; /* je: equal / zero */

loc_00094EA9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0xF4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD61C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094EC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094EC3u); } /* indirect call */
    }

loc_00094EC9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0xFC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD60C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094EE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094EE3u); } /* indirect call */
    }

loc_00094EE9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x104;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD5FC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094F09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094F03u); } /* indirect call */
    }

loc_00094F09: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x10C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD5EC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094F29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094F23u); } /* indirect call */
    }

loc_00094F29: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00094F32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094F2Fu); } /* indirect call */
    }

loc_00094F32: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00094F3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094F38u); } /* indirect call */
    }

loc_00094F3B: ;
    PUSH32(esp, 0x1BD5E0);
    PUSH32(esp, esi);
    ecx = edi + 0x114;
    PUSH32(esp, 0x00094F4Cu); RECOMP_ABI_CALL(0x00014B70u, sub_00014B70); /* call 0x00014B70 */

loc_00094F4C: ;
    PUSH32(esp, 0x1BD5D0);
    PUSH32(esp, esi);
    ecx = edi + 0x12C;
    PUSH32(esp, 0x00094F5Du); RECOMP_ABI_CALL(0x00014B70u, sub_00014B70); /* call 0x00014B70 */

loc_00094F5D: ;
    PUSH32(esp, 0x1BD5C0);
    PUSH32(esp, esi);
    ecx = edi + 0x144;
    PUSH32(esp, 0x00094F6Eu); RECOMP_ABI_CALL(0x00014B70u, sub_00014B70); /* call 0x00014B70 */

loc_00094F6E: ;
    PUSH32(esp, 0x1BD5B0);
    PUSH32(esp, esi);
    ecx = edi + 0x15C;
    PUSH32(esp, 0x00094F7Fu); RECOMP_ABI_CALL(0x00014B70u, sub_00014B70); /* call 0x00014B70 */

loc_00094F7F: ;
    PUSH32(esp, 0x1BD5A0);
    PUSH32(esp, esi);
    ecx = edi + 0x174;
    PUSH32(esp, 0x00094F90u); RECOMP_ABI_CALL(0x00014B70u, sub_00014B70); /* call 0x00014B70 */

loc_00094F90: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0xDC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD58C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094FB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094FAAu); } /* indirect call */
    }

loc_00094FB0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0xE0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD574);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00094FD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094FCAu); } /* indirect call */
    }

loc_00094FD0: ;
    eax = MEM32(ebp);
    PUSH32(esp, 0x1BD56C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00094FDEu); RECOMP_ABI_CALL(0x00105910u, sub_00105910); /* call 0x00105910 */

loc_00094FDE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(edi + 0xF0) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 3 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00095014; /* jne: not equal / not zero */

loc_00094FF3: ;
    eax = MEM32(edi + 0xB4);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009500E; /* je: equal / zero */

loc_00094FFF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095005u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00095005: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xB4) = ebx;

loc_0009500E: ;
    MEM32(edi + 0xB0) = ebx;

loc_00095014: ;
    edx = MEM32(esi);
    eax = edi + 0xB0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi + 0xB4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1BD560);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0009502Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009502Bu); } /* indirect call */
    }

loc_0009502E: ;
    ebx = edi + 0xC8;
    MEM32(ebx) = 0x3F800000;
    MEM32(edi + 0xCC) = 0x3F800000;
    MEM32(edi + 0xD0) = 1;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1BD554);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0009505Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095057u); } /* indirect call */
    }

loc_0009505A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009510F; /* je: equal / zero */

loc_00095062: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1BD54C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0009506Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009506Bu); } /* indirect call */
    }

loc_0009506E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00095106; /* je: equal / zero */

loc_00095076: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1BD538);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00095090u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009508Au); } /* indirect call */
    }

loc_00095090: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0xCC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD528);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x000950B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000950AAu); } /* indirect call */
    }

loc_000950B0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    ecx = edi + 0xC0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1BD51C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x000950D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000950CAu); } /* indirect call */
    }

loc_000950D0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = edi + 0xC4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD50C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x000950EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000950E4u); } /* indirect call */
    }

loc_000950EA: ;
    edx = MEM32(esi);
    eax = edi + 0x28C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD4F4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000950FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000950FAu); } /* indirect call */
    }

loc_000950FD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00095106u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095103u); } /* indirect call */
    }

loc_00095106: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0009510Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009510Cu); } /* indirect call */
    }

loc_0009510F: ;
    ebx = edi + 0x1AC;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0009511Du); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_0009511D: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00095127; /* jne: not equal / not zero */

loc_00095123: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0009512C;

loc_00095127: ;
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0009512C: ;
    ecx = MEM32(ebx);
    MEM8(eax + ecx + -2) = 0;
    PUSH32(esp, 0x1BD4EC);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00095141u); RECOMP_ABI_CALL(0x000E1740u, sub_000E1740); /* call 0x000E1740 */

loc_00095141: ;
    edx = MEM32(ebp);
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0009514Eu); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_0009514E: ;
    PUSH32(esp, 0x1BD4E4);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0009515Cu); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_0009515C: ;
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00095169u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_00095169: ;
    ecx = esp + 0x10;
    esi = edi + 0x1CC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0009517Bu); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_0009517B: ;
    PUSH32(esp, 0x1BD4DC);
    ecx = esi;
    PUSH32(esp, 0x00095187u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_00095187: ;
    edx = esp + 0x10;
    esi = edi + 0x1DC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00095199u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_00095199: ;
    PUSH32(esp, 0x1BD4D4);
    ecx = esi;
    PUSH32(esp, 0x000951A5u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_000951A5: ;
    eax = esp + 0x10;
    esi = edi + 0x1EC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000951B7u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_000951B7: ;
    PUSH32(esp, 0x1BD4CC);
    ecx = esi;
    PUSH32(esp, 0x000951C3u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_000951C3: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi + 0x1FC;
    PUSH32(esp, 0x000951D3u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_000951D3: ;
    edx = esp + 0x10;
    esi = edi + 0x20C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000951E5u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_000951E5: ;
    PUSH32(esp, 0x1BD4C4);
    ecx = esi;
    PUSH32(esp, 0x000951F1u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_000951F1: ;
    eax = esp + 0x10;
    esi = edi + 0x21C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00095203u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_00095203: ;
    PUSH32(esp, 0x1BD4BC);
    ecx = esi;
    PUSH32(esp, 0x0009520Fu); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_0009520F: ;
    esi = edi + 0x22C;
    PUSH32(esp, 0x1BD4EC);
    ecx = esi;
    PUSH32(esp, 0x00095221u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_00095221: ;
    ecx = MEM32(ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0009522Cu); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_0009522C: ;
    PUSH32(esp, 0x1BD4B4);
    ecx = esi;
    PUSH32(esp, 0x00095238u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_00095238: ;
    edx = MEM32(ebp);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00095243u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_00095243: ;
    PUSH32(esp, 0x1BD4AC);
    ecx = esi;
    PUSH32(esp, 0x0009524Fu); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_0009524F: ;
    esi = edi + 0x23C;
    PUSH32(esp, 0x1BD4EC);
    ecx = esi;
    PUSH32(esp, 0x00095261u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_00095261: ;
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0009526Cu); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_0009526C: ;
    PUSH32(esp, 0x1BD498);
    ecx = esi;
    PUSH32(esp, 0x00095278u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_00095278: ;
    esi = edi + 0x26C;
    PUSH32(esp, 0x1BD48C);
    ecx = esi;
    PUSH32(esp, 0x0009528Au); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_0009528A: ;
    ecx = MEM32(ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00095295u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_00095295: ;
    esi = edi + 0x24C;
    PUSH32(esp, 0x1BD4EC);
    ecx = esi;
    PUSH32(esp, 0x000952A7u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_000952A7: ;
    edx = MEM32(ebx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000952B1u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_000952B1: ;
    PUSH32(esp, 0x1BD484);
    ecx = esi;
    PUSH32(esp, 0x000952BDu); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_000952BD: ;
    esi = edi + 0x25C;
    PUSH32(esp, 0x1BD4EC);
    ecx = esi;
    PUSH32(esp, 0x000952CFu); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_000952CF: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000952D9u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_000952D9: ;
    PUSH32(esp, 0x1BD478);
    ecx = esi;
    PUSH32(esp, 0x000952E5u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_000952E5: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(esp + 0x10) = 0;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00095302; /* je: equal / zero */

loc_000952F9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000952FFu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000952FF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00095302: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095310
 * Original: 0x00095310 - 0x00095423 (275 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095310: ;
    PUSH32(esp, ebx);
    eax = 0x3F800000;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x4C) = eax;
    edi = esi + 0x118;
    ebx = 5;

loc_00095331: ;
    ecx = edi;
    PUSH32(esp, 0x00095338u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00095338: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00095331; /* jne: not equal / not zero */

loc_0009533E: ;
    ecx = esi + 0x18C;
    PUSH32(esp, 0x00095349u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00095349: ;
    ecx = esi + 0x19C;
    PUSH32(esp, 0x00095354u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00095354: ;
    ecx = esi + 0x1AC;
    PUSH32(esp, 0x0009535Fu); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_0009535F: ;
    ecx = esi + 0x1BC;
    PUSH32(esp, 0x0009536Au); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_0009536A: ;
    ecx = esi + 0x1CC;
    PUSH32(esp, 0x00095375u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00095375: ;
    ecx = esi + 0x1DC;
    PUSH32(esp, 0x00095380u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00095380: ;
    ecx = esi + 0x1EC;
    PUSH32(esp, 0x0009538Bu); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_0009538B: ;
    ecx = esi + 0x1FC;
    PUSH32(esp, 0x00095396u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00095396: ;
    ecx = esi + 0x20C;
    PUSH32(esp, 0x000953A1u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_000953A1: ;
    ecx = esi + 0x21C;
    PUSH32(esp, 0x000953ACu); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_000953AC: ;
    ecx = esi + 0x22C;
    PUSH32(esp, 0x000953B7u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_000953B7: ;
    ecx = esi + 0x23C;
    PUSH32(esp, 0x000953C2u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_000953C2: ;
    ecx = esi + 0x24C;
    PUSH32(esp, 0x000953CDu); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_000953CD: ;
    ecx = esi + 0x25C;
    PUSH32(esp, 0x000953D8u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_000953D8: ;
    ecx = esi + 0x26C;
    PUSH32(esp, 0x000953E3u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_000953E3: ;
    ecx = esi + 0x27C;
    PUSH32(esp, 0x000953EEu); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_000953EE: ;
    ecx = esi + 0x28C;
    PUSH32(esp, 0x000953F9u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_000953F9: ;
    ecx = esi + 0x29C;
    PUSH32(esp, 0x00095404u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00095404: ;
    ecx = esi + 0x2AC;
    PUSH32(esp, 0x0009540Fu); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_0009540F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xB4) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00095430
 * Original: 0x00095430 - 0x00095653 (547 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095430: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xB4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095450; /* je: equal / zero */

loc_00095441: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095447u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00095447: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xB4) = edi;

loc_00095450: ;
    eax = MEM32(esi + 0x2AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x2B8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00095469; /* je: equal / zero */

loc_00095460: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095466u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00095466: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00095469: ;
    eax = MEM32(esi + 0x29C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x2A8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00095482; /* je: equal / zero */

loc_00095479: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009547Fu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0009547F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00095482: ;
    eax = MEM32(esi + 0x28C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x298) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0009549B; /* je: equal / zero */

loc_00095492: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095498u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00095498: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009549B: ;
    eax = MEM32(esi + 0x27C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x288) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000954B4; /* je: equal / zero */

loc_000954AB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000954B1u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000954B1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000954B4: ;
    eax = MEM32(esi + 0x26C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x278) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000954CD; /* je: equal / zero */

loc_000954C4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000954CAu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000954CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000954CD: ;
    eax = MEM32(esi + 0x25C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x268) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000954E6; /* je: equal / zero */

loc_000954DD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000954E3u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000954E3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000954E6: ;
    eax = MEM32(esi + 0x24C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x258) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000954FF; /* je: equal / zero */

loc_000954F6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000954FCu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000954FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000954FF: ;
    eax = MEM32(esi + 0x23C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x248) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00095518; /* je: equal / zero */

loc_0009550F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095515u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00095515: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00095518: ;
    eax = MEM32(esi + 0x22C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x238) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00095531; /* je: equal / zero */

loc_00095528: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009552Eu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0009552E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00095531: ;
    eax = MEM32(esi + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x228) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0009554A; /* je: equal / zero */

loc_00095541: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095547u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00095547: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009554A: ;
    eax = MEM32(esi + 0x20C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x218) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00095563; /* je: equal / zero */

loc_0009555A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095560u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00095560: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00095563: ;
    eax = MEM32(esi + 0x1FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x208) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0009557C; /* je: equal / zero */

loc_00095573: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095579u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00095579: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009557C: ;
    eax = MEM32(esi + 0x1EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x1F8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00095595; /* je: equal / zero */

loc_0009558C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095592u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00095592: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00095595: ;
    eax = MEM32(esi + 0x1DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x1E8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000955AE; /* je: equal / zero */

loc_000955A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000955ABu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000955AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000955AE: ;
    eax = MEM32(esi + 0x1CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x1D8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000955C7; /* je: equal / zero */

loc_000955BE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000955C4u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000955C4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000955C7: ;
    eax = MEM32(esi + 0x1BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x1C8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000955E0; /* je: equal / zero */

loc_000955D7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000955DDu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000955DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000955E0: ;
    eax = MEM32(esi + 0x1AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x1B8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000955F9; /* je: equal / zero */

loc_000955F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000955F6u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000955F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000955F9: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x1A8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00095612; /* je: equal / zero */

loc_00095609: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009560Fu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0009560F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00095612: ;
    eax = MEM32(esi + 0x18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x198) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0009562B; /* je: equal / zero */

loc_00095622: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095628u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00095628: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009562B: ;
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x190;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 5;

loc_00095636: ;
    eax = MEM32(esi + -24);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0009564C; /* je: equal / zero */

loc_00095643: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095649u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00095649: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009564C: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00095636; /* jne: not equal / not zero */

loc_0009564F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00095660
 * Original: 0x00095660 - 0x00095727 (199 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095660: ;
    _fb = (uint32_t)(0x244) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x244;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    ebx = ebp + 4;
    PUSH32(esp, edi);
    MEM32(ebp) = 0x1BD88C;
    esi = ebx;
    edi = 0x13;
    /* nop */

loc_00095680: ;
    ecx = esi;
    PUSH32(esp, 0x00095687u); RECOMP_ABI_CALL(0x00095310u, sub_00095310); /* call 0x00095310 */

loc_00095687: ;
    _fb = (uint32_t)(0x2BC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2BC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00095680; /* jne: not equal / not zero */

loc_00095690: ;
    eax = MEM32(0x1BD460);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x1BD464);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000956A6u); RECOMP_ABI_CALL(0x000F8F90u, sub_000F8F90); /* call 0x000F8F90 */

loc_000956A6: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000956AFu); RECOMP_ABI_CALL(0x000F9280u, sub_000F9280); /* call 0x000F9280 */

loc_000956AF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000956B1: ;
    edx = MEM32(0x1CCBB0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000956CD; /* jbe: below or equal (unsigned <=) */

loc_000956BD: ;
    ecx = MEM32(0x1CCBAC);

loc_000956C3: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095722; /* je: equal / zero */

loc_000956C8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000956C3; /* jb: below (unsigned <) */

loc_000956CD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000956CF: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000956DCu); RECOMP_ABI_CALL(0x000F7E10u, sub_000F7E10); /* call 0x000F7E10 */

loc_000956DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000956F7; /* je: equal / zero */

loc_000956E0: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x000956ECu); RECOMP_ABI_CALL(0x00094A10u, sub_00094A10); /* call 0x00094A10 */

loc_000956EC: ;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000956F7u); RECOMP_ABI_CALL(0x000F7590u, sub_000F7590); /* call 0x000F7590 */

loc_000956F7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2BC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x2BC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x13 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000956B1; /* jb: below (unsigned <) */

loc_00095703: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0009570Cu); RECOMP_ABI_CALL(0x000F7550u, sub_000F7550); /* call 0x000F7550 */

loc_0009570C: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00095715u); RECOMP_ABI_CALL(0x000F7480u, sub_000F7480); /* call 0x000F7480 */

loc_00095715: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x244) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x244;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00095722: ;
    eax = ecx + eax * 8;
    goto loc_000956CF;

}

/**
 * sub_00095730
 * Original: 0x00095730 - 0x00095750 (32 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095730: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00095738u); RECOMP_ABI_CALL(0x00095750u, sub_00095750); /* call 0x00095750 */

loc_00095738: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00095748; /* je: equal / zero */

loc_0009573F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00095745u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00095745: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00095748: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00095750(); return; /* fallthrough 0x00095750 */

}

/**
 * sub_00095750
 * Original: 0x00095750 - 0x00095793 (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095750: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1BD88C;
    ecx = MEM32(0x1D9BA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00095774; /* je: equal / zero */

loc_00095764: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0009576Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095768u); } /* indirect call */
    }

loc_0009576A: ;
    MEM32(0x1D9BA8) = 0;

loc_00095774: ;
    _fb = (uint32_t)(0x33F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x33F8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x13;
    /* nop */

loc_00095780: ;
    _fb = (uint32_t)(0x2BC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x2BC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0009578Du); RECOMP_ABI_CALL(0x00095430u, sub_00095430); /* call 0x00095430 */

loc_0009578D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00095780; /* jne: not equal / not zero */

loc_00095790: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000957A0
 * Original: 0x000957A0 - 0x00095A42 (674 bytes, 217 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000957A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000957A0: ;
    eax = MEM32(0x1CCBB4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp) = ebx;
    PUSH32(esp, eax);
    MEM32(esi) = ebx;
    PUSH32(esp, 0x000957C0u); RECOMP_ABI_CALL(0x000F67C0u, sub_000F67C0); /* call 0x000F67C0 */

loc_000957C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095A3B; /* je: equal / zero */

loc_000957CB: ;
    ecx = MEM32(0x1CCBB4);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000957DAu); RECOMP_ABI_CALL(0x000F7090u, sub_000F7090); /* call 0x000F7090 */

loc_000957DA: ;
    edi = eax;
    eax = MEM32(0x1DEFB8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x14) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00095A31; /* jae: above or equal (unsigned >=) */

loc_000957FA: ;
    /* nop */

loc_00095800: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009580Fu); RECOMP_ABI_CALL(0x000DC7E0u, sub_000DC7E0); /* call 0x000DC7E0 */

loc_0009580F: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x1BD928);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009581Eu); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_0009581E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000958A2; /* jne: not equal / not zero */

loc_00095825: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x0009582Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009582C: ;
    MEM8(eax) = LO8(ebx);
    MEM32(eax + 0x48) = 4;
    MEM32(eax + 0x54) = 2;
    MEM32(eax + 0x4C) = 0x3D4CCCCD;
    MEM32(eax + 0x58) = ebx;
    MEM32(eax + 0x5C) = ebx;
    MEM32(eax + 0x60) = ebx;
    ecx = 1;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x50) = ecx;
    edx = MEM32(esi);
    MEM32(eax + 0x64) = edx;
    MEM32(esi) = eax;
    MEM32(ebp) = MEM32(ebp) + 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00095870u); RECOMP_ABI_CALL(0x000DC7E0u, sub_000DC7E0); /* call 0x000DC7E0 */

loc_00095870: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009587Au); RECOMP_ABI_CALL(0x001025F0u, sub_001025F0); /* call 0x001025F0 */

loc_0009587A: ;
    ecx = MEM32(esi);
    edi = eax;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD920);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009588Eu); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_0009588E: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x40) = edi;
    edi = MEM32(esp + 0x10);
    goto loc_00095A23;

loc_000958A2: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x1BD918);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000958B1u); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_000958B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000958D0; /* jne: not equal / not zero */

loc_000958B8: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x44;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000958C8u); RECOMP_ABI_CALL(0x000DC8E0u, sub_000DC8E0); /* call 0x000DC8E0 */

loc_000958C8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00095A23;

loc_000958D0: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x1BD910);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000958DFu); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_000958DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000958FE; /* jne: not equal / not zero */

loc_000958E6: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000958F6u); RECOMP_ABI_CALL(0x000DC8E0u, sub_000DC8E0); /* call 0x000DC8E0 */

loc_000958F6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00095A23;

loc_000958FE: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x1BD904);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009590Du); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_0009590D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009592C; /* jne: not equal / not zero */

loc_00095914: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00095924u); RECOMP_ABI_CALL(0x000DC8E0u, sub_000DC8E0); /* call 0x000DC8E0 */

loc_00095924: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00095A23;

loc_0009592C: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x1BD8F8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009593Bu); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_0009593B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009595A; /* jne: not equal / not zero */

loc_00095942: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x54;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00095952u); RECOMP_ABI_CALL(0x000DC8E0u, sub_000DC8E0); /* call 0x000DC8E0 */

loc_00095952: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00095A23;

loc_0009595A: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x1BD8EC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095969u); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_00095969: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095996; /* jne: not equal / not zero */

loc_00095970: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00095980u); RECOMP_ABI_CALL(0x000DC8A0u, sub_000DC8A0); /* call 0x000DC8A0 */

loc_00095980: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    eax = MEM32(esi);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(eax + 0x4C)); /* fdiv dword ptr [eax + 0x4c] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00095A23;

loc_00095996: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x1BD8E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000959A5u); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_000959A5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000959C1; /* jne: not equal / not zero */

loc_000959AC: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000959BCu); RECOMP_ABI_CALL(0x000DC8A0u, sub_000DC8A0); /* call 0x000DC8A0 */

loc_000959BC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00095A23;

loc_000959C1: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x1BD8D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000959D0u); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_000959D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000959EC; /* jne: not equal / not zero */

loc_000959D7: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000959E7u); RECOMP_ABI_CALL(0x000DC8A0u, sub_000DC8A0); /* call 0x000DC8A0 */

loc_000959E7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00095A23;

loc_000959EC: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x1BD8C4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000959FBu); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_000959FB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095A0D; /* jne: not equal / not zero */

loc_00095A02: ;
    eax = MEM32(esi);
    MEM32(eax + 0x60) = MEM32(eax + 0x60) | 0x100;
    _fa = (uint32_t)(MEM32(eax + 0x60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00095A23;

loc_00095A0D: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x1BD8C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00095A1Cu); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_00095A1C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095A31; /* je: equal / zero */

loc_00095A23: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00095800; /* jb: below (unsigned <) */

loc_00095A31: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095A37u); RECOMP_ABI_CALL(0x000F6CC0u, sub_000F6CC0); /* call 0x000F6CC0 */

loc_00095A37: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_00095A3B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00095A50
 * Original: 0x00095A50 - 0x00095A74 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095A50: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095A73; /* je: equal / zero */

loc_00095A58: ;
    PUSH32(esp, esi);
    /* nop */

loc_00095A60: ;
    esi = MEM32(eax + 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095A69u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00095A69: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00095A60; /* jne: not equal / not zero */

loc_00095A72: ;
    POP32(esp, esi);

loc_00095A73: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00095A80
 * Original: 0x00095A80 - 0x00095A87 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095A80: ;
    eax = MEM32(ecx + 0x40);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00095A90
 * Original: 0x00095A90 - 0x00095AB2 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095A90: ;
    edx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(edx + 4) = eax;
    MEM32(edx + 0x80) = eax;
    edi = edx + 8;
    ecx = 0x1E;
    MEM32(edx) = 0x1BD940;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00095AC0
 * Original: 0x00095AC0 - 0x00095AD6 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095AC0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00095AD3; /* jge: greater or equal (signed >=) */

loc_00095AC8: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 8) = edx;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00095AD3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095AE0
 * Original: 0x00095AE0 - 0x00095B1A (58 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095AE0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095B16; /* je: equal / zero */

loc_00095AEA: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00095B15; /* jle: less or equal (signed <=) */

loc_00095AF1: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ebx + 8;
    /* nop */

loc_00095B00: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00095B08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095B05u); } /* indirect call */
    }

loc_00095B08: ;
    eax = MEM32(ebx + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00095B00; /* jl: less (signed <) */

loc_00095B13: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00095B15: ;
    POP32(esp, esi);

loc_00095B16: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095B20
 * Original: 0x00095B20 - 0x00095B59 (57 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095B20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00095B4F; /* jle: less or equal (signed <=) */

loc_00095B2D: ;
    PUSH32(esp, esi);
    esi = edi + 8;

loc_00095B31: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095B43; /* je: equal / zero */

loc_00095B37: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00095B3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095B3Bu); } /* indirect call */
    }

loc_00095B3D: ;
    MEM32(esi) = 0;

loc_00095B43: ;
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00095B31; /* jl: less (signed <) */

loc_00095B4E: ;
    POP32(esp, esi);

loc_00095B4F: ;
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00095B60
 * Original: 0x00095B60 - 0x00095B6C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095B60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095B60: ;
    MEM32(ecx + 0x40) = MEM32(ecx + 0x40) & 0xFFFFFFFCu;
    _fa = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x44) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00095B70
 * Original: 0x00095B70 - 0x00095C38 (200 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095B70: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x40);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00095B83; /* je: equal / zero */

loc_00095B7E: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00095B86;

loc_00095B83: ;
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00095B86: ;
    esi = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x40) = eax;
    esi = esi & 0xFFFFFFFEu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x44) = ecx;
    MEM32(ebx + 0x40) = esi;
    eax = MEM32(0x1D9FB8);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ecx (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00095C0E; /* jle: less or equal (signed <=) */

loc_00095BA4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = 0x14;
    goto loc_00095BB0;

    /* nop */

loc_00095BB0: ;
    edi = MEM32(eax + ebp);
    esi = MEM32(edi + 0x3C);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00095BBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095BBAu); } /* indirect call */
    }

loc_00095BBD: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebx + 4;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00095BDEu); RECOMP_ABI_CALL(0x00030820u, sub_00030820); /* call 0x00030820 */

loc_00095BDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095C16; /* je: equal / zero */

loc_00095BE2: ;
    eax = MEM32(ebx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00095C00; /* js: sign (negative) */

loc_00095BE9: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00095BF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095BEDu); } /* indirect call */
    }

loc_00095BF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095C00; /* jne: not equal / not zero */

loc_00095BF4: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095C1B; /* jne: not equal / not zero */

loc_00095C00: ;
    eax = MEM32(ebx + 0x40);
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(ebx + 0x40) = eax;
    MEM32(ebx + 0x44) = esi;
    POP32(esp, ebp);

loc_00095C0E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00095C16: ;
    eax = MEM32(0x1D9FB8);

loc_00095C1B: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00095BB0; /* jl: less (signed <) */

loc_00095C2E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095C40
 * Original: 0x00095C40 - 0x00095C64 (36 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00095C40: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x40) = ecx;
    MEM32(eax) = 0x1BD950;
    MEM32(eax + 0x40) = edx;
    MEM32(eax + 0x44) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095C70
 * Original: 0x00095C70 - 0x00095C8F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095C70: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1BCC90;
    if (TEST_Z(_fa, _fb)) goto loc_00095C89; /* je: equal / zero */

loc_00095C80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00095C86u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00095C86: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00095C89: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095C90
 * Original: 0x00095C90 - 0x00095CB4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095C90: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1BD940;
    PUSH32(esp, 0x00095C9Eu); RECOMP_ABI_CALL(0x00095B20u, sub_00095B20); /* call 0x00095B20 */

loc_00095C9E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00095CAE; /* je: equal / zero */

loc_00095CA5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00095CABu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00095CAB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00095CAE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095CC0
 * Original: 0x00095CC0 - 0x00095CDE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095CC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00095CC8u); RECOMP_ABI_CALL(0x00095CE0u, sub_00095CE0); /* call 0x00095CE0 */

loc_00095CC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00095CD8; /* je: equal / zero */

loc_00095CCF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00095CD5u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00095CD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00095CD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095CE0
 * Original: 0x00095CE0 - 0x00095D13 (51 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095CE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1BD96C;
    ecx = MEM32(0x1D9FF8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00095CF5u); RECOMP_ABI_CALL(0x00107D10u, sub_00107D10); /* call 0x00107D10 */

loc_00095CF5: ;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095D0B; /* je: equal / zero */

loc_00095CFF: ;
    ecx = MEM32(0x1DE460);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095D0Bu); RECOMP_ABI_CALL(0x000ECFB0u, sub_000ECFB0); /* call 0x000ECFB0 */

loc_00095D0B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00116CD0(); return; /* tail jmp 0x00116CD0 */

}

/**
 * sub_00095D20
 * Original: 0x00095D20 - 0x00095DB0 (144 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095D20: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 8) = 0x40B00000;
    MEM32(eax + 0xC) = 0x3E99999A;
    edx = 0x3F800000;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = 0x40200000;
    MEM32(eax + 0x2C) = 0x3E4CCCCD;
    MEM32(eax + 0x30) = 0x40400000;
    MEM32(eax + 0x34) = 0x3E4CCCCD;
    MEM32(eax + 0x40) = 0xBE4CCCCDu;
    MEM32(eax + 0x44) = 0x3DCCCCCD;
    MEM32(eax + 0x48) = 0x3F59999A;
    edx = 0x3F000000;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x54) = edx;
    MEM32(eax + 0x50) = edx;
    MEM32(eax + 0x4C) = 0x3F0CCCCD;
    MEM32(eax + 0x68) = ecx;
    ecx = 0x3F333333;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x5C) = 0x3F4CCCCD;
    esp += 4; return; /* ret */

}

/**
 * sub_00095DB0
 * Original: 0x00095DB0 - 0x00095DBF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095DB0(void)
{

loc_00095DB0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095DBEu); RECOMP_ABI_CALL(0x00095E60u, sub_00095E60); /* call 0x00095E60 */

loc_00095DBE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00095DC0
 * Original: 0x00095DC0 - 0x00095E60 (160 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095DC0(void)
{

loc_00095DC0: ;
    eax = ecx;
    edx = 0x3F000000;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x24) = edx;
    edx = 0x3DCCCCCD;
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x44) = edx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0x3E4CCCCD;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0x14) = 0x3F800000;
    MEM32(eax + 0x18) = 0x40E00000;
    MEM32(eax + 0x20) = 0x40200000;
    MEM32(eax + 0x30) = 0x4019999A;
    MEM32(eax + 0x34) = 0x3E4CCCCD;
    MEM32(eax + 0x3C) = 0x3D4CCCCD;
    MEM32(eax + 0x40) = 0xBE4CCCCDu;
    ecx = 0x3ECCCCCD;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x28) = ecx;
    edx = 0x3F4CCCCD;
    MEM32(eax + 0x48) = edx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x58) = 0;
    MEM32(eax + 0x4C) = 0x3EE66666;
    ecx = 0x3F333333;
    MEM32(eax + 0x68) = 0;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x5C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00095E60
 * Original: 0x00095E60 - 0x0009606A (522 bytes, 152 insns)
 * Category: game_physics
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095E60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1BD334);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00095E75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095E72u); } /* indirect call */
    }

loc_00095E75: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD98C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00095E92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095E8Cu); } /* indirect call */
    }

loc_00095E92: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD31C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00095EAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095EA9u); } /* indirect call */
    }

loc_00095EAF: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD30C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00095ECCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095EC6u); } /* indirect call */
    }

loc_00095ECC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD304);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00095EE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095EE3u); } /* indirect call */
    }

loc_00095EE9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD2FC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00095F06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095F00u); } /* indirect call */
    }

loc_00095F06: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD2F0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00095F23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095F1Du); } /* indirect call */
    }

loc_00095F23: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD2E4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00095F40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095F3Au); } /* indirect call */
    }

loc_00095F40: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD2D8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00095F5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095F57u); } /* indirect call */
    }

loc_00095F5D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD2CC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00095F7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095F74u); } /* indirect call */
    }

loc_00095F7A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD2C0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00095F97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095F91u); } /* indirect call */
    }

loc_00095F97: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD2B4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00095FB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095FAEu); } /* indirect call */
    }

loc_00095FB4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD2A8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00095FD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095FCBu); } /* indirect call */
    }

loc_00095FD1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD29C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00095FEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095FE8u); } /* indirect call */
    }

loc_00095FEE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD290);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0009600Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096005u); } /* indirect call */
    }

loc_0009600B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD284);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00096028u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096022u); } /* indirect call */
    }

loc_00096028: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD278);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00096045u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009603Fu); } /* indirect call */
    }

loc_00096045: ;
    edx = MEM32(esi);
    eax = edi + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BD26C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00096055u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096052u); } /* indirect call */
    }

loc_00096055: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x5C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1BD260);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00096065u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096062u); } /* indirect call */
    }

loc_00096065: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00096070
 * Original: 0x00096070 - 0x00096219 (425 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00096070: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x1D9C38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00096089u); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_00096089: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0x3F333333);
    ecx = 0x1CEFD8;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x000960B0u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_000960B0: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    edx = MEM32(0x1D9C6C);
    eax = edx;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = 0x1CEFD8;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0x000960CFu); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_000960CF: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x1D9C64);
    edx = ecx;
    MEM32(esp + 4) = ecx;
    PUSH32(esp, edx);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x000960EAu); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_000960EA: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x1D9C5C);
    ecx = eax;
    PUSH32(esp, ecx);
    ecx = 0x1CEFD8;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x00096104u); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_00096104: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x1D9C54);
    eax = edx;
    PUSH32(esp, eax);
    ecx = 0x1CEFD8;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0x0009611Fu); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_0009611F: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x1D9C7C);
    edx = ecx;
    MEM32(esp + 4) = ecx;
    PUSH32(esp, edx);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x0009613Au); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_0009613A: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x1D9C74);
    ecx = eax;
    PUSH32(esp, ecx);
    ecx = 0x1CEFD8;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x00096154u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_00096154: ;
    ecx = MEM32(esi + 0x44);
    esi = MEM32(0x1D9C94);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = esi;
    esi = MEM32(0x1D9C98);
    MEM32(eax + 4) = esi;
    esi = MEM32(0x1D9C9C);
    MEM32(eax + 8) = esi;
    esi = MEM32(0x1D9CA0);
    MEM32(eax + 0xC) = esi;
    esi = MEM32(0x1D9C84);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = esi;
    esi = MEM32(0x1D9C88);
    MEM32(eax + 4) = esi;
    esi = MEM32(0x1D9C8C);
    MEM32(eax + 8) = esi;
    esi = MEM32(0x1D9C90);
    fp_push(MEMF(0x1D9C68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEM32(eax + 0xC) = esi;
    eax = MEM32(0x1D9C80);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x64;
    fp_push(MEMF(0x1D9C60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x48)); /* fadd dword ptr [esp + 0x48] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1D9C58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x4C)); /* fadd dword ptr [esp + 0x4c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1D9C50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x50)); /* fadd dword ptr [esp + 0x50] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1D9C78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x54)); /* fadd dword ptr [esp + 0x54] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1D9C70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00096214u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096211u); } /* indirect call */
    }

loc_00096214: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00096220
 * Original: 0x00096220 - 0x000963C9 (425 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00096220: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x1D9BC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00096239u); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_00096239: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(esi + 0x14);
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0x3F000000);
    ecx = 0x1CEFD8;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x00096260u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_00096260: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    edx = MEM32(0x1D9BF4);
    eax = edx;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = 0x1CEFD8;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0x0009627Fu); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_0009627F: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x1D9BEC);
    edx = ecx;
    MEM32(esp + 4) = ecx;
    PUSH32(esp, edx);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x0009629Au); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_0009629A: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x1D9BE4);
    ecx = eax;
    PUSH32(esp, ecx);
    ecx = 0x1CEFD8;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000962B4u); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_000962B4: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x1D9BDC);
    eax = edx;
    PUSH32(esp, eax);
    ecx = 0x1CEFD8;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0x000962CFu); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_000962CF: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x1D9C04);
    edx = ecx;
    MEM32(esp + 4) = ecx;
    PUSH32(esp, edx);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x000962EAu); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_000962EA: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x1D9BFC);
    ecx = eax;
    PUSH32(esp, ecx);
    ecx = 0x1CEFD8;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x00096304u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_00096304: ;
    ecx = MEM32(esi + 0x48);
    esi = MEM32(0x1D9C1C);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = esi;
    esi = MEM32(0x1D9C20);
    MEM32(eax + 4) = esi;
    esi = MEM32(0x1D9C24);
    MEM32(eax + 8) = esi;
    esi = MEM32(0x1D9C28);
    MEM32(eax + 0xC) = esi;
    esi = MEM32(0x1D9C0C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = esi;
    esi = MEM32(0x1D9C10);
    MEM32(eax + 4) = esi;
    esi = MEM32(0x1D9C14);
    MEM32(eax + 8) = esi;
    esi = MEM32(0x1D9C18);
    fp_push(MEMF(0x1D9BF0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEM32(eax + 0xC) = esi;
    eax = MEM32(0x1D9C08);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x64;
    fp_push(MEMF(0x1D9BE8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x48)); /* fadd dword ptr [esp + 0x48] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1D9BE0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x4C)); /* fadd dword ptr [esp + 0x4c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1D9BD8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x50)); /* fadd dword ptr [esp + 0x50] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1D9C00)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x54)); /* fadd dword ptr [esp + 0x54] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1D9BF8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000963C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000963C1u); } /* indirect call */
    }

loc_000963C4: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000963D0
 * Original: 0x000963D0 - 0x000964DD (269 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000963D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000963D0: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x38);
    eax = esp + 0x28;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000963E4u); RECOMP_ABI_CALL(0x00100DA0u, sub_00100DA0); /* call 0x00100DA0 */

loc_000963E4: ;
    ecx = MEM32(0x1DE460);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x1BD394);
    PUSH32(esp, 0x00096402u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00096402: ;
    PUSH32(esp, 0x1BD38C);
    ecx = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esi + 0x94) = eax;
    PUSH32(esp, 0x00096418u); RECOMP_ABI_CALL(0x00108220u, sub_00108220); /* call 0x00108220 */

loc_00096418: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x10);
    eax = ecx;
    MEM32(esp + 8) = ecx;
    ecx = edx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 4) = edx;
    MEM32(esp + 0xC) = edx;
    edx = eax;
    ecx = esp + 0x24;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = 0x20;
    MEM32(esp + 0x38) = 0x40400000;
    MEM32(esp + 0x44) = 0x3FC00000;
    MEM32(esp + 0x48) = 0x3FC00000;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x5C) = 0x3F800000;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0xC11CCCCDu;
    MEM32(esp + 0x58) = 0xBE4CCCCDu;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = 2;
    PUSH32(esp, 0x000964CCu); RECOMP_ABI_CALL(0x00116220u, sub_00116220); /* call 0x00116220 */

loc_000964CC: ;
    ecx = MEM32(0x1D9FF8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000964D8u); RECOMP_ABI_CALL(0x00107CE0u, sub_00107CE0); /* call 0x00107CE0 */

loc_000964D8: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000964E0
 * Original: 0x000964E0 - 0x0009661F (319 bytes, 105 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000964E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000964E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1BD9B8;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = ebp;
    ecx = MEM32(eax + 0x40);
    MEM32(esi + 8) = ecx;
    edx = MEM32(eax + 0x44);
    MEM32(esi + 0xC) = edx;
    ecx = MEM32(eax + 0x48);
    MEM32(esi + 0x10) = ecx;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00096544; /* je: equal / zero */

loc_00096510: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x1C) = edx;
    eax = MEM32(eax + 0x20);
    MEM32(ecx + 0x20) = eax;

loc_00096544: ;
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x0009654Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009654E: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009656E; /* je: equal / zero */

loc_00096557: ;
    ecx = edi;
    PUSH32(esp, 0x0009655Eu); RECOMP_ABI_CALL(0x001161F0u, sub_001161F0); /* call 0x001161F0 */

loc_0009655E: ;
    MEM32(edi) = 0x1BD96C;
    MEM32(edi + 0x94) = ebp;
    ecx = edi;
    goto loc_00096570;

loc_0009656E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00096570: ;
    PUSH32(esp, ebx);
    MEM32(esi + 0x44) = ecx;
    PUSH32(esp, 0x00096579u); RECOMP_ABI_CALL(0x000963D0u, sub_000963D0); /* call 0x000963D0 */

loc_00096579: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00096581u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009657Eu); } /* indirect call */
    }

loc_00096581: ;
    ebx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000965D7; /* je: equal / zero */

loc_00096589: ;
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x00096593u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00096593: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000965B3; /* je: equal / zero */

loc_0009659C: ;
    ecx = edi;
    PUSH32(esp, 0x000965A3u); RECOMP_ABI_CALL(0x001161F0u, sub_001161F0); /* call 0x001161F0 */

loc_000965A3: ;
    MEM32(edi) = 0x1BD96C;
    MEM32(edi + 0x94) = ebp;
    ecx = edi;
    goto loc_000965B5;

loc_000965B3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000965B5: ;
    MEM32(esi + 0x48) = ecx;
    PUSH32(esp, 0x000965BDu); RECOMP_ABI_CALL(0x000963D0u, sub_000963D0); /* call 0x000963D0 */

loc_000965BD: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000965C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000965C2u); } /* indirect call */
    }

loc_000965C5: ;
    ecx = MEM32(ebx + 0x40);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(ebx + 0x44);
    MEM32(esi + 0x18) = edx;
    eax = MEM32(ebx + 0x48);
    MEM32(esi + 0x1C) = eax;

loc_000965D7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x1BD9A8);
    MEM32(esi + 0x4C) = ebp;
    MEM32(esi + 0x50) = ebp;
    edi = MEM32(0x1DE810);
    PUSH32(esp, 0x1D9C38);
    PUSH32(esp, 0x95DB0);
    ecx = edi;
    PUSH32(esp, 0x000965FAu); RECOMP_ABI_CALL(0x000EBDD0u, sub_000EBDD0); /* call 0x000EBDD0 */

loc_000965FA: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), ebp (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00096617; /* je: equal / zero */

loc_00096600: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x1BD998);
    PUSH32(esp, 0x1D9BC0);
    PUSH32(esp, 0x95DB0);
    ecx = edi;
    PUSH32(esp, 0x00096617u); RECOMP_ABI_CALL(0x000EBDD0u, sub_000EBDD0); /* call 0x000EBDD0 */

loc_00096617: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00096620
 * Original: 0x00096620 - 0x00096672 (82 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096620: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1BD9B8;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0x1D9C38);
    PUSH32(esp, 0x00096639u); RECOMP_ABI_CALL(0x000EBB10u, sub_000EBB10); /* call 0x000EBB10 */

loc_00096639: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096646; /* je: equal / zero */

loc_00096640: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00096646u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096644u); } /* indirect call */
    }

loc_00096646: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009666A; /* je: equal / zero */

loc_0009664D: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0x1D9BC0);
    PUSH32(esp, 0x0009665Du); RECOMP_ABI_CALL(0x000EBB10u, sub_000EBB10); /* call 0x000EBB10 */

loc_0009665D: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009666A; /* je: equal / zero */

loc_00096664: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0009666Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096668u); } /* indirect call */
    }

loc_0009666A: ;
    MEM32(esi) = 0x1BB3A8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00096680
 * Original: 0x00096680 - 0x000966D2 (82 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00096680: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x4C)); /* fadd dword ptr [esi + 0x4c] */
    MEMF(esi + 0x4C) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x50)); /* fadd dword ptr [esi + 0x50] */
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1D9C44)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1d9c44] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000966B0; /* jne: not equal / not zero */

loc_000966A4: ;
    PUSH32(esp, 0x000966A9u); RECOMP_ABI_CALL(0x00096070u, sub_00096070); /* call 0x00096070 */

loc_000966A9: ;
    MEM32(esi + 0x4C) = 0;

loc_000966B0: ;
    fp_push(MEMF(esi + 0x50)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1D9BCC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1d9bcc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000966CE; /* jne: not equal / not zero */

loc_000966C0: ;
    ecx = esi;
    PUSH32(esp, 0x000966C7u); RECOMP_ABI_CALL(0x00096220u, sub_00096220); /* call 0x00096220 */

loc_000966C7: ;
    MEM32(esi + 0x50) = 0;

loc_000966CE: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000966E0
 * Original: 0x000966E0 - 0x000966FE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000966E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000966E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000966E8u); RECOMP_ABI_CALL(0x00096620u, sub_00096620); /* call 0x00096620 */

loc_000966E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000966F8; /* je: equal / zero */

loc_000966EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000966F5u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000966F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000966F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00096700
 * Original: 0x00096700 - 0x00096726 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096700: ;
    MEM32(ecx) = 0x1BD9D0;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096725; /* je: equal / zero */

loc_0009670D: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_0009671E; /* je: equal / zero */

loc_00096717: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0009671Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009671Bu); } /* indirect call */
    }

loc_0009671D: ;
    esp += 4; return; /* ret */

loc_0009671E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00096724u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00096724: ;
    POP32(esp, ecx);

loc_00096725: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00096730
 * Original: 0x00096730 - 0x00096771 (65 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096730: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x1BD9D0;
    if (CMP_EQ(_fa, _fb)) goto loc_0009675B; /* je: equal / zero */

loc_00096740: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00096752; /* je: equal / zero */

loc_0009674A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00096750u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009674Eu); } /* indirect call */
    }

loc_00096750: ;
    goto loc_0009675B;

loc_00096752: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00096758u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00096758: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009675B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009676B; /* je: equal / zero */

loc_00096762: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00096768u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00096768: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009676B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00096780
 * Original: 0x00096780 - 0x00096790 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096780(void)
{

loc_00096780: ;
    eax = ecx;
    MEM32(eax) = 0x1BD9E0;
    MEM32(eax + 0xC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00096790
 * Original: 0x00096790 - 0x000967FB (107 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096790: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1BD9CC;
    if (CMP_EQ(_fa, _fb)) goto loc_000967E5; /* je: equal / zero */

loc_000967A0: ;
    PUSH32(esp, edi);

loc_000967A1: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(eax + 4);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000967B2; /* je: equal / zero */

loc_000967AD: ;
    MEM32(edx + 4) = ecx;
    goto loc_000967B5;

loc_000967B2: ;
    MEM32(esi + 4) = ecx;

loc_000967B5: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000967C4; /* je: equal / zero */

loc_000967BC: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_000967CA;

loc_000967C4: ;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;

loc_000967CA: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000967D7; /* je: equal / zero */

loc_000967D1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000967D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000967D4u); } /* indirect call */
    }

loc_000967D7: ;
    edx = MEM32(esi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0xC) = edx;
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000967A1; /* jne: not equal / not zero */

loc_000967E4: ;
    POP32(esp, edi);

loc_000967E5: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000967F9; /* je: equal / zero */

loc_000967EC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000967F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000967F0u); } /* indirect call */
    }

loc_000967F2: ;
    MEM32(esi + 0x10) = 0;

loc_000967F9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00096800
 * Original: 0x00096800 - 0x0009681E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096800: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00096808u); RECOMP_ABI_CALL(0x00096790u, sub_00096790); /* call 0x00096790 */

loc_00096808: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00096818; /* je: equal / zero */

loc_0009680F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00096815u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00096815: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00096818: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00096820
 * Original: 0x00096820 - 0x000968AA (138 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096820: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096896; /* je: equal / zero */

loc_0009682D: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009684F; /* je: equal / zero */

loc_00096834: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00096846; /* je: equal / zero */

loc_0009683E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00096844u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096842u); } /* indirect call */
    }

loc_00096844: ;
    goto loc_0009684F;

loc_00096846: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009684Cu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0009684C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009684F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009688F; /* jle: less or equal (signed <=) */

loc_00096853: ;
    ecx = ebx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00096861u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00096861: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096881; /* je: equal / zero */

loc_00096868: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x96780);
    PUSH32(esp, ebx);
    esi = eax + 4;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    MEM32(eax) = ebx;
    PUSH32(esp, 0x0009687Cu); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_0009687C: ;
    eax = esi;
    POP32(esp, esi);
    goto loc_00096883;

loc_00096881: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00096883: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00096896; /* jne: not equal / not zero */

loc_0009688A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0009688F: ;
    MEM32(edi + 4) = 0;

loc_00096896: ;
    edx = MEM32(edi);
    ecx = edi;
    MEM32(edi + 8) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000968A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009689Du); } /* indirect call */
    }

loc_000968A0: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000968B0
 * Original: 0x000968B0 - 0x000968D4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000968B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000968B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1BD9E4;
    PUSH32(esp, 0x000968BEu); RECOMP_ABI_CALL(0x00096700u, sub_00096700); /* call 0x00096700 */

loc_000968BE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000968CE; /* je: equal / zero */

loc_000968C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000968CBu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000968CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000968CE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000968E0
 * Original: 0x000968E0 - 0x00096972 (146 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000968E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000968E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0009693D; /* je: equal / zero */

loc_000968EA: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, ebp);
    ebp = edi + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00096925; /* js: sign (negative) */

loc_000968FC: ;
    edi = eax + 1;
    /* nop */

loc_00096900: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi) = 0x1BD9E0;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096922; /* je: equal / zero */

loc_00096910: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0009691B; /* jne: not equal / not zero */

loc_00096915: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0009691Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096919u); } /* indirect call */
    }

loc_0009691B: ;
    MEM32(esi + 0xC) = 0;

loc_00096922: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00096900; /* jne: not equal / not zero */

loc_00096925: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00096935; /* je: equal / zero */

loc_0009692C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00096932u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00096932: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00096935: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0009693D: ;
    MEM32(edi) = 0x1BD9E0;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009695C; /* je: equal / zero */

loc_0009694A: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00096955; /* jne: not equal / not zero */

loc_0009694F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00096955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096953u); } /* indirect call */
    }

loc_00096955: ;
    MEM32(edi + 0xC) = 0;

loc_0009695C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009696C; /* je: equal / zero */

loc_00096963: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00096969u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00096969: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009696C: ;
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00096980
 * Original: 0x00096980 - 0x0009699E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096980: ;
    eax = ecx;
    MEM32(eax) = 0x1BD9F4;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = 0x1BD9CC;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000969A0
 * Original: 0x000969A0 - 0x000969EC (76 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000969A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000969A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 4;
    MEM32(edi) = 0x1BD9F4;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000969CE; /* je: equal / zero */

loc_000969B4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000969B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000969B6u); } /* indirect call */
    }

loc_000969B9: ;
    MEM32(esi + 8) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 0xC) = 0;

loc_000969CE: ;
    ecx = esi;
    PUSH32(esp, 0x000969D5u); RECOMP_ABI_CALL(0x00096790u, sub_00096790); /* call 0x00096790 */

loc_000969D5: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000969E5; /* je: equal / zero */

loc_000969DC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000969E2u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000969E2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000969E5: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000969F0
 * Original: 0x000969F0 - 0x00096B56 (358 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000969F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000969F0: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00096A2F; /* jne: not equal / not zero */

loc_00096A05: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00096A0Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00096A0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096A2A; /* je: equal / zero */

loc_00096A13: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax) = 0x1BD9E4;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    goto loc_00096A2C;

loc_00096A2A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00096A2C: ;
    MEM32(esi + 0x10) = eax;

loc_00096A2F: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00096A39u); RECOMP_ABI_CALL(0x00096820u, sub_00096820); /* call 0x00096820 */

loc_00096A39: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x38);
    ecx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00096B50; /* jle: less or equal (signed <=) */

loc_00096A57: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x18) = eax;
    goto loc_00096A70;

loc_00096A63: ;
    ecx = MEM32(esp + 0x14);
    goto loc_00096A70;

    /* nop */

loc_00096A70: ;
    ebp = MEM32(ecx + 0x6C);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1BDA04);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00096A82u); RECOMP_ABI_CALL(0x00105910u, sub_00105910); /* call 0x00105910 */

loc_00096A82: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096B34; /* je: equal / zero */

loc_00096A8D: ;
    PUSH32(esp, 0x1BDA04);
    PUSH32(esp, 0x00096A97u); RECOMP_ABI_CALL(0x001025F0u, sub_001025F0); /* call 0x001025F0 */

loc_00096A97: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00096A9Fu); RECOMP_ABI_CALL(0x0012B4C9u, sub_0012B4C9); /* call 0x0012B4C9 */

loc_00096A9F: ;
    PUSH32(esp, eax);
    edx = esp + 0x34;
    PUSH32(esp, 0x1BD9F8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00096AAFu); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00096AAF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00096AC0;

    /* nop */

loc_00096AC0: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(eax + 0x6C);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00096AD4u); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_00096AD4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096AEB; /* je: equal / zero */

loc_00096ADB: ;
    eax = MEM32(esp + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x7C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00096AC0; /* jl: less (signed <) */

loc_00096AE7: ;
    esi = MEM32(esp + 0x20);

loc_00096AEB: ;
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x00096AF2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00096AF2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096B06; /* je: equal / zero */

loc_00096AF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x00096B02u); RECOMP_ABI_CALL(0x000964E0u, sub_000964E0); /* call 0x000964E0 */

loc_00096B02: ;
    esi = eax;
    goto loc_00096B08;

loc_00096B06: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00096B08: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x20) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00096B13; /* je: equal / zero */

loc_00096B10: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00096B13: ;
    ecx = MEM32(esp + 0x24);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00096B21u); RECOMP_ABI_CALL(0x000B8C50u, sub_000B8C50); /* call 0x000B8C50 */

loc_00096B21: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096B32; /* je: equal / zero */

loc_00096B25: ;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00096B32; /* jne: not equal / not zero */

loc_00096B2A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00096B32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096B30u); } /* indirect call */
    }

loc_00096B32: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00096B34: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_00096A63; /* jne: not equal / not zero */

loc_00096B4E: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00096B50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00096B60
 * Original: 0x00096B60 - 0x00096B89 (41 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096B60: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096B86; /* je: equal / zero */

loc_00096B67: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);

loc_00096B70: ;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00096B79u); RECOMP_ABI_CALL(0x00096680u, sub_00096680); /* call 0x00096680 */

loc_00096B79: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00096B84; /* je: equal / zero */

loc_00096B7F: ;
    esi = MEM32(esi + 4);
    goto loc_00096B70;

loc_00096B84: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00096B86: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00096B90
 * Original: 0x00096B90 - 0x00096BB6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096B90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096B90: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x1BDA1C;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00096BC0
 * Original: 0x00096BC0 - 0x00096C62 (162 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096BC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x28);
    esi = ecx;
    PUSH32(esp, 0x00096BCAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00096BCA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096BDF; /* je: equal / zero */

loc_00096BD1: ;
    PUSH32(esp, 0xC8);
    ecx = eax;
    PUSH32(esp, 0x00096BDDu); RECOMP_ABI_CALL(0x00105C80u, sub_00105C80); /* call 0x00105C80 */

loc_00096BDD: ;
    goto loc_00096BE1;

loc_00096BDF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00096BE1: ;
    PUSH32(esp, 0xA0);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x00096BEEu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00096BEE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096BFE; /* je: equal / zero */

loc_00096BF5: ;
    ecx = eax;
    PUSH32(esp, 0x00096BFCu); RECOMP_ABI_CALL(0x00106E10u, sub_00106E10); /* call 0x00106E10 */

loc_00096BFC: ;
    goto loc_00096C00;

loc_00096BFE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00096C00: ;
    PUSH32(esp, 0x3C);
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00096C0Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00096C0A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096C1A; /* je: equal / zero */

loc_00096C11: ;
    ecx = eax;
    PUSH32(esp, 0x00096C18u); RECOMP_ABI_CALL(0x00094190u, sub_00094190); /* call 0x00094190 */

loc_00096C18: ;
    goto loc_00096C1C;

loc_00096C1A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00096C1C: ;
    PUSH32(esp, 0x104);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x00096C29u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00096C29: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096C39; /* je: equal / zero */

loc_00096C30: ;
    ecx = eax;
    PUSH32(esp, 0x00096C37u); RECOMP_ABI_CALL(0x00090EC0u, sub_00090EC0); /* call 0x00090EC0 */

loc_00096C37: ;
    goto loc_00096C3B;

loc_00096C39: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00096C3B: ;
    PUSH32(esp, 0xD4);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x00096C48u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00096C48: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096C5B; /* je: equal / zero */

loc_00096C4F: ;
    ecx = eax;
    PUSH32(esp, 0x00096C56u); RECOMP_ABI_CALL(0x0008D9A0u, sub_0008D9A0); /* call 0x0008D9A0 */

loc_00096C56: ;
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00096C5B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00096C70
 * Original: 0x00096C70 - 0x00096D4C (220 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00096C70: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096CCA; /* jne: not equal / not zero */

loc_00096C7D: ;
    PUSH32(esp, 0x80E0);
    PUSH32(esp, 0x00096C87u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00096C87: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096C97; /* je: equal / zero */

loc_00096C8E: ;
    ecx = eax;
    PUSH32(esp, 0x00096C95u); RECOMP_ABI_CALL(0x00116D80u, sub_00116D80); /* call 0x00116D80 */

loc_00096C95: ;
    goto loc_00096C99;

loc_00096C97: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00096C99: ;
    ecx = 0x100;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = ecx;
    ecx = 8;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esp + 0xC) = 1;
    PUSH32(esp, 0x00096CCAu); RECOMP_ABI_CALL(0x00117860u, sub_00117860); /* call 0x00117860 */

loc_00096CCA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00096CD2u); RECOMP_ABI_CALL(0x00019B90u, sub_00019B90); /* call 0x00019B90 */

loc_00096CD2: ;
    fp_push(MEMF(eax + 0x48)); /* fld float */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00096CDEu); RECOMP_ABI_CALL(0x00019B90u, sub_00019B90); /* call 0x00019B90 */

loc_00096CDE: ;
    ecx = MEM32(esi + 0x24);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(eax);
    ebx = MEM32(eax + 4);
    ebp = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0x00096CFDu); RECOMP_ABI_CALL(0x00116EA0u, sub_00116EA0); /* call 0x00116EA0 */

loc_00096CFD: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = MEM32(esi + 0x24);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edi;
    MEM32(ecx + 4) = ebx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    POP32(esp, edi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    MEM32(ecx + 8) = ebp;
    POP32(esp, ebp);
    MEM32(ecx + 0xC) = edx;
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00096D3C; /* jne: not equal / not zero */

loc_00096D29: ;
    ecx = MEM32(esi + 0x24);
    eax = 1;
    MEM32(ecx + 0x98) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00096D3C: ;
    edx = MEM32(esi + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x98) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00096D50
 * Original: 0x00096D50 - 0x00096E2A (218 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096D50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x1BDA1C;
    if (CMP_EQ(_fa, _fb)) goto loc_00096D66; /* je: equal / zero */

loc_00096D60: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00096D66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096D64u); } /* indirect call */
    }

loc_00096D66: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096D73; /* je: equal / zero */

loc_00096D6D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00096D73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096D71u); } /* indirect call */
    }

loc_00096D73: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096D8B; /* je: equal / zero */

loc_00096D7B: ;
    ecx = edi;
    PUSH32(esp, 0x00096D82u); RECOMP_ABI_CALL(0x0008D9D0u, sub_0008D9D0); /* call 0x0008D9D0 */

loc_00096D82: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00096D88u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00096D88: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00096D8B: ;
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096DA2; /* je: equal / zero */

loc_00096D92: ;
    ecx = edi;
    PUSH32(esp, 0x00096D99u); RECOMP_ABI_CALL(0x000910F0u, sub_000910F0); /* call 0x000910F0 */

loc_00096D99: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00096D9Fu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00096D9F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00096DA2: ;
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096DB9; /* je: equal / zero */

loc_00096DA9: ;
    ecx = edi;
    PUSH32(esp, 0x00096DB0u); RECOMP_ABI_CALL(0x00101DF0u, sub_00101DF0); /* call 0x00101DF0 */

loc_00096DB0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00096DB6u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00096DB6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00096DB9: ;
    edi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096DD0; /* je: equal / zero */

loc_00096DC0: ;
    ecx = edi;
    PUSH32(esp, 0x00096DC7u); RECOMP_ABI_CALL(0x00107800u, sub_00107800); /* call 0x00107800 */

loc_00096DC7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00096DCDu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00096DCD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00096DD0: ;
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096DE7; /* je: equal / zero */

loc_00096DD7: ;
    ecx = edi;
    PUSH32(esp, 0x00096DDEu); RECOMP_ABI_CALL(0x00105D30u, sub_00105D30); /* call 0x00105D30 */

loc_00096DDE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00096DE4u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00096DE4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00096DE7: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096DF4; /* je: equal / zero */

loc_00096DEE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00096DF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096DF2u); } /* indirect call */
    }

loc_00096DF4: ;
    edi = MEM32(esi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096E0B; /* je: equal / zero */

loc_00096DFB: ;
    ecx = edi;
    PUSH32(esp, 0x00096E02u); RECOMP_ABI_CALL(0x000916D0u, sub_000916D0); /* call 0x000916D0 */

loc_00096E02: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00096E08u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00096E08: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00096E0B: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x00096E13u); RECOMP_ABI_CALL(0x00117B60u, sub_00117B60); /* call 0x00117B60 */

loc_00096E13: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00096E28; /* je: equal / zero */

loc_00096E1B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00096E21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096E1Fu); } /* indirect call */
    }

loc_00096E21: ;
    MEM32(esi + 0x18) = 0;

loc_00096E28: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00096E30
 * Original: 0x00096E30 - 0x00096FDA (426 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00096E30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x00096E3Cu); RECOMP_ABI_CALL(0x0008EF60u, sub_0008EF60); /* call 0x0008EF60 */

loc_00096E3C: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x00096E44u); RECOMP_ABI_CALL(0x00094300u, sub_00094300); /* call 0x00094300 */

loc_00096E44: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00096E4Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00096E4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096E5B; /* je: equal / zero */

loc_00096E52: ;
    ecx = eax;
    PUSH32(esp, 0x00096E59u); RECOMP_ABI_CALL(0x00096980u, sub_00096980); /* call 0x00096980 */

loc_00096E59: ;
    goto loc_00096E5D;

loc_00096E5B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00096E5D: ;
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x00096E67u); RECOMP_ABI_CALL(0x000969F0u, sub_000969F0); /* call 0x000969F0 */

loc_00096E67: ;
    PUSH32(esp, 0x1A4);
    PUSH32(esp, 0x00096E71u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00096E71: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096EA1; /* je: equal / zero */

loc_00096E78: ;
    ecx = MEM32(0x1D9FB8);
    edx = MEM32(ecx + 0x38);
    edx = MEM32(edx + 0x1C);
    ecx = MEM32(ecx + 0x54);
    PUSH32(esp, 0x1BDA58);
    PUSH32(esp, 0x1BDA48);
    PUSH32(esp, 0x1BDA34);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00096E9Fu); RECOMP_ABI_CALL(0x00101200u, sub_00101200); /* call 0x00101200 */

loc_00096E9F: ;
    goto loc_00096EA3;

loc_00096EA1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00096EA3: ;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x00096EABu); RECOMP_ABI_CALL(0x00019B90u, sub_00019B90); /* call 0x00019B90 */

loc_00096EAB: ;
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    ecx = MEM32(eax + 0x28);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    ecx = esp + 0x14;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00096ED2u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00096ED2: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esi + 0x14);
    MEM32(edx + 0x148) = eax;
    ecx = MEM32(0x1D9FB8);
    eax = MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096F04; /* je: equal / zero */

loc_00096EED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096F04; /* je: equal / zero */

loc_00096EF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096F04; /* je: equal / zero */

loc_00096EF7: ;
    edx = MEM32(esi + 0x14);
    MEM32(edx + 0x1A0) = 0;

loc_00096F04: ;
    eax = MEM32(0x1D9FB8);
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x50), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00096F29; /* jbe: below or equal (unsigned <=) */

loc_00096F0F: ;
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + 0x198) = 0;
    edx = MEM32(esi + 0x14);
    MEM32(edx + 0x19C) = 0;

loc_00096F29: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(0x1D9FF8);
    edx = MEM32(0x1D9FB8);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x1BDA34);
    PUSH32(esp, 0x1BDA34);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x00096F53u); RECOMP_ABI_CALL(0x00107910u, sub_00107910); /* call 0x00107910 */

loc_00096F53: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00096F5Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00096F5A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096F6A; /* je: equal / zero */

loc_00096F61: ;
    ecx = eax;
    PUSH32(esp, 0x00096F68u); RECOMP_ABI_CALL(0x00117A20u, sub_00117A20); /* call 0x00117A20 */

loc_00096F68: ;
    goto loc_00096F6C;

loc_00096F6A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00096F6C: ;
    PUSH32(esp, 0x10);
    ecx = eax;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x00096F78u); RECOMP_ABI_CALL(0x00117A60u, sub_00117A60); /* call 0x00117A60 */

loc_00096F78: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1BDA20);
    PUSH32(esp, 0x00096F87u); RECOMP_ABI_CALL(0x00117BC0u, sub_00117BC0); /* call 0x00117BC0 */

loc_00096F87: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1BDA20);
    PUSH32(esp, 0x00096F96u); RECOMP_ABI_CALL(0x00117BC0u, sub_00117BC0); /* call 0x00117BC0 */

loc_00096F96: ;
    edx = MEM32(0x1D9FB8);
    _fa = (uint32_t)(MEM32(edx + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x54), 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00096FA9; /* jg: greater (signed >) */

loc_00096FA2: ;
    ecx = esi;
    PUSH32(esp, 0x00096FA9u); RECOMP_ABI_CALL(0x00096C70u, sub_00096C70); /* call 0x00096C70 */

loc_00096FA9: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00096FB0u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00096FB0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096FCB; /* je: equal / zero */

loc_00096FB7: ;
    ecx = eax;
    PUSH32(esp, 0x00096FBEu); RECOMP_ABI_CALL(0x00091A10u, sub_00091A10); /* call 0x00091A10 */

loc_00096FBE: ;
    ecx = eax;
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x00096FC8u); RECOMP_ABI_CALL(0x00091690u, sub_00091690); /* call 0x00091690 */

loc_00096FC8: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00096FCB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax;
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x00096FD7u); RECOMP_ABI_CALL(0x00091690u, sub_00091690); /* call 0x00091690 */

loc_00096FD7: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00096FE0
 * Original: 0x00096FE0 - 0x0009708C (172 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00096FE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00096FF2u); RECOMP_ABI_CALL(0x000948E0u, sub_000948E0); /* call 0x000948E0 */

loc_00096FF2: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00096FFBu); RECOMP_ABI_CALL(0x00096B60u, sub_00096B60); /* call 0x00096B60 */

loc_00096FFB: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00097004u); RECOMP_ABI_CALL(0x0008DA60u, sub_0008DA60); /* call 0x0008DA60 */

loc_00097004: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009700Du); RECOMP_ABI_CALL(0x00117C10u, sub_00117C10); /* call 0x00117C10 */

loc_0009700D: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x00097015u); RECOMP_ABI_CALL(0x00105DC0u, sub_00105DC0); /* call 0x00105DC0 */

loc_00097015: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009701Eu); RECOMP_ABI_CALL(0x00106F10u, sub_00106F10); /* call 0x00106F10 */

loc_0009701E: ;
    ecx = MEM32(0x1D9FB8);
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0009706F; /* jle: less or equal (signed <=) */

loc_00097033: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    goto loc_00097040;

    /* nop */

loc_00097040: ;
    eax = MEM32(ecx);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = MEM32(eax + 0xB4);
    MEM32(esp + 8) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = esp + 8;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00097063; /* jnp: not parity */

loc_0009705F: ;
    eax = esp + 0x10;

loc_00097063: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00097040; /* jne: not equal / not zero */

loc_0009706F: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009707Du); RECOMP_ABI_CALL(0x00091130u, sub_00091130); /* call 0x00091130 */

loc_0009707D: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00097086u); RECOMP_ABI_CALL(0x00092500u, sub_00092500); /* call 0x00092500 */

loc_00097086: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00097090
 * Original: 0x00097090 - 0x000970AE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097090: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00097098u); RECOMP_ABI_CALL(0x00096D50u, sub_00096D50); /* call 0x00096D50 */

loc_00097098: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000970A8; /* je: equal / zero */

loc_0009709F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000970A5u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000970A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000970A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000970B0
 * Original: 0x000970B0 - 0x000970C9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000970B0(void)
{

loc_000970B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000970B8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000970B8: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDAF4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000970D0
 * Original: 0x000970D0 - 0x000970E9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000970D0(void)
{

loc_000970D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000970D8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000970D8: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDB18;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000970F0
 * Original: 0x000970F0 - 0x0009710B (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000970F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000970F0: ;
    PUSH32(esp, 0x3FC);
    PUSH32(esp, 0x000970FAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000970FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097108; /* je: equal / zero */

loc_00097101: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00044010(); return; /* tail jmp 0x00044010 */

loc_00097108: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00097110
 * Original: 0x00097110 - 0x00097129 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097110(void)
{

loc_00097110: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00097118u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00097118: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDB84;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00097130
 * Original: 0x00097130 - 0x00097155 (37 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097130: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x00097143u); RECOMP_ABI_CALL(0x000A0070u, sub_000A0070); /* call 0x000A0070 */

loc_00097143: ;
    ecx = MEM32(0x1DA03C);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00097153u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097150u); } /* indirect call */
    }

loc_00097153: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00097160
 * Original: 0x00097160 - 0x0009716E (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097160(void)
{

loc_00097160: ;
    ecx = MEM32(0x1DA03C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0009716Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097168u); } /* indirect call */
    }

loc_0009716B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097170
 * Original: 0x00097170 - 0x00097201 (145 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097170: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000971FB; /* jne: not equal / not zero */

loc_0009717E: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B3684);
    PUSH32(esp, 0x0009718Bu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009718B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000971FB; /* jne: not equal / not zero */

loc_00097192: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0009719Au); RECOMP_ABI_CALL(0x0009B3A0u, sub_0009B3A0); /* call 0x0009B3A0 */

loc_0009719A: ;
    ecx = MEM32(0x1DA034);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x000971A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000971A2u); } /* indirect call */
    }

loc_000971A8: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000971AFu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000971AF: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000971E6; /* je: equal / zero */

loc_000971B8: ;
    ecx = esi;
    PUSH32(esp, 0x000971BFu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000971BF: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDA7C;
    MEM32(esi + 0x10) = 0;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000971DCu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000971DC: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000971E6: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000971F1u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000971F1: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000971FB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097210
 * Original: 0x00097210 - 0x0009728C (124 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097210: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097286; /* jne: not equal / not zero */

loc_0009721E: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B3904);
    PUSH32(esp, 0x0009722Bu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009722B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097286; /* jne: not equal / not zero */

loc_00097232: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0009723Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009723A: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097271; /* je: equal / zero */

loc_00097243: ;
    ecx = esi;
    PUSH32(esp, 0x0009724Au); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009724A: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDAA0;
    MEM32(esi + 0x14) = 0;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00097267u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00097267: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00097271: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009727Cu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009727C: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00097286: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097290
 * Original: 0x00097290 - 0x000972CC (60 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097290: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x000972A4u); RECOMP_ABI_CALL(0x000A0070u, sub_000A0070); /* call 0x000A0070 */

loc_000972A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000972ACu); RECOMP_ABI_CALL(0x0009FE90u, sub_0009FE90); /* call 0x0009FE90 */

loc_000972AC: ;
    esi = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1BDBA8);
    PUSH32(esp, 0x000972BEu); RECOMP_ABI_CALL(0x00036B00u, sub_00036B00); /* call 0x00036B00 */

loc_000972BE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000972C9u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000972C9: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000972D0
 * Original: 0x000972D0 - 0x0009730D (61 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000972D0(void)
{

loc_000972D0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x1DA038);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000972DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000972DCu); } /* indirect call */
    }

loc_000972DF: ;
    esi = MEM32(0x1DA050);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x115);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00097302u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_00097302: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0009730Au); RECOMP_ABI_CALL(0x00047860u, sub_00047860); /* call 0x00047860 */

loc_0009730A: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00097310
 * Original: 0x00097310 - 0x000973ED (221 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097310: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000973E6; /* jne: not equal / not zero */

loc_00097323: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B2E78);
    PUSH32(esp, 0x00097330u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00097330: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000973C0; /* jne: not equal / not zero */

loc_0009733B: ;
    ecx = MEM32(0x1D9FB8);
    MEM32(ecx + 0x44) = eax;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009736E; /* jle: less or equal (signed <=) */

loc_00097353: ;
    eax = MEM32(eax + 0x58);
    edx = ZX8(LO8(ebx));
    ecx = MEM32(eax + edx * 4);
    PUSH32(esp, 0x00097361u); RECOMP_ABI_CALL(0x0009EA00u, sub_0009EA00); /* call 0x0009EA00 */

loc_00097361: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00097353; /* jl: less (signed <) */

loc_0009736E: ;
    PUSH32(esp, 0x00097373u); RECOMP_ABI_CALL(0x000A00E0u, sub_000A00E0); /* call 0x000A00E0 */

loc_00097373: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0009737Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009737A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000973AB; /* je: equal / zero */

loc_00097384: ;
    ecx = esi;
    PUSH32(esp, 0x0009738Bu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009738B: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDAF4;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000973A1u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000973A1: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000973AB: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000973B6u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000973B6: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000973C0: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B2E68);
    PUSH32(esp, 0x000973CDu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000973CD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000973E6; /* jne: not equal / not zero */

loc_000973D4: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000973DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000973D9u); } /* indirect call */
    }

loc_000973DC: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000973E6: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000973F0
 * Original: 0x000973F0 - 0x000974FE (270 bytes, 94 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000973F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000973F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(ebx + 0x10) = 1;
    eax = MEM32(0x1D3F08);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x28);
    eax = MEM32(0x1DA88C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0009742F; /* jne: not equal / not zero */

loc_00097411: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x00097418u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00097418: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097428; /* je: equal / zero */

loc_0009741F: ;
    ecx = eax;
    PUSH32(esp, 0x00097426u); RECOMP_ABI_CALL(0x000B2C70u, sub_000B2C70); /* call 0x000B2C70 */

loc_00097426: ;
    goto loc_0009742A;

loc_00097428: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009742A: ;
    MEM32(0x1DA88C) = eax;

loc_0009742F: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0009743Du); RECOMP_ABI_CALL(0x000B2F00u, sub_000B2F00); /* call 0x000B2F00 */

loc_0009743D: ;
    edx = MEM32(0x1D9FB8);
    edi = MEM32(0x1DA044);
    ebp = eax;
    eax = MEM32(edx + 0x14);
    ecx = MEM32(eax + 0x48);
    _fa = (uint32_t)(MEM32(ecx + 0x260)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x260), 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000974BF; /* jg: greater (signed >) */

loc_0009745A: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000974BF; /* jge: greater or equal (signed >=) */

loc_00097462: ;
    eax = MEM32(0x1DA88C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097489; /* jne: not equal / not zero */

loc_0009746B: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x00097472u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00097472: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097482; /* je: equal / zero */

loc_00097479: ;
    ecx = eax;
    PUSH32(esp, 0x00097480u); RECOMP_ABI_CALL(0x000B2C70u, sub_000B2C70); /* call 0x000B2C70 */

loc_00097480: ;
    goto loc_00097484;

loc_00097482: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00097484: ;
    MEM32(0x1DA88C) = eax;

loc_00097489: ;
    esi = MEM32(eax + esi * 4 + 4);
    edx = MEM32(0x1D3F08);
    ecx = MEM32(edx + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009749Cu); RECOMP_ABI_CALL(0x000138C0u, sub_000138C0); /* call 0x000138C0 */

loc_0009749C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000974BF; /* jne: not equal / not zero */

loc_000974A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    ecx = edi;
    PUSH32(esp, 0x000974AAu); RECOMP_ABI_CALL(0x000644A0u, sub_000644A0); /* call 0x000644A0 */

loc_000974AA: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000974B8u); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_000974B8: ;
    MEM32(ebx + 0x10) = 0;

loc_000974BF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_000974F2; /* je: equal / zero */

loc_000974C4: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000974D7; /* je: equal / zero */

loc_000974CF: ;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    goto loc_000974E4;

loc_000974D7: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000974EB; /* je: equal / zero */

loc_000974DE: ;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0);

loc_000974E4: ;
    ecx = edi;
    PUSH32(esp, 0x000974EBu); RECOMP_ABI_CALL(0x000644A0u, sub_000644A0); /* call 0x000644A0 */

loc_000974EB: ;
    MEM32(ebx + 0x10) = 0;

loc_000974F2: ;
    ecx = edi;
    PUSH32(esp, 0x000974F9u); RECOMP_ABI_CALL(0x000644E0u, sub_000644E0); /* call 0x000644E0 */

loc_000974F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00097500
 * Original: 0x00097500 - 0x00097553 (83 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097500: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x2C);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx & 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x0009751Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009751A: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097544; /* je: equal / zero */

loc_00097523: ;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0009752Eu); RECOMP_ABI_CALL(0x0009A6C0u, sub_0009A6C0); /* call 0x0009A6C0 */

loc_0009752E: ;
    MEM32(esi) = 0x1BDAC4;
    MEM32(esi + 0x28) = ebx;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00097540u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00097540: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00097544: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009754Fu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009754F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00097560
 * Original: 0x00097560 - 0x00097667 (263 bytes, 90 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097560: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx;
    if ((_fa == 0)) goto loc_000975A8; /* je: equal / zero */

loc_00097570: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0009757C; /* je: equal / zero */

loc_00097573: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00097660; /* jne: not equal / not zero */

loc_0009757C: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BDBE0);
    PUSH32(esp, 0x00097589u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00097589: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097660; /* jne: not equal / not zero */

loc_00097594: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009759Eu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009759E: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000975A8: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B3388);
    PUSH32(esp, 0x000975B5u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000975B5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000975F1; /* jne: not equal / not zero */

loc_000975BC: ;
    edx = MEM32(0x1D9FB8);
    PUSH32(esp, 0x10);
    MEM32(edx + 0x44) = eax;
    PUSH32(esp, 0x000975CCu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000975CC: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000975EC; /* je: equal / zero */

loc_000975D5: ;
    ecx = edi;
    PUSH32(esp, 0x000975DCu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000975DC: ;
    MEM32(edi + 8) = 1;
    MEM32(edi) = 0x1BDAF4;
    PUSH32(esp, edi);
    goto loc_00097644;

loc_000975EC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    goto loc_00097644;

loc_000975F1: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B33A4);
    PUSH32(esp, 0x000975FEu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000975FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097594; /* je: equal / zero */

loc_00097605: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B3370);
    PUSH32(esp, 0x00097612u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00097612: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097660; /* jne: not equal / not zero */

loc_00097619: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00097620u); RECOMP_ABI_CALL(0x0009FFA0u, sub_0009FFA0); /* call 0x0009FFA0 */

loc_00097620: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, 0x10);
    MEM32(edx + 0x6C) = 1;
    PUSH32(esp, 0x00097631u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00097631: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097641; /* je: equal / zero */

loc_00097638: ;
    ecx = eax;
    PUSH32(esp, 0x0009763Fu); RECOMP_ABI_CALL(0x000970D0u, sub_000970D0); /* call 0x000970D0 */

loc_0009763F: ;
    goto loc_00097643;

loc_00097641: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00097643: ;
    PUSH32(esp, eax);

loc_00097644: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x0009764Cu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009764C: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00097656u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00097656: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00097660: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097670
 * Original: 0x00097670 - 0x00097696 (38 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097670: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(0x1DA034);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x10) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0009768Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097684u); } /* indirect call */
    }

loc_0009768A: ;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x10) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000976A0
 * Original: 0x000976A0 - 0x00097701 (97 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000976A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000976A0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000976F8; /* je: equal / zero */

loc_000976AA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000976B2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000976B2: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000976D1; /* je: equal / zero */

loc_000976BB: ;
    ecx = esi;
    PUSH32(esp, 0x000976C2u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000976C2: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDAF4;
    goto loc_000976D3;

loc_000976D1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000976D3: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000976DCu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000976DC: ;
    eax = MEM32(0x1D9FB8);
    MEM32(eax + 0x44) = 1;
    ecx = MEM32(0x1DA030);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000976F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000976F2u); } /* indirect call */
    }

loc_000976F5: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000976F8: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    POP32(esp, edi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_00097710
 * Original: 0x00097710 - 0x00097732 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097710(void)
{

loc_00097710: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00097718u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00097718: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDBF4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097740
 * Original: 0x00097740 - 0x00097780 (64 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097740: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0x0009774Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009774B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097773; /* je: equal / zero */

loc_00097754: ;
    ecx = esi;
    PUSH32(esp, 0x0009775Bu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009775B: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDAF4;
    PUSH32(esp, 0x00097770u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00097770: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00097773: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0009777Du); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009777D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00097780
 * Original: 0x00097780 - 0x000977C1 (65 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097780: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0x0009778Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009778B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000977AA; /* je: equal / zero */

loc_00097794: ;
    ecx = esi;
    PUSH32(esp, 0x0009779Bu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009779B: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDB18;
    goto loc_000977AC;

loc_000977AA: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000977AC: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000977B4u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000977B4: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x000977BBu); RECOMP_ABI_CALL(0x0009FFA0u, sub_0009FFA0); /* call 0x0009FFA0 */

loc_000977BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000977D0
 * Original: 0x000977D0 - 0x00097870 (160 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000977D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000977D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = ecx;
    PUSH32(esp, 0x000977DCu); RECOMP_ABI_CALL(0x0009FFA0u, sub_0009FFA0); /* call 0x0009FFA0 */

loc_000977DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000977E4u); RECOMP_ABI_CALL(0x00019B90u, sub_00019B90); /* call 0x00019B90 */

loc_000977E4: ;
    ecx = MEM32(0x1D9FB8);
    edx = MEM32(eax + 0xD4);
    esi = MEM32(ecx + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009782C; /* jle: less or equal (signed <=) */

loc_000977F9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 8) = edx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0009780B; /* jge: greater or equal (signed >=) */

loc_00097805: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D8)); /* fadd dword ptr [0x1c91d8] */

loc_0009780B: ;
    edx = 0x14;

loc_00097810: ;
    ecx = MEM32(edx + ecx);
    MEMF(ecx + 0xB0) = (float)fp_top(); /* fst */
    ecx = MEM32(0x1D9FB8);
    esi = MEM32(ecx + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00097810; /* jl: less (signed <) */

loc_0009782A: ;
    fp_pop(); /* fstp st(0) */

loc_0009782C: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00097833u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00097833: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009785F; /* je: equal / zero */

loc_0009783C: ;
    ecx = esi;
    PUSH32(esp, 0x00097843u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00097843: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDB3C;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00097859u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00097859: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0009785F: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009786Au); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009786A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00097870
 * Original: 0x00097870 - 0x000978EC (124 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097870: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 8 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000978E5; /* jne: not equal / not zero */

loc_0009787E: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BDC3C);
    PUSH32(esp, 0x0009788Bu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009788B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000978E5; /* jne: not equal / not zero */

loc_00097892: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000978E5; /* jne: not equal / not zero */

loc_00097899: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000978A0u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000978A0: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000978D0; /* je: equal / zero */

loc_000978A9: ;
    ecx = esi;
    PUSH32(esp, 0x000978B0u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000978B0: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDC18;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000978C6u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000978C6: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000978D0: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000978DBu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000978DB: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000978E5: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000978F0
 * Original: 0x000978F0 - 0x00097A32 (322 bytes, 112 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000978F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000978F0: ;
    eax = MEM32(0x1D3F18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097942; /* je: equal / zero */

loc_00097900: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00097907u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00097907: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097932; /* je: equal / zero */

loc_00097910: ;
    ecx = esi;
    PUSH32(esp, 0x00097917u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00097917: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDB60;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009792Du); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009792D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00097932: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009793Du); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009793D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00097942: ;
    ecx = MEM32(0x1D9FB8);
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx + 0x48);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x254);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00097962; /* jne: not equal / not zero */

loc_0009795D: ;
    esi = 1;

loc_00097962: ;
    eax = MEM32(ecx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009799F; /* je: equal / zero */

loc_00097969: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00097A2D; /* jle: less or equal (signed <=) */

loc_0009796F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00097A2D; /* jg: greater (signed >) */

loc_00097978: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0009797Fu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009797F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097A22; /* je: equal / zero */

loc_0009798A: ;
    ecx = eax;
    PUSH32(esp, 0x00097991u); RECOMP_ABI_CALL(0x000970B0u, sub_000970B0); /* call 0x000970B0 */

loc_00097991: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009799Au); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009799A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009799F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000979DA; /* je: equal / zero */

loc_000979A3: ;
    ecx = MEM32(ecx + 0x58);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 0xD4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000979B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000979B2u); } /* indirect call */
    }

loc_000979B5: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000979BCu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000979BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097A22; /* je: equal / zero */

loc_000979C3: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x000979CCu); RECOMP_ABI_CALL(0x00097710u, sub_00097710); /* call 0x00097710 */

loc_000979CC: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000979D5u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000979D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000979DA: ;
    fp_push(MEMF(edx + 0xB0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00097A2D; /* jp: parity */

loc_000979ED: ;
    ecx = MEM32(ecx + 0x58);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 0xD4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000979FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000979FCu); } /* indirect call */
    }

loc_000979FF: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00097A06u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00097A06: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097A22; /* je: equal / zero */

loc_00097A0D: ;
    ecx = eax;
    PUSH32(esp, 0x00097A14u); RECOMP_ABI_CALL(0x00097110u, sub_00097110); /* call 0x00097110 */

loc_00097A14: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00097A1Du); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00097A1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00097A22: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00097A2Du); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00097A2D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00097A40
 * Original: 0x00097A40 - 0x00097A59 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097A40(void)
{

loc_00097A40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00097A48u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00097A48: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDC48;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00097A60
 * Original: 0x00097A60 - 0x00097A95 (53 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097A60(void)
{

loc_00097A60: ;
    PUSH32(esp, 0x00097A65u); RECOMP_ABI_CALL(0x0009FE90u, sub_0009FE90); /* call 0x0009FE90 */

loc_00097A65: ;
    ecx = MEM32(0x1DA034);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00097A72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097A6Fu); } /* indirect call */
    }

loc_00097A72: ;
    ecx = MEM32(0x1DA034);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00097A80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097A7Au); } /* indirect call */
    }

loc_00097A80: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(0x1D3F08);
    ecx = MEM32(ecx + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00097A94u); RECOMP_ABI_CALL(0x000115E0u, sub_000115E0); /* call 0x000115E0 */

loc_00097A94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00097AA0
 * Original: 0x00097AA0 - 0x00097B15 (117 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097AA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097B0F; /* jne: not equal / not zero */

loc_00097AAE: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B2458);
    PUSH32(esp, 0x00097ABBu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00097ABB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097B0F; /* jne: not equal / not zero */

loc_00097AC2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00097ACAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00097ACA: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097AFA; /* je: equal / zero */

loc_00097AD3: ;
    ecx = esi;
    PUSH32(esp, 0x00097ADAu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00097ADA: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDBBC;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00097AF0u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00097AF0: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00097AFA: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00097B05u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00097B05: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00097B0F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097B20
 * Original: 0x00097B20 - 0x00097B2F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097B20: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097B2C; /* je: equal / zero */

loc_00097B27: ;
    PUSH32(esp, 0x00097B2Cu); RECOMP_ABI_CALL(0x00097500u, sub_00097500); /* call 0x00097500 */

loc_00097B2C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097B30
 * Original: 0x00097B30 - 0x00097B68 (56 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097B30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097B62; /* jne: not equal / not zero */

loc_00097B3E: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BDC6C);
    PUSH32(esp, 0x00097B4Bu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00097B4B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097B62; /* jne: not equal / not zero */

loc_00097B52: ;
    ecx = esi;
    PUSH32(esp, 0x00097B59u); RECOMP_ABI_CALL(0x00097500u, sub_00097500); /* call 0x00097500 */

loc_00097B59: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00097B62: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097B70
 * Original: 0x00097B70 - 0x00097BF2 (130 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097B70: ;
    edx = MEM32(0x1D9FB8);
    eax = MEM32(edx + 0x44);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097B91; /* je: equal / zero */

loc_00097B83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097B91; /* je: equal / zero */

loc_00097B88: ;
    eax = MEM32(0x1D73E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097B96; /* jne: not equal / not zero */

loc_00097B91: ;
    ecx = 1;

loc_00097B96: ;
    eax = MEM32(edx + 0x58);
    edx = MEM32(eax);
    eax = MEM32(edx + 0xB4);
    edx = MEM32(eax + 0x128);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097BAF; /* jne: not equal / not zero */

loc_00097BAB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097BEE; /* je: equal / zero */

loc_00097BAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00097BB7u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00097BB7: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097BE2; /* je: equal / zero */

loc_00097BC0: ;
    ecx = esi;
    PUSH32(esp, 0x00097BC7u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00097BC7: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDC18;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00097BDDu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00097BDD: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00097BE2: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00097BEDu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00097BED: ;
    POP32(esp, esi);

loc_00097BEE: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097C00
 * Original: 0x00097C00 - 0x00097C7E (126 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097C00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 8 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00097C77; /* jne: not equal / not zero */

loc_00097C0E: ;
    eax = MEM32(0x1D9FB8);
    eax = MEM32(eax + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097C77; /* je: equal / zero */

loc_00097C1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097C77; /* je: equal / zero */

loc_00097C20: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1BDC3C);
    PUSH32(esp, 0x00097C2Du); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00097C2D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097C77; /* jne: not equal / not zero */

loc_00097C34: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097C77; /* jne: not equal / not zero */

loc_00097C3A: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00097C41u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00097C41: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097C62; /* je: equal / zero */

loc_00097C48: ;
    ecx = eax;
    PUSH32(esp, 0x00097C4Fu); RECOMP_ABI_CALL(0x00097A40u, sub_00097A40); /* call 0x00097A40 */

loc_00097C4F: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00097C58u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_00097C58: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00097C62: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00097C6Du); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_00097C6D: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00097C77: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097C80
 * Original: 0x00097C80 - 0x00097C99 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097C80(void)
{

loc_00097C80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00097C88u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00097C88: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDD28;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00097CA0
 * Original: 0x00097CA0 - 0x00097CBB (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00097CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097CA0: ;
    PUSH32(esp, 0x15E4);
    PUSH32(esp, 0x00097CAAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00097CAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097CB8; /* je: equal / zero */

loc_00097CB1: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0003D060(); return; /* tail jmp 0x0003D060 */

loc_00097CB8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00097CC0
 * Original: 0x00097CC0 - 0x00097CD4 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097CC0(void)
{

loc_00097CC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00097CC8u); RECOMP_ABI_CALL(0x000A0280u, sub_000A0280); /* call 0x000A0280 */

loc_00097CC8: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 0x6C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00097CE0
 * Original: 0x00097CE0 - 0x00097D38 (88 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097CE0: ;
    PUSH32(esp, 0x00097CE5u); RECOMP_ABI_CALL(0x000A0440u, sub_000A0440); /* call 0x000A0440 */

loc_00097CE5: ;
    ecx = MEM32(0x1D9FB8);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097D37; /* jne: not equal / not zero */

loc_00097CF1: ;
    eax = MEM32(ecx + 0x50);
    ecx = MEM32(ecx + 0x58);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ecx + eax);
    ecx = MEM32(edx + 0xD8);
    MEM32(ecx) = 1;
    edx = MEM32(0x1D9FB8);
    ecx = MEM32(edx + 0x58);
    edx = MEM32(ecx + eax);
    ecx = MEM32(edx + 0xD8);
    MEM32(ecx + 4) = 0;
    edx = MEM32(0x1D9FB8);
    ecx = MEM32(edx + 0x58);
    ecx = MEM32(ecx + eax);
    g_seh_ebp = ebp; sub_0009DD60(); return; /* tail jmp 0x0009DD60 */

loc_00097D37: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00097D40
 * Original: 0x00097D40 - 0x00097D48 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097D40(void)
{

loc_00097D40: ;
    MEM32(ecx + 0x10) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00097D50
 * Original: 0x00097D50 - 0x00097D90 (64 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097D50: ;
    ecx = MEM32(0x1D9FB8);
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00097D8E; /* jbe: below or equal (unsigned <=) */

loc_00097D60: ;
    edx = MEM32(ecx + 0x58);
    eax = ZX8(LO8(ebx));
    eax = MEM32(edx + eax * 4);
    eax = MEM32(eax + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097D86; /* je: equal / zero */

loc_00097D73: ;
    ecx = MEM32(eax + 0xD4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00097D80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097D7Du); } /* indirect call */
    }

loc_00097D80: ;
    ecx = MEM32(0x1D9FB8);

loc_00097D86: ;
    eax = MEM32(ecx + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00097D60; /* jb: below (unsigned <) */

loc_00097D8E: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00097D90
 * Original: 0x00097D90 - 0x00097DD0 (64 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097D90: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x1D9FB8);
    _fa = (uint32_t)(MEM32(eax + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x54), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00097DA5; /* jbe: below or equal (unsigned <=) */

loc_00097D9C: ;
    MEM32(ecx + 0x10) = 0x40400000;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00097DA5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x10) = eax;
    ecx = esp;
    PUSH32(esp, ecx);
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x00097DB8u); RECOMP_ABI_CALL(0x000A0070u, sub_000A0070); /* call 0x000A0070 */

loc_00097DB8: ;
    ecx = MEM32(0x1DA03C);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00097DC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097DC5u); } /* indirect call */
    }

loc_00097DC8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00097DD0(); return; /* fallthrough 0x00097DD0 */

}

/**
 * sub_00097DD0
 * Original: 0x00097DD0 - 0x00097E5E (142 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097DD0: ;
    eax = MEM32(0x1D9FB8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00097E02; /* jbe: below or equal (unsigned <=) */

loc_00097DE3: ;
    edx = MEM32(eax + 0x58);
    ecx = ZX8(LO8(ebx));
    ecx = MEM32(edx + ecx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097DFA; /* je: equal / zero */

loc_00097DF0: ;
    PUSH32(esp, 0x00097DF5u); RECOMP_ABI_CALL(0x0009D9D0u, sub_0009D9D0); /* call 0x0009D9D0 */

loc_00097DF5: ;
    eax = MEM32(0x1D9FB8);

loc_00097DFA: ;
    ecx = MEM32(eax + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00097DE3; /* jb: below (unsigned <) */

loc_00097E02: ;
    ecx = edi;
    PUSH32(esp, 0x00097E09u); RECOMP_ABI_CALL(0x0009B3A0u, sub_0009B3A0); /* call 0x0009B3A0 */

loc_00097E09: ;
    ecx = MEM32(0x1DA034);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00097E17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097E11u); } /* indirect call */
    }

loc_00097E17: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x00097E1Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00097E1E: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097E4F; /* je: equal / zero */

loc_00097E27: ;
    ecx = esi;
    PUSH32(esp, 0x00097E2Eu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00097E2E: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDC8C;
    MEM32(esi + 0x10) = 0;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00097E4Bu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00097E4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00097E4F: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00097E5Au); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00097E5A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00097E60
 * Original: 0x00097E60 - 0x00097E98 (56 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097E60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097E92; /* jne: not equal / not zero */

loc_00097E6E: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B3684);
    PUSH32(esp, 0x00097E7Bu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00097E7B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097E92; /* jne: not equal / not zero */

loc_00097E82: ;
    ecx = esi;
    PUSH32(esp, 0x00097E89u); RECOMP_ABI_CALL(0x00097DD0u, sub_00097DD0); /* call 0x00097DD0 */

loc_00097E89: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00097E92: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097EA0
 * Original: 0x00097EA0 - 0x00097F24 (132 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097EA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097F1E; /* jne: not equal / not zero */

loc_00097EAE: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B2A24);
    PUSH32(esp, 0x00097EBBu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00097EBB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097F1E; /* jne: not equal / not zero */

loc_00097EC2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00097ECAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00097ECA: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097F09; /* je: equal / zero */

loc_00097ED3: ;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x18);
    ecx = esi;
    PUSH32(esp, 0x00097EDEu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00097EDE: ;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDCB0;
    MEM32(esi + 0x18) = 0;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00097EFFu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00097EFF: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00097F09: ;
    ecx = MEM32(ebx + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00097F14u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00097F14: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00097F1E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097F30
 * Original: 0x00097F30 - 0x00097F88 (88 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097F30: ;
    MEM32(ecx + 0x18) = 0xFFFFFFFFu;
    eax = MEM32(0x1D3F08);
    edx = MEM32(0x1D9FB8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x24);
    eax = MEM32(edx + 0x14);
    edx = MEM32(eax + 0x48);
    eax = MEM32(edx + 0x260);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00097F78; /* jge: greater or equal (signed >=) */

loc_00097F58: ;
    edx = MEM32(esi + 0x308);
    edx = MEM32(esi + edx * 4 + 0x30C);
    edx = MEM32(esi + edx * 4 + 0x3E4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097F75; /* je: equal / zero */

loc_00097F71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00097F78; /* jge: greater or equal (signed >=) */

loc_00097F75: ;
    MEM32(ecx + 0x18) = eax;

loc_00097F78: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00097F80u); RECOMP_ABI_CALL(0x00011F50u, sub_00011F50); /* call 0x00011F50 */

loc_00097F80: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000126B0(); return; /* tail jmp 0x000126B0 */

}

/**
 * sub_00097F90
 * Original: 0x00097F90 - 0x00097FE0 (80 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097F90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00097F97u); RECOMP_ABI_CALL(0x0009FE90u, sub_0009FE90); /* call 0x0009FE90 */

loc_00097F97: ;
    ecx = MEM32(0x1DA038);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00097FA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097FA1u); } /* indirect call */
    }

loc_00097FA4: ;
    esi = MEM32(0x1DA050);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x115);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00097FC7u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_00097FC7: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00097FCFu); RECOMP_ABI_CALL(0x00047860u, sub_00047860); /* call 0x00047860 */

loc_00097FCF: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00097FE0(); return; /* fallthrough 0x00097FE0 */

}

/**
 * sub_00097FE0
 * Original: 0x00097FE0 - 0x000980BF (223 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097FE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000980B8; /* jne: not equal / not zero */

loc_00097FF3: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B2E78);
    PUSH32(esp, 0x00098000u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00098000: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098092; /* jne: not equal / not zero */

loc_0009800B: ;
    ecx = MEM32(0x1D9FB8);
    MEM32(ecx + 0x44) = eax;
    eax = MEM32(0x1D9FB8);
    edx = MEM32(eax + 0x54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00098040; /* jle: less or equal (signed <=) */

loc_00098024: ;
    edx = MEM32(eax + 0x58);
    ecx = ZX8(LO8(ebx));
    ecx = MEM32(edx + ecx * 4);
    PUSH32(esp, 0x00098032u); RECOMP_ABI_CALL(0x0009EA00u, sub_0009EA00); /* call 0x0009EA00 */

loc_00098032: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00098024; /* jl: less (signed <) */

loc_00098040: ;
    PUSH32(esp, 0x00098045u); RECOMP_ABI_CALL(0x000A00E0u, sub_000A00E0); /* call 0x000A00E0 */

loc_00098045: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0009804Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009804C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0009807D; /* je: equal / zero */

loc_00098056: ;
    ecx = esi;
    PUSH32(esp, 0x0009805Du); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009805D: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDD04;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00098073u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00098073: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009807D: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00098088u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00098088: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00098092: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1B2E68);
    PUSH32(esp, 0x0009809Fu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009809F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000980B8; /* jne: not equal / not zero */

loc_000980A6: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000980AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000980ABu); } /* indirect call */
    }

loc_000980AE: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000980B8: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000980C0
 * Original: 0x000980C0 - 0x00098297 (471 bytes, 151 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000980C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000980C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x1D3F08);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 0x10) = 1;
    MEM32(edi + 0x14) = 0;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 4), 3 (32-bit) */
    MEM32(esp + 0xC) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00098290; /* je: equal / zero */

loc_000980EF: ;
    eax = MEM32(0x1DA89C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098119; /* jne: not equal / not zero */

loc_000980F8: ;
    PUSH32(esp, 0x35C);
    PUSH32(esp, 0x00098102u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00098102: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098112; /* je: equal / zero */

loc_00098109: ;
    ecx = eax;
    PUSH32(esp, 0x00098110u); RECOMP_ABI_CALL(0x000B3FF0u, sub_000B3FF0); /* call 0x000B3FF0 */

loc_00098110: ;
    goto loc_00098114;

loc_00098112: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00098114: ;
    MEM32(0x1DA89C) = eax;

loc_00098119: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00098128u); RECOMP_ABI_CALL(0x000120B0u, sub_000120B0); /* call 0x000120B0 */

loc_00098128: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00098130u); RECOMP_ABI_CALL(0x000B3D50u, sub_000B3D50); /* call 0x000B3D50 */

loc_00098130: ;
    ebp = MEM32(0x1DA044);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098148; /* je: equal / zero */

loc_00098141: ;
    MEM32(edi + 0x14) = 1;

loc_00098148: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00098157; /* je: equal / zero */

loc_00098154: ;
    MEM32(edi + 0x14) = edx;

loc_00098157: ;
    eax = ebx + 0x28;
    ecx = 4;
    /* nop */

loc_00098160: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098168; /* je: equal / zero */

loc_00098165: ;
    MEM32(edi + 0x14) = edx;

loc_00098168: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00098160; /* jne: not equal / not zero */

loc_0009816E: ;
    ebx = MEM32(esp + 0x10);
    ecx = MEM32(ebx + 0x308);
    esi = MEM32(ebx + ecx * 4 + 0x30C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000981C6; /* jne: not equal / not zero */

loc_00098184: ;
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000981F8; /* je: equal / zero */

loc_0009818C: ;
    eax = MEM32(0x1DA89C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000981B6; /* jne: not equal / not zero */

loc_00098195: ;
    PUSH32(esp, 0x35C);
    PUSH32(esp, 0x0009819Fu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009819F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000981AF; /* je: equal / zero */

loc_000981A6: ;
    ecx = eax;
    PUSH32(esp, 0x000981ADu); RECOMP_ABI_CALL(0x000B3FF0u, sub_000B3FF0); /* call 0x000B3FF0 */

loc_000981AD: ;
    goto loc_000981B1;

loc_000981AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000981B1: ;
    MEM32(0x1DA89C) = eax;

loc_000981B6: ;
    edx = esi + esi * 4 + 5;
    esi = MEM32(eax + edx * 4 + 0x80);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000981F8; /* je: equal / zero */

loc_000981C6: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000981D4u); RECOMP_ABI_CALL(0x000138C0u, sub_000138C0); /* call 0x000138C0 */

loc_000981D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000981F8; /* jne: not equal / not zero */

loc_000981D8: ;
    ecx = MEM32(0x1D3F08);
    ecx = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000981E7u); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_000981E7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    ecx = ebp;
    PUSH32(esp, 0x000981F1u); RECOMP_ABI_CALL(0x000644A0u, sub_000644A0); /* call 0x000644A0 */

loc_000981F1: ;
    MEM32(edi + 0x10) = 0;

loc_000981F8: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0009822A; /* jl: less (signed <) */

loc_00098200: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009822A; /* jge: greater or equal (signed >=) */

loc_00098205: ;
    edx = eax + 1;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    ecx = ebp;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00098223u); RECOMP_ABI_CALL(0x00063930u, sub_00063930); /* call 0x00063930 */

loc_00098223: ;
    MEM32(edi + 0x10) = 0;

loc_0009822A: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098260; /* je: equal / zero */

loc_00098232: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098245; /* je: equal / zero */

loc_0009823D: ;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    goto loc_00098252;

loc_00098245: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098259; /* je: equal / zero */

loc_0009824C: ;
    eax = MEM32(eax + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);

loc_00098252: ;
    ecx = ebp;
    PUSH32(esp, 0x00098259u); RECOMP_ABI_CALL(0x000644A0u, sub_000644A0); /* call 0x000644A0 */

loc_00098259: ;
    MEM32(edi + 0x10) = 0;

loc_00098260: ;
    ecx = ebx;
    PUSH32(esp, 0x00098267u); RECOMP_ABI_CALL(0x00012030u, sub_00012030); /* call 0x00012030 */

loc_00098267: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098289; /* je: equal / zero */

loc_0009826B: ;
    ecx = ebx;
    PUSH32(esp, 0x00098272u); RECOMP_ABI_CALL(0x00012030u, sub_00012030); /* call 0x00012030 */

loc_00098272: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    MEM32(ebp + 0x198) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00098282u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009827Fu); } /* indirect call */
    }

loc_00098282: ;
    MEM32(edi + 0x10) = 0;

loc_00098289: ;
    ecx = ebp;
    PUSH32(esp, 0x00098290u); RECOMP_ABI_CALL(0x000644E0u, sub_000644E0); /* call 0x000644E0 */

loc_00098290: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000982A0
 * Original: 0x000982A0 - 0x000982FC (92 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000982A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000982A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000982B7; /* je: equal / zero */

loc_000982AC: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000982B7; /* jne: not equal / not zero */

loc_000982B3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000982BC;

loc_000982B7: ;
    ebx = 2;

loc_000982BC: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x000982C3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000982C3: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000982ED; /* je: equal / zero */

loc_000982CC: ;
    eax = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000982D7u); RECOMP_ABI_CALL(0x0009A6C0u, sub_0009A6C0); /* call 0x0009A6C0 */

loc_000982D7: ;
    MEM32(esi) = 0x1BDCD4;
    MEM32(esi + 0x28) = ebx;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000982E9u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000982E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000982ED: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000982F8u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000982F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00098300
 * Original: 0x00098300 - 0x0009833C (60 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098300: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00098307u); RECOMP_ABI_CALL(0x0009FE90u, sub_0009FE90); /* call 0x0009FE90 */

loc_00098307: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00098319u); RECOMP_ABI_CALL(0x000A0070u, sub_000A0070); /* call 0x000A0070 */

loc_00098319: ;
    esi = MEM32(0x1DE810);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x1BDBA8);
    PUSH32(esp, 0x0009832Eu); RECOMP_ABI_CALL(0x00036B00u, sub_00036B00); /* call 0x00036B00 */

loc_0009832E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00098339u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_00098339: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00098340
 * Original: 0x00098340 - 0x00098353 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098340(void)
{

loc_00098340: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1BDBA8);
    PUSH32(esp, 0x00098352u); RECOMP_ABI_CALL(0x000EBD00u, sub_000EBD00); /* call 0x000EBD00 */

loc_00098352: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00098360
 * Original: 0x00098360 - 0x0009847D (285 bytes, 97 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098360: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    if ((_fa == 0)) goto loc_000983A8; /* je: equal / zero */

loc_00098370: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0009837C; /* je: equal / zero */

loc_00098373: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00098476; /* jne: not equal / not zero */

loc_0009837C: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BDBE0);
    PUSH32(esp, 0x00098389u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00098389: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098476; /* jne: not equal / not zero */

loc_00098394: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009839Eu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009839E: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000983A8: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B3388);
    PUSH32(esp, 0x000983B5u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000983B5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000983F1; /* jne: not equal / not zero */

loc_000983BC: ;
    edx = MEM32(0x1D9FB8);
    PUSH32(esp, 0x10);
    MEM32(edx + 0x44) = eax;
    PUSH32(esp, 0x000983CCu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000983CC: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000983EC; /* je: equal / zero */

loc_000983D5: ;
    ecx = esi;
    PUSH32(esp, 0x000983DCu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000983DC: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDD04;
    PUSH32(esp, esi);
    goto loc_0009845A;

loc_000983EC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    goto loc_0009845A;

loc_000983F1: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B33A4);
    PUSH32(esp, 0x000983FEu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000983FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098394; /* je: equal / zero */

loc_00098405: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B3370);
    PUSH32(esp, 0x00098412u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00098412: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098476; /* jne: not equal / not zero */

loc_00098419: ;
    edx = MEM32(0x1D3F08);
    eax = MEM32(edx + 0x24);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009842C; /* jne: not equal / not zero */

loc_00098428: ;
    PUSH32(esp, 2);
    goto loc_0009842E;

loc_0009842C: ;
    PUSH32(esp, 1);

loc_0009842E: ;
    PUSH32(esp, 0x00098433u); RECOMP_ABI_CALL(0x0009FFA0u, sub_0009FFA0); /* call 0x0009FFA0 */

loc_00098433: ;
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    MEM32(ecx + 0x6C) = 1;
    PUSH32(esp, 0x00098447u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00098447: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098457; /* je: equal / zero */

loc_0009844E: ;
    ecx = eax;
    PUSH32(esp, 0x00098455u); RECOMP_ABI_CALL(0x00097C80u, sub_00097C80); /* call 0x00097C80 */

loc_00098455: ;
    goto loc_00098459;

loc_00098457: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00098459: ;
    PUSH32(esp, eax);

loc_0009845A: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0x00098462u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00098462: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009846Cu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009846C: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00098476: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098480
 * Original: 0x00098480 - 0x000984C1 (65 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098480: ;
    eax = MEM32(0x1D3F08);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x1DA034);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x24);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0009849Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00098494u); } /* indirect call */
    }

loc_0009849A: ;
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esi + 0x28);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x10) = eax;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000984B6; /* je: equal / zero */

loc_000984AC: ;
    POP32(esp, edi);
    MEM32(esi + 0x10) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000984B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000984D0
 * Original: 0x000984D0 - 0x00098531 (97 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000984D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000984D0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098528; /* je: equal / zero */

loc_000984DA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000984E2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000984E2: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098501; /* je: equal / zero */

loc_000984EB: ;
    ecx = esi;
    PUSH32(esp, 0x000984F2u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000984F2: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDD04;
    goto loc_00098503;

loc_00098501: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00098503: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009850Cu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009850C: ;
    eax = MEM32(0x1D9FB8);
    MEM32(eax + 0x44) = 1;
    ecx = MEM32(0x1DA030);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00098525u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00098522u); } /* indirect call */
    }

loc_00098525: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00098528: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    POP32(esp, edi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_00098540
 * Original: 0x00098540 - 0x00098580 (64 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098540: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0x0009854Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009854B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098573; /* je: equal / zero */

loc_00098554: ;
    ecx = esi;
    PUSH32(esp, 0x0009855Bu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009855B: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDD04;
    PUSH32(esp, 0x00098570u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00098570: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00098573: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0009857Du); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009857D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00098580
 * Original: 0x00098580 - 0x000985C1 (65 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098580: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0x0009858Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009858B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000985AA; /* je: equal / zero */

loc_00098594: ;
    ecx = esi;
    PUSH32(esp, 0x0009859Bu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009859B: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDD28;
    goto loc_000985AC;

loc_000985AA: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000985AC: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000985B4u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000985B4: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x000985BBu); RECOMP_ABI_CALL(0x0009FFA0u, sub_0009FFA0); /* call 0x0009FFA0 */

loc_000985BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000985D0
 * Original: 0x000985D0 - 0x00098677 (167 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000985D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000985D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = ecx;
    PUSH32(esp, 0x000985DBu); RECOMP_ABI_CALL(0x0009FFA0u, sub_0009FFA0); /* call 0x0009FFA0 */

loc_000985DB: ;
    ecx = MEM32(0x1D9FB8);
    eax = MEM32(ecx + 0x44);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000985F1; /* je: equal / zero */

loc_000985EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098635; /* jne: not equal / not zero */

loc_000985F1: ;
    eax = MEM32(ecx + 0x58);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0xD8);
    MEM32(edx) = 0;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x58);
    ecx = MEM32(ecx);
    PUSH32(esp, 0x00098611u); RECOMP_ABI_CALL(0x0009DD60u, sub_0009DD60); /* call 0x0009DD60 */

loc_00098611: ;
    ecx = MEM32(0x1DA040);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0009861Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009861Bu); } /* indirect call */
    }

loc_0009861E: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x58);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 0xD4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00098635u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00098632u); } /* indirect call */
    }

loc_00098635: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0009863Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009863C: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098667; /* je: equal / zero */

loc_00098645: ;
    ecx = esi;
    PUSH32(esp, 0x0009864Cu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009864C: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDD4C;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00098662u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00098662: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00098667: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00098672u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00098672: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098680
 * Original: 0x00098680 - 0x000986FC (124 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098680: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 8 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000986F5; /* jne: not equal / not zero */

loc_0009868E: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BDC3C);
    PUSH32(esp, 0x0009869Bu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009869B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000986F5; /* jne: not equal / not zero */

loc_000986A2: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000986F5; /* jne: not equal / not zero */

loc_000986A9: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000986B0u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000986B0: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000986E0; /* je: equal / zero */

loc_000986B9: ;
    ecx = esi;
    PUSH32(esp, 0x000986C0u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000986C0: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDDDC;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000986D6u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000986D6: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000986E0: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000986EBu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000986EB: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000986F5: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098700
 * Original: 0x00098700 - 0x00098B29 (1065 bytes, 333 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00098700: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x1D3F18);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 0x48);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00098764; /* je: equal / zero */

loc_0009871A: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00098721u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00098721: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098750; /* je: equal / zero */

loc_0009872A: ;
    ecx = esi;
    PUSH32(esp, 0x00098731u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00098731: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDB60;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00098747u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_00098747: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00098750: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009875Bu); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009875B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00098764: ;
    edx = MEM32(0x1D9FB8);
    _fa = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x10), ebx (32-bit) */
    MEM32(esp + 0x14) = 1;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x20) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00098929; /* jbe: below or equal (unsigned <=) */

loc_00098787: ;
    PUSH32(esp, ebp);
    ebp = 0x14;
    /* nop */

loc_00098790: ;
    esi = MEM32(edx + ebp);
    edi = MEM32(esi + 0x48);
    eax = MEM32(edi + 0x254);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000988BF; /* jne: not equal / not zero */

loc_000987A5: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000987B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000987ADu); } /* indirect call */
    }

loc_000987B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(0x1D9FB8);
    if (CMP_EQ(_fa, _fb)) goto loc_000987EC; /* je: equal / zero */

loc_000987BA: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edx + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_000987EC; /* jbe: below or equal (unsigned <=) */

loc_000987CB: ;
    MEM32(esp + 0x20) = 0;
    edx = MEM32(edx + 0x58);
    ecx = ZX8(LO8(ebx));
    ecx = MEM32(edx + ecx * 4);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000987E6u); RECOMP_ABI_CALL(0x0009D9E0u, sub_0009D9E0); /* call 0x0009D9E0 */

loc_000987E6: ;
    edx = MEM32(0x1D9FB8);

loc_000987EC: ;
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098909; /* jne: not equal / not zero */

loc_000987FB: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0x00098803u); RECOMP_ABI_CALL(0x000ABC30u, sub_000ABC30); /* call 0x000ABC30 */

loc_00098803: ;
    ecx = eax;
    PUSH32(esp, 0x0009880Au); RECOMP_ABI_CALL(0x000AB950u, sub_000AB950); /* call 0x000AB950 */

loc_0009880A: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x1DA89C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098838; /* jne: not equal / not zero */

loc_00098817: ;
    PUSH32(esp, 0x35C);
    PUSH32(esp, 0x00098821u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00098821: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098831; /* je: equal / zero */

loc_00098828: ;
    ecx = eax;
    PUSH32(esp, 0x0009882Fu); RECOMP_ABI_CALL(0x000B3FF0u, sub_000B3FF0); /* call 0x000B3FF0 */

loc_0009882F: ;
    goto loc_00098833;

loc_00098831: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00098833: ;
    MEM32(0x1DA89C) = eax;

loc_00098838: ;
    fp_push(MEMF(eax + 0x244)); /* fld float */
    eax = MEM32(0x1D9FB8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x1DA060) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000988B2; /* jbe: below or equal (unsigned <=) */

loc_00098860: ;
    esi = 0x14;
    goto loc_00098870;

    /* nop */
    edi = edi;

loc_00098870: ;
    eax = MEM32(esi + eax);
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0xB0) = ecx;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x58);
    edx = ZX8(LO8(ebx));
    edx = MEM32(ecx + edx * 4);
    ecx = MEM32(edx + 0xD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000988A7; /* je: equal / zero */

loc_00098895: ;
    ecx = MEM32(ecx + 0xD4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000988A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009889Fu); } /* indirect call */
    }

loc_000988A2: ;
    eax = MEM32(0x1D9FB8);

loc_000988A7: ;
    ecx = MEM32(eax + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00098870; /* jb: below (unsigned <) */

loc_000988B2: ;
    ebx = MEM32(esp + 0x24);
    MEM32(edi + 0x10) = 1;
    goto loc_00098903;

loc_000988BF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00098909; /* jae: above or equal (unsigned >=) */

loc_000988C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00098909; /* jne: not equal / not zero */

loc_000988D1: ;
    ecx = edi;
    PUSH32(esp, 0x000988D8u); RECOMP_ABI_CALL(0x000ABC30u, sub_000ABC30); /* call 0x000ABC30 */

loc_000988D8: ;
    ecx = eax;
    PUSH32(esp, 0x000988DFu); RECOMP_ABI_CALL(0x000AB950u, sub_000AB950); /* call 0x000AB950 */

loc_000988DF: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098901; /* je: equal / zero */

loc_000988EA: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1DA060)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1da060] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00098903; /* jne: not equal / not zero */

loc_000988F7: ;
    MEM32(esp + 0x18) = 1;
    goto loc_00098903;

loc_00098901: ;
    fp_pop(); /* fstp st(0) */

loc_00098903: ;
    edx = MEM32(0x1D9FB8);

loc_00098909: ;
    eax = MEM32(edx + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x24) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_00098790; /* jb: below (unsigned <) */

loc_0009891C: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esp + 0x14);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00098969; /* je: equal / zero */

loc_00098929: ;
    _fa = (uint32_t)(MEM32(edx + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x54), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00098969; /* jbe: below or equal (unsigned <=) */

loc_0009892F: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00098969; /* jbe: below or equal (unsigned <=) */

loc_00098937: ;
    eax = MEM32(edx + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00098969; /* jbe: below or equal (unsigned <=) */

loc_00098940: ;
    MEM32(esp + 0x20) = 1;
    edx = MEM32(edx + 0x58);
    ecx = ZX8(LO8(ebx));
    ecx = MEM32(edx + ecx * 4);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009895Bu); RECOMP_ABI_CALL(0x0009D9E0u, sub_0009D9E0); /* call 0x0009D9E0 */

loc_0009895B: ;
    edx = MEM32(0x1D9FB8);
    eax = MEM32(edx + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00098940; /* jb: below (unsigned <) */

loc_00098969: ;
    eax = MEM32(edx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000989C0; /* je: equal / zero */

loc_00098970: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00098B20; /* jle: less or equal (signed <=) */

loc_00098976: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00098B20; /* jg: greater (signed >) */

loc_0009897F: ;
    ecx = edi;
    PUSH32(esp, 0x00098986u); RECOMP_ABI_CALL(0x00097D50u, sub_00097D50); /* call 0x00097D50 */

loc_00098986: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0009898Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009898D: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098B15; /* je: equal / zero */

loc_0009899A: ;
    ecx = esi;
    PUSH32(esp, 0x000989A1u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000989A1: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDD04;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000989B7u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000989B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000989C0: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_00098A49; /* je: equal / zero */

loc_000989CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00098A4B; /* jbe: below or equal (unsigned <=) */

loc_000989D0: ;
    eax = MEM32(edx + 0x54);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00098A08; /* jle: less or equal (signed <=) */

loc_000989D9: ;
    /* nop */

loc_000989E0: ;
    ecx = MEM32(edx + 0x58);
    eax = ZX8(LO8(ebx));
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(eax + 0xD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098A00; /* je: equal / zero */

loc_000989F3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000989FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000989F7u); } /* indirect call */
    }

loc_000989FA: ;
    edx = MEM32(0x1D9FB8);

loc_00098A00: ;
    eax = MEM32(edx + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000989E0; /* jl: less (signed <) */

loc_00098A08: ;
    ecx = edi;
    PUSH32(esp, 0x00098A0Fu); RECOMP_ABI_CALL(0x00097D50u, sub_00097D50); /* call 0x00097D50 */

loc_00098A0F: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00098A16u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00098A16: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098B15; /* je: equal / zero */

loc_00098A23: ;
    ecx = esi;
    PUSH32(esp, 0x00098A2Au); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00098A2A: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDDB8;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00098A40u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00098A40: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00098A49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */

loc_00098A4B: ;
    if (CMP_NE(_fa, _fb)) goto loc_00098B20; /* jne: not equal / not zero */

loc_00098A51: ;
    eax = MEM32(edx + 0x14);
    fp_push(MEMF(eax + 0xB0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00098B20; /* jp: parity */

loc_00098A6B: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00098B20; /* jbe: below or equal (unsigned <=) */

loc_00098A77: ;
    eax = MEM32(edx + 0x54);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00098AA8; /* jle: less or equal (signed <=) */

loc_00098A80: ;
    eax = MEM32(edx + 0x58);
    ecx = ZX8(LO8(ebx));
    ecx = MEM32(eax + ecx * 4);
    ecx = MEM32(ecx + 0xD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098AA0; /* je: equal / zero */

loc_00098A93: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00098A9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00098A97u); } /* indirect call */
    }

loc_00098A9A: ;
    edx = MEM32(0x1D9FB8);

loc_00098AA0: ;
    eax = MEM32(edx + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00098A80; /* jl: less (signed <) */

loc_00098AA8: ;
    ecx = edi;
    PUSH32(esp, 0x00098AAFu); RECOMP_ABI_CALL(0x00097D50u, sub_00097D50); /* call 0x00097D50 */

loc_00098AAF: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00098ADF; /* jbe: below or equal (unsigned <=) */

loc_00098ABD: ;
    /* nop */

loc_00098AC0: ;
    edx = MEM32(eax + 0x58);
    ecx = ZX8(LO8(ebx));
    ecx = MEM32(edx + ecx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098AD7; /* je: equal / zero */

loc_00098ACD: ;
    PUSH32(esp, 0x00098AD2u); RECOMP_ABI_CALL(0x0009D9D0u, sub_0009D9D0); /* call 0x0009D9D0 */

loc_00098AD2: ;
    eax = MEM32(0x1D9FB8);

loc_00098AD7: ;
    ecx = MEM32(eax + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00098AC0; /* jb: below (unsigned <) */

loc_00098ADF: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00098AE6u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00098AE6: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098B15; /* je: equal / zero */

loc_00098AEF: ;
    ecx = esi;
    PUSH32(esp, 0x00098AF6u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00098AF6: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDD70;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00098B0Cu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00098B0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00098B15: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00098B20u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00098B20: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00098B30
 * Original: 0x00098B30 - 0x00098B49 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098B30(void)
{

loc_00098B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00098B38u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00098B38: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDE00;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00098B50
 * Original: 0x00098B50 - 0x00098C16 (198 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00098B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00098B50: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00098BA5; /* jne: not equal / not zero */

loc_00098B63: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEMF(ebp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00098C12; /* jp: parity */

loc_00098B7E: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + 0x10) = 0xBF800000u;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00098B97u); RECOMP_ABI_CALL(0x000A0070u, sub_000A0070); /* call 0x000A0070 */

loc_00098B97: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp;
    PUSH32(esp, 0x00098BA1u); RECOMP_ABI_CALL(0x00097DD0u, sub_00097DD0); /* call 0x00097DD0 */

loc_00098BA1: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00098BA5: ;
    ecx = MEM32(0x1DA03C);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00098BB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00098BAFu); } /* indirect call */
    }

loc_00098BB2: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00098C10; /* jbe: below or equal (unsigned <=) */

loc_00098BC2: ;
    PUSH32(esp, edi);
    edi = 0x14;
    goto loc_00098BD0;

    /* nop */

loc_00098BD0: ;
    eax = MEM32(edi + eax);
    ecx = MEM32(eax + 0x48);
    PUSH32(esp, 0x00098BDBu); RECOMP_ABI_CALL(0x000ABC30u, sub_000ABC30); /* call 0x000ABC30 */

loc_00098BDB: ;
    ecx = eax;
    PUSH32(esp, 0x00098BE2u); RECOMP_ABI_CALL(0x000AB950u, sub_000AB950); /* call 0x000AB950 */

loc_00098BE2: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1DA060)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1da060] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00098BF4; /* jne: not equal / not zero */

loc_00098BEF: ;
    ebx = 1;

loc_00098BF4: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00098BD0; /* jb: below (unsigned <) */

loc_00098C04: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00098C10; /* je: equal / zero */

loc_00098C09: ;
    ecx = ebp;
    PUSH32(esp, 0x00098C10u); RECOMP_ABI_CALL(0x00097DD0u, sub_00097DD0); /* call 0x00097DD0 */

loc_00098C10: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00098C12: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00098C20
 * Original: 0x00098C20 - 0x00098C63 (67 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098C20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    esi = ecx;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00098C36u); RECOMP_ABI_CALL(0x000A0070u, sub_000A0070); /* call 0x000A0070 */

loc_00098C36: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00098C3Eu); RECOMP_ABI_CALL(0x0009FE90u, sub_0009FE90); /* call 0x0009FE90 */

loc_00098C3E: ;
    ecx = MEM32(0x1DA034);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00098C4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00098C48u); } /* indirect call */
    }

loc_00098C4B: ;
    ecx = MEM32(0x1DA034);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x00098C59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00098C53u); } /* indirect call */
    }

loc_00098C59: ;
    ecx = esi;
    PUSH32(esp, 0x00098C60u); RECOMP_ABI_CALL(0x00097F30u, sub_00097F30); /* call 0x00097F30 */

loc_00098C60: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00098C70
 * Original: 0x00098C70 - 0x00098C7F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098C70: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098C7C; /* je: equal / zero */

loc_00098C77: ;
    PUSH32(esp, 0x00098C7Cu); RECOMP_ABI_CALL(0x000982A0u, sub_000982A0); /* call 0x000982A0 */

loc_00098C7C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098C80
 * Original: 0x00098C80 - 0x00098CB8 (56 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098C80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098CB2; /* jne: not equal / not zero */

loc_00098C8E: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BDC6C);
    PUSH32(esp, 0x00098C9Bu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00098C9B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098CB2; /* jne: not equal / not zero */

loc_00098CA2: ;
    ecx = esi;
    PUSH32(esp, 0x00098CA9u); RECOMP_ABI_CALL(0x000982A0u, sub_000982A0); /* call 0x000982A0 */

loc_00098CA9: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00098CB2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098CC0
 * Original: 0x00098CC0 - 0x00098D35 (117 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098CC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098D2F; /* jne: not equal / not zero */

loc_00098CCE: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B2458);
    PUSH32(esp, 0x00098CDBu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00098CDB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098D2F; /* jne: not equal / not zero */

loc_00098CE2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00098CEAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00098CEA: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098D1A; /* je: equal / zero */

loc_00098CF3: ;
    ecx = esi;
    PUSH32(esp, 0x00098CFAu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00098CFA: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDD94;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00098D10u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00098D10: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00098D1A: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00098D25u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00098D25: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00098D2F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098D40
 * Original: 0x00098D40 - 0x00098DC2 (130 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098D40: ;
    edx = MEM32(0x1D9FB8);
    eax = MEM32(edx + 0x44);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098D61; /* je: equal / zero */

loc_00098D53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098D61; /* je: equal / zero */

loc_00098D58: ;
    eax = MEM32(0x1D73E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098D66; /* jne: not equal / not zero */

loc_00098D61: ;
    ecx = 1;

loc_00098D66: ;
    eax = MEM32(edx + 0x58);
    edx = MEM32(eax);
    eax = MEM32(edx + 0xB4);
    edx = MEM32(eax + 0x128);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098D7F; /* jne: not equal / not zero */

loc_00098D7B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098DBE; /* je: equal / zero */

loc_00098D7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00098D87u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00098D87: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098DB2; /* je: equal / zero */

loc_00098D90: ;
    ecx = esi;
    PUSH32(esp, 0x00098D97u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00098D97: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDDDC;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00098DADu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00098DAD: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00098DB2: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00098DBDu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00098DBD: ;
    POP32(esp, esi);

loc_00098DBE: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098DD0
 * Original: 0x00098DD0 - 0x00098E45 (117 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098DD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 8 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00098E3E; /* jne: not equal / not zero */

loc_00098DDE: ;
    eax = MEM32(0x1D9FE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098E3E; /* jne: not equal / not zero */

loc_00098DE7: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BDC3C);
    PUSH32(esp, 0x00098DF4u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00098DF4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098E3E; /* jne: not equal / not zero */

loc_00098DFB: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098E3E; /* jne: not equal / not zero */

loc_00098E01: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00098E08u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00098E08: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098E29; /* je: equal / zero */

loc_00098E0F: ;
    ecx = eax;
    PUSH32(esp, 0x00098E16u); RECOMP_ABI_CALL(0x00098B30u, sub_00098B30); /* call 0x00098B30 */

loc_00098E16: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00098E1Fu); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_00098E1F: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00098E29: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00098E34u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_00098E34: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00098E3E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098E50
 * Original: 0x00098E50 - 0x00098E72 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098E50(void)
{

loc_00098E50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00098E58u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00098E58: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDE30;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098E80
 * Original: 0x00098E80 - 0x00098E99 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098E80(void)
{

loc_00098E80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00098E88u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00098E88: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDE84;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00098EA0
 * Original: 0x00098EA0 - 0x00098EB9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098EA0(void)
{

loc_00098EA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00098EA8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00098EA8: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDEA8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00098EC0
 * Original: 0x00098EC0 - 0x00098F03 (67 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00098EC0: ;
    eax = MEM32(ecx + 0x68);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00098EEB; /* je: equal / zero */

loc_00098EC8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00098ED3; /* je: equal / zero */

loc_00098ECB: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00098EEB; /* je: equal / zero */

loc_00098ED0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00098ED3: ;
    PUSH32(esp, 0x350);
    PUSH32(esp, 0x00098EDDu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00098EDD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098ED0; /* je: equal / zero */

loc_00098EE4: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00066260(); return; /* tail jmp 0x00066260 */

loc_00098EEB: ;
    PUSH32(esp, 0x7C0);
    PUSH32(esp, 0x00098EF5u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00098EF5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098ED0; /* je: equal / zero */

loc_00098EFC: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00045510(); return; /* tail jmp 0x00045510 */

}

/**
 * sub_00098F10
 * Original: 0x00098F10 - 0x00098F30 (32 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00098F10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00098F18u); RECOMP_ABI_CALL(0x000A0280u, sub_000A0280); /* call 0x000A0280 */

loc_00098F18: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x6C) = eax;
    MEM32(0x1CDF3C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00098F30(); return; /* fallthrough 0x00098F30 */

}

/**
 * sub_00098F30
 * Original: 0x00098F30 - 0x00098FAB (123 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098F30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    esi = ecx;
    MEM32(esp + 8) = 1;
    PUSH32(esp, 0x00098F46u); RECOMP_ABI_CALL(0x000A0070u, sub_000A0070); /* call 0x000A0070 */

loc_00098F46: ;
    ecx = MEM32(0x1DE810);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1B7450);
    PUSH32(esp, 0x00098F59u); RECOMP_ABI_CALL(0x000EBAD0u, sub_000EBAD0); /* call 0x000EBAD0 */

loc_00098F59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098F68; /* je: equal / zero */

loc_00098F5D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00098F66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00098F63u); } /* indirect call */
    }

loc_00098F66: ;
    goto loc_00098F92;

loc_00098F68: ;
    PUSH32(esp, 0x1CC);
    PUSH32(esp, 0x00098F72u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00098F72: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098F82; /* je: equal / zero */

loc_00098F79: ;
    ecx = eax;
    PUSH32(esp, 0x00098F80u); RECOMP_ABI_CALL(0x00066410u, sub_00066410); /* call 0x00066410 */

loc_00098F80: ;
    goto loc_00098F84;

loc_00098F82: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00098F84: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00098F92u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_00098F92: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x58);
    ecx = MEM32(ecx);
    PUSH32(esp, 0x00098FA1u); RECOMP_ABI_CALL(0x0009DFC0u, sub_0009DFC0); /* call 0x0009DFC0 */

loc_00098FA1: ;
    MEM32(esi + 0x10) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00098FB0
 * Original: 0x00098FB0 - 0x00098FCE (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00098FB0: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0x1B7450);
    PUSH32(esp, 0x00098FC0u); RECOMP_ABI_CALL(0x000EBAD0u, sub_000EBAD0); /* call 0x000EBAD0 */

loc_00098FC0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00098FC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00098FC6u); } /* indirect call */
    }

loc_00098FC9: ;
    g_seh_ebp = ebp; sub_000A0440(); return; /* tail jmp 0x000A0440 */

}

/**
 * sub_00098FD0
 * Original: 0x00098FD0 - 0x00098FF0 (32 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00098FD0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x68), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098FDD; /* jne: not equal / not zero */

loc_00098FD6: ;
    fp_push(MEMF(0x1BDF14)); /* fld float */
    esp += 4; return; /* ret */

loc_00098FDD: ;
    fp_push(MEMF(0x1B4ABC)); /* fld float */
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00098FF0(); return; /* fallthrough 0x00098FF0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00098FF0
 * Original: 0x00098FF0 - 0x00099004 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00098FF0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x68), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098FFD; /* jne: not equal / not zero */

loc_00098FF6: ;
    fp_push(MEMF(0x1AF328)); /* fld float */
    esp += 4; return; /* ret */

loc_00098FFD: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00099010
 * Original: 0x00099010 - 0x00099037 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099010: ;
    eax = ecx;
    edx = MEM32(eax + 4);
    eax = MEM32(edx + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    ecx = MEM32(0x1D3F0C);
    ecx = MEM32(ecx + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0009902B; /* je: equal / zero */

loc_00099026: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099036; /* jne: not equal / not zero */

loc_0009902B: ;
    eax = MEM32(0x1D9FB8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00099036u); RECOMP_ABI_CALL(0x00017EB0u, sub_00017EB0); /* call 0x00017EB0 */

loc_00099036: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00099040
 * Original: 0x00099040 - 0x0009912A (234 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00099040: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x1DA034);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx + 0x68);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x1D9FB8);
    if (CMP_EQ(_fa, _fb)) goto loc_0009906E; /* je: equal / zero */

loc_00099065: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099122; /* jne: not equal / not zero */

loc_0009906E: ;
    _fa = (uint32_t)(MEM32(edi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x4C), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099122; /* je: equal / zero */

loc_00099078: ;
    edx = MEM32(0x1D3F0C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(edx + 4);
    PUSH32(esp, edi);
    ecx = ebp;
    MEM32(esp + 0x20) = ebp;
    PUSH32(esp, 0x0009908Fu); RECOMP_ABI_CALL(0x00017F60u, sub_00017F60); /* call 0x00017F60 */

loc_0009908F: ;
    eax = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + 0x16C;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = ecx;

loc_000990A6: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00099101; /* jle: less or equal (signed <=) */

loc_000990B1: ;
    esi = MEM32(edi + eax * 4 + 0x14);
    PUSH32(esp, 0x1BDF18);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000990C4u); RECOMP_ABI_CALL(0x00017EF0u, sub_00017EF0); /* call 0x00017EF0 */

loc_000990C4: ;
    eax = MEM32(edi + 0x4C);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000990D0u); RECOMP_ABI_CALL(0x00017E90u, sub_00017E90); /* call 0x00017E90 */

loc_000990D0: ;
    ebp = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000990DBu); RECOMP_ABI_CALL(0x00014C60u, sub_00014C60); /* call 0x00014C60 */

loc_000990DB: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = ebx + 2;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x16C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x16C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000990F2u); RECOMP_ABI_CALL(0x00015320u, sub_00015320); /* call 0x00015320 */

loc_000990F2: ;
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x1C);
    MEM32(ecx) = esi;
    esi = 1;

loc_00099101: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    eax = 4;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000990A6; /* jl: less (signed <) */

loc_00099120: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00099122: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00099130
 * Original: 0x00099130 - 0x00099240 (272 bytes, 91 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099130: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00099239; /* jne: not equal / not zero */

loc_00099143: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B2E78);
    PUSH32(esp, 0x00099150u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00099150: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000991E0; /* jne: not equal / not zero */

loc_0009915B: ;
    ecx = MEM32(0x1D9FB8);
    MEM32(ecx + 0x44) = eax;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009918E; /* jle: less or equal (signed <=) */

loc_00099173: ;
    eax = MEM32(eax + 0x58);
    edx = ZX8(LO8(ebx));
    ecx = MEM32(eax + edx * 4);
    PUSH32(esp, 0x00099181u); RECOMP_ABI_CALL(0x0009EA00u, sub_0009EA00); /* call 0x0009EA00 */

loc_00099181: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00099173; /* jl: less (signed <) */

loc_0009918E: ;
    PUSH32(esp, 0x00099193u); RECOMP_ABI_CALL(0x000A00E0u, sub_000A00E0); /* call 0x000A00E0 */

loc_00099193: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0009919Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009919A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000991CB; /* je: equal / zero */

loc_000991A4: ;
    ecx = esi;
    PUSH32(esp, 0x000991ABu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000991AB: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDE84;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000991C1u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000991C1: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000991CB: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000991D6u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000991D6: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000991E0: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B2E68);
    PUSH32(esp, 0x000991EDu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000991ED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099239; /* jne: not equal / not zero */

loc_000991F4: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000991FBu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000991FB: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009921A; /* je: equal / zero */

loc_00099204: ;
    ecx = esi;
    PUSH32(esp, 0x0009920Bu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009920B: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDEA8;
    goto loc_0009921C;

loc_0009921A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009921C: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00099225u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00099225: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0009922Cu); RECOMP_ABI_CALL(0x0009FFA0u, sub_0009FFA0); /* call 0x0009FFA0 */

loc_0009922C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00099239: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00099240
 * Original: 0x00099240 - 0x00099250 (16 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00099240: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009924B; /* jne: not equal / not zero */

loc_00099247: ;
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) | 2;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0009924B: ;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00099250(); return; /* fallthrough 0x00099250 */

}

/**
 * sub_00099250
 * Original: 0x00099250 - 0x00099297 (71 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099250: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2C);
    edi = ecx;
    PUSH32(esp, 0x0009925Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009925B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099289; /* je: equal / zero */

loc_00099264: ;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00099273u); RECOMP_ABI_CALL(0x0009A6C0u, sub_0009A6C0); /* call 0x0009A6C0 */

loc_00099273: ;
    MEM32(esi + 0x28) = ebx;
    POP32(esp, ebx);
    MEM32(esi) = 0x1BDE54;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00099286u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00099286: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00099289: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00099294u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00099294: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000992A0
 * Original: 0x000992A0 - 0x000992DF (63 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000992A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000992A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(0x1DA034);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x10) = eax;
    edx = MEM32(0x1D9FB8);
    eax = MEM32(edx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000992C5; /* je: equal / zero */

loc_000992C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000992D0; /* jne: not equal / not zero */

loc_000992C5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x000992CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000992C7u); } /* indirect call */
    }

loc_000992CD: ;
    MEM32(esi + 0x14) = eax;

loc_000992D0: ;
    _fa = (uint32_t)(MEM8(esi + 0x28)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x28), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000992DD; /* je: equal / zero */

loc_000992D6: ;
    MEM32(esi + 0x14) = 1;

loc_000992DD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000992E0
 * Original: 0x000992E0 - 0x000993BA (218 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000992E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000992E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_00099338; /* je: equal / zero */

loc_000992ED: ;
    PUSH32(esp, 0x000992F2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000992F2: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099311; /* je: equal / zero */

loc_000992FB: ;
    ecx = esi;
    PUSH32(esp, 0x00099302u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00099302: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDE84;
    goto loc_00099313;

loc_00099311: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00099313: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009931Cu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009931C: ;
    eax = MEM32(0x1D9FB8);
    MEM32(eax + 0x44) = 1;
    ecx = MEM32(0x1DA030);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00099335u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00099332u); } /* indirect call */
    }

loc_00099335: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00099338: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009937E; /* je: equal / zero */

loc_00099342: ;
    PUSH32(esp, 0x00099347u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00099347: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099366; /* je: equal / zero */

loc_00099350: ;
    ecx = esi;
    PUSH32(esp, 0x00099357u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00099357: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDEA8;
    goto loc_00099368;

loc_00099366: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00099368: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00099371u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00099371: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00099378u); RECOMP_ABI_CALL(0x0009FFA0u, sub_0009FFA0); /* call 0x0009FFA0 */

loc_00099378: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009937E: ;
    PUSH32(esp, 0x00099383u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00099383: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000993AC; /* je: equal / zero */

loc_0009938C: ;
    ecx = esi;
    PUSH32(esp, 0x00099393u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00099393: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDF20;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000993A9u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000993A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000993AC: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000993B7u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000993B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000993C0
 * Original: 0x000993C0 - 0x00099400 (64 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000993C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000993C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0x000993CBu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000993CB: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000993F3; /* je: equal / zero */

loc_000993D4: ;
    ecx = esi;
    PUSH32(esp, 0x000993DBu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000993DB: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDE84;
    PUSH32(esp, 0x000993F0u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000993F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000993F3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000993FDu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000993FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00099400
 * Original: 0x00099400 - 0x00099440 (64 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099400: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0x0009940Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009940B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099433; /* je: equal / zero */

loc_00099414: ;
    ecx = esi;
    PUSH32(esp, 0x0009941Bu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009941B: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDEA8;
    PUSH32(esp, 0x00099430u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00099430: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00099433: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0009943Du); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009943D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00099440
 * Original: 0x00099440 - 0x00099561 (289 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00099440: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = ecx;
    PUSH32(esp, 0x0009944Bu); RECOMP_ABI_CALL(0x0009FFA0u, sub_0009FFA0); /* call 0x0009FFA0 */

loc_0009944B: ;
    ecx = MEM32(0x1D9FB8);
    eax = MEM32(ecx + 0x44);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099461; /* je: equal / zero */

loc_0009945C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000994A5; /* jne: not equal / not zero */

loc_00099461: ;
    eax = MEM32(ecx + 0x58);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0xD8);
    MEM32(edx) = 0;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x58);
    ecx = MEM32(ecx);
    PUSH32(esp, 0x00099481u); RECOMP_ABI_CALL(0x0009DD60u, sub_0009DD60); /* call 0x0009DD60 */

loc_00099481: ;
    ecx = MEM32(0x1DA040);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0009948Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009948Bu); } /* indirect call */
    }

loc_0009948E: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x58);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 0xD4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000994A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000994A2u); } /* indirect call */
    }

loc_000994A5: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x68), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000994F7; /* jne: not equal / not zero */

loc_000994AE: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000994B5u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000994B5: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000994D4; /* je: equal / zero */

loc_000994BE: ;
    ecx = esi;
    PUSH32(esp, 0x000994C5u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000994C5: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDECC;
    goto loc_000994D6;

loc_000994D4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000994D6: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000994DFu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000994DF: ;
    edx = MEM32(0x1D9FB8);
    eax = MEM32(edx + 0x14);
    POP32(esp, edi);
    MEM32(eax + 0xB0) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000994F7: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000994FEu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000994FE: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009951D; /* je: equal / zero */

loc_00099507: ;
    ecx = esi;
    PUSH32(esp, 0x0009950Eu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009950E: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDEF0;
    goto loc_0009951F;

loc_0009951D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009951F: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00099528u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00099528: ;
    eax = MEM32(0x1D9FB8);
    edx = MEM32(eax + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009955C; /* jbe: below or equal (unsigned <=) */

loc_00099536: ;
    edx = 0x14;
    goto loc_00099540;

    /* nop */

loc_00099540: ;
    fp_push(MEMF(eax + 0x40)); /* fld float */
    eax = MEM32(edx + eax);
    MEMF(eax + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x1D9FB8);
    esi = MEM32(eax + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00099540; /* jb: below (unsigned <) */

loc_0009955C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00099570
 * Original: 0x00099570 - 0x000995EC (124 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099570: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 8 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000995E5; /* jne: not equal / not zero */

loc_0009957E: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BDC3C);
    PUSH32(esp, 0x0009958Bu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009958B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000995E5; /* jne: not equal / not zero */

loc_00099592: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000995E5; /* jne: not equal / not zero */

loc_00099599: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000995A0u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000995A0: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000995D0; /* je: equal / zero */

loc_000995A9: ;
    ecx = esi;
    PUSH32(esp, 0x000995B0u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000995B0: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDF44;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000995C6u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000995C6: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000995D0: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000995DBu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000995DB: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000995E5: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000995F0
 * Original: 0x000995F0 - 0x00099669 (121 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000995F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000995F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B7450);
    edi = ecx;
    PUSH32(esp, 0x00099605u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00099605: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099662; /* jne: not equal / not zero */

loc_0009960C: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099662; /* jne: not equal / not zero */

loc_00099613: ;
    ecx = MEM32(0x1D9FB8);
    edx = MEM32(ecx + 0x58);
    ecx = MEM32(edx);
    PUSH32(esp, 0x00099623u); RECOMP_ABI_CALL(0x0009EA00u, sub_0009EA00); /* call 0x0009EA00 */

loc_00099623: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0009962Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009962A: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099657; /* je: equal / zero */

loc_00099633: ;
    ecx = esi;
    PUSH32(esp, 0x0009963Au); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009963A: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDF44;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00099650u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00099650: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00099657: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00099662u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00099662: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00099670
 * Original: 0x00099670 - 0x000996BD (77 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099670: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000996B9; /* je: equal / zero */

loc_0009967A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00099682u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00099682: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000996AD; /* je: equal / zero */

loc_0009968B: ;
    ecx = esi;
    PUSH32(esp, 0x00099692u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00099692: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDF44;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000996A8u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000996A8: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000996AD: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000996B8u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000996B8: ;
    POP32(esp, esi);

loc_000996B9: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000996C0
 * Original: 0x000996C0 - 0x000996D9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000996C0(void)
{

loc_000996C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000996C8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000996C8: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDF68;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000996E0
 * Original: 0x000996E0 - 0x000996EF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000996E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000996E0: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000996EC; /* je: equal / zero */

loc_000996E7: ;
    PUSH32(esp, 0x000996ECu); RECOMP_ABI_CALL(0x00099250u, sub_00099250); /* call 0x00099250 */

loc_000996EC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000996F0
 * Original: 0x000996F0 - 0x00099728 (56 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000996F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000996F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099722; /* jne: not equal / not zero */

loc_000996FE: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BDC6C);
    PUSH32(esp, 0x0009970Bu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009970B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099722; /* jne: not equal / not zero */

loc_00099712: ;
    ecx = esi;
    PUSH32(esp, 0x00099719u); RECOMP_ABI_CALL(0x00099250u, sub_00099250); /* call 0x00099250 */

loc_00099719: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00099722: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00099730
 * Original: 0x00099730 - 0x00099749 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099730(void)
{

loc_00099730: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00099738u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00099738: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDF8C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00099750
 * Original: 0x00099750 - 0x000997D2 (130 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099750: ;
    edx = MEM32(0x1D9FB8);
    eax = MEM32(edx + 0x44);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099771; /* je: equal / zero */

loc_00099763: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099771; /* je: equal / zero */

loc_00099768: ;
    eax = MEM32(0x1D73E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099776; /* jne: not equal / not zero */

loc_00099771: ;
    ecx = 1;

loc_00099776: ;
    eax = MEM32(edx + 0x58);
    edx = MEM32(eax);
    eax = MEM32(edx + 0xB4);
    edx = MEM32(eax + 0x128);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009978F; /* jne: not equal / not zero */

loc_0009978B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000997CE; /* je: equal / zero */

loc_0009978F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00099797u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00099797: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000997C2; /* je: equal / zero */

loc_000997A0: ;
    ecx = esi;
    PUSH32(esp, 0x000997A7u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000997A7: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDF44;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000997BDu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000997BD: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000997C2: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000997CDu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000997CD: ;
    POP32(esp, esi);

loc_000997CE: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000997E0
 * Original: 0x000997E0 - 0x00099A29 (585 bytes, 200 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000997E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000997E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x1D3F18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00099839; /* je: equal / zero */

loc_000997F5: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000997FCu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000997FC: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099828; /* je: equal / zero */

loc_00099805: ;
    ecx = esi;
    PUSH32(esp, 0x0009980Cu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009980C: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDB60;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00099822u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_00099822: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00099828: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00099833u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_00099833: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00099839: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 0x68);
    edx = MEM32(0x1D9FB8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    esi = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00099854; /* je: equal / zero */

loc_0009984F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099869; /* jne: not equal / not zero */

loc_00099854: ;
    PUSH32(esp, edx);
    edx = MEM32(0x1D3F0C);
    ecx = MEM32(edx + 4);
    PUSH32(esp, 0x00099863u); RECOMP_ABI_CALL(0x00017F60u, sub_00017F60); /* call 0x00017F60 */

loc_00099863: ;
    edx = MEM32(0x1D9FB8);

loc_00099869: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(MEM32(eax + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x68), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000998DC; /* jne: not equal / not zero */

loc_00099872: ;
    PUSH32(esp, 0x00099877u); RECOMP_ABI_CALL(0x0009FEF0u, sub_0009FEF0); /* call 0x0009FEF0 */

loc_00099877: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    esi = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_0009988F; /* jne: not equal / not zero */

loc_00099880: ;
    ecx = MEM32(0x1D9FB8);
    ecx = MEM32(ecx + 0x6C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009988Fu); RECOMP_ABI_CALL(0x000B9BB0u, sub_000B9BB0); /* call 0x000B9BB0 */

loc_0009988F: ;
    edx = MEM32(0x1D9FB8);
    eax = MEM32(edx + 0x6C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x000998A0u); RECOMP_ABI_CALL(0x000B8ED0u, sub_000B8ED0); /* call 0x000B8ED0 */

loc_000998A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000998A9; /* je: equal / zero */

loc_000998A4: ;
    ebx = 1;

loc_000998A9: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx + 0xB8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000998C0; /* jle: less or equal (signed <=) */

loc_000998BB: ;
    ebx = 1;

loc_000998C0: ;
    ecx = MEM32(eax + 0x6C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000998D1u); RECOMP_ABI_CALL(0x000B9A70u, sub_000B9A70); /* call 0x000B9A70 */

loc_000998D1: ;
    edx = MEM32(0x1D9FB8);
    goto loc_0009995A;

loc_000998DC: ;
    eax = MEM32(edx + 0x14);
    fp_push(MEMF(eax + 0xB0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0009995A; /* jp: parity */

loc_000998F2: ;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009995A; /* je: equal / zero */

loc_000998F8: ;
    eax = MEM32(edx + 4);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00099949; /* jbe: below or equal (unsigned <=) */

loc_00099904: ;
    esi = 0x14;
    /* nop */

loc_00099910: ;
    ecx = MEM32(esi + edx);
    eax = MEM32(ecx + 0x48);
    _fa = (uint32_t)(MEM32(eax + 0x254)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x254), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009993D; /* je: equal / zero */

loc_0009991F: ;
    eax = MEM32(ecx + 0x5C);
    _fa = (uint32_t)(MEM32(eax + 0x12C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x12C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009993E; /* jne: not equal / not zero */

loc_0009992B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00099935u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009992Fu); } /* indirect call */
    }

loc_00099935: ;
    edx = MEM32(0x1D9FB8);
    goto loc_0009993E;

loc_0009993D: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009993E: ;
    eax = MEM32(edx + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00099910; /* jb: below (unsigned <) */

loc_00099949: ;
    eax = MEM32(edx + 4);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_0009995A; /* jne: not equal / not zero */

loc_00099955: ;
    ebx = 1;

loc_0009995A: ;
    eax = MEM32(edx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000999A7; /* je: equal / zero */

loc_00099961: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00099A22; /* jle: less or equal (signed <=) */

loc_00099967: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00099A22; /* jg: greater (signed >) */

loc_00099970: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00099977u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00099977: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099995; /* je: equal / zero */

loc_0009997E: ;
    ecx = eax;
    PUSH32(esp, 0x00099985u); RECOMP_ABI_CALL(0x00098E80u, sub_00098E80); /* call 0x00098E80 */

loc_00099985: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009998Eu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009998E: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00099995: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000999A0u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000999A0: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000999A7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099A22; /* je: equal / zero */

loc_000999AB: ;
    eax = MEM32(edx + 0x54);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000999DC; /* jle: less or equal (signed <=) */

loc_000999B4: ;
    ecx = MEM32(edx + 0x58);
    eax = ZX8(LO8(ebx));
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(eax + 0xD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000999D4; /* je: equal / zero */

loc_000999C7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000999CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000999CBu); } /* indirect call */
    }

loc_000999CE: ;
    edx = MEM32(0x1D9FB8);

loc_000999D4: ;
    eax = MEM32(edx + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000999B4; /* jl: less (signed <) */

loc_000999DC: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x000999E3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000999E3: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099A17; /* je: equal / zero */

loc_000999EC: ;
    ecx = esi;
    PUSH32(esp, 0x000999F3u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000999F3: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDE30;
    MEM32(esi + 0x10) = 0;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00099A10u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00099A10: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00099A17: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00099A22u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00099A22: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00099A30
 * Original: 0x00099A30 - 0x00099AA5 (117 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099A30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 8 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00099A9E; /* jne: not equal / not zero */

loc_00099A3E: ;
    eax = MEM32(0x1D9FE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099A9E; /* jne: not equal / not zero */

loc_00099A47: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BDC3C);
    PUSH32(esp, 0x00099A54u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00099A54: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099A9E; /* jne: not equal / not zero */

loc_00099A5B: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099A9E; /* jne: not equal / not zero */

loc_00099A61: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00099A68u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00099A68: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099A89; /* je: equal / zero */

loc_00099A6F: ;
    ecx = eax;
    PUSH32(esp, 0x00099A76u); RECOMP_ABI_CALL(0x000996C0u, sub_000996C0); /* call 0x000996C0 */

loc_00099A76: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00099A7Fu); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_00099A7F: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00099A89: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00099A94u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_00099A94: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00099A9E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00099AB0
 * Original: 0x00099AB0 - 0x00099CD2 (546 bytes, 167 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00099AB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 0x68);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_00099CC2; /* jne: not equal / not zero */

loc_00099AD8: ;
    ecx = MEM32(0x1D9FB8);
    edx = MEM32(ecx + 0x6C);
    ecx = MEM32(edx + 4);
    PUSH32(esp, 0x00099AE9u); RECOMP_ABI_CALL(0x000B8ED0u, sub_000B8ED0); /* call 0x000B8ED0 */

loc_00099AE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099C25; /* je: equal / zero */

loc_00099AF1: ;
    eax = MEM32(0x1D9FB8);
    eax = MEM32(eax + 0x6C);
    edi = MEM32(eax + 4);
    ecx = MEM32(edi + 0x90);
    ebx = MEM32(eax + 8);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099B13; /* je: equal / zero */

loc_00099B0C: ;
    PUSH32(esp, 0x00099B11u); RECOMP_ABI_CALL(0x000B8A60u, sub_000B8A60); /* call 0x000B8A60 */

loc_00099B11: ;
    goto loc_00099B4D;

loc_00099B13: ;
    PUSH32(esp, 0x00099B18u); RECOMP_ABI_CALL(0x000130B0u, sub_000130B0); /* call 0x000130B0 */

loc_00099B18: ;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C);
    fp_push(MEMF(eax + ecx + 0x18C)); /* fld float */
    eax = eax + ecx + 0x188;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x34)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00099B46u); RECOMP_ABI_CALL(0x000B7830u, sub_000B7830); /* call 0x000B7830 */

loc_00099B46: ;
    ecx = edi;
    PUSH32(esp, 0x00099B4Du); RECOMP_ABI_CALL(0x000B9670u, sub_000B9670); /* call 0x000B9670 */

loc_00099B4D: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00099B63; /* je: equal / zero */

loc_00099B52: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00099B5C; /* je: equal / zero */

loc_00099B55: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00099B68; /* jne: not equal / not zero */

loc_00099B58: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00099B68;

loc_00099B5C: ;
    esi = 1;
    goto loc_00099B68;

loc_00099B63: ;
    esi = 2;

loc_00099B68: ;
    edx = MEM32(0x1D3F08);
    ecx = MEM32(edx + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00099B77u); RECOMP_ABI_CALL(0x00013CE0u, sub_00013CE0); /* call 0x00013CE0 */

loc_00099B77: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099BA4; /* jne: not equal / not zero */

loc_00099B7E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099BEE; /* je: equal / zero */

loc_00099B82: ;
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0x00099B90u); RECOMP_ABI_CALL(0x000130B0u, sub_000130B0); /* call 0x000130B0 */

loc_00099B90: ;
    ecx = eax;
    PUSH32(esp, 0x00099B97u); RECOMP_ABI_CALL(0x000B68F0u, sub_000B68F0); /* call 0x000B68F0 */

loc_00099B97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099BA4; /* jne: not equal / not zero */

loc_00099B9C: ;
    MEM32(esp + 0x10) = 2;

loc_00099BA4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099BEE; /* je: equal / zero */

loc_00099BA9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00099BB2; /* jl: less (signed <) */

loc_00099BAD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099BFE; /* jne: not equal / not zero */

loc_00099BB2: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ebp = 1;
    PUSH32(esp, 0x00099BC6u); RECOMP_ABI_CALL(0x00013D70u, sub_00013D70); /* call 0x00013D70 */

loc_00099BC6: ;
    ecx = MEM32(0x1D9FB8);
    edx = MEM32(ecx + 0x14);
    eax = MEM32(esp + 0x18);
    MEM32(eax + esi * 4 + 0x18) = edx;
    ecx = MEM32(0x1D9FB8);
    edx = MEM32(ecx + 0x14);
    ecx = MEM32(edx + 0x44);
    PUSH32(esp, 0x00099BE8u); RECOMP_ABI_CALL(0x0002CA70u, sub_0002CA70); /* call 0x0002CA70 */

loc_00099BE8: ;
    MEM32(esp + 0x14) = ebp;
    goto loc_00099BFE;

loc_00099BEE: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx + 0x44);
    PUSH32(esp, 0x00099BFEu); RECOMP_ABI_CALL(0x0002CB70u, sub_0002CB70); /* call 0x0002CB70 */

loc_00099BFE: ;
    eax = MEM32(0x1DA034);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax + 0x348) = esi;
    MEM32(eax + 0x34C) = ebp;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x1D9D2C) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00099C25: ;
    eax = MEM32(0x1DA034);
    MEM32(eax + 0x348) = 0xFFFFFFFFu;
    MEM32(eax + 0x34C) = 1;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_00099C93; /* je: equal / zero */

loc_00099C4A: ;
    PUSH32(esp, 0x00099C4Fu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00099C4F: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099C6E; /* je: equal / zero */

loc_00099C58: ;
    ecx = esi;
    PUSH32(esp, 0x00099C5Fu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00099C5F: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDEA8;
    goto loc_00099C70;

loc_00099C6E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00099C70: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00099C79u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00099C79: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00099C80u); RECOMP_ABI_CALL(0x0009FFA0u, sub_0009FFA0); /* call 0x0009FFA0 */

loc_00099C80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x1D9D2C) = ebp;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00099C93: ;
    PUSH32(esp, 0x00099C98u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00099C98: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099CB7; /* je: equal / zero */

loc_00099CA1: ;
    ecx = esi;
    PUSH32(esp, 0x00099CA8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00099CA8: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDF20;
    goto loc_00099CB9;

loc_00099CB7: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00099CB9: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00099CC2u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00099CC2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x1D9D2C) = ebp;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00099CE0
 * Original: 0x00099CE0 - 0x00099EAF (463 bytes, 154 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00099CE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x00099CEBu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00099CEB: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    eax = 1;
    MEM32(ebp + 8) = eax;
    MEM32(ebp) = 0x1BDFB0;
    MEM32(ebp + 0x14) = ecx;
    MEM32(ebp + 0x18) = edx;
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(0x1D9FB8);
    _fa = (uint32_t)(MEM32(eax + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x5C), 5 (32-bit) */
    ebx = MEM32(0x1DA044);
    if (CMP_NE(_fa, _fb)) goto loc_00099E69; /* jne: not equal / not zero */

loc_00099D20: ;
    eax = MEM32(eax + 0x6C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x00099D2Bu); RECOMP_ABI_CALL(0x000B8ED0u, sub_000B8ED0); /* call 0x000B8ED0 */

loc_00099D2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099E64; /* je: equal / zero */

loc_00099D33: ;
    edi = MEM32(0x1D9FB8);
    ecx = MEM32(edi + 0x6C);
    edx = MEM32(ecx + 4);
    ecx = MEM32(esp + 0x1C);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00099D48: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099D50; /* je: equal / zero */

loc_00099D4E: ;
    esi = eax;

loc_00099D50: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00099D48; /* jl: less (signed <) */

loc_00099D56: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099E9F; /* je: equal / zero */

loc_00099D5F: ;
    ecx = MEM32(edx + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099D93; /* je: equal / zero */

loc_00099D69: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099D81; /* jne: not equal / not zero */

loc_00099D6D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00099D73u); RECOMP_ABI_CALL(0x000B84A0u, sub_000B84A0); /* call 0x000B84A0 */

loc_00099D73: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    goto loc_00099DA8;

loc_00099D81: ;
    PUSH32(esp, 0x00099D86u); RECOMP_ABI_CALL(0x000B8780u, sub_000B8780); /* call 0x000B8780 */

loc_00099D86: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    goto loc_00099DA7;

loc_00099D93: ;
    ecx = MEM32(edi + 0x14);
    edx = MEM32(ecx + 0xB0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 2);

loc_00099DA7: ;
    PUSH32(esp, esi);

loc_00099DA8: ;
    ecx = ebx;
    PUSH32(esp, 0x00099DAFu); RECOMP_ABI_CALL(0x00063930u, sub_00063930); /* call 0x00063930 */

loc_00099DAF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + 0x10) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00099DF7; /* jne: not equal / not zero */

loc_00099DBA: ;
    ecx = MEM32(0x1D3F08);
    ecx = MEM32(ecx + 0x2C);
    PUSH32(esp, 0x00099DC8u); RECOMP_ABI_CALL(0x00013D50u, sub_00013D50); /* call 0x00013D50 */

loc_00099DC8: ;
    edx = esp + 0x1C;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00099DD4u); RECOMP_ABI_CALL(0x000130B0u, sub_000130B0); /* call 0x000130B0 */

loc_00099DD4: ;
    ecx = eax;
    PUSH32(esp, 0x00099DDBu); RECOMP_ABI_CALL(0x000B67B0u, sub_000B67B0); /* call 0x000B67B0 */

loc_00099DDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099DF7; /* je: equal / zero */

loc_00099DDF: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099DF7; /* je: equal / zero */

loc_00099DEA: ;
    eax = MEM32(eax + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0x00099DF7u); RECOMP_ABI_CALL(0x000644A0u, sub_000644A0); /* call 0x000644A0 */

loc_00099DF7: ;
    eax = MEM32(0x1D9D2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099E30; /* jne: not equal / not zero */

loc_00099E01: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x226);
    PUSH32(esp, 0x00099E11u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_00099E11: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    MEM32(ebx + 0x198) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00099E20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00099E1Du); } /* indirect call */
    }

loc_00099E20: ;
    ecx = ebx;
    PUSH32(esp, 0x00099E27u); RECOMP_ABI_CALL(0x000644E0u, sub_000644E0); /* call 0x000644E0 */

loc_00099E27: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00099E30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099E9F; /* jne: not equal / not zero */

loc_00099E35: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x227);
    PUSH32(esp, 0x00099E45u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_00099E45: ;
    MEM32(ebx + 0x198) = eax;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00099E54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00099E51u); } /* indirect call */
    }

loc_00099E54: ;
    ecx = ebx;
    PUSH32(esp, 0x00099E5Bu); RECOMP_ABI_CALL(0x000644E0u, sub_000644E0); /* call 0x000644E0 */

loc_00099E5B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00099E64: ;
    eax = MEM32(0x1D9FB8);

loc_00099E69: ;
    eax = MEM32(eax + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099E76; /* je: equal / zero */

loc_00099E71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099E9F; /* jne: not equal / not zero */

loc_00099E76: ;
    edi = MEM32(esp + 0x1C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00099E80: ;
    _fa = (uint32_t)(MEM32(edi + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + esi * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099E99; /* je: equal / zero */

loc_00099E86: ;
    MEM32(ebp + 0x10) = 0;
    ecx = MEM32(edi + esi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00099E99u); RECOMP_ABI_CALL(0x00063900u, sub_00063900); /* call 0x00063900 */

loc_00099E99: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00099E80; /* jl: less (signed <) */

loc_00099E9F: ;
    ecx = ebx;
    PUSH32(esp, 0x00099EA6u); RECOMP_ABI_CALL(0x000644E0u, sub_000644E0); /* call 0x000644E0 */

loc_00099EA6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00099EB0
 * Original: 0x00099EB0 - 0x0009A04D (413 bytes, 141 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099EB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    if ((_fa == 0)) goto loc_00099EF8; /* je: equal / zero */

loc_00099EC0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00099ECC; /* je: equal / zero */

loc_00099EC3: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0009A046; /* jne: not equal / not zero */

loc_00099ECC: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BDBE0);
    PUSH32(esp, 0x00099ED9u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00099ED9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A046; /* jne: not equal / not zero */

loc_00099EE4: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00099EEEu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00099EEE: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00099EF8: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B3388);
    PUSH32(esp, 0x00099F05u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00099F05: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099F5A; /* jne: not equal / not zero */

loc_00099F0C: ;
    edx = MEM32(0x1D9FB8);
    PUSH32(esp, 0x10);
    MEM32(edx + 0x44) = eax;
    PUSH32(esp, 0x00099F1Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00099F1C: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099F3B; /* je: equal / zero */

loc_00099F25: ;
    ecx = esi;
    PUSH32(esp, 0x00099F2Cu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00099F2C: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDE84;
    goto loc_00099F3D;

loc_00099F3B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00099F3D: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00099F46u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00099F46: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00099F50u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00099F50: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00099F5A: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B33A4);
    PUSH32(esp, 0x00099F67u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00099F67: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099EE4; /* je: equal / zero */

loc_00099F72: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B3370);
    PUSH32(esp, 0x00099F7Fu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00099F7F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099FF9; /* jne: not equal / not zero */

loc_00099F86: ;
    edx = MEM32(edi + 4);
    MEM32(edx + 0x6C) = 1;
    eax = MEM32(edi + 4);
    eax = MEM32(eax + 0x68);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00099FA3; /* je: equal / zero */

loc_00099F9B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00099FBC; /* je: equal / zero */

loc_00099F9E: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00099FE5; /* jne: not equal / not zero */

loc_00099FA3: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x00099FAAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00099FAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099FDA; /* je: equal / zero */

loc_00099FB1: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00099FBAu); RECOMP_ABI_CALL(0x00098E50u, sub_00098E50); /* call 0x00098E50 */

loc_00099FBA: ;
    goto loc_00099FDC;

loc_00099FBC: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00099FC3u); RECOMP_ABI_CALL(0x0009FFA0u, sub_0009FFA0); /* call 0x0009FFA0 */

loc_00099FC3: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00099FCAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00099FCA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099FDA; /* je: equal / zero */

loc_00099FD1: ;
    ecx = eax;
    PUSH32(esp, 0x00099FD8u); RECOMP_ABI_CALL(0x00098EA0u, sub_00098EA0); /* call 0x00098EA0 */

loc_00099FD8: ;
    goto loc_00099FDC;

loc_00099FDA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00099FDC: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00099FE5u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00099FE5: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00099FEFu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00099FEF: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00099FF9: ;
    PUSH32(esp, 0x1BDFD4);
    ecx = esi;
    PUSH32(esp, 0x0009A005u); RECOMP_ABI_CALL(0x0003D190u, sub_0003D190); /* call 0x0003D190 */

loc_0009A005: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A046; /* je: equal / zero */

loc_0009A009: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0009A010u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009A010: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A031; /* je: equal / zero */

loc_0009A017: ;
    ecx = eax;
    PUSH32(esp, 0x0009A01Eu); RECOMP_ABI_CALL(0x00099730u, sub_00099730); /* call 0x00099730 */

loc_0009A01E: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A027u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009A027: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009A031: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A03Cu); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009A03C: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009A046: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A050
 * Original: 0x0009A050 - 0x0009A0F2 (162 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A050: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x0009A067u); RECOMP_ABI_CALL(0x000A0070u, sub_000A0070); /* call 0x000A0070 */

loc_0009A067: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0009A06Fu); RECOMP_ABI_CALL(0x0009FE90u, sub_0009FE90); /* call 0x0009FE90 */

loc_0009A06F: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1B7450);
    PUSH32(esp, 0x0009A081u); RECOMP_ABI_CALL(0x000EBD00u, sub_000EBD00); /* call 0x000EBD00 */

loc_0009A081: ;
    ecx = MEM32(0x1DA034);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0009A08Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A08Bu); } /* indirect call */
    }

loc_0009A08E: ;
    eax = MEM32(0x1D9FB8);
    eax = MEM32(eax + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    edi = MEM32(0x1DA034);
    if (CMP_EQ(_fa, _fb)) goto loc_0009A0A6; /* je: equal / zero */

loc_0009A0A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A0B8; /* jne: not equal / not zero */

loc_0009A0A6: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0009A0B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A0AAu); } /* indirect call */
    }

loc_0009A0B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A0B8; /* je: equal / zero */

loc_0009A0B4: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) | 4;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0009A0B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    ecx = esi;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x0009A0CDu); RECOMP_ABI_CALL(0x00099040u, sub_00099040); /* call 0x00099040 */

loc_0009A0CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A0D5; /* je: equal / zero */

loc_0009A0D1: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) | 4;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0009A0D5: ;
    ecx = esi;
    PUSH32(esp, 0x0009A0DCu); RECOMP_ABI_CALL(0x00099AB0u, sub_00099AB0); /* call 0x00099AB0 */

loc_0009A0DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A0E4; /* je: equal / zero */

loc_0009A0E0: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) | 2;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0009A0E4: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0009A0EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A0E8u); } /* indirect call */
    }

loc_0009A0EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009A100
 * Original: 0x0009A100 - 0x0009A16D (109 bytes, 41 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A100: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A167; /* jne: not equal / not zero */

loc_0009A10E: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B3904);
    PUSH32(esp, 0x0009A11Bu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009A11B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A167; /* jne: not equal / not zero */

loc_0009A122: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x0009A129u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009A129: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A153; /* je: equal / zero */

loc_0009A130: ;
    edx = MEM32(esi + 0x14);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x0009A141u); RECOMP_ABI_CALL(0x00099CE0u, sub_00099CE0); /* call 0x00099CE0 */

loc_0009A141: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A14Au); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009A14A: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009A153: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A15Eu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009A15E: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009A167: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A170
 * Original: 0x0009A170 - 0x0009A1D8 (104 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A170: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009A178u); RECOMP_ABI_CALL(0x000A0280u, sub_000A0280); /* call 0x000A0280 */

loc_0009A178: ;
    PUSH32(esp, 0x128);
    PUSH32(esp, 0x0009A182u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009A182: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A197; /* je: equal / zero */

loc_0009A189: ;
    PUSH32(esp, 0x1BE03C);
    ecx = eax;
    PUSH32(esp, 0x0009A195u); RECOMP_ABI_CALL(0x0003F5A0u, sub_0003F5A0); /* call 0x0003F5A0 */

loc_0009A195: ;
    goto loc_0009A199;

loc_0009A197: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009A199: ;
    MEM32(0x1D9D6C) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0009A1A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A1A4u); } /* indirect call */
    }

loc_0009A1A7: ;
    eax = MEM32(0x1D9D6C);
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A1BAu); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_0009A1BA: ;
    ecx = MEM32(0x1DA050);
    PUSH32(esp, ecx);
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0x0009A1CCu); RECOMP_ABI_CALL(0x000EBD10u, sub_000EBD10); /* call 0x000EBD10 */

loc_0009A1CC: ;
    edx = MEM32(esi + 4);
    MEM32(edx + 0x6C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009A1E0
 * Original: 0x0009A1E0 - 0x0009A267 (135 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A1E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 0x18) = 0;
    MEM32(edi + 0x20) = 0;
    PUSH32(esp, 0x0009A1F7u); RECOMP_ABI_CALL(0x0009FDF0u, sub_0009FDF0); /* call 0x0009FDF0 */

loc_0009A1F7: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x54);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009A255; /* jle: less or equal (signed <=) */

loc_0009A205: ;
    PUSH32(esp, esi);

loc_0009A206: ;
    eax = MEM32(eax + 0x58);
    esi = ZX8(LO8(ebx));
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + esi);
    edx = MEM32(ecx + 0xD8);
    MEM32(edx) = 1;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x58);
    ecx = MEM32(ecx + esi);
    PUSH32(esp, 0x0009A22Eu); RECOMP_ABI_CALL(0x0009DD60u, sub_0009DD60); /* call 0x0009DD60 */

loc_0009A22E: ;
    edx = MEM32(0x1D9FB8);
    eax = MEM32(edx + 0x58);
    ecx = MEM32(eax + esi);
    ecx = MEM32(ecx + 0xD4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0009A247u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A244u); } /* indirect call */
    }

loc_0009A247: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009A206; /* jl: less (signed <) */

loc_0009A254: ;
    POP32(esp, esi);

loc_0009A255: ;
    eax = MEM32(0x1BDFF0);
    MEM32(edi + 0x1C) = eax;
    MEM32(edi + 0x14) = 0;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009A270
 * Original: 0x0009A270 - 0x0009A306 (150 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A270: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x20) = 1;
    ecx = MEM32(0x1DA050);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A2CD; /* je: equal / zero */

loc_0009A285: ;
    PUSH32(esp, 0x0009A28Au); RECOMP_ABI_CALL(0x000477F0u, sub_000477F0); /* call 0x000477F0 */

loc_0009A28A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A2A0; /* je: equal / zero */

loc_0009A28E: ;
    ecx = MEM32(0x1DA050);
    PUSH32(esp, 0x0009A299u); RECOMP_ABI_CALL(0x000477F0u, sub_000477F0); /* call 0x000477F0 */

loc_0009A299: ;
    ecx = eax;
    PUSH32(esp, 0x0009A2A0u); RECOMP_ABI_CALL(0x000490A0u, sub_000490A0); /* call 0x000490A0 */

loc_0009A2A0: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, edi);
    edi = MEM32(0x1DA050);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x230);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0009A2C4u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_0009A2C4: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0009A2CCu); RECOMP_ABI_CALL(0x00047860u, sub_00047860); /* call 0x00047860 */

loc_0009A2CC: ;
    POP32(esp, edi);

loc_0009A2CD: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1BE03C);
    PUSH32(esp, 0x0009A2DFu); RECOMP_ABI_CALL(0x000EBD00u, sub_000EBD00); /* call 0x000EBD00 */

loc_0009A2DF: ;
    ecx = MEM32(0x1DA050);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A2FA; /* je: equal / zero */

loc_0009A2E9: ;
    PUSH32(esp, 0x0009A2EEu); RECOMP_ABI_CALL(0x000474C0u, sub_000474C0); /* call 0x000474C0 */

loc_0009A2EE: ;
    ecx = MEM32(0x1BDFEC);
    MEM32(esi + 0x18) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0009A2FA: ;
    edx = MEM32(0x1BDFEC);
    MEM32(esi + 0x18) = edx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009A310
 * Original: 0x0009A310 - 0x0009A35D (77 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A310: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 8 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0009A356; /* jne: not equal / not zero */

loc_0009A31E: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BDC3C);
    PUSH32(esp, 0x0009A32Bu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009A32B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A34C; /* jne: not equal / not zero */

loc_0009A332: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A33E; /* je: equal / zero */

loc_0009A339: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A34C; /* jne: not equal / not zero */

loc_0009A33E: ;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A34C; /* jne: not equal / not zero */

loc_0009A345: ;
    ecx = edi;
    PUSH32(esp, 0x0009A34Cu); RECOMP_ABI_CALL(0x0009A270u, sub_0009A270); /* call 0x0009A270 */

loc_0009A34C: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009A356: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A360
 * Original: 0x0009A360 - 0x0009A3A0 (64 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A360: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0x0009A36Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009A36B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A393; /* je: equal / zero */

loc_0009A374: ;
    ecx = esi;
    PUSH32(esp, 0x0009A37Bu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009A37B: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDFF4;
    PUSH32(esp, 0x0009A390u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009A390: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009A393: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0009A39Du); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009A39D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009A3A0
 * Original: 0x0009A3A0 - 0x0009A3E7 (71 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A3A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    edi = ecx;
    PUSH32(esp, 0x0009A3ABu); RECOMP_ABI_CALL(0x0009FFA0u, sub_0009FFA0); /* call 0x0009FFA0 */

loc_0009A3AB: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0009A3B2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009A3B2: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A3DA; /* je: equal / zero */

loc_0009A3BB: ;
    ecx = esi;
    PUSH32(esp, 0x0009A3C2u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009A3C2: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE018;
    PUSH32(esp, 0x0009A3D7u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009A3D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009A3DA: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0009A3E4u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009A3E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009A3F0
 * Original: 0x0009A3F0 - 0x0009A589 (409 bytes, 133 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A3F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A3F0: ;
    fp_push(MEMF(0x1D73FC)); /* fld float */
    eax = MEM32(0x1D9FB8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x1B4ABC)); /* fsub dword ptr [0x1b4abc] */
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1DA05C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1da05c] */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0009A45C; /* jp: parity */

loc_0009A418: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A45C; /* jne: not equal / not zero */

loc_0009A41F: ;
    eax = MEM32(0x1DA878);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A449; /* jne: not equal / not zero */

loc_0009A428: ;
    PUSH32(esp, 0x360);
    PUSH32(esp, 0x0009A432u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009A432: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A442; /* je: equal / zero */

loc_0009A439: ;
    ecx = eax;
    PUSH32(esp, 0x0009A440u); RECOMP_ABI_CALL(0x000B0870u, sub_000B0870); /* call 0x000B0870 */

loc_0009A440: ;
    goto loc_0009A444;

loc_0009A442: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009A444: ;
    MEM32(0x1DA878) = eax;

loc_0009A449: ;
    PUSH32(esp, 0x40800000);
    ecx = eax;
    PUSH32(esp, 0x0009A455u); RECOMP_ABI_CALL(0x000AFE50u, sub_000AFE50); /* call 0x000AFE50 */

loc_0009A455: ;
    MEM32(edi + 0x14) = 1;

loc_0009A45C: ;
    fp_push(MEMF(0x1DA05C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1D73FC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1d73fc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009A47D; /* jne: not equal / not zero */

loc_0009A46F: ;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A47D; /* jne: not equal / not zero */

loc_0009A476: ;
    ecx = edi;
    PUSH32(esp, 0x0009A47Du); RECOMP_ABI_CALL(0x0009A270u, sub_0009A270); /* call 0x0009A270 */

loc_0009A47D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009A4A9; /* jbe: below or equal (unsigned <=) */

loc_0009A481: ;
    eax = MEM32(0x1D9FB8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    goto loc_0009A490;

    /* nop */

loc_0009A490: ;
    edx = MEM32(eax);
    edx = MEM32(edx + 0x48);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edx + 0x254)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x254), 3 (32-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0009A490; /* jne: not equal / not zero */

loc_0009A4A9: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A4C7; /* jne: not equal / not zero */

loc_0009A4B5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A4C7; /* je: equal / zero */

loc_0009A4B9: ;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A4C7; /* jne: not equal / not zero */

loc_0009A4C0: ;
    ecx = edi;
    PUSH32(esp, 0x0009A4C7u); RECOMP_ABI_CALL(0x0009A270u, sub_0009A270); /* call 0x0009A270 */

loc_0009A4C7: ;
    fp_push(MEMF(edi + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009A52C; /* jne: not equal / not zero */

loc_0009A4D7: ;
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x20), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A52C; /* jne: not equal / not zero */

loc_0009A4DD: ;
    fp_push(MEMF(edi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    MEMF(edi + 0x18) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0009A52C; /* jp: parity */

loc_0009A4F4: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0009A4FBu); RECOMP_ABI_CALL(0x0009FFA0u, sub_0009FFA0); /* call 0x0009FFA0 */

loc_0009A4FB: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0009A502u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009A502: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A521; /* je: equal / zero */

loc_0009A50B: ;
    ecx = esi;
    PUSH32(esp, 0x0009A512u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009A512: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE018;
    goto loc_0009A523;

loc_0009A521: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009A523: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009A52Cu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009A52C: ;
    fp_push(MEMF(edi + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009A583; /* jne: not equal / not zero */

loc_0009A53C: ;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A583; /* jne: not equal / not zero */

loc_0009A543: ;
    fp_push(MEMF(edi + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    MEMF(edi + 0x1C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0009A583; /* jp: parity */

loc_0009A55A: ;
    ecx = MEM32(0x1DA050);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A569; /* je: equal / zero */

loc_0009A564: ;
    PUSH32(esp, 0x0009A569u); RECOMP_ABI_CALL(0x000474E0u, sub_000474E0); /* call 0x000474E0 */

loc_0009A569: ;
    ecx = MEM32(0x1D9D6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A583; /* je: equal / zero */

loc_0009A573: ;
    edx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x4C)); return; /* indirect tail jmp */

loc_0009A583: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009A590
 * Original: 0x0009A590 - 0x0009A5DD (77 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A590: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = ecx;
    PUSH32(esp, 0x0009A59Bu); RECOMP_ABI_CALL(0x0009FFA0u, sub_0009FFA0); /* call 0x0009FFA0 */

loc_0009A59B: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0009A5A2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009A5A2: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A5CD; /* je: equal / zero */

loc_0009A5AB: ;
    ecx = esi;
    PUSH32(esp, 0x0009A5B2u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009A5B2: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE048;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009A5C8u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009A5C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009A5CD: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009A5D8u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009A5D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A5E0
 * Original: 0x0009A5E0 - 0x0009A5F4 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A5E0: ;
    MEM32(ecx + 0x54) = 1;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A5F3; /* je: equal / zero */

loc_0009A5EE: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

loc_0009A5F3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009A600
 * Original: 0x0009A600 - 0x0009A607 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A600(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009A600: ;
    fp_push(MEMF(0x1B4ABC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009A610
 * Original: 0x0009A610 - 0x0009A617 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A610(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009A610: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009A620
 * Original: 0x0009A620 - 0x0009A632 (18 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A620: ;
    MEM32(ecx) = 0x1BE080;
    MEM32(ecx + 0x5C) = 0x1BE078;
    g_seh_ebp = ebp; sub_000BCBB0(); return; /* tail jmp 0x000BCBB0 */

}

/**
 * sub_0009A640
 * Original: 0x0009A640 - 0x0009A680 (64 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A640: ;
    eax = MEM32(0x1DA034);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x1D9FB8);
    edx = MEM32(esi + 0x10);
    edx = MEM32(ecx + edx * 4 + 0x14);
    _fb = (uint32_t)(0x16C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x16C)) >> 32) & 1);
    eax = eax + 0x16C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x1DA048);
    PUSH32(esp, 0x0009A668u); RECOMP_ABI_CALL(0x0005CD20u, sub_0005CD20); /* call 0x0005CD20 */

loc_0009A668: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0009A680(); return; /* fallthrough 0x0009A680 */

}

/**
 * sub_0009A680
 * Original: 0x0009A680 - 0x0009A6B4 (52 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A680: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A6AE; /* jne: not equal / not zero */

loc_0009A68E: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B62D4);
    PUSH32(esp, 0x0009A69Bu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009A69B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A6AE; /* jne: not equal / not zero */

loc_0009A6A2: ;
    eax = 1;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009A6AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A6C0
 * Original: 0x0009A6C0 - 0x0009A6F3 (51 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A6C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A6C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009A6C8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009A6C8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x20) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE0E0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A700
 * Original: 0x0009A700 - 0x0009A70B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A700: ;
    MEM32(ecx) = 0x1BE0E0;
    g_seh_ebp = ebp; sub_000BC740(); return; /* tail jmp 0x000BC740 */

}

/**
 * sub_0009A710
 * Original: 0x0009A710 - 0x0009A750 (64 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A710: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0009A718u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A715u); } /* indirect call */
    }

loc_0009A718: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A743; /* jne: not equal / not zero */

loc_0009A71F: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A743; /* jne: not equal / not zero */

loc_0009A726: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A743; /* jne: not equal / not zero */

loc_0009A72D: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A743; /* jne: not equal / not zero */

loc_0009A734: ;
    edx = MEM32(esi);
    MEM32(esi + 0x24) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x24)); return; /* indirect tail jmp */

loc_0009A743: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0009A750(); return; /* fallthrough 0x0009A750 */

}

/**
 * sub_0009A750
 * Original: 0x0009A750 - 0x0009A798 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A750: ;
    edx = MEM32(ecx + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A75E; /* je: equal / zero */

loc_0009A759: ;
    eax = 8;

loc_0009A75E: ;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A768; /* je: equal / zero */

loc_0009A765: ;
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0009A768: ;
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A772; /* je: equal / zero */

loc_0009A76F: ;
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0009A772: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A77C; /* je: equal / zero */

loc_0009A779: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0009A77C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 4);
    MEM32(ecx + 0x24) = 3;
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A797u); RECOMP_ABI_CALL(0x0008BA80u, sub_0008BA80); /* call 0x0008BA80 */

loc_0009A797: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009A7A0
 * Original: 0x0009A7A0 - 0x0009A7B3 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A7A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A7A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(0x1D9FE4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0009A7C0
 * Original: 0x0009A7C0 - 0x0009A7CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A7C0(void)
{

loc_0009A7C0: ;
    MEM32(0x1D9FE4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0009A7D0
 * Original: 0x0009A7D0 - 0x0009A84F (127 bytes, 44 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A7D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0009A811; /* je: equal / zero */

loc_0009A7DB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0009A7ED; /* je: equal / zero */

loc_0009A7DE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0009A84D; /* jne: not equal / not zero */

loc_0009A7E1: ;
    PUSH32(esp, 0);

loc_0009A7E3: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x0009A7EBu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009A7EB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009A7ED: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 1 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_0009A7E3; /* jne: not equal / not zero */

loc_0009A7F5: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A808u); RECOMP_ABI_CALL(0x0008BA80u, sub_0008BA80); /* call 0x0008BA80 */

loc_0009A808: ;
    MEM32(esi + 0x10) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009A811: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x1BCAC4);
    MEM32(esi + 0x10) = 1;
    MEM32(esi + 0x14) = 0;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x1DE);
    PUSH32(esp, 0x0009A83Fu); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_0009A83F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1A27B8);
    PUSH32(esp, 0x0009A84Au); RECOMP_ABI_CALL(0x0006A480u, sub_0006A480); /* call 0x0006A480 */

loc_0009A84A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009A84D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009A850
 * Original: 0x0009A850 - 0x0009A886 (54 bytes, 22 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A850: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BCAC4);
    edi = ecx;
    PUSH32(esp, 0x0009A865u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009A865: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A87F; /* jne: not equal / not zero */

loc_0009A86C: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 8 (32-bit) */
    eax = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0009A881; /* jne: not equal / not zero */

loc_0009A877: ;
    MEM32(edi + 0x14) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009A87F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009A881: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A890
 * Original: 0x0009A890 - 0x0009A8A0 (16 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A890: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009ACE0(); return; /* tail jmp 0x0009ACE0 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0009A8A0
 * Original: 0x0009A8A0 - 0x0009A8C9 (41 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A8A0(void)
{

loc_0009A8A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009A8A8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009A8A8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE110;
    MEM32(esi + 0x14) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A8D0
 * Original: 0x0009A8D0 - 0x0009A8F7 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A8D0(void)
{

loc_0009A8D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009A8D8u); RECOMP_ABI_CALL(0x000BCB80u, sub_000BCB80); /* call 0x000BCB80 */

loc_0009A8D8: ;
    MEM32(esi + 0x68) = 2;
    MEM32(esi + 0x6C) = 0;
    MEM32(esi) = 0x1BE13C;
    MEM32(esi + 0x5C) = 0x1BE134;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009A900
 * Original: 0x0009A900 - 0x0009A908 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A900: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009A910(); return; /* tail jmp 0x0009A910 */

}

/**
 * sub_0009A910
 * Original: 0x0009A910 - 0x0009A93B (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A910: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1BE13C;
    MEM32(esi + 0x5C) = 0x1BE134;
    PUSH32(esp, 0x0009A925u); RECOMP_ABI_CALL(0x0009A620u, sub_0009A620); /* call 0x0009A620 */

loc_0009A925: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009A935; /* je: equal / zero */

loc_0009A92C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009A932u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0009A932: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009A935: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A940
 * Original: 0x0009A940 - 0x0009A969 (41 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A940(void)
{

loc_0009A940: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009A948u); RECOMP_ABI_CALL(0x000BCB80u, sub_000BCB80); /* call 0x000BCB80 */

loc_0009A948: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = 0;
    MEM32(esi) = 0x1BE180;
    MEM32(esi + 0x5C) = 0x1BE178;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A970
 * Original: 0x0009A970 - 0x0009A978 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A970: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009A980(); return; /* tail jmp 0x0009A980 */

}

/**
 * sub_0009A980
 * Original: 0x0009A980 - 0x0009A9AB (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A980: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1BE180;
    MEM32(esi + 0x5C) = 0x1BE178;
    PUSH32(esp, 0x0009A995u); RECOMP_ABI_CALL(0x0009A620u, sub_0009A620); /* call 0x0009A620 */

loc_0009A995: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009A9A5; /* je: equal / zero */

loc_0009A99C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009A9A2u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0009A9A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009A9A5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A9B0
 * Original: 0x0009A9B0 - 0x0009A9D9 (41 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A9B0(void)
{

loc_0009A9B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009A9B8u); RECOMP_ABI_CALL(0x000BCB80u, sub_000BCB80); /* call 0x000BCB80 */

loc_0009A9B8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = 0;
    MEM32(esi) = 0x1BE1C4;
    MEM32(esi + 0x5C) = 0x1BE1BC;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A9E0
 * Original: 0x0009A9E0 - 0x0009A9E8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A9E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A9E0: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009A9F0(); return; /* tail jmp 0x0009A9F0 */

}

/**
 * sub_0009A9F0
 * Original: 0x0009A9F0 - 0x0009AA1B (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A9F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1BE1C4;
    MEM32(esi + 0x5C) = 0x1BE1BC;
    PUSH32(esp, 0x0009AA05u); RECOMP_ABI_CALL(0x0009A620u, sub_0009A620); /* call 0x0009A620 */

loc_0009AA05: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009AA15; /* je: equal / zero */

loc_0009AA0C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009AA12u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0009AA12: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009AA15: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009AA20
 * Original: 0x0009AA20 - 0x0009AA47 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AA20(void)
{

loc_0009AA20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009AA28u); RECOMP_ABI_CALL(0x000BCB80u, sub_000BCB80); /* call 0x000BCB80 */

loc_0009AA28: ;
    MEM32(esi + 0x68) = 0xC;
    MEM32(esi + 0x6C) = 0;
    MEM32(esi) = 0x1BE208;
    MEM32(esi + 0x5C) = 0x1BE200;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009AA50
 * Original: 0x0009AA50 - 0x0009AA58 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009AA50: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009AA60(); return; /* tail jmp 0x0009AA60 */

}

/**
 * sub_0009AA60
 * Original: 0x0009AA60 - 0x0009AA8B (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009AA60: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1BE208;
    MEM32(esi + 0x5C) = 0x1BE200;
    PUSH32(esp, 0x0009AA75u); RECOMP_ABI_CALL(0x0009A620u, sub_0009A620); /* call 0x0009A620 */

loc_0009AA75: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009AA85; /* je: equal / zero */

loc_0009AA7C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009AA82u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0009AA82: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009AA85: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009AA90
 * Original: 0x0009AA90 - 0x0009AAB9 (41 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AA90(void)
{

loc_0009AA90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009AA98u); RECOMP_ABI_CALL(0x000BCB80u, sub_000BCB80); /* call 0x000BCB80 */

loc_0009AA98: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = 0;
    MEM32(esi) = 0x1BE24C;
    MEM32(esi + 0x5C) = 0x1BE244;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009AAC0
 * Original: 0x0009AAC0 - 0x0009AAC8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009AAC0: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009AAD0(); return; /* tail jmp 0x0009AAD0 */

}

/**
 * sub_0009AAD0
 * Original: 0x0009AAD0 - 0x0009AAFB (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009AAD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1BE24C;
    MEM32(esi + 0x5C) = 0x1BE244;
    PUSH32(esp, 0x0009AAE5u); RECOMP_ABI_CALL(0x0009A620u, sub_0009A620); /* call 0x0009A620 */

loc_0009AAE5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009AAF5; /* je: equal / zero */

loc_0009AAEC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009AAF2u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0009AAF2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009AAF5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009AB00
 * Original: 0x0009AB00 - 0x0009AB27 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AB00(void)
{

loc_0009AB00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009AB08u); RECOMP_ABI_CALL(0x000BCB80u, sub_000BCB80); /* call 0x000BCB80 */

loc_0009AB08: ;
    MEM32(esi + 0x68) = 1;
    MEM32(esi + 0x6C) = 0;
    MEM32(esi) = 0x1BE290;
    MEM32(esi + 0x5C) = 0x1BE288;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009AB30
 * Original: 0x0009AB30 - 0x0009AB38 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009AB30: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009AB40(); return; /* tail jmp 0x0009AB40 */

}

/**
 * sub_0009AB40
 * Original: 0x0009AB40 - 0x0009AB6B (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009AB40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1BE290;
    MEM32(esi + 0x5C) = 0x1BE288;
    PUSH32(esp, 0x0009AB55u); RECOMP_ABI_CALL(0x0009A620u, sub_0009A620); /* call 0x0009A620 */

loc_0009AB55: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009AB65; /* je: equal / zero */

loc_0009AB5C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009AB62u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0009AB62: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009AB65: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009AB70
 * Original: 0x0009AB70 - 0x0009AB99 (41 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AB70(void)
{

loc_0009AB70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009AB78u); RECOMP_ABI_CALL(0x000BCB80u, sub_000BCB80); /* call 0x000BCB80 */

loc_0009AB78: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = 0;
    MEM32(esi) = 0x1BE2D4;
    MEM32(esi + 0x5C) = 0x1BE2CC;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009ABA0
 * Original: 0x0009ABA0 - 0x0009ABA8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009ABA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009ABA0: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0009ABB0(); return; /* tail jmp 0x0009ABB0 */

}

/**
 * sub_0009ABB0
 * Original: 0x0009ABB0 - 0x0009ABDB (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009ABB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009ABB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1BE2D4;
    MEM32(esi + 0x5C) = 0x1BE2CC;
    PUSH32(esp, 0x0009ABC5u); RECOMP_ABI_CALL(0x0009A620u, sub_0009A620); /* call 0x0009A620 */

loc_0009ABC5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009ABD5; /* je: equal / zero */

loc_0009ABCC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009ABD2u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0009ABD2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009ABD5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009ABE0
 * Original: 0x0009ABE0 - 0x0009AD0B (299 bytes, 128 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009ABE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009ABE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0009AC9B; /* ja: above (unsigned >) */

loc_0009ABEE: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x9ACA0); /* switch: 13 entries, 8 targets */
    if (_jt == 0x0009ABF5u) goto loc_0009ABF5;
    if (_jt == 0x0009AC0Fu) goto loc_0009AC0F;
    if (_jt == 0x0009AC27u) goto loc_0009AC27;
    if (_jt == 0x0009AC3Fu) goto loc_0009AC3F;
    if (_jt == 0x0009AC57u) goto loc_0009AC57;
    if (_jt == 0x0009AC6Fu) goto loc_0009AC6F;
    if (_jt == 0x0009AC85u) goto loc_0009AC85;
    if (_jt == 0x0009AC9Bu) goto loc_0009AC9B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0009ABF5: ;
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x0009ABFCu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009ABFC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AC9B; /* je: equal / zero */

loc_0009AC07: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0009A8D0(); return; /* tail jmp 0x0009A8D0 */

loc_0009AC0F: ;
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x0009AC16u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009AC16: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AC9B; /* je: equal / zero */

loc_0009AC1D: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0009AC25u); RECOMP_ABI_CALL(0x0009A940u, sub_0009A940); /* call 0x0009A940 */

loc_0009AC25: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009AC27: ;
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x0009AC2Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009AC2E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AC9B; /* je: equal / zero */

loc_0009AC35: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0009AC3Du); RECOMP_ABI_CALL(0x0009A9B0u, sub_0009A9B0); /* call 0x0009A9B0 */

loc_0009AC3D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009AC3F: ;
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x0009AC46u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009AC46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AC9B; /* je: equal / zero */

loc_0009AC4D: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0009AC55u); RECOMP_ABI_CALL(0x0009AB70u, sub_0009AB70); /* call 0x0009AB70 */

loc_0009AC55: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009AC57: ;
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x0009AC5Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009AC5E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AC9B; /* je: equal / zero */

loc_0009AC65: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0009AC6Du); RECOMP_ABI_CALL(0x0009AA90u, sub_0009AA90); /* call 0x0009AA90 */

loc_0009AC6D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009AC6F: ;
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x0009AC76u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009AC76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AC9B; /* je: equal / zero */

loc_0009AC7D: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0009AB00(); return; /* tail jmp 0x0009AB00 */

loc_0009AC85: ;
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x0009AC8Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009AC8C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AC9B; /* je: equal / zero */

loc_0009AC93: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0009AA20(); return; /* tail jmp 0x0009AA20 */

loc_0009AC9B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0009AD05; /* je: equal / zero */

loc_0009ACFC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009AD02u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0009AD02: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009AD05: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009ACE0
 * Original: 0x0009ACE0 - 0x0009AD0B (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009ACE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009ACE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1BE080;
    MEM32(esi + 0x5C) = 0x1BE078;
    PUSH32(esp, 0x0009ACF5u); RECOMP_ABI_CALL(0x000BCBB0u, sub_000BCBB0); /* call 0x000BCBB0 */

loc_0009ACF5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009AD05; /* je: equal / zero */

loc_0009ACFC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009AD02u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0009AD02: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009AD05: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009AD10
 * Original: 0x0009AD10 - 0x0009AD60 (80 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AD10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009AD10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    ebx = ecx;
    PUSH32(esp, 0x0009AD1Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009AD1B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AD52; /* je: equal / zero */

loc_0009AD24: ;
    ecx = esi;
    PUSH32(esp, 0x0009AD2Bu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009AD2B: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE110;
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 0x14) = 0;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009AD4Fu); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009AD4F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0009AD52: ;
    ecx = MEM32(ebx + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009AD5Du); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009AD5D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009AD60
 * Original: 0x0009AD60 - 0x0009ADA0 (64 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009AD60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    edi = ecx;
    PUSH32(esp, 0x0009AD6Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009AD6B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AD93; /* je: equal / zero */

loc_0009AD74: ;
    ecx = esi;
    PUSH32(esp, 0x0009AD7Bu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009AD7B: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE0BC;
    PUSH32(esp, 0x0009AD90u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009AD90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009AD93: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0009AD9Du); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009AD9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009ADA0
 * Original: 0x0009ADA0 - 0x0009AE21 (129 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009ADA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009ADA0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AE1D; /* je: equal / zero */

loc_0009ADAA: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x10) = esi;
    ecx = MEM32(0x1D9FB8);
    edx = MEM32(ecx + 4);
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009ADD0; /* jne: not equal / not zero */

loc_0009ADC1: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009ADCBu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009ADCB: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0009ADD0: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0009ADD7u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009ADD7: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AE11; /* je: equal / zero */

loc_0009ADE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x10);
    ecx = esi;
    PUSH32(esp, 0x0009ADEBu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009ADEB: ;
    MEM32(esi + 0x10) = ebx;
    POP32(esp, ebx);
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE110;
    MEM32(esi + 0x14) = 0;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009AE0Cu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009AE0C: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0009AE11: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009AE1Cu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009AE1C: ;
    POP32(esp, esi);

loc_0009AE1D: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009AE30
 * Original: 0x0009AE30 - 0x0009AE54 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009AE30: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1BE0E0;
    PUSH32(esp, 0x0009AE3Eu); RECOMP_ABI_CALL(0x000BC740u, sub_000BC740); /* call 0x000BC740 */

loc_0009AE3E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009AE4E; /* je: equal / zero */

loc_0009AE45: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009AE4Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0009AE4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009AE4E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009AE60
 * Original: 0x0009AE60 - 0x0009AEBE (94 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AE60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009AE60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0009AE79; /* je: equal / zero */

loc_0009AE6B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0009AEB6; /* je: equal / zero */

loc_0009AE6E: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0009AEB4; /* jne: not equal / not zero */

loc_0009AE73: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

loc_0009AE79: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AEB6; /* je: equal / zero */

loc_0009AE80: ;
    PUSH32(esp, 0x18);
    MEM32(esi + 0x24) = 1;
    PUSH32(esp, 0x0009AE8Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009AE8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AEA9; /* je: equal / zero */

loc_0009AE95: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x0009AE9Eu); RECOMP_ABI_CALL(0x0009A8A0u, sub_0009A8A0); /* call 0x0009A8A0 */

loc_0009AE9E: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009AEA7u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009AEA7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009AEA9: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009AEB4u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009AEB4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009AEB6: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0009A750(); return; /* tail jmp 0x0009A750 */

}

/**
 * sub_0009AEC0
 * Original: 0x0009AEC0 - 0x0009AFC0 (256 bytes, 95 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009AEC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    edx = 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009AFAE; /* jne: not equal / not zero */

loc_0009AED7: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009AF69; /* jne: not equal / not zero */

loc_0009AEE3: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AF0E; /* je: equal / zero */

loc_0009AEEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AF0E; /* je: equal / zero */

loc_0009AEF0: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0x24) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0009AEFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009AEFBu); } /* indirect call */
    }

loc_0009AEFE: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0009AF05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009AF02u); } /* indirect call */
    }

loc_0009AF05: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009AF0E: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AF59; /* je: equal / zero */

loc_0009AF15: ;
    PUSH32(esp, 0x18);
    MEM32(esi + 0x24) = 1;
    PUSH32(esp, 0x0009AF23u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009AF23: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AF45; /* je: equal / zero */

loc_0009AF2A: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x0009AF33u); RECOMP_ABI_CALL(0x0009A8A0u, sub_0009A8A0); /* call 0x0009A8A0 */

loc_0009AF33: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009AF3Cu); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009AF3C: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009AF45: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009AF50u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009AF50: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009AF59: ;
    ecx = esi;
    PUSH32(esp, 0x0009AF60u); RECOMP_ABI_CALL(0x0009A750u, sub_0009A750); /* call 0x0009A750 */

loc_0009AF60: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009AF69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009AFAE; /* jne: not equal / not zero */

loc_0009AF6E: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AF96; /* je: equal / zero */

loc_0009AF76: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AF96; /* je: equal / zero */

loc_0009AF7B: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0x24) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0009AF89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009AF86u); } /* indirect call */
    }

loc_0009AF89: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0009AF90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009AF8Du); } /* indirect call */
    }

loc_0009AF90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009AF96: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    MEM32(esi + 0x24) = edx;
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009AFAEu); RECOMP_ABI_CALL(0x0008BA80u, sub_0008BA80); /* call 0x0008BA80 */

loc_0009AFAE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_0009AFC0(); return; /* fallthrough 0x0009AFC0 */

}

/**
 * sub_0009AFC0
 * Original: 0x0009AFC0 - 0x0009AFD0 (16 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AFC0(void)
{

loc_0009AFC0: ;
    eax = MEM32(0x1D3EBC);
    MEM32(eax + 0x150) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0009AFD0
 * Original: 0x0009AFD0 - 0x0009B070 (160 bytes, 53 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AFD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009AFD0: ;
    ecx = MEM32(0x1DA030);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0009AFDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009AFDAu); } /* indirect call */
    }

loc_0009AFDD: ;
    ecx = MEM32(0x1DA050);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AFF7; /* je: equal / zero */

loc_0009AFE7: ;
    PUSH32(esp, 0x0009AFECu); RECOMP_ABI_CALL(0x00047520u, sub_00047520); /* call 0x00047520 */

loc_0009AFEC: ;
    ecx = MEM32(0x1DA050);
    PUSH32(esp, 0x0009AFF7u); RECOMP_ABI_CALL(0x000474C0u, sub_000474C0); /* call 0x000474C0 */

loc_0009AFF7: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009B02D; /* jle: less or equal (signed <=) */

loc_0009B006: ;
    edx = MEM32(eax + 0x58);
    ecx = ZX8(LO8(ebx));
    ecx = MEM32(edx + ecx * 4);
    ecx = MEM32(ecx + 0xD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B025; /* je: equal / zero */

loc_0009B019: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0009B020u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B01Du); } /* indirect call */
    }

loc_0009B020: ;
    eax = MEM32(0x1D9FB8);

loc_0009B025: ;
    ecx = MEM32(eax + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009B006; /* jl: less (signed <) */

loc_0009B02D: ;
    eax = MEM32(0x1DA878);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0009B058; /* jne: not equal / not zero */

loc_0009B037: ;
    PUSH32(esp, 0x360);
    PUSH32(esp, 0x0009B041u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009B041: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B051; /* je: equal / zero */

loc_0009B048: ;
    ecx = eax;
    PUSH32(esp, 0x0009B04Fu); RECOMP_ABI_CALL(0x000B0870u, sub_000B0870); /* call 0x000B0870 */

loc_0009B04F: ;
    goto loc_0009B053;

loc_0009B051: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009B053: ;
    MEM32(0x1DA878) = eax;

loc_0009B058: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0009B061u); RECOMP_ABI_CALL(0x000AFFB0u, sub_000AFFB0); /* call 0x000AFFB0 */

loc_0009B061: ;
    MEM32(0x1D9FE4) = 1;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0009B070(); return; /* fallthrough 0x0009B070 */

}

/**
 * sub_0009B070
 * Original: 0x0009B070 - 0x0009B120 (176 bytes, 53 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B070: ;
    ecx = MEM32(0x1DA030);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0009B07Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B07Au); } /* indirect call */
    }

loc_0009B07D: ;
    ecx = MEM32(0x1DA050);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B097; /* je: equal / zero */

loc_0009B087: ;
    PUSH32(esp, 0x0009B08Cu); RECOMP_ABI_CALL(0x00047540u, sub_00047540); /* call 0x00047540 */

loc_0009B08C: ;
    ecx = MEM32(0x1DA050);
    PUSH32(esp, 0x0009B097u); RECOMP_ABI_CALL(0x000474E0u, sub_000474E0); /* call 0x000474E0 */

loc_0009B097: ;
    edx = MEM32(0x1D9FB8);
    eax = MEM32(edx + 0x54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009B0E1; /* jle: less or equal (signed <=) */

loc_0009B0A7: ;
    eax = MEM32(edx + 0x58);
    ecx = ZX8(LO8(ebx));
    eax = MEM32(eax + ecx * 4);
    ecx = MEM32(eax + 0xC8);
    ecx = MEM32(ecx + 0x48);
    _fa = (uint32_t)(MEM32(ecx + 0x254)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x254), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B0D9; /* je: equal / zero */

loc_0009B0C2: ;
    ecx = MEM32(eax + 0xD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B0D9; /* je: equal / zero */

loc_0009B0CC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0009B0D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B0D0u); } /* indirect call */
    }

loc_0009B0D3: ;
    edx = MEM32(0x1D9FB8);

loc_0009B0D9: ;
    eax = MEM32(edx + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009B0A7; /* jl: less (signed <) */

loc_0009B0E1: ;
    eax = MEM32(0x1DA878);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0009B10C; /* jne: not equal / not zero */

loc_0009B0EB: ;
    PUSH32(esp, 0x360);
    PUSH32(esp, 0x0009B0F5u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009B0F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B105; /* je: equal / zero */

loc_0009B0FC: ;
    ecx = eax;
    PUSH32(esp, 0x0009B103u); RECOMP_ABI_CALL(0x000B0870u, sub_000B0870); /* call 0x000B0870 */

loc_0009B103: ;
    goto loc_0009B107;

loc_0009B105: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009B107: ;
    MEM32(0x1DA878) = eax;

loc_0009B10C: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x0009B115u); RECOMP_ABI_CALL(0x000AFFB0u, sub_000AFFB0); /* call 0x000AFFB0 */

loc_0009B115: ;
    MEM32(0x1D9FE4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0009B120
 * Original: 0x0009B120 - 0x0009B160 (64 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009B120: ;
    eax = MEM32(0x1DA878);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009B14A; /* jne: not equal / not zero */

loc_0009B129: ;
    PUSH32(esp, 0x360);
    PUSH32(esp, 0x0009B133u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009B133: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B143; /* je: equal / zero */

loc_0009B13A: ;
    ecx = eax;
    PUSH32(esp, 0x0009B141u); RECOMP_ABI_CALL(0x000B0870u, sub_000B0870); /* call 0x000B0870 */

loc_0009B141: ;
    goto loc_0009B145;

loc_0009B143: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009B145: ;
    MEM32(0x1DA878) = eax;

loc_0009B14A: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0009B153u); RECOMP_ABI_CALL(0x000AFFB0u, sub_000AFFB0); /* call 0x000AFFB0 */

loc_0009B153: ;
    MEM32(0x1D9FE4) = 1;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0009B160(); return; /* fallthrough 0x0009B160 */

}

/**
 * sub_0009B160
 * Original: 0x0009B160 - 0x0009B19E (62 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B160: ;
    eax = MEM32(0x1DA878);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009B18A; /* jne: not equal / not zero */

loc_0009B169: ;
    PUSH32(esp, 0x360);
    PUSH32(esp, 0x0009B173u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009B173: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B183; /* je: equal / zero */

loc_0009B17A: ;
    ecx = eax;
    PUSH32(esp, 0x0009B181u); RECOMP_ABI_CALL(0x000B0870u, sub_000B0870); /* call 0x000B0870 */

loc_0009B181: ;
    goto loc_0009B185;

loc_0009B183: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009B185: ;
    MEM32(0x1DA878) = eax;

loc_0009B18A: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x0009B193u); RECOMP_ABI_CALL(0x000AFFB0u, sub_000AFFB0); /* call 0x000AFFB0 */

loc_0009B193: ;
    MEM32(0x1D9FE4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0009B1A0
 * Original: 0x0009B1A0 - 0x0009B1BF (31 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B1A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009B1A0: ;
    eax = MEM32(0x1D3F18);
    edx = MEM32(eax + 0x48);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009B1BC; /* jne: not equal / not zero */

loc_0009B1AC: ;
    ecx = MEM32(ecx + 4);
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_000BCA10(); return; /* tail jmp 0x000BCA10 */

loc_0009B1BC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009B1C0
 * Original: 0x0009B1C0 - 0x0009B254 (148 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B1C0: ;
    eax = MEM32(0x1D74C4);
    MEM32(ecx + 0x10) = eax;
    ecx = MEM32(0x1DA030);
    PUSH32(esp, ebx);
    MEM32(0x1D74C4) = 6;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0009B1E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B1DDu); } /* indirect call */
    }

loc_0009B1E0: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x54);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009B215; /* jle: less or equal (signed <=) */

loc_0009B1EE: ;
    edi = edi;

loc_0009B1F0: ;
    edx = MEM32(eax + 0x58);
    ecx = ZX8(LO8(ebx));
    eax = MEM32(edx + ecx * 4);
    ecx = MEM32(eax + 0xB4);
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0009B208u); RECOMP_ABI_CALL(0x0007E810u, sub_0007E810); /* call 0x0007E810 */

loc_0009B208: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009B1F0; /* jl: less (signed <) */

loc_0009B215: ;
    eax = MEM32(0x1DA878);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0009B240; /* jne: not equal / not zero */

loc_0009B21F: ;
    PUSH32(esp, 0x360);
    PUSH32(esp, 0x0009B229u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009B229: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B239; /* je: equal / zero */

loc_0009B230: ;
    ecx = eax;
    PUSH32(esp, 0x0009B237u); RECOMP_ABI_CALL(0x000B0870u, sub_000B0870); /* call 0x000B0870 */

loc_0009B237: ;
    goto loc_0009B23B;

loc_0009B239: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009B23B: ;
    MEM32(0x1DA878) = eax;

loc_0009B240: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0009B249u); RECOMP_ABI_CALL(0x000AFFB0u, sub_000AFFB0); /* call 0x000AFFB0 */

loc_0009B249: ;
    MEM32(0x1D9FE4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0009B260
 * Original: 0x0009B260 - 0x0009B2E8 (136 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B260: ;
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(0x1DA030);
    PUSH32(esp, ebx);
    MEM32(0x1D74C4) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0009B276u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B273u); } /* indirect call */
    }

loc_0009B276: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x54);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009B2A9; /* jle: less or equal (signed <=) */

loc_0009B284: ;
    edx = MEM32(eax + 0x58);
    ecx = ZX8(LO8(ebx));
    eax = MEM32(edx + ecx * 4);
    ecx = MEM32(eax + 0xB4);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0009B29Cu); RECOMP_ABI_CALL(0x0007E810u, sub_0007E810); /* call 0x0007E810 */

loc_0009B29C: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009B284; /* jl: less (signed <) */

loc_0009B2A9: ;
    eax = MEM32(0x1DA878);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0009B2D4; /* jne: not equal / not zero */

loc_0009B2B3: ;
    PUSH32(esp, 0x360);
    PUSH32(esp, 0x0009B2BDu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009B2BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B2CD; /* je: equal / zero */

loc_0009B2C4: ;
    ecx = eax;
    PUSH32(esp, 0x0009B2CBu); RECOMP_ABI_CALL(0x000B0870u, sub_000B0870); /* call 0x000B0870 */

loc_0009B2CB: ;
    goto loc_0009B2CF;

loc_0009B2CD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009B2CF: ;
    MEM32(0x1DA878) = eax;

loc_0009B2D4: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x0009B2DDu); RECOMP_ABI_CALL(0x000AFFB0u, sub_000AFFB0); /* call 0x000AFFB0 */

loc_0009B2DD: ;
    MEM32(0x1D9FE4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0009B2F0
 * Original: 0x0009B2F0 - 0x0009B333 (67 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B2F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 8 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0009B32C; /* jne: not equal / not zero */

loc_0009B2FE: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BDC3C);
    PUSH32(esp, 0x0009B30Bu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009B30B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009B32C; /* jne: not equal / not zero */

loc_0009B312: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009B32C; /* jne: not equal / not zero */

loc_0009B318: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009B322u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009B322: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009B32C: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009B340
 * Original: 0x0009B340 - 0x0009B392 (82 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B340: ;
    eax = MEM32(0x1D3F18);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B38E; /* je: equal / zero */

loc_0009B34F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0009B357u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009B357: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B382; /* je: equal / zero */

loc_0009B360: ;
    ecx = esi;
    PUSH32(esp, 0x0009B367u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009B367: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDB60;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009B37Du); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009B37D: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0009B382: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009B38Du); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009B38D: ;
    POP32(esp, esi);

loc_0009B38E: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009B3A0
 * Original: 0x0009B3A0 - 0x0009B6E4 (836 bytes, 247 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009B3A0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x1D9FB8);
    eax = MEM32(ecx + 0x14);
    edx = MEM32(eax + 0x48);
    eax = MEM32(edx + 0x128);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_0009B4B6; /* jbe: below or equal (unsigned <=) */

loc_0009B3D0: ;
    ebp = 0x14;

loc_0009B3D5: ;
    esi = MEM32(ecx + ebp);
    edx = MEM32(esi + 0x48);
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM32(edx + 0x244)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x244), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009B49F; /* jge: greater or equal (signed >=) */

loc_0009B3EB: ;
    ebx = MEM32(esi + 0x5C);
    edi = edx;
    fp_push(MEMF(edi + 0x13C)); /* fld float */
    ecx = MEM32(edi + 0x25C);
    MEM32(esp + 0x14) = ecx;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x14) - fp_top()); /* fsubr dword ptr [esp + 0x14] */
    MEM32(esp + 0x20) = 0x3DCCCCCD;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1AEB20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = esp + 0x10;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0009B429; /* jnp: not parity */

loc_0009B425: ;
    eax = esp + 0x20;

loc_0009B429: ;
    edx = MEM32(eax);
    ecx = edi;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x0009B436u); RECOMP_ABI_CALL(0x000ABC30u, sub_000ABC30); /* call 0x000ABC30 */

loc_0009B436: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(0x1C91D0)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x14)); /* fdiv dword ptr [esp + 0x14] */
    ecx = edi;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1DA05C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0009B465u); RECOMP_ABI_CALL(0x000ABC50u, sub_000ABC50); /* call 0x000ABC50 */

loc_0009B465: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0009B46Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B469u); } /* indirect call */
    }

loc_0009B46C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009B499; /* jne: not equal / not zero */

loc_0009B470: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0009B477u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B474u); } /* indirect call */
    }

loc_0009B477: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = eax;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0009B489; /* jge: greater or equal (signed >=) */

loc_0009B483: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D8)); /* fadd dword ptr [0x1c91d8] */

loc_0009B489: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, 0x0009B496u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0009B496: ;
    MEM32(ebx + 8) = eax;

loc_0009B499: ;
    ecx = MEM32(0x1D9FB8);

loc_0009B49F: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0009B3D5; /* jb: below (unsigned <) */

loc_0009B4B6: ;
    eax = MEM32(ecx + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = ebp;
    if (CMP_BE(_fa, _fb)) goto loc_0009B6DC; /* jbe: below or equal (unsigned <=) */

loc_0009B4D0: ;
    esi = 0x14;

loc_0009B4D5: ;
    ecx = MEM32(esi + ecx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0009B4DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B4DAu); } /* indirect call */
    }

loc_0009B4DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B506; /* je: equal / zero */

loc_0009B4E1: ;
    ecx = MEM32(0x1D9FB8);
    edx = MEM32(esi + ecx);
    ecx = MEM32(edx + 0x5C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0009B4F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B4EFu); } /* indirect call */
    }

loc_0009B4F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009B4FC; /* jbe: below or equal (unsigned <=) */

loc_0009B4F6: ;
    MEM32(esp + 0x14) = eax;
    ebx = eax;

loc_0009B4FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009B506; /* jae: above or equal (unsigned >=) */

loc_0009B500: ;
    MEM32(esp + 0x10) = eax;
    ebp = eax;

loc_0009B506: ;
    ecx = MEM32(0x1D9FB8);
    eax = MEM32(ecx + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009B4D5; /* jb: below (unsigned <) */

loc_0009B517: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009B6DC; /* jae: above or equal (unsigned >=) */

loc_0009B51F: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    eax = MEM32(0x1D9BA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(ecx + 0x34);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_0009B559; /* jne: not equal / not zero */

loc_0009B532: ;
    PUSH32(esp, 0x33F8);
    PUSH32(esp, 0x0009B53Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009B53C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B54C; /* je: equal / zero */

loc_0009B543: ;
    ecx = eax;
    PUSH32(esp, 0x0009B54Au); RECOMP_ABI_CALL(0x00095660u, sub_00095660); /* call 0x00095660 */

loc_0009B54A: ;
    goto loc_0009B54E;

loc_0009B54C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009B54E: ;
    ecx = MEM32(0x1D9FB8);
    MEM32(0x1D9BA8) = eax;

loc_0009B559: ;
    ebx = MEM32(ecx + 0x3C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2BC);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    ecx = esi + eax + 4;
    PUSH32(esp, 0x0009B572u); RECOMP_ABI_CALL(0x000949F0u, sub_000949F0); /* call 0x000949F0 */

loc_0009B572: ;
    PUSH32(esp, 0x0009B577u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0009B577: ;
    ecx = MEM32(0x1D9FB8);
    esi = MEM32(ecx + 0x34);
    edi = eax;
    eax = MEM32(0x1D9BA8);
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x20) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0009B5B3; /* jne: not equal / not zero */

loc_0009B592: ;
    PUSH32(esp, 0x33F8);
    PUSH32(esp, 0x0009B59Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009B59C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B5AC; /* je: equal / zero */

loc_0009B5A3: ;
    ecx = eax;
    PUSH32(esp, 0x0009B5AAu); RECOMP_ABI_CALL(0x00095660u, sub_00095660); /* call 0x00095660 */

loc_0009B5AA: ;
    goto loc_0009B5AE;

loc_0009B5AC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009B5AE: ;
    MEM32(0x1D9BA8) = eax;

loc_0009B5B3: ;
    edx = MEM32(0x1D9FB8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2BC);
    ebx = MEM32(edx + 0x3C);
    PUSH32(esp, 3);
    PUSH32(esp, ebp);
    ecx = esi + eax + 4;
    PUSH32(esp, 0x0009B5CEu); RECOMP_ABI_CALL(0x000949F0u, sub_000949F0); /* call 0x000949F0 */

loc_0009B5CE: ;
    PUSH32(esp, 0x0009B5D3u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0009B5D3: ;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB20)); /* fmul dword ptr [0x1aeb20] */
    PUSH32(esp, ecx);
    ecx = 0x1CEFD8;
    MEM32(esp + 0x20) = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009B5F4u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_0009B5F4: ;
    PUSH32(esp, 0x0009B5F9u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0009B5F9: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    ebp = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB20)); /* fmul dword ptr [0x1aeb20] */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0x1CEFD8;
    MEM32(esp + 0x24) = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009B61Du); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_0009B61D: ;
    PUSH32(esp, 0x0009B622u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0009B622: ;
    edi = MEM32(esp + 0x10);
    ebx = eax;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_0009B6DC; /* jbe: below or equal (unsigned <=) */

loc_0009B644: ;
    ebp = 0x14;
    /* nop */

loc_0009B650: ;
    eax = MEM32(eax + ebp);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0009B65Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B657u); } /* indirect call */
    }

loc_0009B65A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B6C0; /* je: equal / zero */

loc_0009B65E: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + ebp);
    esi = MEM32(ecx + 0x5C);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0009B670u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B66Du); } /* indirect call */
    }

loc_0009B670: ;
    edi = eax;
    eax = MEM32(esp + 0x10);
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x24) = ecx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0009B68C; /* jge: greater or equal (signed >=) */

loc_0009B686: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D8)); /* fadd dword ptr [0x1c91d8] */

loc_0009B68C: ;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x24) = edx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0009B6A4; /* jge: greater or equal (signed >=) */

loc_0009B69E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D8)); /* fadd dword ptr [0x1c91d8] */

loc_0009B6A4: ;
    eax = MEM32(esp + 0x20);
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x1C)); /* fimul dword ptr [esp + 0x1c] */
    PUSH32(esp, 0x0009B6B9u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0009B6B9: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;

loc_0009B6C0: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(0x1D9FB8);
    edx = MEM32(eax + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0009B650; /* jb: below (unsigned <) */

loc_0009B6DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009B6F0
 * Original: 0x0009B6F0 - 0x0009B709 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B6F0(void)
{

loc_0009B6F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009B6F8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009B6F8: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE3A0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009B710
 * Original: 0x0009B710 - 0x0009B72B (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0009B710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009B710: ;
    PUSH32(esp, 0x6A0);
    PUSH32(esp, 0x0009B71Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009B71A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B728; /* je: equal / zero */

loc_0009B721: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00043BE0(); return; /* tail jmp 0x00043BE0 */

loc_0009B728: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009B730
 * Original: 0x0009B730 - 0x0009B73E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B730(void)
{

loc_0009B730: ;
    ecx = MEM32(0x1DA03C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0009B73Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B73Au); } /* indirect call */
    }

loc_0009B73D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009B740
 * Original: 0x0009B740 - 0x0009B7CE (142 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B740: ;
    eax = MEM32(0x1D9FB8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009B772; /* jbe: below or equal (unsigned <=) */

loc_0009B753: ;
    edx = MEM32(eax + 0x58);
    ecx = ZX8(LO8(ebx));
    ecx = MEM32(edx + ecx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B76A; /* je: equal / zero */

loc_0009B760: ;
    PUSH32(esp, 0x0009B765u); RECOMP_ABI_CALL(0x0009D9D0u, sub_0009D9D0); /* call 0x0009D9D0 */

loc_0009B765: ;
    eax = MEM32(0x1D9FB8);

loc_0009B76A: ;
    ecx = MEM32(eax + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009B753; /* jb: below (unsigned <) */

loc_0009B772: ;
    ecx = edi;
    PUSH32(esp, 0x0009B779u); RECOMP_ABI_CALL(0x0009B3A0u, sub_0009B3A0); /* call 0x0009B3A0 */

loc_0009B779: ;
    ecx = MEM32(0x1DA034);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0009B787u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B781u); } /* indirect call */
    }

loc_0009B787: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0009B78Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009B78E: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B7BF; /* je: equal / zero */

loc_0009B797: ;
    ecx = esi;
    PUSH32(esp, 0x0009B79Eu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009B79E: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE328;
    MEM32(esi + 0x10) = 0;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009B7BBu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009B7BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0009B7BF: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009B7CAu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009B7CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009B7D0
 * Original: 0x0009B7D0 - 0x0009B7F0 (32 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009B7D0: ;
    PUSH32(esp, 0x0009B7D5u); RECOMP_ABI_CALL(0x0009FE90u, sub_0009FE90); /* call 0x0009FE90 */

loc_0009B7D5: ;
    ecx = MEM32(0x1DA034);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0009B7E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B7DFu); } /* indirect call */
    }

loc_0009B7E2: ;
    ecx = MEM32(0x1DA034);
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x80)); return; /* indirect tail jmp */

}

/**
 * sub_0009B7F0
 * Original: 0x0009B7F0 - 0x0009B860 (112 bytes, 42 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B7F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009B85A; /* jne: not equal / not zero */

loc_0009B7FE: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B3904);
    PUSH32(esp, 0x0009B80Bu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009B80B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009B85A; /* jne: not equal / not zero */

loc_0009B812: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x0009B81Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009B81A: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B845; /* je: equal / zero */

loc_0009B823: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0009B82Cu); RECOMP_ABI_CALL(0x0009A6C0u, sub_0009A6C0); /* call 0x0009A6C0 */

loc_0009B82C: ;
    MEM32(esi) = 0x1BE34C;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009B83Bu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009B83B: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0009B845: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009B850u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009B850: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0009B85A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009B860
 * Original: 0x0009B860 - 0x0009B880 (32 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009B860: ;
    PUSH32(esp, 0x0009B865u); RECOMP_ABI_CALL(0x0009FE90u, sub_0009FE90); /* call 0x0009FE90 */

loc_0009B865: ;
    ecx = MEM32(0x1DA038);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0009B872u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B86Fu); } /* indirect call */
    }

loc_0009B872: ;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0009B880(); return; /* fallthrough 0x0009B880 */

}

/**
 * sub_0009B880
 * Original: 0x0009B880 - 0x0009B88E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B880(void)
{

loc_0009B880: ;
    ecx = MEM32(0x1DA038);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0009B88Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B88Au); } /* indirect call */
    }

loc_0009B88D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009B890
 * Original: 0x0009B890 - 0x0009B96D (221 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B890: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0009B966; /* jne: not equal / not zero */

loc_0009B8A3: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B2E78);
    PUSH32(esp, 0x0009B8B0u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009B8B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009B940; /* jne: not equal / not zero */

loc_0009B8BB: ;
    ecx = MEM32(0x1D9FB8);
    MEM32(ecx + 0x44) = eax;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009B8EE; /* jle: less or equal (signed <=) */

loc_0009B8D3: ;
    eax = MEM32(eax + 0x58);
    edx = ZX8(LO8(ebx));
    ecx = MEM32(eax + edx * 4);
    PUSH32(esp, 0x0009B8E1u); RECOMP_ABI_CALL(0x0009EA00u, sub_0009EA00); /* call 0x0009EA00 */

loc_0009B8E1: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009B8D3; /* jl: less (signed <) */

loc_0009B8EE: ;
    PUSH32(esp, 0x0009B8F3u); RECOMP_ABI_CALL(0x000A00E0u, sub_000A00E0); /* call 0x000A00E0 */

loc_0009B8F3: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0009B8FAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009B8FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0009B92B; /* je: equal / zero */

loc_0009B904: ;
    ecx = esi;
    PUSH32(esp, 0x0009B90Bu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009B90B: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE37C;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009B921u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009B921: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009B92B: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009B936u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009B936: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009B940: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B2E68);
    PUSH32(esp, 0x0009B94Du); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009B94D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009B966; /* jne: not equal / not zero */

loc_0009B954: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0009B95Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B959u); } /* indirect call */
    }

loc_0009B95C: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009B966: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009B970
 * Original: 0x0009B970 - 0x0009B98D (29 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B970(void)
{

loc_0009B970: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x1DA034);
    MEM32(esi + 0x10) = 0;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0009B988u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B982u); } /* indirect call */
    }

loc_0009B988: ;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009B990
 * Original: 0x0009B990 - 0x0009BA24 (148 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B990: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0009B9E8; /* je: equal / zero */

loc_0009B99D: ;
    PUSH32(esp, 0x0009B9A2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009B9A2: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B9C1; /* je: equal / zero */

loc_0009B9AB: ;
    ecx = esi;
    PUSH32(esp, 0x0009B9B2u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009B9B2: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE37C;
    goto loc_0009B9C3;

loc_0009B9C1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009B9C3: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009B9CCu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009B9CC: ;
    eax = MEM32(0x1D9FB8);
    MEM32(eax + 0x44) = 1;
    ecx = MEM32(0x1DA030);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0009B9E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B9E2u); } /* indirect call */
    }

loc_0009B9E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009B9E8: ;
    PUSH32(esp, 0x0009B9EDu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009B9ED: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BA16; /* je: equal / zero */

loc_0009B9F6: ;
    ecx = esi;
    PUSH32(esp, 0x0009B9FDu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009B9FD: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE3C4;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009BA13u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009BA13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009BA16: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009BA21u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009BA21: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009BA30
 * Original: 0x0009BA30 - 0x0009BA70 (64 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BA30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0x0009BA3Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009BA3B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BA63; /* je: equal / zero */

loc_0009BA44: ;
    ecx = esi;
    PUSH32(esp, 0x0009BA4Bu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009BA4B: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE37C;
    PUSH32(esp, 0x0009BA60u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009BA60: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009BA63: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0009BA6Du); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009BA6D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009BA70
 * Original: 0x0009BA70 - 0x0009BAB7 (71 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BA70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edi = ecx;
    PUSH32(esp, 0x0009BA7Bu); RECOMP_ABI_CALL(0x0009FFA0u, sub_0009FFA0); /* call 0x0009FFA0 */

loc_0009BA7B: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0009BA82u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009BA82: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BAAA; /* je: equal / zero */

loc_0009BA8B: ;
    ecx = esi;
    PUSH32(esp, 0x0009BA92u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009BA92: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE3A0;
    PUSH32(esp, 0x0009BAA7u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009BAA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009BAAA: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0009BAB4u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009BAB4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009BAC0
 * Original: 0x0009BAC0 - 0x0009BB00 (64 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BAC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0x0009BACBu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009BACB: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BAF3; /* je: equal / zero */

loc_0009BAD4: ;
    ecx = esi;
    PUSH32(esp, 0x0009BADBu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009BADB: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE3C4;
    PUSH32(esp, 0x0009BAF0u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009BAF0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009BAF3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0009BAFDu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009BAFD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009BB00
 * Original: 0x0009BB00 - 0x0009BB90 (144 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009BB00: ;
    edx = MEM32(0x1D9FB8);
    eax = MEM32(edx + 0x44);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BB21; /* je: equal / zero */

loc_0009BB13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BB21; /* je: equal / zero */

loc_0009BB18: ;
    eax = MEM32(0x1D73E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009BB26; /* jne: not equal / not zero */

loc_0009BB21: ;
    ecx = 1;

loc_0009BB26: ;
    eax = MEM32(edx + 0x58);
    edx = MEM32(eax);
    eax = MEM32(edx + 0xB4);
    edx = MEM32(eax + 0x128);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009BB3F; /* jne: not equal / not zero */

loc_0009BB3B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BB7E; /* je: equal / zero */

loc_0009BB3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0009BB47u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009BB47: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BB72; /* je: equal / zero */

loc_0009BB50: ;
    ecx = esi;
    PUSH32(esp, 0x0009BB57u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009BB57: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE430;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009BB6Du); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009BB6D: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0009BB72: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009BB7Du); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009BB7D: ;
    POP32(esp, esi);

loc_0009BB7E: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_0009BB90(); return; /* fallthrough 0x0009BB90 */

}

/**
 * sub_0009BB90
 * Original: 0x0009BB90 - 0x0009BC0C (124 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009BB90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 8 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0009BC05; /* jne: not equal / not zero */

loc_0009BB9E: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BDC3C);
    PUSH32(esp, 0x0009BBABu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009BBAB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009BC05; /* jne: not equal / not zero */

loc_0009BBB2: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009BC05; /* jne: not equal / not zero */

loc_0009BBB9: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0009BBC0u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009BBC0: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BBF0; /* je: equal / zero */

loc_0009BBC9: ;
    ecx = esi;
    PUSH32(esp, 0x0009BBD0u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009BBD0: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE430;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009BBE6u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009BBE6: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009BBF0: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009BBFBu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009BBFB: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009BC05: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009BC10
 * Original: 0x0009BC10 - 0x0009BC1C (12 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009BC10: ;
    MEM32(ecx + 0x10) = 0;
    g_seh_ebp = ebp; sub_00097D50(); return; /* tail jmp 0x00097D50 */

}

/**
 * sub_0009BC20
 * Original: 0x0009BC20 - 0x0009BF60 (832 bytes, 261 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009BC20: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x1D3F18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0009BC7F; /* je: equal / zero */

loc_0009BC37: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0009BC3Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009BC3E: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BC6C; /* je: equal / zero */

loc_0009BC47: ;
    ecx = esi;
    PUSH32(esp, 0x0009BC4Eu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009BC4E: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BDB60;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009BC64u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009BC64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009BC6C: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009BC77u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009BC77: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009BC7F: ;
    eax = MEM32(0x1D9FB8);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = 1;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x20) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0009BE31; /* jbe: below or equal (unsigned <=) */

loc_0009BCA6: ;
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = ecx;
    ebp = 0x14;

loc_0009BCB0: ;
    esi = MEM32(eax + ebp);
    edi = MEM32(esi + 0x48);
    edx = MEM32(edi + 0x254);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009BDC3; /* jne: not equal / not zero */

loc_0009BCC5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0009BCCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009BCC9u); } /* indirect call */
    }

loc_0009BCCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esp + 0x1C);
    if (CMP_EQ(_fa, _fb)) goto loc_0009BD02; /* je: equal / zero */

loc_0009BCD4: ;
    ecx = MEM32(esp + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_0009BD02; /* jbe: below or equal (unsigned <=) */

loc_0009BCE2: ;
    eax = MEM32(0x1D9FB8);
    ecx = esp + 0x20;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x58);
    edx = ZX8(LO8(ebx));
    ecx = MEM32(ecx + edx * 4);
    PUSH32(esp, 0x0009BD02u); RECOMP_ABI_CALL(0x0009D9E0u, sub_0009D9E0); /* call 0x0009D9E0 */

loc_0009BD02: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009BE07; /* jne: not equal / not zero */

loc_0009BD11: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009BE07; /* jbe: below or equal (unsigned <=) */

loc_0009BD1A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009BE07; /* jne: not equal / not zero */

loc_0009BD24: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0x0009BD2Cu); RECOMP_ABI_CALL(0x000ABC30u, sub_000ABC30); /* call 0x000ABC30 */

loc_0009BD2C: ;
    ecx = eax;
    PUSH32(esp, 0x0009BD33u); RECOMP_ABI_CALL(0x000AB950u, sub_000AB950); /* call 0x000AB950 */

loc_0009BD33: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009BD3Cu); RECOMP_ABI_CALL(0x000116F0u, sub_000116F0); /* call 0x000116F0 */

loc_0009BD3C: ;
    fp_push(MEMF(eax + 0x244)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    eax = MEM32(0x1D9FB8);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x1DA060) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009BDB2; /* jbe: below or equal (unsigned <=) */

loc_0009BD64: ;
    esi = 0x14;
    /* nop */

loc_0009BD70: ;
    eax = MEM32(esi + eax);
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0xB0) = ecx;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x58);
    edx = ZX8(LO8(ebx));
    edx = MEM32(ecx + edx * 4);
    ecx = MEM32(edx + 0xD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BDA7; /* je: equal / zero */

loc_0009BD95: ;
    ecx = MEM32(ecx + 0xD4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0009BDA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009BD9Fu); } /* indirect call */
    }

loc_0009BDA2: ;
    eax = MEM32(0x1D9FB8);

loc_0009BDA7: ;
    ecx = MEM32(eax + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009BD70; /* jb: below (unsigned <) */

loc_0009BDB2: ;
    ecx = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x24);
    MEM32(ecx + 0x10) = 1;
    goto loc_0009BE07;

loc_0009BDC3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009BE0C; /* jae: above or equal (unsigned >=) */

loc_0009BDC8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0009BE0C; /* jne: not equal / not zero */

loc_0009BDD5: ;
    ecx = edi;
    PUSH32(esp, 0x0009BDDCu); RECOMP_ABI_CALL(0x000ABC30u, sub_000ABC30); /* call 0x000ABC30 */

loc_0009BDDC: ;
    ecx = eax;
    PUSH32(esp, 0x0009BDE3u); RECOMP_ABI_CALL(0x000AB950u, sub_000AB950); /* call 0x000AB950 */

loc_0009BDE3: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BE05; /* je: equal / zero */

loc_0009BDEE: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1DA060)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1da060] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009BE07; /* jne: not equal / not zero */

loc_0009BDFB: ;
    MEM32(esp + 0x14) = 1;
    goto loc_0009BE07;

loc_0009BE05: ;
    fp_pop(); /* fstp st(0) */

loc_0009BE07: ;
    eax = MEM32(0x1D9FB8);

loc_0009BE0C: ;
    ecx = MEM32(eax + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x24) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_0009BCB0; /* jb: below (unsigned <) */

loc_0009BE1F: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = MEM32(esp + 0x10);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0009BE68; /* je: equal / zero */

loc_0009BE2C: ;
    ecx = 1;

loc_0009BE31: ;
    _fa = (uint32_t)(MEM32(eax + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x54), ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009BE68; /* jbe: below or equal (unsigned <=) */

loc_0009BE36: ;
    ecx = MEM32(eax + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009BE68; /* jbe: below or equal (unsigned <=) */

loc_0009BE3F: ;
    /* nop */

loc_0009BE40: ;
    MEM32(esp + 0x20) = 1;
    eax = MEM32(eax + 0x58);
    edx = ZX8(LO8(ebx));
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + edx * 4);
    PUSH32(esp, 0x0009BE5Bu); RECOMP_ABI_CALL(0x0009D9E0u, sub_0009D9E0); /* call 0x0009D9E0 */

loc_0009BE5B: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009BE40; /* jb: below (unsigned <) */

loc_0009BE68: ;
    eax = MEM32(eax + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BEBF; /* je: equal / zero */

loc_0009BE6F: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0009BF4F; /* jle: less or equal (signed <=) */

loc_0009BE75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0009BF4F; /* jg: greater (signed >) */

loc_0009BE7E: ;
    ecx = edi;
    PUSH32(esp, 0x0009BE85u); RECOMP_ABI_CALL(0x00097D50u, sub_00097D50); /* call 0x00097D50 */

loc_0009BE85: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0009BE8Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009BE8C: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BF44; /* je: equal / zero */

loc_0009BE99: ;
    ecx = esi;
    PUSH32(esp, 0x0009BEA0u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009BEA0: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE37C;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009BEB6u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009BEB6: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009BEBF: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BF4F; /* je: equal / zero */

loc_0009BECB: ;
    ecx = edi;
    PUSH32(esp, 0x0009BED2u); RECOMP_ABI_CALL(0x00097D50u, sub_00097D50); /* call 0x00097D50 */

loc_0009BED2: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x54);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009BF07; /* jle: less or equal (signed <=) */

loc_0009BEE0: ;
    edx = MEM32(eax + 0x58);
    ecx = ZX8(LO8(ebx));
    ecx = MEM32(edx + ecx * 4);
    ecx = MEM32(ecx + 0xD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BEFF; /* je: equal / zero */

loc_0009BEF3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0009BEFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009BEF7u); } /* indirect call */
    }

loc_0009BEFA: ;
    eax = MEM32(0x1D9FB8);

loc_0009BEFF: ;
    ecx = MEM32(eax + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009BEE0; /* jl: less (signed <) */

loc_0009BF07: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0009BF0Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009BF0E: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BF44; /* je: equal / zero */

loc_0009BF17: ;
    ecx = esi;
    PUSH32(esp, 0x0009BF1Eu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009BF1E: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE40C;
    MEM32(esi + 0x14) = 0;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009BF3Bu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009BF3B: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009BF44: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009BF4Fu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009BF4F: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_0009BF60(); return; /* fallthrough 0x0009BF60 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009BF60
 * Original: 0x0009BF60 - 0x0009BF79 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BF60(void)
{

loc_0009BF60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009BF68u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009BF68: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE454;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009BF80
 * Original: 0x0009BF80 - 0x0009C056 (214 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0009BF80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009BF80: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009BFD5; /* jne: not equal / not zero */

loc_0009BF93: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEMF(ebp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0009C052; /* jp: parity */

loc_0009BFAE: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + 0x10) = 0xBF800000u;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x0009BFC7u); RECOMP_ABI_CALL(0x000A0070u, sub_000A0070); /* call 0x000A0070 */

loc_0009BFC7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp;
    PUSH32(esp, 0x0009BFD1u); RECOMP_ABI_CALL(0x0009B740u, sub_0009B740); /* call 0x0009B740 */

loc_0009BFD1: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0009BFD5: ;
    ecx = MEM32(0x1DA03C);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0009BFE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009BFDFu); } /* indirect call */
    }

loc_0009BFE2: ;
    fp_push(MEMF(0x1DA060)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009C050; /* jne: not equal / not zero */

loc_0009BFF7: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009C050; /* jbe: below or equal (unsigned <=) */

loc_0009C005: ;
    PUSH32(esp, edi);
    edi = 0x14;
    goto loc_0009C010;

    /* nop */

loc_0009C010: ;
    eax = MEM32(edi + eax);
    ecx = MEM32(eax + 0x48);
    PUSH32(esp, 0x0009C01Bu); RECOMP_ABI_CALL(0x000ABC30u, sub_000ABC30); /* call 0x000ABC30 */

loc_0009C01B: ;
    ecx = eax;
    PUSH32(esp, 0x0009C022u); RECOMP_ABI_CALL(0x000AB950u, sub_000AB950); /* call 0x000AB950 */

loc_0009C022: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1DA060)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1da060] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009C034; /* jne: not equal / not zero */

loc_0009C02F: ;
    ebx = 1;

loc_0009C034: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009C010; /* jb: below (unsigned <) */

loc_0009C044: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0009C050; /* je: equal / zero */

loc_0009C049: ;
    ecx = ebp;
    PUSH32(esp, 0x0009C050u); RECOMP_ABI_CALL(0x0009B740u, sub_0009B740); /* call 0x0009B740 */

loc_0009C050: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0009C052: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009C060
 * Original: 0x0009C060 - 0x0009C098 (56 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C060: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C092; /* jne: not equal / not zero */

loc_0009C06E: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B3684);
    PUSH32(esp, 0x0009C07Bu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009C07B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C092; /* jne: not equal / not zero */

loc_0009C082: ;
    ecx = esi;
    PUSH32(esp, 0x0009C089u); RECOMP_ABI_CALL(0x0009B740u, sub_0009B740); /* call 0x0009B740 */

loc_0009C089: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009C092: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009C0A0
 * Original: 0x0009C0A0 - 0x0009C0B9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C0A0(void)
{

loc_0009C0A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009C0A8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009C0A8: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE478;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C0C0
 * Original: 0x0009C0C0 - 0x0009C1C4 (260 bytes, 77 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C0C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = ecx;
    PUSH32(esp, 0x0009C0CBu); RECOMP_ABI_CALL(0x0009FFA0u, sub_0009FFA0); /* call 0x0009FFA0 */

loc_0009C0CB: ;
    ecx = MEM32(0x1D9FB8);
    eax = MEM32(ecx + 0x44);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C0E1; /* je: equal / zero */

loc_0009C0DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C12B; /* jne: not equal / not zero */

loc_0009C0E1: ;
    eax = MEM32(ecx + 0x58);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0xD8);
    MEM32(edx) = 0;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x58);
    ecx = MEM32(ecx);
    PUSH32(esp, 0x0009C101u); RECOMP_ABI_CALL(0x0009DD60u, sub_0009DD60); /* call 0x0009DD60 */

loc_0009C101: ;
    ecx = MEM32(0x1DA040);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0009C10Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C10Bu); } /* indirect call */
    }

loc_0009C10E: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x58);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 0xD4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0009C125u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C122u); } /* indirect call */
    }

loc_0009C125: ;
    ecx = MEM32(0x1D9FB8);

loc_0009C12B: ;
    ecx = MEM32(ecx + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C138; /* je: equal / zero */

loc_0009C133: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C17E; /* jne: not equal / not zero */

loc_0009C138: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0009C13Fu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009C13F: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C15E; /* je: equal / zero */

loc_0009C148: ;
    ecx = esi;
    PUSH32(esp, 0x0009C14Fu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009C14F: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE430;
    goto loc_0009C160;

loc_0009C15E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009C160: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C169u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009C169: ;
    ecx = MEM32(0x1D3EBC);
    POP32(esp, edi);
    MEM32(ecx + 0x150) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009C17E: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0009C185u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009C185: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C1A4; /* je: equal / zero */

loc_0009C18E: ;
    ecx = esi;
    PUSH32(esp, 0x0009C195u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009C195: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE3E8;
    goto loc_0009C1A6;

loc_0009C1A4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009C1A6: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C1AFu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009C1AF: ;
    edx = MEM32(0x1D3EBC);
    POP32(esp, edi);
    MEM32(edx + 0x150) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009C1D0
 * Original: 0x0009C1D0 - 0x0009C245 (117 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C1D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 8 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0009C23E; /* jne: not equal / not zero */

loc_0009C1DE: ;
    eax = MEM32(0x1D9FE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C23E; /* jne: not equal / not zero */

loc_0009C1E7: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BDC3C);
    PUSH32(esp, 0x0009C1F4u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009C1F4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C23E; /* jne: not equal / not zero */

loc_0009C1FB: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C23E; /* jne: not equal / not zero */

loc_0009C201: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0009C208u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009C208: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C229; /* je: equal / zero */

loc_0009C20F: ;
    ecx = eax;
    PUSH32(esp, 0x0009C216u); RECOMP_ABI_CALL(0x0009BF60u, sub_0009BF60); /* call 0x0009BF60 */

loc_0009C216: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009C21Fu); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009C21F: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009C229: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009C234u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009C234: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009C23E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009C250
 * Original: 0x0009C250 - 0x0009C3A4 (340 bytes, 117 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C250: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    if ((_fa == 0)) goto loc_0009C298; /* je: equal / zero */

loc_0009C260: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0009C26C; /* je: equal / zero */

loc_0009C263: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0009C39D; /* jne: not equal / not zero */

loc_0009C26C: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BDBE0);
    PUSH32(esp, 0x0009C279u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009C279: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C39D; /* jne: not equal / not zero */

loc_0009C284: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009C28Eu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009C28E: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009C298: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B3388);
    PUSH32(esp, 0x0009C2A5u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009C2A5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C2E1; /* jne: not equal / not zero */

loc_0009C2AC: ;
    edx = MEM32(0x1D9FB8);
    PUSH32(esp, 0x10);
    MEM32(edx + 0x44) = eax;
    PUSH32(esp, 0x0009C2BCu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009C2BC: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C2DC; /* je: equal / zero */

loc_0009C2C5: ;
    ecx = esi;
    PUSH32(esp, 0x0009C2CCu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009C2CC: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE37C;
    PUSH32(esp, esi);
    goto loc_0009C334;

loc_0009C2DC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    goto loc_0009C334;

loc_0009C2E1: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B33A4);
    PUSH32(esp, 0x0009C2EEu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009C2EE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C284; /* je: equal / zero */

loc_0009C2F5: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B3370);
    PUSH32(esp, 0x0009C302u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009C302: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C350; /* jne: not equal / not zero */

loc_0009C309: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0009C310u); RECOMP_ABI_CALL(0x0009FFA0u, sub_0009FFA0); /* call 0x0009FFA0 */

loc_0009C310: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, 0x10);
    MEM32(edx + 0x6C) = 1;
    PUSH32(esp, 0x0009C321u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009C321: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C331; /* je: equal / zero */

loc_0009C328: ;
    ecx = eax;
    PUSH32(esp, 0x0009C32Fu); RECOMP_ABI_CALL(0x0009B6F0u, sub_0009B6F0); /* call 0x0009B6F0 */

loc_0009C32F: ;
    goto loc_0009C333;

loc_0009C331: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009C333: ;
    PUSH32(esp, eax);

loc_0009C334: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0x0009C33Cu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009C33C: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009C346u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009C346: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009C350: ;
    PUSH32(esp, 0x1BDFD4);
    ecx = esi;
    PUSH32(esp, 0x0009C35Cu); RECOMP_ABI_CALL(0x0003D190u, sub_0003D190); /* call 0x0003D190 */

loc_0009C35C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C39D; /* je: equal / zero */

loc_0009C360: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0009C367u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009C367: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C388; /* je: equal / zero */

loc_0009C36E: ;
    ecx = eax;
    PUSH32(esp, 0x0009C375u); RECOMP_ABI_CALL(0x0009C0A0u, sub_0009C0A0); /* call 0x0009C0A0 */

loc_0009C375: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009C37Eu); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009C37E: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009C388: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009C393u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_0009C393: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009C39D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009C3B0
 * Original: 0x0009C3B0 - 0x0009C3D2 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C3B0(void)
{

loc_0009C3B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009C3B8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009C3B8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE4A8;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009C3E0
 * Original: 0x0009C3E0 - 0x0009C3F9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C3E0(void)
{

loc_0009C3E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009C3E8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009C3E8: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE4FC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C400
 * Original: 0x0009C400 - 0x0009C447 (71 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C400: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    edi = ecx;
    PUSH32(esp, 0x0009C40Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009C40B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C43A; /* je: equal / zero */

loc_0009C414: ;
    ecx = esi;
    PUSH32(esp, 0x0009C41Bu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009C41B: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE4A8;
    MEM32(esi + 0x10) = 0;
    PUSH32(esp, 0x0009C437u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009C437: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009C43A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0009C444u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009C444: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C450
 * Original: 0x0009C450 - 0x0009C460 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C450(void)
{

loc_0009C450: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009C457u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009C457: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0009C45Eu); RECOMP_ABI_CALL(0x0009FFA0u, sub_0009FFA0); /* call 0x0009FFA0 */

loc_0009C45E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C460
 * Original: 0x0009C460 - 0x0009C480 (32 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C460: ;
    PUSH32(esp, 0x968);
    PUSH32(esp, 0x0009C46Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009C46A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C478; /* je: equal / zero */

loc_0009C471: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00045060(); return; /* tail jmp 0x00045060 */

loc_0009C478: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0009C480(); return; /* fallthrough 0x0009C480 */

}

/**
 * sub_0009C478
 * Original: 0x0009C478 - 0x0009C480 (8 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C478(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C478: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0009C480(); return; /* fallthrough 0x0009C480 */

}

/**
 * sub_0009C480
 * Original: 0x0009C480 - 0x0009C51C (156 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C480: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ebx = ecx;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x0009C497u); RECOMP_ABI_CALL(0x000A0070u, sub_000A0070); /* call 0x000A0070 */

loc_0009C497: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0009C49Fu); RECOMP_ABI_CALL(0x0009FE90u, sub_0009FE90); /* call 0x0009FE90 */

loc_0009C49F: ;
    ecx = MEM32(0x1DA034);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0009C4ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C4A9u); } /* indirect call */
    }

loc_0009C4AC: ;
    esi = MEM32(0x1DA034);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0009C4BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C4B6u); } /* indirect call */
    }

loc_0009C4BC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0009C4C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C4C0u); } /* indirect call */
    }

loc_0009C4C6: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx + 0x48);
    _fa = (uint32_t)(MEM32(edx + 0x244)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x244), 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009C518; /* jge: greater or equal (signed >=) */

loc_0009C4DA: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x0009C4E1u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009C4E1: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C50D; /* je: equal / zero */

loc_0009C4EA: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0009C4F3u); RECOMP_ABI_CALL(0x0009A6C0u, sub_0009A6C0); /* call 0x0009A6C0 */

loc_0009C4F3: ;
    MEM32(esi) = 0x1BE4CC;
    MEM32(esi + 0x28) = 0;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C509u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009C509: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0009C50D: ;
    ecx = MEM32(ebx + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C518u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009C518: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C520
 * Original: 0x0009C520 - 0x0009C597 (119 bytes, 43 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C520: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C591; /* jne: not equal / not zero */

loc_0009C52E: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B3904);
    PUSH32(esp, 0x0009C53Bu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0009C53B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009C591; /* jne: not equal / not zero */

loc_0009C542: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x0009C54Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009C54A: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C57C; /* je: equal / zero */

loc_0009C553: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0009C55Cu); RECOMP_ABI_CALL(0x0009A6C0u, sub_0009A6C0); /* call 0x0009A6C0 */

loc_0009C55C: ;
    MEM32(esi) = 0x1BE4CC;
    MEM32(esi + 0x28) = 2;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C572u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009C572: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0009C57C: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C587u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009C587: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0009C591: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009C5A0
 * Original: 0x0009C5A0 - 0x0009C5D9 (57 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C5A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x1DA034);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0009C5B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C5ABu); } /* indirect call */
    }

loc_0009C5B1: ;
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(0x1DA008);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C5D0; /* je: equal / zero */

loc_0009C5C1: ;
    _fa = (uint32_t)(MEM8(esi + 0x28)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x28), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009C5D0; /* je: equal / zero */

loc_0009C5C7: ;
    MEM32(esi + 0x18) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009C5D0: ;
    MEM32(esi + 0x18) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009C5E0
 * Original: 0x0009C5E0 - 0x0009C64E (110 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009C5E0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C638; /* je: equal / zero */

loc_0009C5EA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0009C5F2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0009C5F2: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C611; /* je: equal / zero */

loc_0009C5FB: ;
    ecx = esi;
    PUSH32(esp, 0x0009C602u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_0009C602: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1BE4FC;
    goto loc_0009C613;

loc_0009C611: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009C613: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009C61Cu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009C61C: ;
    eax = MEM32(0x1D9FB8);
    MEM32(eax + 0x44) = 1;
    ecx = MEM32(0x1DA030);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0009C635u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C632u); } /* indirect call */
    }

loc_0009C635: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0009C638: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009C642u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_0009C642: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0009C649u); RECOMP_ABI_CALL(0x0009FFA0u, sub_0009FFA0); /* call 0x0009FFA0 */

loc_0009C649: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
