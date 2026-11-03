/**
 * ATV: Quad Power Racing 2 - Recompiled code chunk 21
 * Functions: 250 (0x0010F0F0 - 0x00117A20)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0010F0F0
 * Original: 0x0010F0F0 - 0x0010F11C (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F0F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010F0FBu); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_0010F0FB: ;
    edx = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(edx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F114; /* je: equal / zero */

loc_0010F108: ;
    MEM8(eax + esi) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F108; /* jne: not equal / not zero */

loc_0010F114: ;
    MEM8(eax + esi) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010F120
 * Original: 0x0010F120 - 0x0010F14C (44 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F120: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0010F128u); RECOMP_ABI_CALL(0x00119210u, sub_00119210); /* call 0x00119210 */

loc_0010F128: ;
    ecx = MEM32(0x1C4CB4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xA4) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi) = 0x1C4CB8;
    MEM32(esi + 0x9C) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010F150
 * Original: 0x0010F150 - 0x0010F17B (43 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0010F150(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0010F150: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0010F15Eu); RECOMP_ABI_CALL(0x00119230u, sub_00119230); /* call 0x00119230 */

loc_0010F15E: ;
    fp_push(MEMF(0x1DFC10)); /* fld float */
    eax = MEM32(edi + 0x58);
    MEM32(esi + 0x9C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x5C)); /* fmul dword ptr [edi + 0x5c] */
    POP32(esp, edi);
    MEMF(esi + 0xA0) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010F180
 * Original: 0x0010F180 - 0x0010F1C2 (66 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F180: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0010F18Eu); RECOMP_ABI_CALL(0x00119600u, sub_00119600); /* call 0x00119600 */

loc_0010F18E: ;
    eax = esi + esi * 2;
    ecx = eax * 4 + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010F19Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0010F19E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F1B5; /* je: equal / zero */

loc_0010F1A5: ;
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xA4) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0010F1B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0xA4) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010F1D0
 * Original: 0x0010F1D0 - 0x0010F20E (62 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F1D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0010F1D9u); RECOMP_ABI_CALL(0x001191F0u, sub_001191F0); /* call 0x001191F0 */

loc_0010F1D9: ;
    eax = MEM32(esi + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0xA8) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0010F20B; /* jle: less or equal (signed <=) */

loc_0010F1EA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0010F1F0: ;
    eax = MEM32(esi + 0xA4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax) = edi;
    eax = MEM32(esi + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010F1F0; /* jl: less (signed <) */

loc_0010F20B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010F210
 * Original: 0x0010F210 - 0x0010F361 (337 bytes, 103 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F210(void)
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

loc_0010F210: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x94)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x94) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F35A; /* je: equal / zero */

loc_0010F228: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xA8)); /* fadd dword ptr [esi + 0xa8] */
    MEMF(esi + 0xA8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x9C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x9c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0010F2D1; /* jne: not equal / not zero */

loc_0010F249: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010F2C6; /* jle: less or equal (signed <=) */

loc_0010F253: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010F256: ;
    ecx = MEM32(esi + 0xA0);
    eax = ecx;
    edx = ecx;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, eax);
    ecx = 0x1CEFD8;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x0010F273u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_0010F273: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0xA0);
    edx = ecx;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, edx);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x0010F28Eu); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_0010F28E: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x0010F2A1u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_0010F2A1: ;
    eax = MEM32(esi + 0xA4);
    MEMF(eax + ebx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010F256; /* jl: less (signed <) */

loc_0010F2C5: ;
    POP32(esp, ebx);

loc_0010F2C6: ;
    MEM32(esi + 0xA8) = 0;
    POP32(esp, edi);

loc_0010F2D1: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x94)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x94) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F34E; /* je: equal / zero */

loc_0010F2DF: ;
    /* nop */

loc_0010F2E0: ;
    edx = MEM32(esi + 0xA4);
    fp_push(MEMF(esp + 0x28)); /* fld float */
    ecx = eax + eax * 2;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + ecx * 4)); /* fmul dword ptr [edx + ecx*4] */
    ecx = edx + ecx * 4;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    edx = MEM32(esi + 0x8C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + edx + 0xC;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 4);
    if ((_fas >= 0)) goto loc_0010F334; /* jns: not sign (positive) */

loc_0010F330: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_0010F330; /* js: sign (negative) */

loc_0010F334: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010F346; /* jl: less (signed <) */

loc_0010F338: ;
    edx = ecx;
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    /* nop */

loc_0010F340: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010F340; /* jge: greater or equal (signed >=) */

loc_0010F346: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x94)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x94) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F2E0; /* jne: not equal / not zero */

loc_0010F34E: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0010F35Au); RECOMP_ABI_CALL(0x00119440u, sub_00119440); /* call 0x00119440 */

loc_0010F35A: ;
    POP32(esp, esi);
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
 * sub_0010F370
 * Original: 0x0010F370 - 0x0010F3AC (60 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F370: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1C4CB8;
    if (CMP_EQ(_fa, _fb)) goto loc_0010F38F; /* je: equal / zero */

loc_0010F383: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010F38Cu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0010F38C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010F38F: ;
    ecx = esi;
    PUSH32(esp, 0x0010F396u); RECOMP_ABI_CALL(0x00119C40u, sub_00119C40); /* call 0x00119C40 */

loc_0010F396: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010F3A6; /* je: equal / zero */

loc_0010F39D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010F3A3u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0010F3A3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010F3A6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010F3B0
 * Original: 0x0010F3B0 - 0x0010F3EC (60 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F3B0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0010F3DE; /* je: equal / zero */

loc_0010F3B9: ;
    edi = MEM32(esp + 0xC);
    /* nop */

loc_0010F3C0: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F3D7; /* je: equal / zero */

loc_0010F3C6: ;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010F3D0u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0010F3D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F3E5; /* je: equal / zero */

loc_0010F3D7: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F3C0; /* jne: not equal / not zero */

loc_0010F3DE: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0010F3E5: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010F3F0
 * Original: 0x0010F3F0 - 0x0010F418 (40 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F3F0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F40B; /* je: equal / zero */

loc_0010F3F7: ;
    ecx = MEM32(esp + 4);
    goto loc_0010F400;

    /* nop */

loc_0010F400: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F410; /* je: equal / zero */

loc_0010F404: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F400; /* jne: not equal / not zero */

loc_0010F40B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0010F410: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010F420
 * Original: 0x0010F420 - 0x0010F438 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0010F420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F420: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F435; /* je: equal / zero */

loc_0010F427: ;
    ecx = MEM32(eax + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F437; /* jne: not equal / not zero */

loc_0010F42E: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F427; /* jne: not equal / not zero */

loc_0010F435: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010F437: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010F440
 * Original: 0x0010F440 - 0x0010F46B (43 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F440: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F467; /* je: equal / zero */

loc_0010F448: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    /* nop */

loc_0010F450: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F45F; /* je: equal / zero */

loc_0010F457: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0010F45Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F45Cu); } /* indirect call */
    }

loc_0010F45F: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F450; /* jne: not equal / not zero */

loc_0010F466: ;
    POP32(esp, edi);

loc_0010F467: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010F470
 * Original: 0x0010F470 - 0x0010F5AD (317 bytes, 125 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010F470: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x1DFC14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x48);
    edx = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 8) = edx;
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0010F49F; /* je: equal / zero */

loc_0010F496: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F49F; /* je: equal / zero */

loc_0010F49B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0010F4A4;

loc_0010F49F: ;
    ecx = 1;

loc_0010F4A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0010F4B2; /* je: equal / zero */

loc_0010F4AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F4B2; /* je: equal / zero */

loc_0010F4AE: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0010F4B7;

loc_0010F4B2: ;
    ebx = 1;

loc_0010F4B7: ;
    edx = MEM32(edx + 0x10);
    _fa = (uint32_t)(MEM32(edx + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x48), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F4D9; /* jne: not equal / not zero */

loc_0010F4C0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F534; /* jne: not equal / not zero */

loc_0010F4C4: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x0010F4CDu); RECOMP_ABI_CALL(0x00110890u, sub_00110890); /* call 0x00110890 */

loc_0010F4CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F534; /* jne: not equal / not zero */

loc_0010F4D1: ;
    ebp = ebp | MEM32(0x1CF498);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0010F534;

loc_0010F4D9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x54);
    if (CMP_EQ(_fa, _fb)) goto loc_0010F4EC; /* je: equal / zero */

loc_0010F4E1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0010F4E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F4E5u); } /* indirect call */
    }

loc_0010F4E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F4F1; /* je: equal / zero */

loc_0010F4EC: ;
    eax = 1;

loc_0010F4F1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0010F520; /* je: equal / zero */

loc_0010F4F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F520; /* je: equal / zero */

loc_0010F4FA: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0010F503u); RECOMP_ABI_CALL(0x00110890u, sub_00110890); /* call 0x00110890 */

loc_0010F503: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F50F; /* jne: not equal / not zero */

loc_0010F507: ;
    ebp = ebp | MEM32(0x1CF498);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0010F534;

loc_0010F50F: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F534; /* jne: not equal / not zero */

loc_0010F517: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0010F51Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F51Bu); } /* indirect call */
    }

loc_0010F51E: ;
    goto loc_0010F534;

loc_0010F520: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F534; /* jne: not equal / not zero */

loc_0010F527: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F534; /* jne: not equal / not zero */

loc_0010F52B: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x0010F534u); RECOMP_ABI_CALL(0x00110890u, sub_00110890); /* call 0x00110890 */

loc_0010F534: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0010F54F; /* je: equal / zero */

loc_0010F53C: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0010F54Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F54Au); } /* indirect call */
    }

loc_0010F54D: ;
    ebp = ebp | MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0010F54F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x1DFC14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(0x1DFC14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F5A1; /* jne: not equal / not zero */

loc_0010F557: ;
    eax = MEM32(esi + 0x48);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0010F598; /* je: equal / zero */

loc_0010F55D: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0010F5A1; /* jne: not equal / not zero */

loc_0010F562: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0010F56Bu); RECOMP_ABI_CALL(0x00110890u, sub_00110890); /* call 0x00110890 */

loc_0010F56B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0010F572u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F56Fu); } /* indirect call */
    }

loc_0010F572: ;
    ecx = esi;
    PUSH32(esp, 0x0010F579u); RECOMP_ABI_CALL(0x00110390u, sub_00110390); /* call 0x00110390 */

loc_0010F579: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F5A1; /* je: equal / zero */

loc_0010F57D: ;
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010F58Cu); RECOMP_ABI_CALL(0x0010FAD0u, sub_0010FAD0); /* call 0x0010FAD0 */

loc_0010F58C: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(eax) = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0010F598: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0010F5A1u); RECOMP_ABI_CALL(0x00110890u, sub_00110890); /* call 0x00110890 */

loc_0010F5A1: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(eax) = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0010F5B0
 * Original: 0x0010F5B0 - 0x0010F60F (95 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F5B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0010F5D9; /* je: equal / zero */

loc_0010F5BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F5C8; /* jne: not equal / not zero */

loc_0010F5C3: ;
    MEM32(esi + 0x14) = eax;
    goto loc_0010F5D9;

loc_0010F5C8: ;
    edx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F5D9; /* je: equal / zero */

loc_0010F5CF: ;
    edx = MEM32(eax + 0x48);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F5D9; /* je: equal / zero */

loc_0010F5D6: ;
    MEM32(esi + 0x14) = eax;

loc_0010F5D9: ;
    edx = MEM32(esi + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F608; /* je: equal / zero */

loc_0010F5E9: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F608; /* je: equal / zero */

loc_0010F5F3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F5FC; /* je: equal / zero */

loc_0010F5F7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0010F5FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F5F9u); } /* indirect call */
    }

loc_0010F5FC: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F608; /* je: equal / zero */

loc_0010F603: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0010F608u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F605u); } /* indirect call */
    }

loc_0010F608: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010F610
 * Original: 0x0010F610 - 0x0010F69D (141 bytes, 57 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F610: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ebx = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1C4D0C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0010F625u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F622u); } /* indirect call */
    }

loc_0010F625: ;
    edi = MEM32(ebx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F653; /* je: equal / zero */

loc_0010F62C: ;
    /* nop */

loc_0010F630: ;
    eax = MEM32(edi + 0x30);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0010F63Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F638u); } /* indirect call */
    }

loc_0010F63B: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0010F643u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F640u); } /* indirect call */
    }

loc_0010F643: ;
    eax = MEM32(esi);
    edi = MEM32(edi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0010F64Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F64Cu); } /* indirect call */
    }

loc_0010F64F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F630; /* jne: not equal / not zero */

loc_0010F653: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0010F65Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F659u); } /* indirect call */
    }

loc_0010F65C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1C4D04);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0010F668u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F665u); } /* indirect call */
    }

loc_0010F668: ;
    edx = MEM32(esi);
    eax = ebx + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C4CF4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x0010F67Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F675u); } /* indirect call */
    }

loc_0010F67B: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C4CE4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x0010F68Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F688u); } /* indirect call */
    }

loc_0010F68E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0010F697u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F694u); } /* indirect call */
    }

loc_0010F697: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010F6A0
 * Original: 0x0010F6A0 - 0x0010F74F (175 bytes, 64 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F6A0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0010F6BB; /* je: equal / zero */

loc_0010F6A8: ;
    esi = MEM32(esp + 0xC);
    /* nop */

loc_0010F6B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F6C1; /* je: equal / zero */

loc_0010F6B4: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F6B0; /* jne: not equal / not zero */

loc_0010F6BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0010F6C1: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F6D0; /* je: equal / zero */

loc_0010F6C8: ;
    edx = MEM32(esi + 8);
    MEM32(eax + 8) = edx;
    goto loc_0010F6D6;

loc_0010F6D0: ;
    eax = MEM32(esi + 8);
    MEM32(ecx + 8) = eax;

loc_0010F6D6: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F6E5; /* je: equal / zero */

loc_0010F6DD: ;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    goto loc_0010F6EB;

loc_0010F6E5: ;
    eax = MEM32(esi + 4);
    MEM32(ecx + 0xC) = eax;

loc_0010F6EB: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F725; /* jne: not equal / not zero */

loc_0010F701: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F71D; /* je: equal / zero */

loc_0010F708: ;
    edx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F716; /* je: equal / zero */

loc_0010F70F: ;
    edx = MEM32(eax + 0x48);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F71F; /* jne: not equal / not zero */

loc_0010F716: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F708; /* jne: not equal / not zero */

loc_0010F71D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010F71F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010F725u); RECOMP_ABI_CALL(0x0010F5B0u, sub_0010F5B0); /* call 0x0010F5B0 */

loc_0010F725: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F73F; /* jne: not equal / not zero */

loc_0010F72D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0010F736u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F733u); } /* indirect call */
    }

loc_0010F736: ;
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0010F73F: ;
    MEM32(esi + 0x6C) = 0;
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010F750
 * Original: 0x0010F750 - 0x0010F7D3 (131 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F750: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F760; /* je: equal / zero */

loc_0010F75D: ;
    MEM32(esi + 0x14) = ebx;

loc_0010F760: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F782; /* je: equal / zero */

loc_0010F765: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F782; /* je: equal / zero */

loc_0010F76D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F776; /* je: equal / zero */

loc_0010F771: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0010F776u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F773u); } /* indirect call */
    }

loc_0010F776: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F782; /* je: equal / zero */

loc_0010F77D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0010F782u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F77Fu); } /* indirect call */
    }

loc_0010F782: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F7D0; /* je: equal / zero */

loc_0010F789: ;
    PUSH32(esp, edi);
    /* nop */

loc_0010F790: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    eax = MEM32(ecx + 8);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0010F7A1; /* je: equal / zero */

loc_0010F79C: ;
    MEM32(edx + 8) = eax;
    goto loc_0010F7A4;

loc_0010F7A1: ;
    MEM32(esi + 8) = eax;

loc_0010F7A4: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F7B3; /* je: equal / zero */

loc_0010F7AB: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    goto loc_0010F7B9;

loc_0010F7B3: ;
    eax = MEM32(ecx + 4);
    MEM32(esi + 0xC) = eax;

loc_0010F7B9: ;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = ebx;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0010F7C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F7C6u); } /* indirect call */
    }

loc_0010F7C9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0010F790; /* jne: not equal / not zero */

loc_0010F7CF: ;
    POP32(esp, edi);

loc_0010F7D0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010F7E0
 * Original: 0x0010F7E0 - 0x0010F81D (61 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010F7E0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x1DFC14);
    if (CMP_EQ(_fa, _fb)) goto loc_0010F812; /* je: equal / zero */

loc_0010F7F1: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);

loc_0010F7F7: ;
    esi = MEM32(eax + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0010F808u); RECOMP_ABI_CALL(0x0010F470u, sub_0010F470); /* call 0x0010F470 */

loc_0010F808: ;
    edi = edi | MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0010F7F7; /* jne: not equal / not zero */

loc_0010F810: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0010F812: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010F820
 * Original: 0x0010F820 - 0x0010F86A (74 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F820: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F83C; /* jne: not equal / not zero */

loc_0010F82B: ;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F867; /* je: equal / zero */

loc_0010F832: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010F838u); RECOMP_ABI_CALL(0x0010F5B0u, sub_0010F5B0); /* call 0x0010F5B0 */

loc_0010F838: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F867; /* jne: not equal / not zero */

loc_0010F83C: ;
    ecx = MEM32(edi + 0xC);
    eax = esi;

loc_0010F841: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F84A; /* jne: not equal / not zero */

loc_0010F845: ;
    esi = MEM32(edi + 8);
    goto loc_0010F84D;

loc_0010F84A: ;
    esi = MEM32(esi + 8);

loc_0010F84D: ;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F85B; /* je: equal / zero */

loc_0010F854: ;
    edx = MEM32(esi + 0x48);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F85F; /* jne: not equal / not zero */

loc_0010F85B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F841; /* jne: not equal / not zero */

loc_0010F85F: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0010F867u); RECOMP_ABI_CALL(0x0010F5B0u, sub_0010F5B0); /* call 0x0010F5B0 */

loc_0010F867: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010F870
 * Original: 0x0010F870 - 0x0010F8BA (74 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F870: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F88C; /* jne: not equal / not zero */

loc_0010F87B: ;
    esi = MEM32(edi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F8B7; /* je: equal / zero */

loc_0010F882: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010F888u); RECOMP_ABI_CALL(0x0010F5B0u, sub_0010F5B0); /* call 0x0010F5B0 */

loc_0010F888: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F8B7; /* jne: not equal / not zero */

loc_0010F88C: ;
    ecx = MEM32(edi + 8);
    eax = esi;

loc_0010F891: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F89A; /* jne: not equal / not zero */

loc_0010F895: ;
    esi = MEM32(edi + 0xC);
    goto loc_0010F89D;

loc_0010F89A: ;
    esi = MEM32(esi + 4);

loc_0010F89D: ;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F8AB; /* je: equal / zero */

loc_0010F8A4: ;
    edx = MEM32(esi + 0x48);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F8AF; /* jne: not equal / not zero */

loc_0010F8AB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F891; /* jne: not equal / not zero */

loc_0010F8AF: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0010F8B7u); RECOMP_ABI_CALL(0x0010F5B0u, sub_0010F5B0); /* call 0x0010F5B0 */

loc_0010F8B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010F8C0
 * Original: 0x0010F8C0 - 0x0010F988 (200 bytes, 83 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F8C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x4C);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0010F8CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F8CCu); } /* indirect call */
    }

loc_0010F8CF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_0010F93E; /* jne: not equal / not zero */

loc_0010F8DA: ;
    eax = MEM32(esi + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F8FD; /* je: equal / zero */

loc_0010F8E8: ;
    edx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F8FD; /* je: equal / zero */

loc_0010F8EF: ;
    edx = MEM32(eax + 0x48);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F8FD; /* je: equal / zero */

loc_0010F8F6: ;
    edi = 1;
    goto loc_0010F8FF;

loc_0010F8FD: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010F8FF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0010F912; /* je: equal / zero */

loc_0010F907: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F912; /* jne: not equal / not zero */

loc_0010F90B: ;
    eax = 1;
    goto loc_0010F914;

loc_0010F912: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010F914: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F91E; /* jne: not equal / not zero */

loc_0010F918: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F93E; /* jne: not equal / not zero */

loc_0010F91C: ;
    goto loc_0010F937;

loc_0010F91E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F92D; /* je: equal / zero */

loc_0010F922: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F92D; /* jne: not equal / not zero */

loc_0010F926: ;
    eax = 1;
    goto loc_0010F92F;

loc_0010F92D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010F92F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F937; /* je: equal / zero */

loc_0010F933: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F93E; /* je: equal / zero */

loc_0010F937: ;
    ecx = esi;
    PUSH32(esp, 0x0010F93Eu); RECOMP_ABI_CALL(0x0010F820u, sub_0010F820); /* call 0x0010F820 */

loc_0010F93E: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F979; /* je: equal / zero */

loc_0010F945: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F953; /* je: equal / zero */

loc_0010F94C: ;
    eax = MEM32(ecx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F979; /* jne: not equal / not zero */

loc_0010F953: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0010F979; /* je: equal / zero */

loc_0010F95E: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F979; /* je: equal / zero */

loc_0010F968: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0010F96Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F96Au); } /* indirect call */
    }

loc_0010F96D: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F979; /* je: equal / zero */

loc_0010F974: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0010F979u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F976u); } /* indirect call */
    }

loc_0010F979: ;
    ecx = MEM32(esi + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010F990
 * Original: 0x0010F990 - 0x0010FA5F (207 bytes, 79 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F990: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x1CF4A0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010F9A9u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0010F9A9: ;
    SET_LO8(ebx, MEM8(esp + 0x1C));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F9F8; /* je: equal / zero */

loc_0010F9B4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010F9D3; /* je: equal / zero */

loc_0010F9B9: ;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0010F9C4u); RECOMP_ABI_CALL(0x0010F3B0u, sub_0010F3B0); /* call 0x0010F3B0 */

loc_0010F9C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F9D3; /* je: equal / zero */

loc_0010F9C8: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010F9D3u); RECOMP_ABI_CALL(0x0010FAD0u, sub_0010FAD0); /* call 0x0010FAD0 */

loc_0010F9D3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010F9F8; /* je: equal / zero */

loc_0010F9D8: ;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0010F9E3u); RECOMP_ABI_CALL(0x0010F3B0u, sub_0010F3B0); /* call 0x0010F3B0 */

loc_0010F9E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F9F8; /* je: equal / zero */

loc_0010F9E7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0010F9F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F9EDu); } /* indirect call */
    }

loc_0010F9F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0010F9F8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010FA1E; /* je: equal / zero */

loc_0010F9FD: ;
    MEM32(esi + 4) = 0;
    eax = MEM32(edi + 8);
    MEM32(esi + 8) = eax;
    MEM32(edi + 8) = esi;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FA19; /* je: equal / zero */

loc_0010FA14: ;
    MEM32(eax + 4) = esi;
    goto loc_0010FA3D;

loc_0010FA19: ;
    MEM32(edi + 0xC) = esi;
    goto loc_0010FA3D;

loc_0010FA1E: ;
    MEM32(esi + 8) = 0;
    ecx = MEM32(edi + 0xC);
    MEM32(esi + 4) = ecx;
    MEM32(edi + 0xC) = esi;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FA3A; /* je: equal / zero */

loc_0010FA35: ;
    MEM32(eax + 8) = esi;
    goto loc_0010FA3D;

loc_0010FA3A: ;
    MEM32(edi + 8) = esi;

loc_0010FA3D: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 0x6C) = edi;
    PUSH32(esp, 0x0010FA4Bu); RECOMP_ABI_CALL(0x0010F8C0u, sub_0010F8C0); /* call 0x0010F8C0 */

loc_0010FA4B: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0010FA54u); RECOMP_ABI_CALL(0x00110370u, sub_00110370); /* call 0x00110370 */

loc_0010FA54: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010FA60
 * Original: 0x0010FA60 - 0x0010FA86 (38 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FA60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, 0x0010FA71u); RECOMP_ABI_CALL(0x0010F3B0u, sub_0010F3B0); /* call 0x0010F3B0 */

loc_0010FA71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FA81; /* jne: not equal / not zero */

loc_0010FA75: ;
    PUSH32(esp, edi);
    ecx = esi + 0x88;
    PUSH32(esp, 0x0010FA81u); RECOMP_ABI_CALL(0x0010F3B0u, sub_0010F3B0); /* call 0x0010F3B0 */

loc_0010FA81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010FA90
 * Original: 0x0010FA90 - 0x0010FAA0 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010FA90: ;
    g_seh_ebp = ebp; sub_00110400(); return; /* tail jmp 0x00110400 */

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

    g_seh_ebp = ebp; sub_0010FAA0(); return; /* fallthrough 0x0010FAA0 */

}

/**
 * sub_0010FAA0
 * Original: 0x0010FAA0 - 0x0010FAA8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010FAA0: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0010F990(); return; /* tail jmp 0x0010F990 */

}

/**
 * sub_0010FAB0
 * Original: 0x0010FAB0 - 0x0010FAC6 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FAB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010FAB0: ;
    eax = MEM32(esp + 8);
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 8) = eax;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x88;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0010F990(); return; /* tail jmp 0x0010F990 */

}

/**
 * sub_0010FAD0
 * Original: 0x0010FAD0 - 0x0010FB69 (153 bytes, 64 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FAD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0010FAE3; /* jne: not equal / not zero */

loc_0010FADC: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0010FAE3: ;
    PUSH32(esp, ebx);
    ebx = edi + 0x70;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0010FAEFu); RECOMP_ABI_CALL(0x0010F3F0u, sub_0010F3F0); /* call 0x0010F3F0 */

loc_0010FAEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FAF7; /* je: equal / zero */

loc_0010FAF3: ;
    ecx = ebx;
    goto loc_0010FB0B;

loc_0010FAF7: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x88;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0010FB05u); RECOMP_ABI_CALL(0x0010F3F0u, sub_0010F3F0); /* call 0x0010F3F0 */

loc_0010FB05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FB0F; /* je: equal / zero */

loc_0010FB09: ;
    ecx = edi;

loc_0010FB0B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FB17; /* jne: not equal / not zero */

loc_0010FB0F: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0010FB17: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FB31; /* jne: not equal / not zero */

loc_0010FB1E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0010FB26u); RECOMP_ABI_CALL(0x0010F6A0u, sub_0010F6A0); /* call 0x0010F6A0 */

loc_0010FB26: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0010FB31: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FB57; /* jne: not equal / not zero */

loc_0010FB38: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0010FB40u); RECOMP_ABI_CALL(0x0010F6A0u, sub_0010F6A0); /* call 0x0010F6A0 */

loc_0010FB40: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010FB4Cu); RECOMP_ABI_CALL(0x000EC430u, sub_000EC430); /* call 0x000EC430 */

loc_0010FB4C: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0010FB57: ;
    ecx = esi;
    PUSH32(esp, 0x0010FB5Eu); RECOMP_ABI_CALL(0x001103B0u, sub_001103B0); /* call 0x001103B0 */

loc_0010FB5E: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010FB70
 * Original: 0x0010FB70 - 0x0010FBAC (60 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FB70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, 0x0010FB81u); RECOMP_ABI_CALL(0x0010F3B0u, sub_0010F3B0); /* call 0x0010F3B0 */

loc_0010FB81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FB9A; /* jne: not equal / not zero */

loc_0010FB85: ;
    PUSH32(esp, edi);
    ecx = esi + 0x88;
    PUSH32(esp, 0x0010FB91u); RECOMP_ABI_CALL(0x0010F3B0u, sub_0010F3B0); /* call 0x0010F3B0 */

loc_0010FB91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FB9A; /* jne: not equal / not zero */

loc_0010FB95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0010FB9A: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0010FBA7u); RECOMP_ABI_CALL(0x0010FAD0u, sub_0010FAD0); /* call 0x0010FAD0 */

loc_0010FBA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010FBB0
 * Original: 0x0010FBB0 - 0x0010FBC7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010FBB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x88;
    PUSH32(esp, 0x0010FBBEu); RECOMP_ABI_CALL(0x0010F750u, sub_0010F750); /* call 0x0010F750 */

loc_0010FBBE: ;
    ecx = esi + 0x70;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0010F750(); return; /* tail jmp 0x0010F750 */

}

/**
 * sub_0010FBD0
 * Original: 0x0010FBD0 - 0x0010FC00 (48 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FBD0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0010FBDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010FBDBu); } /* indirect call */
    }

loc_0010FBDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FBEC; /* je: equal / zero */

loc_0010FBE2: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0010FBEC: ;
    ecx = esi;
    PUSH32(esp, 0x0010FBF3u); RECOMP_ABI_CALL(0x00110470u, sub_00110470); /* call 0x00110470 */

loc_0010FBF3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0010FBFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010FBF8u); } /* indirect call */
    }

loc_0010FBFB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010FC00
 * Original: 0x0010FC00 - 0x0010FC11 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FC00: ;
    eax = MEM32(ecx + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FC10; /* jne: not equal / not zero */

loc_0010FC0A: ;
    eax = MEM32(ecx + 0x84);

loc_0010FC10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010FC20
 * Original: 0x0010FC20 - 0x0010FC3E (30 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010FC20: ;
    eax = MEM32(ecx + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FC36; /* jne: not equal / not zero */

loc_0010FC27: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xA4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0010FC36: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0010F5B0(); return; /* tail jmp 0x0010F5B0 */

}

/**
 * sub_0010FC40
 * Original: 0x0010FC40 - 0x0010FC8B (75 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FC40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x70;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0010FC54u); RECOMP_ABI_CALL(0x0010F3B0u, sub_0010F3B0); /* call 0x0010F3B0 */

loc_0010FC54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FC68; /* jne: not equal / not zero */

loc_0010FC58: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x88;
    PUSH32(esp, 0x0010FC64u); RECOMP_ABI_CALL(0x0010F3B0u, sub_0010F3B0); /* call 0x0010F3B0 */

loc_0010FC64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FC75; /* je: equal / zero */

loc_0010FC68: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FC7D; /* jne: not equal / not zero */

loc_0010FC6F: ;
    MEM32(esi + 0xA4) = eax;

loc_0010FC75: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0010FC7D: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0010FC85u); RECOMP_ABI_CALL(0x0010F5B0u, sub_0010F5B0); /* call 0x0010F5B0 */

loc_0010FC85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010FC90
 * Original: 0x0010FC90 - 0x0010FCE3 (83 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FC90: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x58), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FCA0; /* jne: not equal / not zero */

loc_0010FC99: ;
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0010FCA0: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x78);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FCBA; /* je: equal / zero */

loc_0010FCA8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0010FCAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010FCACu); } /* indirect call */
    }

loc_0010FCAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FCDB; /* jne: not equal / not zero */

loc_0010FCB3: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FCA8; /* jne: not equal / not zero */

loc_0010FCBA: ;
    esi = MEM32(edi + 0x90);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FCD6; /* je: equal / zero */

loc_0010FCC4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0010FCCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010FCC8u); } /* indirect call */
    }

loc_0010FCCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FCDB; /* jne: not equal / not zero */

loc_0010FCCF: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FCC4; /* jne: not equal / not zero */

loc_0010FCD6: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0010FCDB: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010FCF0
 * Original: 0x0010FCF0 - 0x0010FD4E (94 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FCF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FCF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = edi + 0x70;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0010FD04u); RECOMP_ABI_CALL(0x0010F3F0u, sub_0010F3F0); /* call 0x0010F3F0 */

loc_0010FD04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FD22; /* je: equal / zero */

loc_0010FD08: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0010FD12u); RECOMP_ABI_CALL(0x0010FAD0u, sub_0010FAD0); /* call 0x0010FAD0 */

loc_0010FD12: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010FD1Cu); RECOMP_ABI_CALL(0x0010F990u, sub_0010F990); /* call 0x0010F990 */

loc_0010FD1C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0010FD22: ;
    ebx = edi + 0x88;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0010FD30u); RECOMP_ABI_CALL(0x0010F3F0u, sub_0010F3F0); /* call 0x0010F3F0 */

loc_0010FD30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FD48; /* je: equal / zero */

loc_0010FD34: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0010FD3Eu); RECOMP_ABI_CALL(0x0010FAD0u, sub_0010FAD0); /* call 0x0010FAD0 */

loc_0010FD3E: ;
    PUSH32(esp, 4);
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010FD48u); RECOMP_ABI_CALL(0x0010F990u, sub_0010F990); /* call 0x0010F990 */

loc_0010FD48: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010FD50
 * Original: 0x0010FD50 - 0x0010FDD2 (130 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FD50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FD50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0010FD5Fu); RECOMP_ABI_CALL(0x00110AF0u, sub_00110AF0); /* call 0x00110AF0 */

loc_0010FD5F: ;
    MEM32(esi) = 0x1B0BF0;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x7C) = ebx;
    ecx = esi + 0x70;
    MEM32(ecx) = 0x1B0BCC;
    MEM32(ecx + 0x10) = ebx;
    MEM32(ecx + 0x14) = ebx;
    edi = esi + 0x88;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    PUSH32(esp, esi);
    MEM32(edi) = 0x1B0BCC;
    MEM32(edi + 0x10) = ebx;
    MEM32(edi + 0x14) = ebx;
    PUSH32(esp, 0x0010FDA0u); RECOMP_ABI_CALL(0x00013A30u, sub_00013A30); /* call 0x00013A30 */

loc_0010FDA0: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0010FDA8u); RECOMP_ABI_CALL(0x00013A30u, sub_00013A30); /* call 0x00013A30 */

loc_0010FDA8: ;
    POP32(esp, edi);
    MEM32(esi + 0xA0) = ebx;
    MEM32(esi + 0xA4) = ebx;
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0xAC) = ebx;
    MEM32(esi + 0x50) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010FDE0
 * Original: 0x0010FDE0 - 0x0010FE69 (137 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FDE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FDE0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0010FDF6u); RECOMP_ABI_CALL(0x00110B60u, sub_00110B60); /* call 0x00110B60 */

loc_0010FDF6: ;
    MEM32(esi) = 0x1B0BF0;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x7C) = ebx;
    ecx = esi + 0x70;
    MEM32(ecx) = 0x1B0BCC;
    MEM32(ecx + 0x10) = ebx;
    MEM32(ecx + 0x14) = ebx;
    edi = esi + 0x88;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    PUSH32(esp, esi);
    MEM32(edi) = 0x1B0BCC;
    MEM32(edi + 0x10) = ebx;
    MEM32(edi + 0x14) = ebx;
    PUSH32(esp, 0x0010FE37u); RECOMP_ABI_CALL(0x00013A30u, sub_00013A30); /* call 0x00013A30 */

loc_0010FE37: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0010FE3Fu); RECOMP_ABI_CALL(0x00013A30u, sub_00013A30); /* call 0x00013A30 */

