/**
 * ATV: Quad Power Racing 2 - Recompiled code chunk 2
 * Functions: 250 (0x00021E10 - 0x00028CF0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00021E10
 * Original: 0x00021E10 - 0x00021E30 (32 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021E10: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00021E2D; /* jne: not equal / not zero */

loc_00021E18: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x1D9FFC);
    PUSH32(esp, 0x00021E2Du); RECOMP_ABI_CALL(0x00090D20u, sub_00090D20); /* call 0x00090D20 */

loc_00021E2D: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00021E30
 * Original: 0x00021E30 - 0x00021E9C (108 bytes, 34 insns)
 * Category: game_camera
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021E30: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00021E99; /* jne: not equal / not zero */

loc_00021E38: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1AFAB0);
    ecx = esi;
    MEM32(esp + 0x20) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x00021E63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00021E5Du); } /* indirect call */
    }

loc_00021E63: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00021E87; /* jl: less (signed <) */

loc_00021E6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00021E87; /* jg: greater (signed >) */

loc_00021E71: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x1DA058);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00021E83u); RECOMP_ABI_CALL(0x00086EF0u, sub_00086EF0); /* call 0x00086EF0 */

loc_00021E83: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00021E87: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x1DA054);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00021E98u); RECOMP_ABI_CALL(0x000874A0u, sub_000874A0); /* call 0x000874A0 */

loc_00021E98: ;
    POP32(esp, esi);

loc_00021E99: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00021EA0
 * Original: 0x00021EA0 - 0x00021EC0 (32 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021EA0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00021EBD; /* jne: not equal / not zero */

loc_00021EA8: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x1DA054);
    PUSH32(esp, 0x00021EBDu); RECOMP_ABI_CALL(0x00087630u, sub_00087630); /* call 0x00087630 */

loc_00021EBD: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00021EC0
 * Original: 0x00021EC0 - 0x00021F6D (173 bytes, 63 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021EC0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(esp + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1AFABC);
    PUSH32(esp, 0x1D3AA0);
    PUSH32(esp, 0x00021EE0u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00021EE0: ;
    SET_LO8(eax, MEM8(0x1D3AA0));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = 0x1D3AA0;
    if (CMP_EQ(_fa, _fb)) goto loc_00021F07; /* je: equal / zero */

loc_00021EF1: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00021EFAu); RECOMP_ABI_CALL(0x0012B440u, sub_0012B440); /* call 0x0012B440 */

loc_00021EFA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00021EF1; /* jne: not equal / not zero */

loc_00021F07: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, 0x1AFABC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00021F1Du); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00021F1D: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = esp + 8;
    if (CMP_EQ(_fa, _fb)) goto loc_00021F46; /* je: equal / zero */

loc_00021F2C: ;
    /* nop */

loc_00021F30: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00021F39u); RECOMP_ABI_CALL(0x0012B440u, sub_0012B440); /* call 0x0012B440 */

loc_00021F39: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00021F30; /* jne: not equal / not zero */

loc_00021F46: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x1D3AA0);
    PUSH32(esp, 0x00021F55u); RECOMP_ABI_CALL(0x001058C0u, sub_001058C0); /* call 0x001058C0 */

loc_00021F55: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00021F65; /* je: equal / zero */

loc_00021F5E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00021F65: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00021F70
 * Original: 0x00021F70 - 0x00021F8B (27 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021F70: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00021F88; /* jne: not equal / not zero */

loc_00021F78: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x1DA058);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00021F88u); RECOMP_ABI_CALL(0x00086D50u, sub_00086D50); /* call 0x00086D50 */

loc_00021F88: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00021F90
 * Original: 0x00021F90 - 0x0002201B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00021F90(void)
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

loc_00021F90: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x1C91D0)); /* fld float */
    eax = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x24)); /* fdiv dword ptr [esp + 0x24] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    edx = MEM32(esp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    ecx = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    eax = MEM32(esp + 0x1C);
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x14) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x20) = edx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_00022020
 * Original: 0x00022020 - 0x00022056 (54 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00022020: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x3C4;
    PUSH32(esp, 0x0002202Eu); RECOMP_ABI_CALL(0x00075EE0u, sub_00075EE0); /* call 0x00075EE0 */

loc_0002202E: ;
    ecx = esi + 0x1B4;
    PUSH32(esp, 0x00022039u); RECOMP_ABI_CALL(0x000D1690u, sub_000D1690); /* call 0x000D1690 */

loc_00022039: ;
    ecx = esi;
    PUSH32(esp, 0x00022040u); RECOMP_ABI_CALL(0x000329B0u, sub_000329B0); /* call 0x000329B0 */

loc_00022040: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00022050; /* je: equal / zero */

loc_00022047: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002204Du); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0002204D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00022050: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00022060
 * Original: 0x00022060 - 0x000220A8 (72 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022060(void)
{

loc_00022060: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    esi = ecx;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0002209Cu); RECOMP_ABI_CALL(0x0008E1A0u, sub_0008E1A0); /* call 0x0008E1A0 */

loc_0002209C: ;
    MEM32(esi) = 0x1AFAC4;
    eax = esi;
    POP32(esp, esi);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_000220B0
 * Original: 0x000220B0 - 0x000220CF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000220B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000220B0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AFA98;
    if (TEST_Z(_fa, _fb)) goto loc_000220C9; /* je: equal / zero */

loc_000220C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000220C6u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000220C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000220C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000220D0
 * Original: 0x000220D0 - 0x00022137 (103 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000220D0(void)
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

loc_000220D0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x48);
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = MEM32(eax);
    edx = MEM32(eax + 0xC);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    MEM32(esp) = ecx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    ecx = esp + 0xC;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    MEM32(esp + 0xC) = edx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00022110u); RECOMP_ABI_CALL(0x00021A50u, sub_00021A50); /* call 0x00021A50 */

loc_00022110: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0002211Eu); RECOMP_ABI_CALL(0x000CEA20u, sub_000CEA20); /* call 0x000CEA20 */

loc_0002211E: ;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(ecx);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00022131u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0002212Eu); } /* indirect call */
    }

loc_00022131: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00022140
 * Original: 0x00022140 - 0x00022227 (231 bytes, 76 insns)
 * Category: game_vehicle
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00022140: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x48);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    edi = ecx;
    PUSH32(esp, 0x80000000u);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1AFAF8);
    ecx = esi;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x00022179u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00022173u); } /* indirect call */
    }

loc_00022179: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFAE8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00022197u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00022191u); } /* indirect call */
    }

loc_00022197: ;
    eax = MEM32(esp + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000221DC; /* jne: not equal / not zero */

loc_0002219F: ;
    PUSH32(esp, 0x4AC);
    PUSH32(esp, 0x000221A9u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000221A9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000221BB; /* je: equal / zero */

loc_000221B0: ;
    ecx = eax;
    PUSH32(esp, 0x000221B7u); RECOMP_ABI_CALL(0x00021480u, sub_00021480); /* call 0x00021480 */

loc_000221B7: ;
    edi = eax;
    goto loc_000221BD;

loc_000221BB: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000221BD: ;
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000221C9u); RECOMP_ABI_CALL(0x00126000u, sub_00126000); /* call 0x00126000 */

loc_000221C9: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000221DAu); RECOMP_ABI_CALL(0x00021780u, sub_00021780); /* call 0x00021780 */

loc_000221DA: ;
    goto loc_000221EA;

loc_000221DC: ;
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000221E8u); RECOMP_ABI_CALL(0x00021CA0u, sub_00021CA0); /* call 0x00021CA0 */

loc_000221E8: ;
    edi = eax;

loc_000221EA: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFADC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000221FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000221F8u); } /* indirect call */
    }

loc_000221FB: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFAD4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0002220Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00022209u); } /* indirect call */
    }

loc_0002220C: ;
    edx = MEM32(edi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0002221Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002221Au); } /* indirect call */
    }

loc_0002221D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00022230
 * Original: 0x00022230 - 0x00022366 (310 bytes, 96 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00022230: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00022360; /* jne: not equal / not zero */

loc_0002223F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1AFB10);
    ecx = esi;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x60) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x0002226Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00022266u); } /* indirect call */
    }

loc_0002226C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFB08);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0002228Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00022284u); } /* indirect call */
    }

loc_0002228A: ;
    edx = MEM32(esi);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFADC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0002229Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00022298u); } /* indirect call */
    }

loc_0002229B: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFAD4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000222ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000222A9u); } /* indirect call */
    }

loc_000222AC: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFB00);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000222BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000222BAu); } /* indirect call */
    }

loc_000222BD: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x000222C4u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000222C4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000222DF; /* je: equal / zero */

loc_000222CC: ;
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(esp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000222DDu); RECOMP_ABI_CALL(0x0008EB60u, sub_0008EB60); /* call 0x0008EB60 */

loc_000222DD: ;
    goto loc_000222E1;

loc_000222DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000222E1: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esp + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = eax + 0x10;
    edx = esp + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002233F; /* je: equal / zero */

loc_00022301: ;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(ecx + 0x1C) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(ecx + 0x20) = edx;

loc_0002233F: ;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x34) = ecx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x38) = edx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x3C) = ecx;
    ecx = MEM32(0x1DA000);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00022360u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0002235Du); } /* indirect call */
    }

loc_00022360: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000222D4
 * Original: 0x000222D4 - 0x00022366 (146 bytes, 46 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000222D4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000222D4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000222DDu); RECOMP_ABI_CALL(0x0008EB60u, sub_0008EB60); /* call 0x0008EB60 */

loc_000222DD: ;
    goto loc_000222E1;

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000222E1: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esp + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = eax + 0x10;
    edx = esp + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002233F; /* je: equal / zero */

loc_00022301: ;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(ecx + 0x1C) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(ecx + 0x20) = edx;

loc_0002233F: ;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x34) = ecx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x38) = edx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x3C) = ecx;
    ecx = MEM32(0x1DA000);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00022360u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0002235Du); } /* indirect call */
    }

loc_00022360: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00022370
 * Original: 0x00022370 - 0x00022633 (707 bytes, 199 insns)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00022370: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002262A; /* jne: not equal / not zero */

loc_00022382: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xA8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1AFB80);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x000223A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000223A2u); } /* indirect call */
    }

loc_000223A8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFB74);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x000223C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000223C0u); } /* indirect call */
    }

loc_000223C6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFB6C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x000223E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000223DEu); } /* indirect call */
    }

loc_000223E4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFB64);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00022402u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000223FCu); } /* indirect call */
    }

loc_00022402: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFB54);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00022420u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002241Au); } /* indirect call */
    }

loc_00022420: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFB48);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0002243Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00022438u); } /* indirect call */
    }

loc_0002243E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFB3C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0002245Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00022456u); } /* indirect call */
    }

loc_0002245C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFB2C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0002247Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00022474u); } /* indirect call */
    }

loc_0002247A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFB1C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00022498u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00022492u); } /* indirect call */
    }

loc_00022498: ;
    edx = MEM32(esi);
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFADC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000224A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000224A6u); } /* indirect call */
    }

loc_000224A9: ;
    edx = MEM32(esi);
    eax = esp + 0x7C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFAD4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000224BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000224B7u); } /* indirect call */
    }

loc_000224BA: ;
    edx = MEM32(esi);
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFB00);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000224CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000224C8u); } /* indirect call */
    }

loc_000224CB: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0x84);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esp + 0x90);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0x7C);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(esp + 0x80);
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esp + 0x9C);
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esp + 0x88);
    MEM32(esp + 0x50) = edx;
    edx = MEM32(esp + 0x8C);
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(esp + 0x94);
    MEM32(esp + 0x5C) = edx;
    edx = MEM32(esp + 0x98);
    MEM32(esp + 0x78) = eax;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x64) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x68) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x70) = ecx;
    MEM32(esp + 0x74) = edx;
    POP32(esp, esi);
    if ((_fa == 0)) goto loc_000225C5; /* je: equal / zero */

loc_00022565: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002261A; /* jne: not equal / not zero */

loc_0002256C: ;
    PUSH32(esp, 0x74);
    PUSH32(esp, 0x00022573u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00022573: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002261A; /* je: equal / zero */

loc_0002257E: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x1CA56C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1CA56C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC0);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000225C3u); RECOMP_ABI_CALL(0x00022060u, sub_00022060); /* call 0x00022060 */

loc_000225C3: ;
    goto loc_0002261C;

loc_000225C5: ;
    PUSH32(esp, 0x74);
    PUSH32(esp, 0x000225CCu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000225CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002261A; /* je: equal / zero */

loc_000225D3: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x1CA56C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1CA56C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC0);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00022618u); RECOMP_ABI_CALL(0x0008E1A0u, sub_0008E1A0); /* call 0x0008E1A0 */

loc_00022618: ;
    goto loc_0002261C;

loc_0002261A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002261C: ;
    PUSH32(esp, eax);
    eax = MEM32(0x1DA00C);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x0002262Au); RECOMP_ABI_CALL(0x0008DA40u, sub_0008DA40); /* call 0x0008DA40 */

loc_0002262A: ;
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00022640
 * Original: 0x00022640 - 0x000227E2 (418 bytes, 116 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022640(void)
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

loc_00022640: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000227D9; /* jne: not equal / not zero */

loc_00022652: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x8C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1AFB98);
    ecx = esi;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x14) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x00022688u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00022682u); } /* indirect call */
    }

loc_00022688: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFB8C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x000226A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000226A0u); } /* indirect call */
    }

loc_000226A6: ;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFADC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000226B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000226B4u); } /* indirect call */
    }

loc_000226B7: ;
    edx = MEM32(esi);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFAD4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000226C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000226C5u); } /* indirect call */
    }

loc_000226C8: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFB00);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000226D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000226D6u); } /* indirect call */
    }

loc_000226D9: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x80) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x54) = 0x3F800000;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x64) = 0x3F800000;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0;
    MEM32(esp + 0x74) = 0x3F800000;
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x7C) = edx;
    POP32(esp, esi);
    if ((_fa == 0)) goto loc_000227A0; /* je: equal / zero */

loc_0002275E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00022778; /* je: equal / zero */

loc_00022761: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000227C8; /* jne: not equal / not zero */

loc_00022764: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x0002276Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0002276B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000227C8; /* je: equal / zero */

loc_00022772: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    goto loc_000227B2;

loc_00022778: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x0002277Fu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0002277F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000227C8; /* je: equal / zero */

loc_00022786: ;
    fp_push((double)SMEM32(esp)); /* fild */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0002279Eu); RECOMP_ABI_CALL(0x00093A30u, sub_00093A30); /* call 0x00093A30 */

loc_0002279E: ;
    goto loc_000227CA;

loc_000227A0: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x000227A7u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000227A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000227C8; /* je: equal / zero */

loc_000227AE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 5);

loc_000227B2: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    PUSH32(esp, ecx);
    ecx = esp + 0x50;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000227C6u); RECOMP_ABI_CALL(0x00093A30u, sub_00093A30); /* call 0x00093A30 */

loc_000227C6: ;
    goto loc_000227CA;

loc_000227C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000227CA: ;
    edx = MEM32(0x1DA00C);
    ecx = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000227D9u); RECOMP_ABI_CALL(0x00093F50u, sub_00093F50); /* call 0x00093F50 */

loc_000227D9: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000227F0
 * Original: 0x000227F0 - 0x000229C3 (467 bytes, 154 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000227F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000227F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0002281E; /* jne: not equal / not zero */

loc_0002280B: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x20) = 0x3F800000;
    ebx = 1;
    goto loc_00022834;

loc_0002281E: ;
    edx = MEM32(eax + 0x1C);
    edi = MEM32(eax + 0x2C);
    ebx = MEM32(eax + 0x30);
    ebp = eax;
    eax = MEM32(eax + 0x34);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x10) = eax;

loc_00022834: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002299C; /* jne: not equal / not zero */

loc_00022840: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xFFFFFFF5u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF5u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0002298C; /* ja: above (unsigned >) */

loc_00022850: ;
    ecx = ZX8(MEM8(eax + 0x229D8));
    { uint32_t _jt = MEM32(ecx * 4 + 0x229C4); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0002285Eu) goto loc_0002285E;
    if (_jt == 0x000228A8u) goto loc_000228A8;
    if (_jt == 0x000228F0u) goto loc_000228F0;
    if (_jt == 0x0002293Au) goto loc_0002293A;
    if (_jt == 0x0002298Cu) goto loc_0002298C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0002285E: ;
    PUSH32(esp, 0x3DC);
    PUSH32(esp, 0x00022868u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00022868: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002287A; /* je: equal / zero */

loc_0002286F: ;
    ecx = eax;
    PUSH32(esp, 0x00022876u); RECOMP_ABI_CALL(0x00021B30u, sub_00021B30); /* call 0x00021B30 */

loc_00022876: ;
    esi = eax;
    goto loc_0002287C;

loc_0002287A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002287C: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00022889u); RECOMP_ABI_CALL(0x000336D0u, sub_000336D0); /* call 0x000336D0 */

loc_00022889: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002298E; /* jne: not equal / not zero */

loc_00022891: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0x3C0) = ebx;
    PUSH32(esp, 0x000228A3u); RECOMP_ABI_CALL(0x00126000u, sub_00126000); /* call 0x00126000 */

loc_000228A3: ;
    goto loc_000229A8;

loc_000228A8: ;
    PUSH32(esp, 0x3FC);
    PUSH32(esp, 0x000228B2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000228B2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000228C4; /* je: equal / zero */

loc_000228B9: ;
    ecx = eax;
    PUSH32(esp, 0x000228C0u); RECOMP_ABI_CALL(0x00033780u, sub_00033780); /* call 0x00033780 */

loc_000228C0: ;
    esi = eax;
    goto loc_000228C6;

loc_000228C4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000228C6: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000228D3u); RECOMP_ABI_CALL(0x00033850u, sub_00033850); /* call 0x00033850 */

loc_000228D3: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000228DFu); RECOMP_ABI_CALL(0x00032A60u, sub_00032A60); /* call 0x00032A60 */

loc_000228DF: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000228EBu); RECOMP_ABI_CALL(0x00126000u, sub_00126000); /* call 0x00126000 */

loc_000228EB: ;
    goto loc_000229A8;

loc_000228F0: ;
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0x000228FAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000228FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002290C; /* je: equal / zero */

loc_00022901: ;
    ecx = eax;
    PUSH32(esp, 0x00022908u); RECOMP_ABI_CALL(0x000330F0u, sub_000330F0); /* call 0x000330F0 */

loc_00022908: ;
    esi = eax;
    goto loc_0002290E;

loc_0002290C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002290E: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0002291Bu); RECOMP_ABI_CALL(0x00033950u, sub_00033950); /* call 0x00033950 */

loc_0002291B: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x42480000);
    ecx = esi;
    PUSH32(esp, 0x0002292Cu); RECOMP_ABI_CALL(0x00032B60u, sub_00032B60); /* call 0x00032B60 */

loc_0002292C: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00022938u); RECOMP_ABI_CALL(0x00126000u, sub_00126000); /* call 0x00126000 */

loc_00022938: ;
    goto loc_000229A8;

loc_0002293A: ;
    PUSH32(esp, 0x3D4);
    PUSH32(esp, 0x00022944u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00022944: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002296F; /* je: equal / zero */

loc_0002294B: ;
    ecx = eax;
    PUSH32(esp, 0x00022952u); RECOMP_ABI_CALL(0x000331A0u, sub_000331A0); /* call 0x000331A0 */

loc_00022952: ;
    esi = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00022961u); RECOMP_ABI_CALL(0x00033950u, sub_00033950); /* call 0x00033950 */

loc_00022961: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0002296Du); RECOMP_ABI_CALL(0x00126000u, sub_00126000); /* call 0x00126000 */

loc_0002296D: ;
    goto loc_000229A8;

loc_0002296F: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0002297Eu); RECOMP_ABI_CALL(0x00033950u, sub_00033950); /* call 0x00033950 */

loc_0002297E: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0002298Au); RECOMP_ABI_CALL(0x00126000u, sub_00126000); /* call 0x00126000 */

loc_0002298A: ;
    goto loc_000229A8;

loc_0002298C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002298E: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0002299Au); RECOMP_ABI_CALL(0x00126000u, sub_00126000); /* call 0x00126000 */

loc_0002299A: ;
    goto loc_000229A8;

loc_0002299C: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000229A6u); RECOMP_ABI_CALL(0x00021CA0u, sub_00021CA0); /* call 0x00021CA0 */

loc_000229A6: ;
    esi = eax;

loc_000229A8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000229B7; /* je: equal / zero */

loc_000229AC: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000229B7u); RECOMP_ABI_CALL(0x000220D0u, sub_000220D0); /* call 0x000220D0 */

loc_000229B7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000229F0
 * Original: 0x000229F0 - 0x00022BF5 (517 bytes, 158 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000229F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000229F0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x54);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    ebx = ecx;
    PUSH32(esp, 0x80000000u);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x1AFAF8);
    ecx = edi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = 1;
    MEM32(esp + 0x24) = esi;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x00022A2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00022A26u); } /* indirect call */
    }

loc_00022A2C: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFBAC);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00022A4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00022A44u); } /* indirect call */
    }

loc_00022A4A: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFBA4);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00022A68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00022A62u); } /* indirect call */
    }

loc_00022A68: ;
    _fa = (uint32_t)(MEM32(esp + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x58), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00022BA9; /* jne: not equal / not zero */

loc_00022A72: ;
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(0xFFFFFFF5u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF5u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00022B9B; /* ja: above (unsigned >) */

loc_00022A82: ;
    ecx = ZX8(MEM8(eax + 0x22C0C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x22BF8); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00022A90u) goto loc_00022A90;
    if (_jt == 0x00022ADEu) goto loc_00022ADE;
    if (_jt == 0x00022B26u) goto loc_00022B26;
    if (_jt == 0x00022B70u) goto loc_00022B70;
    if (_jt == 0x00022B9Bu) goto loc_00022B9B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00022A90: ;
    PUSH32(esp, 0x3DC);
    PUSH32(esp, 0x00022A9Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00022A9A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00022AAC; /* je: equal / zero */

loc_00022AA1: ;
    ecx = eax;
    PUSH32(esp, 0x00022AA8u); RECOMP_ABI_CALL(0x00021B30u, sub_00021B30); /* call 0x00021B30 */

loc_00022AA8: ;
    ebx = eax;
    goto loc_00022AAE;

loc_00022AAC: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00022AAE: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00022ABFu); RECOMP_ABI_CALL(0x000336D0u, sub_000336D0); /* call 0x000336D0 */

loc_00022ABF: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00022ACB; /* jne: not equal / not zero */

loc_00022AC5: ;
    MEM32(ebx + 0x3C0) = esi;

loc_00022ACB: ;
    ecx = MEM32(esp + 0x50);
    esi = ebx;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00022AD9u); RECOMP_ABI_CALL(0x00126000u, sub_00126000); /* call 0x00126000 */

loc_00022AD9: ;
    goto loc_00022BB7;

loc_00022ADE: ;
    PUSH32(esp, 0x3FC);
    PUSH32(esp, 0x00022AE8u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00022AE8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00022AF8; /* je: equal / zero */

loc_00022AEF: ;
    ecx = eax;
    PUSH32(esp, 0x00022AF6u); RECOMP_ABI_CALL(0x00033780u, sub_00033780); /* call 0x00033780 */

loc_00022AF6: ;
    esi = eax;

loc_00022AF8: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00022B09u); RECOMP_ABI_CALL(0x00033850u, sub_00033850); /* call 0x00033850 */

loc_00022B09: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00022B15u); RECOMP_ABI_CALL(0x00032A60u, sub_00032A60); /* call 0x00032A60 */

loc_00022B15: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00022B21u); RECOMP_ABI_CALL(0x00126000u, sub_00126000); /* call 0x00126000 */

loc_00022B21: ;
    goto loc_00022BB7;

loc_00022B26: ;
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0x00022B30u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00022B30: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00022B40; /* je: equal / zero */

loc_00022B37: ;
    ecx = eax;
    PUSH32(esp, 0x00022B3Eu); RECOMP_ABI_CALL(0x000330F0u, sub_000330F0); /* call 0x000330F0 */

loc_00022B3E: ;
    esi = eax;

loc_00022B40: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00022B51u); RECOMP_ABI_CALL(0x00033950u, sub_00033950); /* call 0x00033950 */

loc_00022B51: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x42480000);
    ecx = esi;
    PUSH32(esp, 0x00022B62u); RECOMP_ABI_CALL(0x00032B60u, sub_00032B60); /* call 0x00032B60 */

loc_00022B62: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00022B6Eu); RECOMP_ABI_CALL(0x00126000u, sub_00126000); /* call 0x00126000 */

loc_00022B6E: ;
    goto loc_00022BB7;

loc_00022B70: ;
    PUSH32(esp, 0x3D4);
    PUSH32(esp, 0x00022B7Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00022B7A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00022B8A; /* je: equal / zero */

loc_00022B81: ;
    ecx = eax;
    PUSH32(esp, 0x00022B88u); RECOMP_ABI_CALL(0x000331A0u, sub_000331A0); /* call 0x000331A0 */

loc_00022B88: ;
    esi = eax;

loc_00022B8A: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00022B9Bu); RECOMP_ABI_CALL(0x00033950u, sub_00033950); /* call 0x00033950 */

loc_00022B9B: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00022BA7u); RECOMP_ABI_CALL(0x00126000u, sub_00126000); /* call 0x00126000 */

loc_00022BA7: ;
    goto loc_00022BB7;

loc_00022BA9: ;
    edx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00022BB5u); RECOMP_ABI_CALL(0x00021CA0u, sub_00021CA0); /* call 0x00021CA0 */

loc_00022BB5: ;
    esi = eax;

loc_00022BB7: ;
    eax = MEM32(edi);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1AFADC);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00022BC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00022BC5u); } /* indirect call */
    }

loc_00022BC8: ;
    edx = MEM32(edi);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFAD4);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00022BD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00022BD6u); } /* indirect call */
    }

loc_00022BD9: ;
    edx = MEM32(esi);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00022BEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00022BE7u); } /* indirect call */
    }

loc_00022BEA: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00022C30
 * Original: 0x00022C30 - 0x00022D0F (223 bytes, 73 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00022C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00022C30: ;
    edx = MEM32(esp + 4);
    eax = edx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00022D0A; /* ja: above (unsigned >) */

loc_00022C40: ;
    eax = ZX8(MEM8(eax + 0x22D3C));
    { uint32_t _jt = MEM32(eax * 4 + 0x22D10); /* switch: 11 entries, 10 targets */
    if (_jt == 0x00022C4Eu) goto loc_00022C4E;
    if (_jt == 0x00022C57u) goto loc_00022C57;
    if (_jt == 0x00022C60u) goto loc_00022C60;
    if (_jt == 0x00022C79u) goto loc_00022C79;
    if (_jt == 0x00022C92u) goto loc_00022C92;
    if (_jt == 0x00022CABu) goto loc_00022CAB;
    if (_jt == 0x00022CC4u) goto loc_00022CC4;
    if (_jt == 0x00022CDDu) goto loc_00022CDD;
    if (_jt == 0x00022CF6u) goto loc_00022CF6;
    if (_jt == 0x00022D0Au) goto loc_00022D0A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00022C4E: ;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00022140(); return; /* tail jmp 0x00022140 */

loc_00022C57: ;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_000229F0(); return; /* tail jmp 0x000229F0 */

loc_00022C60: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00022C74u); RECOMP_ABI_CALL(0x00021E10u, sub_00021E10); /* call 0x00021E10 */

loc_00022C74: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

loc_00022C79: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00022C8Du); RECOMP_ABI_CALL(0x00021E30u, sub_00021E30); /* call 0x00021E30 */

loc_00022C8D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

loc_00022C92: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00022CA6u); RECOMP_ABI_CALL(0x00021EA0u, sub_00021EA0); /* call 0x00021EA0 */

loc_00022CA6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

loc_00022CAB: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00022CBFu); RECOMP_ABI_CALL(0x00022230u, sub_00022230); /* call 0x00022230 */

loc_00022CBF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

loc_00022CC4: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00022CD8u); RECOMP_ABI_CALL(0x00022370u, sub_00022370); /* call 0x00022370 */

loc_00022CD8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

loc_00022CDD: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00022CF1u); RECOMP_ABI_CALL(0x00022640u, sub_00022640); /* call 0x00022640 */

loc_00022CF1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

loc_00022CF6: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00022D0Au); RECOMP_ABI_CALL(0x00021F70u, sub_00021F70); /* call 0x00021F70 */

loc_00022D0A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00022C81
 * Original: 0x00022C81 - 0x00022D0F (142 bytes, 52 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00022C81(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00022C81: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00022C8Du); RECOMP_ABI_CALL(0x00021E30u, sub_00021E30); /* call 0x00021E30 */

loc_00022C8D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00022C88
 * Original: 0x00022C88 - 0x00022D0F (135 bytes, 48 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00022C88(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00022C88: ;
    PUSH32(esp, 0x00022C8Du); RECOMP_ABI_CALL(0x00021E30u, sub_00021E30); /* call 0x00021E30 */

loc_00022C8D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00022D60
 * Original: 0x00022D60 - 0x00022ED3 (371 bytes, 111 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00022D60: ;
    _fb = (uint32_t)(0x260) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x260;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x00022D6Fu); RECOMP_ABI_CALL(0x00019B90u, sub_00019B90); /* call 0x00019B90 */

loc_00022D6F: ;
    esi = MEM32(eax + 0x21C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00022D7Bu); RECOMP_ABI_CALL(0x000F67C0u, sub_000F67C0); /* call 0x000F67C0 */

loc_00022D7B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00022EC6; /* je: equal / zero */

loc_00022D86: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    ecx = esp + 0x30;
    PUSH32(esp, 0x00022D97u); RECOMP_ABI_CALL(0x000F8F90u, sub_000F8F90); /* call 0x000F8F90 */

loc_00022D97: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x00022DA0u); RECOMP_ABI_CALL(0x000F9280u, sub_000F9280); /* call 0x000F9280 */

loc_00022DA0: ;
    PUSH32(esp, 0x1AFBE0);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00022DAEu); RECOMP_ABI_CALL(0x000F7E10u, sub_000F7E10); /* call 0x000F7E10 */

loc_00022DAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00022EA4; /* je: equal / zero */

loc_00022DB6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFBD4);
    ecx = esp + 0x38;
    PUSH32(esp, 0x00022DCEu); RECOMP_ABI_CALL(0x000F7930u, sub_000F7930); /* call 0x000F7930 */

loc_00022DCE: ;
    eax = MEM32(esp + 0x10);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00022E98; /* jbe: below or equal (unsigned <=) */

loc_00022DDC: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x274);

loc_00022DE4: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x20;
    PUSH32(esp, 0x1AFBC8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00022DF4u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00022DF4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    PUSH32(esp, 0x00022E05u); RECOMP_ABI_CALL(0x000F7E10u, sub_000F7E10); /* call 0x000F7E10 */

loc_00022E05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00022E8A; /* je: equal / zero */

loc_00022E0D: ;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFBBC);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x00022E2Au); RECOMP_ABI_CALL(0x000F7880u, sub_000F7880); /* call 0x000F7880 */

loc_00022E2A: ;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1AFBB4);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x00022E47u); RECOMP_ABI_CALL(0x000F7880u, sub_000F7880); /* call 0x000F7880 */

loc_00022E47: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00022E5Eu); RECOMP_ABI_CALL(0x00022C30u, sub_00022C30); /* call 0x00022C30 */