loc_0010FE3F: ;
    POP32(esp, edi);
    MEM32(esi + 0xA0) = ebx;
    MEM32(esi + 0xA4) = ebx;
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0xAC) = ebx;
    MEM32(esi + 0x50) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010FE70
 * Original: 0x0010FE70 - 0x0010FED2 (98 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FE70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FE91; /* je: equal / zero */

loc_0010FE7D: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FE91; /* je: equal / zero */

loc_0010FE84: ;
    PUSH32(esp, eax);
    ecx = esi + 0x70;
    PUSH32(esp, 0x0010FE8Du); RECOMP_ABI_CALL(0x0010F5B0u, sub_0010F5B0); /* call 0x0010F5B0 */

loc_0010FE8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FEC4; /* jne: not equal / not zero */

loc_0010FE91: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = esi + 0x88;
    PUSH32(esp, 0x0010FEA2u); RECOMP_ABI_CALL(0x0010F8C0u, sub_0010F8C0); /* call 0x0010F8C0 */

loc_0010FEA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FEAF; /* jne: not equal / not zero */

loc_0010FEA6: ;
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, 0x0010FEAFu); RECOMP_ABI_CALL(0x0010F8C0u, sub_0010F8C0); /* call 0x0010F8C0 */

loc_0010FEAF: ;
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0010FEC4; /* jne: not equal / not zero */

loc_0010FEBA: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FECE; /* je: equal / zero */

loc_0010FEC4: ;
    MEM32(esi + 0xA4) = 0;

loc_0010FECE: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010FEE0
 * Original: 0x0010FEE0 - 0x0010FF6B (139 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FEE0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FF64; /* je: equal / zero */

loc_0010FEED: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FEFD; /* jne: not equal / not zero */

loc_0010FEF4: ;
    _fa = (uint32_t)(MEM32(esi + 0xAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xAC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FF64; /* je: equal / zero */

loc_0010FEFD: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0010FF12u); RECOMP_ABI_CALL(0x00037EF0u, sub_00037EF0); /* call 0x00037EF0 */

loc_0010FF12: ;
    ecx = MEM32(esp + 0x20);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010FF20u); RECOMP_ABI_CALL(0x00037C80u, sub_00037C80); /* call 0x00037C80 */

loc_0010FF20: ;
    edx = MEM32(esi);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0010FF2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010FF29u); } /* indirect call */
    }

loc_0010FF2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FF3D; /* je: equal / zero */

loc_0010FF30: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi + 0x70;
    PUSH32(esp, 0x0010FF3Du); RECOMP_ABI_CALL(0x0010F440u, sub_0010F440); /* call 0x0010F440 */

loc_0010FF3D: ;
    ecx = MEM32(esi + 0x9C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FF58; /* je: equal / zero */

loc_0010FF47: ;
    eax = MEM32(ecx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FF58; /* je: equal / zero */

loc_0010FF4E: ;
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010FF58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010FF55u); } /* indirect call */
    }

loc_0010FF58: ;
    edx = MEM32(esi);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0010FF64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010FF61u); } /* indirect call */
    }

loc_0010FF64: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010FF70
 * Original: 0x0010FF70 - 0x0010FFD9 (105 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010FF70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xA0) = 0;
    MEM32(esi + 0x4C) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0010FF94; /* jne: not equal / not zero */

loc_0010FF8E: ;
    eax = MEM32(esi + 0x84);

loc_0010FF94: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0010FF9Cu); RECOMP_ABI_CALL(0x0010FE70u, sub_0010FE70); /* call 0x0010FE70 */

loc_0010FF9C: ;
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0010FFAE; /* jne: not equal / not zero */

loc_0010FFA8: ;
    ecx = MEM32(esi + 0x84);

loc_0010FFAE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FFD7; /* je: equal / zero */

loc_0010FFB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0010FFBE; /* jne: not equal / not zero */

loc_0010FFB8: ;
    ecx = MEM32(esi + 0x84);

loc_0010FFBE: ;
    edx = MEM32(ecx + 0x4C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FFD7; /* jne: not equal / not zero */

loc_0010FFC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FFCF; /* jne: not equal / not zero */

loc_0010FFC9: ;
    eax = MEM32(esi + 0x84);

loc_0010FFCF: ;
    edx = MEM32(eax);
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x1C)); return; /* indirect tail jmp */

loc_0010FFD7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010FFE0
 * Original: 0x0010FFE0 - 0x00110005 (37 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FFE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x9C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FFF7; /* jne: not equal / not zero */

loc_0010FFED: ;
    ecx = MEM32(esi + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FFFC; /* je: equal / zero */

loc_0010FFF7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0010FFFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010FFF9u); } /* indirect call */
    }

loc_0010FFFC: ;
    MEM32(esi + 0x4C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00110010
 * Original: 0x00110010 - 0x0011008D (125 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110010: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edi = ecx;
    PUSH32(esp, 0x0011001Eu); RECOMP_ABI_CALL(0x00110690u, sub_00110690); /* call 0x00110690 */

loc_0011001E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011007C; /* jne: not equal / not zero */

loc_00110022: ;
    eax = MEM32(edi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x78);
    if (CMP_EQ(_fa, _fb)) goto loc_00110034; /* je: equal / zero */

loc_00110030: ;
    edi = eax;
    goto loc_0011003A;

loc_00110034: ;
    edi = MEM32(edi + 0x84);

loc_0011003A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011005F; /* je: equal / zero */

loc_0011003E: ;
    edi = edi;

loc_00110040: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110058; /* je: equal / zero */

loc_00110044: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0011004Cu); RECOMP_ABI_CALL(0x001109D0u, sub_001109D0); /* call 0x001109D0 */

loc_0011004C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110058; /* je: equal / zero */

loc_00110050: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00110058u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110055u); } /* indirect call */
    }

loc_00110058: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110040; /* jne: not equal / not zero */

loc_0011005F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00110086; /* je: equal / zero */

loc_00110064: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0011006Cu); RECOMP_ABI_CALL(0x001109D0u, sub_001109D0); /* call 0x001109D0 */

loc_0011006C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110086; /* je: equal / zero */

loc_00110070: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00110078u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110075u); } /* indirect call */
    }

loc_00110078: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110086; /* je: equal / zero */

loc_0011007C: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00110086: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110011
 * Original: 0x00110011 - 0x0011008D (124 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110011(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110011: ;
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edi = ecx;
    PUSH32(esp, 0x0011001Eu); RECOMP_ABI_CALL(0x00110690u, sub_00110690); /* call 0x00110690 */

loc_0011001E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011007C; /* jne: not equal / not zero */

loc_00110022: ;
    eax = MEM32(edi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x78);
    if (CMP_EQ(_fa, _fb)) goto loc_00110034; /* je: equal / zero */

loc_00110030: ;
    edi = eax;
    goto loc_0011003A;

loc_00110034: ;
    edi = MEM32(edi + 0x84);

loc_0011003A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011005F; /* je: equal / zero */

loc_0011003E: ;
    edi = edi;

loc_00110040: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110058; /* je: equal / zero */

loc_00110044: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0011004Cu); RECOMP_ABI_CALL(0x001109D0u, sub_001109D0); /* call 0x001109D0 */

loc_0011004C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110058; /* je: equal / zero */

loc_00110050: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00110058u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110055u); } /* indirect call */
    }

loc_00110058: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110040; /* jne: not equal / not zero */

loc_0011005F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00110086; /* je: equal / zero */

loc_00110064: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0011006Cu); RECOMP_ABI_CALL(0x001109D0u, sub_001109D0); /* call 0x001109D0 */

loc_0011006C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110086; /* je: equal / zero */

loc_00110070: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00110078u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110075u); } /* indirect call */
    }

loc_00110078: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110086; /* je: equal / zero */

loc_0011007C: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00110086: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110090
 * Original: 0x00110090 - 0x0011010D (125 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110090: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edi = ecx;
    PUSH32(esp, 0x0011009Eu); RECOMP_ABI_CALL(0x00110700u, sub_00110700); /* call 0x00110700 */

loc_0011009E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001100FC; /* jne: not equal / not zero */

loc_001100A2: ;
    eax = MEM32(edi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x78);
    if (CMP_EQ(_fa, _fb)) goto loc_001100B4; /* je: equal / zero */

loc_001100B0: ;
    edi = eax;
    goto loc_001100BA;

loc_001100B4: ;
    edi = MEM32(edi + 0x84);

loc_001100BA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001100DF; /* je: equal / zero */

loc_001100BE: ;
    edi = edi;

loc_001100C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001100D8; /* je: equal / zero */

loc_001100C4: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001100CCu); RECOMP_ABI_CALL(0x001109D0u, sub_001109D0); /* call 0x001109D0 */

loc_001100CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001100D8; /* je: equal / zero */

loc_001100D0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x001100D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001100D5u); } /* indirect call */
    }

loc_001100D8: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001100C0; /* jne: not equal / not zero */

loc_001100DF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00110106; /* je: equal / zero */

loc_001100E4: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x001100ECu); RECOMP_ABI_CALL(0x001109D0u, sub_001109D0); /* call 0x001109D0 */

loc_001100EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110106; /* je: equal / zero */

loc_001100F0: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x001100F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001100F5u); } /* indirect call */
    }

loc_001100F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110106; /* je: equal / zero */

loc_001100FC: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00110106: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110110
 * Original: 0x00110110 - 0x00110189 (121 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00110110: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x78);
    PUSH32(esp, edi);
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0011012B; /* jne: not equal / not zero */

loc_00110125: ;
    ebx = MEM32(ebp + 0x84);

loc_0011012B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_00110152; /* je: equal / zero */

loc_00110133: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011014B; /* je: equal / zero */

loc_00110137: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0011013Fu); RECOMP_ABI_CALL(0x001109D0u, sub_001109D0); /* call 0x001109D0 */

loc_0011013F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011014B; /* je: equal / zero */

loc_00110143: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0011014Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110148u); } /* indirect call */
    }

loc_0011014B: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110133; /* jne: not equal / not zero */

loc_00110152: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011017A; /* je: equal / zero */

loc_00110156: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0011015Eu); RECOMP_ABI_CALL(0x001109D0u, sub_001109D0); /* call 0x001109D0 */

loc_0011015E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011017A; /* je: equal / zero */

loc_00110162: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0011016Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110167u); } /* indirect call */
    }

loc_0011016A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011017A; /* je: equal / zero */

loc_0011016E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0011017A: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00110182u); RECOMP_ABI_CALL(0x00110770u, sub_00110770); /* call 0x00110770 */

loc_00110182: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110190
 * Original: 0x00110190 - 0x00110279 (233 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00110190: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xA8) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0011026B; /* je: equal / zero */

loc_001101AA: ;
    ebx = MEM32(esi + 0x9C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001101BA; /* jne: not equal / not zero */

loc_001101B4: ;
    ebx = MEM32(esi + 0x84);

loc_001101BA: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x78);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001101E1; /* je: equal / zero */

loc_001101C2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001101DA; /* je: equal / zero */

loc_001101C6: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x001101CEu); RECOMP_ABI_CALL(0x001109D0u, sub_001109D0); /* call 0x001109D0 */

loc_001101CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001101DA; /* je: equal / zero */

loc_001101D2: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x001101DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001101D7u); } /* indirect call */
    }

loc_001101DA: ;
    edi = MEM32(edi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001101C2; /* jne: not equal / not zero */

loc_001101E1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001101FE; /* je: equal / zero */

loc_001101E6: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x001101EEu); RECOMP_ABI_CALL(0x001109D0u, sub_001109D0); /* call 0x001109D0 */

loc_001101EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001101FE; /* je: equal / zero */

loc_001101F2: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x001101FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001101F7u); } /* indirect call */
    }

loc_001101FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110256; /* jne: not equal / not zero */

loc_001101FE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011026B; /* jne: not equal / not zero */

loc_00110204: ;
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011026B; /* jne: not equal / not zero */

loc_0011020E: ;
    ebp = MEM32(ebp);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00110242; /* je: equal / zero */

loc_00110216: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011026B; /* jne: not equal / not zero */

loc_00110219: ;
    eax = MEM32(esi + 0x84);
    ecx = esi + 0x70;
    MEM32(esi + 0xA0) = eax;
    PUSH32(esp, 0x0011022Du); RECOMP_ABI_CALL(0x0010F820u, sub_0010F820); /* call 0x0010F820 */

loc_0011022D: ;
    MEM32(esi + 0xA8) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00110242: ;
    eax = MEM32(esi + 0x84);
    ecx = esi + 0x70;
    MEM32(esi + 0xA0) = eax;
    PUSH32(esp, 0x00110256u); RECOMP_ABI_CALL(0x0010F870u, sub_0010F870); /* call 0x0010F870 */

loc_00110256: ;
    MEM32(esi + 0xA8) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0011026B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xA8) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110280
 * Original: 0x00110280 - 0x001102F7 (119 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110280: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00110295; /* jne: not equal / not zero */

loc_0011028F: ;
    eax = MEM32(esi + 0x84);

loc_00110295: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011029Du); RECOMP_ABI_CALL(0x0010FE70u, sub_0010FE70); /* call 0x0010FE70 */

loc_0011029D: ;
    ebx = MEM32(esp + 0x14);
    edi = MEM32(0x1DFC18);
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi + 0x88;
    PUSH32(esp, 0x001102B8u); RECOMP_ABI_CALL(0x0010F7E0u, sub_0010F7E0); /* call 0x0010F7E0 */

loc_001102B8: ;
    edi = edi | MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi + 0x70;
    PUSH32(esp, 0x001102C8u); RECOMP_ABI_CALL(0x0010F7E0u, sub_0010F7E0); /* call 0x0010F7E0 */

loc_001102C8: ;
    ecx = MEM32(eax);
    eax = MEM32(esi + 0x48);
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001102DA; /* jne: not equal / not zero */

loc_001102D4: ;
    edi = MEM32(0x1DFC18);

loc_001102DA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x001102E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001102E4u); } /* indirect call */
    }

loc_001102E7: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x10);
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00110300
 * Original: 0x00110300 - 0x0011034B (75 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110300: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00110344; /* je: equal / zero */

loc_0011030B: ;
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011031F; /* jne: not equal / not zero */

loc_00110315: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011033D; /* je: equal / zero */

loc_0011031F: ;
    edx = MEM32(esp + 0xC);
    SET_LO8(ecx, LO8(edx));
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x28), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011033D; /* je: equal / zero */

loc_00110331: ;
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 0x44); PUSH32(esp, 0x00110339u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110336u); } /* indirect call */
    }

loc_00110339: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110346; /* jne: not equal / not zero */

loc_0011033D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110344: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00110346: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110350
 * Original: 0x00110350 - 0x00110366 (22 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110350(void)
{

loc_00110350: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00110360u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011035Du); } /* indirect call */
    }

loc_00110360: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00110370
 * Original: 0x00110370 - 0x00110387 (23 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110370: ;
    _fa = (uint32_t)(MEM32(ecx + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x58), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110384; /* je: equal / zero */

loc_00110376: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(ecx + 0x58) = eax;

loc_00110384: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110390
 * Original: 0x00110390 - 0x001103A6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110390: ;
    eax = MEM32(ecx + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001103A0; /* je: equal / zero */

loc_00110398: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001103A0; /* je: equal / zero */

loc_0011039D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001103A0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001103B0
 * Original: 0x001103B0 - 0x001103CC (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001103B0(void)
{

loc_001103B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x001103BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001103B7u); } /* indirect call */
    }

loc_001103BA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001103C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001103C0u); } /* indirect call */
    }

loc_001103C3: ;
    MEM32(esi + 0x58) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001103D0
 * Original: 0x001103D0 - 0x001103DF (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001103D0(void)
{

loc_001103D0: ;
    MEM32(ecx + 0x58) = 3;
    MEM32(ecx + 0x5C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001103E0
 * Original: 0x001103E0 - 0x001103E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001103E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001103E0: ;
    MEM32(ecx + 0x5C) = MEM32(ecx + 0x5C) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_001103F0
 * Original: 0x001103F0 - 0x001103F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001103F0(void)
{

loc_001103F0: ;
    eax = MEM32(ecx + 0x5C);
    esp += 4; return; /* ret */

}

/**
 * sub_00110400
 * Original: 0x00110400 - 0x00110467 (103 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110400: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = edi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1C4D4C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00110418u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110415u); } /* indirect call */
    }

loc_00110418: ;
    eax = MEM32(edi + 0x20);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C4D44);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00110428u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110425u); } /* indirect call */
    }

loc_00110428: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C4D3C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00110445u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011043Fu); } /* indirect call */
    }

loc_00110445: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C4D30);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00110462u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011045Cu); } /* indirect call */
    }

loc_00110462: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110470
 * Original: 0x00110470 - 0x0011047C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110470: ;
    eax = MEM32(ecx + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110478; /* jne: not equal / not zero */

loc_00110477: ;
    esp += 4; return; /* ret */

loc_00110478: ;
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00110480
 * Original: 0x00110480 - 0x001104E9 (105 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110480: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 4 (8-bit) */
    eax = MEM32(esp + 4);
    if (TEST_Z(_fa, _fb)) goto loc_001104BA; /* je: equal / zero */

loc_0011048B: ;
    MEM32(eax + 4) = 0;
    edx = MEM32(ecx + 0x64);
    MEM32(eax + 8) = edx;
    MEM32(ecx + 0x64) = eax;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001104AE; /* je: equal / zero */

loc_001104A2: ;
    MEM32(edx + 4) = eax;
    MEM32(ecx + 0x60) = MEM32(ecx + 0x60) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x10) = ecx;
    esp += 12; return; /* ret 8 */

loc_001104AE: ;
    MEM32(ecx + 0x68) = eax;
    MEM32(ecx + 0x60) = MEM32(ecx + 0x60) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x10) = ecx;
    esp += 12; return; /* ret 8 */

loc_001104BA: ;
    MEM32(eax + 8) = 0;
    edx = MEM32(ecx + 0x68);
    MEM32(eax + 4) = edx;
    MEM32(ecx + 0x68) = eax;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001104DD; /* je: equal / zero */

loc_001104D1: ;
    MEM32(edx + 8) = eax;
    MEM32(ecx + 0x60) = MEM32(ecx + 0x60) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x10) = ecx;
    esp += 12; return; /* ret 8 */

loc_001104DD: ;
    MEM32(ecx + 0x64) = eax;
    MEM32(ecx + 0x60) = MEM32(ecx + 0x60) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x10) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001104F0
 * Original: 0x001104F0 - 0x0011053F (79 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001104F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001104F0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00110504; /* je: equal / zero */

loc_001104FC: ;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;
    goto loc_0011050A;

loc_00110504: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x64) = edx;

loc_0011050A: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110519; /* je: equal / zero */

loc_00110511: ;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    goto loc_0011051F;

loc_00110519: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x68) = edx;

loc_0011051F: ;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0;
    MEM32(ecx + 0x60) = MEM32(ecx + 0x60) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(eax);
    POP32(esp, edi);
    MEM32(esp + 4) = 1;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx)); return; /* indirect tail jmp */

}

/**
 * sub_00110540
 * Original: 0x00110540 - 0x00110592 (82 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110540: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x64);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011058F; /* je: equal / zero */

loc_0011054D: ;
    PUSH32(esp, edi);
    edi = edi;

loc_00110550: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    eax = MEM32(ecx + 8);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00110561; /* je: equal / zero */

loc_0011055C: ;
    MEM32(edx + 8) = eax;
    goto loc_00110564;

loc_00110561: ;
    MEM32(esi + 0x64) = eax;

loc_00110564: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110573; /* je: equal / zero */

loc_0011056B: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    goto loc_00110579;

loc_00110573: ;
    eax = MEM32(ecx + 4);
    MEM32(esi + 0x68) = eax;

loc_00110579: ;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = ebx;
    MEM32(esi + 0x60) = MEM32(esi + 0x60) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00110588u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110586u); } /* indirect call */
    }

loc_00110588: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00110550; /* jne: not equal / not zero */

loc_0011058E: ;
    POP32(esp, edi);

loc_0011058F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001105A0
 * Original: 0x001105A0 - 0x001105B8 (24 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001105A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001105A0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x64);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001105B6; /* je: equal / zero */

loc_001105A8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001105AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001105ACu); } /* indirect call */
    }

loc_001105AF: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001105A8; /* jne: not equal / not zero */

loc_001105B6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001105C0
 * Original: 0x001105C0 - 0x001105D8 (24 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001105C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001105C0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x64);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001105D6; /* je: equal / zero */

loc_001105C8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001105CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001105CCu); } /* indirect call */
    }

loc_001105CF: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001105C8; /* jne: not equal / not zero */

loc_001105D6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001105E0
 * Original: 0x001105E0 - 0x0011061B (59 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001105E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001105E0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x64);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011060A; /* je: equal / zero */

loc_001105E9: ;
    edi = MEM32(esp + 0xC);
    /* nop */

loc_001105F0: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110603; /* je: equal / zero */

loc_001105F7: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001105FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001105FCu); } /* indirect call */
    }

loc_001105FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110614; /* je: equal / zero */

loc_00110603: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001105F0; /* jne: not equal / not zero */

loc_0011060A: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110614: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110620
 * Original: 0x00110620 - 0x0011064F (47 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110620: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x68);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011064B; /* je: equal / zero */

loc_00110628: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    /* nop */

loc_00110630: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110643; /* je: equal / zero */

loc_00110637: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0011063Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011063Cu); } /* indirect call */
    }

loc_0011063F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011064A; /* je: equal / zero */

loc_00110643: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110630; /* jne: not equal / not zero */

loc_0011064A: ;
    POP32(esp, edi);

loc_0011064B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110650
 * Original: 0x00110650 - 0x0011068D (61 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110650: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x64);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x1DFC1C);
    if (CMP_EQ(_fa, _fb)) goto loc_00110682; /* je: equal / zero */

loc_0011065F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);

loc_00110664: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011067A; /* je: equal / zero */

loc_0011066B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00110678u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110675u); } /* indirect call */
    }

loc_00110678: ;
    edi = edi | MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0011067A: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110664; /* jne: not equal / not zero */

loc_00110681: ;
    POP32(esp, ebx);

loc_00110682: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00110690
 * Original: 0x00110690 - 0x001106FA (106 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110690: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x50);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001106F1; /* jne: not equal / not zero */

loc_0011069F: ;
    ecx = MEM32(esi + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001106AA; /* jne: not equal / not zero */

loc_001106A6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001106AD;

loc_001106AA: ;
    ecx = MEM32(ecx + 0x10);

loc_001106AD: ;
    edx = MEM32(esi + 0x30);
    MEM32(esp + 4) = edx;
    edx = esp + 4;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x001106E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001106DFu); } /* indirect call */
    }

loc_001106E2: ;
    eax = 1;
    MEM32(esi + 0x50) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001106F1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110700
 * Original: 0x00110700 - 0x0011076E (110 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110700: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110765; /* jne: not equal / not zero */

loc_0011070F: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011071A; /* jne: not equal / not zero */

loc_00110716: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0011071D;

loc_0011071A: ;
    ecx = MEM32(eax + 0x10);

loc_0011071D: ;
    eax = MEM32(esi + 0x30);
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    MEM32(esp + 8) = 7;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x00110756u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110753u); } /* indirect call */
    }

loc_00110756: ;
    eax = 1;
    MEM32(esi + 0x50) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00110765: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110770
 * Original: 0x00110770 - 0x00110878 (264 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00110770: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_001107D6; /* ja: above (unsigned >) */

loc_0011077F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x110878); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00110786u) goto loc_00110786;
    if (_jt == 0x001107E0u) goto loc_001107E0;
    if (_jt == 0x001107EEu) goto loc_001107EE;
    if (_jt == 0x00110801u) goto loc_00110801;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00110786: ;
    eax = MEM32(esi + 0x6C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x50) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0011079A; /* jne: not equal / not zero */

loc_00110796: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0011079D;

loc_0011079A: ;
    ecx = MEM32(eax + 0x10);

loc_0011079D: ;
    eax = MEM32(esi + 0x30);
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    MEM32(esp + 0xC) = 1;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = edi;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001107D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001107D3u); } /* indirect call */
    }

loc_001107D6: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001107E0: ;
    eax = MEM32(esi + 0x50);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001107D6; /* je: equal / zero */

loc_001107E9: ;
    MEM32(esi + 0x50) = edi;
    goto loc_00110824;

loc_001107EE: ;
    eax = MEM32(esi + 0x48);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001107D6; /* je: equal / zero */

loc_001107F7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x001107FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001107FCu); } /* indirect call */
    }

loc_001107FF: ;
    goto loc_00110824;

loc_00110801: ;
    eax = MEM32(esi + 0x50);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001107D6; /* je: equal / zero */

loc_0011080A: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x50) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00110818; /* jne: not equal / not zero */

loc_00110814: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0011081B;

loc_00110818: ;
    eax = MEM32(eax + 0x10);

loc_0011081B: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00110824u); RECOMP_ABI_CALL(0x0010FAD0u, sub_0010FAD0); /* call 0x0010FAD0 */

loc_00110824: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011082F; /* jne: not equal / not zero */

loc_0011082B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00110832;

loc_0011082F: ;
    ecx = MEM32(eax + 0x10);

loc_00110832: ;
    eax = MEM32(esi + 0x30);
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    MEM32(esp + 0xC) = 1;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = edi;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0011086Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110868u); } /* indirect call */
    }

loc_0011086B: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110890
 * Original: 0x00110890 - 0x001108B9 (41 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110890: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = MEM32(esi);
    ebx = MEM32(esi + 0x48);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x001108A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011089Fu); } /* indirect call */
    }

loc_001108A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001108A9; /* jne: not equal / not zero */

loc_001108A6: ;
    MEM32(esi + 0x48) = edi;

loc_001108A9: ;
    ecx = MEM32(esi + 0x48);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001108C0
 * Original: 0x001108C0 - 0x00110980 (192 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001108C0(void)
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

loc_001108C0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001108D1; /* jne: not equal / not zero */

loc_001108CD: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001108D4;

loc_001108D1: ;
    ecx = MEM32(eax + 0x10);

loc_001108D4: ;
    eax = MEM32(ecx);
    edx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x001108DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001108DBu); } /* indirect call */
    }

loc_001108DE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(esp + 4) = eax;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D0)); /* fadd dword ptr [0x1c91d0] */
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    MEM32(esp + 8) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    eax = MEM32(esp + 0x38);
    ecx = eax;
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    fp_push(MEMF(esp + 4)); /* fld float */
    MEM32(ecx) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D0)); /* fadd dword ptr [0x1c91d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 8)); /* fld float */
    MEM32(ecx + 4) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(ecx + 8) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 0xC) = edx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00110980
 * Original: 0x00110980 - 0x00110990 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110980: ;
    _fa = (uint32_t)(MEM32(ecx + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x58), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011098D; /* je: equal / zero */

loc_00110986: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x54) = eax;

loc_0011098D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110990
 * Original: 0x00110990 - 0x001109B2 (34 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00110990: ;
    eax = ecx;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001109AF; /* je: equal / zero */

loc_00110998: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(eax + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001109AF; /* je: equal / zero */

loc_001109A6: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0010F8C0(); return; /* tail jmp 0x0010F8C0 */

loc_001109AF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001109C0
 * Original: 0x001109C0 - 0x001109CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001109C0(void)
{

loc_001109C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001109D0
 * Original: 0x001109D0 - 0x00110A15 (69 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001109D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001109D0: ;
    eax = ecx;
    ecx = MEM32(eax + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110A10; /* je: equal / zero */

loc_001109DA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110A10; /* je: equal / zero */

loc_001109DF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110A10; /* jne: not equal / not zero */

loc_001109E4: ;
    _fa = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x44), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001109F1; /* je: equal / zero */

loc_001109EA: ;
    ecx = MEM32(eax + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110A10; /* je: equal / zero */

loc_001109F1: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110A08; /* je: equal / zero */

loc_001109F9: ;
    SET_LO8(ecx, MEM8(ecx + 4));
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x28), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00110A10; /* je: equal / zero */

loc_00110A08: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00110A10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110A20
 * Original: 0x00110A20 - 0x00110A95 (117 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110A20: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = ecx;
    ecx = esi + 0x30;
    if (CMP_NE(_fa, _fb)) goto loc_00110A36; /* jne: not equal / not zero */

loc_00110A31: ;
    eax = MEM32(0x1CF4A0);

loc_00110A36: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00110A3Cu); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_00110A3C: ;
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x28) = 0xFFFFFFFFu;
    eax = MEM32(edx);
    ecx = esi + 0xC;
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    eax = MEM32(edx + 8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(edx + 0xC);
    eax = 1;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0x6C) = edi;
    MEM32(esi + 0x58) = edi;
    MEM32(esi + 0x5C) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x24) = 0x3F800000;
    MEM32(esi + 0x54) = eax;
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00110AA0
 * Original: 0x00110AA0 - 0x00110AE8 (72 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110AA0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00110ABBu); RECOMP_ABI_CALL(0x00037EF0u, sub_00037EF0); /* call 0x00037EF0 */

loc_00110ABB: ;
    ecx = MEM32(esp + 0x20);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00110AC9u); RECOMP_ABI_CALL(0x00037C80u, sub_00037C80); /* call 0x00037C80 */

loc_00110AC9: ;
    edx = MEM32(esi);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00110AD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110AD2u); } /* indirect call */
    }

loc_00110AD5: ;
    edx = MEM32(esi);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00110AE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110ADEu); } /* indirect call */
    }

loc_00110AE1: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110AF0
 * Original: 0x00110AF0 - 0x00110B54 (100 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110AF0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = edi;
    ecx = esi + 0x30;
    MEM32(esi) = 0x1C4D58;
    MEM32(esi + 0x20) = edi;
    PUSH32(esp, 0x00110B10u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00110B10: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = edi;
    MEM32(esp + 0x10) = 0xBF800000u;
    MEM32(esp + 0x14) = 0xBF800000u;
    MEM32(esp + 0x18) = 0x40000000;
    MEM32(esp + 0x1C) = 0x40000000;
    PUSH32(esp, 0x00110B4Au); RECOMP_ABI_CALL(0x00110A20u, sub_00110A20); /* call 0x00110A20 */

loc_00110B4A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110B60
 * Original: 0x00110B60 - 0x00110B9E (62 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110B60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110B60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = edi;
    ecx = esi + 0x30;
    MEM32(esi) = 0x1C4D58;
    MEM32(esi + 0x20) = edi;
    PUSH32(esp, 0x00110B7Du); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00110B7D: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = edi;
    PUSH32(esp, 0x00110B97u); RECOMP_ABI_CALL(0x00110A20u, sub_00110A20); /* call 0x00110A20 */

loc_00110B97: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00110BA0
 * Original: 0x00110BA0 - 0x00110BD3 (51 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110BA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C4D58;
    PUSH32(esp, 0x00110BAEu); RECOMP_ABI_CALL(0x00110540u, sub_00110540); /* call 0x00110540 */

loc_00110BAE: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110BBAu); RECOMP_ABI_CALL(0x000EBB10u, sub_000EBB10); /* call 0x000EBB10 */

loc_00110BBA: ;
    MEM32(esi + 0x3C) = 0;
    esi = MEM32(esi + 0x30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110BD1; /* je: equal / zero */

loc_00110BC8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110BCEu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00110BCE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00110BD1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00110BE0
 * Original: 0x00110BE0 - 0x00110C27 (71 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110BE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C4D58;
    PUSH32(esp, 0x00110BEEu); RECOMP_ABI_CALL(0x00110540u, sub_00110540); /* call 0x00110540 */

loc_00110BEE: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110BFAu); RECOMP_ABI_CALL(0x000EBB10u, sub_000EBB10); /* call 0x000EBB10 */

loc_00110BFA: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x3C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00110C11; /* je: equal / zero */

loc_00110C08: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00110C0Eu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00110C0E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00110C11: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00110C21; /* je: equal / zero */

loc_00110C18: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110C1Eu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00110C1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00110C21: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110C30
 * Original: 0x00110C30 - 0x00110C7B (75 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110C30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110C30: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00110C3Bu); RECOMP_ABI_CALL(0x00110470u, sub_00110470); /* call 0x00110470 */

loc_00110C3B: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(esi + 0x70);
    MEM32(esp + 4) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 4;
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x00110C6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110C6Cu); } /* indirect call */
    }

loc_00110C6F: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110C80
 * Original: 0x00110C80 - 0x00110CCF (79 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110C80: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00110C8Bu); RECOMP_ABI_CALL(0x00110470u, sub_00110470); /* call 0x00110470 */

loc_00110C8B: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(esi + 0x70);
    MEM32(esp + 4) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 4;
    MEM32(esp + 8) = 7;
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x00110CC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110CC0u); } /* indirect call */
    }

loc_00110CC3: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110CD0
 * Original: 0x00110CD0 - 0x00110CEF (31 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110CD0(void)
{

loc_00110CD0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x30) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x38) = eax;
    MEM32(ecx + 0x3C) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00110CF0
 * Original: 0x00110CF0 - 0x00110D05 (21 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110CF0(void)
{

loc_00110CF0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x48) = edx;
    edx = MEM32(eax);
    MEM32(ecx + 0x4C) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00110D10
 * Original: 0x00110D10 - 0x00110D7F (111 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110D10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    eax = esi + 0x14;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    PUSH32(esp, 0x3F800000);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    MEM32(eax + 0xC) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x1C;
    MEM32(esi + 0x24) = edi;
    PUSH32(esp, 0x00110D53u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00110D53: ;
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x4C) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x2C) = edx;
    MEM32(esi + 0x34) = 0x3F800000;
    MEM32(esi + 0x38) = 0x3F800000;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110D80
 * Original: 0x00110D80 - 0x00110DBE (62 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110D80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110D9D; /* je: equal / zero */

loc_00110D8A: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110D9D; /* je: equal / zero */

loc_00110D91: ;
    ecx = MEM32(0x1DE460);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00110D9Du); RECOMP_ABI_CALL(0x000ECFB0u, sub_000ECFB0); /* call 0x000ECFB0 */

loc_00110D9D: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110DB3; /* je: equal / zero */

loc_00110DA5: ;
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x28) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00110DB3: ;
    MEM32(esi + 0x24) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00110DC0
 * Original: 0x00110DC0 - 0x00110E1E (94 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110DC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110DC0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x24);
    eax = MEM32(eax + 8);
    edx = MEM32(eax);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esp) = edx;
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x34) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(ecx + 0x38) = edx;
    MEM32(ecx + 0x3C) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110E20
 * Original: 0x00110E20 - 0x00110E49 (41 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110E20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00110E30u); RECOMP_ABI_CALL(0x00108220u, sub_00108220); /* call 0x00108220 */

loc_00110E30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110E38; /* jne: not equal / not zero */

loc_00110E34: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110E38: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00110E40u); RECOMP_ABI_CALL(0x00110DC0u, sub_00110DC0); /* call 0x00110DC0 */

loc_00110E40: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110E50
 * Original: 0x00110E50 - 0x00110EEC (156 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110E50(void)
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

loc_00110E50: ;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE830)); /* fmul dword ptr [0x1ae830] */
    PUSH32(esp, 0x00110E61u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00110E61: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM8(esi + 0x2F) = LO8(eax);
    eax = MEM32(esi + 0x58);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110EA1; /* je: equal / zero */

loc_00110E71: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x50)); /* fdiv dword ptr [esi + 0x50] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x5C)); /* fadd dword ptr [esi + 0x5c] */
    MEMF(esi + 0x5C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00110ECD; /* jne: not equal / not zero */

loc_00110E87: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x5C) = 0x3F800000;
    MEM32(esi + 0x60) = ecx;
    ecx = MEM32(0x1DFC24);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00110EA1: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x54)); /* fdiv dword ptr [esi + 0x54] */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x5C) - fp_top()); /* fsubr dword ptr [esi + 0x5c] */
    MEMF(esi + 0x5C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00110ECD; /* jp: parity */

loc_00110EB7: ;
    MEM32(esi + 0x5C) = ecx;
    MEM32(esi + 0x60) = ecx;

loc_00110EBD: ;
    edx = MEM32(0x1DFC24);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00110ECD: ;
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0x60) = 1;
    _fa = (uint32_t)(MEM32(eax + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x54), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110EBD; /* je: equal / zero */

loc_00110EDC: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x1CF4AC);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00110EF0
 * Original: 0x00110EF0 - 0x00110F3B (75 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110EF0(void)
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

loc_00110EF0: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x10)); /* fmul dword ptr [edx + 0x10] */
    MEMF(edx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00110F1C; /* jp: parity */

loc_00110F0D: ;
    MEM32(edx + 0x10) = 0;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00110F1C: ;
    fp_push(MEMF(edx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00110F33; /* jne: not equal / not zero */

loc_00110F2C: ;
    MEM32(edx + 0x10) = 0x3F800000;

loc_00110F33: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00110F40
 * Original: 0x00110F40 - 0x00110FB2 (114 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110F40(void)
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

loc_00110F40: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(ecx + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x14)); /* fdiv dword ptr [ecx + 0x14] */
    edx = MEM32(eax + 0x54);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110F7A; /* je: equal / zero */

loc_00110F51: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x18)); /* fadd dword ptr [ecx + 0x18] */
    MEMF(ecx + 0x18) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00110FA3; /* jne: not equal / not zero */

loc_00110F64: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18) = 0x3F800000;
    ecx = MEM32(0x1DFC24);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_00110F7A: ;
    fp_top() = RECOMP_FP_PC(MEMF(ecx + 0x18) - fp_top()); /* fsubr dword ptr [ecx + 0x18] */
    MEMF(ecx + 0x18) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00110FA3; /* jp: parity */

loc_00110F8D: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18) = 0;
    edx = MEM32(0x1DFC24);
    MEM32(eax) = edx;
    esp += 12; return; /* ret 8 */

loc_00110FA3: ;
    ecx = MEM32(0x1CF4AC);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00110FC0
 * Original: 0x00110FC0 - 0x00111154 (404 bytes, 148 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110FC0(void)
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

loc_00110FC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00110FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110FCAu); } /* indirect call */
    }

loc_00110FCD: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x00110FD6u); RECOMP_ABI_CALL(0x0010F420u, sub_0010F420); /* call 0x0010F420 */

loc_00110FD6: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110FE7; /* jne: not equal / not zero */

loc_00110FDC: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00110FE7: ;
    esi = MEM32(esi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110FF5; /* jne: not equal / not zero */

loc_00110FEE: ;
    esi = ecx;
    goto loc_00111092;

loc_00110FF5: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111044; /* je: equal / zero */

loc_00110FFC: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00111090; /* jp: parity */

loc_00111012: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111090; /* je: equal / zero */

loc_00111016: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91d0] */
    esi = MEM32(esi + 4);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00111035; /* jp: parity */

loc_00111026: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111035; /* je: equal / zero */

loc_0011102D: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x1C)); /* fadd dword ptr [edi + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */

loc_00111035: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00111012; /* jnp: not parity */

loc_00111042: ;
    goto loc_00111090;

loc_00111044: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91D4)); /* fmul dword ptr [0x1c91d4] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF32C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1af32c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00111090; /* jne: not equal / not zero */

loc_0011105A: ;
    /* nop */

loc_00111060: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111090; /* je: equal / zero */

loc_00111064: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF32C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1af32c] */
    esi = MEM32(esi + 4);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00111083; /* jne: not equal / not zero */

loc_00111074: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111083; /* je: equal / zero */

loc_0011107B: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x1C)); /* fadd dword ptr [edi + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */

loc_00111083: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF32C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1af32c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00111060; /* je: equal / zero */

loc_00111090: ;
    fp_pop(); /* fstp st(0) */

loc_00111092: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_001110FB; /* je: equal / zero */

loc_0011109E: ;
    MEM32(esp + 0xC) = 0x3F800000;

loc_001110A6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011114B; /* je: equal / zero */

loc_001110AE: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001110DE; /* je: equal / zero */

loc_001110B5: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    edx = MEM32(esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x1C)); /* fadd dword ptr [edi + 0x1c] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0xC) - fp_top()); /* fsubr dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xC);
    fp_push(MEMF(esi + 0xC)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001110D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001110D3u); } /* indirect call */
    }

loc_001110D6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001110DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001110DBu); } /* indirect call */
    }

loc_001110DE: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esi = MEM32(esi + 8);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF32C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af32c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001110A6; /* je: equal / zero */

loc_001110F2: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001110FB: ;
    MEM32(esp + 0xC) = 0xBF800000u;

loc_00111103: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011114B; /* je: equal / zero */

loc_00111107: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111137; /* je: equal / zero */

loc_0011110E: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    eax = MEM32(esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x1C)); /* fadd dword ptr [edi + 0x1c] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    ecx = MEM32(esp + 0x10);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0011112Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011112Cu); } /* indirect call */
    }

loc_0011112F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00111137u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00111134u); } /* indirect call */
    }

loc_00111137: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esi = MEM32(esi + 8);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00111103; /* jnp: not parity */

loc_0011114B: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_00111160
 * Original: 0x00111160 - 0x001112DD (381 bytes, 113 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111160(void)
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

loc_00111160: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x4C);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00111189; /* jne: not equal / not zero */

loc_00111170: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esp + 0x10);
    MEM32(edx) = ecx;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00111189: ;
    fp_push(MEMF(esi + 0x54)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x50)); /* fdiv dword ptr [esi + 0x50] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF36C)); /* fmul dword ptr [0x1af36c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001111A4u); RECOMP_ABI_CALL(0x000CDDF0u, sub_000CDDF0); /* call 0x000CDDF0 */

loc_001111A4: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) - fp_top()); /* fsubr dword ptr [0x1c91d0] */
    eax = ZX8(MEM8(esi + 0x27));
    ecx = ZX8(MEM8(esi + 0x2F));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0xC)); /* fiadd dword ptr [esp + 0xc] */
    PUSH32(esp, 0x001111CEu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_001111CE: ;
    edi = MEM32(esp + 0x14);
    MEM8(edi + 3) = LO8(eax);
    eax = ZX8(MEM8(esi + 0x26));
    edx = ZX8(MEM8(esi + 0x2E));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0xC)); /* fiadd dword ptr [esp + 0xc] */
    PUSH32(esp, 0x001111F6u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_001111F6: ;
    MEM8(edi + 2) = LO8(eax);
    eax = ZX8(MEM8(esi + 0x25));
    ecx = ZX8(MEM8(esi + 0x2D));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0xC)); /* fiadd dword ptr [esp + 0xc] */
    PUSH32(esp, 0x0011121Au); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0011121A: ;
    MEM8(edi + 1) = LO8(eax);
    eax = ZX8(MEM8(esi + 0x24));
    edx = ZX8(MEM8(esi + 0x2C));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0xC)); /* fiadd dword ptr [esp + 0xc] */
    PUSH32(esp, 0x0011123Eu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0011123E: ;
    MEM8(edi) = LO8(eax);
    eax = ZX8(MEM8(esi + 0x2B));
    ecx = ZX8(MEM8(esi + 0x33));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0xC)); /* fiadd dword ptr [esp + 0xc] */
    PUSH32(esp, 0x00111261u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00111261: ;
    edi = MEM32(esp + 0x18);
    MEM8(edi + 3) = LO8(eax);
    eax = ZX8(MEM8(esi + 0x2A));
    edx = ZX8(MEM8(esi + 0x32));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x18)); /* fiadd dword ptr [esp + 0x18] */
    PUSH32(esp, 0x00111289u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00111289: ;
    MEM8(edi + 2) = LO8(eax);
    eax = ZX8(MEM8(esi + 0x29));
    ecx = ZX8(MEM8(esi + 0x31));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x18)); /* fiadd dword ptr [esp + 0x18] */
    PUSH32(esp, 0x001112ADu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_001112AD: ;
    MEM8(edi + 1) = LO8(eax);
    eax = ZX8(MEM8(esi + 0x28));
    edx = ZX8(MEM8(esi + 0x30));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x18)); /* fiadd dword ptr [esp + 0x18] */
    PUSH32(esp, 0x001112D1u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_001112D1: ;
    fp_pop(); /* fstp st(0) */
    MEM8(edi) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001112E0
 * Original: 0x001112E0 - 0x0011131E (62 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001112E0(void)
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

loc_001112E0: ;
    eax = MEM32(ecx + 0x4C);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011130F; /* je: equal / zero */

loc_001112EA: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = ecx + 0x54;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x0011130Cu); RECOMP_ABI_CALL(0x0003FAA0u, sub_0003FAA0); /* call 0x0003FAA0 */

loc_0011130C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011130F: ;
    ecx = MEM32(0x1DFC24);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00111320
 * Original: 0x00111320 - 0x00111382 (98 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111320: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00111330; /* jne: not equal / not zero */

loc_0011132C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00111349;

loc_00111330: ;
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00111347u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00111347: ;
    edi = eax;

loc_00111349: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111363; /* je: equal / zero */

loc_00111350: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111363; /* je: equal / zero */

loc_00111357: ;
    ecx = MEM32(0x1DE460);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00111363u); RECOMP_ABI_CALL(0x000ECFB0u, sub_000ECFB0); /* call 0x000ECFB0 */

loc_00111363: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111376; /* je: equal / zero */

loc_00111367: ;
    MEM32(esi + 0x24) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x28) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00111376: ;
    POP32(esp, edi);
    MEM32(esi + 0x24) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111390
 * Original: 0x00111390 - 0x001113C7 (55 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111390: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = 1;
    MEM32(esi) = 0x1B2F2C;
    PUSH32(esp, 0x001113B5u); RECOMP_ABI_CALL(0x00110D10u, sub_00110D10); /* call 0x00110D10 */

loc_001113B5: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001113C1u); RECOMP_ABI_CALL(0x00111320u, sub_00111320); /* call 0x00111320 */

loc_001113C1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001113D0
 * Original: 0x001113D0 - 0x0011166E (670 bytes, 207 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001113D0(void)
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

loc_001113D0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00111665; /* je: equal / zero */

loc_001113E3: ;
    ebx = MEM32(esp + 0x4C);
    SET_LO8(eax, MEM8(ebx + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00111665; /* jbe: below or equal (unsigned <=) */

loc_001113F2: ;
    PUSH32(esp, 0x001113F7u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_001113F7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001113FEu); RECOMP_ABI_CALL(0x0001D270u, sub_0001D270); /* call 0x0001D270 */

loc_001113FE: ;
    eax = MEM32(0x1DE3E8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011141B; /* je: equal / zero */

loc_0011140A: ;
    PUSH32(esp, 0);
    MEM32(0x1DE3E8) = 0;
    PUSH32(esp, 0x0011141Bu); RECOMP_ABI_CALL(0x001931B0u, sub_001931B0); /* call 0x001931B0 */

loc_0011141B: ;
    edx = MEM32(0x1DC428);
    eax = 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ecx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00111447; /* je: equal / zero */

loc_0011142F: ;
    edx = MEM32(0x1A50F0);
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1DC428) = eax;
    MEM32(0x1A50F0) = edx;
    MEM32(0x1A2EA0) = eax;

loc_00111447: ;
    _fa = (uint32_t)(MEM32(0x1DC368)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC368), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111467; /* je: equal / zero */

loc_0011144F: ;
    edx = MEM32(0x1A50F0);
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1DC368) = eax;
    MEM32(0x1A50F0) = edx;
    MEM32(0x1A2EA4) = eax;

loc_00111467: ;
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00111473u); RECOMP_ABI_CALL(0x000E6A00u, sub_000E6A00); /* call 0x000E6A00 */

loc_00111473: ;
    fp_push(MEMF(esi + 0x44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    edi = MEM32(esp + 0x4C);
    fp_push(MEMF(esi + 0x40)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00111557; /* jp: parity */

loc_00111499: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00111515; /* jnp: not parity */

loc_0011149E: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x40)); /* fsub dword ptr [esi + 0x40] */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x54;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x40)); /* fsub dword ptr [esi + 0x40] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001114D4u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001114D4: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(esi + 0x38);
    eax = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(eax + 8) = ecx;
    ecx = edi;
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0x00111515u); RECOMP_ABI_CALL(0x00112200u, sub_00112200); /* call 0x00112200 */

loc_00111515: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(esi + 0x38);
    edx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esi + 8);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;
    ecx = edi;
    PUSH32(esp, 0x00111552u); RECOMP_ABI_CALL(0x00112200u, sub_00112200); /* call 0x00112200 */

loc_00111552: ;
    goto loc_0011163C;

loc_00111557: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001115D3; /* jnp: not parity */

loc_0011155C: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x40)); /* fsub dword ptr [esi + 0x40] */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x54;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x40)); /* fsub dword ptr [esi + 0x40] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00111592u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00111592: ;
    edx = MEM32(esi + 0x3C);
    eax = MEM32(esi + 0x38);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = edi;
    PUSH32(esp, 0x001115D3u); RECOMP_ABI_CALL(0x00112200u, sub_00112200); /* call 0x00112200 */

loc_001115D3: ;
    ecx = MEM32(esi + 0x1C);
    fp_push(MEMF(esi + 0x18)); /* fld float */
    edx = MEM32(esi + 0x20);
    eax = MEM32(esi + 0x48);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(esi + 0x4C);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esi + 0x34);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esi + 0x30);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esi + 0x38);
    PUSH32(esp, 0x3F800000);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esi + 0x44);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esi + 0x3C);
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esi + 0x14);
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, ebx);
    edx = esp + 0x28;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x28) = 0x3F800000;
    PUSH32(esp, 0x0011163Cu); RECOMP_ABI_CALL(0x001122C0u, sub_001122C0); /* call 0x001122C0 */

loc_0011163C: ;
    ecx = MEM32(0x1DE3E8);
    eax = 0x901;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111656; /* je: equal / zero */

loc_0011164B: ;
    PUSH32(esp, eax);
    MEM32(0x1DE3E8) = eax;
    PUSH32(esp, 0x00111656u); RECOMP_ABI_CALL(0x001931B0u, sub_001931B0); /* call 0x001931B0 */

loc_00111656: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011165Du); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_0011165D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00111665u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00111665: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00111670
 * Original: 0x00111670 - 0x001116EC (124 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111670: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = edi;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0xBF800000u;
    MEM32(esp + 0x10) = 0xBF800000u;
    MEM32(esp + 0x14) = 0x40000000;
    MEM32(esp + 0x18) = 0x40000000;
    MEM32(esi + 0xC) = 1;
    MEM32(esi + 0x10) = edi;
    MEM32(esi) = 0x1B2F2C;
    PUSH32(esp, 0x001116B9u); RECOMP_ABI_CALL(0x00110D10u, sub_00110D10); /* call 0x00110D10 */

loc_001116B9: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001116C5u); RECOMP_ABI_CALL(0x00111320u, sub_00111320); /* call 0x00111320 */

loc_001116C5: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 0x58) = edi;
    MEM32(esi + 0x5C) = edi;
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x54) = eax;
    POP32(esp, edi);
    MEM32(esi) = 0x1C4DD8;
    MEM32(esi + 0x50) = edx;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001116F0
 * Original: 0x001116F0 - 0x0011176B (123 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001116F0(void)
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

loc_001116F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x50);
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x50), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00111707; /* jne: not equal / not zero */

loc_001116FD: ;
    ecx = MEM32(edi + 0x24);
    eax = edi + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_0011171F;

loc_00111707: ;
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00111717; /* jne: not equal / not zero */

loc_0011170D: ;
    eax = MEM32(edi + 0x24);
    edx = edi + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_0011171F;

loc_00111717: ;
    edx = MEM32(edi + 0x24);
    ecx = edi + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_0011171F: ;
    esi = MEM32(esp + 0x14);
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011172Bu); RECOMP_ABI_CALL(0x001113D0u, sub_001113D0); /* call 0x001113D0 */

loc_0011172B: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    eax = 1;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x5C)); /* fmul dword ptr [edi + 0x5c] */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x5C)); /* fmul dword ptr [edi + 0x5c] */
    POP32(esp, edi);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 8) - fp_top()); /* fsubr dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0xC) - fp_top()); /* fsubr dword ptr [esi + 0xc] */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00111770
 * Original: 0x00111770 - 0x00111877 (263 bytes, 91 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111770: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00111869; /* je: equal / zero */

loc_00111783: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111869; /* je: equal / zero */

loc_0011178C: ;
    PUSH32(esp, 0x00111791u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00111791: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00111798u); RECOMP_ABI_CALL(0x0001D270u, sub_0001D270); /* call 0x0001D270 */

loc_00111798: ;
    ecx = MEM32(esi + 0x40);
    eax = MEM32(0x1DE46C);
    edx = MEM32(eax + ecx * 4 + 0x24);
    MEM32(eax) = edx;
    eax = MEM32(0x1DE46C);
    ecx = MEM32(esi + 0x44);
    edi = MEM32(eax + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x20) = ecx;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001117C8u); RECOMP_ABI_CALL(0x00111160u, sub_00111160); /* call 0x00111160 */

loc_001117C8: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x001117E2u); RECOMP_ABI_CALL(0x00112440u, sub_00112440); /* call 0x00112440 */

loc_001117E2: ;
    eax = MEM32(esi + 0x60);
    ecx = MEM32(esi + 0x38);
    edx = MEM32(esi + 0x48);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi + 0x14;
    eax = MEM32(ecx);
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;
    edx = MEM32(esi + 0x34);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00111824u); RECOMP_ABI_CALL(0x001124A0u, sub_001124A0); /* call 0x001124A0 */

loc_00111824: ;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(eax);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 0xC) = ecx;
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00111851u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011184Eu); } /* indirect call */
    }

loc_00111851: ;
    edx = MEM32(0x1DE46C);
    PUSH32(esp, 0);
    MEM32(edx + 0x20) = edi;
    PUSH32(esp, 0x00111861u); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_00111861: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00111869u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00111869: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111880
 * Original: 0x00111880 - 0x00111B4A (714 bytes, 224 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111880(void)
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

loc_00111880: ;
    _fb = (uint32_t)(0x14C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00111B38; /* je: equal / zero */

loc_00111897: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B38; /* je: equal / zero */

loc_001118A0: ;
    PUSH32(esp, 0x001118A5u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_001118A5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001118ACu); RECOMP_ABI_CALL(0x0001D270u, sub_0001D270); /* call 0x0001D270 */

loc_001118AC: ;
    ecx = MEM32(esi + 0x40);
    eax = MEM32(0x1DE46C);
    edx = MEM32(eax + ecx * 4 + 0x24);
    MEM32(eax) = edx;
    edi = esi + 0x14;
    eax = edi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x18;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x160);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0x001118EEu); RECOMP_ABI_CALL(0x00037AA0u, sub_00037AA0); /* call 0x00037AA0 */

loc_001118EE: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011190D; /* jp: parity */

loc_001118FF: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_0011190D: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011192C; /* jp: parity */

loc_0011191E: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */

loc_0011192C: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    PUSH32(esp, 0x100);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x28)); /* fdiv dword ptr [esp + 0x28] */
    ecx = esp + 0x60;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00111948u); RECOMP_ABI_CALL(0x00100DA0u, sub_00100DA0); /* call 0x00100DA0 */

loc_00111948: ;
    edx = MEM32(esi + 0x34);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00111955u); RECOMP_ABI_CALL(0x001025F0u, sub_001025F0); /* call 0x001025F0 */

loc_00111955: ;
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    ebx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x38)); /* fmul dword ptr [esi + 0x38] */
    eax = MEM32(0x1DE46C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x40;
    PUSH32(esp, edx);
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x00111983u); RECOMP_ABI_CALL(0x00111160u, sub_00111160); /* call 0x00111160 */

loc_00111983: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x16C);
    PUSH32(esp, 0x0011199Eu); RECOMP_ABI_CALL(0x00112440u, sub_00112440); /* call 0x00112440 */

loc_0011199E: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    edx = MEM32(edi);
    eax = MEM32(edi + 4);
    ecx = MEM32(edi + 8);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(edi + 0xC);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_00111B27; /* jle: less or equal (signed <=) */

loc_001119C5: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00111B29; /* jne: not equal / not zero */

loc_001119D6: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x100);
    eax = esp + 0x60;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x001119EFu); RECOMP_ABI_CALL(0x00100DA0u, sub_00100DA0); /* call 0x00100DA0 */

loc_001119EF: ;
    fp_push(MEMF(0x1C91E0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x2c] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00111A55; /* jp: parity */

loc_00111A03: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x14) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00111A77; /* jge: greater or equal (signed >=) */

loc_00111A09: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00111A55; /* jne: not equal / not zero */

loc_00111A11: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx);
    SET_LO8(eax, MEM8(edx + ebp));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    MEM8(esp + edi + 0x5C) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00111A2E; /* je: equal / zero */

loc_00111A22: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00111A30; /* jne: not equal / not zero */

loc_00111A26: ;
    MEM32(esp + 0x10) = 1;

loc_00111A2E: ;
    ebx = edi;

loc_00111A30: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = MEM32(0x1DE46C);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00111A46u); RECOMP_ABI_CALL(0x000ED310u, sub_000ED310); /* call 0x000ED310 */

loc_00111A46: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00111A03; /* jnp: not parity */

loc_00111A55: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x14) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00111A77; /* jge: greater or equal (signed >=) */

loc_00111A5B: ;
    SET_LO8(eax, MEM8(esp + edi + 0x5B));
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111A77; /* je: equal / zero */

loc_00111A64: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111A77; /* je: equal / zero */

loc_00111A68: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111A77; /* je: equal / zero */

loc_00111A6E: ;
    eax = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00111A77: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(esi + 0x48);
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x58);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x5C);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = esp + 0x80;
    MEM8(esp + edi + 0x80) = 0;
    edi = MEM32(esp + 0x184);
    PUSH32(esp, ecx);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00111ACAu); RECOMP_ABI_CALL(0x001124A0u, sub_001124A0); /* call 0x001124A0 */

loc_00111ACA: ;
    ebx = MEM32(eax);
    edx = MEM32(esi);
    ecx = esp + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 8) = ebx;
    MEM32(ecx + 0xC) = eax;
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00111AF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00111AEEu); } /* indirect call */
    }

loc_00111AF1: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x38) - fp_top()); /* fsubr dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x64)); /* fmul dword ptr [esi + 0x64] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    if (CMP_L(_fas, _fbs)) goto loc_001119C5; /* jl: less (signed <) */

loc_00111B27: ;
    fp_pop(); /* fstp st(0) */

loc_00111B29: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00111B30u); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_00111B30: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00111B38u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00111B38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00111B50
 * Original: 0x00111B50 - 0x00111BE8 (152 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111B50(void)
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

loc_00111B50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x14);
    MEM32(esi + 0x14) = 0xBF800000u;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF32C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af32c] */
    MEM32(esp + 8) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00111B7C; /* jp: parity */

loc_00111B73: ;
    MEM32(esi + 0x14) = 0xBF800000u;
    goto loc_00111B93;

loc_00111B7C: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00111B93; /* jne: not equal / not zero */

loc_00111B8C: ;
    MEM32(esi + 0x14) = 0x3F800000;

loc_00111B93: ;
    eax = MEM32(ecx + 0x24);
    edx = ecx + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00111BA1u); RECOMP_ABI_CALL(0x001113D0u, sub_001113D0); /* call 0x001113D0 */

loc_00111BA1: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x14) = ecx;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF32C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af32c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00111BC8; /* jp: parity */

loc_00111BB8: ;
    MEM32(esi + 0x14) = 0xBF800000u;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00111BC8: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00111BDF; /* jne: not equal / not zero */

loc_00111BD8: ;
    MEM32(esi + 0x14) = 0x3F800000;

loc_00111BDF: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00111BF0
 * Original: 0x00111BF0 - 0x00111C36 (70 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111BF0: ;
    eax = MEM32(ecx + 0x5C);
    edx = MEM32(0x1DE46C);
    MEM32(edx + 0x68) = eax;
    _fa = (uint32_t)(MEM8(ecx + 0x4C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x4C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00111C1C; /* je: equal / zero */

loc_00111C02: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00111C0Cu); RECOMP_ABI_CALL(0x00111880u, sub_00111880); /* call 0x00111880 */

loc_00111C0C: ;
    ecx = MEM32(0x1DE46C);
    MEM32(ecx + 0x68) = 0;
    esp += 8; return; /* ret 4 */

loc_00111C1C: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00111C26u); RECOMP_ABI_CALL(0x00111770u, sub_00111770); /* call 0x00111770 */

loc_00111C26: ;
    ecx = MEM32(0x1DE46C);
    MEM32(ecx + 0x68) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111C40
 * Original: 0x00111C40 - 0x00111D7B (315 bytes, 109 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111C40: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x70);
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_00111C70; /* jbe: below or equal (unsigned <=) */

loc_00111C57: ;
    edi = MEM32(ecx);
    ecx = MEM32(esi + 0x6C);
    ebx = MEM32(ecx);
    ecx = edi;

loc_00111C60: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111D4A; /* je: equal / zero */

loc_00111C68: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00111C60; /* jb: below (unsigned <) */

loc_00111C70: ;
    PUSH32(esp, 0x00111C75u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00111C75: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00111C7Cu); RECOMP_ABI_CALL(0x0001D270u, sub_0001D270); /* call 0x0001D270 */

loc_00111C7C: ;
    ecx = MEM32(esi + 0x40);
    eax = MEM32(0x1DE46C);
    edx = MEM32(eax + ecx * 4 + 0x24);
    MEM32(eax) = edx;
    eax = MEM32(esi + 0x6C);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, 0x1B2A40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00111C9Fu); RECOMP_ABI_CALL(0x0012B3E8u, sub_0012B3E8); /* call 0x0012B3E8 */

loc_00111C9F: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x24);
    edi = MEM32(esp + 0xB0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00111CBDu); RECOMP_ABI_CALL(0x00112440u, sub_00112440); /* call 0x00112440 */

loc_00111CBD: ;
    edx = MEM32(esi + 0x60);
    eax = MEM32(esi + 0x38);
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + 0x14;
    edx = MEM32(eax);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00111CFEu); RECOMP_ABI_CALL(0x001124A0u, sub_001124A0); /* call 0x001124A0 */

loc_00111CFE: ;
    eax = MEM32(esi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(edx + 0xC) = ecx;
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00111D2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00111D27u); } /* indirect call */
    }

loc_00111D2A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00111D31u); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_00111D31: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00111D39u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00111D39: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00111D4A: ;
    eax = edi + eax * 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111C70; /* je: equal / zero */

loc_00111D55: ;
    edx = MEM32(eax + 4);
    eax = MEM32(esp + 0xA0);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x68) = edx;
    PUSH32(esp, 0x00111D6Au); RECOMP_ABI_CALL(0x00111BF0u, sub_00111BF0); /* call 0x00111BF0 */

loc_00111D6A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111D80
 * Original: 0x00111D80 - 0x00111D92 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111D80(void)
{

loc_00111D80: ;
    ecx = MEM32(ecx + 0x84);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00111D8Fu); RECOMP_ABI_CALL(0x000EECD0u, sub_000EECD0); /* call 0x000EECD0 */

loc_00111D8F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111DA0
 * Original: 0x00111DA0 - 0x00111DA5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111DA0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x74)); return; /* indirect tail jmp */

}

/**
 * sub_00111DB0
 * Original: 0x00111DB0 - 0x00111DBB (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111DB0: ;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_00111DC0
 * Original: 0x00111DC0 - 0x00111E6F (175 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111DC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x70) = eax;
    eax = 0x3F800000;
    PUSH32(esp, 0x30);
    MEM32(esi + 0x74) = 0;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x80) = 6;
    PUSH32(esp, 0x00111DF3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00111DF3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111E08; /* je: equal / zero */

loc_00111DFA: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00111E06u); RECOMP_ABI_CALL(0x000EEC10u, sub_000EEC10); /* call 0x000EEC10 */

loc_00111E06: ;
    goto loc_00111E0A;

loc_00111E08: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00111E0A: ;
    PUSH32(esp, 0x94);
    MEM32(esi + 0x84) = eax;
    PUSH32(esp, 0x00111E1Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00111E1A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111E2A; /* je: equal / zero */

loc_00111E21: ;
    ecx = eax;
    PUSH32(esp, 0x00111E28u); RECOMP_ABI_CALL(0x00105770u, sub_00105770); /* call 0x00105770 */

loc_00111E28: ;
    goto loc_00111E2C;

loc_00111E2A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00111E2C: ;
    PUSH32(esp, 0x10);
    MEM32(esi + 0x78) = eax;
    PUSH32(esp, 0x00111E36u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00111E36: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111E60; /* je: equal / zero */

loc_00111E3D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x111DA0;
    MEM32(eax + 4) = esi;
    MEM32(eax) = 0x1C4DF8;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x88) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00111E60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x88) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00111E70
 * Original: 0x00111E70 - 0x00111F6F (255 bytes, 77 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111E70: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00111F64; /* je: equal / zero */

loc_00111E84: ;
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x00111E8Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00111E8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111EA0; /* je: equal / zero */

loc_00111E95: ;
    ecx = eax;
    PUSH32(esp, 0x00111E9Cu); RECOMP_ABI_CALL(0x000FA160u, sub_000FA160); /* call 0x000FA160 */

loc_00111E9C: ;
    esi = eax;
    goto loc_00111EA2;

loc_00111EA0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00111EA2: ;
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x00111ED0u); RECOMP_ABI_CALL(0x000F9E30u, sub_000F9E30); /* call 0x000F9E30 */

loc_00111ED0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111F50; /* je: equal / zero */

loc_00111ED4: ;
    eax = MEM32(esp + 0x44);
    edx = MEM32(eax);
    MEM32(esi + 0x10) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x18) = edx;
    eax = MEM32(esi + 0xC);
    ecx = eax;
    edx = eax;
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x18;
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x1C;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, 0x00111F39u); RECOMP_ABI_CALL(0x00019100u, sub_00019100); /* call 0x00019100 */

loc_00111F39: ;
    ecx = MEM32(ebx + 0x84);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00111F45u); RECOMP_ABI_CALL(0x000F2DC0u, sub_000F2DC0); /* call 0x000F2DC0 */

loc_00111F45: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00111F50: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111F64; /* je: equal / zero */

loc_00111F54: ;
    ecx = esi;
    PUSH32(esp, 0x00111F5Bu); RECOMP_ABI_CALL(0x000FA1E0u, sub_000FA1E0); /* call 0x000FA1E0 */

loc_00111F5B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00111F61u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00111F61: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00111F64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00111F70
 * Original: 0x00111F70 - 0x0011206A (250 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111F70: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00112063; /* ja: above (unsigned >) */

loc_00111F84: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00111F99u); RECOMP_ABI_CALL(0x00037EF0u, sub_00037EF0); /* call 0x00037EF0 */

loc_00111F99: ;
    ecx = MEM32(esp + 0x30);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00111FA7u); RECOMP_ABI_CALL(0x00037C80u, sub_00037C80); /* call 0x00037C80 */

loc_00111FA7: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00111FB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00111FB0u); } /* indirect call */
    }

loc_00111FB3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(esp + 0x14) = 0xBF800000u;
    edx = MEM32(esp + 0x14);
    MEM32(ecx) = edx;
    MEM32(esp + 0x18) = 0xBF800000u;
    eax = MEM32(esp + 0x18);
    MEM32(ecx + 4) = eax;
    MEM32(esp + 0x1C) = 0x40000000;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 8) = edx;
    MEM32(esp + 0x20) = 0x40000000;
    eax = MEM32(esp + 0x20);
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00112000u); RECOMP_ABI_CALL(0x00112740u, sub_00112740); /* call 0x00112740 */

loc_00112000: ;
    edx = MEM32(esi + 0x78);
    eax = MEM32(esi + 0x8C);
    MEM32(edx + 0xC) = eax;
    edx = MEM32(esi + 0x90);
    ecx = MEM32(esi + 0x78);
    MEM32(ecx + 0x10) = edx;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esi + 0x78);
    if (CMP_EQ(_fa, _fb)) goto loc_00112031; /* je: equal / zero */

loc_00112022: ;
    ecx = MEM32(esi + 0x80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1DE580);
    PUSH32(esp, eax);
    goto loc_00112041;

loc_00112031: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(esi + 0x7C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1DE580);
    PUSH32(esp, ecx);

loc_00112041: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00112047u); RECOMP_ABI_CALL(0x000E9C80u, sub_000E9C80); /* call 0x000E9C80 */

loc_00112047: ;
    ecx = MEM32(0x1DE810);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x00112057u); RECOMP_ABI_CALL(0x000EBD60u, sub_000EBD60); /* call 0x000EBD60 */

loc_00112057: ;
    eax = MEM32(esi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00112063u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00112060u); } /* indirect call */
    }

loc_00112063: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00112070
 * Original: 0x00112070 - 0x001120BA (74 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112070: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0011207Du); RECOMP_ABI_CALL(0x00110AF0u, sub_00110AF0); /* call 0x00110AF0 */

loc_0011207D: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi + 0x70) = eax;
    MEM32(esi) = 0x1C4E00;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x88) = eax;
    PUSH32(esp, 0x001120B4u); RECOMP_ABI_CALL(0x00111DC0u, sub_00111DC0); /* call 0x00111DC0 */

loc_001120B4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001120C0
 * Original: 0x001120C0 - 0x00112111 (81 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001120C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001120C0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001120D4u); RECOMP_ABI_CALL(0x00110B60u, sub_00110B60); /* call 0x00110B60 */

loc_001120D4: ;
    edx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x88) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi) = 0x1C4E00;
    PUSH32(esp, 0x0011210Bu); RECOMP_ABI_CALL(0x00111DC0u, sub_00111DC0); /* call 0x00111DC0 */