loc_00022E5E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00022E7F; /* jne: not equal / not zero */

loc_00022E64: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00022E6Eu); RECOMP_ABI_CALL(0x00033AC0u, sub_00033AC0); /* call 0x00033AC0 */

loc_00022E6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00022E7F; /* je: equal / zero */

loc_00022E75: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00022E7Fu); RECOMP_ABI_CALL(0x00021CE0u, sub_00021CE0); /* call 0x00021CE0 */

loc_00022E7F: ;
    PUSH32(esp, 0);
    ecx = esp + 0x30;
    PUSH32(esp, 0x00022E8Au); RECOMP_ABI_CALL(0x000F7590u, sub_000F7590); /* call 0x000F7590 */

loc_00022E8A: ;
    eax = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00022DE4; /* jb: below (unsigned <) */

loc_00022E97: ;
    POP32(esp, edi);

loc_00022E98: ;
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x00022EA3u); RECOMP_ABI_CALL(0x000F7590u, sub_000F7590); /* call 0x000F7590 */

loc_00022EA3: ;
    POP32(esp, ebp);

loc_00022EA4: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x00022EADu); RECOMP_ABI_CALL(0x000F7550u, sub_000F7550); /* call 0x000F7550 */

loc_00022EAD: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x00022EB6u); RECOMP_ABI_CALL(0x000F7480u, sub_000F7480); /* call 0x000F7480 */

loc_00022EB6: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x260) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x260;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00022EC6: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x260) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x260;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00022ED0
 * Original: 0x00022ED0 - 0x00022ED3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022ED0(void)
{

loc_00022ED0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00022EE0
 * Original: 0x00022EE0 - 0x00023053 (371 bytes, 111 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00022EE0: ;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x00022EEFu); RECOMP_ABI_CALL(0x00019B90u, sub_00019B90); /* call 0x00019B90 */

loc_00022EEF: ;
    esi = MEM32(eax + 0x20C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00022EFBu); RECOMP_ABI_CALL(0x000F67C0u, sub_000F67C0); /* call 0x000F67C0 */

loc_00022EFB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00023046; /* je: equal / zero */

loc_00022F06: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x54);
    PUSH32(esp, esi);
    ecx = esp + 0x30;
    PUSH32(esp, 0x00022F17u); RECOMP_ABI_CALL(0x000E2E60u, sub_000E2E60); /* call 0x000E2E60 */

loc_00022F17: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x00022F20u); RECOMP_ABI_CALL(0x000E30A0u, sub_000E30A0); /* call 0x000E30A0 */

loc_00022F20: ;
    PUSH32(esp, 0x1AFBE0);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00022F2Eu); RECOMP_ABI_CALL(0x000E3260u, sub_000E3260); /* call 0x000E3260 */

loc_00022F2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00023024; /* je: equal / zero */

loc_00022F36: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFBD4);
    ecx = esp + 0x38;
    PUSH32(esp, 0x00022F4Eu); RECOMP_ABI_CALL(0x000E24A0u, sub_000E24A0); /* call 0x000E24A0 */

loc_00022F4E: ;
    eax = MEM32(esp + 0x10);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00023018; /* jbe: below or equal (unsigned <=) */

loc_00022F5C: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xDC);

loc_00022F64: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x20;
    PUSH32(esp, 0x1AFBC8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00022F74u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00022F74: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    PUSH32(esp, 0x00022F85u); RECOMP_ABI_CALL(0x000E3260u, sub_000E3260); /* call 0x000E3260 */

loc_00022F85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002300A; /* je: equal / zero */

loc_00022F8D: ;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFBBC);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x00022FAAu); RECOMP_ABI_CALL(0x000E24A0u, sub_000E24A0); /* call 0x000E24A0 */

loc_00022FAA: ;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1AFBB4);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x00022FC7u); RECOMP_ABI_CALL(0x000E24A0u, sub_000E24A0); /* call 0x000E24A0 */

loc_00022FC7: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00022FDEu); RECOMP_ABI_CALL(0x00022C30u, sub_00022C30); /* call 0x00022C30 */

loc_00022FDE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00022FFF; /* jne: not equal / not zero */

loc_00022FE4: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00022FEEu); RECOMP_ABI_CALL(0x00033AC0u, sub_00033AC0); /* call 0x00033AC0 */

loc_00022FEE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00022FFF; /* je: equal / zero */

loc_00022FF5: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00022FFFu); RECOMP_ABI_CALL(0x00021CE0u, sub_00021CE0); /* call 0x00021CE0 */

loc_00022FFF: ;
    PUSH32(esp, 0);
    ecx = esp + 0x30;
    PUSH32(esp, 0x0002300Au); RECOMP_ABI_CALL(0x000E3050u, sub_000E3050); /* call 0x000E3050 */

loc_0002300A: ;
    eax = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00022F64; /* jb: below (unsigned <) */

loc_00023017: ;
    POP32(esp, edi);

loc_00023018: ;
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x00023023u); RECOMP_ABI_CALL(0x000E3050u, sub_000E3050); /* call 0x000E3050 */

loc_00023023: ;
    POP32(esp, ebp);

loc_00023024: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x0002302Du); RECOMP_ABI_CALL(0x000E1DD0u, sub_000E1DD0); /* call 0x000E1DD0 */

loc_0002302D: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x00023036u); RECOMP_ABI_CALL(0x000E2B40u, sub_000E2B40); /* call 0x000E2B40 */

loc_00023036: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00023046: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00023060
 * Original: 0x00023060 - 0x00023227 (455 bytes, 140 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023060(void)
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

loc_00023060: ;
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xA8);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = edi;
    PUSH32(esp, 0x0002307Fu); RECOMP_ABI_CALL(0x00032920u, sub_00032920); /* call 0x00032920 */

loc_0002307F: ;
    ebp = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x34) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00023219; /* je: equal / zero */

loc_00023091: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x1AFBF4);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000230A2u); RECOMP_ABI_CALL(0x00021EC0u, sub_00021EC0); /* call 0x00021EC0 */

loc_000230A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00023219; /* je: equal / zero */

loc_000230AA: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, eax);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000230D5u); RECOMP_ABI_CALL(0x00021F90u, sub_00021F90); /* call 0x00021F90 */

loc_000230D5: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0xC);
    ebx = MEM32(eax + 0x54);
    eax = MEM32(ebx + 0x64);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = ecx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00023155; /* jle: less or equal (signed <=) */

loc_000230F6: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax;
    /* nop */

loc_00023100: ;
    esi = MEM32(ebx + 0xC8);
    PUSH32(esp, 0xA);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1AFBE8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00023115u); RECOMP_ABI_CALL(0x00102570u, sub_00102570); /* call 0x00102570 */

loc_00023115: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00023147; /* jne: not equal / not zero */

loc_0002311C: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x30);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x44) = edx;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */

loc_00023147: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x7C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00023100; /* jne: not equal / not zero */

loc_0002314D: ;
    edi = MEM32(esp + 0x34);
    ebp = MEM32(esp + 0x38);

loc_00023155: ;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00023169u); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_00023169: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esp + 0x70;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1CEFF0);
    PUSH32(esp, 0x1DAED8);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x38) = 0x3F800000;
    MEM32(esp + 0x3C) = 0x3F800000;
    MEM32(esp + 0x40) = 0x3F800000;
    PUSH32(esp, 0x000231BEu); RECOMP_ABI_CALL(0x00021AC0u, sub_00021AC0); /* call 0x00021AC0 */

loc_000231BE: ;
    PUSH32(esp, 0);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x7C;
    PUSH32(esp, 0x000231D8u); RECOMP_ABI_CALL(0x00021AC0u, sub_00021AC0); /* call 0x00021AC0 */

loc_000231D8: ;
    PUSH32(esp, 0x1000000);
    MEM32(esp + 0x9C) = ebp;
    MEM32(esp + 0xA0) = 0;
    PUSH32(esp, 0x000231F4u); RECOMP_ABI_CALL(0x00033A80u, sub_00033A80); /* call 0x00033A80 */

loc_000231F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xD);
    ecx = edi;
    PUSH32(esp, 0x0002320Cu); RECOMP_ABI_CALL(0x000227F0u, sub_000227F0); /* call 0x000227F0 */

loc_0002320C: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00023219: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00023230
 * Original: 0x00023230 - 0x00023266 (54 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00023230: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00023262; /* je: equal / zero */

loc_0002323B: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00023262; /* je: equal / zero */

loc_00023240: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00023246u); RECOMP_ABI_CALL(0x000F67C0u, sub_000F67C0); /* call 0x000F67C0 */

loc_00023246: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00023262; /* je: equal / zero */

loc_0002324D: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00023256u); RECOMP_ABI_CALL(0x00022EE0u, sub_00022EE0); /* call 0x00022EE0 */

loc_00023256: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00023262; /* jne: not equal / not zero */

loc_0002325A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00023262u); RECOMP_ABI_CALL(0x00022D60u, sub_00022D60); /* call 0x00022D60 */

loc_00023262: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00023270
 * Original: 0x00023270 - 0x000232A9 (57 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00023270: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x0002327Bu); RECOMP_ABI_CALL(0x00022EE0u, sub_00022EE0); /* call 0x00022EE0 */

loc_0002327B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00023288; /* jne: not equal / not zero */

loc_0002327F: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00023288u); RECOMP_ABI_CALL(0x00022D60u, sub_00022D60); /* call 0x00022D60 */

loc_00023288: ;
    eax = MEM32(esi + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000232A4; /* jle: less or equal (signed <=) */

loc_00023291: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0002329Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00023299u); } /* indirect call */
    }

loc_0002329C: ;
    eax = MEM32(esi + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00023291; /* jl: less (signed <) */

loc_000232A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000232B0
 * Original: 0x000232B0 - 0x0002332F (127 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000232B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000232B0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002332C; /* je: equal / zero */

loc_000232BD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    /* nop */

loc_000232C0: ;
    edi = MEM32(esi + 0x14);
    eax = MEM32(edi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0x14) = eax;
    { uint32_t _icall_target = MEM32(0x1CA568); PUSH32(esp, 0x000232D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000232CCu); } /* indirect call */
    }

loc_000232D2: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00023309; /* je: equal / zero */

loc_000232D8: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000232F1; /* jne: not equal / not zero */

loc_000232DC: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x000232E6u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000232E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = ebp;
    MEM32(esi + 8) = ebp;

loc_000232F1: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00023309; /* je: equal / zero */

loc_000232FE: ;
    MEM32(ebx + 0x10) = ebp;
    ecx = MEM32(esi);
    MEM32(ecx + eax * 4) = ebx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00023309: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00023311u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00023311: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002331Au); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0002331A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00023320u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00023320: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000232C0; /* jne: not equal / not zero */

loc_0002332A: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0002332C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00023330
 * Original: 0x00023330 - 0x00023386 (86 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00023330: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00023347u); RECOMP_ABI_CALL(0x00024320u, sub_00024320); /* call 0x00024320 */

loc_00023347: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x1AFC10;
    MEM32(esi + 0x90) = 0x75BCD15;
    MEM32(esi + 0x94) = 0x1DF5E0D;
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x8C) = eax;
    edi = esi + 0x5C;
    ecx = 0xA;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00023390
 * Original: 0x00023390 - 0x0002339B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00023390: ;
    MEM32(ecx) = 0x1AFC10;
    g_seh_ebp = ebp; sub_000243E0(); return; /* tail jmp 0x000243E0 */

}

/**
 * sub_000233A0
 * Original: 0x000233A0 - 0x000233B0 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000233A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000233A0: ;
    g_seh_ebp = ebp; sub_00018E90(); return; /* tail jmp 0x00018E90 */

    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_000233B0(); return; /* fallthrough 0x000233B0 */

}

/**
 * sub_000233B0
 * Original: 0x000233B0 - 0x00023406 (86 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000233B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000233B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 1);
    edi = esi + 0x64;
    PUSH32(esp, edi);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x000233C1u); RECOMP_ABI_CALL(0x00024320u, sub_00024320); /* call 0x00024320 */

loc_000233C1: ;
    ecx = edi;
    MEM32(esi) = 0x1AF430;
    PUSH32(esp, 0x000233CEu); RECOMP_ABI_CALL(0x000D23E0u, sub_000D23E0); /* call 0x000D23E0 */

loc_000233CE: ;
    ecx = esi + 0x270;
    PUSH32(esp, 0x000233D9u); RECOMP_ABI_CALL(0x00019840u, sub_00019840); /* call 0x00019840 */

loc_000233D9: ;
    ecx = esi + 0x388;
    PUSH32(esp, 0x000233E4u); RECOMP_ABI_CALL(0x000FA160u, sub_000FA160); /* call 0x000FA160 */

loc_000233E4: ;
    ecx = MEM32(0x1AFC08);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x454) = eax;
    MEM32(esi + 0x10) = eax;
    POP32(esp, edi);
    MEM32(esi) = 0x1AFC78;
    MEM32(esi + 0x458) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00023410
 * Original: 0x00023410 - 0x00023427 (23 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023410(void)
{

loc_00023410: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x458) = eax;
    MEM32(ecx + 0x45C) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00023430
 * Original: 0x00023430 - 0x00023458 (40 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00023430: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x454);
    MEM32(ecx + 0x88) = MEM32(ecx + 0x88) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00023446; /* jne: not equal / not zero */

loc_00023441: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00023446u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00023443u); } /* indirect call */
    }

loc_00023446: ;
    MEM32(esi + 0x454) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00018E90(); return; /* tail jmp 0x00018E90 */

}

/**
 * sub_00023460
 * Original: 0x00023460 - 0x00023490 (48 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023460(void)
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

loc_00023460: ;
    fp_push(MEMF(ecx + 0x45C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x458)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x458] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00023488; /* jp: parity */

loc_00023473: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x45C)); /* fadd dword ptr [ecx + 0x45c] */
    MEMF(ecx + 0x45C) = (float)fp_top(); fp_pop(); /* fstp */
    g_seh_ebp = ebp; sub_00023A90(); return; /* tail jmp 0x00023A90 */

loc_00023488: ;
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00023490(); return; /* fallthrough 0x00023490 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00023490
 * Original: 0x00023490 - 0x000234B4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00023490: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AFC10;
    PUSH32(esp, 0x0002349Eu); RECOMP_ABI_CALL(0x000243E0u, sub_000243E0); /* call 0x000243E0 */

loc_0002349E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000234AE; /* je: equal / zero */

loc_000234A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000234ABu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000234AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000234AE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002349E
 * Original: 0x0002349E - 0x000234C0 (34 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002349E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002349E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000234AE; /* je: equal / zero */

loc_000234A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000234ABu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000234AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000234AE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_000234C0(); return; /* fallthrough 0x000234C0 */

}

/**
 * sub_000234C0
 * Original: 0x000234C0 - 0x00023511 (81 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000234C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000234C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1000000);
    esi = ecx;
    PUSH32(esp, 0x000234CEu); RECOMP_ABI_CALL(0x00033A80u, sub_00033A80); /* call 0x00033A80 */

loc_000234CE: ;
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000234DDu); RECOMP_ABI_CALL(0x00126000u, sub_00126000); /* call 0x00126000 */

loc_000234DD: ;
    eax = MEM32(esi + 0x84);
    MEM32(esi + eax * 4 + 0x5C) = edi;
    eax = MEM32(esi + 0x84);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(esi + 0x84) = eax;
    PUSH32(esp, 0x000234FAu); RECOMP_ABI_CALL(0x00024DD0u, sub_00024DD0); /* call 0x00024DD0 */

loc_000234FA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00023500u); RECOMP_ABI_CALL(0x00024BC0u, sub_00024BC0); /* call 0x00024BC0 */

loc_00023500: ;
    ecx = MEM32(edi + 0x44);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ecx) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00023520
 * Original: 0x00023520 - 0x00023699 (377 bytes, 112 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023520(void)
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

loc_00023520: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002352Cu); RECOMP_ABI_CALL(0x00024DD0u, sub_00024DD0); /* call 0x00024DD0 */

loc_0002352C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00023532u); RECOMP_ABI_CALL(0x00024BC0u, sub_00024BC0); /* call 0x00024BC0 */

loc_00023532: ;
    eax = MEM32(esi + 0x44);
    MEM32(eax) = 0;
    eax = MEM32(esi + 0x84);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00023688; /* jle: less or equal (signed <=) */

loc_00023554: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebx = esi + 0x90;
    edi = esi + 0x5C;

loc_00023560: ;
    eax = MEM32(edi);
    MEM32(eax + 0x454) = esi;
    MEM32(eax + 0x45C) = 0;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    ebp = eax + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00023584u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00023581u); } /* indirect call */
    }

loc_00023584: ;
    fp_push(MEMF(0x1D7644)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x4C)); /* fmul dword ptr [esp + 0x4c] */
    ecx = ebx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1D7644)); /* fld float */
    ebp = MEM32(esp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    PUSH32(esp, ebp);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000235ACu); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_000235AC: ;
    PUSH32(esp, ebp);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebx;
    PUSH32(esp, 0x000235B8u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_000235B8: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x000235C4u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_000235C4: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x1C);
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, ebp);
    ecx = ebx;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000235E4u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_000235E4: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x000235F0u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_000235F0: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x000235FCu); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_000235FC: ;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x18);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x68)); /* fadd dword ptr [eax + 0x68] */
    ecx = MEM32(edi);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    edx = esp + 0x20;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 0x18);
    PUSH32(esp, 0x0002363Au); RECOMP_ABI_CALL(0x000D0FC0u, sub_000D0FC0); /* call 0x000D0FC0 */

loc_0002363A: ;
    ebp = MEM32(edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00023642u); RECOMP_ABI_CALL(0x00024D80u, sub_00024D80); /* call 0x00024D80 */

loc_00023642: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00023648u); RECOMP_ABI_CALL(0x00024BA0u, sub_00024BA0); /* call 0x00024BA0 */

loc_00023648: ;
    edx = MEM32(ebp + 0x44);
    MEM32(edx) = 1;
    eax = MEM32(esi + 0x88);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x88) = eax;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, 0x0002366Bu); RECOMP_ABI_CALL(0x000D1210u, sub_000D1210); /* call 0x000D1210 */

loc_0002366B: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 0x84);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00023560; /* jl: less (signed <) */

loc_00023685: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00023688: ;
    MEM32(esi + 0x8C) = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000236A0
 * Original: 0x000236A0 - 0x00023729 (137 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000236A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000236A0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x8C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00023726; /* je: equal / zero */

loc_000236B0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000236B7u); RECOMP_ABI_CALL(0x00024D80u, sub_00024D80); /* call 0x00024D80 */

loc_000236B7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000236BDu); RECOMP_ABI_CALL(0x00024BA0u, sub_00024BA0); /* call 0x00024BA0 */

loc_000236BD: ;
    eax = MEM32(ebx + 0x44);
    MEM32(eax) = 1;
    eax = MEM32(ebx + 0x84);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00023719; /* jle: less or equal (signed <=) */

loc_000236D5: ;
    PUSH32(esp, edi);
    edi = ebx + 0x5C;
    /* nop */

loc_000236E0: ;
    eax = MEM32(edi);
    MEM32(eax + 0x454) = esi;
    MEM32(eax + 0x45C) = esi;
    esi = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000236F6u); RECOMP_ABI_CALL(0x00024DD0u, sub_00024DD0); /* call 0x00024DD0 */

loc_000236F6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000236FCu); RECOMP_ABI_CALL(0x00024BC0u, sub_00024BC0); /* call 0x00024BC0 */

loc_000236FC: ;
    ecx = MEM32(esi + 0x44);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = 0;
    eax = MEM32(ebx + 0x84);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000236E0; /* jl: less (signed <) */

loc_00023718: ;
    POP32(esp, edi);

loc_00023719: ;
    MEM32(ebx + 0x88) = esi;
    MEM32(ebx + 0x8C) = esi;
    POP32(esp, ebp);

loc_00023726: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00023730
 * Original: 0x00023730 - 0x00023754 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00023730: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AFC78;
    PUSH32(esp, 0x0002373Eu); RECOMP_ABI_CALL(0x0001FD70u, sub_0001FD70); /* call 0x0001FD70 */

loc_0002373E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002374E; /* je: equal / zero */

loc_00023745: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002374Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0002374B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002374E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00023760
 * Original: 0x00023760 - 0x000237A8 (72 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023760(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00023760: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    fp_push(MEMF(edi + 4)); /* fld float */
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE140)); /* fmul dword ptr [0x1ae140] */
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB30)); /* fmul dword ptr [0x1aeb30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x90) = eax;
    PUSH32(esp, 0x00023791u); RECOMP_ABI_CALL(0x000236A0u, sub_000236A0); /* call 0x000236A0 */

loc_00023791: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0002379Eu); RECOMP_ABI_CALL(0x00023990u, sub_00023990); /* call 0x00023990 */

loc_0002379E: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000237B0
 * Original: 0x000237B0 - 0x0002380E (94 bytes, 40 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000237B0(void)
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

loc_000237B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000237E5u); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_000237E5: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) / fp_top()); /* fdivr dword ptr [0x1c91d0] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00023810
 * Original: 0x00023810 - 0x00023870 (96 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023810(void)
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

loc_00023810: ;
    ecx = MEM32(esp + 4);
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 8);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002386A; /* je: equal / zero */

loc_00023824: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0002386A; /* jnp: not parity */

loc_00023830: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002386A; /* je: equal / zero */

loc_0002383D: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0002386A; /* jnp: not parity */

loc_0002384A: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002386A; /* je: equal / zero */

loc_00023857: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0002386A; /* jnp: not parity */

loc_00023864: ;
    SET_LO8(eax, 1);
    eax = ZX8(LO8(eax));
    esp += 4; return; /* ret */

loc_0002386A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = ZX8(LO8(eax));
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00023870
 * Original: 0x00023870 - 0x0002390B (155 bytes, 53 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00023870(void)
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

loc_00023870: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp)); /* fadd dword ptr [esp] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(esp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x20);
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xC) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_00023910
 * Original: 0x00023910 - 0x00023943 (51 bytes, 11 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00023910(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00023910: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0xEC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(ecx + 0xEC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xF0)); /* fadd dword ptr [ecx + 0xf0] */
    MEMF(ecx + 0xF0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xF4)); /* fadd dword ptr [ecx + 0xf4] */
    MEMF(ecx + 0xF4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00023950
 * Original: 0x00023950 - 0x00023987 (55 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00023950: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    PUSH32(esp, esi);
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x48) = eax;
    PUSH32(esp, 0x00023970u); RECOMP_ABI_CALL(0x00024D80u, sub_00024D80); /* call 0x00024D80 */

loc_00023970: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00023976u); RECOMP_ABI_CALL(0x00024BA0u, sub_00024BA0); /* call 0x00024BA0 */

loc_00023976: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00023980u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002397Du); } /* indirect call */
    }

loc_00023980: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00023990
 * Original: 0x00023990 - 0x00023A8A (250 bytes, 96 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023990(void)
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

loc_00023990: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000239AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000239A7u); } /* indirect call */
    }

loc_000239AA: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000239BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000239B7u); } /* indirect call */
    }

loc_000239BA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000239C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000239BEu); } /* indirect call */
    }

loc_000239C1: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00023A6B; /* je: equal / zero */

loc_000239CC: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    eax = edi + 0x3C;
    PUSH32(esp, eax);
    ecx = esi + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000239E2u); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_000239E2: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(edi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    eax = MEM32(esi + 0x44);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x44);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00023A53; /* je: equal / zero */

loc_00023A1F: ;
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

loc_00023A53: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00023A5F; /* je: equal / zero */

loc_00023A5A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00023A5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00023A5Cu); } /* indirect call */
    }

loc_00023A5F: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00023A6B; /* je: equal / zero */

loc_00023A66: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00023A6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00023A68u); } /* indirect call */
    }

loc_00023A6B: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x00023A73u); RECOMP_ABI_CALL(0x000D12B0u, sub_000D12B0); /* call 0x000D12B0 */

loc_00023A73: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00023A7Cu); RECOMP_ABI_CALL(0x000256F0u, sub_000256F0); /* call 0x000256F0 */

loc_00023A7C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00023A90
 * Original: 0x00023A90 - 0x00023B3C (172 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023A90(void)
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

loc_00023A90: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00023AA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00023AA0u); } /* indirect call */
    }

loc_00023AA3: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00023B35; /* je: equal / zero */

loc_00023AAE: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    eax = edi + 0x3C;
    PUSH32(esp, eax);
    ecx = esi + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00023AC4u); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_00023AC4: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(edi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    eax = MEM32(esi + 0x44);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x44);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00023B35; /* je: equal / zero */

loc_00023B01: ;
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

loc_00023B35: ;
    POP32(esp, esi);
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
 * sub_00023A94
 * Original: 0x00023A94 - 0x00023B3C (168 bytes, 62 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023A94(void)
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

loc_00023A94: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00023AA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00023AA0u); } /* indirect call */
    }

loc_00023AA3: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00023B35; /* je: equal / zero */

loc_00023AAE: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    eax = edi + 0x3C;
    PUSH32(esp, eax);
    ecx = esi + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00023AC4u); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_00023AC4: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(edi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    eax = MEM32(esi + 0x44);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x44);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00023B35; /* je: equal / zero */

loc_00023B01: ;
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

loc_00023B35: ;
    POP32(esp, esi);
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
 * sub_00023B40
 * Original: 0x00023B40 - 0x00023B48 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00023B40: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x30)); return; /* indirect tail jmp */

}

/**
 * sub_00023B50
 * Original: 0x00023B50 - 0x00023B60 (16 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00023B50: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_00023B60(); return; /* fallthrough 0x00023B60 */

}

/**
 * sub_00023B60
 * Original: 0x00023B60 - 0x00023B80 (32 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00023B60: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x40);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = eax + 0x3C;
    PUSH32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00023B74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00023B71u); } /* indirect call */
    }

loc_00023B74: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00023B80(); return; /* fallthrough 0x00023B80 */

}

/**
 * sub_00023B80
 * Original: 0x00023B80 - 0x00023B88 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00023B80: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x2C)); return; /* indirect tail jmp */

}

/**
 * sub_00023B90
 * Original: 0x00023B90 - 0x00023BA0 (16 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00023B90: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x34)); return; /* indirect tail jmp */

    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_00023BA0(); return; /* fallthrough 0x00023BA0 */

}

/**
 * sub_00023BA0
 * Original: 0x00023BA0 - 0x00023C40 (160 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023BA0(void)
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

loc_00023BA0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi + 0x18);
    eax = edi + 0x3C;
    PUSH32(esp, eax);
    ecx = esi + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00023BBCu); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_00023BBC: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(edi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    eax = MEM32(esi + 0x44);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x44);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00023C2E; /* je: equal / zero */

loc_00023BFA: ;
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

loc_00023C2E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00023C40(); return; /* fallthrough 0x00023C40 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00023C40
 * Original: 0x00023C40 - 0x00023C4D (13 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023C40(void)
{

loc_00023C40: ;
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00023C4Cu); RECOMP_ABI_CALL(0x000F9EA0u, sub_000F9EA0); /* call 0x000F9EA0 */

loc_00023C4C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00023C50
 * Original: 0x00023C50 - 0x00023C58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00023C50: ;
    ecx = MEM32(ecx + 0x18);
    g_seh_ebp = ebp; sub_000D1590(); return; /* tail jmp 0x000D1590 */

}

/**
 * sub_00023C60
 * Original: 0x00023C60 - 0x00023C6D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023C60(void)
{

loc_00023C60: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x1C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00023C70
 * Original: 0x00023C70 - 0x00023C9B (43 bytes, 13 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00023C70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00023C70: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x44) = eax;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 0x48) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x4C) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x50) = eax;
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF32C)); /* fmul dword ptr [0x1af32c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00023C86
 * Original: 0x00023C86 - 0x00023C9B (21 bytes, 6 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00023C86(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00023C86: ;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x50) = eax;
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF32C)); /* fmul dword ptr [0x1af32c] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00023CA0
 * Original: 0x00023CA0 - 0x00023ECA (554 bytes, 167 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023CA0(void)
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

loc_00023CA0: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    fp_push(MEMF(ecx + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x54)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x54] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00023EC1; /* jp: parity */

loc_00023CD1: ;
    fp_push(MEMF(ecx + 0x50)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x48)); /* fmul dword ptr [ecx + 0x48] */
    fp_push(MEMF(ecx + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x48)); /* fmul dword ptr [ecx + 0x48] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00023D26u); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_00023D26: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esi + 0x18);
    fp_top() = -fp_top(); /* fchs */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = esp + 0x3C;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1C91D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / g_fp_stack[(g_fp_top + 2) & 7]); /* fdiv st(2) */
    MEMF(esp + 0x58) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) - fp_top()); /* fsubr dword ptr [0x1c91d0] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00023D8Fu); RECOMP_ABI_CALL(0x000CE7E0u, sub_000CE7E0); /* call 0x000CE7E0 */

loc_00023D8F: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push(MEMF(esp + 0x28)); /* fld float */
    eax = esp + 0x24;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    PUSH32(esp, eax);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00023DCDu); RECOMP_ABI_CALL(0x00023870u, sub_00023870); /* call 0x00023870 */

loc_00023DCD: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x38;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xC)); /* fadd dword ptr [eax + 0xc] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00023E04u); RECOMP_ABI_CALL(0x000237B0u, sub_000237B0); /* call 0x000237B0 */

loc_00023E04: ;
    ecx = MEM32(esi + 0x18);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = ecx + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00023E15u); RECOMP_ABI_CALL(0x000D18F0u, sub_000D18F0); /* call 0x000D18F0 */

loc_00023E15: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    ecx = MEM32(esi + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    edx = MEM32(ecx + 0x20);
    fp_push(MEMF(esp + 8)); /* fld float */
    MEM32(esp + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    eax = MEM32(ecx + 0x24);
    MEM32(esp + 0x14) = eax;
    edx = MEM32(ecx + 0x28);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(esp + 0x18) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    edx = ecx + 0x14;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00023EB5u); RECOMP_ABI_CALL(0x000D0F00u, sub_000D0F00); /* call 0x000D0F00 */

loc_00023EB5: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00023EC1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00023ED0
 * Original: 0x00023ED0 - 0x00023F93 (195 bytes, 57 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00023ED0(void)
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

loc_00023ED0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x28);
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    eax = MEM32(ecx + 0x18);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x4C)); /* fmul dword ptr [eax + 0x4c] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x50)); /* fmul dword ptr [eax + 0x50] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x50)); /* fmul dword ptr [eax + 0x50] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x48)); /* fmul dword ptr [eax + 0x48] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x48)); /* fmul dword ptr [eax + 0x48] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x4C)); /* fmul dword ptr [eax + 0x4c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp)); /* fadd dword ptr [esp] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xEC)); /* fadd dword ptr [eax + 0xec] */
    MEMF(eax + 0xEC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xF0)); /* fadd dword ptr [eax + 0xf0] */
    MEMF(eax + 0xF0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xF4)); /* fadd dword ptr [eax + 0xf4] */
    MEMF(eax + 0xF4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00023FA0
 * Original: 0x00023FA0 - 0x0002401B (123 bytes, 41 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00023FA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x88);
    esi = ecx;
    PUSH32(esp, 0x00023FADu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00023FAD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00023FBD; /* je: equal / zero */

loc_00023FB4: ;
    ecx = eax;
    PUSH32(esp, 0x00023FBBu); RECOMP_ABI_CALL(0x001061F0u, sub_001061F0); /* call 0x001061F0 */

loc_00023FBB: ;
    goto loc_00023FBF;

loc_00023FBD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00023FBF: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x54) = eax;
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x54);
    edx = eax + 8;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x18) = eax;
    edx = eax + 0x3C;
    eax = MEM32(esp + 0x10);
    MEM32(ecx + 0x14) = edx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, 0x00023FF0u); RECOMP_ABI_CALL(0x00106000u, sub_00106000); /* call 0x00106000 */

loc_00023FF0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00023FFDu); RECOMP_ABI_CALL(0x00106050u, sub_00106050); /* call 0x00106050 */

loc_00023FFD: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x44);
    MEM32(eax + 0x78) = ecx;
    edx = MEM32(esi + 0x54);
    eax = MEM32(0x1DA00C);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00024017u); RECOMP_ABI_CALL(0x00105B30u, sub_00105B30); /* call 0x00105B30 */

loc_00024017: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00024020
 * Original: 0x00024020 - 0x0002409F (127 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00024020: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x120);
    esi = ecx;
    PUSH32(esp, 0x0002402Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0002402D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024053; /* je: equal / zero */

loc_00024034: ;
    ecx = MEM32(0x1DA00C);
    edx = MEM32(ecx + 0x20);
    ecx = MEM32(edx + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00024051u); RECOMP_ABI_CALL(0x00106900u, sub_00106900); /* call 0x00106900 */

loc_00024051: ;
    goto loc_00024055;

loc_00024053: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00024055: ;
    ecx = MEM32(esi + 0x18);
    MEM32(esi + 0x58) = eax;
    edx = ecx + 8;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x18) = ecx;
    edx = ecx + 0x3C;
    MEM32(eax + 0x14) = edx;
    eax = MEM32(esi + 0x58);
    ecx = MEM32(0x1CF1D4);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    edx = MEM32(0x1CF1D8);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x1CF1DC);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0x58);
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    eax = MEM32(0x1DA00C);
    ecx = MEM32(eax + 0x20);
    g_seh_ebp = ebp; sub_00105B30(); return; /* tail jmp 0x00105B30 */

}

/**
 * sub_0002408E
 * Original: 0x0002408E - 0x0002409F (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002408E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002408E: ;
    MEM32(esp + 4) = edx;
    eax = MEM32(0x1DA00C);
    ecx = MEM32(eax + 0x20);
    g_seh_ebp = ebp; sub_00105B30(); return; /* tail jmp 0x00105B30 */

}

/**
 * sub_000240A0
 * Original: 0x000240A0 - 0x0002419D (253 bytes, 83 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000240A0(void)
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

loc_000240A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    edi = esi + 0x388;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x000240E2u); RECOMP_ABI_CALL(0x000F9E30u, sub_000F9E30); /* call 0x000F9E30 */

loc_000240E2: ;
    ebx = MEM32(esp + 0x2C);
    MEM32(esi + 0x44) = edi;
    eax = MEM32(ebx);
    MEM32(esi + 0x48) = eax;
    ecx = MEM32(ebx + 4);
    MEM32(esi + 0x4C) = ecx;
    edx = MEM32(ebx + 8);
    MEM32(esi + 0x50) = edx;
    fp_push(MEMF(esi + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF32C)); /* fmul dword ptr [0x1af32c] */
    PUSH32(esp, edi);
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x1D3EA4);
    PUSH32(esp, 0x00024112u); RECOMP_ABI_CALL(0x000F2DC0u, sub_000F2DC0); /* call 0x000F2DC0 */

loc_00024112: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00024118u); RECOMP_ABI_CALL(0x00024BC0u, sub_00024BC0); /* call 0x00024BC0 */

loc_00024118: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x5C) = ebp;
    MEM32(esi + 0x60) = ebp;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00024143; /* jne: not equal / not zero */

loc_00024132: ;
    eax = MEM32(esi + 0x3DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024143; /* je: equal / zero */

loc_0002413C: ;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 0x58) = ecx;

loc_00024143: ;
    ebp = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002415C; /* je: equal / zero */

loc_0002414B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00024151u); RECOMP_ABI_CALL(0x001025F0u, sub_001025F0); /* call 0x001025F0 */

loc_00024151: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002415C; /* je: equal / zero */

loc_00024158: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    goto loc_00024162;

loc_0002415C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1AF724);

loc_00024162: ;
    edi = esi + 0x270;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002416Eu); RECOMP_ABI_CALL(0x00025960u, sub_00025960); /* call 0x00025960 */

loc_0002416E: ;
    edx = MEM32(esp + 0x2C);
    eax = esi + 0x64;
    MEM32(edi + 0x20) = eax;
    MEM32(edi + 0x44) = eax;
    MEM32(edi + 0xC8) = eax;
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x1C) = edi;
    PUSH32(esp, 0x00024193u); RECOMP_ABI_CALL(0x000D1590u, sub_000D1590); /* call 0x000D1590 */

loc_00024193: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000240A8
 * Original: 0x000240A8 - 0x0002419D (245 bytes, 80 insns)
 * Category: game_physics
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000240A8(void)
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

loc_000240A8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    edi = esi + 0x388;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x000240E2u); RECOMP_ABI_CALL(0x000F9E30u, sub_000F9E30); /* call 0x000F9E30 */

loc_000240E2: ;
    ebx = MEM32(esp + 0x2C);
    MEM32(esi + 0x44) = edi;
    eax = MEM32(ebx);
    MEM32(esi + 0x48) = eax;
    ecx = MEM32(ebx + 4);
    MEM32(esi + 0x4C) = ecx;
    edx = MEM32(ebx + 8);
    MEM32(esi + 0x50) = edx;
    fp_push(MEMF(esi + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF32C)); /* fmul dword ptr [0x1af32c] */
    PUSH32(esp, edi);
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x1D3EA4);
    PUSH32(esp, 0x00024112u); RECOMP_ABI_CALL(0x000F2DC0u, sub_000F2DC0); /* call 0x000F2DC0 */

loc_00024112: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00024118u); RECOMP_ABI_CALL(0x00024BC0u, sub_00024BC0); /* call 0x00024BC0 */

loc_00024118: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x5C) = ebp;
    MEM32(esi + 0x60) = ebp;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00024143; /* jne: not equal / not zero */

loc_00024132: ;
    eax = MEM32(esi + 0x3DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024143; /* je: equal / zero */

loc_0002413C: ;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 0x58) = ecx;

loc_00024143: ;
    ebp = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002415C; /* je: equal / zero */

loc_0002414B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00024151u); RECOMP_ABI_CALL(0x001025F0u, sub_001025F0); /* call 0x001025F0 */

loc_00024151: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002415C; /* je: equal / zero */

loc_00024158: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    goto loc_00024162;

loc_0002415C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1AF724);

loc_00024162: ;
    edi = esi + 0x270;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002416Eu); RECOMP_ABI_CALL(0x00025960u, sub_00025960); /* call 0x00025960 */

loc_0002416E: ;
    edx = MEM32(esp + 0x2C);
    eax = esi + 0x64;
    MEM32(edi + 0x20) = eax;
    MEM32(edi + 0x44) = eax;
    MEM32(edi + 0xC8) = eax;
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x1C) = edi;
    PUSH32(esp, 0x00024193u); RECOMP_ABI_CALL(0x000D1590u, sub_000D1590); /* call 0x000D1590 */

loc_00024193: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000241A0
 * Original: 0x000241A0 - 0x000241B4 (20 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000241A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000241A0: ;
    eax = MEM32(ecx + 0x3DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000241B1; /* je: equal / zero */

loc_000241AA: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x58) = ecx;

loc_000241B1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000241C0
 * Original: 0x000241C0 - 0x000241CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000241C0(void)
{

loc_000241C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x5C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000241D0
 * Original: 0x000241D0 - 0x0002430F (319 bytes, 99 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000241D0(void)
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

loc_000241D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00024303; /* jne: not equal / not zero */

loc_000241E5: ;
    fp_push(MEMF(ebx + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00024303; /* jnp: not parity */

loc_000241F9: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00024303; /* jle: less or equal (signed <=) */

loc_00024211: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = 0x14;
    PUSH32(esp, edi);
    /* nop */

loc_00024220: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(0x1D9FB8);
    eax = MEM32(ecx + edx);
    ebp = MEM32(eax + 0x3C);
    esi = MEM32(ebx + 0x1C);
    edi = MEM32(ebp + 0x1C);
    ecx = esi + 8;
    PUSH32(esp, ecx);
    edx = edi + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00024243u); RECOMP_ABI_CALL(0x00023810u, sub_00023810); /* call 0x00023810 */

loc_00024243: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000242DB; /* je: equal / zero */

loc_0002424E: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00024255u); RECOMP_ABI_CALL(0x00070720u, sub_00070720); /* call 0x00070720 */

loc_00024255: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000242DB; /* je: equal / zero */

loc_0002425C: ;
    eax = MEM32(ebp + 0x48);
    fp_push(MEMF(eax + 0xB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 0x5C)); /* fsub dword ptr [ebx + 0x5c] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(eax + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(0x1D9FB8);
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000242CE; /* jle: less or equal (signed <=) */

loc_0002427D: ;
    /* nop */

loc_00024280: ;
    eax = MEM32(ebp + 0x48);
    SET_LO8(edx, MEM8(eax + 0x54));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(edx, LO8(edx) >> LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000242C6; /* je: equal / zero */

loc_0002428F: ;
    ecx = MEM32(edi + 0x58);
    eax = ZX8(LO8(ebx));
    edx = MEM32(ecx + eax * 4);
    esi = MEM32(edx + 0xD4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000242C6; /* je: equal / zero */

loc_000242A2: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x9C);
    PUSH32(esp, 0x000242B8u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000242B8: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000242C0u); RECOMP_ABI_CALL(0x000C6EC0u, sub_000C6EC0); /* call 0x000C6EC0 */

loc_000242C0: ;
    edi = MEM32(0x1D9FB8);

loc_000242C6: ;
    eax = MEM32(edi + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00024280; /* jl: less (signed <) */

loc_000242CE: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax + 0x60) = 1;
    ebx = eax;

loc_000242DB: ;
    eax = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(0x1D9FB8);
    edx = MEM32(ecx + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00024220; /* jl: less (signed <) */

loc_00024300: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00024303: ;
    ecx = MEM32(ebx + 0x18);
    edx = MEM32(ecx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x34)); return; /* indirect tail jmp */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00024310
 * Original: 0x00024310 - 0x0002431C (12 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00024310: ;
    MEM32(ecx + 0x60) = 0;
    g_seh_ebp = ebp; sub_00023990(); return; /* tail jmp 0x00023990 */

}

/**
 * sub_00024320
 * Original: 0x00024320 - 0x00024372 (82 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024320: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00024339u); RECOMP_ABI_CALL(0x00025660u, sub_00025660); /* call 0x00025660 */

loc_00024339: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x1AFCF8;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    PUSH32(esp, esi);
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x48) = eax;
    PUSH32(esp, 0x0002435Cu); RECOMP_ABI_CALL(0x00024D80u, sub_00024D80); /* call 0x00024D80 */

loc_0002435C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00024362u); RECOMP_ABI_CALL(0x00024BA0u, sub_00024BA0); /* call 0x00024BA0 */

loc_00024362: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0002436Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024369u); } /* indirect call */
    }

loc_0002436C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00024344
 * Original: 0x00024344 - 0x00024372 (46 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024344(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024344: ;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    PUSH32(esp, esi);
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x48) = eax;
    PUSH32(esp, 0x0002435Cu); RECOMP_ABI_CALL(0x00024D80u, sub_00024D80); /* call 0x00024D80 */

loc_0002435C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00024362u); RECOMP_ABI_CALL(0x00024BA0u, sub_00024BA0); /* call 0x00024BA0 */

loc_00024362: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0002436Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024369u); } /* indirect call */
    }

loc_0002436C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00024380
 * Original: 0x00024380 - 0x000243D7 (87 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024380: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000243AC; /* je: equal / zero */

loc_0002438A: ;
    PUSH32(esp, eax);
    eax = MEM32(0x1DA00C);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0x00024398u); RECOMP_ABI_CALL(0x00105B80u, sub_00105B80); /* call 0x00105B80 */

loc_00024398: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000243AC; /* je: equal / zero */

loc_0002439F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000243A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000243A3u); } /* indirect call */
    }

loc_000243A5: ;
    MEM32(esi + 0x54) = 0;

loc_000243AC: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000243D5; /* je: equal / zero */

loc_000243B3: ;
    PUSH32(esp, eax);
    eax = MEM32(0x1DA00C);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0x000243C1u); RECOMP_ABI_CALL(0x00105B80u, sub_00105B80); /* call 0x00105B80 */

loc_000243C1: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000243D5; /* je: equal / zero */

loc_000243C8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000243CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000243CCu); } /* indirect call */
    }

loc_000243CE: ;
    MEM32(esi + 0x58) = 0;

loc_000243D5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000243E0
 * Original: 0x000243E0 - 0x000243F6 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000243E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000243E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AFCF8;
    PUSH32(esp, 0x000243EEu); RECOMP_ABI_CALL(0x00024380u, sub_00024380); /* call 0x00024380 */

loc_000243EE: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000256A0(); return; /* tail jmp 0x000256A0 */

}

/**
 * sub_00024400
 * Original: 0x00024400 - 0x00024430 (48 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00024400: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AFCF8;
    PUSH32(esp, 0x0002440Eu); RECOMP_ABI_CALL(0x00024380u, sub_00024380); /* call 0x00024380 */

loc_0002440E: ;
    ecx = esi;
    PUSH32(esp, 0x00024415u); RECOMP_ABI_CALL(0x000256A0u, sub_000256A0); /* call 0x000256A0 */

loc_00024415: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00024425; /* je: equal / zero */

loc_0002441C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00024422u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00024422: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00024425: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00024430(); return; /* fallthrough 0x00024430 */

}

/**
 * sub_00024430
 * Original: 0x00024430 - 0x00024494 (100 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024430: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0002443Du); RECOMP_ABI_CALL(0x0001FC50u, sub_0001FC50); /* call 0x0001FC50 */

loc_0002443D: ;
    PUSH32(esp, 0x10);
    ecx = esi + 0x1134;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(esi) = 0x1AFD70;
    PUSH32(esp, 0x00024453u); RECOMP_ABI_CALL(0x00100DA0u, sub_00100DA0); /* call 0x00100DA0 */

loc_00024453: ;
    MEM32(esi + 0x1130) = 0;
    MEM32(esi + 0xF70) = 0;
    MEM32(esi + 0xFC4) = 0;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xF60) = edx;
    MEM32(esi + 0xF64) = edx;
    MEM32(esi + 0xF68) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xF6C) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000244A0
 * Original: 0x000244A0 - 0x000244A7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000244A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000244A0: ;
    fp_push(MEMF(ecx + 0x1130)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000244B0
 * Original: 0x000244B0 - 0x0002450D (93 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000244B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000244B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000244C0;

    /* nop */

loc_000244C0: ;
    eax = MEM32(0x1D98D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000244EA; /* jne: not equal / not zero */

loc_000244C9: ;
    PUSH32(esp, 0xB64);
    PUSH32(esp, 0x000244D3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000244D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000244E3; /* je: equal / zero */

loc_000244DA: ;
    ecx = eax;
    PUSH32(esp, 0x000244E1u); RECOMP_ABI_CALL(0x0008FB90u, sub_0008FB90); /* call 0x0008FB90 */

loc_000244E1: ;
    goto loc_000244E5;

loc_000244E3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000244E5: ;
    MEM32(0x1D98D4) = eax;

loc_000244EA: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + ebx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    edx = ecx + eax + 0x154;
    eax = MEM32(edi + 0xF14);
    MEM32(eax + esi * 4) = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000244C0; /* jl: less (signed <) */

loc_00024507: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024510
 * Original: 0x00024510 - 0x00024534 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024510: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AFD70;
    PUSH32(esp, 0x0002451Eu); RECOMP_ABI_CALL(0x0001F190u, sub_0001F190); /* call 0x0001F190 */

loc_0002451E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002452E; /* je: equal / zero */

loc_00024525: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002452Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0002452B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002452E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024540
 * Original: 0x00024540 - 0x00024566 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024540: ;
    MEM32(ecx) = 0x1AFE0C;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024565; /* je: equal / zero */

loc_0002454D: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_0002455E; /* je: equal / zero */

loc_00024557: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0002455Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002455Bu); } /* indirect call */
    }

loc_0002455D: ;
    esp += 4; return; /* ret */

loc_0002455E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00024564u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00024564: ;
    POP32(esp, ecx);

loc_00024565: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00024570
 * Original: 0x00024570 - 0x00024596 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024570: ;
    MEM32(ecx) = 0x1AFE1C;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024595; /* je: equal / zero */

loc_0002457D: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_0002458E; /* je: equal / zero */

loc_00024587: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0002458Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002458Bu); } /* indirect call */
    }

loc_0002458D: ;
    esp += 4; return; /* ret */

loc_0002458E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00024594u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00024594: ;
    POP32(esp, ecx);

loc_00024595: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000245A0
 * Original: 0x000245A0 - 0x000245C6 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000245A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000245A0: ;
    MEM32(ecx) = 0x1AFE2C;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000245C5; /* je: equal / zero */

loc_000245AD: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_000245BE; /* je: equal / zero */

loc_000245B7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000245BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000245BBu); } /* indirect call */
    }

loc_000245BD: ;
    esp += 4; return; /* ret */

loc_000245BE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000245C4u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000245C4: ;
    POP32(esp, ecx);

loc_000245C5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000245D0
 * Original: 0x000245D0 - 0x00024611 (65 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000245D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000245D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x1AFE0C;
    if (CMP_EQ(_fa, _fb)) goto loc_000245FB; /* je: equal / zero */

loc_000245E0: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_000245F2; /* je: equal / zero */

loc_000245EA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000245F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000245EEu); } /* indirect call */
    }

loc_000245F0: ;
    goto loc_000245FB;

loc_000245F2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000245F8u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000245F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000245FB: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002460B; /* je: equal / zero */

loc_00024602: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00024608u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00024608: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002460B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024620
 * Original: 0x00024620 - 0x0002467B (91 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024620: ;
    SET_LO8(edx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00024661; /* je: equal / zero */

loc_0002462C: ;
    ecx = MEM32(esi + -4);
    PUSH32(esp, edi);
    edi = esi + -4;
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0002464C; /* js: sign (negative) */

loc_0002463D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi;

loc_00024640: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0x1AEFDC;
    if ((_fa != 0)) goto loc_00024640; /* jne: not equal / not zero */

loc_0002464C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002465A; /* je: equal / zero */

loc_00024651: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00024657u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00024657: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002465A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00024661: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    MEM32(esi) = 0x1AEFDC;
    if (TEST_Z(_fa, _fb)) goto loc_00024675; /* je: equal / zero */

loc_0002466C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00024672u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00024672: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00024675: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024680
 * Original: 0x00024680 - 0x000246C1 (65 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024680: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x1AFE1C;
    if (CMP_EQ(_fa, _fb)) goto loc_000246AB; /* je: equal / zero */

loc_00024690: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_000246A2; /* je: equal / zero */

loc_0002469A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000246A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002469Eu); } /* indirect call */
    }

loc_000246A0: ;
    goto loc_000246AB;

loc_000246A2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000246A8u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000246A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000246AB: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000246BB; /* je: equal / zero */

loc_000246B2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000246B8u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000246B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000246BB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000246D0
 * Original: 0x000246D0 - 0x0002472B (91 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000246D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000246D0: ;
    SET_LO8(edx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00024711; /* je: equal / zero */

loc_000246DC: ;
    ecx = MEM32(esi + -4);
    PUSH32(esp, edi);
    edi = esi + -4;
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_000246FC; /* js: sign (negative) */

loc_000246ED: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi;

loc_000246F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0x1AFDF8;
    if ((_fa != 0)) goto loc_000246F0; /* jne: not equal / not zero */

loc_000246FC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002470A; /* je: equal / zero */

loc_00024701: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00024707u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00024707: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002470A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00024711: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    MEM32(esi) = 0x1AFDF8;
    if (TEST_Z(_fa, _fb)) goto loc_00024725; /* je: equal / zero */

loc_0002471C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00024722u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00024722: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00024725: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024730
 * Original: 0x00024730 - 0x00024771 (65 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024730: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x1AFE2C;
    if (CMP_EQ(_fa, _fb)) goto loc_0002475B; /* je: equal / zero */

loc_00024740: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00024752; /* je: equal / zero */

loc_0002474A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00024750u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002474Eu); } /* indirect call */
    }

loc_00024750: ;
    goto loc_0002475B;

loc_00024752: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00024758u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00024758: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002475B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002476B; /* je: equal / zero */

loc_00024762: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00024768u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00024768: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002476B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024780
 * Original: 0x00024780 - 0x000247DB (91 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024780: ;
    SET_LO8(edx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000247C1; /* je: equal / zero */

loc_0002478C: ;
    ecx = MEM32(esi + -4);
    PUSH32(esp, edi);
    edi = esi + -4;
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_000247AC; /* js: sign (negative) */

loc_0002479D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi;

loc_000247A0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0x1AFDFC;
    if ((_fa != 0)) goto loc_000247A0; /* jne: not equal / not zero */

loc_000247AC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000247BA; /* je: equal / zero */

loc_000247B1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000247B7u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000247B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000247BA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000247C1: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    MEM32(esi) = 0x1AFDFC;
    if (TEST_Z(_fa, _fb)) goto loc_000247D5; /* je: equal / zero */

loc_000247CC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000247D2u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000247D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000247D5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000247E0
 * Original: 0x000247E0 - 0x000247E9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000247E0(void)
{

loc_000247E0: ;
    eax = ecx;
    MEM32(eax) = 0x1AEFDC;
    esp += 4; return; /* ret */

}

/**
 * sub_000247F0
 * Original: 0x000247F0 - 0x000247F9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000247F0(void)
{

loc_000247F0: ;
    eax = ecx;
    MEM32(eax) = 0x1AFDF8;
    esp += 4; return; /* ret */

}

/**
 * sub_00024800
 * Original: 0x00024800 - 0x00024809 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024800(void)
{

loc_00024800: ;
    eax = ecx;
    MEM32(eax) = 0x1AFDFC;
    esp += 4; return; /* ret */

}

/**
 * sub_00024810
 * Original: 0x00024810 - 0x00024866 (86 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024810: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0002481Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024818u); } /* indirect call */
    }

loc_0002481B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002484E; /* je: equal / zero */

loc_0002481F: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024854; /* je: equal / zero */

loc_0002483C: ;
    MEM32(ecx + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0002484E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00024854: ;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024870
 * Original: 0x00024870 - 0x000248FA (138 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024870: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000248E6; /* je: equal / zero */

loc_0002487D: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002489F; /* je: equal / zero */

loc_00024884: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00024896; /* je: equal / zero */

loc_0002488E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00024894u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024892u); } /* indirect call */
    }

loc_00024894: ;
    goto loc_0002489F;

loc_00024896: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002489Cu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0002489C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002489F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000248DF; /* jle: less or equal (signed <=) */

loc_000248A3: ;
    ecx = ebx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000248B1u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000248B1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000248D1; /* je: equal / zero */

loc_000248B8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x247E0);
    PUSH32(esp, ebx);
    esi = eax + 4;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    MEM32(eax) = ebx;
    PUSH32(esp, 0x000248CCu); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_000248CC: ;
    eax = esi;
    POP32(esp, esi);
    goto loc_000248D3;

loc_000248D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000248D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000248E6; /* jne: not equal / not zero */

loc_000248DA: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000248DF: ;
    MEM32(edi + 4) = 0;

loc_000248E6: ;
    edx = MEM32(edi);
    ecx = edi;
    MEM32(edi + 8) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000248F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000248EDu); } /* indirect call */
    }

loc_000248F0: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024900
 * Original: 0x00024900 - 0x00024924 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024900: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AFE3C;
    PUSH32(esp, 0x0002490Eu); RECOMP_ABI_CALL(0x00024540u, sub_00024540); /* call 0x00024540 */

loc_0002490E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002491E; /* je: equal / zero */

loc_00024915: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002491Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0002491B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002491E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024930
 * Original: 0x00024930 - 0x000249BA (138 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024930: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000249A6; /* je: equal / zero */

loc_0002493D: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002495F; /* je: equal / zero */

loc_00024944: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00024956; /* je: equal / zero */

loc_0002494E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00024954u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024952u); } /* indirect call */
    }

loc_00024954: ;
    goto loc_0002495F;

loc_00024956: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002495Cu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0002495C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002495F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002499F; /* jle: less or equal (signed <=) */

loc_00024963: ;
    ecx = ebx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00024971u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00024971: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024991; /* je: equal / zero */

loc_00024978: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x247F0);
    PUSH32(esp, ebx);
    esi = eax + 4;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    MEM32(eax) = ebx;
    PUSH32(esp, 0x0002498Cu); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_0002498C: ;
    eax = esi;
    POP32(esp, esi);
    goto loc_00024993;

loc_00024991: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00024993: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000249A6; /* jne: not equal / not zero */

loc_0002499A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0002499F: ;
    MEM32(edi + 4) = 0;

loc_000249A6: ;
    edx = MEM32(edi);
    ecx = edi;
    MEM32(edi + 8) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000249B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000249ADu); } /* indirect call */
    }

loc_000249B0: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000249C0
 * Original: 0x000249C0 - 0x000249E4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000249C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000249C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AFE4C;
    PUSH32(esp, 0x000249CEu); RECOMP_ABI_CALL(0x00024570u, sub_00024570); /* call 0x00024570 */

loc_000249CE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000249DE; /* je: equal / zero */

loc_000249D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000249DBu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000249DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000249DE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000249F0
 * Original: 0x000249F0 - 0x00024A7A (138 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000249F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000249F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024A66; /* je: equal / zero */

loc_000249FD: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024A1F; /* je: equal / zero */

loc_00024A04: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00024A16; /* je: equal / zero */

loc_00024A0E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00024A14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024A12u); } /* indirect call */
    }

loc_00024A14: ;
    goto loc_00024A1F;

loc_00024A16: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00024A1Cu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00024A1C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00024A1F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00024A5F; /* jle: less or equal (signed <=) */

loc_00024A23: ;
    ecx = ebx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00024A31u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00024A31: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024A51; /* je: equal / zero */

loc_00024A38: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24800);
    PUSH32(esp, ebx);
    esi = eax + 4;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    MEM32(eax) = ebx;
    PUSH32(esp, 0x00024A4Cu); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_00024A4C: ;
    eax = esi;
    POP32(esp, esi);
    goto loc_00024A53;

loc_00024A51: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00024A53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00024A66; /* jne: not equal / not zero */

loc_00024A5A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00024A5F: ;
    MEM32(edi + 4) = 0;

loc_00024A66: ;
    edx = MEM32(edi);
    ecx = edi;
    MEM32(edi + 8) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00024A70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024A6Du); } /* indirect call */
    }

loc_00024A70: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024A80
 * Original: 0x00024A80 - 0x00024AA4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024A80: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AFE5C;
    PUSH32(esp, 0x00024A8Eu); RECOMP_ABI_CALL(0x000245A0u, sub_000245A0); /* call 0x000245A0 */

loc_00024A8E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00024A9E; /* je: equal / zero */

loc_00024A95: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00024A9Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00024A9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00024A9E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00024AB0
 * Original: 0x00024AB0 - 0x00024AD0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024AB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00024ACE; /* jne: not equal / not zero */

loc_00024ABB: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = 0x1CA5A4;
    PUSH32(esp, 0x00024ACAu); RECOMP_ABI_CALL(0x00024810u, sub_00024810); /* call 0x00024810 */

loc_00024ACA: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) | 1;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00024ACE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00024AD0
 * Original: 0x00024AD0 - 0x00024B40 (112 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024AD0: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 0x14);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00024B3F; /* je: equal / zero */

loc_00024ADC: ;
    eax = MEM32(0x1CA5A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024AF1; /* je: equal / zero */

loc_00024AE5: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024AF3; /* je: equal / zero */

loc_00024AEA: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00024AE5; /* jne: not equal / not zero */

loc_00024AF1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00024AF3: ;
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0x14) = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024B08; /* je: equal / zero */

loc_00024B00: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_00024B11;

loc_00024B08: ;
    ecx = MEM32(eax + 4);
    MEM32(0x1CA5A8) = ecx;

loc_00024B11: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024B20; /* je: equal / zero */

loc_00024B18: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_00024B29;

loc_00024B20: ;
    ecx = MEM32(eax + 8);
    MEM32(0x1CA5AC) = ecx;

loc_00024B29: ;
    ecx = MEM32(0x1CA5B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024B39; /* je: equal / zero */

loc_00024B33: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00024B39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024B36u); } /* indirect call */
    }

loc_00024B39: ;
    MEM32(0x1CA5B0) = MEM32(0x1CA5B0) - 1;
    _fa = (uint32_t)(MEM32(0x1CA5B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00024B3F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00024AFC
 * Original: 0x00024AFC - 0x00024B40 (68 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024AFC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024AFC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024B08; /* je: equal / zero */

loc_00024B00: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_00024B11;

loc_00024B08: ;
    ecx = MEM32(eax + 4);
    MEM32(0x1CA5A8) = ecx;

loc_00024B11: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024B20; /* je: equal / zero */

loc_00024B18: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_00024B29;

loc_00024B20: ;
    ecx = MEM32(eax + 8);
    MEM32(0x1CA5AC) = ecx;

loc_00024B29: ;
    ecx = MEM32(0x1CA5B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024B39; /* je: equal / zero */

loc_00024B33: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00024B39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024B36u); } /* indirect call */
    }

loc_00024B39: ;
    MEM32(0x1CA5B0) = MEM32(0x1CA5B0) - 1;
    _fa = (uint32_t)(MEM32(0x1CA5B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00024B40
 * Original: 0x00024B40 - 0x00024B96 (86 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024B40: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    eax = MEM32(eax + 0xC);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024B5E; /* je: equal / zero */

loc_00024B56: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_00024B67;

loc_00024B5E: ;
    ecx = MEM32(eax + 4);
    MEM32(0x1CA5A8) = ecx;

loc_00024B67: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024B76; /* je: equal / zero */

loc_00024B6E: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_00024B7F;

loc_00024B76: ;
    ecx = MEM32(eax + 8);
    MEM32(0x1CA5AC) = ecx;

loc_00024B7F: ;
    ecx = MEM32(0x1CA5B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024B8F; /* je: equal / zero */

loc_00024B89: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00024B8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024B8Cu); } /* indirect call */
    }

loc_00024B8F: ;
    MEM32(0x1CA5B0) = MEM32(0x1CA5B0) - 1;
    _fa = (uint32_t)(MEM32(0x1CA5B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00024BA0
 * Original: 0x00024BA0 - 0x00024BC0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024BA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00024BBE; /* jne: not equal / not zero */

loc_00024BAB: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = 0x1CA608;
    PUSH32(esp, 0x00024BBAu); RECOMP_ABI_CALL(0x00024810u, sub_00024810); /* call 0x00024810 */

loc_00024BBA: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) | 0x20;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00024BBE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00024BC0
 * Original: 0x00024BC0 - 0x00024C2F (111 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024BC0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x14), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00024C2E; /* je: equal / zero */

loc_00024BCA: ;
    eax = MEM32(0x1CA60C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024BDF; /* je: equal / zero */

loc_00024BD3: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024BE1; /* je: equal / zero */

loc_00024BD8: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00024BD3; /* jne: not equal / not zero */

loc_00024BDF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00024BE1: ;
    ecx = MEM32(eax + 0xC);
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0xFFFFFFDFu;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024BF7; /* je: equal / zero */

loc_00024BEF: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_00024C00;

loc_00024BF7: ;
    ecx = MEM32(eax + 4);
    MEM32(0x1CA60C) = ecx;

loc_00024C00: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024C0F; /* je: equal / zero */

loc_00024C07: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_00024C18;

loc_00024C0F: ;
    ecx = MEM32(eax + 8);
    MEM32(0x1CA610) = ecx;

loc_00024C18: ;
    ecx = MEM32(0x1CA618);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024C28; /* je: equal / zero */

loc_00024C22: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00024C28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024C25u); } /* indirect call */
    }

loc_00024C28: ;
    MEM32(0x1CA614) = MEM32(0x1CA614) - 1;
    _fa = (uint32_t)(MEM32(0x1CA614)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00024C2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00024BE8
 * Original: 0x00024BE8 - 0x00024C2F (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024BE8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024BE8: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024BF7; /* je: equal / zero */

loc_00024BEF: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_00024C00;

loc_00024BF7: ;
    ecx = MEM32(eax + 4);
    MEM32(0x1CA60C) = ecx;

loc_00024C00: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024C0F; /* je: equal / zero */

loc_00024C07: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_00024C18;

loc_00024C0F: ;
    ecx = MEM32(eax + 8);
    MEM32(0x1CA610) = ecx;

loc_00024C18: ;
    ecx = MEM32(0x1CA618);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024C28; /* je: equal / zero */

loc_00024C22: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00024C28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024C25u); } /* indirect call */
    }