loc_0011210B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00112120
 * Original: 0x00112120 - 0x001121FA (218 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00112120: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x84);
    MEM32(edi) = 0x1C4E00;
    ecx = MEM32(eax + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112144; /* jne: not equal / not zero */

loc_0011213A: ;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = ebx;
    goto loc_001121A3;

loc_00112144: ;
    MEM32(eax) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    esi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001121A3; /* je: equal / zero */

loc_00112159: ;
    /* nop */

loc_00112160: ;
    ecx = MEM32(edi + 0x84);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011216Cu); RECOMP_ABI_CALL(0x000EEBB0u, sub_000EEBB0); /* call 0x000EEBB0 */

loc_0011216C: ;
    ecx = esi;
    PUSH32(esp, 0x00112173u); RECOMP_ABI_CALL(0x000FA1E0u, sub_000FA1E0); /* call 0x000FA1E0 */

loc_00112173: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112179u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00112179: ;
    eax = MEM32(edi + 0x84);
    ecx = MEM32(eax);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00112196; /* je: equal / zero */

loc_00112190: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;

loc_00112196: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001121A3; /* je: equal / zero */

loc_0011219C: ;
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112160; /* jne: not equal / not zero */

loc_001121A3: ;
    esi = MEM32(edi + 0x84);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001121C3; /* je: equal / zero */

loc_001121AD: ;
    ecx = esi;
    PUSH32(esp, 0x001121B4u); RECOMP_ABI_CALL(0x000EECA0u, sub_000EECA0); /* call 0x000EECA0 */

loc_001121B4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001121BAu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001121BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x84) = ebx;

loc_001121C3: ;
    esi = MEM32(edi + 0x78);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001121DD; /* je: equal / zero */

loc_001121CA: ;
    ecx = esi;
    PUSH32(esp, 0x001121D1u); RECOMP_ABI_CALL(0x00105830u, sub_00105830); /* call 0x00105830 */

loc_001121D1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001121D7u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001121D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x78) = ebx;

loc_001121DD: ;
    eax = MEM32(edi + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001121F0; /* je: equal / zero */

loc_001121E4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001121EAu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001121EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x7C) = ebx;

loc_001121F0: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00110BA0(); return; /* tail jmp 0x00110BA0 */

}

/**
 * sub_00112200
 * Original: 0x00112200 - 0x001122B6 (182 bytes, 56 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112200(void)
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

loc_00112200: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D0)); /* fadd dword ptr [0x1c91d0] */
    esi = ecx;
    eax = MEM32(esp + 0x20);
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEM32(esp + 4) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D0)); /* fadd dword ptr [0x1c91d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    PUSH32(esp, 0x00112274u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00112274: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    MEM8(esp + 0x27) = LO8(eax);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001122AEu); RECOMP_ABI_CALL(0x000E5710u, sub_000E5710); /* call 0x000E5710 */

loc_001122AE: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 44; return; /* ret 40 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001122C0
 * Original: 0x001122C0 - 0x001123F2 (306 bytes, 89 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001122C0(void)
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

loc_001122C0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, esi);
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(0x1DE810);
    fp_push(MEMF(eax + 0x40)); /* fld float */
    esi = MEM32(esp + 0x24);
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) / fp_top()); /* fdivr dword ptr [0x1c91d0] */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x2C);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D0)); /* fadd dword ptr [0x1c91d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D0)); /* fadd dword ptr [0x1c91d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0xC)); /* fmul dword ptr [edi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    MEMF(esi + 0x18) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D0)); /* fadd dword ptr [0x1c91d0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    eax = edx;
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x28) = eax;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    MEM32(esp + 0x24) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    PUSH32(esp, 0x00112395u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00112395: ;
    ecx = MEM32(0x1DE810);
    edx = MEM32(esp + 0x34);
    MEM8(esp + 0x27) = LO8(eax);
    fp_push(MEMF(ecx + 0x40)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x14)); /* fld float */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1C91D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    edx = esp + 0x1C;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001123E7u); RECOMP_ABI_CALL(0x000E59F0u, sub_000E59F0); /* call 0x000E59F0 */

loc_001123E7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00112400
 * Original: 0x00112400 - 0x00112433 (51 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112400(void)
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

loc_00112400: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    PUSH32(esp, 0x0011241Cu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0011241C: ;
    MEM8(esp + 0xB) = LO8(eax);
    eax = MEM32(0x1DE46C);
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00112440
 * Original: 0x00112440 - 0x00112498 (88 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112440(void)
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

loc_00112440: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    PUSH32(esp, esi);
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    PUSH32(esp, 0x0011245Fu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0011245F: ;
    ecx = ZX8(MEM8(esp + 0x13));
    MEM32(esp + 4) = ecx;
    MEM8(esp + 0xF) = LO8(eax);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    PUSH32(esp, 0x0011247Cu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0011247C: ;
    edx = MEM32(esp + 0xC);
    MEM8(esp + 0x13) = LO8(eax);
    eax = MEM32(0x1DE46C);
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001124A0
 * Original: 0x001124A0 - 0x001126EC (588 bytes, 177 insns)
 * Category: game_vtable
 * CC: thiscall, 11 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001124A0(void)
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

loc_001124A0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001124CD; /* je: equal / zero */

loc_001124AF: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001124CD; /* jnp: not parity */

loc_001124C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001124C6u); RECOMP_ABI_CALL(0x001025F0u, sub_001025F0); /* call 0x001025F0 */

loc_001124C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001124D9; /* jne: not equal / not zero */

loc_001124CD: ;
    eax = MEM32(esp + 0x28);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 48; return; /* ret 44 */

loc_001124D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x001124E7u); RECOMP_ABI_CALL(0x00037AA0u, sub_00037AA0); /* call 0x00037AA0 */

loc_001124E7: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    eax = MEM32(0x1DE46C);
    ecx = MEM32(esp + 0x48);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEMF(esp + 0x38) = (float)fp_top(); /* fst */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(0x1DE46C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00112513u); RECOMP_ABI_CALL(0x000ED310u, sub_000ED310); /* call 0x000ED310 */

loc_00112513: ;
    edi = MEM32(esp + 0x4C);
    eax = MEM32(esp + 0x34);
    esi = edi;
    esi = esi & 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    MEM32(esp + 0x34) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00112539; /* jne: not equal / not zero */

loc_00112529: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x10)); /* fdiv dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */

loc_00112539: ;
    ecx = MEM32(esp + 0x48);
    edi = edi & 0xF0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x30 (32-bit) */
    MEM32(esp + 0x4C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00112571; /* jne: not equal / not zero */

loc_0011254C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x14)); /* fdiv dword ptr [esp + 0x14] */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00112576; /* je: equal / zero */

loc_00112563: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00112587;

loc_00112571: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112587; /* jne: not equal / not zero */

loc_00112576: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x30 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112587; /* je: equal / zero */

loc_0011257B: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x50)); /* fdiv dword ptr [esp + 0x50] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */

loc_00112587: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001125D3; /* jne: not equal / not zero */

loc_00112598: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C9210)); /* fmul dword ptr [0x1c9210] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001125CF; /* jne: not equal / not zero */

loc_001125B9: ;
    fp_st1() = RECOMP_FP_PC(fp_top() / fp_st1()); fp_pop(); /* fdivrp st(1) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x4C)); /* fmul dword ptr [esp + 0x4c] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001125D3;

loc_001125CF: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_001125D3: ;
    eax = MEM32(0x1DE46C);
    edx = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x4C);
    MEM32(eax + 0x18) = edx;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(0x1DE46C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001125F7u); RECOMP_ABI_CALL(0x000ED310u, sub_000ED310); /* call 0x000ED310 */

loc_001125F7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x4C);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_00112643; /* ja: above (unsigned >) */

loc_0011260C: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x1126EC); /* switch: 8 entries, 7 targets */
    if (_jt == 0x00112613u) goto loc_00112613;
    if (_jt == 0x00112619u) goto loc_00112619;
    if (_jt == 0x00112635u) goto loc_00112635;
    if (_jt == 0x00112660u) goto loc_00112660;
    if (_jt == 0x00112666u) goto loc_00112666;
    if (_jt == 0x00112682u) goto loc_00112682;
    if (_jt == 0x00112690u) goto loc_00112690;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00112613: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    goto loc_00112649;

loc_00112619: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    goto loc_00112649;

loc_00112635: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x40)); /* fadd dword ptr [esp + 0x40] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    goto loc_00112649;

loc_00112643: ;
    fp_push(MEMF(0x1C91E0)); /* fld float */

loc_00112649: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x30 (32-bit) */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    if (CMP_A(_fa, _fb)) goto loc_00112690; /* ja: above (unsigned >) */

loc_00112652: ;
    edx = ZX8(MEM8(edi + 0x11270C));
    { uint32_t _jt = MEM32(edx * 4 + 0x1126FC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00112660u) goto loc_00112660;
    if (_jt == 0x00112666u) goto loc_00112666;
    if (_jt == 0x00112682u) goto loc_00112682;
    if (_jt == 0x00112690u) goto loc_00112690;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00112660: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    goto loc_00112696;

loc_00112666: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    goto loc_00112696;

loc_00112682: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    goto loc_00112696;

loc_00112690: ;
    fp_push(MEMF(0x1C91E0)); /* fld float */

loc_00112696: ;
    eax = MEM32(0x1DE46C);
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    POP32(esp, edi);
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    POP32(esp, esi);
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001126C3; /* je: equal / zero */

loc_001126B7: ;
    ecx = MEM32(0x1DE46C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001126C3u); RECOMP_ABI_CALL(0x000ED420u, sub_000ED420); /* call 0x000ED420 */

loc_001126C3: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x14);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x20);
    POP32(esp, ebp);
    MEM32(ecx + 0xC) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 48; return; /* ret 44 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00112740
 * Original: 0x00112740 - 0x001128CC (396 bytes, 101 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112740(void)
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

loc_00112740: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D0)); /* fadd dword ptr [0x1c91d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D0)); /* fadd dword ptr [0x1c91d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x1C91D0)); /* fsub dword ptr [0x1c91d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91D4)); /* fmul dword ptr [0x1c91d4] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D0)); /* fadd dword ptr [0x1c91d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001127EF; /* jp: parity */

loc_001127E5: ;
    MEM32(esp) = 0;
    goto loc_00112808;

loc_001127EF: ;
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00112808; /* jne: not equal / not zero */

loc_00112800: ;
    MEM32(esp) = 0x3F800000;

loc_00112808: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00112823; /* jp: parity */

loc_00112819: ;
    MEM32(esp + 0x14) = 0;
    goto loc_0011283C;

loc_00112823: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011283C; /* jne: not equal / not zero */

loc_00112834: ;
    MEM32(esp + 0x14) = 0x3F800000;

loc_0011283C: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp)); /* fsub dword ptr [esp] */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00112886; /* jp: parity */

loc_00112857: ;
    MEM32(esp + 4) = 0;

loc_0011285F: ;
    fp_pop(); /* fstp st(0) */

loc_00112861: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00112899; /* jp: parity */

loc_0011287C: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1C91E0)); /* fld float */
    goto loc_001128AA;

loc_00112886: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011285F; /* jne: not equal / not zero */

loc_00112893: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00112861;

loc_00112899: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001128AA; /* jne: not equal / not zero */

loc_001128A4: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */

loc_001128AA: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEMF(eax + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp);
    MEM32(eax + 0x3C) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x40) = edx;
    MEM32(eax + 0x48) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001128D0
 * Original: 0x001128D0 - 0x001128D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001128D0(void)
{

loc_001128D0: ;
    MEM32(ecx) = 0x1B342C;
    esp += 4; return; /* ret */

}

/**
 * sub_001128E0
 * Original: 0x001128E0 - 0x0011296E (142 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001128E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001128E0: ;
    edx = ecx + 4;
    PUSH32(esp, esi);
    eax = edx;
    esi = 9;
    goto loc_001128F0;

    /* nop */

loc_001128F0: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001128F0; /* jne: not equal / not zero */

loc_00112903: ;
    eax = ZX8(MEM8(esp + 8));
    MEM32(edx) = eax;
    esi = 0xC0018000u;
    MEM32(edx + 4) = esi;
    edx = 0xC0024000u;
    MEM32(ecx + 0x10) = edx;
    edx = 0xC0040080u;
    MEM32(ecx + 0x18) = edx;
    edx = 0xC0082000u;
    MEM32(ecx + 0x20) = edx;
    edx = 0x80000012u;
    MEM32(ecx + 0x28) = edx;
    edx = 0x80000021u;
    MEM32(ecx + 0x30) = edx;
    edx = 0x80000004u;
    MEM32(ecx + 0x38) = edx;
    edx = 0x80000008u;
    MEM32(ecx + 0x40) = edx;
    edx = 0x80000002u;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x48) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00112970
 * Original: 0x00112970 - 0x00112ABB (331 bytes, 115 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00112970(void)
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

loc_00112970: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = ebp;
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(0x1DC344);
    eax = MEM32(ecx);
    edx = esi + ebp * 8 + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00112992u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011298Fu); } /* indirect call */
    }

loc_00112992: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91CC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91cc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001129B1; /* je: equal / zero */

loc_0011299F: ;
    eax = MEM32(esi + 0x4C);
    edi = ~edi;
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(esi + 0x4C) = eax;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_001129B1: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    ecx = MEM32(esp + 0x18);
    if (TEST_NZ(_fa, _fb)) goto loc_001129D6; /* jne: not equal / not zero */

loc_001129BC: ;
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = edx;
    MEM32(ecx + 0xC) = 1;
    MEM32(ecx + 0x10) = 1;
    goto loc_001129E8;

loc_001129D6: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x50)); /* fadd dword ptr [esi + 0x50] */
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;

loc_001129E8: ;
    MEM32(ecx) = ebp;
    SET_LO8(eax, MEM8(esi + 0x54));
    MEM8(ecx + 4) = LO8(eax);
    eax = MEM32(esi + 0x50);
    MEM32(ecx + 8) = eax;
    fp_push(MEMF(esi + 0x50)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x58)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x58] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00112A0B; /* jp: parity */

loc_00112A03: ;
    eax = MEM32(esi + 0x60);
    MEM32(esi + 0x68) = edx;
    goto loc_00112A53;

loc_00112A0B: ;
    fp_push(MEMF(esi + 0x68)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00112A22; /* jp: parity */

loc_00112A1B: ;
    MEM32(ecx + 0x10) = 1;

loc_00112A22: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x68)); /* fadd dword ptr [esi + 0x68] */
    MEMF(esi + 0x68) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x64)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x64] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00112A39; /* jne: not equal / not zero */

loc_00112A36: ;
    MEM32(esi + 0x68) = edx;

loc_00112A39: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x5C)); /* fmul dword ptr [esi + 0x5c] */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x64) - fp_top()); /* fsubr dword ptr [esi + 0x64] */
    MEMF(esi + 0x64) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x6C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x6c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00112A56; /* jp: parity */

loc_00112A50: ;
    eax = MEM32(esi + 0x6C);

loc_00112A53: ;
    MEM32(esi + 0x64) = eax;

loc_00112A56: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112A7A; /* jne: not equal / not zero */

loc_00112A5B: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x74)); /* fmul dword ptr [esi + 0x74] */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x78) - fp_top()); /* fsubr dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00112A97; /* jp: parity */

loc_00112A75: ;
    MEM32(esi + 0x78) = edx;
    goto loc_00112A97;

loc_00112A7A: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112A8A; /* je: equal / zero */

loc_00112A7F: ;
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    goto loc_00112A94;

loc_00112A8A: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x70)); /* fmul dword ptr [esi + 0x70] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */

loc_00112A94: ;
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */

loc_00112A97: ;
    fp_push(MEMF(esi + 0x78)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x7C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x7c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00112AAA; /* jne: not equal / not zero */

loc_00112AA4: ;
    edx = MEM32(esi + 0x7C);
    MEM32(esi + 0x78) = edx;

loc_00112AAA: ;
    eax = MEM32(esi + 0x78);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x14) = eax;
    eax = 1;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00112AC0
 * Original: 0x00112AC0 - 0x00112B13 (83 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112AC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112AC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x4C) = eax;
    MEM32(ecx + 0x50) = eax;
    edx = 0x3DCCCCCD;
    MEM32(ecx + 0x64) = eax;
    MEM32(ecx + 0x68) = eax;
    MEM32(ecx + 0x78) = eax;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    MEM32(ecx) = 0x1C4E90;
    MEM32(ecx + 0x58) = 0x3F000000;
    MEM32(ecx + 0x5C) = edx;
    MEM32(ecx + 0x60) = 0x3E800000;
    MEM32(ecx + 0x6C) = edx;
    MEM32(ecx + 0x70) = 0x3CF5C28F;
    MEM32(ecx + 0x74) = edx;
    MEM32(ecx + 0x7C) = 0x41200000;
    MEM8(ecx + 0x54) = LO8(eax);
    PUSH32(esp, 0x00112B0Eu); RECOMP_ABI_CALL(0x001128E0u, sub_001128E0); /* call 0x001128E0 */

loc_00112B0E: ;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00112B20
 * Original: 0x00112B20 - 0x00112B51 (49 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112B20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x12AF20);
    esi = ecx;
    PUSH32(esp, 9);
    PUSH32(esp, 8);
    eax = esi + 4;
    PUSH32(esp, eax);
    MEM32(esi) = 0x1C4E90;
    PUSH32(esp, 0x00112B3Bu); RECOMP_ABI_CALL(0x00011030u, sub_00011030); /* call 0x00011030 */

loc_00112B3B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00112B4B; /* je: equal / zero */

loc_00112B42: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112B48u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00112B48: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00112B4B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00112B60
 * Original: 0x00112B60 - 0x00112C3E (222 bytes, 87 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00112B60: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, MEM8(edi + 0x54));
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 0x28), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00112B84; /* jne: not equal / not zero */

loc_00112B7A: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00112B84: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(0x1DFC34) = esi;
    PUSH32(esp, 0x00112BA1u); RECOMP_ABI_CALL(0x00112970u, sub_00112970); /* call 0x00112970 */

loc_00112BA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112BC3; /* je: equal / zero */

loc_00112BA5: ;
    ecx = MEM32(esp + 0x1C);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112BB7; /* jne: not equal / not zero */

loc_00112BB2: ;
    MEM32(0x1DFC34) = eax;

loc_00112BB7: ;
    edx = MEM32(ebx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00112BC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00112BC0u); } /* indirect call */
    }

loc_00112BC3: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00112BD1u); RECOMP_ABI_CALL(0x00112970u, sub_00112970); /* call 0x00112970 */

loc_00112BD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112C1A; /* je: equal / zero */

loc_00112BD5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112BEF; /* jne: not equal / not zero */

loc_00112BDA: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112C0E; /* jne: not equal / not zero */

loc_00112BE1: ;
    edx = MEM32(ebx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00112BEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00112BEAu); } /* indirect call */
    }

loc_00112BED: ;
    goto loc_00112C0E;

loc_00112BEF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112C09; /* jne: not equal / not zero */

loc_00112BF4: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112C0E; /* jne: not equal / not zero */

loc_00112BFB: ;
    edx = MEM32(ebx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00112C07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00112C04u); } /* indirect call */
    }

loc_00112C07: ;
    goto loc_00112C0E;

loc_00112C09: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112C1A; /* je: equal / zero */

loc_00112C0E: ;
    edx = MEM32(ebx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00112C1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00112C17u); } /* indirect call */
    }

loc_00112C1A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00112BC3; /* jl: less (signed <) */

loc_00112C20: ;
    POP32(esp, esi);
    MEM32(0x1DFC34) = 0;
    ecx = MEM32(edi + 0x4C);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00112C40
 * Original: 0x00112C40 - 0x00112C7A (58 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112C40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112C61; /* je: equal / zero */

loc_00112C4A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112C50u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00112C50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;

loc_00112C61: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112C78; /* je: equal / zero */

loc_00112C68: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112C6Eu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00112C6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00112C78: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00112C80
 * Original: 0x00112C80 - 0x00112CA1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112C80: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0xFFFFFFFFu;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_00112CB0
 * Original: 0x00112CB0 - 0x0011306C (956 bytes, 309 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112CB0(void)
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

loc_00112CB0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00112CC6u); RECOMP_ABI_CALL(0x000F7090u, sub_000F7090); /* call 0x000F7090 */

loc_00112CC6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00112CEA; /* jne: not equal / not zero */

loc_00112CD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1C4EA4);
    PUSH32(esp, 0x00112CDCu); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_00112CDC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00112CDF: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    edx = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00112CEA: ;
    esi = eax + 2;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112CFA; /* je: equal / zero */

loc_00112CF2: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112CF2; /* jne: not equal / not zero */

loc_00112CFA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, MEM8(esi + 2));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esi + 4));
    SET_LO8(eax, MEM8(esi + 1));
    SET_LO8(ecx, MEM8(esi + 3));
    MEM32(esp + 0x18) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, MEM8(esi + 6));
    MEM32(esp + 0x1C) = ecx;
    SET_LO8(eax, MEM8(esi + 5));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112CDF; /* je: equal / zero */

loc_00112D1F: ;
    PUSH32(esp, ebx);
    ebx = ZX16(LO16(eax));
    edx = ebx + ebx * 8;
    eax = edx * 4 + 4;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0x00112D37u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00112D37: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112D59; /* je: equal / zero */

loc_00112D40: ;
    PUSH32(esp, 0x112C80);
    PUSH32(esp, ebx);
    edi = eax + 4;
    PUSH32(esp, 0x24);
    PUSH32(esp, edi);
    MEM32(eax) = ebx;
    PUSH32(esp, 0x00112D53u); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_00112D53: ;
    MEM32(esp + 0x10) = edi;
    goto loc_00112D5D;

loc_00112D59: ;
    MEM32(esp + 0x10) = ebp;

loc_00112D5D: ;
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00113051; /* jle: less or equal (signed <=) */

loc_00112D68: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ebx;

loc_00112D73: ;
    eax = esi;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax));
    edi = ecx;
    ebx = ZX16(LO16(edi));
    edx = ebx * 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00112D91u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00112D91: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0 (16-bit) */
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00112E48; /* jbe: below or equal (unsigned <=) */

loc_00112DA3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = ebx;
    /* nop */

loc_00112DB0: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    SET_HI8(edx, MEM8(eax + 3));
    ebx = ZX8(MEM8(eax + 1));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(eax + 2));
    eax = ZX8(MEM8(eax));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x30) = edx;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00112DE5; /* jge: greater or equal (signed >=) */

loc_00112DDF: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D8)); /* fadd dword ptr [0x1c91d8] */

loc_00112DE5: ;
    eax = ZX8(MEM8(ecx + 1));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C1E98)); /* fmul dword ptr [0x1c1e98] */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(ecx + 3));
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(edx, MEM8(ecx + 2));
    ecx = ZX8(MEM8(ecx));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x30) = edx;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00112E1A; /* jge: greater or equal (signed >=) */

loc_00112E14: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D8)); /* fadd dword ptr [0x1c91d8] */

loc_00112E1A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C1E98)); /* fmul dword ptr [0x1c1e98] */
    edx = MEM32(ebp);
    eax = MEM32(esp + 0x28);
    MEM32(edi + edx) = eax;
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x2C);
    MEM32(edi + edx + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00112DB0; /* jne: not equal / not zero */

loc_00112E48: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112E4Eu); RECOMP_ABI_CALL(0x001025F0u, sub_001025F0); /* call 0x001025F0 */

loc_00112E4E: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00112E6D; /* jle: less or equal (signed <=) */

loc_00112E57: ;
    edx = edi + 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00112E60u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00112E60: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0x00112E6Au); RECOMP_ABI_CALL(0x000E1310u, sub_000E1310); /* call 0x000E1310 */

loc_00112E6A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00112E6D: ;
    esi = esi + edi + 1;
    eax = esi;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + 1));
    eax = ZX8(MEM8(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x24;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = SX16(LO16(ecx));
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x18);
    MEM32(ebp + -12) = edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_00112D73; /* jne: not equal / not zero */

loc_00112E98: ;
    ebx = MEM32(esp + 0x24);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00113051; /* jle: less or equal (signed <=) */

loc_00112EA6: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    fp_push(MEMF(0x1C4E98)); /* fld float */
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x20);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x10);
    MEM32(esp + 0x24) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ebx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEM32(esp + 0x24) = edx;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    /* nop */

loc_00112EE0: ;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112F22; /* jne: not equal / not zero */

loc_00112EE8: ;
    ecx = MEM32(edi);
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00112F22; /* jp: parity */

loc_00112EF6: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00112F22; /* jp: parity */

loc_00112F03: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00112F22; /* jp: parity */

loc_00112F10: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00112F22; /* jp: parity */

loc_00112F1D: ;
    MEM32(edi + -8) = ebp;
    goto loc_00112F38;

loc_00112F22: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00112F2C; /* jle: less or equal (signed <=) */

loc_00112F27: ;
    MEM32(edi + -8) = ebp;
    goto loc_00112F38;

loc_00112F2C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112F38; /* jne: not equal / not zero */

loc_00112F31: ;
    MEM32(edi + -8) = 2;

loc_00112F38: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    eax = MEM32(0x1C4E98);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x4C) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00112F7C; /* jle: less or equal (signed <=) */

loc_00112F5D: ;
    esi = MEM32(edi);
    ebp = MEM32(edi + 4);

loc_00112F62: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, 0x00112F74u); RECOMP_ABI_CALL(0x00019500u, sub_00019500); /* call 0x00019500 */

loc_00112F74: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00112F62; /* jne: not equal / not zero */

loc_00112F7A: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00112F7C: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91CC)); /* fadd dword ptr [0x1c91cc] */
    PUSH32(esp, 0x00112F93u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00112F93: ;
    MEM32(esp + 0x24) = eax;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C4EA0)); /* fmul dword ptr [0x1c4ea0] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91CC)); /* fadd dword ptr [0x1c91cc] */
    PUSH32(esp, 0x00112FBBu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00112FBB: ;
    MEM32(esp + 0x24) = eax;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C4E9C)); /* fmul dword ptr [0x1c4e9c] */
    MEM32(esp + 0x18) = eax;
    MEMF(edi + -24) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_00112EE0; /* jne: not equal / not zero */

loc_00112FDE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00113051; /* jle: less or equal (signed <=) */

loc_00112FE2: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebx;
    goto loc_00112FF0;

    /* nop */

loc_00112FF0: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011304B; /* je: equal / zero */

loc_00112FF7: ;
    edx = MEM32(esp + 0x10);
    edi = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    ecx = ecx + ecx * 8;
    ecx = MEM32(edx + ecx * 4 + 8);
    edx = MEM32(eax + -24);
    MEM32(esp + 0x30) = edi;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx)); /* fsub dword ptr [edx] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x30)); /* fimul dword ptr [esp + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C4EA0)); /* fmul dword ptr [0x1c4ea0] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 4)); /* fsub dword ptr [edx + 4] */
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x30) = ecx;
    MEM32(eax + -8) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x30)); /* fimul dword ptr [esp + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C4E9C)); /* fmul dword ptr [0x1c4e9c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + -4) = ecx;

loc_0011304B: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00112FF0; /* jne: not equal / not zero */

loc_00113051: ;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011305Bu); RECOMP_ABI_CALL(0x000F6CC0u, sub_000F6CC0); /* call 0x000F6CC0 */

loc_0011305B: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00113070
 * Original: 0x00113070 - 0x00113132 (194 bytes, 58 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00113070(void)
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

loc_00113070: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp) = ecx;
    fp_push(MEMF(esp)); /* fld float */
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 8) = ecx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(esp + 0xC) = edx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001130A7; /* jp: parity */

loc_001130A0: ;
    ecx = 1;
    goto loc_001130A9;

loc_001130A7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001130A9: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001130C3; /* jp: parity */

loc_001130B8: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = 1;
    goto loc_001130C9;

loc_001130C3: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001130C9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001130E1; /* je: equal / zero */

loc_001130CD: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp)); /* fsub dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp)); /* fadd dword ptr [esp] */
    goto loc_001130F3;

loc_001130E1: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */

loc_001130F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00113105; /* je: equal / zero */

loc_001130FB: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    goto loc_0011310D;

loc_00113105: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */

loc_0011310D: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEM32(eax) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    MEM32(eax + 4) = edx;
    fp_pop(); /* fstp st(0) */
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
 * sub_00113140
 * Original: 0x00113140 - 0x0011314F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113140(void)
{

loc_00113140: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, 0x0011314Cu); RECOMP_ABI_CALL(0x000C9BF7u, sub_000C9BF7); /* call 0x000C9BF7 */

loc_0011314C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113150
 * Original: 0x00113150 - 0x00113155 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00113150: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

}

/**
 * sub_00113160
 * Original: 0x00113160 - 0x00113170 (16 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00113160: ;
    PUSH32(esp, 0x00113165u); RECOMP_ABI_CALL(0x000C9CEBu, sub_000C9CEB); /* call 0x000C9CEB */

loc_00113165: ;
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00113170(); return; /* fallthrough 0x00113170 */

}

/**
 * sub_00113170
 * Original: 0x00113170 - 0x00113175 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00113170: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00113180
 * Original: 0x00113180 - 0x001131F4 (116 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113180: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0011319Au); RECOMP_ABI_CALL(0x00128890u, sub_00128890); /* call 0x00128890 */

loc_0011319A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x1C4F00;
    MEM32(esi + 0x18) = 0;
    MEM32(esi + 0x1C) = 0;
    MEM32(esi + 0x14) = 0xFFFFFFFFu;
    if (CMP_NE(_fa, _fb)) goto loc_001131ED; /* jne: not equal / not zero */

loc_001131B9: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x128880);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001131CCu); RECOMP_ABI_CALL(0x000C9E8Bu, sub_000C9E8B); /* call 0x000C9E8B */

loc_001131CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001131ED; /* jne: not equal / not zero */

loc_001131D3: ;
    PUSH32(esp, 0x001131D8u); RECOMP_ABI_CALL(0x000CA7DFu, sub_000CA7DF); /* call 0x000CA7DF */

loc_001131D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C4ED4);
    PUSH32(esp, 0x001131E3u); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_001131E3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = 0xFFFFFFFFu;

loc_001131ED: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00113200
 * Original: 0x00113200 - 0x0011325D (93 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113200: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0xFFFFFFFFu (32-bit) */
    MEM32(esi) = 0x1C4F00;
    if (CMP_EQ(_fa, _fb)) goto loc_00113253; /* je: equal / zero */

loc_00113210: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    MEM32(esi + 0x1C) = 1;
    PUSH32(esp, 0x00113220u); RECOMP_ABI_CALL(0x000C9C6Fu, sub_000C9C6F); /* call 0x000C9C6F */

loc_00113220: ;
    PUSH32(esp, 0x00113225u); RECOMP_ABI_CALL(0x000C9CEBu, sub_000C9CEB); /* call 0x000C9CEB */

loc_00113225: ;
    edx = MEM32(esi + 0x14);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00113233u); RECOMP_ABI_CALL(0x000C9D10u, sub_000C9D10); /* call 0x000C9D10 */

loc_00113233: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x103 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113210; /* je: equal / zero */

loc_0011323D: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113246u); RECOMP_ABI_CALL(0x000C9F06u, sub_000C9F06); /* call 0x000C9F06 */

loc_00113246: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113253; /* je: equal / zero */

loc_0011324D: ;
    MEM32(0x1DFC3C) = MEM32(0x1DFC3C) - 1;
    _fa = (uint32_t)(MEM32(0x1DFC3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00113253: ;
    ecx = esi;
    PUSH32(esp, 0x0011325Au); RECOMP_ABI_CALL(0x00128850u, sub_00128850); /* call 0x00128850 */

loc_0011325A: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00113260
 * Original: 0x00113260 - 0x001132DB (123 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113260: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001132A8; /* jne: not equal / not zero */

loc_0011326A: ;
    MEM32(0x1DFC3C) = MEM32(0x1DFC3C) + 1;
    _fa = (uint32_t)(MEM32(0x1DFC3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001132C0; /* jne: not equal / not zero */

loc_00113278: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001132AC; /* jne: not equal / not zero */

loc_00113280: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x128880);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00113295u); RECOMP_ABI_CALL(0x000C9E8Bu, sub_000C9E8B); /* call 0x000C9E8B */

loc_00113295: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001132CD; /* jne: not equal / not zero */

loc_0011329C: ;
    PUSH32(esp, 0x001132A1u); RECOMP_ABI_CALL(0x000CA7DFu, sub_000CA7DF); /* call 0x000CA7DF */

loc_001132A1: ;
    MEM32(esi + 0x14) = 0xFFFFFFFFu;

loc_001132A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001132AC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001132B2u); RECOMP_ABI_CALL(0x000C9C6Fu, sub_000C9C6F); /* call 0x000C9C6F */

loc_001132B2: ;
    MEM32(esi + 0x18) = 1;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001132C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001132CD; /* jne: not equal / not zero */

loc_001132C4: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001132CDu); RECOMP_ABI_CALL(0x000C9C6Fu, sub_000C9C6F); /* call 0x000C9C6F */

loc_001132CD: ;
    MEM32(esi + 0x18) = 1;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001132E0
 * Original: 0x001132E0 - 0x0011331D (61 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001132E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001132E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001132E8u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_001132E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011330A; /* je: equal / zero */

loc_001132EF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    MEM32(eax) = 0xFFFFFFFFu;
    esi = eax;
    PUSH32(esp, 0x00113304u); RECOMP_ABI_CALL(0x000C9A10u, sub_000C9A10); /* call 0x000C9A10 */

loc_00113304: ;
    MEM32(esi) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011330A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113317u); RECOMP_ABI_CALL(0x000C9A10u, sub_000C9A10); /* call 0x000C9A10 */

loc_00113317: ;
    MEM32(esi) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00113320
 * Original: 0x00113320 - 0x0011334D (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113320: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011332Du); RECOMP_ABI_CALL(0x000C9F06u, sub_000C9F06); /* call 0x000C9F06 */

loc_0011332D: ;
    MEM32(esi) = 0xFFFFFFFFu;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113340; /* je: equal / zero */

loc_0011333A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113340u); RECOMP_ABI_CALL(0x000C9F06u, sub_000C9F06); /* call 0x000C9F06 */