loc_00024C28: ;
    MEM32(0x1CA614) = MEM32(0x1CA614) - 1;
    _fa = (uint32_t)(MEM32(0x1CA614)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00024C24
 * Original: 0x00024C24 - 0x00024C2F (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024C24(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024C24: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00024C28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024C25u); } /* indirect call */
    }

loc_00024C28: ;
    MEM32(0x1CA614) = MEM32(0x1CA614) - 1;
    _fa = (uint32_t)(MEM32(0x1CA614)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00024C30
 * Original: 0x00024C30 - 0x00024C86 (86 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024C30: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    eax = MEM32(eax + 0xC);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0xFFFFFFDFu;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024C4E; /* je: equal / zero */

loc_00024C46: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_00024C57;

loc_00024C4E: ;
    ecx = MEM32(eax + 4);
    MEM32(0x1CA60C) = ecx;

loc_00024C57: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024C66; /* je: equal / zero */

loc_00024C5E: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_00024C6F;

loc_00024C66: ;
    ecx = MEM32(eax + 8);
    MEM32(0x1CA610) = ecx;

loc_00024C6F: ;
    ecx = MEM32(0x1CA618);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024C7F; /* je: equal / zero */

loc_00024C79: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00024C7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024C7Cu); } /* indirect call */
    }

loc_00024C7F: ;
    MEM32(0x1CA614) = MEM32(0x1CA614) - 1;
    _fa = (uint32_t)(MEM32(0x1CA614)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00024C42
 * Original: 0x00024C42 - 0x00024C86 (68 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024C42(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024C42: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024C4E; /* je: equal / zero */

loc_00024C46: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_00024C57;

loc_00024C4E: ;
    ecx = MEM32(eax + 4);
    MEM32(0x1CA60C) = ecx;

loc_00024C57: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024C66; /* je: equal / zero */

loc_00024C5E: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_00024C6F;

loc_00024C66: ;
    ecx = MEM32(eax + 8);
    MEM32(0x1CA610) = ecx;

loc_00024C6F: ;
    ecx = MEM32(0x1CA618);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024C7F; /* je: equal / zero */

loc_00024C79: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00024C7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024C7Cu); } /* indirect call */
    }

loc_00024C7F: ;
    MEM32(0x1CA614) = MEM32(0x1CA614) - 1;
    _fa = (uint32_t)(MEM32(0x1CA614)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00024C85
 * Original: 0x00024C85 - 0x00024C86 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024C85(void)
{

loc_00024C85: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00024C90
 * Original: 0x00024C90 - 0x00024CB0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024C90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00024CAE; /* jne: not equal / not zero */

loc_00024C9B: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = 0x1CA61C;
    PUSH32(esp, 0x00024CAAu); RECOMP_ABI_CALL(0x00024810u, sub_00024810); /* call 0x00024810 */

loc_00024CAA: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) | 0x40;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00024CAE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00024CB0
 * Original: 0x00024CB0 - 0x00024D1F (111 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024CB0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x14), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00024D1E; /* je: equal / zero */

loc_00024CBA: ;
    eax = MEM32(0x1CA620);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024CCF; /* je: equal / zero */

loc_00024CC3: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024CD1; /* je: equal / zero */

loc_00024CC8: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00024CC3; /* jne: not equal / not zero */

loc_00024CCF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00024CD1: ;
    ecx = MEM32(eax + 0xC);
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0xFFFFFFBFu;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024CE7; /* je: equal / zero */

loc_00024CDF: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_00024CF0;

loc_00024CE7: ;
    ecx = MEM32(eax + 4);
    MEM32(0x1CA620) = ecx;

loc_00024CF0: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024CFF; /* je: equal / zero */

loc_00024CF7: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_00024D08;

loc_00024CFF: ;
    ecx = MEM32(eax + 8);
    MEM32(0x1CA624) = ecx;

loc_00024D08: ;
    ecx = MEM32(0x1CA62C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024D18; /* je: equal / zero */

loc_00024D12: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00024D18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024D15u); } /* indirect call */
    }

loc_00024D18: ;
    MEM32(0x1CA628) = MEM32(0x1CA628) - 1;
    _fa = (uint32_t)(MEM32(0x1CA628)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00024D1E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00024D20
 * Original: 0x00024D20 - 0x00024D76 (86 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024D20: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    eax = MEM32(eax + 0xC);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0xFFFFFFBFu;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024D3E; /* je: equal / zero */

loc_00024D36: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_00024D47;

loc_00024D3E: ;
    ecx = MEM32(eax + 4);
    MEM32(0x1CA620) = ecx;

loc_00024D47: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024D56; /* je: equal / zero */

loc_00024D4E: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_00024D5F;

loc_00024D56: ;
    ecx = MEM32(eax + 8);
    MEM32(0x1CA624) = ecx;

loc_00024D5F: ;
    ecx = MEM32(0x1CA62C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024D6F; /* je: equal / zero */

loc_00024D69: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00024D6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024D6Cu); } /* indirect call */
    }

loc_00024D6F: ;
    MEM32(0x1CA628) = MEM32(0x1CA628) - 1;
    _fa = (uint32_t)(MEM32(0x1CA628)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00024D80
 * Original: 0x00024D80 - 0x00024DCF (79 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024D80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00024DCD; /* jne: not equal / not zero */

loc_00024D8B: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = 0x1CA5B8;
    PUSH32(esp, 0x00024D9Au); RECOMP_ABI_CALL(0x00024810u, sub_00024810); /* call 0x00024810 */

loc_00024D9A: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) | 2;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024DBA; /* je: equal / zero */

loc_00024DA5: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = 0x1CA5E0;
    PUSH32(esp, 0x00024DB4u); RECOMP_ABI_CALL(0x00024810u, sub_00024810); /* call 0x00024810 */

loc_00024DB4: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) | 8;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00024DBA: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = 0x1CA5CC;
    PUSH32(esp, 0x00024DC9u); RECOMP_ABI_CALL(0x00024810u, sub_00024810); /* call 0x00024810 */

loc_00024DC9: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) | 4;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00024DCD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00024DD0
 * Original: 0x00024DD0 - 0x00024F1D (333 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024DD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00024E3F; /* je: equal / zero */

loc_00024DDB: ;
    eax = MEM32(0x1CA5BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024DF0; /* je: equal / zero */

loc_00024DE4: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024DF2; /* je: equal / zero */

loc_00024DE9: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00024DE4; /* jne: not equal / not zero */

loc_00024DF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00024DF2: ;
    ecx = MEM32(eax + 0xC);
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024E08; /* je: equal / zero */

loc_00024E00: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_00024E11;

loc_00024E08: ;
    ecx = MEM32(eax + 4);
    MEM32(0x1CA5BC) = ecx;

loc_00024E11: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024E20; /* je: equal / zero */

loc_00024E18: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_00024E29;

loc_00024E20: ;
    ecx = MEM32(eax + 8);
    MEM32(0x1CA5C0) = ecx;

loc_00024E29: ;
    ecx = MEM32(0x1CA5C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024E39; /* je: equal / zero */

loc_00024E33: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00024E39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024E36u); } /* indirect call */
    }

loc_00024E39: ;
    MEM32(0x1CA5C4) = MEM32(0x1CA5C4) - 1;
    _fa = (uint32_t)(MEM32(0x1CA5C4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00024E3F: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00024EAB; /* je: equal / zero */

loc_00024E45: ;
    eax = MEM32(0x1CA5E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024E5C; /* je: equal / zero */

loc_00024E4E: ;
    edi = edi;

loc_00024E50: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024E5E; /* je: equal / zero */

loc_00024E55: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00024E50; /* jne: not equal / not zero */

loc_00024E5C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00024E5E: ;
    ecx = MEM32(eax + 0xC);
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024E74; /* je: equal / zero */

loc_00024E6C: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_00024E7D;

loc_00024E74: ;
    ecx = MEM32(eax + 4);
    MEM32(0x1CA5E4) = ecx;

loc_00024E7D: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024E8C; /* je: equal / zero */

loc_00024E84: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_00024E95;

loc_00024E8C: ;
    ecx = MEM32(eax + 8);
    MEM32(0x1CA5E8) = ecx;

loc_00024E95: ;
    ecx = MEM32(0x1CA5F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024EA5; /* je: equal / zero */

loc_00024E9F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00024EA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024EA2u); } /* indirect call */
    }

loc_00024EA5: ;
    MEM32(0x1CA5EC) = MEM32(0x1CA5EC) - 1;
    _fa = (uint32_t)(MEM32(0x1CA5EC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00024EAB: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00024F1B; /* je: equal / zero */

loc_00024EB1: ;
    eax = MEM32(0x1CA5D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024ECC; /* je: equal / zero */

loc_00024EBA: ;
    /* nop */

loc_00024EC0: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024ECE; /* je: equal / zero */

loc_00024EC5: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00024EC0; /* jne: not equal / not zero */

loc_00024ECC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00024ECE: ;
    ecx = MEM32(eax + 0xC);
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0xFFFFFFFBu;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024EE4; /* je: equal / zero */

loc_00024EDC: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_00024EED;

loc_00024EE4: ;
    ecx = MEM32(eax + 4);
    MEM32(0x1CA5D0) = ecx;

loc_00024EED: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024EFC; /* je: equal / zero */

loc_00024EF4: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_00024F05;

loc_00024EFC: ;
    ecx = MEM32(eax + 8);
    MEM32(0x1CA5D4) = ecx;

loc_00024F05: ;
    ecx = MEM32(0x1CA5DC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024F15; /* je: equal / zero */

loc_00024F0F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00024F15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024F12u); } /* indirect call */
    }

loc_00024F15: ;
    MEM32(0x1CA5D8) = MEM32(0x1CA5D8) - 1;
    _fa = (uint32_t)(MEM32(0x1CA5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00024F1B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00024F20
 * Original: 0x00024F20 - 0x00024F76 (86 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024F20: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    eax = MEM32(eax + 0xC);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024F3E; /* je: equal / zero */

loc_00024F36: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_00024F47;

loc_00024F3E: ;
    ecx = MEM32(eax + 4);
    MEM32(0x1CA5BC) = ecx;

loc_00024F47: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024F56; /* je: equal / zero */

loc_00024F4E: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_00024F5F;

loc_00024F56: ;
    ecx = MEM32(eax + 8);
    MEM32(0x1CA5C0) = ecx;

loc_00024F5F: ;
    ecx = MEM32(0x1CA5C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024F6F; /* je: equal / zero */

loc_00024F69: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00024F6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00024F6Cu); } /* indirect call */
    }

loc_00024F6F: ;
    MEM32(0x1CA5C4) = MEM32(0x1CA5C4) - 1;
    _fa = (uint32_t)(MEM32(0x1CA5C4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00024F80
 * Original: 0x00024F80 - 0x00024FA0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024F80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00024F9E; /* jne: not equal / not zero */

loc_00024F8B: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = 0x1CA5F4;
    PUSH32(esp, 0x00024F9Au); RECOMP_ABI_CALL(0x00024810u, sub_00024810); /* call 0x00024810 */

loc_00024F9A: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) | 0x10;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00024F9E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00024FA0
 * Original: 0x00024FA0 - 0x0002500F (111 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00024FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00024FA0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x14), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002500E; /* je: equal / zero */

loc_00024FAA: ;
    eax = MEM32(0x1CA5F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024FBF; /* je: equal / zero */

loc_00024FB3: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024FC1; /* je: equal / zero */

loc_00024FB8: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00024FB3; /* jne: not equal / not zero */

loc_00024FBF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00024FC1: ;
    ecx = MEM32(eax + 0xC);
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0xFFFFFFEFu;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024FD7; /* je: equal / zero */

loc_00024FCF: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_00024FE0;

loc_00024FD7: ;
    ecx = MEM32(eax + 4);
    MEM32(0x1CA5F8) = ecx;

loc_00024FE0: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00024FEF; /* je: equal / zero */

loc_00024FE7: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_00024FF8;

loc_00024FEF: ;
    ecx = MEM32(eax + 8);
    MEM32(0x1CA5FC) = ecx;

loc_00024FF8: ;
    ecx = MEM32(0x1CA604);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025008; /* je: equal / zero */

loc_00025002: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00025008u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00025005u); } /* indirect call */
    }

loc_00025008: ;
    MEM32(0x1CA600) = MEM32(0x1CA600) - 1;
    _fa = (uint32_t)(MEM32(0x1CA600)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0002500E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00025010
 * Original: 0x00025010 - 0x00025034 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025010: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00025032; /* js: sign (negative) */

loc_0002501C: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = 0x1CA630;
    PUSH32(esp, 0x0002502Bu); RECOMP_ABI_CALL(0x00024810u, sub_00024810); /* call 0x00024810 */

loc_0002502B: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) | 0x80;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00025032: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00025040
 * Original: 0x00025040 - 0x000250B3 (115 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025040: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_000250B2; /* jns: not sign (positive) */

loc_0002504B: ;
    eax = MEM32(0x1CA634);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025060; /* je: equal / zero */

loc_00025054: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025062; /* je: equal / zero */

loc_00025059: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00025054; /* jne: not equal / not zero */

loc_00025060: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00025062: ;
    ecx = MEM32(eax + 0xC);
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0xFFFFFF7Fu;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002507B; /* je: equal / zero */

loc_00025073: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_00025084;

loc_0002507B: ;
    ecx = MEM32(eax + 4);
    MEM32(0x1CA634) = ecx;

loc_00025084: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025093; /* je: equal / zero */

loc_0002508B: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_0002509C;

loc_00025093: ;
    ecx = MEM32(eax + 8);
    MEM32(0x1CA638) = ecx;

loc_0002509C: ;
    ecx = MEM32(0x1CA640);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000250AC; /* je: equal / zero */

loc_000250A6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000250ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000250A9u); } /* indirect call */
    }

loc_000250AC: ;
    MEM32(0x1CA63C) = MEM32(0x1CA63C) - 1;
    _fa = (uint32_t)(MEM32(0x1CA63C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000250B2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00025096
 * Original: 0x00025096 - 0x000250B3 (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025096(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025096: ;
    MEM32(0x1CA638) = ecx;
    ecx = MEM32(0x1CA640);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000250AC; /* je: equal / zero */

loc_000250A6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000250ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000250A9u); } /* indirect call */
    }

loc_000250AC: ;
    MEM32(0x1CA63C) = MEM32(0x1CA63C) - 1;
    _fa = (uint32_t)(MEM32(0x1CA63C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000250C0
 * Original: 0x000250C0 - 0x00025119 (89 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000250C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000250C0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    eax = MEM32(eax + 0xC);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0xFFFFFF7Fu;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000250E1; /* je: equal / zero */

loc_000250D9: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_000250EA;

loc_000250E1: ;
    ecx = MEM32(eax + 4);
    MEM32(0x1CA634) = ecx;

loc_000250EA: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000250F9; /* je: equal / zero */

loc_000250F1: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_00025102;

loc_000250F9: ;
    ecx = MEM32(eax + 8);
    MEM32(0x1CA638) = ecx;

loc_00025102: ;
    ecx = MEM32(0x1CA640);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025112; /* je: equal / zero */

loc_0002510C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00025112u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002510Fu); } /* indirect call */
    }

loc_00025112: ;
    MEM32(0x1CA63C) = MEM32(0x1CA63C) - 1;
    _fa = (uint32_t)(MEM32(0x1CA63C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00025120
 * Original: 0x00025120 - 0x00025182 (98 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025120: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00025134; /* je: equal / zero */

loc_0002512B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00025131u); RECOMP_ABI_CALL(0x00024AD0u, sub_00024AD0); /* call 0x00024AD0 */

loc_00025131: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00025134: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00025143; /* je: equal / zero */

loc_0002513A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00025140u); RECOMP_ABI_CALL(0x00024DD0u, sub_00024DD0); /* call 0x00024DD0 */

loc_00025140: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00025143: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00025152; /* je: equal / zero */

loc_00025149: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002514Fu); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_0002514F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00025152: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00025161; /* je: equal / zero */

loc_00025158: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002515Eu); RECOMP_ABI_CALL(0x00024BC0u, sub_00024BC0); /* call 0x00024BC0 */

loc_0002515E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00025161: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00025170; /* je: equal / zero */

loc_00025167: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002516Du); RECOMP_ABI_CALL(0x00024CB0u, sub_00024CB0); /* call 0x00024CB0 */

loc_0002516D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00025170: ;
    SET_LO8(eax, MEM8(esi + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00025180; /* jns: not sign (positive) */

loc_00025177: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002517Du); RECOMP_ABI_CALL(0x00025040u, sub_00025040); /* call 0x00025040 */

loc_0002517D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00025180: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00025190
 * Original: 0x00025190 - 0x000251FB (107 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025190: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1AFE00;
    if (CMP_EQ(_fa, _fb)) goto loc_000251E5; /* je: equal / zero */

loc_000251A0: ;
    PUSH32(esp, edi);

loc_000251A1: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(eax + 4);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000251B2; /* je: equal / zero */

loc_000251AD: ;
    MEM32(edx + 4) = ecx;
    goto loc_000251B5;

loc_000251B2: ;
    MEM32(esi + 4) = ecx;

loc_000251B5: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000251C4; /* je: equal / zero */

loc_000251BC: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_000251CA;

loc_000251C4: ;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;

loc_000251CA: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000251D7; /* je: equal / zero */

loc_000251D1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000251D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000251D4u); } /* indirect call */
    }

loc_000251D7: ;
    edx = MEM32(esi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0xC) = edx;
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000251A1; /* jne: not equal / not zero */

loc_000251E4: ;
    POP32(esp, edi);

loc_000251E5: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000251F9; /* je: equal / zero */

loc_000251EC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000251F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000251F0u); } /* indirect call */
    }

loc_000251F2: ;
    MEM32(esi + 0x10) = 0;

loc_000251F9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00025200
 * Original: 0x00025200 - 0x0002526B (107 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025200: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1AFE04;
    if (CMP_EQ(_fa, _fb)) goto loc_00025255; /* je: equal / zero */

loc_00025210: ;
    PUSH32(esp, edi);

loc_00025211: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(eax + 4);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00025222; /* je: equal / zero */

loc_0002521D: ;
    MEM32(edx + 4) = ecx;
    goto loc_00025225;

loc_00025222: ;
    MEM32(esi + 4) = ecx;

loc_00025225: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025234; /* je: equal / zero */

loc_0002522C: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_0002523A;

loc_00025234: ;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;

loc_0002523A: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025247; /* je: equal / zero */

loc_00025241: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00025247u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00025244u); } /* indirect call */
    }

loc_00025247: ;
    edx = MEM32(esi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0xC) = edx;
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00025211; /* jne: not equal / not zero */

loc_00025254: ;
    POP32(esp, edi);

loc_00025255: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025269; /* je: equal / zero */

loc_0002525C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00025262u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00025260u); } /* indirect call */
    }

loc_00025262: ;
    MEM32(esi + 0x10) = 0;

loc_00025269: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00025270
 * Original: 0x00025270 - 0x000252DB (107 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025270: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1AFE08;
    if (CMP_EQ(_fa, _fb)) goto loc_000252C5; /* je: equal / zero */

loc_00025280: ;
    PUSH32(esp, edi);

loc_00025281: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(eax + 4);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00025292; /* je: equal / zero */

loc_0002528D: ;
    MEM32(edx + 4) = ecx;
    goto loc_00025295;

loc_00025292: ;
    MEM32(esi + 4) = ecx;

loc_00025295: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000252A4; /* je: equal / zero */

loc_0002529C: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_000252AA;

loc_000252A4: ;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;

loc_000252AA: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000252B7; /* je: equal / zero */

loc_000252B1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000252B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000252B4u); } /* indirect call */
    }

loc_000252B7: ;
    edx = MEM32(esi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0xC) = edx;
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00025281; /* jne: not equal / not zero */

loc_000252C4: ;
    POP32(esp, edi);

loc_000252C5: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000252D9; /* je: equal / zero */

loc_000252CC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000252D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000252D0u); } /* indirect call */
    }

loc_000252D2: ;
    MEM32(esi + 0x10) = 0;

loc_000252D9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000252E0
 * Original: 0x000252E0 - 0x000252FE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000252E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000252E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000252E8u); RECOMP_ABI_CALL(0x00025190u, sub_00025190); /* call 0x00025190 */

loc_000252E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000252F8; /* je: equal / zero */

loc_000252EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000252F5u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000252F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000252F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00025300
 * Original: 0x00025300 - 0x0002531E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025300: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00025308u); RECOMP_ABI_CALL(0x00025200u, sub_00025200); /* call 0x00025200 */

loc_00025308: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00025318; /* je: equal / zero */

loc_0002530F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00025315u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00025315: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00025318: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00025320
 * Original: 0x00025320 - 0x0002533E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025320: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00025328u); RECOMP_ABI_CALL(0x00025270u, sub_00025270); /* call 0x00025270 */

loc_00025328: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00025338; /* je: equal / zero */

loc_0002532F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00025335u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00025335: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00025338: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00025340
 * Original: 0x00025340 - 0x00025655 (789 bytes, 236 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025340: ;
    eax = MEM32(0x1CA5B4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00025378; /* jne: not equal / not zero */

loc_0002534C: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00025353u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00025353: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025371; /* je: equal / zero */

loc_0002535A: ;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax) = 0x1AFE3C;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = esi;
    goto loc_00025373;

loc_00025371: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00025373: ;
    MEM32(0x1CA5B4) = eax;

loc_00025378: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00025384u); RECOMP_ABI_CALL(0x00024870u, sub_00024870); /* call 0x00024870 */

loc_00025384: ;
    ecx = MEM32(0x1CA5B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025393; /* je: equal / zero */

loc_0002538E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00025393u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00025390u); } /* indirect call */
    }

loc_00025393: ;
    eax = MEM32(0x1CA5C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x1CA5AC) = esi;
    MEM32(0x1CA5A8) = esi;
    MEM32(0x1CA5B0) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000253DA; /* jne: not equal / not zero */

loc_000253AE: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000253B5u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000253B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000253D3; /* je: equal / zero */

loc_000253BC: ;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax) = 0x1AFE4C;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = esi;
    goto loc_000253D5;

loc_000253D3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000253D5: ;
    MEM32(0x1CA5C8) = eax;

loc_000253DA: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000253E6u); RECOMP_ABI_CALL(0x00024930u, sub_00024930); /* call 0x00024930 */

loc_000253E6: ;
    ecx = MEM32(0x1CA5C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000253F5; /* je: equal / zero */

loc_000253F0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000253F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000253F2u); } /* indirect call */
    }

loc_000253F5: ;
    eax = MEM32(0x1CA5DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x1CA5C0) = esi;
    MEM32(0x1CA5BC) = esi;
    MEM32(0x1CA5C4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0002543C; /* jne: not equal / not zero */

loc_00025410: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00025417u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00025417: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025435; /* je: equal / zero */

loc_0002541E: ;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax) = 0x1AFE4C;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = esi;
    goto loc_00025437;

loc_00025435: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00025437: ;
    MEM32(0x1CA5DC) = eax;

loc_0002543C: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00025448u); RECOMP_ABI_CALL(0x00024930u, sub_00024930); /* call 0x00024930 */

loc_00025448: ;
    ecx = MEM32(0x1CA5DC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025457; /* je: equal / zero */

loc_00025452: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00025457u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00025454u); } /* indirect call */
    }

loc_00025457: ;
    eax = MEM32(0x1CA5F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x1CA5D4) = esi;
    MEM32(0x1CA5D0) = esi;
    MEM32(0x1CA5D8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0002549E; /* jne: not equal / not zero */

loc_00025472: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00025479u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00025479: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025497; /* je: equal / zero */

loc_00025480: ;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax) = 0x1AFE4C;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = esi;
    goto loc_00025499;

loc_00025497: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00025499: ;
    MEM32(0x1CA5F0) = eax;

loc_0002549E: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000254AAu); RECOMP_ABI_CALL(0x00024930u, sub_00024930); /* call 0x00024930 */

loc_000254AA: ;
    ecx = MEM32(0x1CA5F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000254B9; /* je: equal / zero */

loc_000254B4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000254B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000254B6u); } /* indirect call */
    }

loc_000254B9: ;
    eax = MEM32(0x1CA604);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x1CA5E8) = esi;
    MEM32(0x1CA5E4) = esi;
    MEM32(0x1CA5EC) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00025500; /* jne: not equal / not zero */

loc_000254D4: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000254DBu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000254DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000254F9; /* je: equal / zero */

loc_000254E2: ;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax) = 0x1AFE5C;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = esi;
    goto loc_000254FB;

loc_000254F9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000254FB: ;
    MEM32(0x1CA604) = eax;

loc_00025500: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0002550Cu); RECOMP_ABI_CALL(0x000249F0u, sub_000249F0); /* call 0x000249F0 */

loc_0002550C: ;
    ecx = MEM32(0x1CA604);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002551B; /* je: equal / zero */

loc_00025516: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002551Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00025518u); } /* indirect call */
    }

loc_0002551B: ;
    eax = MEM32(0x1CA618);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x1CA5FC) = esi;
    MEM32(0x1CA5F8) = esi;
    MEM32(0x1CA600) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00025562; /* jne: not equal / not zero */

loc_00025536: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0002553Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0002553D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002555B; /* je: equal / zero */

loc_00025544: ;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax) = 0x1AFE3C;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = esi;
    goto loc_0002555D;

loc_0002555B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002555D: ;
    MEM32(0x1CA618) = eax;

loc_00025562: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0002556Eu); RECOMP_ABI_CALL(0x00024870u, sub_00024870); /* call 0x00024870 */

loc_0002556E: ;
    ecx = MEM32(0x1CA618);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002557D; /* je: equal / zero */

loc_00025578: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002557Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002557Au); } /* indirect call */
    }

loc_0002557D: ;
    eax = MEM32(0x1CA62C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x1CA610) = esi;
    MEM32(0x1CA60C) = esi;
    MEM32(0x1CA614) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000255C4; /* jne: not equal / not zero */

loc_00025598: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0002559Fu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0002559F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000255BD; /* je: equal / zero */

loc_000255A6: ;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax) = 0x1AFE3C;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = esi;
    goto loc_000255BF;

loc_000255BD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000255BF: ;
    MEM32(0x1CA62C) = eax;

loc_000255C4: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000255D0u); RECOMP_ABI_CALL(0x00024870u, sub_00024870); /* call 0x00024870 */

loc_000255D0: ;
    ecx = MEM32(0x1CA62C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000255DF; /* je: equal / zero */

loc_000255DA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000255DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000255DCu); } /* indirect call */
    }

loc_000255DF: ;
    eax = MEM32(0x1CA640);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x1CA624) = esi;
    MEM32(0x1CA620) = esi;
    MEM32(0x1CA628) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00025626; /* jne: not equal / not zero */

loc_000255FA: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00025601u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00025601: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002561F; /* je: equal / zero */

loc_00025608: ;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax) = 0x1AFE3C;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = esi;
    goto loc_00025621;

loc_0002561F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00025621: ;
    MEM32(0x1CA640) = eax;

loc_00025626: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00025632u); RECOMP_ABI_CALL(0x00024870u, sub_00024870); /* call 0x00024870 */

loc_00025632: ;
    ecx = MEM32(0x1CA640);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025641; /* je: equal / zero */

loc_0002563C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00025641u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002563Eu); } /* indirect call */
    }

loc_00025641: ;
    MEM32(0x1CA638) = esi;
    MEM32(0x1CA634) = esi;
    MEM32(0x1CA63C) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00025660
 * Original: 0x00025660 - 0x00025695 (53 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025660: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0002566Du); RECOMP_ABI_CALL(0x00018E10u, sub_00018E10); /* call 0x00018E10 */

loc_0002566D: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x20) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = eax;
    MEM32(esi) = 0x1AFE88;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x24) = ecx;
    MEM32(eax + 4) = esi;
    MEM32(esi + 0x3C) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000256A0
 * Original: 0x000256A0 - 0x000256E4 (68 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000256A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000256A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1AFE88;
    if (CMP_EQ(_fa, _fb)) goto loc_000256BF; /* je: equal / zero */

loc_000256B0: ;
    ecx = MEM32(0x1DA004);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000256BCu); RECOMP_ABI_CALL(0x000717F0u, sub_000717F0); /* call 0x000717F0 */

loc_000256BC: ;
    MEM32(esi + 0x24) = eax;

loc_000256BF: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000256D6; /* je: equal / zero */

loc_000256C6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000256CCu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000256CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3C) = 0;

loc_000256D6: ;
    MEM32(esi) = 0x1AEFA0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00018E80(); return; /* tail jmp 0x00018E80 */

}

/**
 * sub_000256F0
 * Original: 0x000256F0 - 0x00025711 (33 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000256F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000256F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000256F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000256F5u); } /* indirect call */
    }

loc_000256F8: ;
    eax = MEM32(0x1DA004);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025708; /* je: equal / zero */

loc_00025701: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00025708u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00025705u); } /* indirect call */
    }

loc_00025708: ;
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00025720
 * Original: 0x00025720 - 0x0002574B (43 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025720: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x1DA004);
    esi = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00025732u); RECOMP_ABI_CALL(0x00071900u, sub_00071900); /* call 0x00071900 */

loc_00025732: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025748; /* je: equal / zero */

loc_00025736: ;
    MEM32(esi + 0x24) = eax;
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00025745u); RECOMP_ABI_CALL(0x000713F0u, sub_000713F0); /* call 0x000713F0 */

loc_00025745: ;
    MEM32(esi + 0x38) = eax;

loc_00025748: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00025750
 * Original: 0x00025750 - 0x000258F1 (417 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025750(void)
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

loc_00025750: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002575Eu); RECOMP_ABI_CALL(0x000F67C0u, sub_000F67C0); /* call 0x000F67C0 */

loc_0002575E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002576A; /* jne: not equal / not zero */

loc_00025765: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002576A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00025773u); RECOMP_ABI_CALL(0x000F7090u, sub_000F7090); /* call 0x000F7090 */

loc_00025773: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 8) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00025786; /* jne: not equal / not zero */

loc_00025780: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00025786: ;
    eax = MEM32(edi);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ebx = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00025842; /* je: equal / zero */

loc_0002579F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002585A; /* jle: less or equal (signed <=) */

loc_000257A7: ;
    MEM32(esp + 0x18) = eax;
    goto loc_000257B0;

    /* nop */

loc_000257B0: ;
    edi = MEM32(ebx + edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002582D; /* jle: less or equal (signed <=) */

loc_000257BA: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000257C2u); RECOMP_ABI_CALL(0x000D0A40u, sub_000D0A40); /* call 0x000D0A40 */

loc_000257C2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002582D; /* jle: less or equal (signed <=) */

loc_000257C6: ;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = edi;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx + eax + 8;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_000257E0: ;
    eax = MEM32(ebp + 0x24);
    edi = MEM32(ecx + -8);
    MEM32(eax + edx) = edi;
    edi = MEM32(ecx + -4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edi;
    edi = MEM32(ecx);
    MEM32(eax + 8) = edi;
    edi = MEM32(ecx + 4);
    MEM32(eax + 0xC) = edi;
    eax = MEM32(ebp + 0x24);
    fp_push(MEMF(eax + edx + 8)); /* fld float */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 4)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(eax + 0xC) - fp_top()); /* fsubr dword ptr [eax + 0xc] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_000257E0; /* jne: not equal / not zero */

loc_0002582D: ;
    eax = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_000257B0; /* jne: not equal / not zero */

loc_00025840: ;
    goto loc_0002585A;

loc_00025842: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002585A; /* jle: less or equal (signed <=) */

loc_00025846: ;
    ecx = eax;

loc_00025848: ;
    eax = MEM32(ebx + edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00025857; /* jle: less or equal (signed <=) */

loc_00025852: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00025857: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00025848; /* jne: not equal / not zero */

loc_0002585A: ;
    eax = MEM32(ebx + edi);
    ebp = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000258DB; /* je: equal / zero */

loc_0002586C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000258DB; /* jle: less or equal (signed <=) */

loc_00025870: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00025878u); RECOMP_ABI_CALL(0x000D0A40u, sub_000D0A40); /* call 0x000D0A40 */

loc_00025878: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000258DB; /* jle: less or equal (signed <=) */

loc_00025880: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx + edi + 4;
    MEM32(esp + 0x18) = eax;
    /* nop */

loc_00025890: ;
    eax = MEM32(ebp + 0x24);
    fp_push(MEMF(ecx + 8)); /* fld float */
    ebx = MEM32(ecx + -4);
    MEM32(eax + edx) = ebx;
    ebx = MEM32(ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ebx;
    ebx = MEM32(ecx + 4);
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ebx;
    eax = MEM32(ebp + 0x24);
    fp_push(MEMF(eax + edx)); /* fld float */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_00025890; /* jne: not equal / not zero */

loc_000258DB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000258E1u); RECOMP_ABI_CALL(0x000F6CC0u, sub_000F6CC0); /* call 0x000F6CC0 */

loc_000258E1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
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
 * sub_00025900
 * Original: 0x00025900 - 0x00025959 (89 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025900: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1AFE88;
    if (CMP_EQ(_fa, _fb)) goto loc_0002591F; /* je: equal / zero */

loc_00025910: ;
    ecx = MEM32(0x1DA004);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002591Cu); RECOMP_ABI_CALL(0x000717F0u, sub_000717F0); /* call 0x000717F0 */

loc_0002591C: ;
    MEM32(esi + 0x24) = eax;

loc_0002591F: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025936; /* je: equal / zero */

loc_00025926: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002592Cu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0002592C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3C) = 0;

loc_00025936: ;
    ecx = esi;
    MEM32(esi) = 0x1AEFA0;
    PUSH32(esp, 0x00025943u); RECOMP_ABI_CALL(0x00018E80u, sub_00018E80); /* call 0x00018E80 */

loc_00025943: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00025953; /* je: equal / zero */

loc_0002594A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00025950u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00025950: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00025953: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00025960
 * Original: 0x00025960 - 0x00025982 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025960: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    edx = eax + 0xA8;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002597Eu); RECOMP_ABI_CALL(0x00025750u, sub_00025750); /* call 0x00025750 */

loc_0002597E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00025990
 * Original: 0x00025990 - 0x000259AA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025990: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000259A6u); RECOMP_ABI_CALL(0x00025750u, sub_00025750); /* call 0x00025750 */

loc_000259A6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000259B0
 * Original: 0x000259B0 - 0x000259CA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000259B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000259B0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000259C6u); RECOMP_ABI_CALL(0x00025750u, sub_00025750); /* call 0x00025750 */

loc_000259C6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000259D0
 * Original: 0x000259D0 - 0x00025A29 (89 bytes, 22 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000259D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000259D0: ;
    eax = MEM32(esp + 4);
    edx = ZX8(MEM8(eax));
    MEM32(esp + 4) = edx;
    edx = ZX8(MEM8(eax + 1));
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEM32(esp + 4) = edx;
    edx = ZX8(MEM8(eax + 2));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    eax = ZX8(MEM8(eax + 3));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEM32(esp + 4) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91E4)); /* fmul dword ptr [0x1c91e4] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00025A30
 * Original: 0x00025A30 - 0x00025AA2 (114 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025A30: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x18);
    eax = esi + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025A75; /* je: equal / zero */

loc_00025A41: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = ecx;

loc_00025A75: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x00025A7Fu); RECOMP_ABI_CALL(0x000CE7E0u, sub_000CE7E0); /* call 0x000CE7E0 */

loc_00025A7F: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x2C) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x38) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00025AB0
 * Original: 0x00025AB0 - 0x00025ACF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025AB0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AFF10;
    if (TEST_Z(_fa, _fb)) goto loc_00025AC9; /* je: equal / zero */

loc_00025AC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00025AC6u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00025AC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00025AC9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00025AD0
 * Original: 0x00025AD0 - 0x00025B15 (69 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025AD0: ;
    eax = ecx + 0xF3C;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025B12; /* je: equal / zero */

loc_00025ADE: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = ecx;

loc_00025B12: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00025B20
 * Original: 0x00025B20 - 0x00025B65 (69 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025B20(void)
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

loc_00025B20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    edx = MEM32(edi + 0x28);
    eax = edx + edx * 2;
    esi = ecx + eax * 4;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025B46; /* je: equal / zero */

loc_00025B36: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00025B60; /* je: equal / zero */

loc_00025B46: ;
    fp_push(MEMF(0x1AFF04)); /* fld float */
    edx = edx + edx * 2 + 9;
    MEMF(ecx + edx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x28) = 0;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00025B60: ;
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
 * sub_00025B70
 * Original: 0x00025B70 - 0x00025BC4 (84 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025B70(void)
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

loc_00025B70: ;
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 8;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00025B80;

    /* nop */

loc_00025B80: ;
    _fa = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025BBA; /* je: equal / zero */

loc_00025B85: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00025BBA; /* jne: not equal / not zero */

loc_00025B94: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025BB2; /* je: equal / zero */

loc_00025BA3: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00025BBA; /* je: equal / zero */

loc_00025BB2: ;
    MEM32(ecx + -4) = esi;
    MEM32(ecx) = esi;
    MEM32(ecx + 4) = esi;

loc_00025BBA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00025B80; /* jne: not equal / not zero */

loc_00025BC0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00025BD0
 * Original: 0x00025BD0 - 0x00025C00 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025BD0(void)
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

loc_00025BD0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = eax;
    if ((_fas >= 0)) goto loc_00025BE4; /* jns: not sign (positive) */

loc_00025BDC: ;
    MEM32(esp) = 0;

loc_00025BE4: ;
    fp_push((double)SMEM32(ecx + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF318)); /* fmul dword ptr [0x1af318] */
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE140)); /* fmul dword ptr [0x1ae140] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push((double)SMEM32(ecx + 0xC)); /* fild */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00025C00
 * Original: 0x00025C00 - 0x00025C80 (128 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025C00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1000000);
    esi = ecx;
    PUSH32(esp, 0x00025C0Eu); RECOMP_ABI_CALL(0x00033A80u, sub_00033A80); /* call 0x00033A80 */

loc_00025C0E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00025C19u); RECOMP_ABI_CALL(0x00126000u, sub_00126000); /* call 0x00126000 */

loc_00025C19: ;
    ecx = esi;
    PUSH32(esp, 0x00025C20u); RECOMP_ABI_CALL(0x001213B0u, sub_001213B0); /* call 0x001213B0 */

loc_00025C20: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x304);
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = edi;
    PUSH32(esp, 0x00025C38u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00025C38: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025C4A; /* je: equal / zero */

loc_00025C3F: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00025C48u); RECOMP_ABI_CALL(0x000ABFE0u, sub_000ABFE0); /* call 0x000ABFE0 */

loc_00025C48: ;
    goto loc_00025C4C;

loc_00025C4A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00025C4C: ;
    PUSH32(esp, 0x4BC);
    MEM32(esi + 0x48) = eax;
    PUSH32(esp, 0x00025C59u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00025C59: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025C73; /* je: equal / zero */

loc_00025C60: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00025C68u); RECOMP_ABI_CALL(0x00075250u, sub_00075250); /* call 0x00075250 */

loc_00025C68: ;
    MEM32(esi + 0x5C) = eax;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00025C73: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x5C) = eax;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00025C80
 * Original: 0x00025C80 - 0x00025CAF (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025C80: ;
    eax = MEM32(0x1D3F08);
    eax = MEM32(eax + 0x20);
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x64) = edx;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 4;
    PUSH32(esp, esi);
    /* nop */

loc_00025CA0: ;
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00025CA0; /* jne: not equal / not zero */

loc_00025CAD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00025C91
 * Original: 0x00025C91 - 0x00025CAF (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025C91(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025C91: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 4;
    PUSH32(esp, esi);
    /* nop */

loc_00025CA0: ;
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00025CA0; /* jne: not equal / not zero */

loc_00025CAD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00025CB0
 * Original: 0x00025CB0 - 0x00025D29 (121 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025CB0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00025CC0: ;
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00025CCCu); RECOMP_ABI_CALL(0x0008A9F0u, sub_0008A9F0); /* call 0x0008A9F0 */

loc_00025CCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025D0D; /* je: equal / zero */

loc_00025CD0: ;
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00025CDCu); RECOMP_ABI_CALL(0x0008B500u, sub_0008B500); /* call 0x0008B500 */

loc_00025CDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00025D0D; /* jne: not equal / not zero */

loc_00025CE0: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00025CE9u); RECOMP_ABI_CALL(0x00013DA0u, sub_00013DA0); /* call 0x00013DA0 */

loc_00025CE9: ;
    ecx = MEM32(0x1D3F0C);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00025CFAu); RECOMP_ABI_CALL(0x00012D10u, sub_00012D10); /* call 0x00012D10 */

loc_00025CFA: ;
    ecx = (uint32_t)(int32_t)SMEM8(esp + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x40) (32-bit) */
    ecx = esp + 8;
    if (CMP_EQ(_fa, _fb)) goto loc_00025D1C; /* je: equal / zero */

loc_00025D08: ;
    PUSH32(esp, 0x00025D0Du); RECOMP_ABI_CALL(0x000130E0u, sub_000130E0); /* call 0x000130E0 */

loc_00025D0D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00025CC0; /* jl: less (signed <) */

loc_00025D13: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00025D1C: ;
    PUSH32(esp, 0x00025D21u); RECOMP_ABI_CALL(0x000130E0u, sub_000130E0); /* call 0x000130E0 */

loc_00025D21: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00025D30
 * Original: 0x00025D30 - 0x00025D81 (81 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025D30: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x00025D3Fu); RECOMP_ABI_CALL(0x00013DA0u, sub_00013DA0); /* call 0x00013DA0 */

loc_00025D3F: ;
    ecx = MEM32(esp + 0x40);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x1D3F0C);
    PUSH32(esp, 0x00025D54u); RECOMP_ABI_CALL(0x00012D10u, sub_00012D10); /* call 0x00012D10 */

loc_00025D54: ;
    edx = (uint32_t)(int32_t)SMEM8(esp + 0x28);
    MEM32(esi + 0x64) = edx;
    ecx = esi + 0x68;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);

loc_00025D62: ;
    edx = (uint32_t)(int32_t)SMEM8(esp + eax + 0x2D);
    MEM32(ecx) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00025D62; /* jl: less (signed <) */

loc_00025D72: ;
    ecx = esp;
    PUSH32(esp, 0x00025D7Bu); RECOMP_ABI_CALL(0x000130E0u, sub_000130E0); /* call 0x000130E0 */

loc_00025D7B: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00025D90
 * Original: 0x00025D90 - 0x00025DF0 (96 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025D90: ;
    eax = MEM32(0x1DA114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x40);
    if (CMP_NE(_fa, _fb)) goto loc_00025DC1; /* jne: not equal / not zero */

loc_00025DA0: ;
    PUSH32(esp, 0x968);
    PUSH32(esp, 0x00025DAAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00025DAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025DBA; /* je: equal / zero */

loc_00025DB1: ;
    ecx = eax;
    PUSH32(esp, 0x00025DB8u); RECOMP_ABI_CALL(0x000A41D0u, sub_000A41D0); /* call 0x000A41D0 */

loc_00025DB8: ;
    goto loc_00025DBC;

loc_00025DBA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00025DBC: ;
    MEM32(0x1DA114) = eax;

loc_00025DC1: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x00025DC9u); RECOMP_ABI_CALL(0x000A3EA0u, sub_000A3EA0); /* call 0x000A3EA0 */

loc_00025DC9: ;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 0x64) = ecx;
    ecx = esi + 0x68;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 4;
    /* nop */

loc_00025DE0: ;
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00025DE0; /* jne: not equal / not zero */

loc_00025DED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00025DF0
 * Original: 0x00025DF0 - 0x00025E31 (65 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025DF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025E2C; /* je: equal / zero */

loc_00025DFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00025E0C; /* jne: not equal / not zero */

loc_00025E04: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x00025E0Cu); RECOMP_ABI_CALL(0x0007B960u, sub_0007B960); /* call 0x0007B960 */

loc_00025E0C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00025E29; /* jne: not equal / not zero */

loc_00025E11: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x00025E19u); RECOMP_ABI_CALL(0x0007BED0u, sub_0007BED0); /* call 0x0007BED0 */

loc_00025E19: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x00025E21u); RECOMP_ABI_CALL(0x00076600u, sub_00076600); /* call 0x00076600 */

loc_00025E21: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x00025E29u); RECOMP_ABI_CALL(0x0007B940u, sub_0007B940); /* call 0x0007B940 */

loc_00025E29: ;
    MEM32(esi + 0x20) = edi;

loc_00025E2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00025E40
 * Original: 0x00025E40 - 0x00025E68 (40 bytes, 11 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00025E40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00025E40: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE140)); /* fmul dword ptr [0x1ae140] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB30)); /* fmul dword ptr [0x1aeb30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x78) = eax;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00025E70
 * Original: 0x00025E70 - 0x00025E7E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025E70: ;
    ecx = MEM32(ecx + 0x3C);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00025E7Du); RECOMP_ABI_CALL(0x0006E470u, sub_0006E470); /* call 0x0006E470 */

loc_00025E7D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00025E80
 * Original: 0x00025E80 - 0x00025EAB (43 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00025E80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00025E8Du); RECOMP_ABI_CALL(0x0002EDD0u, sub_0002EDD0); /* call 0x0002EDD0 */

loc_00025E8D: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00025E9Au); RECOMP_ABI_CALL(0x0006E470u, sub_0006E470); /* call 0x0006E470 */

loc_00025E9A: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0x00025EA2u); RECOMP_ABI_CALL(0x000ABC70u, sub_000ABC70); /* call 0x000ABC70 */

loc_00025EA2: ;
    ecx = MEM32(esi + 0x48);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000AC8D0(); return; /* tail jmp 0x000AC8D0 */

}

/**
 * sub_00025EB0
 * Original: 0x00025EB0 - 0x00025F10 (96 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00025EB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00025EBEu); RECOMP_ABI_CALL(0x0002EDD0u, sub_0002EDD0); /* call 0x0002EDD0 */

loc_00025EBE: ;
    eax = MEM32(esi + 0x20);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025EF6; /* je: equal / zero */

loc_00025EC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00025ED6; /* jne: not equal / not zero */

loc_00025ECE: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x00025ED6u); RECOMP_ABI_CALL(0x0007B960u, sub_0007B960); /* call 0x0007B960 */

loc_00025ED6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00025EF3; /* jne: not equal / not zero */

loc_00025EDB: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x00025EE3u); RECOMP_ABI_CALL(0x0007BED0u, sub_0007BED0); /* call 0x0007BED0 */

loc_00025EE3: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x00025EEBu); RECOMP_ABI_CALL(0x00076600u, sub_00076600); /* call 0x00076600 */

loc_00025EEB: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x00025EF3u); RECOMP_ABI_CALL(0x0007B940u, sub_0007B940); /* call 0x0007B940 */

loc_00025EF3: ;
    MEM32(esi + 0x20) = edi;

loc_00025EF6: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0x00025EFEu); RECOMP_ABI_CALL(0x000ABEC0u, sub_000ABEC0); /* call 0x000ABEC0 */

loc_00025EFE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00025F10(); return; /* fallthrough 0x00025F10 */

}

/**
 * sub_00025F10
 * Original: 0x00025F10 - 0x00025F43 (51 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00025F10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00025F18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00025F15u); } /* indirect call */
    }

loc_00025F18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025F26; /* je: equal / zero */

loc_00025F1C: ;
    eax = MEM32(esi + 0x14C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025F41; /* je: equal / zero */

loc_00025F26: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00025F2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00025F2Bu); } /* indirect call */
    }

loc_00025F2E: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx + 0x278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00025F41; /* jne: not equal / not zero */

loc_00025F3B: ;
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

loc_00025F41: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00025F50
 * Original: 0x00025F50 - 0x00025F5B (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00025F50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025F50: ;
    ecx = MEM32(ecx + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00025F58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00025F55u); } /* indirect call */
    }

loc_00025F58: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00025F60
 * Original: 0x00025F60 - 0x00025F98 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025F60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(eax + 0x278);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025F80; /* je: equal / zero */

loc_00025F70: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0x00025F78u); RECOMP_ABI_CALL(0x0001A720u, sub_0001A720); /* call 0x0001A720 */

loc_00025F78: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 0x00025F80u); RECOMP_ABI_CALL(0x00028950u, sub_00028950); /* call 0x00028950 */

loc_00025F80: ;
    eax = MEM32(esi + 0x3C);
    ecx = eax + 0x88;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x44);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00025F96u); RECOMP_ABI_CALL(0x00029460u, sub_00029460); /* call 0x00029460 */

loc_00025F96: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00025FA0
 * Original: 0x00025FA0 - 0x00026009 (105 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00025FA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9F0);
    esi = ecx;
    PUSH32(esp, 0x00025FADu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00025FAD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025FBE; /* je: equal / zero */

loc_00025FB4: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00025FBCu); RECOMP_ABI_CALL(0x0002F8C0u, sub_0002F8C0); /* call 0x0002F8C0 */

loc_00025FBC: ;
    goto loc_00025FC0;

loc_00025FBE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00025FC0: ;
    MEM32(esi + 0x44) = eax;
    eax = MEM32(0x1DA128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00025FED; /* jne: not equal / not zero */

loc_00025FCC: ;
    PUSH32(esp, 0x312C);
    PUSH32(esp, 0x00025FD6u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00025FD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00025FE6; /* je: equal / zero */

loc_00025FDD: ;
    ecx = eax;
    PUSH32(esp, 0x00025FE4u); RECOMP_ABI_CALL(0x000A4AA0u, sub_000A4AA0); /* call 0x000A4AA0 */

loc_00025FE4: ;
    goto loc_00025FE8;

loc_00025FE6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00025FE8: ;
    MEM32(0x1DA128) = eax;

loc_00025FED: ;
    ecx = MEM32(esi + 0x38);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x478);
    edx = ecx + eax + 0x4C;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00026007u); RECOMP_ABI_CALL(0x000290A0u, sub_000290A0); /* call 0x000290A0 */

loc_00026007: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00026010
 * Original: 0x00026010 - 0x000260AD (157 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00026010: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00026022; /* jne: not equal / not zero */

loc_0002601D: ;
    PUSH32(esp, 0x00026022u); RECOMP_ABI_CALL(0x00025FA0u, sub_00025FA0); /* call 0x00025FA0 */

loc_00026022: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00026029u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00026026u); } /* indirect call */
    }

loc_00026029: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026048; /* je: equal / zero */

loc_0002602D: ;
    PUSH32(esp, 0x1144);
    PUSH32(esp, 0x00026037u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00026037: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026063; /* je: equal / zero */

loc_0002603E: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00026046u); RECOMP_ABI_CALL(0x00024430u, sub_00024430); /* call 0x00024430 */

loc_00026046: ;
    goto loc_00026065;

loc_00026048: ;
    PUSH32(esp, 0x1130);
    PUSH32(esp, 0x00026052u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00026052: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026063; /* je: equal / zero */

loc_00026059: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00026061u); RECOMP_ABI_CALL(0x0001FC50u, sub_0001FC50); /* call 0x0001FC50 */

loc_00026061: ;
    goto loc_00026065;

loc_00026063: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00026065: ;
    MEM32(esi + 0x3C) = eax;
    ecx = eax;
    eax = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x00026079u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00026076u); } /* indirect call */
    }

loc_00026079: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00026080u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002607Du); } /* indirect call */
    }

loc_00026080: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00026086u); RECOMP_ABI_CALL(0x00024C90u, sub_00024C90); /* call 0x00024C90 */

loc_00026086: ;
    MEM8(esi + 0x54) = LO8(ebx);
    MEM8(esi + 0x55) = LO8(ebx);
    MEM8(esi + 0x56) = LO8(ebx);
    MEM32(esi + 0x58) = ebx;
    ecx = MEM32(esi + 0x5C);
    eax = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0002609Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002609Au); } /* indirect call */
    }

loc_0002609D: ;
    ecx = MEM32(esi + 0x48);
    MEM32(esi + 0x64) = ebx;
    PUSH32(esp, 0x000260A8u); RECOMP_ABI_CALL(0x000AB970u, sub_000AB970); /* call 0x000AB970 */

loc_000260A8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000260B0
 * Original: 0x000260B0 - 0x00026123 (115 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000260B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000260B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000260C1u); RECOMP_ABI_CALL(0x000AB9F0u, sub_000AB9F0); /* call 0x000AB9F0 */

loc_000260C1: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000260CAu); RECOMP_ABI_CALL(0x00019ED0u, sub_00019ED0); /* call 0x00019ED0 */

loc_000260CA: ;
    PUSH32(esp, 0x14C);
    PUSH32(esp, 0x000260D4u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000260D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000260E6; /* je: equal / zero */

loc_000260DB: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000260E4u); RECOMP_ABI_CALL(0x000791E0u, sub_000791E0); /* call 0x000791E0 */

loc_000260E4: ;
    goto loc_000260E8;

loc_000260E6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000260E8: ;
    PUSH32(esp, 0x50);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x000260F2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000260F2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026111; /* je: equal / zero */

loc_000260F9: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00026101u); RECOMP_ABI_CALL(0x00076FB0u, sub_00076FB0); /* call 0x00076FB0 */

loc_00026101: ;
    ecx = MEM32(esi + 0x18);
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x0002610Cu); RECOMP_ABI_CALL(0x00079FC0u, sub_00079FC0); /* call 0x00079FC0 */

loc_0002610C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00026111: ;
    ecx = MEM32(esi + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x0002611Eu); RECOMP_ABI_CALL(0x00079FC0u, sub_00079FC0); /* call 0x00079FC0 */

loc_0002611E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00026130
 * Original: 0x00026130 - 0x0002617B (75 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00026130: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002613Eu); RECOMP_ABI_CALL(0x000AB9F0u, sub_000AB9F0); /* call 0x000AB9F0 */

loc_0002613E: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0x00026146u); RECOMP_ABI_CALL(0x00019F10u, sub_00019F10); /* call 0x00019F10 */

loc_00026146: ;
    edi = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026164; /* je: equal / zero */

loc_0002614D: ;
    ecx = edi;
    PUSH32(esp, 0x00026154u); RECOMP_ABI_CALL(0x0007B100u, sub_0007B100); /* call 0x0007B100 */

loc_00026154: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002615Au); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0002615A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = 0;

loc_00026164: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026178; /* je: equal / zero */

loc_0002616B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00026171u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002616Fu); } /* indirect call */
    }

loc_00026171: ;
    MEM32(esi + 0x1C) = 0;

loc_00026178: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00026180
 * Original: 0x00026180 - 0x00026199 (25 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00026180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00026180: ;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x20), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00026196; /* jne: not equal / not zero */

loc_00026186: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026196; /* je: equal / zero */

loc_00026190: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00026196: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000261A0
 * Original: 0x000261A0 - 0x0002626B (203 bytes, 69 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000261A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000261A0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x1CE4B4);
    ecx = edi + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1AFF54);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x000261C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000261BEu); } /* indirect call */
    }

loc_000261C4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE1FC);
    eax = edi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE5E8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x000261DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000261D6u); } /* indirect call */
    }

loc_000261DC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = edi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFF40);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x000261F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000261EDu); } /* indirect call */
    }

loc_000261F3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AFF34);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00026210u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002620Au); } /* indirect call */
    }

loc_00026210: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE424);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0002622Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00026227u); } /* indirect call */
    }

loc_0002622D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x68;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00026232: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x1AFF20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00026242u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00026242: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00026259u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00026253u); } /* indirect call */
    }

loc_00026259: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00026232; /* jl: less (signed <) */

loc_00026262: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00026268
 * Original: 0x00026268 - 0x00026280 (24 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026268(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00026268: ;
    esp += 8; return; /* ret 4 */

    ecx = eax;
    g_seh_ebp = ebp; sub_00017280(); return; /* tail jmp 0x00017280 */

    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_00026280(); return; /* fallthrough 0x00026280 */

}

/**
 * sub_00026270
 * Original: 0x00026270 - 0x00026280 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00026270: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00026275u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00026272u); } /* indirect call */
    }

loc_00026275: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00017280(); return; /* tail jmp 0x00017280 */

    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_00026280(); return; /* fallthrough 0x00026280 */

}

/**
 * sub_00026280
 * Original: 0x00026280 - 0x00026467 (487 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026280(void)
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

loc_00026280: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    MEM32(esi + 0x94) = edx;
    eax = MEM32(0x1D9FB8);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0x7F7FFFFF;
    MEM32(esp + 0x14) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_00026334; /* jle: less or equal (signed <=) */

loc_000262AA: ;
    MEM32(esp + 0xC) = 0x14;
    PUSH32(esp, ebp);

loc_000262B3: ;
    ecx = MEM32(esp + 0x10);
    ebp = MEM32(ecx + eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026313; /* je: equal / zero */

loc_000262BE: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    ebx = MEM32(ebp + 0x44);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000262C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000262C6u); } /* indirect call */
    }

loc_000262C9: ;
    edi = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000262D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000262CFu); } /* indirect call */
    }

loc_000262D2: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00026311; /* jp: parity */

loc_00026305: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x94) = ebp;
    goto loc_00026313;

loc_00026311: ;
    fp_pop(); /* fstp st(0) */

loc_00026313: ;
    ecx = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x10);
    eax = MEM32(0x1D9FB8);
    edi = MEM32(eax + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_000262B3; /* jl: less (signed <) */

loc_00026333: ;
    POP32(esp, ebp);

loc_00026334: ;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002642A; /* je: equal / zero */

loc_00026342: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    ebx = MEM32(eax + 0x44);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002634Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002634Au); } /* indirect call */
    }

loc_0002634D: ;
    edi = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00026356u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00026353u); } /* indirect call */
    }

loc_00026356: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x20);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0xA0) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xA8) = ecx;
    PUSH32(esp, ecx);
    MEMF(esi + 0xA4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xA8)); /* fld float */
    fp_push(MEMF(esi + 0xA4)); /* fld float */
    fp_push(MEMF(esi + 0xA0)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000263B3u); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_000263B3: ;
    eax = MEM32(esi + 0x3C);
    MEMF(esi + 0x98) = (float)fp_top(); /* fst */
    fp_push(MEMF(esi + 0xA8)); /* fld float */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esi + 0xA4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi + 0xA0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esi + 0x9C) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0002645E; /* jnp: not parity */