loc_00113340: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113346u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00113346: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113350
 * Original: 0x00113350 - 0x00113361 (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113350(void)
{

loc_00113350: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011335Eu); RECOMP_ABI_CALL(0x000C9B9Fu, sub_000C9B9F); /* call 0x000C9B9F */

loc_0011335E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113370
 * Original: 0x00113370 - 0x0011338C (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113370: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113380u); RECOMP_ABI_CALL(0x000C9A6Bu, sub_000C9A6B); /* call 0x000C9A6B */

loc_00113380: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00113389; /* jne: not equal / not zero */

loc_00113384: ;
    PUSH32(esp, 0x00113389u); RECOMP_ABI_CALL(0x000CA7DFu, sub_000CA7DF); /* call 0x000CA7DF */

loc_00113389: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113390
 * Original: 0x00113390 - 0x001133C6 (54 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00113390: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001133B4; /* je: equal / zero */

loc_00113399: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001133A2u); RECOMP_ABI_CALL(0x000C9C49u, sub_000C9C49); /* call 0x000C9C49 */

loc_001133A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001133C2; /* jne: not equal / not zero */

loc_001133A7: ;
    eax = MEM32(esi + 0x14);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000C9C6F(); return; /* tail jmp 0x000C9C6F */

loc_001133B4: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0xFFFFFFFEu;
    g_seh_ebp = ebp; sub_000C9C49(); return; /* tail jmp 0x000C9C49 */

loc_001133C2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001133D0
 * Original: 0x001133D0 - 0x001133EA (26 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001133D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001133D0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001133DDu); RECOMP_ABI_CALL(0x000C9C6Fu, sub_000C9C6F); /* call 0x000C9C6F */

loc_001133DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001133E7; /* jne: not equal / not zero */

loc_001133E2: ;
    PUSH32(esp, 0x001133E7u); RECOMP_ABI_CALL(0x000CA7DFu, sub_000CA7DF); /* call 0x000CA7DF */

loc_001133E7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001133F0
 * Original: 0x001133F0 - 0x0011340E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001133F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001133F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001133F8u); RECOMP_ABI_CALL(0x00113200u, sub_00113200); /* call 0x00113200 */

loc_001133F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00113408; /* je: equal / zero */

loc_001133FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113405u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00113405: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00113408: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113410
 * Original: 0x00113410 - 0x0011343A (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113410: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011341A; /* jne: not equal / not zero */

loc_00113417: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0011341A: ;
    MEM32(0x1DFC3C) = MEM32(0x1DFC3C) - 1;
    _fa = (uint32_t)(MEM32(0x1DFC3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x18) = 0;
    eax = MEM32(0x1DFC40);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00113434u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113431u); } /* indirect call */
    }

loc_00113434: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00113440
 * Original: 0x00113440 - 0x0011344F (15 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113440: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011344E; /* je: equal / zero */

loc_00113447: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0011344Eu); RECOMP_ABI_CALL(0x000C9CFEu, sub_000C9CFE); /* call 0x000C9CFE */

loc_0011344E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00113450
 * Original: 0x00113450 - 0x00113479 (41 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113450: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C4F18;
    MEM32(0x1DFC40) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00113473; /* je: equal / zero */

loc_0011346A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113470u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00113470: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00113473: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113480
 * Original: 0x00113480 - 0x001134A5 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113480: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00113487u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00113487: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011349A; /* je: equal / zero */

loc_0011348E: ;
    MEM32(eax) = 0x1C4F18;
    MEM32(0x1DFC40) = eax;
    esp += 4; return; /* ret */

loc_0011349A: ;
    MEM32(0x1DFC40) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001134B0
 * Original: 0x001134B0 - 0x0011355F (175 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001134B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001134B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = 1;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001134C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001134C2u); } /* indirect call */
    }

loc_001134C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113558; /* je: equal / zero */

loc_001134CD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1A2C20);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x001134ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001134E6u); } /* indirect call */
    }

loc_001134EC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    ecx = ebx + 4;
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x1A2C14);
    ecx = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0011350Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113508u); } /* indirect call */
    }

loc_0011350E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFF7FFFFFu);
    eax = ebx + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B05E4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0011352Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113527u); } /* indirect call */
    }

loc_0011352D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C4F94);
    ecx = esi;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0011354Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113546u); } /* indirect call */
    }

loc_0011354C: ;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00113557u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113554u); } /* indirect call */
    }

loc_00113557: ;
    POP32(esp, ebx);

loc_00113558: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113560
 * Original: 0x00113560 - 0x0011364D (237 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113560: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = 1;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00113575u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113572u); } /* indirect call */
    }

loc_00113575: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113646; /* je: equal / zero */

loc_0011357D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C4FC0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0011359Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113599u); } /* indirect call */
    }

loc_0011359F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    PUSH32(esp, ebx);
    edi = eax;
    PUSH32(esp, 0x1C4FB8);
    ecx = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x001135BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001135B8u); } /* indirect call */
    }

loc_001135BE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    ecx = ebx + 0x10;
    PUSH32(esp, ecx);
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    PUSH32(esp, 0x1C4FB0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x001135DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001135D7u); } /* indirect call */
    }

loc_001135DD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFF7FFFFFu);
    eax = ebx + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C4FA8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x001135FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001135F6u); } /* indirect call */
    }

loc_001135FC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFF7FFFFFu);
    eax = ebx + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C4FA0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0011361Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113615u); } /* indirect call */
    }

loc_0011361B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C4F98);
    ecx = esi;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0011363Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113634u); } /* indirect call */
    }

loc_0011363A: ;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00113645u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113642u); } /* indirect call */
    }

loc_00113645: ;
    POP32(esp, ebx);

loc_00113646: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113650
 * Original: 0x00113650 - 0x001136B7 (103 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113650: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = 1;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00113665u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113662u); } /* indirect call */
    }

loc_00113665: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001136B0; /* je: equal / zero */

loc_00113669: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1A2BF4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00113685u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011367Fu); } /* indirect call */
    }

loc_00113685: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1A2C24);
    ecx = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x001136A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011369Eu); } /* indirect call */
    }

loc_001136A4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001136AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001136ACu); } /* indirect call */
    }

loc_001136AF: ;
    POP32(esp, ebx);

loc_001136B0: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001136C0
 * Original: 0x001136C0 - 0x001136C8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001136C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001136C0: ;
    eax = MEM32(esp + 4);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_001136D0
 * Original: 0x001136D0 - 0x00113771 (161 bytes, 47 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001136D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001136D0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x108);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x110);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00113768; /* jne: not equal / not zero */

loc_001136ED: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011375B; /* je: equal / zero */

loc_001136F3: ;
    ecx = MEM32(esp + 0x114);
    eax = esp + 0x118;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011370Du); RECOMP_ABI_CALL(0x0011B0D0u, sub_0011B0D0); /* call 0x0011B0D0 */

loc_0011370D: ;
    eax = edi + -2;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0011373A; /* ja: above (unsigned >) */

loc_00113718: ;
    eax = ZX8(MEM8(eax + 0x113780));
    { uint32_t _jt = MEM32(eax * 4 + 0x113774); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00113726u) goto loc_00113726;
    if (_jt == 0x0011372Du) goto loc_0011372D;
    if (_jt == 0x0011373Au) goto loc_0011373A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00113726: ;
    PUSH32(esp, 0x1C4FD0);
    goto loc_00113732;

loc_0011372D: ;
    PUSH32(esp, 0x1C4FC8);

loc_00113732: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x0011373Au); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_0011373A: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x00113747u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_00113747: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00113751u); RECOMP_ABI_CALL(0x000E1900u, sub_000E1900); /* call 0x000E1900 */

loc_00113751: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0011375Bu); RECOMP_ABI_CALL(0x000E1900u, sub_000E1900); /* call 0x000E1900 */

loc_0011375B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113768; /* je: equal / zero */

loc_00113760: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113768; /* je: equal / zero */

loc_00113765: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00113768: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00113790
 * Original: 0x00113790 - 0x001137D5 (69 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113790: ;
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x14), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001137D4; /* je: equal / zero */

loc_00113796: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax);
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001137D4; /* je: equal / zero */

loc_001137A1: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001137B9; /* je: equal / zero */

loc_001137A6: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001137B4; /* je: equal / zero */

loc_001137AB: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001137A6; /* jne: not equal / not zero */

loc_001137B4: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001137C0; /* jne: not equal / not zero */

loc_001137B9: ;
    MEM8(eax) = 0xD;
    /* nop */

loc_001137C0: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001137CC; /* je: equal / zero */

loc_001137C7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001137CF; /* jne: not equal / not zero */

loc_001137CC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001137C0;

loc_001137CF: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001137A1; /* jne: not equal / not zero */

loc_001137D4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001137E0
 * Original: 0x001137E0 - 0x0011384D (109 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001137E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001137E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = 1;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001137F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001137F2u); } /* indirect call */
    }

loc_001137F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113846; /* je: equal / zero */

loc_001137F9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1A2C20);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00113818u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113812u); } /* indirect call */
    }

loc_00113818: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1A2C14);
    ecx = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0011383Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113834u); } /* indirect call */
    }

loc_0011383A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00113845u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113842u); } /* indirect call */
    }

loc_00113845: ;
    POP32(esp, ebx);

loc_00113846: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113850
 * Original: 0x00113850 - 0x001138DC (140 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113850: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = 1;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00113865u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113862u); } /* indirect call */
    }

loc_00113865: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001138D5; /* je: equal / zero */

loc_00113869: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1A2C20);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00113888u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113882u); } /* indirect call */
    }

loc_00113888: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    ecx = ebx + 4;
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x1A2C14);
    ecx = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x001138AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001138A4u); } /* indirect call */
    }

loc_001138AA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1A2BE8);
    ecx = esi;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x001138C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001138C3u); } /* indirect call */
    }

loc_001138C9: ;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001138D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001138D1u); } /* indirect call */
    }

loc_001138D4: ;
    POP32(esp, ebx);

loc_001138D5: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001138E0
 * Original: 0x001138E0 - 0x0011398F (175 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001138E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001138E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = 1;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001138F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001138F2u); } /* indirect call */
    }

loc_001138F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113988; /* je: equal / zero */

loc_001138FD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1A2C20);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0011391Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113916u); } /* indirect call */
    }

loc_0011391C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    ecx = ebx + 4;
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x1A2C14);
    ecx = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0011393Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113938u); } /* indirect call */
    }

loc_0011393E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFF7FFFFFu);
    eax = ebx + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1A2BE8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0011395Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113957u); } /* indirect call */
    }

loc_0011395D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1B05E4);
    ecx = esi;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0011397Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113976u); } /* indirect call */
    }

loc_0011397C: ;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00113987u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113984u); } /* indirect call */
    }

loc_00113987: ;
    POP32(esp, ebx);

loc_00113988: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113990
 * Original: 0x00113990 - 0x001139F5 (101 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113990: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = 1;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001139A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001139A2u); } /* indirect call */
    }

loc_001139A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001139EE; /* je: equal / zero */

loc_001139A9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C4FEC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001139BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001139B8u); } /* indirect call */
    }

loc_001139BB: ;
    ecx = ebx + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x1C4FE4);
    ecx = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001139D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001139CDu); } /* indirect call */
    }

loc_001139D0: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C4FDC);
    ecx = esi;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001139E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001139DFu); } /* indirect call */
    }

loc_001139E2: ;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001139EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001139EAu); } /* indirect call */
    }

loc_001139ED: ;
    POP32(esp, ebx);

loc_001139EE: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113A00
 * Original: 0x00113A00 - 0x00113A77 (119 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113A00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = 1;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00113A15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113A12u); } /* indirect call */
    }

loc_00113A15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113A70; /* je: equal / zero */

loc_00113A19: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C4FEC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00113A2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113A28u); } /* indirect call */
    }

loc_00113A2B: ;
    ecx = ebx + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x1C4FE4);
    ecx = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00113A40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113A3Du); } /* indirect call */
    }

loc_00113A40: ;
    edx = MEM32(esi);
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebx + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C4FDC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00113A52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113A4Fu); } /* indirect call */
    }

loc_00113A52: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C4FF4);
    ecx = esi;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00113A64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113A61u); } /* indirect call */
    }

loc_00113A64: ;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00113A6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113A6Cu); } /* indirect call */
    }

loc_00113A6F: ;
    POP32(esp, ebx);

loc_00113A70: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113A80
 * Original: 0x00113A80 - 0x00113AF7 (119 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113A80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = 1;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00113A95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113A92u); } /* indirect call */
    }

loc_00113A95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113AF0; /* je: equal / zero */

loc_00113A99: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C4FEC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00113AABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113AA8u); } /* indirect call */
    }

loc_00113AAB: ;
    ecx = ebx + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x1C4FE4);
    ecx = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00113AC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113ABDu); } /* indirect call */
    }

loc_00113AC0: ;
    edx = MEM32(esi);
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebx + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C4FDC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00113AD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113ACFu); } /* indirect call */
    }

loc_00113AD2: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C4FF4);
    ecx = esi;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00113AE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113AE1u); } /* indirect call */
    }

loc_00113AE4: ;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00113AEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113AECu); } /* indirect call */
    }

loc_00113AEF: ;
    POP32(esp, ebx);

loc_00113AF0: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113B00
 * Original: 0x00113B00 - 0x00113B60 (96 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113B00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = 1;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00113B15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113B12u); } /* indirect call */
    }

loc_00113B15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113B59; /* je: equal / zero */

loc_00113B19: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C5004);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00113B2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113B28u); } /* indirect call */
    }

loc_00113B2B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C4FFC);
    ecx = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00113B4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113B47u); } /* indirect call */
    }

loc_00113B4D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00113B58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113B55u); } /* indirect call */
    }

loc_00113B58: ;
    POP32(esp, ebx);

loc_00113B59: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113B60
 * Original: 0x00113B60 - 0x00113BC0 (96 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113B60: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = 1;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00113B75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113B72u); } /* indirect call */
    }

loc_00113B75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113BB9; /* je: equal / zero */

loc_00113B79: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C5010);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00113B8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113B88u); } /* indirect call */
    }

loc_00113B8B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C500C);
    ecx = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00113BADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113BA7u); } /* indirect call */
    }

loc_00113BAD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00113BB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113BB5u); } /* indirect call */
    }

loc_00113BB8: ;
    POP32(esp, ebx);

loc_00113BB9: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113BC0
 * Original: 0x00113BC0 - 0x00113C25 (101 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113BC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = 1;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00113BD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113BD2u); } /* indirect call */
    }

loc_00113BD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113C1E; /* je: equal / zero */

loc_00113BD9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C5010);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00113BEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113BE8u); } /* indirect call */
    }

loc_00113BEB: ;
    ecx = ebx + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x1C5014);
    ecx = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00113C00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113BFDu); } /* indirect call */
    }

loc_00113C00: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1AFB64);
    ecx = esi;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00113C12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113C0Fu); } /* indirect call */
    }

loc_00113C12: ;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00113C1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113C1Au); } /* indirect call */
    }

loc_00113C1D: ;
    POP32(esp, ebx);

loc_00113C1E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113C30
 * Original: 0x00113C30 - 0x00113CDF (175 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113C30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = 1;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00113C45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113C42u); } /* indirect call */
    }

loc_00113C45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113CD8; /* je: equal / zero */

loc_00113C4D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1A2C20);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00113C6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113C66u); } /* indirect call */
    }

loc_00113C6C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    ecx = ebx + 4;
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x1A2C14);
    ecx = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00113C8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113C88u); } /* indirect call */
    }

loc_00113C8E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFF7FFFFFu);
    eax = ebx + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1A2BE8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00113CADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113CA7u); } /* indirect call */
    }

loc_00113CAD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1B060C);
    ecx = esi;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00113CCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113CC6u); } /* indirect call */
    }

loc_00113CCC: ;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00113CD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113CD4u); } /* indirect call */
    }

loc_00113CD7: ;
    POP32(esp, ebx);

loc_00113CD8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113CE0
 * Original: 0x00113CE0 - 0x00113F5D (637 bytes, 191 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113CE0(void)
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

loc_00113CE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = 1;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00113CF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113CF5u); } /* indirect call */
    }

loc_00113CF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113F53; /* je: equal / zero */

loc_00113D00: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00113E4C; /* je: equal / zero */

loc_00113D0A: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 0x1C);
    if (CMP_EQ(_fa, _fb)) goto loc_00113D6B; /* je: equal / zero */

loc_00113D16: ;
    edx = ZX8(MEM8(eax + 3));
    ecx = ZX8(MEM8(eax + 2));
    MEM32(esp + 0x1C) = edx;
    edx = ZX8(MEM8(eax + 1));
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    eax = ZX8(MEM8(eax));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91E4)); /* fmul dword ptr [0x1c91e4] */
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    goto loc_00113DBE;

loc_00113D6B: ;
    ecx = ZX8(MEM8(eax + 3));
    edx = ZX8(MEM8(eax + 2));
    MEM32(esp + 0x1C) = ecx;
    ecx = ZX8(MEM8(eax + 1));
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = edx;
    edx = ZX8(MEM8(eax));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91E4)); /* fmul dword ptr [0x1c91e4] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91E4)); /* fmul dword ptr [0x1c91e4] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91E4)); /* fmul dword ptr [0x1c91e4] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91E4)); /* fmul dword ptr [0x1c91e4] */

loc_00113DBE: ;
    eax = MEM32(esi);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1A2BD8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00113DDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113DD7u); } /* indirect call */
    }

loc_00113DDD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    edi = eax;
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1A2BE4);
    ecx = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00113DFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113DF7u); } /* indirect call */
    }

loc_00113DFD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1A2BE0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00113E1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113E14u); } /* indirect call */
    }

loc_00113E1A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1A2BDC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00113E37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113E31u); } /* indirect call */
    }

loc_00113E37: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00113E42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113E3Fu); } /* indirect call */
    }

loc_00113E42: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00113E4C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1A2BD8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00113E67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113E61u); } /* indirect call */
    }

loc_00113E67: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    edi = eax;
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1A2BE4);
    ecx = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00113E87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113E81u); } /* indirect call */
    }

loc_00113E87: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1A2BE0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00113EA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113E9Eu); } /* indirect call */
    }

loc_00113EA4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1A2BDC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00113EC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113EBBu); } /* indirect call */
    }

loc_00113EC1: ;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00113F4A; /* je: equal / zero */

loc_00113EC9: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113F01; /* je: equal / zero */

loc_00113ED1: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x00113EEEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00113EEE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00113EF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113EF4u); } /* indirect call */
    }

loc_00113EF7: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00113F01: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE830)); /* fmul dword ptr [0x1ae830] */
    PUSH32(esp, 0x00113F10u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00113F10: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE830)); /* fmul dword ptr [0x1ae830] */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113F20u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00113F20: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE830)); /* fmul dword ptr [0x1ae830] */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113F30u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00113F30: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE830)); /* fmul dword ptr [0x1ae830] */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113F40u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00113F40: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113F4Au); RECOMP_ABI_CALL(0x00020AE0u, sub_00020AE0); /* call 0x00020AE0 */

loc_00113F4A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00113F53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113F50u); } /* indirect call */
    }

loc_00113F53: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00113F60
 * Original: 0x00113F60 - 0x00113FFF (159 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113F60: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = 1;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00113F75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113F72u); } /* indirect call */
    }

loc_00113F75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113FF8; /* je: equal / zero */

loc_00113F79: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1A2BD8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00113F98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113F92u); } /* indirect call */
    }

loc_00113F98: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    edi = eax;
    PUSH32(esp, 0);
    eax = ebx + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1A2BE4);
    ecx = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00113FB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113FB1u); } /* indirect call */
    }

loc_00113FB7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    eax = ebx + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1A2BE0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00113FD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113FCDu); } /* indirect call */
    }

loc_00113FD3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1A2BDC);
    ecx = esi;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00113FECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113FE6u); } /* indirect call */
    }

loc_00113FEC: ;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00113FF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113FF4u); } /* indirect call */
    }

loc_00113FF7: ;
    POP32(esp, ebx);

loc_00113FF8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00114000
 * Original: 0x00114000 - 0x001140E2 (226 bytes, 77 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114000(void)
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

loc_00114000: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = 1;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00114016u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00114013u); } /* indirect call */
    }

loc_00114016: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001140DA; /* je: equal / zero */

loc_0011401E: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 3 (8-bit) */
    PUSH32(esp, 0x7F7FFFFF);
    ecx = esi;
    PUSH32(esp, 0xFF7FFFFFu);
    if (TEST_Z(_fa, _fb)) goto loc_00114089; /* je: equal / zero */

loc_00114030: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esi);
    PUSH32(esp, 0x1C5018);
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00114053u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011404Du); } /* indirect call */
    }

loc_00114053: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    edi = eax;
    PUSH32(esp, 0xFF7FFFFFu);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BB96C);
    ecx = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00114076u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00114070u); } /* indirect call */
    }

loc_00114076: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00114081u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011407Eu); } /* indirect call */
    }

loc_00114081: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_00114089: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C5018);
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0011409Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00114095u); } /* indirect call */
    }

loc_0011409B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    edi = eax;
    PUSH32(esp, 0xFF7FFFFFu);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BB96C);
    ecx = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x001140BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001140B8u); } /* indirect call */
    }

loc_001140BE: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = MEM32(esp + 8);
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 0x14);
    MEM32(eax + 4) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001140DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001140D7u); } /* indirect call */
    }

loc_001140DA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001140F0
 * Original: 0x001140F0 - 0x00114143 (83 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001140F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001140F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edi + 8); PUSH32(esp, 0x001140FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001140FAu); } /* indirect call */
    }

loc_001140FD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(edi + 4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(edi + 4)); }
    ecx = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + edx * 2;
    esi = MEM32(ecx + eax * 4 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011413B; /* je: equal / zero */

loc_00114112: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114126; /* jne: not equal / not zero */

loc_00114119: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114134; /* jne: not equal / not zero */

loc_0011411E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00114126: ;
    edx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0011412Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011412Bu); } /* indirect call */
    }

loc_0011412D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011411E; /* jne: not equal / not zero */

loc_00114134: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114112; /* jne: not equal / not zero */

loc_0011413B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00114150
 * Original: 0x00114150 - 0x00114186 (54 bytes, 19 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114150: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114178; /* je: equal / zero */

loc_0011415A: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 3 (8-bit) */
    PUSH32(esp, eax);
    if (TEST_Z(_fa, _fb)) goto loc_00114168; /* je: equal / zero */

loc_00114161: ;
    PUSH32(esp, 0x1C5038);
    goto loc_0011416D;

loc_00114168: ;
    PUSH32(esp, 0x1C501C);

loc_0011416D: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114175u); RECOMP_ABI_CALL(0x001136D0u, sub_001136D0); /* call 0x001136D0 */

loc_00114175: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00114178: ;
    MEM32(esi + 0x24) = 1;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00114190
 * Original: 0x00114190 - 0x0011420A (122 bytes, 44 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114190: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001141B8; /* je: equal / zero */

loc_0011419A: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 3 (8-bit) */
    PUSH32(esp, eax);
    if (TEST_Z(_fa, _fb)) goto loc_001141A8; /* je: equal / zero */

loc_001141A1: ;
    PUSH32(esp, 0x1C5094);
    goto loc_001141AD;

loc_001141A8: ;
    PUSH32(esp, 0x1C5078);

loc_001141AD: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001141B5u); RECOMP_ABI_CALL(0x001136D0u, sub_001136D0); /* call 0x001136D0 */

loc_001141B5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001141B8: ;
    eax = MEM32(esi + 0x1C);
    ecx = eax;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001141E8; /* je: equal / zero */

loc_001141C2: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001141D8; /* je: equal / zero */

loc_001141C5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C5064);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001141D3u); RECOMP_ABI_CALL(0x001136D0u, sub_001136D0); /* call 0x001136D0 */

loc_001141D3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001141E8;

loc_001141D8: ;
    PUSH32(esp, 0x1C5050);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001141E5u); RECOMP_ABI_CALL(0x001136D0u, sub_001136D0); /* call 0x001136D0 */

loc_001141E5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001141E8: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x24) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00114203; /* je: equal / zero */

loc_001141F6: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00114203; /* je: equal / zero */

loc_001141FC: ;
    ecx = esi;
    PUSH32(esp, 0x00114203u); RECOMP_ABI_CALL(0x00113790u, sub_00113790); /* call 0x00113790 */

loc_00114203: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00114210
 * Original: 0x00114210 - 0x0011428D (125 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00114210: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0011422F; /* jne: not equal / not zero */

loc_0011421C: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x1C4F84);
    PUSH32(esp, 0x0011422Au); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_0011422A: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0011422F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0011423Du); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_0011423D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00114241: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011424B; /* jne: not equal / not zero */

loc_00114247: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00114250;

loc_0011424B: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00114250: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00114267; /* jae: above or equal (unsigned >=) */

loc_00114255: ;
    _fa = (uint32_t)(MEM8(eax + edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114264; /* jne: not equal / not zero */

loc_0011425B: ;
    MEM8(eax + edx) = 0x5F;
    edi = 1;

loc_00114264: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00114241;

loc_00114267: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114286; /* jne: not equal / not zero */

loc_0011426C: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00114286; /* je: equal / zero */

loc_00114272: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C50AC);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00114283u); RECOMP_ABI_CALL(0x001136D0u, sub_001136D0); /* call 0x001136D0 */

loc_00114283: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00114286: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00114290
 * Original: 0x00114290 - 0x001142F2 (98 bytes, 43 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114290: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    ecx = MEM32(esp + 0x18);
    edx = edi + edi * 2;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x001142BEu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_001142BE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001142E8; /* je: equal / zero */

loc_001142C5: ;
    edx = edi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001142DE; /* jl: less (signed <) */

loc_001142CC: ;
    ecx = eax + 8;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001142D0: ;
    MEM32(ecx + -8) = ebx;
    MEM32(ecx + -4) = ebx;
    MEM32(ecx) = ebx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001142D0; /* jne: not equal / not zero */

loc_001142DE: ;
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001142E8: ;
    POP32(esp, edi);
    MEM32(esi) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00114300
 * Original: 0x00114300 - 0x001143AF (175 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114300: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x10);
    MEM32(esi) = 0x1C50D0;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    PUSH32(esp, 0x00114338u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00114338: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011434E; /* je: equal / zero */

loc_0011433F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x800);
    ecx = eax;
    PUSH32(esp, 0x0011434Cu); RECOMP_ABI_CALL(0x000E16E0u, sub_000E16E0); /* call 0x000E16E0 */

loc_0011434C: ;
    goto loc_00114350;

loc_0011434E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00114350: ;
    PUSH32(esp, 0x18);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0011435Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011435A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114375; /* je: equal / zero */

loc_00114361: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1136C0);
    PUSH32(esp, 0x3FF);
    ecx = eax;
    PUSH32(esp, 0x00114373u); RECOMP_ABI_CALL(0x00114290u, sub_00114290); /* call 0x00114290 */

loc_00114373: ;
    goto loc_00114377;

loc_00114375: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00114377: ;
    PUSH32(esp, 0x30);
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x30) = 1;
    PUSH32(esp, 0x00114388u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00114388: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001143A4; /* je: equal / zero */

loc_0011438F: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00114399u); RECOMP_ABI_CALL(0x00122B70u, sub_00122B70); /* call 0x00122B70 */

loc_00114399: ;
    MEM32(esi + 0x2C) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001143A4: ;
    MEM32(esi + 0x2C) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001143B0
 * Original: 0x001143B0 - 0x00114445 (149 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001143B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001143B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x10);
    MEM32(esi) = 0x1C50D0;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    PUSH32(esp, 0x001143E0u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_001143E0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001143F6; /* je: equal / zero */

loc_001143E7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x800);
    ecx = eax;
    PUSH32(esp, 0x001143F4u); RECOMP_ABI_CALL(0x000E16E0u, sub_000E16E0); /* call 0x000E16E0 */

loc_001143F4: ;
    goto loc_001143F8;

loc_001143F6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001143F8: ;
    PUSH32(esp, 0x18);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x00114402u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00114402: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011442F; /* je: equal / zero */

loc_00114409: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1136C0);
    PUSH32(esp, 0x3FF);
    ecx = eax;
    PUSH32(esp, 0x0011441Bu); RECOMP_ABI_CALL(0x00114290u, sub_00114290); /* call 0x00114290 */

loc_0011441B: ;
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x20) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x2C) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0011442F: ;
    edx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x20) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x2C) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00114450
 * Original: 0x00114450 - 0x0011448A (58 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114450: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00114483; /* je: equal / zero */

loc_0011445C: ;
    ecx = MEM32(edi + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114465u); RECOMP_ABI_CALL(0x001140F0u, sub_001140F0); /* call 0x001140F0 */

loc_00114465: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114471; /* je: equal / zero */

loc_00114469: ;
    eax = MEM32(eax + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00114471: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1C5184);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00114480u); RECOMP_ABI_CALL(0x001136D0u, sub_001136D0); /* call 0x001136D0 */

loc_00114480: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00114483: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00114490
 * Original: 0x00114490 - 0x00114505 (117 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114490: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x001144B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001144B0u); } /* indirect call */
    }

loc_001144B6: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001144FB; /* jne: not equal / not zero */

loc_001144BC: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001144F6; /* je: equal / zero */

loc_001144C7: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001144D0u); RECOMP_ABI_CALL(0x001140F0u, sub_001140F0); /* call 0x001140F0 */

loc_001144D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001144E4; /* je: equal / zero */

loc_001144D4: ;
    eax = MEM32(eax + 0xC);
    POP32(esp, edi);
    MEM32(ebx) = eax;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001144E4: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C5184);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001144F3u); RECOMP_ABI_CALL(0x001136D0u, sub_001136D0); /* call 0x001136D0 */

loc_001144F3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001144F6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx) = eax;
    POP32(esp, edi);

loc_001144FB: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00114510
 * Original: 0x00114510 - 0x00114666 (342 bytes, 123 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114510: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 3 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0011457B; /* je: equal / zero */

loc_0011451D: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = MEM32(esp + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_0011454D; /* je: equal / zero */

loc_00114529: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114531u); RECOMP_ABI_CALL(0x000116C0u, sub_000116C0); /* call 0x000116C0 */

loc_00114531: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011454D; /* je: equal / zero */

loc_00114535: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00114545u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00114542u); } /* indirect call */
    }

loc_00114545: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0011454D: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, 0x1B2A40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011455Fu); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_0011455F: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00114573u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00114570u); } /* indirect call */
    }

loc_00114573: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0011457B: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00114584u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00114584: ;
    edi = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00114595u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00114592u); } /* indirect call */
    }

loc_00114595: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114643; /* je: equal / zero */

loc_0011459D: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001145E3; /* je: equal / zero */

loc_001145A5: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001145B1u); RECOMP_ABI_CALL(0x00012DC0u, sub_00012DC0); /* call 0x00012DC0 */

loc_001145B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001145E3; /* je: equal / zero */

loc_001145B5: ;
    eax = MEM32(eax);
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00114620; /* je: equal / zero */

loc_001145CD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001145D3u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001145D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_001145E3: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001145EDu); RECOMP_ABI_CALL(0x00122790u, sub_00122790); /* call 0x00122790 */

loc_001145ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011462D; /* je: equal / zero */

loc_001145F4: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001145FEu); RECOMP_ABI_CALL(0x0012B471u, sub_0012B471); /* call 0x0012B471 */

loc_001145FE: ;
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00114620; /* je: equal / zero */

loc_00114617: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011461Du); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011461D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00114620: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0011462D: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1C51C0);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114640u); RECOMP_ABI_CALL(0x001136D0u, sub_001136D0); /* call 0x001136D0 */

loc_00114640: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00114643: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0011465C; /* je: equal / zero */

loc_00114653: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114659u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00114659: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011465C: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00114670
 * Original: 0x00114670 - 0x001146E6 (118 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114670: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi) = 0x1C50D0;
    if (CMP_EQ(_fa, _fb)) goto loc_001146A2; /* je: equal / zero */

loc_00114684: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(edi + 0xC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00114696; /* je: equal / zero */

loc_0011468D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114693u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00114693: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00114696: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011469Cu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011469C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = ebx;

loc_001146A2: ;
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001146CD; /* je: equal / zero */

loc_001146A9: ;
    ecx = edi;
    PUSH32(esp, 0x001146B0u); RECOMP_ABI_CALL(0x000F7C90u, sub_000F7C90); /* call 0x000F7C90 */

loc_001146B0: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001146C1; /* je: equal / zero */

loc_001146B6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001146BCu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001146BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebx;

loc_001146C1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001146C7u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001146C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = ebx;

loc_001146CD: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001146E2; /* je: equal / zero */

loc_001146D2: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001146E2; /* je: equal / zero */

loc_001146D9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001146DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001146DDu); } /* indirect call */
    }

loc_001146DF: ;
    MEM32(esi + 0x2C) = ebx;

loc_001146E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001146F0
 * Original: 0x001146F0 - 0x0011470E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001146F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001146F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001146F8u); RECOMP_ABI_CALL(0x00114670u, sub_00114670); /* call 0x00114670 */

loc_001146F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00114708; /* je: equal / zero */

loc_001146FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114705u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00114705: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00114708: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00114710
 * Original: 0x00114710 - 0x0011485D (333 bytes, 120 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114710(void)
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

loc_00114710: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    MEM32(esi) = edi;
    fp_push(MEMF(ebx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x28)); /* fsub dword ptr [edi + 0x28] */
    PUSH32(esp, ecx);
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x2C)); /* fsub dword ptr [edi + 0x2c] */
    fp_push(MEMF(ebx + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x30)); /* fsub dword ptr [edi + 0x30] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x28) = eax;
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_push(MEMF(esi + 0x20)); /* fld float */
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
    PUSH32(esp, 0x00114772u); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_00114772: ;
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_push(MEMF(esi + 0x20)); /* fld float */
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
    PUSH32(esp, 0x0011479Cu); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_0011479C: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) / fp_top()); /* fdivr dword ptr [0x1c91d0] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x24)); /* fmul dword ptr [esi + 0x24] */
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x28)); /* fmul dword ptr [esi + 0x28] */
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = 0x3F800000;
    MEM32(esi + 0x1C) = eax;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x24)); /* fmul dword ptr [esi + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x28)); /* fmul dword ptr [esi + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    eax = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x24)); /* fmul dword ptr [esi + 0x24] */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x10) = ecx;
    ecx = MEM32(esp + 0x28);
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x24)); /* fmul dword ptr [esi + 0x24] */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x24)); /* fmul dword ptr [esi + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x1C) = edx;
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + eax * 4 + 0x5C) = esi;
    POP32(esp, edi);
    MEM32(ebx + ecx * 4 + 0x4C) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00114860
 * Original: 0x00114860 - 0x0011487E (30 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114860(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00114860: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    ecx = MEM32(ecx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x34)); /* fmul dword ptr [eax + 0x34] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x34)); /* fmul dword ptr [ecx + 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00114880
 * Original: 0x00114880 - 0x0011489E (30 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114880(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00114880: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    ecx = MEM32(ecx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x38)); /* fmul dword ptr [eax + 0x38] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x38)); /* fmul dword ptr [ecx + 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001148A0
 * Original: 0x001148A0 - 0x0011490D (109 bytes, 35 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001148A0(void)
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

loc_001148A0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 4);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1C91D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    eax = MEM32(esp + 0x1C);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_00114910
 * Original: 0x00114910 - 0x0011494B (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114910: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = edx;
    MEM8(ecx + 4) = LO8(edx);
    MEM32(ecx + 0x34) = edx;
    MEM32(ecx + 0x38) = edx;
    MEM32(ecx + 0x3C) = edx;
    PUSH32(esp, esi);
    MEM32(ecx + 0x30) = edx;
    MEM32(ecx + 0x2C) = edx;
    MEM32(ecx + 0x28) = edx;
    eax = ecx + 0x5C;
    esi = 4;

loc_00114932: ;
    MEM32(eax + -16) = edx;
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00114932; /* jne: not equal / not zero */