loc_000263F5: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) / fp_top()); /* fdivr dword ptr [0x1c91d0] */
    POP32(esp, edi);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xA0)); /* fmul dword ptr [esi + 0xa0] */
    MEMF(esi + 0xA0) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xA4)); /* fmul dword ptr [esi + 0xa4] */
    MEMF(esi + 0xA4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xA8)); /* fmul dword ptr [esi + 0xa8] */
    MEMF(esi + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002642A: ;
    MEM32(esi + 0xA8) = edx;
    MEM32(esi + 0xA4) = edx;
    MEM32(esi + 0xA0) = edx;
    PUSH32(esp, 0x3F800000);
    ecx = 0x1CEFD8;
    MEM32(esi + 0x98) = edx;
    PUSH32(esp, 0x00026451u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_00026451: ;
    MEMF(esi + 0x9C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002645E: ;
    POP32(esp, edi);
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
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
 * sub_00026470
 * Original: 0x00026470 - 0x000264BE (78 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00026470: ;
    SET_LO8(edx, MEM8(esp + 8));
    PUSH32(esp, ebx);
    eax = ecx;
    SET_LO8(ecx, MEM8(esp + 8));
    SET_LO8(ebx, 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, MEM8(eax + 0x54));
    if (CMP_EQ(_fa, _fb)) goto loc_000264B5; /* je: equal / zero */

loc_00026486: ;
    SET_LO8(ecx, LO8(ecx) | LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + 0x54) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(eax + 0x56) = LO8(ecx);

loc_00026492: ;
    SET_LO8(ecx, MEM8(eax + 0x55));
    SET_LO8(edx, LO8(edx) << 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ebx, LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM8(eax + 0x55) = LO8(ecx);
    SET_LO8(edx, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    ecx = ZX8(LO8(edx));
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x44);
    PUSH32(esp, 0x000264B1u); RECOMP_ABI_CALL(0x00028D60u, sub_00028D60); /* call 0x00028D60 */

loc_000264B1: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000264B5: ;
    SET_LO8(ebx, ~LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(eax + 0x54) = LO8(ecx);
    goto loc_00026492;

}

/**
 * sub_000264C0
 * Original: 0x000264C0 - 0x0002657E (190 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000264C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000264C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000264D6; /* jne: not equal / not zero */

loc_000264CB: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002657A; /* jne: not equal / not zero */

loc_000264D6: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000264E4; /* jne: not equal / not zero */

loc_000264DD: ;
    MEM32(edi + 0x30) = 0x3F000000;

loc_000264E4: ;
    SET_LO8(eax, MEM8(edi + 0x55));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(edi + 0x2C) = 1;
    if (CMP_BE(_fa, _fb)) goto loc_0002654A; /* jbe: below or equal (unsigned <=) */

loc_000264F2: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00026549; /* jle: less or equal (signed <=) */

loc_00026501: ;
    PUSH32(esp, esi);

loc_00026502: ;
    SET_LO8(edx, MEM8(edi + 0x54));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(edx, LO8(edx) >> LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002653B; /* je: equal / zero */

loc_0002650E: ;
    eax = MEM32(eax + 0x58);
    esi = ZX8(LO8(ebx));
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esi + eax);
    PUSH32(esp, 0x0002651Fu); RECOMP_ABI_CALL(0x0009DDC0u, sub_0009DDC0); /* call 0x0009DDC0 */

loc_0002651F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002653B; /* jne: not equal / not zero */

loc_00026523: ;
    MEM32(edi + 0x58) = 1;
    ecx = MEM32(0x1D9FB8);
    edx = MEM32(ecx + 0x58);
    ecx = MEM32(edx + esi);
    PUSH32(esp, 0x0002653Bu); RECOMP_ABI_CALL(0x0009DE10u, sub_0009DE10); /* call 0x0009DE10 */

loc_0002653B: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00026502; /* jl: less (signed <) */

loc_00026548: ;
    POP32(esp, esi);

loc_00026549: ;
    POP32(esp, ebx);

loc_0002654A: ;
    eax = MEM32(edi + 0x3C);
    ecx = MEM32(eax + 0x1008);
    MEM32(ecx + 0x100) = 0;
    eax = MEM32(edi + 0x44);
    ecx = MEM32(eax + 0x278);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026574; /* je: equal / zero */

loc_0002656A: ;
    MEM32(eax + 0x290) = MEM32(eax + 0x290) | 0x20000;
    _fa = (uint32_t)(MEM32(eax + 0x290)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00026574: ;
    MEM32(edi + 0xB8) = MEM32(edi + 0xB8) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xB8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0002657A: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00026580
 * Original: 0x00026580 - 0x000265EA (106 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00026580: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000265E8; /* jne: not equal / not zero */

loc_00026589: ;
    SET_LO8(eax, MEM8(esi + 0x55));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0x2C) = 3;
    if (CMP_BE(_fa, _fb)) goto loc_000265DB; /* jbe: below or equal (unsigned <=) */

loc_00026597: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000265DA; /* jle: less or equal (signed <=) */

loc_000265A6: ;
    SET_LO8(edx, MEM8(esi + 0x54));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(edx, LO8(edx) >> LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM32(esi + 0x58) = 0;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000265CD; /* je: equal / zero */

loc_000265B9: ;
    ecx = MEM32(0x1D9FB8);
    edx = MEM32(ecx + 0x58);
    eax = ZX8(LO8(ebx));
    ecx = MEM32(edx + eax * 4);
    PUSH32(esp, 0x000265CDu); RECOMP_ABI_CALL(0x0009DE30u, sub_0009DE30); /* call 0x0009DE30 */

loc_000265CD: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000265A6; /* jl: less (signed <) */

loc_000265DA: ;
    POP32(esp, ebx);

loc_000265DB: ;
    esi = MEM32(esi + 0x44);
    MEM32(esi + 0x290) = MEM32(esi + 0x290) & 0xFFFDFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x290)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000265E8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000265F0
 * Original: 0x000265F0 - 0x00026621 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000265F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000265F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(eax + 0x278);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002661A; /* jne: not equal / not zero */

loc_00026600: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0x00026608u); RECOMP_ABI_CALL(0x0001AB50u, sub_0001AB50); /* call 0x0001AB50 */

loc_00026608: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002661A; /* jne: not equal / not zero */

loc_0002660C: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 0x00026614u); RECOMP_ABI_CALL(0x00028D80u, sub_00028D80); /* call 0x00028D80 */

loc_00026614: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002661A; /* jne: not equal / not zero */

loc_00026618: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002661A: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00026630
 * Original: 0x00026630 - 0x00026663 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00026630: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(eax + 0x278);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002665F; /* je: equal / zero */

loc_00026640: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0x00026648u); RECOMP_ABI_CALL(0x0001AB50u, sub_0001AB50); /* call 0x0001AB50 */

loc_00026648: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002665F; /* jne: not equal / not zero */

loc_0002664C: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 0x00026654u); RECOMP_ABI_CALL(0x00028D80u, sub_00028D80); /* call 0x00028D80 */

loc_00026654: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002665F; /* jne: not equal / not zero */

loc_00026658: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002665F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00026670
 * Original: 0x00026670 - 0x0002669A (42 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00026670: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1C);
    esi = ecx;
    PUSH32(esp, 0x0002667Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0002667A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026690; /* je: equal / zero */

loc_00026681: ;
    ecx = eax;
    PUSH32(esp, 0x00026688u); RECOMP_ABI_CALL(0x00017240u, sub_00017240); /* call 0x00017240 */

loc_00026688: ;
    MEM32(esi + 0xAC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00026690: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xAC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000266A0
 * Original: 0x000266A0 - 0x000266AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000266A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000266A0: ;
    ecx = MEM32(ecx + 0xAC);
    g_seh_ebp = ebp; sub_0012AF20(); return; /* tail jmp 0x0012AF20 */

}

/**
 * sub_000266B0
 * Original: 0x000266B0 - 0x000266BA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000266B0(void)
{

loc_000266B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x4C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000266C0
 * Original: 0x000266C0 - 0x00026722 (98 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000266C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000266C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000266C8u); RECOMP_ABI_CALL(0x00025C00u, sub_00025C00); /* call 0x00025C00 */

loc_000266C8: ;
    PUSH32(esp, 0xD4);
    MEM32(esi + 0x50) = 1;
    PUSH32(esp, 0x000266D9u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000266D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000266E9; /* je: equal / zero */

loc_000266E0: ;
    ecx = eax;
    PUSH32(esp, 0x000266E7u); RECOMP_ABI_CALL(0x000A33C0u, sub_000A33C0); /* call 0x000A33C0 */

loc_000266E7: ;
    goto loc_000266EB;

loc_000266E9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000266EB: ;
    PUSH32(esp, 0x30);
    MEM32(esi + 0x140) = eax;
    PUSH32(esp, 0x000266F8u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000266F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026713; /* je: equal / zero */

loc_000266FF: ;
    ecx = eax;
    PUSH32(esp, 0x00026706u); RECOMP_ABI_CALL(0x000A2CB0u, sub_000A2CB0); /* call 0x000A2CB0 */

loc_00026706: ;
    MEM32(esi + 0x144) = eax;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00026713: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x144) = eax;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00026730
 * Original: 0x00026730 - 0x00026774 (68 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026730(void)
{

loc_00026730: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0002673Eu); RECOMP_ABI_CALL(0x00026010u, sub_00026010); /* call 0x00026010 */

loc_0002673E: ;
    edi = MEM32(0x1D3F08);
    eax = MEM32(esi + 0x28);
    edi = MEM32(edi + 0x1C);
    eax = MEM32(edi + eax * 4 + 0x9C);
    ecx = MEM32(esi + 0x140);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x158);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00026764u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00026761u); } /* indirect call */
    }

loc_00026764: ;
    ecx = MEM32(esi + 0x144);
    PUSH32(esp, 0x0002676Fu); RECOMP_ABI_CALL(0x000A2BF0u, sub_000A2BF0); /* call 0x000A2BF0 */

loc_0002676F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00026780
 * Original: 0x00026780 - 0x000267AE (46 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00026780: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002679F; /* je: equal / zero */

loc_0002678B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00026798; /* jne: not equal / not zero */

loc_00026790: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x00026798u); RECOMP_ABI_CALL(0x0007B960u, sub_0007B960); /* call 0x0007B960 */

loc_00026798: ;
    MEM32(esi + 0x20) = 1;

loc_0002679F: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000267ACu); RECOMP_ABI_CALL(0x0006E470u, sub_0006E470); /* call 0x0006E470 */

loc_000267AC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000267B0
 * Original: 0x000267B0 - 0x000267F7 (71 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000267B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000267B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000267CF; /* je: equal / zero */

loc_000267BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000267C8; /* jne: not equal / not zero */

loc_000267C0: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x000267C8u); RECOMP_ABI_CALL(0x0007B960u, sub_0007B960); /* call 0x0007B960 */

loc_000267C8: ;
    MEM32(esi + 0x20) = 1;

loc_000267CF: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000267D9u); RECOMP_ABI_CALL(0x0002EDD0u, sub_0002EDD0); /* call 0x0002EDD0 */

loc_000267D9: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000267E6u); RECOMP_ABI_CALL(0x0006E470u, sub_0006E470); /* call 0x0006E470 */

loc_000267E6: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0x000267EEu); RECOMP_ABI_CALL(0x000ABC70u, sub_000ABC70); /* call 0x000ABC70 */

loc_000267EE: ;
    ecx = MEM32(esi + 0x48);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000AC8D0(); return; /* tail jmp 0x000AC8D0 */

}

/**
 * sub_00026800
 * Original: 0x00026800 - 0x000268B0 (176 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026800(void)
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

loc_00026800: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00026878; /* je: equal / zero */

loc_0002680B: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00026878; /* jne: not equal / not zero */

loc_00026811: ;
    ecx = MEM32(0x1D3F08);
    eax = MEM32(esi + 0x28);
    edx = MEM32(ecx + 0x1C);
    ecx = MEM32(edx + eax * 4 + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026878; /* je: equal / zero */

loc_00026828: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, ebx);
    ebx = MEM32(0x1D3EBC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x158);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00026840u); RECOMP_ABI_CALL(0x0001BF90u, sub_0001BF90); /* call 0x0001BF90 */

loc_00026840: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0002684Eu); RECOMP_ABI_CALL(0x000EFF60u, sub_000EFF60); /* call 0x000EFF60 */

loc_0002684E: ;
    ecx = MEM32(esi + 0x3C);
    edi = MEM32(esi + 0x158);
    ebx = MEM32(0x1D3EBC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00026864u); RECOMP_ABI_CALL(0x0001BF90u, sub_0001BF90); /* call 0x0001BF90 */

loc_00026864: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00026872u); RECOMP_ABI_CALL(0x000EFF60u, sub_000EFF60); /* call 0x000EFF60 */

loc_00026872: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00026878: ;
    eax = MEM32(esi + 0x158);
    ecx = MEM32(0x1D3EBC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002688Eu); RECOMP_ABI_CALL(0x000EFF60u, sub_000EFF60); /* call 0x000EFF60 */

loc_0002688E: ;
    ecx = MEM32(esi + 0x158);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(0x1D3EBC);
    PUSH32(esp, 0x000268A4u); RECOMP_ABI_CALL(0x000EFF60u, sub_000EFF60); /* call 0x000EFF60 */

loc_000268A4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_000268B0(); return; /* fallthrough 0x000268B0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000268B0
 * Original: 0x000268B0 - 0x000268CA (26 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000268B0(void)
{

loc_000268B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000268B8u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_000268B8: ;
    eax = MEM32(esi + 0x140);
    MEM32(eax + 0xD0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000268D0
 * Original: 0x000268D0 - 0x000268EC (28 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000268D0(void)
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

loc_000268D0: ;
    fp_push(MEMF(ecx + 0x154)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1D7404)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1d7404] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000268E9; /* jne: not equal / not zero */

loc_000268E3: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000268E9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000268F0
 * Original: 0x000268F0 - 0x00026936 (70 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000268F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000268F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000268F8u); RECOMP_ABI_CALL(0x00025C00u, sub_00025C00); /* call 0x00025C00 */

loc_000268F8: ;
    PUSH32(esp, 0x1C);
    MEM32(esi + 0x50) = 0;
    PUSH32(esp, 0x00026906u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00026906: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026916; /* je: equal / zero */

loc_0002690D: ;
    ecx = eax;
    PUSH32(esp, 0x00026914u); RECOMP_ABI_CALL(0x00017240u, sub_00017240); /* call 0x00017240 */

loc_00026914: ;
    goto loc_00026918;

loc_00026916: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00026918: ;
    MEM32(esi + 0xAC) = eax;
    MEM32(esi + 0x14C) = 0;
    MEM32(esi + 0x28) = 0xFFFFFFFFu;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00026940
 * Original: 0x00026940 - 0x00026945 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00026940: ;
    g_seh_ebp = ebp; sub_0012AF20(); return; /* tail jmp 0x0012AF20 */

}

/**
 * sub_00026950
 * Original: 0x00026950 - 0x00026970 (32 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00026950: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00026958u); RECOMP_ABI_CALL(0x00025C00u, sub_00025C00); /* call 0x00025C00 */

loc_00026958: ;
    MEM32(esi + 0x50) = 0;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00026970(); return; /* fallthrough 0x00026970 */

}

/**
 * sub_00026970
 * Original: 0x00026970 - 0x000269A7 (55 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00026970: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026998; /* je: equal / zero */

loc_00026979: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x00026981u); RECOMP_ABI_CALL(0x0007BED0u, sub_0007BED0); /* call 0x0007BED0 */

loc_00026981: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x00026989u); RECOMP_ABI_CALL(0x00076600u, sub_00076600); /* call 0x00076600 */

loc_00026989: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x00026991u); RECOMP_ABI_CALL(0x0007B940u, sub_0007B940); /* call 0x0007B940 */

loc_00026991: ;
    MEM32(esi + 0x20) = 2;

loc_00026998: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000269A5u); RECOMP_ABI_CALL(0x0006E470u, sub_0006E470); /* call 0x0006E470 */

loc_000269A5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000269B0
 * Original: 0x000269B0 - 0x00026A00 (80 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000269B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000269B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000269D8; /* je: equal / zero */

loc_000269B9: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x000269C1u); RECOMP_ABI_CALL(0x0007BED0u, sub_0007BED0); /* call 0x0007BED0 */

loc_000269C1: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x000269C9u); RECOMP_ABI_CALL(0x00076600u, sub_00076600); /* call 0x00076600 */

loc_000269C9: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x000269D1u); RECOMP_ABI_CALL(0x0007B940u, sub_0007B940); /* call 0x0007B940 */

loc_000269D1: ;
    MEM32(esi + 0x20) = 2;

loc_000269D8: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000269E2u); RECOMP_ABI_CALL(0x0002EDD0u, sub_0002EDD0); /* call 0x0002EDD0 */

loc_000269E2: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000269EFu); RECOMP_ABI_CALL(0x0006E470u, sub_0006E470); /* call 0x0006E470 */

loc_000269EF: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0x000269F7u); RECOMP_ABI_CALL(0x000ABC70u, sub_000ABC70); /* call 0x000ABC70 */

loc_000269F7: ;
    ecx = MEM32(esi + 0x48);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000AC8D0(); return; /* tail jmp 0x000AC8D0 */

}

/**
 * sub_00026A00
 * Original: 0x00026A00 - 0x00026A6B (107 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026A00(void)
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

loc_00026A00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x20;
    ebx = 8;

loc_00026A12: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00026A5E; /* jne: not equal / not zero */

loc_00026A18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026A5E; /* je: equal / zero */

loc_00026A1C: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00026A5E; /* jne: not equal / not zero */

loc_00026A2C: ;
    MEM32(edi + 0x10) = MEM32(edi + 0x10) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00026A5E; /* jne: not equal / not zero */

loc_00026A36: ;
    ecx = MEM32(edi + 0x1C);
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00026A5E; /* jne: not equal / not zero */

loc_00026A40: ;
    eax = MEM32(ecx + 0x3C);
    fp_push(MEMF(eax + 0x688)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF320)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af320] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00026A5E; /* jnp: not parity */

loc_00026A56: ;
    ecx = MEM32(ecx + 0x44);
    PUSH32(esp, 0x00026A5Eu); RECOMP_ABI_CALL(0x00028CF0u, sub_00028CF0); /* call 0x00028CF0 */

loc_00026A5E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00026A12; /* jne: not equal / not zero */

loc_00026A64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00026A70
 * Original: 0x00026A70 - 0x00026AAF (63 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026A70(void)
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

loc_00026A70: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(0x1AFF04)); /* fld float */
    eax = MEM32(edx + 0x28);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = eax + eax * 2;
    ecx = esi + ecx * 4;
    MEM32(ecx + 0x20) = edx;
    edx = eax + eax * 2 + 9;
    MEMF(esi + edx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x28) = 1;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00026AA9; /* jne: not equal / not zero */

loc_00026AA1: ;
    ecx = MEM32(eax + 0x44);
    PUSH32(esp, 0x00026AA9u); RECOMP_ABI_CALL(0x00028CF0u, sub_00028CF0); /* call 0x00028CF0 */

loc_00026AA9: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00026AB0
 * Original: 0x00026AB0 - 0x00026B26 (118 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026AB0(void)
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

loc_00026AB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026AE3; /* je: equal / zero */

loc_00026AC0: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi + 0x28;
    ecx = 8;
    goto loc_00026AD0;

    /* nop */

loc_00026AD0: ;
    MEM32(eax + -8) = ebp;
    MEM32(eax + -4) = ebp;
    MEM32(eax) = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00026AD0; /* jne: not equal / not zero */

loc_00026ADE: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00026AE3: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(esi + 0x18) = eax;
    edi = esi + 0x20;
    ebx = 8;

loc_00026AF4: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026B19; /* je: equal / zero */

loc_00026AFA: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00026B19; /* jne: not equal / not zero */

loc_00026B0A: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00026B19u); RECOMP_ABI_CALL(0x00026A00u, sub_00026A00); /* call 0x00026A00 */

loc_00026B19: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00026AF4; /* jne: not equal / not zero */

loc_00026B1F: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00026B30
 * Original: 0x00026B30 - 0x00026BFA (202 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00026B30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00026BF5; /* je: equal / zero */

loc_00026B44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00026BF5; /* je: equal / zero */

loc_00026B4D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x00026B52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00026B4Fu); } /* indirect call */
    }

loc_00026B52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00026BEE; /* jne: not equal / not zero */

loc_00026B5A: ;
    ecx = MEM32(0x1D3F08);
    edx = MEM32(ecx + 0x20);
    eax = MEM32(edx + 4);
    _fb = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 0x40)));
    eax = eax - MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(esi + 0x64) = 0;
    ecx = MEM32(edi + 0x5C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00026BF5; /* ja: above (unsigned >) */

loc_00026B7D: ;
    ecx = ZX8(MEM8(ecx + 0x26C18));
    { uint32_t _jt = MEM32(ecx * 4 + 0x26BFC); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00026B8Bu) goto loc_00026B8B;
    if (_jt == 0x00026B9Au) goto loc_00026B9A;
    if (_jt == 0x00026BA6u) goto loc_00026BA6;
    if (_jt == 0x00026BC2u) goto loc_00026BC2;
    if (_jt == 0x00026BD2u) goto loc_00026BD2;
    if (_jt == 0x00026BEEu) goto loc_00026BEE;
    if (_jt == 0x00026BF5u) goto loc_00026BF5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00026B8B: ;
    edx = MEM32(0x1D3F08);
    ecx = MEM32(edx + 0x24);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00026BC2; /* je: equal / zero */

loc_00026B9A: ;
    ecx = esi;
    PUSH32(esp, 0x00026BA1u); RECOMP_ABI_CALL(0x00025C80u, sub_00025C80); /* call 0x00025C80 */

loc_00026BA1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00026BA6: ;
    eax = esi + 0x68;
    MEM32(esi + 0x64) = 1;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    POP32(esp, edi);
    MEM32(eax + 0xC) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00026BC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00026BF0; /* je: equal / zero */

loc_00026BC8: ;
    PUSH32(esp, 0x00026BCDu); RECOMP_ABI_CALL(0x00025C80u, sub_00025C80); /* call 0x00025C80 */

loc_00026BCD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00026BD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00026BC8; /* jne: not equal / not zero */

loc_00026BD8: ;
    PUSH32(esp, 0x00026BDDu); RECOMP_ABI_CALL(0x00025CB0u, sub_00025CB0); /* call 0x00025CB0 */

loc_00026BDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00026BEE; /* jl: less (signed <) */

loc_00026BE1: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00026BE9u); RECOMP_ABI_CALL(0x00025D30u, sub_00025D30); /* call 0x00025D30 */

loc_00026BE9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00026BEE: ;
    ecx = esi;

loc_00026BF0: ;
    PUSH32(esp, 0x00026BF5u); RECOMP_ABI_CALL(0x00025D90u, sub_00025D90); /* call 0x00025D90 */

loc_00026BF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00026C30
 * Original: 0x00026C30 - 0x00026CB0 (128 bytes, 37 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00026C30(void)
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

loc_00026C30: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x6C);
    fp_push((double)SMEM32(ecx + 0x6C)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00026C41; /* jge: greater or equal (signed >=) */

loc_00026C3B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D8)); /* fadd dword ptr [0x1c91d8] */

loc_00026C41: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF354)); /* fmul dword ptr [0x1af354] */
    edx = MEM32(ecx + 0x68);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(ecx + 0x68)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00026C57; /* jge: greater or equal (signed >=) */

loc_00026C51: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D8)); /* fadd dword ptr [0x1c91d8] */

loc_00026C57: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF354)); /* fmul dword ptr [0x1af354] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF354)); /* fmul dword ptr [0x1af354] */
    fp_push((double)SMEM32(ecx + 0x64)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x1C91D0)); /* fsub dword ptr [0x1c91d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF68)); /* fmul dword ptr [0x1aff68] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF64)); /* fmul dword ptr [0x1aff64] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00026C99; /* jp: parity */

loc_00026C8F: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1C91E0)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00026C99: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00026CAE; /* jne: not equal / not zero */

loc_00026CA6: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1C91D0)); /* fld float */

loc_00026CAE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00026CB0
 * Original: 0x00026CB0 - 0x00026D1B (107 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00026CB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi + 0xC0;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00026CCCu); RECOMP_ABI_CALL(0x00026AB0u, sub_00026AB0); /* call 0x00026AB0 */

loc_00026CCC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00026CD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00026CD0u); } /* indirect call */
    }

loc_00026CD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00026D16; /* jne: not equal / not zero */

loc_00026CD7: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(eax + 0x278);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_00026CEE; /* je: equal / zero */

loc_00026CE9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00026D15; /* jne: not equal / not zero */

loc_00026CEE: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00026CF7u); RECOMP_ABI_CALL(0x0001A5B0u, sub_0001A5B0); /* call 0x0001A5B0 */

loc_00026CF7: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00026D00u); RECOMP_ABI_CALL(0x000294E0u, sub_000294E0); /* call 0x000294E0 */

loc_00026D00: ;
    ecx = MEM32(esi + 0x3C);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x88;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x44);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00026D15u); RECOMP_ABI_CALL(0x00025A30u, sub_00025A30); /* call 0x00025A30 */

loc_00026D15: ;
    POP32(esp, edi);

loc_00026D16: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00026D20
 * Original: 0x00026D20 - 0x00026D99 (121 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00026D20: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00026D29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00026D26u); } /* indirect call */
    }

loc_00026D29: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00026D2Fu); RECOMP_ABI_CALL(0x00024CB0u, sub_00024CB0); /* call 0x00024CB0 */

loc_00026D2F: ;
    ecx = MEM32(esi + 0x44);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026D44; /* je: equal / zero */

loc_00026D3B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00026D41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00026D3Fu); } /* indirect call */
    }

loc_00026D41: ;
    MEM32(esi + 0x44) = ebx;

loc_00026D44: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026D54; /* je: equal / zero */

loc_00026D4B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00026D51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00026D4Fu); } /* indirect call */
    }

loc_00026D51: ;
    MEM32(esi + 0x3C) = ebx;

loc_00026D54: ;
    ecx = MEM32(esi + 0xAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026D6A; /* je: equal / zero */

loc_00026D5E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00026D64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00026D62u); } /* indirect call */
    }

loc_00026D64: ;
    MEM32(esi + 0xAC) = ebx;

loc_00026D6A: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026D85; /* je: equal / zero */

loc_00026D72: ;
    ecx = edi;
    PUSH32(esp, 0x00026D79u); RECOMP_ABI_CALL(0x0007B100u, sub_0007B100); /* call 0x0007B100 */

loc_00026D79: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00026D7Fu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00026D7F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = ebx;

loc_00026D85: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00026D96; /* je: equal / zero */

loc_00026D8D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00026D93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00026D91u); } /* indirect call */
    }

loc_00026D93: ;
    MEM32(esi + 0x1C) = ebx;

loc_00026D96: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00026DA0
 * Original: 0x00026DA0 - 0x00026E87 (231 bytes, 64 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00026DA0(void)
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

loc_00026DA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00026DABu); RECOMP_ABI_CALL(0x00026C30u, sub_00026C30); /* call 0x00026C30 */

loc_00026DAB: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x1DA128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(esi + 0x38);
    if (CMP_NE(_fa, _fb)) goto loc_00026DDC; /* jne: not equal / not zero */

loc_00026DBB: ;
    PUSH32(esp, 0x312C);
    PUSH32(esp, 0x00026DC5u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00026DC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026DD5; /* je: equal / zero */

loc_00026DCC: ;
    ecx = eax;
    PUSH32(esp, 0x00026DD3u); RECOMP_ABI_CALL(0x000A4AA0u, sub_000A4AA0); /* call 0x000A4AA0 */

loc_00026DD3: ;
    goto loc_00026DD7;

loc_00026DD5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00026DD7: ;
    MEM32(0x1DA128) = eax;

loc_00026DDC: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x478);
    fp_push((double)SMEM32(esi + eax + 0xE0)); /* fild */
    ecx = MEM32(esi + eax + 0xE0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi + eax + 0xD0;
    if (CMP_GE(_fas, _fbs)) goto loc_00026E01; /* jge: greater or equal (signed >=) */

loc_00026DFB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D8)); /* fadd dword ptr [0x1c91d8] */

loc_00026E01: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF354)); /* fmul dword ptr [0x1af354] */
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00026E17; /* jge: greater or equal (signed >=) */

loc_00026E11: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D8)); /* fadd dword ptr [0x1c91d8] */

loc_00026E17: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF354)); /* fmul dword ptr [0x1af354] */
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00026E34; /* jge: greater or equal (signed >=) */

loc_00026E2E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D8)); /* fadd dword ptr [0x1c91d8] */

loc_00026E34: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF354)); /* fmul dword ptr [0x1af354] */
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF0C)); /* fmul dword ptr [0x1aff0c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF354)); /* fmul dword ptr [0x1af354] */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF64)); /* fmul dword ptr [0x1aff64] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00026E6E; /* jp: parity */

loc_00026E62: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1C91E0)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00026E6E: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00026E83; /* jne: not equal / not zero */

loc_00026E7B: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1C91D0)); /* fld float */

loc_00026E83: ;
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
 * sub_00026E90
 * Original: 0x00026E90 - 0x00026F13 (131 bytes, 39 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00026E90(void)
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

loc_00026E90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 0x00026E9Cu); RECOMP_ABI_CALL(0x00028C80u, sub_00028C80); /* call 0x00028C80 */

loc_00026E9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00026EA8; /* je: equal / zero */

loc_00026EA0: ;
    fp_push(MEMF(0x1C91CC)); /* fld float */
    goto loc_00026EB1;

loc_00026EA8: ;
    eax = MEM32(esi + 0x5C);
    fp_push(MEMF(eax + 0x2D0)); /* fld float */

loc_00026EB1: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0xB4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0xb4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00026EC9; /* jne: not equal / not zero */

loc_00026EBE: ;
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00026EC9: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(esp + 0xC) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF6C)); /* fmul dword ptr [0x1aff6c] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = esp + 0xC;
    if (TEST_Z(_fa, _fb)) goto loc_00026EF4; /* je: equal / zero */

loc_00026EF0: ;
    eax = esp + 4;

loc_00026EF4: ;
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB4)); /* fsub dword ptr [esi + 0xb4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xB4)); /* fadd dword ptr [esi + 0xb4] */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    fp_pop(); /* fstp st(0) */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00026F20
 * Original: 0x00026F20 - 0x00027004 (228 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00026F20(void)
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

loc_00026F20: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00026F38; /* jne: not equal / not zero */

loc_00026F2E: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00026FFD; /* jne: not equal / not zero */

loc_00026F38: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x2C;
    MEM32(esi + 0x2C) = 0;
    MEM32(esi + 0x34) = 0x3F800000;
    PUSH32(esp, 0x00026F63u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00026F63: ;
    SET_LO16(eax, MEM16(esp + 0x1E));
    ecx = ZX8(HI8(eax));
    MEM32(esp + 4) = ecx;
    edx = ZX8(LO8(eax));
    fp_push((double)SMEM32(esp + 4)); /* fild */
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 4) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91E4)); /* fmul dword ptr [0x1c91e4] */
    ecx = ZX8(HI8(eax));
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = ZX8(LO8(eax));
    fp_push((double)SMEM32(esp + 4)); /* fild */
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(eax + 0x1008);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x104;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    eax = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx + 0x1008);
    MEM32(edx + 0x100) = 0xD;

loc_00026FFD: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00027010
 * Original: 0x00027010 - 0x000270C4 (180 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027010(void)
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

loc_00027010: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x3C);
    eax = MEM32(ecx + 0x54);
    MEM32(esp + 4) = eax;
    edx = MEM32(ecx + 0x58);
    MEM32(esp + 8) = edx;
    eax = MEM32(ecx + 0x5C);
    MEM32(esp + 0xC) = eax;
    edx = MEM32(ecx + 0x78);
    MEM32(esp + 0x10) = edx;
    eax = MEM32(ecx + 0x7C);
    MEM32(esp + 0x14) = eax;
    edx = MEM32(ecx + 0x80);
    MEM32(esp + 0x18) = edx;
    eax = MEM32(ecx + 0x84);
    MEM32(esp + 0x1C) = eax;
    edx = MEM32(ecx + 0x2DC);
    PUSH32(esp, esi);
    MEM32(esp + 0x48) = edx;
    eax = MEM32(ecx + 0x68C);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x50) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00027070: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00027076u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00027073u); } /* indirect call */
    }

loc_00027076: ;
    MEMF(esp + esi * 4 + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebx + 0x3C);
    eax = MEM32(ecx + 0x650);
    SET_LO8(edx, MEM8(eax + edi + 0xE4));
    MEM8(esp + esi + 0x48) = LO8(edx);
    eax = MEM32(ecx + 0x650);
    edx = MEM32(eax + edi + 8);
    MEM32(esp + esi * 4 + 0x38) = edx;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x114;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x450) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x450 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00027070; /* jl: less (signed <) */

loc_000270AB: ;
    ecx = MEM32(ebx + 0xAC);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000270BBu); RECOMP_ABI_CALL(0x00017B50u, sub_00017B50); /* call 0x00017B50 */

loc_000270BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000270D0
 * Original: 0x000270D0 - 0x00027114 (68 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000270D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000270D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x000270D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000270D6u); } /* indirect call */
    }

loc_000270D9: ;
    edi = MEM32(esi + 0x48);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000270F7; /* je: equal / zero */

loc_000270E0: ;
    ecx = edi;
    PUSH32(esp, 0x000270E7u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_000270E7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000270EDu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000270ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = 0;

loc_000270F7: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002710B; /* je: equal / zero */

loc_000270FE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00027104u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00027102u); } /* indirect call */
    }

loc_00027104: ;
    MEM32(esi + 0x5C) = 0;

loc_0002710B: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00018E80(); return; /* tail jmp 0x00018E80 */

}

/**
 * sub_00027120
 * Original: 0x00027120 - 0x000271A0 (128 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00027120: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x1DE464);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00027130u); RECOMP_ABI_CALL(0x000EDE40u, sub_000EDE40); /* call 0x000EDE40 */

loc_00027130: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x1DE460);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(eax + 0x1B4) = 2;
    PUSH32(esp, 0x0002714Bu); RECOMP_ABI_CALL(0x00026010u, sub_00026010); /* call 0x00026010 */

loc_0002714B: ;
    eax = MEM32(0x1DE464);
    MEM32(eax + 0x198) = MEM32(eax + 0x198) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(eax + 0x198)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(0x1DE460);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x1B4) = eax;
    MEM32(esi + 0x140) = eax;
    eax = 0x3F800000;
    MEM32(esi + 0x148) = eax;
    MEM32(esi + 0x144) = eax;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00027185u); RECOMP_ABI_CALL(0x00024DD0u, sub_00024DD0); /* call 0x00024DD0 */

loc_00027185: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002718Eu); RECOMP_ABI_CALL(0x00024DD0u, sub_00024DD0); /* call 0x00024DD0 */

loc_0002718E: ;
    edx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00027197u); RECOMP_ABI_CALL(0x00024BC0u, sub_00024BC0); /* call 0x00024BC0 */

loc_00027197: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_000271A0(); return; /* fallthrough 0x000271A0 */

}

/**
 * sub_000271A0
 * Original: 0x000271A0 - 0x00027354 (436 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000271A0(void)
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

loc_000271A0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(eax + 0x1008);
    MEM32(ecx + 0x100) = 1;
    ecx = MEM32(esi + 0x140);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x140) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_000271FC; /* jg: greater (signed >) */

loc_000271CC: ;
    PUSH32(esp, 5);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x000271D8u); RECOMP_ABI_CALL(0x000CE0A0u, sub_000CE0A0); /* call 0x000CE0A0 */

loc_000271D8: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F000000);
    ecx = 0x1CEFD8;
    MEM32(esi + 0x140) = eax;
    PUSH32(esp, 0x000271F0u); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_000271F0: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91CC)); /* fadd dword ptr [0x1c91cc] */
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */

loc_000271FC: ;
    edx = MEM32(0x1D9FB8);
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x14);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0002720Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002720Bu); } /* indirect call */
    }

loc_0002720E: ;
    edx = MEM32(ebx);
    ecx = ebx;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00027217u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00027214u); } /* indirect call */
    }

loc_00027217: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    PUSH32(esp, ecx);
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00027246u); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_00027246: ;
    fp_push(MEMF(esi + 0x148)); /* fld float */
    ecx = esi + 0x144;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF354)); /* fmul dword ptr [0x1af354] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91EC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91ec] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002729B; /* jp: parity */

loc_00027270: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF390)); /* fmul dword ptr [0x1af390] */
    MEM32(esp + 4) = 0x3ECCCCCD;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF31C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af31c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = esp + 4;
    if (TEST_Z(_fa, _fb)) goto loc_00027295; /* je: equal / zero */

loc_00027293: ;
    eax = ecx;

loc_00027295: ;
    eax = MEM32(eax);
    MEM32(ecx) = eax;
    goto loc_0002729D;

loc_0002729B: ;
    fp_pop(); /* fstp st(0) */

loc_0002729D: ;
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE13C)); /* fmul dword ptr [0x1ae13c] */
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    ecx = esp + 0x10;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF64)); /* fmul dword ptr [0x1aff64] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x000272C8u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_000272C8: ;
    SET_LO16(eax, MEM16(esp + 6));
    ecx = ZX8(HI8(eax));
    MEM32(esp + 8) = ecx;
    edx = ZX8(LO8(eax));
    fp_push((double)SMEM32(esp + 8)); /* fild */
    eax = MEM32(esp + 4);
    MEM32(esp + 8) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91E4)); /* fmul dword ptr [0x1c91e4] */
    ecx = ZX8(HI8(eax));
    edx = ZX8(LO8(eax));
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    eax = MEM32(esi + 0x3C);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 0x1008);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x104;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEM32(esp + 4) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    eax = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
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
 * sub_00027360
 * Original: 0x00027360 - 0x000273EF (143 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00027360: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002736D; /* jne: not equal / not zero */

loc_00027369: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00027375;

loc_0002736D: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00027375: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000273EB; /* jae: above or equal (unsigned >=) */

loc_0002737D: ;
    PUSH32(esp, ebx);
    ebx = ecx * 4;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0002738Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0002738C: ;
    edx = MEM32(esi + 4);
    edi = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000273AF; /* je: equal / zero */

loc_0002739C: ;
    PUSH32(esp, ebp);
    /* nop */

loc_000273A0: ;
    ebp = MEM32(eax);
    MEM32(ecx) = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000273A0; /* jne: not equal / not zero */

loc_000273AE: ;
    POP32(esp, ebp);

loc_000273AF: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000273BE; /* je: equal / zero */

loc_000273B5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000273BBu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000273BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000273BE: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000273D9; /* jne: not equal / not zero */

loc_000273C9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi + eax * 4;
    MEM32(esi) = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000273D9: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edi + eax * 4;
    MEM32(esi) = edi;
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, ebx);

loc_000273EB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000273F0
 * Original: 0x000273F0 - 0x00027440 (80 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000273F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000273F0: ;
    eax = ecx;
    PUSH32(esp, esi);
    ecx = eax + 0x20;
    esi = 8;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00027400: ;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00027400; /* jne: not equal / not zero */

loc_0002740E: ;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    ecx = eax + 0x28;
    esi = 8;
    /* nop */

loc_00027430: ;
    MEM32(ecx + -8) = edx;
    MEM32(ecx + -4) = edx;
    MEM32(ecx) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00027430; /* jne: not equal / not zero */

loc_0002743E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00027440
 * Original: 0x00027440 - 0x00027450 (16 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00027440: ;
    ecx = MEM32(ecx + 0x3C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x34)); return; /* indirect tail jmp */

    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_00027450(); return; /* fallthrough 0x00027450 */

}

/**
 * sub_00027450
 * Original: 0x00027450 - 0x00027460 (16 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00027450: ;
    ecx = MEM32(ecx + 0x3C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x38)); return; /* indirect tail jmp */

    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_00027460(); return; /* fallthrough 0x00027460 */

}

/**
 * sub_00027460
 * Original: 0x00027460 - 0x00027470 (16 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00027460: ;
    eax = MEM32(ecx + 0xAC);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00027470(); return; /* fallthrough 0x00027470 */

}

/**
 * sub_00027470
 * Original: 0x00027470 - 0x000276D6 (614 bytes, 179 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027470(void)
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

loc_00027470: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002747Du); RECOMP_ABI_CALL(0x00026280u, sub_00026280); /* call 0x00026280 */

loc_0002747D: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + 0x254);
    ebp = MEM32(esp + 0x44);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000274FF; /* jne: not equal / not zero */

loc_00027491: ;
    eax = MEM32(0x1D9FB8);
    _fa = (uint32_t)(MEM32(eax + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x5C), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000274D3; /* jne: not equal / not zero */

loc_0002749C: ;
    ecx = MEM32(eax + 0x6C);
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000274C1; /* ja: above (unsigned >) */

loc_000274AA: ;
    edx = ZX8(MEM8(eax + 0x276E0));
    { uint32_t _jt = MEM32(edx * 4 + 0x276D8); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000274B8u) goto loc_000274B8;
    if (_jt == 0x000274C1u) goto loc_000274C1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000274B8: ;
    ecx = MEM32(esi + 0x5C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000274C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000274BEu); } /* indirect call */
    }

loc_000274C1: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xB0)); /* fadd dword ptr [esi + 0xb0] */
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000274FF;

loc_000274D3: ;
    ecx = MEM32(esi + 0x5C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000274DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000274D9u); } /* indirect call */
    }

loc_000274DC: ;
    fp_push(MEMF(esi + 0xB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    MEMF(esi + 0xB0) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000274FF; /* jp: parity */

loc_000274F9: ;
    MEM32(esi + 0xB0) = ebx;

loc_000274FF: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00027567; /* jne: not equal / not zero */

loc_00027506: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = 0xFFFFFFFFu;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x44) = ebx;
    MEM8(esp + 0x48) = LO8(ebx);
    PUSH32(esp, 0x0002755Eu); RECOMP_ABI_CALL(0x0001C150u, sub_0001C150); /* call 0x0001C150 */

loc_0002755E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00027567: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000276CD; /* jne: not equal / not zero */

loc_00027570: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM8(esp + 0x40) = LO8(ebx);
    eax = MEM32(ecx + 0x100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000275D5; /* je: equal / zero */

loc_000275C5: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000275D5; /* je: equal / zero */

loc_000275CC: ;
    edx = MEM32(eax + 0x48);
    MEM32(esi + 0x94) = edx;

loc_000275D5: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(MEM32(eax + 0x278)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x278), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000276BD; /* jne: not equal / not zero */

loc_000275E4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000275EAu); RECOMP_ABI_CALL(0x0007C500u, sub_0007C500); /* call 0x0007C500 */

loc_000275EA: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000275F3u); RECOMP_ABI_CALL(0x00077060u, sub_00077060); /* call 0x00077060 */

loc_000275F3: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(esi + 0x1C);
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x00027605u); RECOMP_ABI_CALL(0x000761D0u, sub_000761D0); /* call 0x000761D0 */

loc_00027605: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x1C);
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    ecx = MEM32(esi + 0x18);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x20);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x3C);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0x40);
    MEM32(esp + 0x20) = edx;
    eax = MEM32(eax + 0x24);
    MEM32(esp + 0x2C) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), ebx (32-bit) */
    ecx = MEM32(ecx + 0x24);
    MEM32(esp + 0x3C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00027642; /* je: equal / zero */

loc_0002763E: ;
    MEM32(esp + 0x24) = edi;

loc_00027642: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00027659; /* je: equal / zero */

loc_00027646: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 0x0002764Eu); RECOMP_ABI_CALL(0x00028EA0u, sub_00028EA0); /* call 0x00028EA0 */

loc_0002764E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00027659; /* jne: not equal / not zero */

loc_00027652: ;
    ecx = 1;
    goto loc_0002765B;

loc_00027659: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002765B: ;
    fp_push(MEMF(esi + 0x9C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00027675; /* je: equal / zero */

loc_00027673: ;
    eax = edi;

loc_00027675: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002767Fu); RECOMP_ABI_CALL(0x00028AB0u, sub_00028AB0); /* call 0x00028AB0 */

loc_0002767F: ;
    eax = MEM32(esi + 0x3C);
    edx = MEM32(eax + 0x4C);
    ecx = eax + 0x4C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0002768Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00027688u); } /* indirect call */
    }

loc_0002768B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000276A4; /* je: equal / zero */

loc_0002768F: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 0x00027697u); RECOMP_ABI_CALL(0x00028A40u, sub_00028A40); /* call 0x00028A40 */

loc_00027697: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000276A4; /* je: equal / zero */

loc_0002769B: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x000276A4u); RECOMP_ABI_CALL(0x00026CB0u, sub_00026CB0); /* call 0x00026CB0 */

loc_000276A4: ;
    edi = MEM32(esi + 0x3C);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000276B2u); RECOMP_ABI_CALL(0x00079350u, sub_00079350); /* call 0x00079350 */

loc_000276B2: ;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000276BDu); RECOMP_ABI_CALL(0x0006CF00u, sub_0006CF00); /* call 0x0006CF00 */

loc_000276BD: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000276CCu); RECOMP_ABI_CALL(0x0001C150u, sub_0001C150); /* call 0x0001C150 */

loc_000276CC: ;
    POP32(esp, edi);

loc_000276CD: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000276D6
 * Original: 0x000276D6 - 0x000276F0 (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000276D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000276D6: ;
    edi = edi;
    eax = 0xC1000274u;
    if (_flags /* je: equal / zero */) goto loc_000276E1;

loc_000276DF: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_000276E1: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + -1869574000) = MEM8(eax + -1869574000) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax + -1869574000)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_000276F0(); return; /* fallthrough 0x000276F0 */

}

/**
 * sub_000276F0
 * Original: 0x000276F0 - 0x000278DD (493 bytes, 126 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000276F0(void)
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

loc_000276F0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00027801; /* je: equal / zero */

loc_00027700: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000277E1; /* je: equal / zero */

loc_00027707: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000278D6; /* jne: not equal / not zero */

loc_0002770E: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF68)); /* fmul dword ptr [0x1aff68] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x30)); /* fadd dword ptr [esi + 0x30] */
    MEMF(esi + 0x30) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91CC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91cc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00027739; /* jne: not equal / not zero */

loc_0002772B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00027732u); RECOMP_ABI_CALL(0x00026F20u, sub_00026F20); /* call 0x00026F20 */

loc_00027732: ;
    MEM32(esi + 0x30) = 0x3F000000;

loc_00027739: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1B0000)); /* fmul dword ptr [0x1b0000] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1AFFFC)); /* fadd dword ptr [0x1afffc] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00027756u); RECOMP_ABI_CALL(0x000CDDF0u, sub_000CDDF0); /* call 0x000CDDF0 */

loc_00027756: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D0)); /* fadd dword ptr [0x1c91d0] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x2C;
    PUSH32(esp, 0x00027789u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00027789: ;
    SET_LO16(eax, MEM16(esp + 0x1E));
    edx = ZX8(HI8(eax));
    MEM32(esp + 4) = edx;
    eax = ZX8(LO8(eax));
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91E4)); /* fmul dword ptr [0x1c91e4] */
    ecx = ZX8(HI8(eax));
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = ZX8(LO8(eax));
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    goto loc_000278A2;

loc_000277E1: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0x000277E9u); RECOMP_ABI_CALL(0x000AC840u, sub_000AC840); /* call 0x000AC840 */

loc_000277E9: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x6C) = 6;
    ecx = esi;
    PUSH32(esp, 0x000277FAu); RECOMP_ABI_CALL(0x00026580u, sub_00026580); /* call 0x00026580 */

loc_000277FA: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00027801: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    MEMF(esi + 0x30) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00027826; /* jp: parity */

loc_00027818: ;
    MEM32(esi + 0x2C) = 2;
    MEM32(esi + 0x30) = 0;

loc_00027826: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    PUSH32(esp, 0x3F800000);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x28;
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0002784Fu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0002784F: ;
    SET_LO16(eax, MEM16(esp + 0x1E));
    ecx = ZX8(HI8(eax));
    MEM32(esp + 4) = ecx;
    edx = ZX8(LO8(eax));
    fp_push((double)SMEM32(esp + 4)); /* fild */
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 4) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91E4)); /* fmul dword ptr [0x1c91e4] */
    ecx = ZX8(HI8(eax));
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = ZX8(LO8(eax));
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */

loc_000278A2: ;
    eax = MEM32(esi + 0x3C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    ecx = MEM32(eax + 0x1008);
    eax = MEM32(esp + 0xC);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x104;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;

loc_000278D6: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000278E0
 * Original: 0x000278E0 - 0x0002795E (126 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000278E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000278E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x140);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000278FC; /* je: equal / zero */

loc_000278F0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000278F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000278F4u); } /* indirect call */
    }

loc_000278F6: ;
    MEM32(esi + 0x140) = ebx;

loc_000278FC: ;
    eax = MEM32(esi + 0x144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00027922; /* je: equal / zero */

loc_00027906: ;
    ecx = 0x1AFF10;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x10) = ecx;
    PUSH32(esp, eax);
    MEM32(eax) = ecx;
    PUSH32(esp, 0x00027919u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00027919: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x144) = ebx;

loc_00027922: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0002792Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00027927u); } /* indirect call */
    }

loc_0002792A: ;
    edi = MEM32(esi + 0x48);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00027944; /* je: equal / zero */

loc_00027931: ;
    ecx = edi;
    PUSH32(esp, 0x00027938u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00027938: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002793Eu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0002793E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = ebx;

loc_00027944: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00027955; /* je: equal / zero */

loc_0002794C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00027952u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00027950u); } /* indirect call */
    }

loc_00027952: ;
    MEM32(esi + 0x5C) = ebx;

loc_00027955: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00018E80(); return; /* tail jmp 0x00018E80 */

}

/**
 * sub_00027960
 * Original: 0x00027960 - 0x000279DB (123 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00027960: ;
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esi) = 0x1B0008;
    { uint32_t _icall_target = MEM32(0x1B0058); PUSH32(esp, 0x00027970u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002796Au); } /* indirect call */
    }

loc_00027970: ;
    edi = MEM32(esi + 0x48);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002798E; /* je: equal / zero */

loc_00027977: ;
    ecx = edi;
    PUSH32(esp, 0x0002797Eu); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_0002797E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00027984u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00027984: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = 0;

loc_0002798E: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000279A2; /* je: equal / zero */

loc_00027995: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0002799Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00027999u); } /* indirect call */
    }

loc_0002799B: ;
    MEM32(esi + 0x5C) = 0;

loc_000279A2: ;
    ecx = esi;
    PUSH32(esp, 0x000279A9u); RECOMP_ABI_CALL(0x00018E80u, sub_00018E80); /* call 0x00018E80 */

loc_000279A9: ;
    MEM32(esi) = 0x1AFF70;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x8C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000279CC; /* je: equal / zero */

loc_000279C3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000279C9u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000279C9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000279CC: ;
    POP32(esp, edi);
    MEM32(esi) = 0x1AEFA0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00018E80(); return; /* tail jmp 0x00018E80 */

}

/**
 * sub_000279E0
 * Original: 0x000279E0 - 0x00027A5B (123 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000279E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000279E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esi) = 0x1B0098;
    { uint32_t _icall_target = MEM32(0x1B00E8); PUSH32(esp, 0x000279F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000279EAu); } /* indirect call */
    }

loc_000279F0: ;
    edi = MEM32(esi + 0x48);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00027A0E; /* je: equal / zero */

loc_000279F7: ;
    ecx = edi;
    PUSH32(esp, 0x000279FEu); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_000279FE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00027A04u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00027A04: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = 0;

loc_00027A0E: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00027A22; /* je: equal / zero */

loc_00027A15: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00027A1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00027A19u); } /* indirect call */
    }

loc_00027A1B: ;
    MEM32(esi + 0x5C) = 0;

loc_00027A22: ;
    ecx = esi;
    PUSH32(esp, 0x00027A29u); RECOMP_ABI_CALL(0x00018E80u, sub_00018E80); /* call 0x00018E80 */

loc_00027A29: ;
    MEM32(esi) = 0x1AFF70;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x8C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00027A4C; /* je: equal / zero */

loc_00027A43: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00027A49u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00027A49: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00027A4C: ;
    POP32(esp, edi);
    MEM32(esi) = 0x1AEFA0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00018E80(); return; /* tail jmp 0x00018E80 */

}

/**
 * sub_00027A60
 * Original: 0x00027A60 - 0x00027A93 (51 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00027A60: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    edx = eax + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00027A81; /* je: equal / zero */

loc_00027A6D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00027A73: ;
    ebx = MEM32(edx);
    MEM32(edi + edx) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00027A73; /* jne: not equal / not zero */

loc_00027A7F: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00027A81: ;
    esi = MEM32(ecx + 4);
    edx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFFCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 0x10) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00027AA0
 * Original: 0x00027AA0 - 0x00027AE9 (73 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00027AA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AFF70;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x8C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00027AC6; /* je: equal / zero */

loc_00027ABD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00027AC3u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00027AC3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00027AC6: ;
    ecx = esi;
    MEM32(esi) = 0x1AEFA0;
    PUSH32(esp, 0x00027AD3u); RECOMP_ABI_CALL(0x00018E80u, sub_00018E80); /* call 0x00018E80 */

loc_00027AD3: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00027AE3; /* je: equal / zero */

loc_00027ADA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00027AE0u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00027AE0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00027AE3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00027AF0
 * Original: 0x00027AF0 - 0x00027BB5 (197 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027AF0(void)
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

loc_00027AF0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00027B01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00027AFEu); } /* indirect call */
    }

loc_00027B01: ;
    SET_LO8(ecx, MEM8(0x1D768C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00027B39; /* jne: not equal / not zero */

loc_00027B10: ;
    ecx = MEM32(0x1D768C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3F800000);
    MEM32(0x1D768C) = ecx;
    PUSH32(esp, 0x3F000000);
    ecx = 0x1D7688;
    PUSH32(esp, 0x00027B39u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00027B39: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00027B42u); RECOMP_ABI_CALL(0x000AD1A0u, sub_000AD1A0); /* call 0x000AD1A0 */

loc_00027B42: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00027B4Bu); RECOMP_ABI_CALL(0x0001ABB0u, sub_0001ABB0); /* call 0x0001ABB0 */

loc_00027B4B: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00027B53u); RECOMP_ABI_CALL(0x000276F0u, sub_000276F0); /* call 0x000276F0 */

loc_00027B53: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00027B5Bu); RECOMP_ABI_CALL(0x00026E90u, sub_00026E90); /* call 0x00026E90 */

loc_00027B5B: ;
    PUSH32(esp, edi);
    ecx = esi + 0xC0;
    PUSH32(esp, 0x00027B67u); RECOMP_ABI_CALL(0x00025B70u, sub_00025B70); /* call 0x00025B70 */

loc_00027B67: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0x00027B6Fu); RECOMP_ABI_CALL(0x0001AB50u, sub_0001AB50); /* call 0x0001AB50 */

loc_00027B6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00027B8A; /* jne: not equal / not zero */

loc_00027B73: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 0x00027B7Bu); RECOMP_ABI_CALL(0x00028D80u, sub_00028D80); /* call 0x00028D80 */

loc_00027B7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00027B8A; /* jne: not equal / not zero */

loc_00027B7F: ;
    POP32(esp, edi);
    MEM32(esi + 0xBC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00027B8A: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xBC)); /* fadd dword ptr [esi + 0xbc] */
    MEMF(esi + 0xBC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF328)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af328] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00027BB0; /* jne: not equal / not zero */

loc_00027BA7: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00027BB0u); RECOMP_ABI_CALL(0x000264C0u, sub_000264C0); /* call 0x000264C0 */

loc_00027BB0: ;
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
 * sub_00027BC0
 * Original: 0x00027BC0 - 0x00027BDE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00027BC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00027BC8u); RECOMP_ABI_CALL(0x00027960u, sub_00027960); /* call 0x00027960 */

loc_00027BC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00027BD8; /* je: equal / zero */

loc_00027BCF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00027BD5u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00027BD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00027BD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00027BE0
 * Original: 0x00027BE0 - 0x00027CB1 (209 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00027BE0: ;
    eax = MEM32(ecx + 0x3C);
    edx = MEM32(eax + 0x1008);
    eax = MEM32(edx + 0x11C);
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00027C11; /* jne: not equal / not zero */

loc_00027BFB: ;
    MEM32(eax + 8) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    goto loc_00027C4B;

loc_00027C11: ;
    PUSH32(esp, ebx);
    MEM32(eax) = edx;
    ebx = MEM32(edx + 4);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(eax + 8) = ebx;
    edx = MEM32(edx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00027C4B; /* je: equal / zero */

loc_00027C28: ;
    MEM32(edx) = esi;
    edx = MEM32(eax);
    MEM32(eax + 8) = edx;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00027C3E; /* je: equal / zero */

loc_00027C38: ;
    edx = MEM32(edx + 4);
    MEM32(eax + 4) = edx;

loc_00027C3E: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00027C4B; /* je: equal / zero */

loc_00027C44: ;
    edx = MEM32(edx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00027C28; /* jne: not equal / not zero */

loc_00027C4B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00027C50: ;
    edx = MEM32(ecx + 0x3C);
    edx = MEM32(edx + 0xEC4);
    MEM32(edx + eax + 0x364) = esi;
    _fb = (uint32_t)(0x45C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x45C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1170) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1170 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00027C50; /* jl: less (signed <) */

loc_00027C6C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(ecx + 0x44);
    MEM32(eax + 0x28C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00027C95; /* je: equal / zero */

loc_00027C79: ;
    edx = MEM32(ecx + 0x3C);
    eax = MEM32(edx + 0x1008);
    edx = MEM32(eax + 0x74);
    MEM32(edx) = 1;
    MEM32(ecx + 0x14C) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00027C95: ;
    eax = MEM32(ecx + 0x3C);
    edx = MEM32(eax + 0x1008);
    eax = MEM32(edx + 0x74);
    MEM32(eax) = 3;
    MEM32(ecx + 0x14C) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00027CC0
 * Original: 0x00027CC0 - 0x00027CDE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00027CC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00027CC8u); RECOMP_ABI_CALL(0x000279E0u, sub_000279E0); /* call 0x000279E0 */

loc_00027CC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00027CD8; /* je: equal / zero */

loc_00027CCF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00027CD5u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00027CD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00027CD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00027CE0
 * Original: 0x00027CE0 - 0x00027D0B (43 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00027CE0: ;
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00027CFF; /* je: equal / zero */

loc_00027CEC: ;
    PUSH32(esp, edi);
    /* nop */

loc_00027CF0: ;
    edi = MEM32(eax);
    MEM32(edx) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00027CF0; /* jne: not equal / not zero */

loc_00027CFE: ;
    POP32(esp, edi);

loc_00027CFF: ;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 0x10) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00027D10
 * Original: 0x00027D10 - 0x00027E00 (240 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00027D10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    esi = ecx;
    PUSH32(esp, 0x00027D1Du); RECOMP_ABI_CALL(0x00018E10u, sub_00018E10); /* call 0x00018E10 */

loc_00027D1D: ;
    MEM32(esi) = 0x1AFF70;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x54) = LO8(ebx);
    MEM8(esi + 0x55) = LO8(ebx);
    MEM8(esi + 0x56) = LO8(ebx);
    MEM32(esi + 0x58) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    ebp = esi + 0x80;
    MEM32(esi + 0x78) = 0x75BCD15;
    MEM32(esi + 0x7C) = 0x1DF5E0D;
    PUSH32(esp, 0x40);
    ecx = ebp;
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0xC) = ebx;
    PUSH32(esp, 0x00027D68u); RECOMP_ABI_CALL(0x00027360u, sub_00027360); /* call 0x00027360 */

loc_00027D68: ;
    edi = MEM32(ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = esi + 0xC0;
    ecx = edi;
    MEM32(ebp + 0x10) = ebx;
    PUSH32(esp, 0x00027D84u); RECOMP_ABI_CALL(0x000273F0u, sub_000273F0); /* call 0x000273F0 */

loc_00027D84: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x60) = 0xFFFFFFFFu;
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0xAC) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x4C) = eax;
    MEM32(edi) = ebx;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi + 0x10) = ebx;
    MEM32(edi + 0x14) = ebx;
    MEM32(edi + 0x18) = ebx;
    eax = edi + 0x28;
    ecx = 8;

loc_00027DD6: ;
    MEM32(eax + -8) = ebx;
    MEM32(eax + -4) = ebx;
    MEM32(eax) = ebx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00027DD6; /* jne: not equal / not zero */

loc_00027DE4: ;
    POP32(esp, edi);
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0xDC) = esi;
    MEM32(esi + 0x8C) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00027E00
 * Original: 0x00027E00 - 0x00027F80 (384 bytes, 116 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00027E00: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00027E15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00027E12u); } /* indirect call */
    }

loc_00027E15: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00027E1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00027E19u); } /* indirect call */
    }

loc_00027E1C: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00027E24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00027E21u); } /* indirect call */
    }

loc_00027E24: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(eax + 0x278);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00027E43; /* je: equal / zero */

loc_00027E33: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0x00027E3Bu); RECOMP_ABI_CALL(0x0001A720u, sub_0001A720); /* call 0x0001A720 */

loc_00027E3B: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 0x00027E43u); RECOMP_ABI_CALL(0x00028950u, sub_00028950); /* call 0x00028950 */

loc_00027E43: ;
    eax = MEM32(esi + 0x3C);
    ecx = eax + 0x88;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x44);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00027E59u); RECOMP_ABI_CALL(0x00029460u, sub_00029460); /* call 0x00029460 */

loc_00027E59: ;
    edx = MEM32(0x1D9FB8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00027E67u); RECOMP_ABI_CALL(0x00026B30u, sub_00026B30); /* call 0x00026B30 */

loc_00027E67: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0x00027E6Fu); RECOMP_ABI_CALL(0x000AC0D0u, sub_000AC0D0); /* call 0x000AC0D0 */

loc_00027E6F: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0x00027E77u); RECOMP_ABI_CALL(0x000AD350u, sub_000AD350); /* call 0x000AD350 */

loc_00027E77: ;
    ecx = MEM32(esi + 0x5C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00027E7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00027E7Cu); } /* indirect call */
    }

loc_00027E7F: ;
    MEM32(esi + 0x94) = edi;
    MEM32(esi + 0x98) = edi;
    MEM32(esi + 0x9C) = edi;
    MEM32(esi + 0xA8) = edi;
    MEM32(esi + 0xA4) = edi;
    MEM32(esi + 0xA0) = edi;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0xB4) = edi;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0xB8) = edi;
    MEM32(esi + 0xBC) = edi;
    MEM32(esi + 0xB0) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00027ED5; /* je: equal / zero */

loc_00027EC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00027ED2; /* jne: not equal / not zero */

loc_00027ECA: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x00027ED2u); RECOMP_ABI_CALL(0x0007B960u, sub_0007B960); /* call 0x0007B960 */

loc_00027ED2: ;
    MEM32(esi + 0x20) = edi;

loc_00027ED5: ;
    MEM32(esi + 0x34) = 0x3F800000;
    MEM32(esi + 0xC0) = edi;
    MEM32(esi + 0xC4) = edi;
    MEM32(esi + 0xC8) = edi;
    MEM32(esi + 0xCC) = edi;
    MEM32(esi + 0xD0) = edi;
    MEM32(esi + 0xD4) = edi;
    MEM32(esi + 0xD8) = edi;
    eax = esi + 0xE8;
    ecx = 8;

loc_00027F11: ;
    MEM32(eax + -8) = edi;
    MEM32(eax + -4) = edi;
    MEM32(eax) = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00027F11; /* jne: not equal / not zero */

loc_00027F1F: ;
    edx = MEM32(esi + 0x84);
    ecx = MEM32(esi + 0x80);
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00027F41; /* je: equal / zero */

loc_00027F31: ;
    PUSH32(esp, ebx);

loc_00027F32: ;
    ebx = MEM32(eax);
    MEM32(ecx) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00027F32; /* jne: not equal / not zero */

loc_00027F40: ;
    POP32(esp, ebx);

loc_00027F41: ;
    MEM32(esi + 0x84) = ecx;
    MEM32(esi + 0x90) = edi;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00027F57u); RECOMP_ABI_CALL(0x0002EDD0u, sub_0002EDD0); /* call 0x0002EDD0 */

loc_00027F57: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00027F64u); RECOMP_ABI_CALL(0x0006E470u, sub_0006E470); /* call 0x0006E470 */

loc_00027F64: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00027F6Du); RECOMP_ABI_CALL(0x00026F20u, sub_00026F20); /* call 0x00026F20 */

loc_00027F6D: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    g_seh_ebp = ebp; sub_00027F80(); return; /* fallthrough 0x00027F80 */

}