loc_0011493D: ;
    MEM32(ecx + 0x40) = edx;
    MEM32(ecx + 0x44) = edx;
    MEM32(ecx + 0x48) = edx;
    MEM32(ecx + 0x6C) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00114950
 * Original: 0x00114950 - 0x001149D5 (133 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114950(void)
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

loc_00114950: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00114961; /* je: equal / zero */

loc_0011495C: ;
    PUSH32(esp, 0x00114961u); RECOMP_ABI_CALL(0x00114910u, sub_00114910); /* call 0x00114910 */

loc_00114961: ;
    edi = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    ecx = esi + 4;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x00114976u); RECOMP_ABI_CALL(0x000E1310u, sub_000E1310); /* call 0x000E1310 */

loc_00114976: ;
    fp_push(MEMF(edi + 0x20)); /* fld float */
    fp_push(MEMF(edi + 0x24)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(edi + 0x28)); /* fld float */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x30) = edx;
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi + 0x44);
    MEM32(esi + 0x34) = eax;
    ecx = MEM32(edi + 0x48);
    MEM32(esi + 0x38) = ecx;
    edx = MEM32(edi + 0x4C);
    MEM32(esi + 0x3C) = edx;
    eax = edi + 0x60;
    ecx = 4;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001149B2: ;
    _fa = (uint32_t)(MEM32(eax + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -16), edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001149BA; /* jle: less or equal (signed <=) */

loc_001149B7: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001149BA: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001149C1; /* jle: less or equal (signed <=) */

loc_001149BE: ;
    MEM32(esi + 0x44) = MEM32(esi + 0x44) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001149C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001149B2; /* jne: not equal / not zero */

loc_001149C7: ;
    POP32(esp, edi);
    MEM32(esi) = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001149E0
 * Original: 0x001149E0 - 0x00114A06 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001149E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001149E0: ;
    MEM32(ecx) = 0x1C5204;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114A05; /* je: equal / zero */

loc_001149ED: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_001149FE; /* je: equal / zero */

loc_001149F7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001149FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001149FBu); } /* indirect call */
    }

loc_001149FD: ;
    esp += 4; return; /* ret */

loc_001149FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114A04u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00114A04: ;
    POP32(esp, ecx);

loc_00114A05: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00114A10
 * Original: 0x00114A10 - 0x00114A51 (65 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114A10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x1C5204;
    if (CMP_EQ(_fa, _fb)) goto loc_00114A3B; /* je: equal / zero */

loc_00114A20: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00114A32; /* je: equal / zero */

loc_00114A2A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00114A30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00114A2Eu); } /* indirect call */
    }

loc_00114A30: ;
    goto loc_00114A3B;

loc_00114A32: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114A38u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00114A38: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00114A3B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00114A4B; /* je: equal / zero */

loc_00114A42: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114A48u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00114A48: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00114A4B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00114A60
 * Original: 0x00114A60 - 0x00114A69 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114A60(void)
{

loc_00114A60: ;
    eax = ecx;
    MEM32(eax) = 0x1C51FC;
    esp += 4; return; /* ret */

}

/**
 * sub_00114A70
 * Original: 0x00114A70 - 0x00114AD7 (103 bytes, 42 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114A70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    edi = ecx;
    PUSH32(esp, 0x00114A81u); RECOMP_ABI_CALL(0x000F7090u, sub_000F7090); /* call 0x000F7090 */

loc_00114A81: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114AA6; /* jne: not equal / not zero */

loc_00114A8A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C5220);
    PUSH32(esp, 0x00114A95u); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_00114A95: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114A9Bu); RECOMP_ABI_CALL(0x000F6CC0u, sub_000F6CC0); /* call 0x000F6CC0 */

loc_00114A9B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00114AA6: ;
    PUSH32(esp, 0x1C5214);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114AB1u); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_00114AB1: ;
    eax = MEM32(0x1DEFB8);
    edx = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00114AC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00114ABFu); } /* indirect call */
    }

loc_00114AC2: ;
    PUSH32(esp, esi);
    MEM32(edi + 0x14) = eax;
    PUSH32(esp, 0x00114ACBu); RECOMP_ABI_CALL(0x000F6CC0u, sub_000F6CC0); /* call 0x000F6CC0 */

loc_00114ACB: ;
    eax = MEM32(edi + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00114AE0
 * Original: 0x00114AE0 - 0x00114B05 (37 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114AE0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00114AFB; /* je: equal / zero */

loc_00114AEF: ;
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(edx + 0xC);
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

loc_00114AFB: ;
    MEM32(eax + 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00114B10
 * Original: 0x00114B10 - 0x00114B44 (52 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114B10: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114B43; /* je: equal / zero */

loc_00114B17: ;
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x10) (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00114B3A; /* jne: not equal / not zero */

loc_00114B23: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00114B30; /* jne: not equal / not zero */

loc_00114B2C: ;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

loc_00114B30: ;
    eax = MEM32(eax + 0xC);
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

loc_00114B3A: ;
    eax = MEM32(eax + 0x5C);
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_00114B43: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00114B50
 * Original: 0x00114B50 - 0x00114B79 (41 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114B50: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x1C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00114B70; /* je: equal / zero */

loc_00114B61: ;
    ecx = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    esp += 8; return; /* ret 4 */

loc_00114B70: ;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00114B80
 * Original: 0x00114B80 - 0x00114BD7 (87 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114B80: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114BD6; /* je: equal / zero */

loc_00114B87: ;
    edx = MEM32(ecx + 8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(ecx + 8) = edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x44) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114BD5; /* jne: not equal / not zero */

loc_00114B94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114BCE; /* je: equal / zero */

loc_00114B98: ;
    edx = MEM32(ecx);
    edi = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114BC5; /* jne: not equal / not zero */

loc_00114BA2: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00114BB3; /* jne: not equal / not zero */

loc_00114BAB: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00114BB3: ;
    eax = MEM32(eax + 0xC);
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00114BC5: ;
    eax = MEM32(eax + 0x5C);
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_00114BCE: ;
    MEM32(ecx + 8) = 0;

loc_00114BD5: ;
    POP32(esp, edi);

loc_00114BD6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00114BE0
 * Original: 0x00114BE0 - 0x00114BF9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00114BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114BE0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114BF6; /* je: equal / zero */

loc_00114BE7: ;
    edx = MEM32(eax + 0x44);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114BF6; /* je: equal / zero */

loc_00114BEE: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(eax + ecx * 4 + 0x5C);
    esp += 4; return; /* ret */

loc_00114BF6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00114C00
 * Original: 0x00114C00 - 0x00114C24 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114C00: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C5240;
    PUSH32(esp, 0x00114C0Eu); RECOMP_ABI_CALL(0x001149E0u, sub_001149E0); /* call 0x001149E0 */

loc_00114C0E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00114C1E; /* je: equal / zero */

loc_00114C15: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114C1Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00114C1B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00114C1E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00114C30
 * Original: 0x00114C30 - 0x00114CD2 (162 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114C30: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114CD0; /* je: equal / zero */

loc_00114C3E: ;
    edx = MEM32(ecx + 4);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + edx + -16;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x10) = edx;
    MEM32(edx + 8) = esi;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 1 (32-bit) */
    eax = MEM32(ecx + 4);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00114C78; /* jle: less or equal (signed <=) */

loc_00114C5B: ;
    edx = eax + 0x10;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 4);
    edi = eax + -2;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + edx + -8) = edi;
    goto loc_00114C88;

loc_00114C78: ;
    MEM32(eax + 4) = esi;
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx + 4);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + eax + -8) = esi;

loc_00114C88: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx + 4);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + eax + -12) = esi;
    edx = MEM32(ecx + 8);
    esi = 1;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00114CC9; /* jle: less or equal (signed <=) */

loc_00114CA2: ;
    eax = 0x10;

loc_00114CA7: ;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edx + -16;
    MEM32(edx + 8) = edi;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edx + 0x10;
    MEM32(edx + 4) = edi;
    edx = MEM32(ecx + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00114CA7; /* jl: less (signed <) */

loc_00114CC9: ;
    eax = MEM32(ecx + 8);
    MEM32(ecx + 0xC) = eax;
    POP32(esp, edi);

loc_00114CD0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00114CE0
 * Original: 0x00114CE0 - 0x00114D6A (138 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114CE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114D56; /* je: equal / zero */

loc_00114CED: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114D0F; /* je: equal / zero */

loc_00114CF4: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00114D06; /* je: equal / zero */

loc_00114CFE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00114D04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00114D02u); } /* indirect call */
    }

loc_00114D04: ;
    goto loc_00114D0F;

loc_00114D06: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114D0Cu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00114D0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00114D0F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00114D4F; /* jle: less or equal (signed <=) */

loc_00114D13: ;
    ecx = ebx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00114D21u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00114D21: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114D41; /* je: equal / zero */

loc_00114D28: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x114A60);
    PUSH32(esp, ebx);
    esi = eax + 4;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    MEM32(eax) = ebx;
    PUSH32(esp, 0x00114D3Cu); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_00114D3C: ;
    eax = esi;
    POP32(esp, esi);
    goto loc_00114D43;

loc_00114D41: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00114D43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00114D56; /* jne: not equal / not zero */

loc_00114D4A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00114D4F: ;
    MEM32(edi + 4) = 0;

loc_00114D56: ;
    edx = MEM32(edi);
    ecx = edi;
    MEM32(edi + 8) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00114D60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00114D5Du); } /* indirect call */
    }

loc_00114D60: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00114D70
 * Original: 0x00114D70 - 0x00114DCB (91 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114D70: ;
    SET_LO8(edx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00114DB1; /* je: equal / zero */

loc_00114D7C: ;
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
    if ((_fas < 0)) goto loc_00114D9C; /* js: sign (negative) */

loc_00114D8D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi;

loc_00114D90: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0x1C51FC;
    if ((_fa != 0)) goto loc_00114D90; /* jne: not equal / not zero */

loc_00114D9C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00114DAA; /* je: equal / zero */

loc_00114DA1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00114DA7u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00114DA7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00114DAA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00114DB1: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    MEM32(esi) = 0x1C51FC;
    if (TEST_Z(_fa, _fb)) goto loc_00114DC5; /* je: equal / zero */

loc_00114DBC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114DC2u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00114DC2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00114DC5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00114DD0
 * Original: 0x00114DD0 - 0x00114E3B (107 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1C5200;
    if (CMP_EQ(_fa, _fb)) goto loc_00114E25; /* je: equal / zero */

loc_00114DE0: ;
    PUSH32(esp, edi);

loc_00114DE1: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(eax + 4);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00114DF2; /* je: equal / zero */

loc_00114DED: ;
    MEM32(edx + 4) = ecx;
    goto loc_00114DF5;

loc_00114DF2: ;
    MEM32(esi + 4) = ecx;

loc_00114DF5: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114E04; /* je: equal / zero */

loc_00114DFC: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_00114E0A;

loc_00114E04: ;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;

loc_00114E0A: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114E17; /* je: equal / zero */

loc_00114E11: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00114E17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00114E14u); } /* indirect call */
    }

loc_00114E17: ;
    edx = MEM32(esi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0xC) = edx;
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00114DE1; /* jne: not equal / not zero */

loc_00114E24: ;
    POP32(esp, edi);

loc_00114E25: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114E39; /* je: equal / zero */

loc_00114E2C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00114E32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00114E30u); } /* indirect call */
    }

loc_00114E32: ;
    MEM32(esi + 0x10) = 0;

loc_00114E39: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00114E40
 * Original: 0x00114E40 - 0x00114E5E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114E40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00114E48u); RECOMP_ABI_CALL(0x00114DD0u, sub_00114DD0); /* call 0x00114DD0 */

loc_00114E48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00114E58; /* je: equal / zero */

loc_00114E4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114E55u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00114E55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00114E58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00114E60
 * Original: 0x00114E60 - 0x00114EE7 (135 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114E60: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C5250;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = 0x1C5200;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x14) = edi;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114EB1; /* jne: not equal / not zero */

loc_00114E87: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00114E8Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00114E8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114EAC; /* je: equal / zero */

loc_00114E95: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax) = 0x1C5240;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    goto loc_00114EAE;

loc_00114EAC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00114EAE: ;
    MEM32(esi + 0x28) = eax;

loc_00114EB1: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x00114EBBu); RECOMP_ABI_CALL(0x00114CE0u, sub_00114CE0); /* call 0x00114CE0 */

loc_00114EBB: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x2C) = edi;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114ED9; /* je: equal / zero */

loc_00114ED4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00114ED9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00114ED6u); } /* indirect call */
    }

loc_00114ED9: ;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x24) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00114EF0
 * Original: 0x00114EF0 - 0x0011543E (1358 bytes, 470 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114EF0(void)
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

loc_00114EF0: ;
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x160;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x168);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C5264);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x00114F0Eu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00114F0E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114F23; /* jne: not equal / not zero */

loc_00114F15: ;
    eax = ebx + 0x10;
    edi = 0x70;
    MEM32(esp + 0x1C) = eax;
    goto loc_00114F2D;

loc_00114F23: ;
    edi = MEM32(ebx + 0x10);
    ecx = ebx + 0x14;
    MEM32(esp + 0x1C) = ecx;

loc_00114F2D: ;
    ebx = MEM32(ebx + 0xC);
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0x00114F41u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00114F41: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114F73; /* je: equal / zero */

loc_00114F48: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -4) = ebx;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    ebp = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00114F75; /* jl: less (signed <) */

loc_00114F59: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_00114F60: ;
    ecx = ebp;
    PUSH32(esp, 0x00114F67u); RECOMP_ABI_CALL(0x00114910u, sub_00114910); /* call 0x00114910 */

loc_00114F67: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00114F60; /* jne: not equal / not zero */

loc_00114F6D: ;
    eax = MEM32(esp + 0x14);
    goto loc_00114F75;

loc_00114F73: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00114F75: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00114FE6; /* jle: less or equal (signed <=) */

loc_00114F81: ;
    ebp = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = ebx;
    /* nop */

loc_00114F90: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x98 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00114FC3; /* jge: greater or equal (signed >=) */

loc_00114F98: ;
    PUSH32(esp, edi);
    eax = esp + 0x44;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114FA4u); RECOMP_ABI_CALL(0x000F5860u, sub_000F5860); /* call 0x000F5860 */

loc_00114FA4: ;
    ecx = 0x98;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    edx = esp + edi + 0x50;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00114FB8u); RECOMP_ABI_CALL(0x00100DA0u, sub_00100DA0); /* call 0x00100DA0 */

loc_00114FB8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    goto loc_00114FC5;

loc_00114FC3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_00114FC5: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00114FD1u); RECOMP_ABI_CALL(0x00114950u, sub_00114950); /* call 0x00114950 */

loc_00114FD1: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00114F90; /* jl: less (signed <) */

loc_00114FE6: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00115008; /* jle: less or equal (signed <=) */

loc_00114FF2: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x44;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00114FF8: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + edx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00114FF8; /* jl: less (signed <) */

loc_00115008: ;
    ebx = MEM32(esi + 0x10);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00115019u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00115019: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115029; /* je: equal / zero */

loc_00115022: ;
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0011502B;

loc_00115029: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011502B: ;
    MEM32(esi + 0xC) = eax;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ecx (32-bit) */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001151C5; /* jle: less or equal (signed <=) */

loc_0011503F: ;
    edx = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = edx;
    goto loc_00115054;

loc_00115052: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00115054: ;
    edx = MEM32(esi + 4);
    ebx = eax + edx;
    _fa = (uint32_t)(MEM32(ebx + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x44), ecx (32-bit) */
    MEM32(esp + 0x2C) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0011519E; /* jle: less or equal (signed <=) */

loc_00115067: ;
    eax = MEM32(esp + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x24) = eax;
    /* nop */

loc_00115080: ;
    ecx = MEM32(esp + 0x24);
    fp_push(MEMF(ebx + 0x28)); /* fld float */
    edx = MEM32(ecx);
    eax = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + eax + 0x28)); /* fsub dword ptr [edx + eax + 0x28] */
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + eax + 0x2C)); /* fsub dword ptr [edx + eax + 0x2c] */
    fp_push(MEMF(ebx + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + eax + 0x30)); /* fsub dword ptr [edx + eax + 0x30] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C51F4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c51f4] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00115120; /* jp: parity */

loc_001150CE: ;
    eax = MEM32(ebx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00115114; /* jle: less or equal (signed <=) */

loc_001150D5: ;
    eax = MEM32(ebx + 0x4C);
    fp_push(MEMF(eax + 0x20)); /* fld float */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB2C)); /* fmul dword ptr [0x1aeb2c] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB2C)); /* fmul dword ptr [0x1aeb2c] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB2C)); /* fmul dword ptr [0x1aeb2c] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x28)); /* fadd dword ptr [edx + 0x28] */
    MEMF(edx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x2C)); /* fadd dword ptr [edx + 0x2c] */
    MEMF(edx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x30)); /* fadd dword ptr [edx + 0x30] */
    MEMF(edx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00115120;

loc_00115114: ;
    fp_push(MEMF(edx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1AEB20)); /* fadd dword ptr [0x1aeb20] */
    MEMF(edx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */

loc_00115120: ;
    eax = MEM32(edx + 0x24);
    ecx = MEM32(esp + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebp = MEM32(edx + 0x40);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00115151; /* jle: less or equal (signed <=) */

loc_00115135: ;
    ebp = MEM32(ebx + 0x24);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00115140;

    /* nop */

loc_00115140: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115148; /* jne: not equal / not zero */

loc_00115144: ;
    MEM32(esp + 0x30) = ecx;

loc_00115148: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x40) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00115140; /* jl: less (signed <) */

loc_00115151: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esi + 0xC);
    ebp = MEM32(esp + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = ebp;
    ebp = MEM32(esp + 0x34);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011517Bu); RECOMP_ABI_CALL(0x00114710u, sub_00114710); /* call 0x00114710 */

loc_0011517B: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x14);
    edx = MEM32(eax + ecx + 0x44);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    MEM32(esp + 0x2C) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00115080; /* jl: less (signed <) */

loc_0011519E: ;
    ecx = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x20);
    edx = MEM32(esi + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00115052; /* jl: less (signed <) */

loc_001151C3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001151C5: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ecx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00115259; /* jle: less or equal (signed <=) */

loc_001151D2: ;
    ebp = MEM32(esp + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = ebx;
    /* nop */

loc_001151E0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x98 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00115226; /* jge: greater or equal (signed >=) */

loc_001151E8: ;
    PUSH32(esp, edi);
    edx = esp + 0x44;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001151F4u); RECOMP_ABI_CALL(0x000F5860u, sub_000F5860); /* call 0x000F5860 */

loc_001151F4: ;
    eax = 0x98;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + edi + 0x50;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00115208u); RECOMP_ABI_CALL(0x00100DA0u, sub_00100DA0); /* call 0x00100DA0 */

loc_00115208: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0011521Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011521Au); } /* indirect call */
    }

loc_0011521D: ;
    MEM32(ebx + 0x48) = eax;
    ebx = MEM32(esp + 0x14);
    goto loc_00115240;

loc_00115226: ;
    edx = MEM32(esi + 4);
    eax = ebx + edx;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00115239u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115236u); } /* indirect call */
    }

loc_00115239: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx + 0x48) = eax;

loc_00115240: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x70;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_001151E0; /* jl: less (signed <) */

loc_00115259: ;
    ecx = MEM32(esi + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0011532E; /* jle: less or equal (signed <=) */

loc_0011526A: ;
    MEM32(esp + 0x18) = eax;
    edi = edi;

loc_00115270: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + edx);
    ebp = eax + edx;
    edx = MEM32(ebp + 4);
    eax = MEM32(ecx + 0x24);
    ebx = MEM32(edx + 0x24);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ecx = MEM32(esp + 0x1C);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x98 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00115302; /* jge: greater or equal (signed >=) */

loc_0011529C: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = esp + 0xE0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001152ABu); RECOMP_ABI_CALL(0x000F5860u, sub_000F5860); /* call 0x000F5860 */

loc_001152AB: ;
    ebp = 0x98;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ecx = esp + edi + 0xE8;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001152C2u); RECOMP_ABI_CALL(0x00100DA0u, sub_00100DA0); /* call 0x00100DA0 */

loc_001152C2: ;
    PUSH32(esp, edi);
    edx = esp + 0x5C;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001152CEu); RECOMP_ABI_CALL(0x000F5860u, sub_000F5860); /* call 0x000F5860 */

loc_001152CE: ;
    PUSH32(esp, ebp);
    eax = esp + edi + 0x68;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001152DBu); RECOMP_ABI_CALL(0x00100DA0u, sub_00100DA0); /* call 0x00100DA0 */

loc_001152DB: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esp + 0x48);
    eax = MEM32(esi);
    ebx = edx + ecx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0xE0;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001152FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001152FAu); } /* indirect call */
    }

loc_001152FD: ;
    MEM32(ebx + 0x30) = eax;
    goto loc_0011530F;

loc_00115302: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0011530Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115309u); } /* indirect call */
    }

loc_0011530C: ;
    MEM32(ebp + 0x30) = eax;

loc_0011530F: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x34;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00115270; /* jl: less (signed <) */

loc_0011532E: ;
    eax = MEM32(esi + 8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001153CC; /* jle: less or equal (signed <=) */

loc_0011533B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00115340: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(ebx + eax + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001153BD; /* jne: not equal / not zero */

loc_0011534B: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0x24);
    if (CMP_EQ(_fa, _fb)) goto loc_0011535A; /* je: equal / zero */

loc_00115355: ;
    eax = MEM32(eax + 8);
    goto loc_0011535C;

loc_0011535A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011535C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011541D; /* jge: greater or equal (signed >=) */

loc_00115364: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x0011536Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011536B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011537D; /* je: equal / zero */

loc_00115372: ;
    ecx = eax;
    PUSH32(esp, 0x00115379u); RECOMP_ABI_CALL(0x00128910u, sub_00128910); /* call 0x00128910 */

loc_00115379: ;
    edi = eax;
    goto loc_0011537F;

loc_0011537D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011537F: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0011538Cu); RECOMP_ABI_CALL(0x00128930u, sub_00128930); /* call 0x00128930 */

loc_0011538C: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00115394u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115391u); } /* indirect call */
    }

loc_00115394: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001153BD; /* je: equal / zero */

loc_00115398: ;
    MEM32(eax + 0xC) = edi;
    ecx = MEM32(esi + 0x20);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001153B4; /* je: equal / zero */

loc_001153AF: ;
    MEM32(ecx + 4) = eax;
    goto loc_001153B7;

loc_001153B4: ;
    MEM32(esi + 0x1C) = eax;

loc_001153B7: ;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001153BD: ;
    eax = MEM32(esi + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x70;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00115340; /* jl: less (signed <) */

loc_001153CC: ;
    esi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011542C; /* je: equal / zero */

loc_001153D3: ;
    ebx = MEM32(esi + 4);
    edi = esi;
    goto loc_001153E0;

    /* nop */

loc_001153E0: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x44);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00115412; /* jle: less or equal (signed <=) */

loc_001153EF: ;
    edx = 0x28;

loc_001153F4: ;
    ecx = MEM32(ecx + edx + 0x34);
    ecx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0x6C);
    MEM32(eax + edx) = ecx;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(eax + 0x10);
    ebp = MEM32(ecx + 0x44);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001153F4; /* jl: less (signed <) */

loc_00115412: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    edi = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0011542C; /* je: equal / zero */

loc_00115418: ;
    ebx = MEM32(ebx + 4);
    goto loc_001153E0;

loc_0011541D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x160;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011542C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x160;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00115440
 * Original: 0x00115440 - 0x001154ED (173 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00115440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115440: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001154EA; /* je: equal / zero */

loc_00115451: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115464; /* je: equal / zero */

loc_00115458: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00115461u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00115461: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00115464: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(edi + 4) = ebp;
    MEM32(edi + 8) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0011547D; /* je: equal / zero */

loc_00115471: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011547Au); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011547A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011547D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(edi + 0xC) = ebp;
    MEM32(edi + 0x10) = ebp;
    MEM32(edi + 0x14) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_001154E8; /* je: equal / zero */

loc_0011548F: ;
    ebx = MEM32(esi + 4);

loc_00115492: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011549F; /* je: equal / zero */

loc_00115499: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0011549Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011549Du); } /* indirect call */
    }

loc_0011549F: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001154AE; /* je: equal / zero */

loc_001154A6: ;
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    goto loc_001154B4;

loc_001154AE: ;
    edx = MEM32(esi + 4);
    MEM32(edi + 0x1C) = edx;

loc_001154B4: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001154C3; /* je: equal / zero */

loc_001154BB: ;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    goto loc_001154C9;

loc_001154C3: ;
    edx = MEM32(esi + 8);
    MEM32(edi + 0x20) = edx;

loc_001154C9: ;
    ecx = MEM32(edi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001154D6; /* je: equal / zero */

loc_001154D0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001154D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001154D3u); } /* indirect call */
    }

loc_001154D6: ;
    ecx = MEM32(edi + 0x24);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(edi + 0x24) = ecx;
    esi = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001154E8; /* je: equal / zero */

loc_001154E3: ;
    ebx = MEM32(ebx + 4);
    goto loc_00115492;

loc_001154E8: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001154EA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001154F0
 * Original: 0x001154F0 - 0x00115507 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001154F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001154F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C5250;
    PUSH32(esp, 0x001154FEu); RECOMP_ABI_CALL(0x00115440u, sub_00115440); /* call 0x00115440 */

loc_001154FE: ;
    ecx = esi + 0x18;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00114DD0(); return; /* tail jmp 0x00114DD0 */

}

/**
 * sub_00115510
 * Original: 0x00115510 - 0x00115540 (48 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00115510: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C5250;
    PUSH32(esp, 0x0011551Eu); RECOMP_ABI_CALL(0x00115440u, sub_00115440); /* call 0x00115440 */

loc_0011551E: ;
    ecx = esi + 0x18;
    PUSH32(esp, 0x00115526u); RECOMP_ABI_CALL(0x00114DD0u, sub_00114DD0); /* call 0x00114DD0 */

loc_00115526: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00115536; /* je: equal / zero */

loc_0011552D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115533u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00115533: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00115536: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00115540(); return; /* fallthrough 0x00115540 */

}

/**
 * sub_00115540
 * Original: 0x00115540 - 0x00115564 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115540: ;
    eax = MEM32(0x1DFD88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011554F; /* je: equal / zero */

loc_00115549: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011554Fu); RECOMP_ABI_CALL(0x000C9F06u, sub_000C9F06); /* call 0x000C9F06 */

loc_0011554F: ;
    eax = MEM32(0x1DFD8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011555E; /* je: equal / zero */

loc_00115558: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011555Eu); RECOMP_ABI_CALL(0x000C9F06u, sub_000C9F06); /* call 0x000C9F06 */

loc_0011555E: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00115570
 * Original: 0x00115570 - 0x0011558D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115570: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011557Du); RECOMP_ABI_CALL(0x000C9F06u, sub_000C9F06); /* call 0x000C9F06 */

loc_0011557D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115583u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00115583: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00115590
 * Original: 0x00115590 - 0x001155B8 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115590(void)
{

loc_00115590: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x001155B6u); RECOMP_ABI_CALL(0x00132F3Du, sub_00132F3D); /* call 0x00132F3D */

loc_001155B6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001155C0
 * Original: 0x001155C0 - 0x001155EA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001155C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001155C0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax * 4 + 0x1C5278);
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001155DFu); RECOMP_ABI_CALL(0x00133097u, sub_00133097); /* call 0x00133097 */

loc_001155DF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001155F0
 * Original: 0x001155F0 - 0x001155FF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001155F0(void)
{

loc_001155F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001155FEu); RECOMP_ABI_CALL(0x001332BEu, sub_001332BE); /* call 0x001332BE */

loc_001155FE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00115600
 * Original: 0x00115600 - 0x0011562E (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115600: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x1DFD94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115622; /* je: equal / zero */

loc_0011560A: ;
    ecx = MEM32(0x1DFD88);
    PUSH32(esp, 1);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1DFD60);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00115622u); RECOMP_ABI_CALL(0x000CA84Cu, sub_000CA84C); /* call 0x000CA84C */

loc_00115622: ;
    MEM32(0x1DFD94) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00115630
 * Original: 0x00115630 - 0x001157BB (395 bytes, 112 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00115630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(ebp + -96) = 0;
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00115647u); RECOMP_ABI_CALL(0x001348B1u, sub_001348B1); /* call 0x001348B1 */

loc_00115647: ;
    ecx = MEM32(ebp + -8);
    MEM32(ebp + -104) = ecx;
    PUSH32(esp, 0);
    edx = MEM32(ebp + -104);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00115658u); RECOMP_ABI_CALL(0x0013474Du, sub_0013474D); /* call 0x0013474D */

loc_00115658: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011565Du); RECOMP_ABI_CALL(0x00068930u, sub_00068930); /* call 0x00068930 */

loc_0011565D: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115670; /* je: equal / zero */

loc_00115666: ;
    PUSH32(esp, 2);
    ecx = MEM32(ebp + -12);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00115670u); RECOMP_ABI_CALL(0x00113140u, sub_00113140); /* call 0x00113140 */

loc_00115670: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00115675u); RECOMP_ABI_CALL(0x0009FBB0u, sub_0009FBB0); /* call 0x0009FBB0 */

loc_00115675: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115686; /* je: equal / zero */

loc_00115679: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011567Eu); RECOMP_ABI_CALL(0x0009FBB0u, sub_0009FBB0); /* call 0x0009FBB0 */

loc_0011567E: ;
    MEM32(ebp + -100) = eax;
    goto loc_00115719;

loc_00115686: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011568Du); RECOMP_ABI_CALL(0x001A0460u, sub_001A0460); /* call 0x001A0460 */

loc_0011568D: ;
    MEM32(ebp + -4) = eax;
    ecx = 0x11;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -88;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(ebp + -88) = 0x280;
    MEM32(ebp + -84) = 0x1E0;
    MEM32(ebp + -80) = 5;
    MEM32(ebp + -76) = 2;
    MEM32(ebp + -72) = 0x11;
    MEM32(ebp + -68) = 1;
    eax = MEM32(ebp + -96);
    MEM32(ebp + -64) = eax;
    MEM32(ebp + -60) = 0;
    MEM32(ebp + -56) = 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 5 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = ecx + ecx + 0x2A;
    MEM32(ebp + -52) = ecx;
    MEM32(ebp + -48) = 1;
    MEM32(ebp + -44) = 0;
    MEM32(ebp + -40) = 1;
    edx = ebp + -100;
    PUSH32(esp, edx);
    eax = ebp + -88;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    ecx = MEM32(ebp + -96);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00115716u); RECOMP_ABI_CALL(0x0019F1F0u, sub_0019F1F0); /* call 0x0019F1F0 */

loc_00115716: ;
    MEM32(ebp + -92) = eax;

loc_00115719: ;
    edx = ebp + -8;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00115722u); RECOMP_ABI_CALL(0x001348B1u, sub_001348B1); /* call 0x001348B1 */

loc_00115722: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -108) = eax;
    PUSH32(esp, 0);
    ecx = MEM32(ebp + -108);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00115733u); RECOMP_ABI_CALL(0x0013474Du, sub_0013474D); /* call 0x0013474D */

loc_00115733: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011573Au); RECOMP_ABI_CALL(0x00195B70u, sub_00195B70); /* call 0x00195B70 */

loc_0011573A: ;
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFF000060u);
    PUSH32(esp, 0xF1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00115757u); RECOMP_ABI_CALL(0x001985B0u, sub_001985B0); /* call 0x001985B0 */

loc_00115757: ;
    edx = MEM32(ebp + -16);
    MEM32(ebp + -112) = edx;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -116) = eax;
    PUSH32(esp, 0xA4);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1C52C8);
    ecx = MEM32(ebp + -112);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + -116);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011577Eu); RECOMP_ABI_CALL(0x001349FEu, sub_001349FE); /* call 0x001349FE */

loc_0011577E: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -120) = eax;
    ecx = MEM32(ebp + -8);
    MEM32(ebp + -124) = ecx;
    PUSH32(esp, 0xDC);
    PUSH32(esp, 0xAA);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1C528C);
    edx = MEM32(ebp + -120);
    PUSH32(esp, edx);
    eax = MEM32(ebp + -124);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001157A8u); RECOMP_ABI_CALL(0x001349FEu, sub_001349FE); /* call 0x001349FE */

loc_001157A8: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001157AFu); RECOMP_ABI_CALL(0x001A02B0u, sub_001A02B0); /* call 0x001A02B0 */

loc_001157AF: ;
    MEM32(ebp + -92) = 0;
    goto loc_00115670;

}

/**
 * sub_001157C0
 * Original: 0x001157C0 - 0x00115870 (176 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001157C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001157C0: ;
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(0x1DFDA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DFDA0), 1 (32-bit) */
    MEM32(esp) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001157E4; /* jne: not equal / not zero */

loc_001157D7: ;
    PUSH32(esp, 0x1C5394);
    PUSH32(esp, 0x001157E1u); RECOMP_ABI_CALL(0x00115630u, sub_00115630); /* call 0x00115630 */

loc_001157E1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001157E4: ;
    ecx = MEM32(esp + 0x210);
    edx = MEM32(esp + 0x20C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x210);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011580Cu); RECOMP_ABI_CALL(0x00132E50u, sub_00132E50); /* call 0x00132E50 */

loc_0011580C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115865; /* jne: not equal / not zero */

loc_00115812: ;
    PUSH32(esp, 0x00115817u); RECOMP_ABI_CALL(0x000CA7DFu, sub_000CA7DF); /* call 0x000CA7DF */

loc_00115817: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115860; /* je: equal / zero */

loc_0011581E: ;
    PUSH32(esp, 0x00115823u); RECOMP_ABI_CALL(0x000CA7DFu, sub_000CA7DF); /* call 0x000CA7DF */

loc_00115823: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115860; /* je: equal / zero */

loc_00115828: ;
    PUSH32(esp, 0x0011582Du); RECOMP_ABI_CALL(0x000CA7DFu, sub_000CA7DF); /* call 0x000CA7DF */

loc_0011582D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115860; /* je: equal / zero */

loc_00115832: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00115838u); RECOMP_ABI_CALL(0x000CA7DFu, sub_000CA7DF); /* call 0x000CA7DF */

loc_00115838: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x1C5328);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00115848u); RECOMP_ABI_CALL(0x0012C654u, sub_0012C654); /* call 0x0012C654 */

loc_00115848: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00115852u); RECOMP_ABI_CALL(0x00115630u, sub_00115630); /* call 0x00115630 */