/**
 * sub_00027F80
 * Original: 0x00027F80 - 0x0002802E (174 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00027F80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00027F97u); RECOMP_ABI_CALL(0x0001B7B0u, sub_0001B7B0); /* call 0x0001B7B0 */

loc_00027F97: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00027FA1u); RECOMP_ABI_CALL(0x00029460u, sub_00029460); /* call 0x00029460 */

loc_00027FA1: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0x00027FA9u); RECOMP_ABI_CALL(0x000AD350u, sub_000AD350); /* call 0x000AD350 */

loc_00027FA9: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x00027FB1u); RECOMP_ABI_CALL(0x00079F90u, sub_00079F90); /* call 0x00079F90 */

loc_00027FB1: ;
    ecx = MEM32(esi + 0x84);
    edx = MEM32(esi + 0x80);
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00027FD1; /* je: equal / zero */

loc_00027FC3: ;
    edi = MEM32(eax);
    MEM32(edx) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00027FC3; /* jne: not equal / not zero */

loc_00027FD1: ;
    MEM32(esi + 0x84) = edx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x90) = ebx;
    ecx = MEM32(esi + 0x5C);
    MEM32(esi + 0x60) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00027FEEu); RECOMP_ABI_CALL(0x00073ED0u, sub_00073ED0); /* call 0x00073ED0 */

loc_00027FEE: ;
    _fa = (uint32_t)(MEM8(esi + 0x55)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x55), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00028028; /* jbe: below or equal (unsigned <=) */

loc_00027FF3: ;
    edi = MEM32(0x1D9FB8);
    _fa = (uint32_t)(MEM32(edi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x54), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00028028; /* jle: less or equal (signed <=) */

loc_00027FFE: ;
    edi = edi;

loc_00028000: ;
    SET_LO8(eax, MEM8(esi + 0x54));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(eax, LO8(eax) >> LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00028020; /* je: equal / zero */

loc_0002800B: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00028013u); RECOMP_ABI_CALL(0x000A1780u, sub_000A1780); /* call 0x000A1780 */

loc_00028013: ;
    ecx = eax;
    PUSH32(esp, 0x0002801Au); RECOMP_ABI_CALL(0x0007E1A0u, sub_0007E1A0); /* call 0x0007E1A0 */

loc_0002801A: ;
    edi = MEM32(0x1D9FB8);

loc_00028020: ;
    eax = MEM32(edi + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00028000; /* jl: less (signed <) */

loc_00028028: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00028030
 * Original: 0x00028030 - 0x0002806E (62 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00028030: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0002803Du); RECOMP_ABI_CALL(0x00027D10u, sub_00027D10); /* call 0x00027D10 */

loc_0002803D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esi) = 0x1B0128;
    MEM32(esi + 0x140) = eax;
    MEM32(esi + 0x144) = eax;
    MEM32(esi + 0x154) = eax;
    MEM32(esi + 0x158) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00028068u); RECOMP_ABI_CALL(0x000266C0u, sub_000266C0); /* call 0x000266C0 */

loc_00028068: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00028070
 * Original: 0x00028070 - 0x000280C4 (84 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00028070: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1B0128;
    PUSH32(esp, 0x0002807Eu); RECOMP_ABI_CALL(0x000278E0u, sub_000278E0); /* call 0x000278E0 */

loc_0002807E: ;
    MEM32(esi) = 0x1AFF70;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x8C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000280A1; /* je: equal / zero */

loc_00028098: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002809Eu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0002809E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000280A1: ;
    ecx = esi;
    MEM32(esi) = 0x1AEFA0;
    PUSH32(esp, 0x000280AEu); RECOMP_ABI_CALL(0x00018E80u, sub_00018E80); /* call 0x00018E80 */

loc_000280AE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000280BE; /* je: equal / zero */

loc_000280B5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000280BBu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000280BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000280BE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000280D0
 * Original: 0x000280D0 - 0x000280E0 (16 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000280D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000280D0: ;
    MEM32(ecx + 0x154) = 0;
    g_seh_ebp = ebp; sub_00027E00(); return; /* tail jmp 0x00027E00 */

    /* nop */

    g_seh_ebp = ebp; sub_000280E0(); return; /* fallthrough 0x000280E0 */

}

/**
 * sub_000280E0
 * Original: 0x000280E0 - 0x00028110 (48 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000280E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000280E0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000280F4u); RECOMP_ABI_CALL(0x00027F80u, sub_00027F80); /* call 0x00027F80 */

loc_000280F4: ;
    ecx = MEM32(esi + 0x140);
    PUSH32(esp, 0x000280FFu); RECOMP_ABI_CALL(0x000A3580u, sub_000A3580); /* call 0x000A3580 */

loc_000280FF: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    g_seh_ebp = ebp; sub_00028110(); return; /* fallthrough 0x00028110 */

}

/**
 * sub_00028110
 * Original: 0x00028110 - 0x00028167 (87 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00028110: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0002811Du); RECOMP_ABI_CALL(0x00027D10u, sub_00027D10); /* call 0x00027D10 */

loc_0002811D: ;
    ecx = esi;
    MEM32(esi) = 0x1B0008;
    PUSH32(esp, 0x0002812Au); RECOMP_ABI_CALL(0x00025C00u, sub_00025C00); /* call 0x00025C00 */

loc_0002812A: ;
    PUSH32(esp, 0x1C);
    MEM32(esi + 0x50) = 0;
    PUSH32(esp, 0x00028138u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00028138: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00028148; /* je: equal / zero */

loc_0002813F: ;
    ecx = eax;
    PUSH32(esp, 0x00028146u); RECOMP_ABI_CALL(0x00017240u, sub_00017240); /* call 0x00017240 */

loc_00028146: ;
    goto loc_0002814A;

loc_00028148: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002814A: ;
    MEM32(esi + 0xAC) = eax;
    MEM32(esi + 0x14C) = 0;
    MEM32(esi + 0x28) = 0xFFFFFFFFu;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00028170
 * Original: 0x00028170 - 0x00028307 (407 bytes, 117 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00028170: ;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002817Fu); RECOMP_ABI_CALL(0x000271A0u, sub_000271A0); /* call 0x000271A0 */

loc_0002817F: ;
    ebp = MEM32(esi + 0x3C);
    PUSH32(esp, 0x48);
    eax = esp + 0x28;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00028190u); RECOMP_ABI_CALL(0x00100DA0u, sub_00100DA0); /* call 0x00100DA0 */

loc_00028190: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xAC);
    PUSH32(esp, 0x000281A3u); RECOMP_ABI_CALL(0x00017B50u, sub_00017B50); /* call 0x00017B50 */

loc_000281A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000282FC; /* je: equal / zero */

loc_000281AB: ;
    PUSH32(esp, 0x000281B0u); RECOMP_ABI_CALL(0x0009FEF0u, sub_0009FEF0); /* call 0x0009FEF0 */

loc_000281B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000282FC; /* jne: not equal / not zero */

loc_000281B9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000281C4u); RECOMP_ABI_CALL(0x00027BE0u, sub_00027BE0); /* call 0x00027BE0 */

loc_000281C4: ;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = esp + 0x9C;
    PUSH32(esp, 0x000281D5u); RECOMP_ABI_CALL(0x000CEA20u, sub_000CEA20); /* call 0x000CEA20 */

loc_000281D5: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 0x98;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x0002821Cu); RECOMP_ABI_CALL(0x00025AD0u, sub_00025AD0); /* call 0x00025AD0 */

loc_0002821C: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebp + 0x4C;
    PUSH32(esp, 0x0002822Eu); RECOMP_ABI_CALL(0x000D18F0u, sub_000D18F0); /* call 0x000D18F0 */

loc_0002822E: ;
    ecx = MEM32(esp + 0x6C);
    MEM32(ebp + 0x2DC) = ecx;
    eax = MEM32(esi + 0x44);
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x29C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x29C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 8) = edx;
    ecx = MEM32(esi + 0x44);
    eax = esp + 0x98;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x2A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2A8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002826Au); RECOMP_ABI_CALL(0x00019100u, sub_00019100); /* call 0x00019100 */

loc_0002826A: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x00028274u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00028271u); } /* indirect call */
    }

loc_00028274: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esp + 0x58;
    /* nop */

loc_00028280: ;
    PUSH32(esp, 0x24);
    eax = esp + 0x78;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002828Eu); RECOMP_ABI_CALL(0x00100DA0u, sub_00100DA0); /* call 0x00100DA0 */

loc_0002828E: ;
    ecx = MEM32(edi + -16);
    edx = MEM32(edi);
    eax = MEM32(esi + 0x3C);
    MEM32(esp + 0x88) = ecx;
    MEM32(esp + 0x80) = edx;
    ecx = MEM32(eax + 0x650);
    edx = MEM32(ecx + ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x74;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000282BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000282B7u); } /* indirect call */
    }

loc_000282BA: ;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x114;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x450) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x450 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00028280; /* jl: less (signed <) */

loc_000282CB: ;
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x000282D7u); RECOMP_ABI_CALL(0x000244B0u, sub_000244B0); /* call 0x000244B0 */

loc_000282D7: ;
    ecx = MEM32(esi + 0x44);
    edi = MEM32(esp + 0xC0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x000282E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000282E4u); } /* indirect call */
    }

loc_000282E7: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000282F0u); RECOMP_ABI_CALL(0x0001ABB0u, sub_0001ABB0); /* call 0x0001ABB0 */

loc_000282F0: ;
    eax = MEM32(esp + 0x70);
    POP32(esp, edi);
    MEM32(ebp + 0x1130) = eax;
    POP32(esp, ebx);

loc_000282FC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00028310
 * Original: 0x00028310 - 0x00028337 (39 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028310(void)
{

loc_00028310: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0002831Du); RECOMP_ABI_CALL(0x00027D10u, sub_00027D10); /* call 0x00027D10 */

loc_0002831D: ;
    ecx = esi;
    MEM32(esi) = 0x1B0098;
    PUSH32(esp, 0x0002832Au); RECOMP_ABI_CALL(0x00025C00u, sub_00025C00); /* call 0x00025C00 */

loc_0002832A: ;
    MEM32(esi + 0x50) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00028340
 * Original: 0x00028340 - 0x00028696 (854 bytes, 255 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00028340: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x38));
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esi = ecx;
    PUSH32(esp, 0x00028351u); RECOMP_ABI_CALL(0x00027470u, sub_00027470); /* call 0x00027470 */

loc_00028351: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002868E; /* jne: not equal / not zero */

loc_0002835B: ;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM8(esp + 0x40) = LO8(ebx);
    _fa = (uint32_t)(MEM32(eax + 0x278)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x278), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000284C5; /* jne: not equal / not zero */

loc_000283B6: ;
    ecx = MEM32(esi + 0x140);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000283C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000283C3u); } /* indirect call */
    }

loc_000283C6: ;
    eax = MEM32(esi + 0x3C);
    edx = MEM32(eax + 0x4C);
    ecx = eax + 0x4C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000283D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000283CFu); } /* indirect call */
    }

loc_000283D2: ;
    ecx = MEM32(esi + 0x140);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000283E4u); RECOMP_ABI_CALL(0x000A3480u, sub_000A3480); /* call 0x000A3480 */

loc_000283E4: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00028418; /* je: equal / zero */

loc_000283EF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00028418; /* je: equal / zero */

loc_000283F4: ;
    edi = ecx;
    PUSH32(esp, 0x000283FBu); RECOMP_ABI_CALL(0x000155E0u, sub_000155E0); /* call 0x000155E0 */

loc_000283FB: ;
    ecx = edi + edi * 2;
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ZX16(MEM16(ecx + eax + 4));
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x64), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00028414; /* jae: above or equal (unsigned >=) */

loc_0002840B: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x28) = ecx;
    goto loc_00028418;

loc_00028414: ;
    ecx = MEM32(esp + 0x28);

loc_00028418: ;
    edx = MEM32(esi + 0x3C);
    fp_push(MEMF(edx + 0xB0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00028475; /* jp: parity */

loc_0002842E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00028475; /* je: equal / zero */

loc_00028433: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00028475; /* je: equal / zero */

loc_00028438: ;
    ecx = edx + 0x4C;
    PUSH32(esp, 0x00028440u); RECOMP_ABI_CALL(0x0006D680u, sub_0006D680); /* call 0x0006D680 */

loc_00028440: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x28);
    PUSH32(esp, 0x0002844Du); RECOMP_ABI_CALL(0x000155E0u, sub_000155E0); /* call 0x000155E0 */

loc_0002844D: ;
    ecx = edi + edi * 2;
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(ecx + eax + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1B01B4)); /* fmul dword ptr [0x1b01b4] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00028471; /* jne: not equal / not zero */

loc_00028468: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x28) = ecx;
    goto loc_00028475;

loc_00028471: ;
    ecx = MEM32(esp + 0x28);

loc_00028475: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000284C5; /* je: equal / zero */

loc_0002847A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000284BD; /* jl: less (signed <) */

loc_0002847E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000284BD; /* jg: greater (signed >) */

loc_00028483: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00028496u); RECOMP_ABI_CALL(0x00015610u, sub_00015610); /* call 0x00015610 */

loc_00028496: ;
    ecx = eax;
    PUSH32(esp, 0x0002849Du); RECOMP_ABI_CALL(0x000AFEE0u, sub_000AFEE0); /* call 0x000AFEE0 */

loc_0002849D: ;
    edx = MEM32(0x1D9FB8);
    eax = MEM32(edx + 0x58);
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0xD4);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x1A2C20);
    PUSH32(esp, 0x000284BDu); RECOMP_ABI_CALL(0x000C6EF0u, sub_000C6EF0); /* call 0x000C6EF0 */

loc_000284BD: ;
    MEM32(esp + 0x28) = 0xFFFFFFFFu;

loc_000284C5: ;
    ecx = MEM32(esi + 0x144);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000284D5u); RECOMP_ABI_CALL(0x000A2CF0u, sub_000A2CF0); /* call 0x000A2CF0 */

loc_000284D5: ;
    eax = MEM32(esi + 0x3C);
    ecx = eax + 0x4C;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000284E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000284DDu); } /* indirect call */
    }

loc_000284E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00028572; /* jne: not equal / not zero */

loc_000284E8: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = eax;
    MEM32(esp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00028541; /* je: equal / zero */

loc_000284F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00028512; /* je: equal / zero */

loc_000284FC: ;
    ecx = MEM32(esi + 0x5C);
    fp_push(MEMF(ecx + 0x120)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00028541; /* jne: not equal / not zero */

loc_00028512: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 0x0002851Au); RECOMP_ABI_CALL(0x00028A80u, sub_00028A80); /* call 0x00028A80 */

loc_0002851A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00028523; /* jne: not equal / not zero */

loc_0002851E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00028541; /* jne: not equal / not zero */

loc_00028523: ;
    eax = MEM32(esi + 0x84);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edi = esi + 0x80;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0002853Eu); RECOMP_ABI_CALL(0x000A5D10u, sub_000A5D10); /* call 0x000A5D10 */

loc_0002853E: ;
    MEM32(edi + 0x10) = MEM32(edi + 0x10) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00028541: ;
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000285E4; /* jle: less or equal (signed <=) */

loc_0002854D: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(eax);
    edi = esi + 0x80;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 0x00028564u); RECOMP_ABI_CALL(0x0002A7E0u, sub_0002A7E0); /* call 0x0002A7E0 */

loc_00028564: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000285E4; /* jne: not equal / not zero */

loc_00028569: ;
    ecx = edi;
    PUSH32(esp, 0x00028570u); RECOMP_ABI_CALL(0x00027A60u, sub_00027A60); /* call 0x00027A60 */

loc_00028570: ;
    goto loc_000285E4;

loc_00028572: ;
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00028585; /* jle: less or equal (signed <=) */

loc_0002857A: ;
    ecx = esi + 0x80;
    PUSH32(esp, 0x00028585u); RECOMP_ABI_CALL(0x00027CE0u, sub_00027CE0); /* call 0x00027CE0 */

loc_00028585: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 0x0002858Du); RECOMP_ABI_CALL(0x00028A40u, sub_00028A40); /* call 0x00028A40 */

loc_0002858D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000285E4; /* je: equal / zero */

loc_00028591: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi + 0xC0;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x000285A5u); RECOMP_ABI_CALL(0x00026AB0u, sub_00026AB0); /* call 0x00026AB0 */

loc_000285A5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x000285ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000285A9u); } /* indirect call */
    }

loc_000285AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000285E4; /* jne: not equal / not zero */

loc_000285B0: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(MEM32(ecx + 0x278)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x278), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000285E4; /* jne: not equal / not zero */

loc_000285BB: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000285C5u); RECOMP_ABI_CALL(0x0001A5B0u, sub_0001A5B0); /* call 0x0001A5B0 */

loc_000285C5: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000285CFu); RECOMP_ABI_CALL(0x000294E0u, sub_000294E0); /* call 0x000294E0 */

loc_000285CF: ;
    edx = MEM32(esi + 0x3C);
    ecx = MEM32(esi + 0x44);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x88)) >> 32) & 1);
    edx = edx + 0x88;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x68)) >> 32) & 1);
    ecx = ecx + 0x68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000285E4u); RECOMP_ABI_CALL(0x00025A30u, sub_00025A30); /* call 0x00025A30 */

loc_000285E4: ;
    eax = MEM32(0x1D9FB8);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00028600; /* jne: not equal / not zero */

loc_000285EF: ;
    eax = MEM32(eax + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00028600; /* je: equal / zero */

loc_000285F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00028600; /* je: equal / zero */

loc_000285FC: ;
    MEM32(esp + 0x24) = ebx;

loc_00028600: ;
    fp_push(MEMF(esi + 0x9C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0002861A; /* jne: not equal / not zero */

loc_00028613: ;
    eax = 1;
    goto loc_0002861D;

loc_0002861A: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0002861D: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002862Bu); RECOMP_ABI_CALL(0x00028AB0u, sub_00028AB0); /* call 0x00028AB0 */

loc_0002862B: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002863Au); RECOMP_ABI_CALL(0x0001C150u, sub_0001C150); /* call 0x0001C150 */

loc_0002863A: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    edi = esi + 0x148;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00028649u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00028646u); } /* indirect call */
    }

loc_00028649: ;
    ecx = eax;
    PUSH32(esp, 0x00028650u); RECOMP_ABI_CALL(0x000CF8B0u, sub_000CF8B0); /* call 0x000CF8B0 */

loc_00028650: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002866E; /* je: equal / zero */

loc_00028654: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x154)); /* fadd dword ptr [esi + 0x154] */
    POP32(esp, ebx);
    MEMF(esi + 0x154) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x38)) >> 32) & 1);
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0002866E: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00028676u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00028673u); } /* indirect call */
    }

loc_00028676: ;
    ecx = MEM32(eax);
    MEM32(edi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(edi + 8) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x154) = ebx;
    POP32(esp, ebx);

loc_0002868E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x38)) >> 32) & 1);
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000286A0
 * Original: 0x000286A0 - 0x000286CF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000286A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000286A0: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    eax = MEM32(esp + 4);
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000286D0
 * Original: 0x000286D0 - 0x0002872D (93 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000286D0(void)
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

loc_000286D0: ;
    SET_LO8(eax, MEM8(ecx + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000286ED; /* je: equal / zero */

loc_000286D7: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0xC)); /* fdiv dword ptr [ecx + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00028715; /* je: equal / zero */

loc_000286EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000286ED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000286FC; /* je: equal / zero */

loc_000286F1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 0x24)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFF9Cu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x24), 0xFFFFFF9Cu (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

loc_000286FC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002871B; /* je: equal / zero */

loc_00028700: ;
    SET_LO16(eax, MEM16(ecx + 0x24));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF9C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF9C (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000286EA; /* je: equal / zero */

loc_0002870A: ;
    ecx = ZX16(MEM16(ecx + 2));
    edx = SX16(LO16(eax));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000286EA; /* jg: greater (signed >) */

loc_00028715: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0002871B: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x24);
    ecx = ZX16(MEM16(ecx + 4));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    eax = edx;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00028730
 * Original: 0x00028730 - 0x00028735 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00028730: ;
    g_seh_ebp = ebp; sub_00020C60(); return; /* tail jmp 0x00020C60 */

}

/**
 * sub_00028740
 * Original: 0x00028740 - 0x00028950 (528 bytes, 133 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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

loc_00028740: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    ecx = MEM32(eax + 0x2E0);
    ecx = MEM32(ecx + 0x108);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x48;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x4A4);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    edx = MEM32(ecx + 0xC);
    edi = MEM32(edx + 0x1EC);
    esi = MEM32(eax + 0x4A4);
    MEM32(esi + 0x10) = edi;
    edi = MEM32(edx + 0x1F0);
    MEM32(esi + 0x14) = edi;
    _fb = (uint32_t)(0x1EC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1EC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edx + 8);
    MEM32(esi + 0x18) = edx;
    edx = MEM32(ecx + 0xC);
    edi = MEM32(edx + 0x588);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 0x4A4);
    MEM32(esi + 0x20) = edi;
    edi = MEM32(edx + 0x58C);
    MEM32(esi + 0x24) = edi;
    _fb = (uint32_t)(0x588) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x588;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edx + 8);
    MEM32(esi + 0x28) = edx;
    edx = MEM32(ecx + 0xC);
    edi = MEM32(edx + 0x2E8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 0x4A4);
    MEM32(esi + 0x30) = edi;
    edi = MEM32(edx + 0x2EC);
    MEM32(esi + 0x34) = edi;
    _fb = (uint32_t)(0x2E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2E8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edx + 8);
    MEM32(esi + 0x38) = edx;
    edx = MEM32(ecx + 0xC);
    edi = MEM32(edx + 0x630);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 0x4A4);
    MEM32(esi + 0x40) = edi;
    edi = MEM32(edx + 0x634);
    MEM32(esi + 0x44) = edi;
    _fb = (uint32_t)(0x630) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x630;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edx + 8);
    MEM32(esi + 0x48) = edx;
    edx = MEM32(ecx + 0xC);
    edi = MEM32(edx + 0x390);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 0x4A4);
    MEM32(esi + 0x50) = edi;
    edi = MEM32(edx + 0x394);
    _fb = (uint32_t)(0x390) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x390;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x54) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 0x58) = edx;
    edx = MEM32(ecx + 0xC);
    edi = MEM32(edx + 0x828);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 0x4A4);
    _fb = (uint32_t)(0x828) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x828;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x60) = edi;
    edi = MEM32(edx + 4);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    edx = MEM32(ecx + 0xC);
    esi = MEM32(eax + 0x4A4);
    edi = MEM32(edx + 0x978);
    _fb = (uint32_t)(0x978) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x978;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    edx = MEM32(ecx + 0xC);
    edi = MEM32(edx + 0x87C);
    esi = MEM32(eax + 0x4A4);
    MEM32(esi + 0x80) = edi;
    edi = MEM32(edx + 0x880);
    MEM32(esi + 0x84) = edi;
    _fb = (uint32_t)(0x87C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x87C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edx + 8);
    MEM32(esi + 0x88) = edx;
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(eax + 0x4A4);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ecx + 0x9CC);
    MEM32(edx + 0x90) = esi;
    esi = MEM32(ecx + 0x9D0);
    MEM32(edx + 0x94) = esi;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x90;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x9CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x9CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(eax + 0x4A4);
    edx = MEM32(ecx);
    MEM32(ecx + 0xA0) = edx;
    edx = MEM32(ecx + 4);
    MEM32(ecx + 0xA4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(ecx + 0xA8) = edx;
    ecx = MEM32(eax + 0x64);
    eax = MEM32(eax + 0x18);
    fp_push(MEMF(eax + 0x10)); /* fld float */
    edx = MEM32(eax + 8);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1AEB20)); /* fadd dword ptr [0x1aeb20] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    MEM32(esp + 0xC) = edx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00028946u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00028943u); } /* indirect call */
    }

loc_00028946: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00028950(); return; /* fallthrough 0x00028950 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00028950
 * Original: 0x00028950 - 0x000289B0 (96 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00028950: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esi + 0x28C) = 1;
    PUSH32(esp, 0x00028966u); RECOMP_ABI_CALL(0x00020180u, sub_00020180); /* call 0x00020180 */

loc_00028966: ;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x190;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3F000000;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x184;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x40C00000;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00028992: ;
    eax = MEM32(esi + 0x4A4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xB0 (32-bit) */
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00028992; /* jl: less (signed <) */

loc_000289AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000289B0
 * Original: 0x000289B0 - 0x000289D1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000289B0(void)
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

loc_000289B0: ;
    eax = MEM32(ecx + 0x278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000289CA; /* je: equal / zero */

loc_000289BA: ;
    eax = MEM32(ecx + 0x478);
    ecx = MEM32(eax + 0x3C);
    fp_push(MEMF(ecx + 0x2DC)); /* fld float */
    esp += 4; return; /* ret */

loc_000289CA: ;
    fp_push(MEMF(ecx + 0x4F0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000289E0
 * Original: 0x000289E0 - 0x00028A0B (43 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000289E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000289E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x488) = 0xFFFFFFFFu;
    MEM32(ecx + 0x48C) = eax;
    MEM32(ecx + 0x490) = eax;
    MEM32(ecx + 0x494) = eax;
    MEM32(ecx + 0x498) = eax;
    MEM32(ecx + 0x49C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00028A10
 * Original: 0x00028A10 - 0x00028A3E (46 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00028A10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x478);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00028A1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00028A1Bu); } /* indirect call */
    }

loc_00028A1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00028A3A; /* jne: not equal / not zero */

loc_00028A22: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    edx = esi + 0x504;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00028A3Au); RECOMP_ABI_CALL(0x00020480u, sub_00020480); /* call 0x00020480 */

loc_00028A3A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00028A40
 * Original: 0x00028A40 - 0x00028A5C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00028A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00028A40: ;
    eax = MEM32(ecx + 0x49C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00028A59; /* je: equal / zero */

loc_00028A4A: ;
    _fa = (uint32_t)(MEM8(ecx + 0x494)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x494), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00028A59; /* jne: not equal / not zero */

loc_00028A53: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00028A59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00028A60
 * Original: 0x00028A60 - 0x00028A7C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00028A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00028A60: ;
    eax = MEM32(ecx + 0x49C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00028A79; /* je: equal / zero */

loc_00028A6A: ;
    _fa = (uint32_t)(MEM8(ecx + 0x494)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x494), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00028A79; /* je: equal / zero */

loc_00028A73: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00028A79: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00028A80
 * Original: 0x00028A80 - 0x00028AA2 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00028A80: ;
    eax = MEM32(ecx + 0x49C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00028A9C; /* je: equal / zero */

loc_00028A8A: ;
    eax = MEM32(ecx + 0x48C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00028A9C; /* jge: greater or equal (signed >=) */

loc_00028A95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00028A9C; /* je: equal / zero */

loc_00028A99: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00028A9C: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00028AB0
 * Original: 0x00028AB0 - 0x00028B70 (192 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00028AB0: ;
    eax = MEM32(ecx + 0x52C);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00028B6D; /* jne: not equal / not zero */

loc_00028AC0: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00028B44; /* jne: not equal / not zero */

loc_00028AC7: ;
    _fa = (uint32_t)(MEM32(ecx + 0x538)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBF800000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x538), 0xBF800000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00028B6D; /* jne: not equal / not zero */

loc_00028AD7: ;
    edx = MEM32(ecx + 0x4A0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00028AEC; /* je: equal / zero */

loc_00028AE3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00028B6D; /* jne: not equal / not zero */

loc_00028AEC: ;
    PUSH32(esp, esi);
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    MEM32(ecx + 0x488) = 5;
    MEM32(ecx + 0x48C) = 1;
    MEM32(ecx + 0x490) = eax;
    MEM32(ecx + 0x494) = eax;
    MEM32(ecx + 0x498) = eax;
    edx = 2;
    if (CMP_GE(_fas, _fbs)) goto loc_00028B28; /* jge: greater or equal (signed >=) */

loc_00028B1E: ;
    esi = eax;
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x490) = esi;

loc_00028B28: ;
    MEM32(ecx + 0x4A0) = MEM32(ecx + 0x4A0) | edx;
    _fa = (uint32_t)(MEM32(ecx + 0x4A0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x538) = eax;
    MEM32(ecx + 0x53C) = eax;
    MEM32(ecx + 0x530) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00028B44: ;
    _fa = (uint32_t)(MEM32(ecx + 0x488)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x488), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00028B57; /* jne: not equal / not zero */

loc_00028B4D: ;
    MEM32(ecx + 0x494) = MEM32(ecx + 0x494) | 1;
    _fa = (uint32_t)(MEM32(ecx + 0x494)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 12; return; /* ret 8 */

loc_00028B57: ;
    _fa = (uint32_t)(MEM32(ecx + 0x538)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x538), 0xC0000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00028B6D; /* jne: not equal / not zero */

loc_00028B63: ;
    MEM32(ecx + 0x538) = 0xBF800000u;

loc_00028B6D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00028B70
 * Original: 0x00028B70 - 0x00028B82 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00028B70: ;
    _fa = (uint32_t)(MEM8(ecx + 0x4A0)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x4A0), 6 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00028B7C; /* jne: not equal / not zero */

loc_00028B79: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00028B7C: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00028B90
 * Original: 0x00028B90 - 0x00028C7F (239 bytes, 63 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00028B90(void)
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

loc_00028B90: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x2E0);
    eax = MEM32(eax + 0x108);
    eax = MEM32(eax + 0xC);
    fp_push(MEMF(eax + 0x924)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x588)); /* fsub dword ptr [eax + 0x588] */
    fp_push(MEMF(eax + 0x928)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x58C)); /* fsub dword ptr [eax + 0x58c] */
    fp_push(MEMF(eax + 0x92C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x590)); /* fsub dword ptr [eax + 0x590] */
    fp_push(MEMF(eax + 0x7D4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x2E8)); /* fsub dword ptr [eax + 0x2e8] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x7D8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x2EC)); /* fsub dword ptr [eax + 0x2ec] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x7DC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x2F0)); /* fsub dword ptr [eax + 0x2f0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00028C4Du); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_00028C4D: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) / fp_top()); /* fdivr dword ptr [0x1c91d0] */
    eax = MEM32(esp + 0x24);
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00028C80
 * Original: 0x00028C80 - 0x00028C8D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00028C80: ;
    eax = MEM32(ecx + 0x4A0);
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00028C86
 * Original: 0x00028C86 - 0x00028C8D (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028C86(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00028C86: ;
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00028C90
 * Original: 0x00028C90 - 0x00028CE1 (81 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028C90(void)
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

loc_00028C90: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esi + 0x478);
    if (CMP_GE(_fas, _fbs)) goto loc_00028CAB; /* jge: greater or equal (signed >=) */

loc_00028CA5: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D8)); /* fadd dword ptr [0x1c91d8] */

loc_00028CAB: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x1B01D0)); /* fsub dword ptr [0x1b01d0] */
    PUSH32(esp, 0x3F800000);
    ecx = eax + 0x78;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1B01CC)); /* fmul dword ptr [0x1b01cc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00028CC8u); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_00028CC8: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00028CDD; /* jp: parity */

loc_00028CD3: ;
    MEM32(esi + 0x530) = 2;

loc_00028CDD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00028CF0
 * Original: 0x00028CF0 - 0x00028CFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028CF0(void)
{

loc_00028CF0: ;
    MEM32(ecx + 0x530) = 3;
    esp += 4; return; /* ret */

}