loc_00115852: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00115860: ;
    PUSH32(esp, 0x00115865u); RECOMP_ABI_CALL(0x000CA7DFu, sub_000CA7DF); /* call 0x000CA7DF */

loc_00115865: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115870
 * Original: 0x00115870 - 0x0011597A (266 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00115870: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10C);
    _fa = (uint32_t)(MEM8(ebx + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 1), 0x3A (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115972; /* je: equal / zero */

loc_00115888: ;
    eax = MEM32(esp + 0x108);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x1B0638);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011589Fu); RECOMP_ABI_CALL(0x0012B3E8u, sub_0012B3E8); /* call 0x0012B3E8 */

loc_0011589F: ;
    eax = ebx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;

loc_001158A6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001158A6; /* jne: not equal / not zero */

loc_001158AD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = esp + 0x10;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001158B7: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001158B7; /* jne: not equal / not zero */

loc_001158BF: ;
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    edx = ebx;
    ecx = esp + 0x10;
    eax = esp + 0x10;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_001158E0;

    /* nop */

loc_001158E0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001158E0; /* jne: not equal / not zero */

loc_001158EA: ;
    eax = ebx;
    edx = eax + 1;
    /* nop */

loc_001158F0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001158F0; /* jne: not equal / not zero */

loc_001158F7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00115931; /* jle: less or equal (signed <=) */

loc_00115905: ;
    SET_LO8(edx, 0x2E);

loc_00115907: ;
    _fa = (uint32_t)(MEM8(ebx + ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + ecx), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115912; /* jne: not equal / not zero */

loc_0011590C: ;
    _fa = (uint32_t)(MEM8(ebx + ecx + 1)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + ecx + 1), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115919; /* je: equal / zero */

loc_00115912: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00115907; /* jg: greater (signed >) */

loc_00115917: ;
    goto loc_00115931;

loc_00115919: ;
    ebp = ecx;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00115931; /* jle: less or equal (signed <=) */

loc_00115922: ;
    _fa = (uint32_t)(MEM8(ecx + ebx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + ebx), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011592F; /* je: equal / zero */

loc_00115928: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00115922; /* jg: greater (signed >) */

loc_0011592D: ;
    goto loc_00115931;

loc_0011592F: ;
    esi = ecx;

loc_00115931: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00115946; /* jle: less or equal (signed <=) */

loc_00115937: ;
    _fa = (uint32_t)(MEM8(ecx + ebx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + ebx), 0x2F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115941; /* jne: not equal / not zero */

loc_0011593D: ;
    MEM8(ecx + ebx) = 0x5C;

loc_00115941: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00115937; /* jl: less (signed <) */

loc_00115946: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011596F; /* je: equal / zero */

loc_0011594B: ;
    edi = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_0011596B; /* jge: greater or equal (signed >=) */

loc_00115955: ;
    esi = ebx + ebp + 2;
    /* nop */

loc_00115960: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(ecx + ebx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00115960; /* jl: less (signed <) */

loc_0011596B: ;
    MEM8(ecx + ebx) = 0;

loc_0011596F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00115972: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115980
 * Original: 0x00115980 - 0x00115A5F (223 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115980: ;
    eax = MEM32(0x1DFD94);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001159AD; /* je: equal / zero */

loc_0011598F: ;
    ecx = MEM32(0x1DFD88);
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1DFD60);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001159A7u); RECOMP_ABI_CALL(0x000CA84Cu, sub_000CA84C); /* call 0x000CA84C */

loc_001159A7: ;
    MEM32(0x1DFD94) = esi;

loc_001159AD: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x1DFD60);
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(0x1DFD88);
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x1DFD68) = edx;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(0x1DFD6C) = esi;
    MEM32(0x1DFD70) = esi;
    PUSH32(esp, 0x001159E8u); RECOMP_ABI_CALL(0x00132E50u, sub_00132E50); /* call 0x00132E50 */

loc_001159E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115A27; /* jne: not equal / not zero */

loc_001159EC: ;
    PUSH32(esp, 0x001159F1u); RECOMP_ABI_CALL(0x000CA7DFu, sub_000CA7DF); /* call 0x000CA7DF */

loc_001159F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115A27; /* je: equal / zero */

loc_001159F8: ;
    PUSH32(esp, 0x001159FDu); RECOMP_ABI_CALL(0x000CA7DFu, sub_000CA7DF); /* call 0x000CA7DF */

loc_001159FD: ;
    PUSH32(esp, 0x00115A02u); RECOMP_ABI_CALL(0x000CA7DFu, sub_000CA7DF); /* call 0x000CA7DF */

loc_00115A02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115A20; /* je: equal / zero */

loc_00115A09: ;
    PUSH32(esp, 0x00115A0Eu); RECOMP_ABI_CALL(0x000CA7DFu, sub_000CA7DF); /* call 0x000CA7DF */

loc_00115A0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115A20; /* je: equal / zero */

loc_00115A13: ;
    PUSH32(esp, 0x1C53A0);
    PUSH32(esp, 0x00115A1Du); RECOMP_ABI_CALL(0x00115630u, sub_00115630); /* call 0x00115630 */

loc_00115A1D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00115A20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00115A27: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), esi (32-bit) */
    MEM32(0x1DFD94) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00115A55; /* jne: not equal / not zero */

loc_00115A37: ;
    edx = MEM32(0x1DFD88);
    PUSH32(esp, 1);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1DFD60);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00115A4Fu); RECOMP_ABI_CALL(0x000CA84Cu, sub_000CA84C); /* call 0x000CA84C */

loc_00115A4F: ;
    MEM32(0x1DFD94) = esi;

loc_00115A55: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115A60
 * Original: 0x00115A60 - 0x00115ADE (126 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115A60: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x1C3B80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00115A7Au); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00115A7A: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x1CF4C0);
    PUSH32(esp, 0x00115A89u); RECOMP_ABI_CALL(0x00115870u, sub_00115870); /* call 0x00115870 */

loc_00115A89: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x60000000);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00115AA8u); RECOMP_ABI_CALL(0x001332F9u, sub_001332F9); /* call 0x001332F9 */

loc_00115AA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x1DFD88) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00115AD2; /* jne: not equal / not zero */

loc_00115AB2: ;
    PUSH32(esp, 0x1C53AC);
    MEM32(0x1DFD88) = 0;
    PUSH32(esp, 0x00115AC6u); RECOMP_ABI_CALL(0x00115630u, sub_00115630); /* call 0x00115630 */

loc_00115AC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00115AD2: ;
    eax = 1;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115AE0
 * Original: 0x00115AE0 - 0x00115BA5 (197 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115AE0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00115AEEu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00115AEE: ;
    esi = eax;
    eax = MEM32(esp + 0x10C);
    edx = esp + 8;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00115B00: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115B00; /* jne: not equal / not zero */

loc_00115B0A: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1CF4C0);
    PUSH32(esp, 0x00115B19u); RECOMP_ABI_CALL(0x00115870u, sub_00115870); /* call 0x00115870 */

loc_00115B19: ;
    eax = MEM32(esp + 0x114);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115B52; /* jne: not equal / not zero */

loc_00115B27: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00115B41u); RECOMP_ABI_CALL(0x001332F9u, sub_001332F9); /* call 0x001332F9 */

loc_00115B41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115B9B; /* je: equal / zero */

loc_00115B46: ;
    MEM32(esi) = eax;

loc_00115B48: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00115B52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115B70; /* jne: not equal / not zero */

loc_00115B57: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    goto loc_00115B8C;

loc_00115B70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115B48; /* jne: not equal / not zero */

loc_00115B75: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC0000000u);
    eax = esp + 0x1C;
    PUSH32(esp, eax);

loc_00115B8C: ;
    PUSH32(esp, 0x00115B91u); RECOMP_ABI_CALL(0x001332F9u, sub_001332F9); /* call 0x001332F9 */

loc_00115B91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115B46; /* jne: not equal / not zero */

loc_00115B96: ;
    PUSH32(esp, 0x00115B9Bu); RECOMP_ABI_CALL(0x000CA7DFu, sub_000CA7DF); /* call 0x000CA7DF */

loc_00115B9B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115BB0
 * Original: 0x00115BB0 - 0x00115C6F (191 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115BB0: ;
    eax = MEM32(esp + 4);
    edx = esp + -576;
    _fb = (uint32_t)(0x248) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x248;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00115BC3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115BC3; /* jne: not equal / not zero */

loc_00115BCD: ;
    SET_LO8(eax, MEM8(esp + 0x250));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115BFF; /* je: equal / zero */

loc_00115BD8: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x1C5284);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00115BEBu); RECOMP_ABI_CALL(0x0012B3E8u, sub_0012B3E8); /* call 0x0012B3E8 */

loc_00115BEB: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00115BFAu); RECOMP_ABI_CALL(0x00115870u, sub_00115870); /* call 0x00115870 */

loc_00115BFA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00115C11;

loc_00115BFF: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1CF4C0);
    PUSH32(esp, 0x00115C0Eu); RECOMP_ABI_CALL(0x00115870u, sub_00115870); /* call 0x00115870 */

loc_00115C0E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00115C11: ;
    eax = esp + 8;
    edx = eax + 1;

loc_00115C18: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115C18; /* jne: not equal / not zero */

loc_00115C1F: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(esp + eax + 8)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + eax + 8), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115C3D; /* jne: not equal / not zero */

loc_00115C28: ;
    eax = esp + 8;
    edx = eax + 1;
    /* nop */

loc_00115C30: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115C30; /* jne: not equal / not zero */

loc_00115C37: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esp + eax + 8) = LO8(ecx);

loc_00115C3D: ;
    edx = esp + 0x108;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00115C4Fu); RECOMP_ABI_CALL(0x001337E2u, sub_001337E2); /* call 0x001337E2 */

loc_00115C4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115C5D; /* jne: not equal / not zero */

loc_00115C54: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x248) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x248;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00115C5D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00115C63u); RECOMP_ABI_CALL(0x000C9F06u, sub_000C9F06); /* call 0x000C9F06 */

loc_00115C63: ;
    eax = 1;
    _fb = (uint32_t)(0x248) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x248;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115C70
 * Original: 0x00115C70 - 0x00115C90 (32 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115C70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00115C78u); RECOMP_ABI_CALL(0x00128A20u, sub_00128A20); /* call 0x00128A20 */

loc_00115C78: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi) = 0x1C53C4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00115C90
 * Original: 0x00115C90 - 0x00115CA0 (16 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00115C90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x54) = eax;
    MEM32(ecx + 0x58) = eax;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00115CA0(); return; /* fallthrough 0x00115CA0 */

}

/**
 * sub_00115CA0
 * Original: 0x00115CA0 - 0x00115CAA (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115CA0(void)
{

loc_00115CA0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00115CB0
 * Original: 0x00115CB0 - 0x00115D9A (234 bytes, 91 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115CB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = MEM32(edi);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00115CC9u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00115CC9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115CF0; /* je: equal / zero */

loc_00115CD0: ;
    ecx = ebx + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = ebx;
    edx = eax + 4;
    if (CMP_L(_fas, _fbs)) goto loc_00115CEC; /* jl: less (signed <) */

loc_00115CDC: ;
    eax = edx + 0x30;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00115CE0: ;
    MEM32(eax) = 0;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00115CE0; /* jne: not equal / not zero */

loc_00115CEC: ;
    eax = edx;
    goto loc_00115CF2;

loc_00115CF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00115CF2: ;
    MEM32(esi + 0x4C) = eax;
    ecx = MEM32(edi);
    MEM32(esi + 4) = ecx;
    edx = MEM32(edi + 0x14);
    MEM32(esi + 0x38) = edx;
    eax = MEM32(edi + 0x1C);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00115D0Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00115D0E: ;
    MEM32(esi + 0x3C) = eax;
    ecx = MEM32(edi + 0x1C);
    MEM32(esi + 0x40) = ecx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00115D40; /* jle: less or equal (signed <=) */

loc_00115D22: ;
    edx = MEM32(edi + 0x18);
    ebx = MEM32(edx + eax * 8);
    ecx = MEM32(esi + 0x3C);
    MEM32(ecx + eax * 8) = ebx;
    edx = MEM32(edx + eax * 8 + 4);
    MEM32(ecx + eax * 8 + 4) = edx;
    ecx = MEM32(esi + 0x40);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00115D22; /* jl: less (signed <) */

loc_00115D40: ;
    edx = MEM32(edi + 0x24);
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00115D4Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00115D4C: ;
    MEM32(esi + 0x44) = eax;
    ecx = MEM32(edi + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x48) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00115D7C; /* jle: less or equal (signed <=) */

loc_00115D5E: ;
    edi = edi;

loc_00115D60: ;
    ecx = MEM32(edi + 0x20);
    ebx = MEM32(ecx + eax * 8);
    edx = MEM32(esi + 0x44);
    MEM32(edx + eax * 8) = ebx;
    ecx = MEM32(ecx + eax * 8 + 4);
    MEM32(edx + eax * 8 + 4) = ecx;
    ecx = MEM32(esi + 0x48);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00115D60; /* jl: less (signed <) */

loc_00115D7C: ;
    edx = MEM32(edi + 0x10);
    MEM32(esi + 0x34) = edx;
    eax = MEM32(edi + 4);
    MEM32(esi + 0x28) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x2C) = ecx;
    edx = MEM32(edi + 0xC);
    POP32(esp, edi);
    MEM32(esi + 0x30) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00115DA0
 * Original: 0x00115DA0 - 0x00115DFD (93 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115DA0(void)
{

loc_00115DA0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
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
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ecx + 0x14;
    edi = MEM32(edx);
    esi = eax + 0x14;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(esi + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(esi + 0xC) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x2C) = edx;
    ecx = MEM32(ecx + 0x30);
    POP32(esp, edi);
    MEM32(eax + 0x30) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00115E00
 * Original: 0x00115E00 - 0x00115E91 (145 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115E00(void)
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

loc_00115E00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x54);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x50);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115E8C; /* je: equal / zero */

loc_00115E0E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_00115E13: ;
    ecx = MEM32(esi + 0x4C);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + ecx + 0x30)); /* fadd dword ptr [eax + ecx + 0x30] */
    MEMF(eax + ecx + 0x30) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x28] */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00115E61; /* jne: not equal / not zero */

loc_00115E33: ;
    edx = MEM32(esi + 0x50);
    eax = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x50) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00115E4C; /* jge: greater or equal (signed >=) */

loc_00115E43: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00115E43; /* jl: less (signed <) */

loc_00115E49: ;
    MEM32(esi + 0x50) = ecx;

loc_00115E4C: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00115E5C; /* jl: less (signed <) */

loc_00115E53: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00115E53; /* jge: greater or equal (signed >=) */

loc_00115E59: ;
    MEM32(esi + 0x50) = ecx;

loc_00115E5C: ;
    MEM32(esi + 0x58) = MEM32(esi + 0x58) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00115E6A;

loc_00115E61: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00115E6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115E67u); } /* indirect call */
    }

loc_00115E6A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 4);
    if ((_fas >= 0)) goto loc_00115E74; /* jns: not sign (positive) */

loc_00115E70: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_00115E70; /* js: sign (negative) */

loc_00115E74: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00115E86; /* jl: less (signed <) */

loc_00115E78: ;
    ecx = eax;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    /* nop */

loc_00115E80: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00115E80; /* jge: greater or equal (signed >=) */

loc_00115E86: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x54) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115E13; /* jne: not equal / not zero */

loc_00115E8B: ;
    POP32(esp, ebx);

loc_00115E8C: ;
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
 * sub_00115EA0
 * Original: 0x00115EA0 - 0x00115F2C (140 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115EA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x54);
    eax = ebx + 1;
    MEM32(esi + 0x54) = eax;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_00115EC1; /* jge: greater or equal (signed >=) */

loc_00115EB8: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00115EB8; /* jl: less (signed <) */

loc_00115EBE: ;
    MEM32(esi + 0x54) = ecx;

loc_00115EC1: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00115ED1; /* jl: less (signed <) */

loc_00115EC8: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00115EC8; /* jge: greater or equal (signed >=) */

loc_00115ECE: ;
    MEM32(esi + 0x54) = ecx;

loc_00115ED1: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115F02; /* jne: not equal / not zero */

loc_00115ED9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x50) = eax;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esi + 4);
    if (CMP_GE(_fas, _fbs)) goto loc_00115EF0; /* jge: greater or equal (signed >=) */

loc_00115EE7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00115EE7; /* jl: less (signed <) */

loc_00115EED: ;
    MEM32(esi + 0x50) = ecx;

loc_00115EF0: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00115F05; /* jl: less (signed <) */

loc_00115EF7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00115EF7; /* jge: greater or equal (signed >=) */

loc_00115EFD: ;
    MEM32(esi + 0x50) = ecx;
    goto loc_00115F05;

loc_00115F02: ;
    MEM32(esi + 0x58) = MEM32(esi + 0x58) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00115F05: ;
    ecx = MEM32(esp + 0x10);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00115F19u); RECOMP_ABI_CALL(0x00115DA0u, sub_00115DA0); /* call 0x00115DA0 */

loc_00115F19: ;
    edx = MEM32(esi + 0x4C);
    MEM32(edx + edi + 0x30) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00115F30
 * Original: 0x00115F30 - 0x001160D6 (422 bytes, 131 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115F30(void)
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

loc_00115F30: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001160CE; /* jle: less or equal (signed <=) */

loc_00115F41: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00115F47u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00115F47: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = 0x1DE768;
    PUSH32(esp, 0x00115F56u); RECOMP_ABI_CALL(0x000192E0u, sub_000192E0); /* call 0x000192E0 */

loc_00115F56: ;
    edx = esp + 0x1C;
    ecx = 0x60;
    PUSH32(esp, 0x00115F64u); RECOMP_ABI_CALL(0x00195820u, sub_00195820); /* call 0x00195820 */

loc_00115F64: ;
    ecx = MEM32(ebx + 0x38);
    edx = MEM32(ebx + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00115F73u); RECOMP_ABI_CALL(0x00128A60u, sub_00128A60); /* call 0x00128A60 */

loc_00115F73: ;
    ebp = MEM32(ebx + 0x50);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 0x54) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001160C1; /* je: equal / zero */

loc_00115F7F: ;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = 0x3F800000;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, edi);

loc_00115F91: ;
    edx = MEM32(ebx + 0x4C);
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x34);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edi = esi + 0x2C;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00115FAEu); RECOMP_ABI_CALL(0x0003FAA0u, sub_0003FAA0); /* call 0x0003FAA0 */

loc_00115FAE: ;
    edx = MEM32(ebx + 0x44);
    eax = MEM32(esi + 0x28);
    ecx = MEM32(edx + eax * 8);
    eax = edx + eax * 8;
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    PUSH32(esp, 0x00115FD6u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00115FD6: ;
    ecx = MEM32(ebx + 0x3C);
    edi = eax;
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x58) = 0;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x24);
    MEM32(esi + 0x20) = ecx;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    ecx = esp + 0x30;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00116016u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00116016: ;
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi);
    MEM32(esp + 0x38) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esp + 0x3C) = edx;
    eax = MEM32(edi + 8);
    MEM32(esp + 0x40) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esp + 0x44) = ecx;
    edx = MEM32(edi);
    MEM32(esp + 0x48) = edx;
    eax = MEM32(edi + 0xC);
    MEM32(esp + 0x4C) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esp + 0x50) = ecx;
    edx = MEM32(edi + 0xC);
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x64) = 0x40000000;
    MEM32(esp + 0x58) = 4;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00116097u); RECOMP_ABI_CALL(0x000E80B0u, sub_000E80B0); /* call 0x000E80B0 */

loc_00116097: ;
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001160A4; /* jns: not sign (positive) */

loc_001160A0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_001160A0; /* js: sign (negative) */

loc_001160A4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001160B6; /* jl: less (signed <) */

loc_001160A8: ;
    ecx = eax;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    /* nop */

loc_001160B0: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001160B0; /* jge: greater or equal (signed >=) */

loc_001160B6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 0x54) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115F91; /* jne: not equal / not zero */

loc_001160BF: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001160C1: ;
    ecx = ebx;
    PUSH32(esp, 0x001160C8u); RECOMP_ABI_CALL(0x00128AF0u, sub_00128AF0); /* call 0x00128AF0 */

loc_001160C8: ;
    PUSH32(esp, 0x001160CDu); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_001160CD: ;
    POP32(esp, ebp);

loc_001160CE: ;
    eax = MEM32(ebx + 0x58);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001160E0
 * Original: 0x001160E0 - 0x00116139 (89 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001160E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001160E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1C53C4;
    if (CMP_EQ(_fa, _fb)) goto loc_00116100; /* je: equal / zero */

loc_001160F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001160F6u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001160F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x44) = 0;

loc_00116100: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116117; /* je: equal / zero */

loc_00116107: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011610Du); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011610D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3C) = 0;

loc_00116117: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116131; /* je: equal / zero */

loc_0011611E: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00116127u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00116127: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x4C) = 0;

loc_00116131: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00128A10(); return; /* tail jmp 0x00128A10 */

}

/**
 * sub_00116140
 * Original: 0x00116140 - 0x00116160 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00116140: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00116148u); RECOMP_ABI_CALL(0x001160E0u, sub_001160E0); /* call 0x001160E0 */

loc_00116148: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00116158; /* je: equal / zero */

loc_0011614F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00116155u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00116155: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00116158: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00116160(); return; /* fallthrough 0x00116160 */

}

/**
 * sub_00116160
 * Original: 0x00116160 - 0x001161CA (106 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00116160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116160: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 3 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00116188; /* je: equal / zero */

loc_0011616E: ;
    eax = MEM32(ebp);
    ecx = edi + 4;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1C53F0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00116183u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116180u); } /* indirect call */
    }

loc_00116183: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00116188: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = edi + 8;
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001161A3; /* je: equal / zero */

loc_00116194: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011619Au); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011619A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = 0;

loc_001161A3: ;
    esi = edi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    MEM32(esi) = 0;
    edx = MEM32(ebp);
    PUSH32(esp, 0x1C53F0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001161BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001161B8u); } /* indirect call */
    }

loc_001161BB: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, ebx);
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001161D0
 * Original: 0x001161D0 - 0x001161E5 (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001161D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001161D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x84) = eax;
    MEM32(ecx + 0x88) = eax;
    MEM32(ecx + 0x8C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001161F0
 * Original: 0x001161F0 - 0x0011621A (42 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001161F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001161F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001161F8u); RECOMP_ABI_CALL(0x00128A20u, sub_00128A20); /* call 0x00128A20 */

loc_001161F8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi) = 0x1C5404;
    MEM32(esi + 0x90) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00116220
 * Original: 0x00116220 - 0x001162D7 (183 bytes, 68 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116220(void)
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

loc_00116220: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(edi);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00116232u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011622Fu); } /* indirect call */
    }

loc_00116232: ;
    edx = MEM32(edi + 4);
    MEM32(esi + 0x28) = edx;
    eax = MEM32(edi + 0xC);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00116246u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00116246: ;
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(edi + 0xC);
    MEM32(esi + 0x30) = ecx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011627F; /* jle: less or equal (signed <=) */

loc_0011625A: ;
    PUSH32(esp, ebx);
    goto loc_00116260;

    /* nop */

loc_00116260: ;
    edx = MEM32(edi + 8);
    ebx = MEM32(edx + eax * 8);
    ecx = MEM32(esi + 0x2C);
    MEM32(ecx + eax * 8) = ebx;
    edx = MEM32(edx + eax * 8 + 4);
    MEM32(ecx + eax * 8 + 4) = edx;
    ecx = MEM32(esi + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00116260; /* jl: less (signed <) */

loc_0011627E: ;
    POP32(esp, ebx);

loc_0011627F: ;
    edx = MEM32(edi + 0x24);
    MEM32(esi + 0x40) = edx;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x34) = eax;
    ecx = MEM32(edi + 0x1C);
    MEM32(esi + 0x38) = ecx;
    edx = MEM32(edi + 0x20);
    MEM32(esi + 0x3C) = edx;
    eax = MEM32(edi + 0x28);
    MEM32(esi + 0x64) = eax;
    ecx = MEM32(edi + 0x2C);
    MEM32(esi + 0x68) = ecx;
    edx = MEM32(edi + 0x30);
    MEM32(esi + 0x6C) = edx;
    fp_push(MEMF(edi + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001162D2; /* jne: not equal / not zero */

loc_001162B9: ;
    fp_push(MEMF(edi + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001162D2; /* jp: parity */

loc_001162C9: ;
    eax = MEM32(edi + 0x34);
    MEM32(esi + 0x90) = eax;

loc_001162D2: ;
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
 * sub_001162E0
 * Original: 0x001162E0 - 0x00116492 (434 bytes, 130 insns)
 * Category: game_vtable
 * CC: thiscall, 18 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001162E0(void)
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

loc_001162E0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x88);
    fp_push(MEMF(esp + 0x58)); /* fld float */
    edx = MEM32(ecx + 0x80);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x48)); /* fsub dword ptr [esp + 0x48] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x40) = edx;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x20);
    esi = MEM32(edx);
    MEM32(eax + 0xC) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 0x10) = esi;
    edx = MEM32(edx + 8);
    esi = MEM32(esp + 0x34);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 0x44) = esi;
    esi = MEM32(esp + 0x38);
    MEM32(eax + 0x48) = esi;
    esi = MEM32(esp + 0x3C);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 0x4C) = esi;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x44);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x30);
    esi = eax + 0x50;
    MEM32(esi) = edi;
    edi = MEM32(esp + 0x48);
    MEM32(esi + 4) = edi;
    edi = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 0x24) = edx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 8) = edi;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    edi = MEM32(esp + 0x50);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = edx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xC) = edi;
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) / fp_top()); /* fdivr dword ptr [0x1c91d0] */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 0x44);
    MEM32(eax) = esi;
    esi = MEM32(esp + 0x48);
    MEM32(eax + 4) = esi;
    esi = MEM32(esp + 0x4C);
    MEM32(eax + 8) = esi;
    esi = MEM32(esp + 0x50);
    MEM32(eax + 0xC) = esi;
    edi = MEM32(ecx + 0x88);
    eax = MEM32(ecx + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(ecx + 0x88) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_0011641C; /* jge: greater or equal (signed >=) */

loc_00116410: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00116410; /* jl: less (signed <) */

loc_00116416: ;
    MEM32(ecx + 0x88) = esi;

loc_0011641C: ;
    esi = MEM32(ecx + 0x88);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00116432; /* jl: less (signed <) */

loc_00116426: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00116426; /* jge: greater or equal (signed >=) */

loc_0011642C: ;
    MEM32(ecx + 0x88) = esi;

loc_00116432: ;
    eax = MEM32(ecx + 0x84);
    _fa = (uint32_t)(MEM32(ecx + 0x88)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x88), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116484; /* jne: not equal / not zero */

loc_00116440: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x84) = eax;
    esi = MEM32(ecx + 0x84);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    eax = MEM32(ecx + 4);
    if (CMP_GE(_fas, _fbs)) goto loc_00116460; /* jge: greater or equal (signed >=) */

loc_00116454: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00116454; /* jl: less (signed <) */

loc_0011645A: ;
    MEM32(ecx + 0x84) = esi;

loc_00116460: ;
    edx = MEM32(ecx + 0x84);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011648A; /* jl: less (signed <) */

loc_0011646A: ;
    /* nop */

loc_00116470: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00116470; /* jge: greater or equal (signed >=) */

loc_00116476: ;
    POP32(esp, edi);
    MEM32(ecx + 0x84) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 76; return; /* ret 72 */

loc_00116484: ;
    MEM32(ecx + 0x8C) = MEM32(ecx + 0x8C) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011648A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 76; return; /* ret 72 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011648F
 * Original: 0x0011648F - 0x00116492 (3 bytes, 1 insns)
 * CC: cdecl, 18 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011648F(void)
{

loc_0011648F: ;
    esp += 76; return; /* ret 72 */

}

/**
 * sub_001164A0
 * Original: 0x001164A0 - 0x00116669 (457 bytes, 148 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001164A0(void)
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

loc_001164A0: ;
    eax = MEM32(ecx + 0x88);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x84);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116662; /* je: equal / zero */

loc_001164B8: ;
    goto loc_001164C0;

    /* nop */

loc_001164C0: ;
    eax = MEM32(ecx + 0x80);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + eax + 0x28)); /* fadd dword ptr [edx + eax + 0x28] */
    MEMF(edx + eax + 0x28) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + eax + 0x2C)); /* fadd dword ptr [edx + eax + 0x2c] */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011652F; /* jne: not equal / not zero */

loc_001164EE: ;
    edx = MEM32(ecx + 0x84);
    eax = MEM32(ecx + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ecx + 0x84) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0011650E; /* jge: greater or equal (signed >=) */

loc_00116502: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00116502; /* jl: less (signed <) */

loc_00116508: ;
    MEM32(ecx + 0x84) = edx;

loc_0011650E: ;
    edx = MEM32(ecx + 0x84);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00116524; /* jl: less (signed <) */

loc_00116518: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00116518; /* jge: greater or equal (signed >=) */

loc_0011651E: ;
    MEM32(ecx + 0x84) = edx;

loc_00116524: ;
    MEM32(ecx + 0x8C) = MEM32(ecx + 0x8C) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00116637;

loc_0011652F: ;
    fp_push(MEMF(ecx + 0x90)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    MEMF(edx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x10)); /* fmul dword ptr [edx + 0x10] */
    MEMF(edx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x14)); /* fmul dword ptr [edx + 0x14] */
    MEMF(edx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x64)); /* fmul dword ptr [ecx + 0x64] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x68)); /* fmul dword ptr [ecx + 0x68] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6C)); /* fmul dword ptr [ecx + 0x6c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0xC)); /* fadd dword ptr [edx + 0xc] */
    MEMF(edx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x10)); /* fadd dword ptr [edx + 0x10] */
    MEMF(edx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x14)); /* fadd dword ptr [edx + 0x14] */
    MEMF(edx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x10)); /* fmul dword ptr [edx + 0x10] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x14)); /* fmul dword ptr [edx + 0x14] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx)); /* fadd dword ptr [edx] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 4)); /* fadd dword ptr [edx + 4] */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 8)); /* fadd dword ptr [edx + 8] */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x24)); /* fmul dword ptr [edx + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x20)); /* fadd dword ptr [edx + 0x20] */
    MEMF(edx + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x1C)); /* fmul dword ptr [edx + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x18)); /* fadd dword ptr [edx + 0x18] */
    MEMF(edx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00116637; /* jp: parity */

loc_001165D2: ;
    fp_push(MEMF(edx + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x2C)); /* fmul dword ptr [edx + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x58)); /* fadd dword ptr [edx + 0x58] */
    MEMF(edx + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x2C)); /* fmul dword ptr [edx + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x54)); /* fadd dword ptr [edx + 0x54] */
    MEMF(edx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x2C)); /* fmul dword ptr [edx + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x50)); /* fadd dword ptr [edx + 0x50] */
    MEMF(edx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x44)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x44] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011660E; /* jp: parity */

loc_00116603: ;
    fp_push(MEMF(edx + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(edx + 0x44)); /* fdiv dword ptr [edx + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x2C)); /* fmul dword ptr [edx + 0x2c] */
    goto loc_00116634;

loc_0011660E: ;
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x48)); /* fsub dword ptr [edx + 0x48] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00116626; /* jne: not equal / not zero */

loc_0011661E: ;
    eax = MEM32(edx + 0x4C);
    MEM32(edx + 0x3C) = eax;
    goto loc_00116637;

loc_00116626: ;
    fp_push(MEMF(edx + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(edx + 0x48)); /* fdiv dword ptr [edx + 0x48] */
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x2C)); /* fsub dword ptr [edx + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */

loc_00116634: ;
    MEMF(edx + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */

loc_00116637: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 4);
    if ((_fas >= 0)) goto loc_00116644; /* jns: not sign (positive) */

loc_0011663D: ;
    /* nop */

loc_00116640: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_00116640; /* js: sign (negative) */

loc_00116644: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00116656; /* jl: less (signed <) */

loc_00116648: ;
    edx = eax;
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    /* nop */

loc_00116650: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00116650; /* jge: greater or equal (signed >=) */

loc_00116656: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0x88) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001164C0; /* jne: not equal / not zero */

loc_00116662: ;
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
 * sub_00116670
 * Original: 0x00116670 - 0x001166B0 (64 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116670: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00116686u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00116686: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001166A0; /* je: equal / zero */

loc_0011668D: ;
    MEM32(eax) = edi;
    MEM32(esi + 4) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x80) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001166A0: ;
    MEM32(esi + 4) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x80) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001166B0
 * Original: 0x001166B0 - 0x00116CD0 (1568 bytes, 426 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001166B0(void)
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

loc_001166B0: ;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x8C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0011677B; /* je: equal / zero */

loc_001166CE: ;
    MEM32(esp + 0x38) = esi;
    PUSH32(esp, 0x001166D7u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_001166D7: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001166E2u); RECOMP_ABI_CALL(0x000E5430u, sub_000E5430); /* call 0x000E5430 */

loc_001166E2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xDC;
    PUSH32(esp, eax);
    ecx = 0x1DE768;
    PUSH32(esp, 0x001166F7u); RECOMP_ABI_CALL(0x000192E0u, sub_000192E0); /* call 0x000192E0 */

loc_001166F7: ;
    edx = esp + 0xDC;
    ecx = 0x60;
    PUSH32(esp, 0x00116708u); RECOMP_ABI_CALL(0x00195820u, sub_00195820); /* call 0x00195820 */

loc_00116708: ;
    ecx = MEM32(0x1DE3E8);
    eax = 0x900;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116722; /* je: equal / zero */

loc_00116717: ;
    PUSH32(esp, eax);
    MEM32(0x1DE3E8) = eax;
    PUSH32(esp, 0x00116722u); RECOMP_ABI_CALL(0x001931B0u, sub_001931B0); /* call 0x001931B0 */

loc_00116722: ;
    MEM32(0x1DF760) = esi;
    MEM32(0x1DF438) = esi;
    PUSH32(esp, 0x00116733u); RECOMP_ABI_CALL(0x000F95A0u, sub_000F95A0); /* call 0x000F95A0 */

loc_00116733: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x0011673Au); RECOMP_ABI_CALL(0x000FB660u, sub_000FB660); /* call 0x000FB660 */

loc_0011673A: ;
    ecx = MEM32(edi + 0x28);
    edx = MEM32(edi + 0x40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0011674Cu); RECOMP_ABI_CALL(0x00128A60u, sub_00128A60); /* call 0x00128A60 */

loc_0011674C: ;
    eax = MEM32(edi + 0x8C);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = eax + eax * 2;
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = eax * 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00116770u); RECOMP_ABI_CALL(0x000FAF60u, sub_000FAF60); /* call 0x000FAF60 */

loc_00116770: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116786; /* jne: not equal / not zero */

loc_0011677B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00116786: ;
    eax = MEM32(edi + 0x88);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0x84);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x20) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00116C87; /* je: equal / zero */

loc_0011679F: ;
    PUSH32(esp, ebx);
    ebx = 2;
    goto loc_001167B0;

    /* nop */
    edi = edi;

loc_001167B0: ;
    ecx = MEM32(edi + 0x80);
    eax = MEM32(esp + 0x20);
    edx = MEM32(eax + 0x2C);
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    edi = MEM32(esi + ecx + 0x40);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001167D3u); RECOMP_ABI_CALL(0x000E4140u, sub_000E4140); /* call 0x000E4140 */

loc_001167D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x48) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C5400)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c5400] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00116C4A; /* jp: parity */

loc_001167EB: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    eax = MEM32(esp + 0x40);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x40) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001168CA; /* jnp: not parity */

loc_00116808: ;
    ecx = MEM32(esi + 0x18);
    edx = ecx;
    PUSH32(esp, edx);
    MEM32(esp + 0x74) = ecx;
    PUSH32(esp, 0x00116817u); RECOMP_ABI_CALL(0x000CDDF0u, sub_000CDDF0); /* call 0x000CDDF0 */

loc_00116817: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x18);
    ecx = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x7C) = eax;
    PUSH32(esp, 0x0011682Au); RECOMP_ABI_CALL(0x000CDE00u, sub_000CDE00); /* call 0x000CDE00 */

loc_0011682A: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1DE538)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(0x1DE544)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x1DE53C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(0x1DE548)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x1DE540)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(0x1DE54C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1DE544)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(0x1DE538)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1DE548)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(0x1DE53C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1DE54C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(0x1DE540)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00116900;

loc_001168CA: ;
    edx = MEM32(0x1DE540);
    fp_push(MEMF(0x1DE538)); /* fld float */
    eax = MEM32(0x1DE544);
    fp_push(MEMF(0x1DE53C)); /* fld float */
    ecx = MEM32(0x1DE548);
    MEM32(esp + 0xB0) = edx;
    edx = MEM32(0x1DE54C);
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x54) = edx;

loc_00116900: ;
    eax = MEM32(esp + 0x20);
    fp_push(MEMF(eax + 0x38)); /* fld float */
    ecx = esp + 0x44;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x3C)); /* fld float */
    eax = MEM32(esi + 0x30);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001169C1u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001169C1: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C9220)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c9220] */
    ecx = MEM32(esp + 0x44);
    MEM32(esp + 0x18) = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001169FE; /* jp: parity */

loc_001169DA: ;
    ecx = ZX8(MEM8(esp + 0x47));
    MEM32(esp + 0x1C) = ecx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    PUSH32(esp, 0x001169F6u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_001169F6: ;
    MEM8(esp + 0x1B) = LO8(eax);
    ecx = MEM32(esp + 0x18);

loc_001169FE: ;
    edx = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0x58)); /* fld float */
    eax = ebx + -2;
    MEM16(edx) = LO16(eax);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = edx;
    MEM16(edx) = LO16(ebx);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = edx;
    ebp = ebx + -1;
    MEM16(edx) = LO16(ebp);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = edx;
    MEM16(edx) = LO16(eax);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = edx;
    eax = ebx + 1;
    MEM16(edx) = LO16(eax);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    MEM16(eax) = LO16(ebx);
    ebp = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ebp;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x64)); /* fsub dword ptr [esp + 0x64] */
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x68)); /* fsub dword ptr [esp + 0x68] */
    fp_push(MEMF(esp + 0x80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x6C)); /* fsub dword ptr [esp + 0x6c] */
    MEMF(esp + 0xBC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xBC);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    MEM32(eax + 0x18) = ecx;
    edx = MEM32(edi);
    eax = MEM32(esp + 0x10);
    MEM32(eax + 0x1C) = edx;
    eax = MEM32(esp + 0x10);
    edx = MEM32(edi + 4);
    MEM32(eax + 0x20) = edx;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esp + 0xA0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0xA4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x64)); /* fsub dword ptr [esp + 0x64] */
    fp_push(MEMF(esp + 0xA0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x68)); /* fsub dword ptr [esp + 0x68] */
    fp_push(MEMF(esp + 0xA4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x6C)); /* fsub dword ptr [esp + 0x6c] */
    MEMF(esp + 0xE0) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xE0);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    MEM32(eax + 0x18) = ecx;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    edx = MEM32(edi + 8);
    eax = MEM32(esp + 0x10);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(edi + 4);
    eax = MEM32(esp + 0x10);
    MEM32(eax + 0x20) = edx;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x88)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x8C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    MEMF(esp + 0xC8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xC8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    fp_push(MEMF(esp + 0x58)); /* fld float */
    MEM32(eax + 0x18) = ecx;
    edx = MEM32(edi + 8);
    eax = MEM32(esp + 0x10);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(edi + 0xC);
    eax = MEM32(esp + 0x10);
    MEM32(eax + 0x20) = edx;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esp + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x94)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x98)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    MEMF(esp + 0xD4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xD4);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(edi);
    edx = MEM32(esp + 0x10);
    MEM32(edx + 0x1C) = ecx;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx + 0x20) = eax;
    ecx = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00116C4A: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(edx + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = ebp;
    if ((_fas >= 0)) goto loc_00116C60; /* jns: not sign (positive) */

loc_00116C58: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_00116C58; /* js: sign (negative) */

loc_00116C5C: ;
    MEM32(esp + 0x24) = ebp;

loc_00116C60: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00116C72; /* jl: less (signed <) */

loc_00116C64: ;
    ecx = eax;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00116C68: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00116C68; /* jge: greater or equal (signed >=) */

loc_00116C6E: ;
    MEM32(esp + 0x24) = ebp;

loc_00116C72: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edx + 0x88) (32-bit) */
    edi = MEM32(esp + 0x20);
    if (CMP_NE(_fa, _fb)) goto loc_001167B0; /* jne: not equal / not zero */

loc_00116C82: ;
    esi = MEM32(esp + 0x40);
    POP32(esp, ebx);

loc_00116C87: ;
    edx = esi + esi * 2;
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    eax = esi * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00116C9Au); RECOMP_ABI_CALL(0x000FAC60u, sub_000FAC60); /* call 0x000FAC60 */

loc_00116C9A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_LE(_fas, _fbs)) goto loc_00116CB5; /* jle: less or equal (signed <=) */

loc_00116CA2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00116CADu); RECOMP_ABI_CALL(0x000FAD00u, sub_000FAD00); /* call 0x000FAD00 */

loc_00116CAD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00116CB5u); RECOMP_ABI_CALL(0x000FA850u, sub_000FA850); /* call 0x000FA850 */

loc_00116CB5: ;
    ecx = edi;
    PUSH32(esp, 0x00116CBCu); RECOMP_ABI_CALL(0x00128AF0u, sub_00128AF0); /* call 0x00128AF0 */

loc_00116CBC: ;
    PUSH32(esp, 0x00116CC1u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00116CC1: ;
    eax = MEM32(edi + 0x8C);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00116CD0
 * Original: 0x00116CD0 - 0x00116D18 (72 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00116CD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1C5404;
    if (CMP_EQ(_fa, _fb)) goto loc_00116CF0; /* je: equal / zero */

loc_00116CE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00116CE6u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00116CE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = 0;

loc_00116CF0: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116D10; /* je: equal / zero */

loc_00116CFA: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00116D03u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00116D03: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x80) = 0;

loc_00116D10: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00128A10(); return; /* tail jmp 0x00128A10 */

}

/**
 * sub_00116D20
 * Original: 0x00116D20 - 0x00116D80 (96 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00116D20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1C5404;
    if (CMP_EQ(_fa, _fb)) goto loc_00116D40; /* je: equal / zero */

loc_00116D30: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00116D36u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00116D36: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = 0;

loc_00116D40: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116D60; /* je: equal / zero */

loc_00116D4A: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00116D53u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00116D53: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x80) = 0;

loc_00116D60: ;
    ecx = esi;
    PUSH32(esp, 0x00116D67u); RECOMP_ABI_CALL(0x00128A10u, sub_00128A10); /* call 0x00128A10 */

loc_00116D67: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00116D77; /* je: equal / zero */

loc_00116D6E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00116D74u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00116D74: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00116D77: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00116D80(); return; /* fallthrough 0x00116D80 */

}

/**
 * sub_00116D80
 * Original: 0x00116D80 - 0x00116E91 (273 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116D80(void)
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

loc_00116D80: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 4;
    MEM32(esi) = 0x1C5448;
    PUSH32(esp, 0x00116D96u); RECOMP_ABI_CALL(0x00105770u, sub_00105770); /* call 0x00105770 */

loc_00116D96: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x88) = eax;
    ecx = 0x3F800000;
    MEM32(esi + 0x6C) = ecx;
    MEM32(esi + 0x7C) = ecx;
    MEM32(esi + 0x8C) = ecx;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xCC) = eax;
    MEM32(esi + 0xD0) = eax;
    MEM32(esi + 0xD4) = eax;
    MEM32(esi + 0xA8) = eax;
    MEM32(esi + 0xC4) = eax;
    MEM32(esi + 0xB8) = eax;
    MEM32(esi + 0xBC) = eax;
    MEM32(esi + 0xC0) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0xA4) = eax;
    MEM32(esp + 0xC) = edi;
    ebx = esi + 0xE0;

loc_00116E21: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    PUSH32(esp, ecx);
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C5444)); /* fmul dword ptr [0x1c5444] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00116E38u); RECOMP_ABI_CALL(0x000CDDF0u, sub_000CDDF0); /* call 0x000CDDF0 */

loc_00116E38: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C5440)); /* fmul dword ptr [0x1c5440] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00116E4Eu); RECOMP_ABI_CALL(0x000CDDF0u, sub_000CDDF0); /* call 0x000CDDF0 */

loc_00116E4E: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C543C)); /* fmul dword ptr [0x1c543c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00116E64u); RECOMP_ABI_CALL(0x000CDDF0u, sub_000CDDF0); /* call 0x000CDDF0 */

loc_00116E64: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x2000 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEM32(esp + 0xC) = edi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C5438)); /* fmul dword ptr [0x1c5438] */
    MEMF(ebx + -4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00116E21; /* jl: less (signed <) */

loc_00116E88: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
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
 * sub_00116EA0
 * Original: 0x00116EA0 - 0x00116EF5 (85 bytes, 24 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00116EA0(void)
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

loc_00116EA0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D0)); /* fadd dword ptr [0x1c91d0] */
    MEM32(ecx + 0xA8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xAC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x1C91D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    edi = edi;

loc_00116ED0: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 4) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF0C)); /* fmul dword ptr [0x1aff0c] */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(ecx + -4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00116ED0; /* jl: less (signed <) */

loc_00116EEE: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00116F00
 * Original: 0x00116F00 - 0x0011702C (300 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116F00(void)
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

loc_00116F00: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    MEM32(esp + 0x14) = 0;
    ebp = 0x1C542C;
    goto loc_00116F20;

    /* nop */
    /* nop */

loc_00116F20: ;
    eax = MEM32(ebx + 0xA0);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + eax);
    eax = MEM32(ebx + 0xD0);
    esi = MEM32(edx + 4);
    esi = esi | 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0011700A; /* jle: less or equal (signed <=) */

loc_00116F51: ;
    eax = MEM32(ebx + 0xD4);
    MEM32(esp + 0x20) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_00116F60: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x1C)); /* fidiv dword ptr [esp + 0x1c] */
    MEM32(esp + 0x1C) = edi;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_00116FEE; /* jle: less or equal (signed <=) */

loc_00116F76: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x1C91D0)); /* fsub dword ptr [0x1c91d0] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00116F90;

    /* nop */
    /* nop */

loc_00116F90: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x3F800000);
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x24)); /* fidiv dword ptr [esp + 0x24] */
    MEM32(esi) = eax;
    MEM32(esi + 8) = 0xBF800000u;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) - fp_top()); /* fsubr dword ptr [0x1c91d0] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x1C) = ecx;
    ecx = esi + 0x18;
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00116FD7u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00116FD7: ;
    eax = MEM32(ebx + 0xD4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x34;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00116F90; /* jl: less (signed <) */

loc_00116FEE: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(ebx + 0xD0);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00116F60; /* jl: less (signed <) */

loc_0011700A: ;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C5438) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x1C5438 (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00116F20; /* jl: less (signed <) */

loc_00117024: ;
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
 * sub_00117030
 * Original: 0x00117030 - 0x001170D1 (161 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117030: ;
    eax = MEM32(ecx + 0xA4);
    edx = MEM32(eax);
    eax = MEM32(ecx + 0xD0);
    edx = MEM32(edx + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001170CF; /* jle: less or equal (signed <=) */

loc_0011704C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xD4);

loc_00117054: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001170C2; /* jle: less or equal (signed <=) */

loc_0011705A: ;
    ebx = esi + 1;
    /* nop */

loc_00117060: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, MEM16(ecx + 0xD4));
    SET_LO16(edi, LO16(edi) + 1);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = (uint32_t)((int32_t)edi * (int32_t)esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx + -8) = LO16(edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, MEM16(ecx + 0xD4));
    SET_LO16(edi, LO16(edi) + 1);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edi = (uint32_t)((int32_t)edi * (int32_t)esi);
    edi = edi + eax + 1;
    MEM16(edx + -6) = LO16(edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, MEM16(ecx + 0xD4));
    SET_LO16(edi, LO16(edi) + 1);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    edi = edi + eax + 1;
    MEM16(edx + -4) = LO16(edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, MEM16(ecx + 0xD4));
    SET_LO16(edi, LO16(edi) + 1);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx + -2) = LO16(edi);
    edi = MEM32(ecx + 0xD4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117060; /* jl: less (signed <) */

loc_001170C2: ;
    eax = MEM32(ecx + 0xD0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117054; /* jl: less (signed <) */

loc_001170CD: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001170CF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001170E0
 * Original: 0x001170E0 - 0x00117201 (289 bytes, 89 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001170E0(void)
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

loc_001170E0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x1DFDA4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x1DFDA4) = eax;
    MEM32(esp + 0x20) = edi;
    ebp = esi + 0xAC;

loc_00117100: ;
    eax = MEM32(esi + 0xA0);
    eax = MEM32(edi + eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00117111u); RECOMP_ABI_CALL(0x00196890u, sub_00196890); /* call 0x00196890 */

loc_00117111: ;
    edx = eax;
    eax = MEM32(esi + 0xD0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_001171E6; /* jle: less or equal (signed <=) */

loc_0011712C: ;
    eax = MEM32(esi + 0xD4);
    edi = MEM32(0x1DFDA4);
    MEM32(esp + 0x14) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = edi;

loc_00117141: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x1C)); /* fidiv dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_001171BC; /* jle: less or equal (signed <=) */

loc_00117153: ;
    MEM32(esp + 0x10) = ecx;
    goto loc_00117160;

    /* nop */

loc_00117160: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x14)); /* fidiv dword ptr [esp + 0x14] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011717D; /* jne: not equal / not zero */

loc_00117175: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1C91D0)); /* fld float */

loc_0011717D: ;
    eax = edi + ecx;
    eax = eax & 0x80001FFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0011718E; /* jns: not sign (positive) */

loc_00117187: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFE000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011718E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + eax * 4 + 0xE0)); /* fmul dword ptr [esi + eax*4 + 0xe0] */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x34;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    MEMF(edx + -24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp);
    MEM32(edx + -44) = eax;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 6;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xD4);
    MEM32(esp + 0x14) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117160; /* jl: less (signed <) */

loc_001171BC: ;
    edi = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0xD0);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x3039) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x3039;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ecx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00117141; /* jl: less (signed <) */

loc_001171E2: ;
    edi = MEM32(esp + 0x20);

loc_001171E6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x18 (32-bit) */
    MEM32(esp + 0x20) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00117100; /* jl: less (signed <) */

loc_001171F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00117210
 * Original: 0x00117210 - 0x00117318 (264 bytes, 80 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117210(void)
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

loc_00117210: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = edi;
    ebp = ebx + 0xAC;

loc_00117225: ;
    eax = MEM32(ebx + 0xA0);
    eax = MEM32(edi + eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00117236u); RECOMP_ABI_CALL(0x00196890u, sub_00196890); /* call 0x00196890 */

loc_00117236: ;
    esi = eax;
    eax = MEM32(ebx + 0xD0);
    MEM32(esp + 0x14) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_001172FD; /* jle: less or equal (signed <=) */

loc_00117253: ;
    eax = MEM32(ebx + 0xD4);
    MEM32(esp + 0x18) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi;

loc_00117260: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x14)); /* fidiv dword ptr [esp + 0x14] */
    MEM32(esp + 0x14) = edi;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_001172DD; /* jle: less or equal (signed <=) */

loc_00117276: ;
    goto loc_00117280;

    /* nop */
    /* nop */

loc_00117280: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, 0x3BA3D70A);
    ecx = 0x1CEFD8;
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x1C)); /* fidiv dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0011729Bu); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_0011729B: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3BA3D70A);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x001172AEu); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_001172AE: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x34;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = edi;
    MEMF(esi + -24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + -20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebp);
    MEM32(esi + -44) = ecx;
    eax = MEM32(ebx + 0xD4);
    MEM32(esp + 0x18) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117280; /* jl: less (signed <) */

loc_001172DD: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(ebx + 0xD0);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00117260; /* jl: less (signed <) */

loc_001172F9: ;
    edi = MEM32(esp + 0x1C);

loc_001172FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x18 (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00117225; /* jl: less (signed <) */

loc_00117310: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00117320
 * Original: 0x00117320 - 0x001173D9 (185 bytes, 69 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117320: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001173BD; /* je: equal / zero */

loc_00117331: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, ebp);
    ebp = esi + -4;
    esi = esi + eax * 8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001173A7; /* js: sign (negative) */

loc_0011733E: ;
    ebx = eax + 1;

loc_00117341: ;
    eax = MEM32(esi + -8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117399; /* je: equal / zero */

loc_0011734B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00117356u); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_00117356: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00117361u); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_00117361: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0011736Cu); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_0011736C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00117377u); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_00117377: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011737Fu); RECOMP_ABI_CALL(0x00197CB0u, sub_00197CB0); /* call 0x00197CB0 */

loc_0011737F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117393; /* je: equal / zero */

loc_00117383: ;
    PUSH32(esp, 0x1C3E94);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011738Eu); RECOMP_ABI_CALL(0x000E36B0u, sub_000E36B0); /* call 0x000E36B0 */

loc_0011738E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001173A0;

loc_00117393: ;
    MEM32(esi) = 0;

loc_00117399: ;
    MEM32(esi + 4) = 0;

loc_001173A0: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00117341; /* jne: not equal / not zero */

loc_001173A3: ;
    SET_LO8(ebx, MEM8(esp + 0x10));

loc_001173A7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001173B5; /* je: equal / zero */

loc_001173AC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001173B2u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001173B2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001173B5: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001173BD: ;
    ecx = esi;
    PUSH32(esp, 0x001173C4u); RECOMP_ABI_CALL(0x00123230u, sub_00123230); /* call 0x00123230 */

loc_001173C4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001173D2; /* je: equal / zero */

loc_001173C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001173CFu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001173CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001173D2: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001173E0
 * Original: 0x001173E0 - 0x001175C4 (484 bytes, 121 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001173E0(void)
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

loc_001173E0: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 0x30;
    PUSH32(esp, 0x001173F2u); RECOMP_ABI_CALL(0x00105770u, sub_00105770); /* call 0x00105770 */

loc_001173F2: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001173FCu); RECOMP_ABI_CALL(0x000E3EF0u, sub_000E3EF0); /* call 0x000E3EF0 */

loc_001173FC: ;
    ecx = MEM32(esi + 0x9C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0011740Au); RECOMP_ABI_CALL(0x00108280u, sub_00108280); /* call 0x00108280 */

loc_0011740A: ;
    ecx = MEM32(esi + 0x9C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011741Eu); RECOMP_ABI_CALL(0x000E9C80u, sub_000E9C80); /* call 0x000E9C80 */

loc_0011741E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00117425u); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_00117425: ;
    eax = MEM32(0x1DC3CC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117451; /* je: equal / zero */

loc_00117431: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = 0;
    PUSH32(esp, 0x00117447u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00117447: ;
    MEM32(0x1A51F8) = 0;

loc_00117451: ;
    eax = MEM32(0x1DC444);
    esi = 0x207;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117477; /* je: equal / zero */

loc_0011745F: ;
    edx = esi;
    ecx = 0x40354;
    MEM32(0x1DC444) = esi;
    PUSH32(esp, 0x00117471u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00117471: ;
    MEM32(0x1A51DC) = esi;

loc_00117477: ;
    PUSH32(esp, 0x1DE580);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00117483u); RECOMP_ABI_CALL(0x000E6A00u, sub_000E6A00); /* call 0x000E6A00 */

loc_00117483: ;
    edx = MEM32(0x1DC428);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ecx = 1;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001174B3; /* je: equal / zero */

loc_0011749B: ;
    edx = MEM32(0x1A50F0);
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1DC428) = eax;
    MEM32(0x1A50F0) = edx;
    MEM32(0x1A2EA0) = eax;

loc_001174B3: ;
    _fa = (uint32_t)(MEM32(0x1DC368)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC368), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001174D3; /* je: equal / zero */

loc_001174BB: ;
    edx = MEM32(0x1A50F0);
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1DC368) = eax;
    MEM32(0x1A50F0) = edx;
    MEM32(0x1A2EA4) = eax;

loc_001174D3: ;
    fp_push(MEMF(esp + 0x70)); /* fld float */
    edx = MEM32(esp + 0x68);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x68)); /* fadd dword ptr [esp + 0x68] */
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3F800000);
    fp_push(MEMF(esp + 0x80)); /* fld float */
    PUSH32(esp, 0x3F800000);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x7C)); /* fadd dword ptr [esp + 0x7c] */
    ecx = esp + 0x14;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0011751Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011751B: ;
    ecx = MEM32(0x1DC16C);
    edx = MEM32(0x1DC168);
    eax = ecx;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ecx);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00117544u); RECOMP_ABI_CALL(0x000E3380u, sub_000E3380); /* call 0x000E3380 */

loc_00117544: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1DC168)); /* fmul dword ptr [0x1dc168] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00117557u); RECOMP_ABI_CALL(0x000E3360u, sub_000E3360); /* call 0x000E3360 */

loc_00117557: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00117568u); RECOMP_ABI_CALL(0x000E3380u, sub_000E3380); /* call 0x000E3380 */

loc_00117568: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00117579u); RECOMP_ABI_CALL(0x000E3360u, sub_000E3360); /* call 0x000E3360 */

loc_00117579: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xC0000000u);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x0011759Eu); RECOMP_ABI_CALL(0x000E5710u, sub_000E5710); /* call 0x000E5710 */

loc_0011759E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1DE580);
    edx = esp + 0x5C;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001175B1u); RECOMP_ABI_CALL(0x000E9C80u, sub_000E9C80); /* call 0x000E9C80 */

loc_001175B1: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x2C;
    PUSH32(esp, 0x001175BDu); RECOMP_ABI_CALL(0x00105830u, sub_00105830); /* call 0x00105830 */

loc_001175BD: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001175D0
 * Original: 0x001175D0 - 0x00117781 (433 bytes, 126 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001175D0(void)
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

loc_001175D0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x98);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011777C; /* je: equal / zero */

loc_001175E4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001175EAu); RECOMP_ABI_CALL(0x0001D270u, sub_0001D270); /* call 0x0001D270 */

loc_001175EA: ;
    eax = MEM32(0x1DC3CC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011760E; /* je: equal / zero */

loc_001175F6: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = ebp;
    PUSH32(esp, 0x00117608u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00117608: ;
    MEM32(0x1A51F8) = ebp;

loc_0011760E: ;
    eax = MEM32(0x1DC444);
    PUSH32(esp, esi);
    esi = 0x203;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117635; /* je: equal / zero */

loc_0011761D: ;
    edx = esi;
    ecx = 0x40354;
    MEM32(0x1DC444) = esi;
    PUSH32(esp, 0x0011762Fu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0011762F: ;
    MEM32(0x1A51DC) = esi;

loc_00117635: ;
    eax = MEM32(0x1DC428);
    PUSH32(esp, ebx);
    ebx = 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00117661; /* je: equal / zero */

loc_00117649: ;
    eax = MEM32(0x1A50F0);
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1DC428) = ebx;
    MEM32(0x1A50F0) = eax;
    MEM32(0x1A2EA0) = ebx;

loc_00117661: ;
    _fa = (uint32_t)(MEM32(0x1DC368)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC368), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117681; /* je: equal / zero */

loc_00117669: ;
    eax = MEM32(0x1A50F0);
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1DC368) = ebx;
    MEM32(0x1A50F0) = eax;
    MEM32(0x1A2EA4) = ebx;

loc_00117681: ;
    eax = MEM32(edi + 0x9C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0011768Eu); RECOMP_ABI_CALL(0x000E6A00u, sub_000E6A00); /* call 0x000E6A00 */

loc_0011768E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00117699u); RECOMP_ABI_CALL(0x000E5430u, sub_000E5430); /* call 0x000E5430 */

loc_00117699: ;
    MEM32(0x1DF438) = esi;
    MEM32(0x1DF760) = ebp;
    PUSH32(esp, 0x001176AAu); RECOMP_ABI_CALL(0x000F95A0u, sub_000F95A0); /* call 0x000F95A0 */

loc_001176AA: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x001176B1u); RECOMP_ABI_CALL(0x000FB660u, sub_000FB660); /* call 0x000FB660 */

loc_001176B1: ;
    eax = MEM32(0x1DE3E8);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001176C9; /* je: equal / zero */

loc_001176BD: ;
    PUSH32(esp, ebp);
    MEM32(0x1DE3E8) = ebp;
    PUSH32(esp, 0x001176C9u); RECOMP_ABI_CALL(0x001931B0u, sub_001931B0); /* call 0x001931B0 */

loc_001176C9: ;
    fp_push(MEMF(edi + 0xA8)); /* fld float */
    ecx = edi;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001176E5; /* jne: not equal / not zero */

loc_001176DE: ;
    PUSH32(esp, 0x001176E3u); RECOMP_ABI_CALL(0x00117210u, sub_00117210); /* call 0x00117210 */

loc_001176E3: ;
    goto loc_001176EA;

loc_001176E5: ;
    PUSH32(esp, 0x001176EAu); RECOMP_ABI_CALL(0x001170E0u, sub_001170E0); /* call 0x001170E0 */

loc_001176EA: ;
    ecx = MEM32(edi + 0xA4);
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001176F9u); RECOMP_ABI_CALL(0x00196160u, sub_00196160); /* call 0x00196160 */

loc_001176F9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00117700;

    /* nop */

loc_00117700: ;
    eax = MEM32(edi + 0xA0);
    ecx = MEM32(esi + eax);
    PUSH32(esp, 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00117712u); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_00117712: ;
    edx = MEM32(0x1A5F98);
    eax = MEM32(edi + 0xDC);
    PUSH32(esp, edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0x00117732u); RECOMP_ABI_CALL(0x001A0600u, sub_001A0600); /* call 0x001A0600 */

loc_00117732: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117700; /* jl: less (signed <) */

loc_0011773A: ;
    PUSH32(esp, ebp);
    MEM32(0x1DF438) = ebp;
    PUSH32(esp, 0x00117746u); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_00117746: ;
    eax = MEM32(0x1DC3CC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00117770; /* jne: not equal / not zero */

loc_00117753: ;
    esi = 1;
    edx = esi;
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = esi;
    PUSH32(esp, 0x0011776Au); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0011776A: ;
    MEM32(0x1A51F8) = esi;

loc_00117770: ;
    ecx = MEM32(edi + 0x9C);
    PUSH32(esp, 0x0011777Bu); RECOMP_ABI_CALL(0x001082F0u, sub_001082F0); /* call 0x001082F0 */

loc_0011777B: ;
    POP32(esp, esi);

loc_0011777C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00117790
 * Original: 0x00117790 - 0x0011785A (202 bytes, 71 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117790: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xA0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001177CF; /* je: equal / zero */

loc_001177A1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001177A3: ;
    ecx = MEM32(edi + 0xA0);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001177B0u); RECOMP_ABI_CALL(0x00123230u, sub_00123230); /* call 0x00123230 */

loc_001177B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001177A3; /* jl: less (signed <) */

loc_001177B8: ;
    ecx = MEM32(edi + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001177CF; /* je: equal / zero */

loc_001177C2: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x001177C9u); RECOMP_ABI_CALL(0x00117320u, sub_00117320); /* call 0x00117320 */

loc_001177C9: ;
    MEM32(edi + 0xA0) = ebx;

loc_001177CF: ;
    esi = MEM32(edi + 0xA4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011783C; /* je: equal / zero */

loc_001177D9: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001177FB; /* je: equal / zero */

loc_001177DF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001177E5u); RECOMP_ABI_CALL(0x00197CB0u, sub_00197CB0); /* call 0x00197CB0 */

loc_001177E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001177F9; /* je: equal / zero */

loc_001177E9: ;
    PUSH32(esp, 0x1C3ED8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001177F4u); RECOMP_ABI_CALL(0x000E36B0u, sub_000E36B0); /* call 0x000E36B0 */

loc_001177F4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001177FE;

loc_001177F9: ;
    MEM32(esi) = ebx;

loc_001177FB: ;
    MEM32(esi + 4) = ebx;

loc_001177FE: ;
    esi = MEM32(edi + 0xA4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011783C; /* je: equal / zero */

loc_00117808: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011782A; /* je: equal / zero */

loc_0011780E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00117814u); RECOMP_ABI_CALL(0x00197CB0u, sub_00197CB0); /* call 0x00197CB0 */

loc_00117814: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117828; /* je: equal / zero */

loc_00117818: ;
    PUSH32(esp, 0x1C3ED8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00117823u); RECOMP_ABI_CALL(0x000E36B0u, sub_000E36B0); /* call 0x000E36B0 */

loc_00117823: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0011782D;

loc_00117828: ;
    MEM32(esi) = ebx;

loc_0011782A: ;
    MEM32(esi + 4) = ebx;

loc_0011782D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00117833u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00117833: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xA4) = ebx;

loc_0011783C: ;
    edi = MEM32(edi + 0x9C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117856; /* je: equal / zero */

loc_00117846: ;
    ecx = edi;
    PUSH32(esp, 0x0011784Du); RECOMP_ABI_CALL(0x0010B740u, sub_0010B740); /* call 0x0010B740 */

loc_0011784D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00117853u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00117853: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00117856: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00117860
 * Original: 0x00117860 - 0x001179E1 (385 bytes, 119 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117860: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00117869u); RECOMP_ABI_CALL(0x00117790u, sub_00117790); /* call 0x00117790 */

loc_00117869: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0xC);
    MEM32(esi + 0xD0) = eax;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(esi + 0xD0);
    MEM32(esi + 0xD4) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx + 1;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(esi + 0xD4);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x4C);
    MEM32(esi + 0xD8) = edx;
    MEM32(esi + 0xDC) = eax;
    PUSH32(esp, 0x001178ABu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_001178AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001178BB; /* je: equal / zero */

loc_001178B2: ;
    ecx = eax;
    PUSH32(esp, 0x001178B9u); RECOMP_ABI_CALL(0x00107DD0u, sub_00107DD0); /* call 0x00107DD0 */

loc_001178B9: ;
    goto loc_001178BD;

loc_001178BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001178BD: ;
    PUSH32(esp, 0);
    MEM32(esi + 0x9C) = eax;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 4);
    PUSH32(esp, 0x8000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    ecx = eax;
    PUSH32(esp, 0x001178DBu); RECOMP_ABI_CALL(0x0010C7D0u, sub_0010C7D0); /* call 0x0010C7D0 */

loc_001178DB: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x001178E2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_001178E2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117917; /* je: equal / zero */

loc_001178E9: ;
    edx = eax + 4;
    MEM32(eax) = 3;
    eax = edx;
    ecx = 3;
    /* nop */

loc_00117900: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00117900; /* jne: not equal / not zero */

loc_00117913: ;
    eax = edx;
    goto loc_00117919;

loc_00117917: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00117919: ;
    PUSH32(esp, ebx);
    MEM32(esi + 0xA0) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00117922: ;
    edi = MEM32(esi + 0xA0);
    eax = MEM32(esi + 0xD8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011793Cu); RECOMP_ABI_CALL(0x00196840u, sub_00196840); /* call 0x00196840 */

loc_0011793C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(edi) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x8007000Eu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    if ((_fa == 0)) goto loc_0011795E; /* je: equal / zero */

loc_00117950: ;
    PUSH32(esp, 0x1C3E74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011795Bu); RECOMP_ABI_CALL(0x000E36B0u, sub_000E36B0); /* call 0x000E36B0 */

loc_0011795B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011795E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117922; /* jl: less (signed <) */

loc_00117966: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0011796Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011796D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00117986; /* je: equal / zero */

loc_00117975: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    edi = eax;
    goto loc_00117988;

loc_00117986: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00117988: ;
    eax = MEM32(esi + 0xDC);
    edx = eax + eax;
    MEM32(esi + 0xA4) = edi;
    PUSH32(esp, edx);
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0x001179A0u); RECOMP_ABI_CALL(0x00196920u, sub_00196920); /* call 0x00196920 */

loc_001179A0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(edi) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x8007000Eu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    if ((_fa == 0)) goto loc_001179C2; /* je: equal / zero */

loc_001179B4: ;
    PUSH32(esp, 0x1C3EB8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001179BFu); RECOMP_ABI_CALL(0x000E36B0u, sub_000E36B0); /* call 0x000E36B0 */

loc_001179BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001179C2: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(edx);
    ecx = esi;
    MEM32(esi + 0xCC) = eax;
    PUSH32(esp, 0x001179D5u); RECOMP_ABI_CALL(0x00116F00u, sub_00116F00); /* call 0x00116F00 */

loc_001179D5: ;
    ecx = esi;
    PUSH32(esp, 0x001179DCu); RECOMP_ABI_CALL(0x00117030u, sub_00117030); /* call 0x00117030 */

loc_001179DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001179F0
 * Original: 0x001179F0 - 0x00117A1C (44 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001179F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001179F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C5448;
    PUSH32(esp, 0x001179FEu); RECOMP_ABI_CALL(0x00117790u, sub_00117790); /* call 0x00117790 */

loc_001179FE: ;
    ecx = esi + 4;
    PUSH32(esp, 0x00117A06u); RECOMP_ABI_CALL(0x00105830u, sub_00105830); /* call 0x00105830 */

loc_00117A06: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00117A16; /* je: equal / zero */

loc_00117A0D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00117A13u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00117A13: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00117A16: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00117A20
 * Original: 0x00117A20 - 0x00117A40 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117A20: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x1C5454;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}
