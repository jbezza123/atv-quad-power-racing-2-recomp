/**
 * ATV: Quad Power Racing 2 - Recompiled code chunk 14
 * Functions: 250 (0x000B5C90 - 0x000BDA10)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000B5C90
 * Original: 0x000B5C90 - 0x000B5D0B (123 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5C90: ;
    eax = MEM32(0x1D73E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B5D00; /* je: equal / zero */

loc_000B5C9C: ;
    _fa = (uint32_t)(MEM32(0x1CA3A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CA3A0), 2 (32-bit) */
    ecx = MEM32(0x1D3ED8);
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_000B5CD2; /* jne: not equal / not zero */

loc_000B5CAD: ;
    PUSH32(esp, 0x1C0174);
    PUSH32(esp, 0x000B5CB7u); RECOMP_ABI_CALL(0x000F2970u, sub_000F2970); /* call 0x000F2970 */

loc_000B5CB7: ;
    ecx = MEM32(0x1D3ED8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C015C);
    PUSH32(esp, 0x000B5CC9u); RECOMP_ABI_CALL(0x000F2970u, sub_000F2970); /* call 0x000F2970 */

loc_000B5CC9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0140);
    goto loc_000B5CF5;

loc_000B5CD2: ;
    PUSH32(esp, 0x1C0124);
    PUSH32(esp, 0x000B5CDCu); RECOMP_ABI_CALL(0x000F2970u, sub_000F2970); /* call 0x000F2970 */

loc_000B5CDC: ;
    ecx = MEM32(0x1D3ED8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C010C);
    PUSH32(esp, 0x000B5CEEu); RECOMP_ABI_CALL(0x000F2970u, sub_000F2970); /* call 0x000F2970 */

loc_000B5CEE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C00F4);

loc_000B5CF5: ;
    ecx = MEM32(0x1D3ED8);
    PUSH32(esp, 0x000B5D00u); RECOMP_ABI_CALL(0x000F2970u, sub_000F2970); /* call 0x000F2970 */

loc_000B5D00: ;
    ecx = esi;
    PUSH32(esp, 0x000B5D07u); RECOMP_ABI_CALL(0x0006AE60u, sub_0006AE60); /* call 0x0006AE60 */

loc_000B5D07: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B5D08
 * Original: 0x000B5D08 - 0x000B5F40 (568 bytes, 232 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5D08(void)
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

loc_000B5D08: ;
    esp += 8; return; /* ret 4 */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5D4B; /* je: equal / zero */

loc_000B5D22: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1C0194);
    ecx = eax;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x000B5D3Bu); RECOMP_ABI_CALL(0x0003FAF0u, sub_0003FAF0); /* call 0x0003FAF0 */

loc_000B5D3B: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5D49u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000B5D49: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000B5D4B: ;
    ecx = MEM32(0x1DE810);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5D5Au); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000B5D5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    esp += 4; return; /* ret */

    PUSH32(esp, 0x000B5D98u); RECOMP_ABI_CALL(0x0006AE60u, sub_0006AE60); /* call 0x0006AE60 */

loc_000B5D98: ;
    esp += 8; return; /* ret 4 */

    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5DE5; /* jne: not equal / not zero */

loc_000B5DC1: ;
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1C0194);
    PUSH32(esp, 0x000B5DCEu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B5DCE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5DE5; /* jne: not equal / not zero */

loc_000B5DD5: ;
    ecx = esi;
    PUSH32(esp, 0x000B5DDCu); RECOMP_ABI_CALL(0x0006AE60u, sub_0006AE60); /* call 0x0006AE60 */

loc_000B5DDC: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B5DE5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5E12; /* je: equal / zero */

loc_000B5E04: ;
    PUSH32(esp, 0x1C01A8);
    ecx = eax;
    PUSH32(esp, 0x000B5E10u); RECOMP_ABI_CALL(0x00041820u, sub_00041820); /* call 0x00041820 */

loc_000B5E10: ;
    goto loc_000B5E14;

loc_000B5E12: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B5E14: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5E22u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000B5E22: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B5E2F; /* je: equal / zero */

loc_000B5E2A: ;
    g_seh_ebp = ebp; sub_00064A30(); return; /* tail jmp 0x00064A30 */

loc_000B5E2F: ;
    esp += 4; return; /* ret */

    esp += 4; return; /* ret */

    ecx = MEM32(0x1DE810);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B5E83; /* jne: not equal / not zero */

loc_000B5E79: ;
    PUSH32(esp, 0x000B5E7Eu); RECOMP_ABI_CALL(0x00064A30u, sub_00064A30); /* call 0x00064A30 */

loc_000B5E7E: ;
    esp += 8; return; /* ret 4 */

loc_000B5E81: ;
    fp_pop(); /* fstp st(0) */

loc_000B5E83: ;
    esp += 8; return; /* ret 4 */

    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C01A8);
    PUSH32(esp, 0x000B5EAFu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B5EAF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5F32; /* jne: not equal / not zero */

loc_000B5EB6: ;
    ecx = MEM32(0x1D3F0C);
    edx = MEM32(ecx + 0x58);
    ecx = MEM32(0x1D3EEC);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(edx + 4);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000B5ECEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B5ECBu); } /* indirect call */
    }

loc_000B5ECE: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x000B5ED5u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B5ED5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5EE8; /* je: equal / zero */

loc_000B5EDC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x000B5EE6u); RECOMP_ABI_CALL(0x000B5C20u, sub_000B5C20); /* call 0x000B5C20 */

loc_000B5EE6: ;
    goto loc_000B5EEA;

loc_000B5EE8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B5EEA: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5EF3u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B5EF3: ;
    PUSH32(esp, 0xA4);
    PUSH32(esp, 0x000B5EFDu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B5EFD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B5F1E; /* je: equal / zero */

loc_000B5F05: ;
    ecx = eax;
    PUSH32(esp, 0x000B5F0Cu); RECOMP_ABI_CALL(0x0006AC40u, sub_0006AC40); /* call 0x0006AC40 */

loc_000B5F0C: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5F15u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_000B5F15: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B5F1E: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5F29u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_000B5F29: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B5F32: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_000B5F40(); return; /* fallthrough 0x000B5F40 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5D10
 * Original: 0x000B5D10 - 0x000B5D5C (76 bytes, 25 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5D10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBC);
    PUSH32(esp, 0x000B5D1Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B5D1B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5D4B; /* je: equal / zero */

loc_000B5D22: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1C0194);
    ecx = eax;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x000B5D3Bu); RECOMP_ABI_CALL(0x0003FAF0u, sub_0003FAF0); /* call 0x0003FAF0 */

loc_000B5D3B: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5D49u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000B5D49: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000B5D4B: ;
    ecx = MEM32(0x1DE810);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5D5Au); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000B5D5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B5D60
 * Original: 0x000B5D60 - 0x000B5D73 (19 bytes, 5 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5D60(void)
{

loc_000B5D60: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0194);
    PUSH32(esp, 0x000B5D72u); RECOMP_ABI_CALL(0x000EBD00u, sub_000EBD00); /* call 0x000EBD00 */

loc_000B5D72: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B5D80
 * Original: 0x000B5D80 - 0x000B5D9B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5D80(void)
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

loc_000B5D80: ;
    eax = MEM32(ecx + 4);
    fp_push(MEMF(eax + 0x4C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C00A8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c00a8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B5D98; /* jne: not equal / not zero */

loc_000B5D93: ;
    PUSH32(esp, 0x000B5D98u); RECOMP_ABI_CALL(0x0006AE60u, sub_0006AE60); /* call 0x0006AE60 */

loc_000B5D98: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5DA0
 * Original: 0x000B5DA0 - 0x000B5DEB (75 bytes, 27 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5DA0(void)
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

loc_000B5DA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    fp_push(MEMF(eax + 0x4C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C00A4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c00a4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B5DE5; /* jne: not equal / not zero */

loc_000B5DB6: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5DE5; /* jne: not equal / not zero */

loc_000B5DC1: ;
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1C0194);
    PUSH32(esp, 0x000B5DCEu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B5DCE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5DE5; /* jne: not equal / not zero */

loc_000B5DD5: ;
    ecx = esi;
    PUSH32(esp, 0x000B5DDCu); RECOMP_ABI_CALL(0x0006AE60u, sub_0006AE60); /* call 0x0006AE60 */

loc_000B5DDC: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B5DE5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5DF0
 * Original: 0x000B5DF0 - 0x000B5E30 (64 bytes, 22 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B5DF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x140);
    esi = ecx;
    PUSH32(esp, 0x000B5DFDu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B5DFD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5E12; /* je: equal / zero */

loc_000B5E04: ;
    PUSH32(esp, 0x1C01A8);
    ecx = eax;
    PUSH32(esp, 0x000B5E10u); RECOMP_ABI_CALL(0x00041820u, sub_00041820); /* call 0x00041820 */

loc_000B5E10: ;
    goto loc_000B5E14;

loc_000B5E12: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B5E14: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5E22u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000B5E22: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B5E2F; /* je: equal / zero */

loc_000B5E2A: ;
    g_seh_ebp = ebp; sub_00064A30(); return; /* tail jmp 0x00064A30 */

loc_000B5E2F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B5E30
 * Original: 0x000B5E30 - 0x000B5E50 (32 bytes, 18 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B5E30: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C01A8);
    PUSH32(esp, 0x000B5E42u); RECOMP_ABI_CALL(0x000EBD00u, sub_000EBD00); /* call 0x000EBD00 */

loc_000B5E42: ;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_000B5E50(); return; /* fallthrough 0x000B5E50 */

}

/**
 * sub_000B5E50
 * Original: 0x000B5E50 - 0x000B5E86 (54 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000B5E50(void)
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

loc_000B5E50: ;
    eax = MEM32(ecx + 4);
    fp_push(MEMF(0x1D73D0)); /* fld float */
    fp_push(MEMF(eax + 0x4C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B5E81; /* jne: not equal / not zero */

loc_000B5E65: ;
    ecx = MEM32(0x1DE810);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B5E83; /* jne: not equal / not zero */

loc_000B5E79: ;
    PUSH32(esp, 0x000B5E7Eu); RECOMP_ABI_CALL(0x00064A30u, sub_00064A30); /* call 0x00064A30 */

loc_000B5E7E: ;
    esp += 8; return; /* ret 4 */

loc_000B5E81: ;
    fp_pop(); /* fstp st(0) */

loc_000B5E83: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5E90
 * Original: 0x000B5E90 - 0x000B5F38 (168 bytes, 58 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5E90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5F32; /* jne: not equal / not zero */

loc_000B5EA2: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C01A8);
    PUSH32(esp, 0x000B5EAFu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B5EAF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5F32; /* jne: not equal / not zero */

loc_000B5EB6: ;
    ecx = MEM32(0x1D3F0C);
    edx = MEM32(ecx + 0x58);
    ecx = MEM32(0x1D3EEC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(edx + 4);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000B5ECEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B5ECBu); } /* indirect call */
    }

loc_000B5ECE: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x000B5ED5u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B5ED5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5EE8; /* je: equal / zero */

loc_000B5EDC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x000B5EE6u); RECOMP_ABI_CALL(0x000B5C20u, sub_000B5C20); /* call 0x000B5C20 */

loc_000B5EE6: ;
    goto loc_000B5EEA;

loc_000B5EE8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B5EEA: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5EF3u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B5EF3: ;
    PUSH32(esp, 0xA4);
    PUSH32(esp, 0x000B5EFDu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B5EFD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B5F1E; /* je: equal / zero */

loc_000B5F05: ;
    ecx = eax;
    PUSH32(esp, 0x000B5F0Cu); RECOMP_ABI_CALL(0x0006AC40u, sub_0006AC40); /* call 0x0006AC40 */

loc_000B5F0C: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5F15u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_000B5F15: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B5F1E: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5F29u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_000B5F29: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B5F32: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B5F40
 * Original: 0x000B5F40 - 0x000B5F59 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5F40(void)
{

loc_000B5F40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B5F48u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B5F48: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C01BC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B5F60
 * Original: 0x000B5F60 - 0x000B5F73 (19 bytes, 5 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5F60(void)
{

loc_000B5F60: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C01E0);
    PUSH32(esp, 0x000B5F72u); RECOMP_ABI_CALL(0x000EBD00u, sub_000EBD00); /* call 0x000EBD00 */

loc_000B5F72: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B5F80
 * Original: 0x000B5F80 - 0x000B5FA4 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5F80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5F80: ;
    PUSH32(esp, esi);
    esi = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0214);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x000B5F97u); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000B5F97: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B5FA2u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000B5FA2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B5FB0
 * Original: 0x000B5FB0 - 0x000B5FC3 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5FB0(void)
{

loc_000B5FB0: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0214);
    PUSH32(esp, 0x000B5FC2u); RECOMP_ABI_CALL(0x000EBD00u, sub_000EBD00); /* call 0x000EBD00 */

loc_000B5FC2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B5FD0
 * Original: 0x000B5FD0 - 0x000B61B9 (489 bytes, 154 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5FD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    if ((_fa == 0)) goto loc_000B603C; /* je: equal / zero */

loc_000B5FE1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B61B1; /* jne: not equal / not zero */

loc_000B5FE8: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C0214);
    PUSH32(esp, 0x000B5FF5u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B5FF5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B61B1; /* jne: not equal / not zero */

loc_000B6000: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000B6007u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B6007: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B619B; /* je: equal / zero */

loc_000B6014: ;
    ecx = esi;
    PUSH32(esp, 0x000B601Bu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B601B: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0230;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B6031u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B6031: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000B603C: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B59D0);
    PUSH32(esp, 0x000B6049u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B6049: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B607D; /* jne: not equal / not zero */

loc_000B6050: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x000B6057u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B6057: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B614A; /* je: equal / zero */

loc_000B6062: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x000B6076u); RECOMP_ABI_CALL(0x000BC410u, sub_000BC410); /* call 0x000BC410 */

loc_000B6076: ;
    esi = eax;
    goto loc_000B614C;

loc_000B607D: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B5970);
    PUSH32(esp, 0x000B608Au); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B608A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B60C7; /* jne: not equal / not zero */

loc_000B6091: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x000B6098u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B6098: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B60AA; /* je: equal / zero */

loc_000B609F: ;
    ecx = eax;
    PUSH32(esp, 0x000B60A6u); RECOMP_ABI_CALL(0x000B7280u, sub_000B7280); /* call 0x000B7280 */

loc_000B60A6: ;
    esi = eax;
    goto loc_000B60AC;

loc_000B60AA: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B60AC: ;
    PUSH32(esp, 0);
    ecx = 0x1D8620;
    MEM32(0x1D867C) = 8;
    PUSH32(esp, 0x000B60C2u); RECOMP_ABI_CALL(0x000A1940u, sub_000A1940); /* call 0x000A1940 */

loc_000B60C2: ;
    goto loc_000B6156;

loc_000B60C7: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B5990);
    PUSH32(esp, 0x000B60D4u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B60D4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B610C; /* jne: not equal / not zero */

loc_000B60DB: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x000B60E2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B60E2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B60FE; /* je: equal / zero */

loc_000B60E9: ;
    ecx = eax;
    PUSH32(esp, 0x000B60F0u); RECOMP_ABI_CALL(0x000B5250u, sub_000B5250); /* call 0x000B5250 */

loc_000B60F0: ;
    esi = eax;
    MEM32(0x1D867C) = 7;
    goto loc_000B6156;

loc_000B60FE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x1D867C) = 7;
    goto loc_000B6156;

loc_000B610C: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1B59B4);
    PUSH32(esp, 0x000B6119u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B6119: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B61B1; /* jne: not equal / not zero */

loc_000B6124: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x000B612Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B612B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B614A; /* je: equal / zero */

loc_000B6132: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0xC) = 1;
    PUSH32(esp, 0x000B6146u); RECOMP_ABI_CALL(0x000BC410u, sub_000BC410); /* call 0x000BC410 */

loc_000B6146: ;
    esi = eax;
    goto loc_000B614C;

loc_000B614A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B614C: ;
    MEM32(0x1D867C) = 6;

loc_000B6156: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B61B1; /* je: equal / zero */

loc_000B615A: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B6163u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_000B6163: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000B616Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B616A: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B619B; /* je: equal / zero */

loc_000B6173: ;
    ecx = esi;
    PUSH32(esp, 0x000B617Au); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B617A: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C01F0;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B6190u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B6190: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000B619B: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B61A6u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B61A6: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000B61B1: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B61C0
 * Original: 0x000B61C0 - 0x000B6206 (70 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B61C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B61C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0x000B61CBu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B61CB: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B61F6; /* je: equal / zero */

loc_000B61D4: ;
    ecx = esi;
    PUSH32(esp, 0x000B61DBu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B61DB: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0230;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B61F1u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B61F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B61F6: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B6201u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B6201: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B6210
 * Original: 0x000B6210 - 0x000B62B7 (167 bytes, 53 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6210: ;
    eax = MEM32(0x1DA948);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_000B6273; /* je: equal / zero */

loc_000B621F: ;
    PUSH32(esp, 2);
    ecx = 0x1D8620;
    MEM32(0x1DA948) = 0;
    PUSH32(esp, 0x000B6235u); RECOMP_ABI_CALL(0x000A1580u, sub_000A1580); /* call 0x000A1580 */

loc_000B6235: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000B623Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B623C: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6265; /* je: equal / zero */

loc_000B6245: ;
    ecx = esi;
    PUSH32(esp, 0x000B624Cu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B624C: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C01BC;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B6262u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B6262: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000B6265: ;
    ecx = MEM32(ebx + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B6270u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B6270: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000B6273: ;
    esi = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C01E0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000B6287u); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000B6287: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B6292u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000B6292: ;
    ecx = 0x1D8620;
    PUSH32(esp, 0x000B629Cu); RECOMP_ABI_CALL(0x000A16E0u, sub_000A16E0); /* call 0x000A16E0 */

loc_000B629C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = 0x1D8620;
    MEM32(0x1D8664) = 0;
    PUSH32(esp, 0x000B62B4u); RECOMP_ABI_CALL(0x000A1580u, sub_000A1580); /* call 0x000A1580 */

loc_000B62B4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B62C0
 * Original: 0x000B62C0 - 0x000B65D0 (784 bytes, 243 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B62C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B62C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = ecx;
    if ((_fa == 0)) goto loc_000B6331; /* je: equal / zero */

loc_000B62D0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B654B; /* jne: not equal / not zero */

loc_000B62D7: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C01E0);
    PUSH32(esp, 0x000B62E4u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B62E4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B654B; /* jne: not equal / not zero */

loc_000B62EF: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000B62F6u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B62F6: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B65BB; /* je: equal / zero */

loc_000B6303: ;
    ecx = esi;
    PUSH32(esp, 0x000B630Au); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B630A: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1B6B40;
    MEM32(esi + 0x10) = 0;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B6327u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B6327: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000B6331: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B53B0);
    PUSH32(esp, 0x000B633Eu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B633E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6363; /* jne: not equal / not zero */

loc_000B6345: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x000B634Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B634C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B654B; /* je: equal / zero */

loc_000B6357: ;
    ecx = eax;
    PUSH32(esp, 0x000B635Eu); RECOMP_ABI_CALL(0x000BC360u, sub_000BC360); /* call 0x000BC360 */

loc_000B635E: ;
    goto loc_000B6577;

loc_000B6363: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1B536C);
    PUSH32(esp, 0x000B6370u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B6370: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6395; /* jne: not equal / not zero */

loc_000B6377: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x000B637Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B637E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B654B; /* je: equal / zero */

loc_000B6389: ;
    ecx = eax;
    PUSH32(esp, 0x000B6390u); RECOMP_ABI_CALL(0x000B71E0u, sub_000B71E0); /* call 0x000B71E0 */

loc_000B6390: ;
    goto loc_000B6577;

loc_000B6395: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B5388);
    PUSH32(esp, 0x000B63A2u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B63A2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B63C7; /* jne: not equal / not zero */

loc_000B63A9: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x000B63B0u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B63B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B654B; /* je: equal / zero */

loc_000B63BB: ;
    ecx = eax;
    PUSH32(esp, 0x000B63C2u); RECOMP_ABI_CALL(0x000B7280u, sub_000B7280); /* call 0x000B7280 */

loc_000B63C2: ;
    goto loc_000B6577;

loc_000B63C7: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B5320);
    PUSH32(esp, 0x000B63D4u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B63D4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6411; /* jne: not equal / not zero */

loc_000B63DB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = 0x1D8620;
    PUSH32(esp, 0x000B63E8u); RECOMP_ABI_CALL(0x000A1580u, sub_000A1580); /* call 0x000A1580 */

loc_000B63E8: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000B63EFu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B63EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6540; /* je: equal / zero */

loc_000B63FA: ;
    ecx = eax;
    PUSH32(esp, 0x000B6401u); RECOMP_ABI_CALL(0x000B5F40u, sub_000B5F40); /* call 0x000B5F40 */

loc_000B6401: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B640Au); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B640A: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000B6411: ;
    PUSH32(esp, 0x1B5354);
    ecx = esi;
    PUSH32(esp, 0x000B641Du); RECOMP_ABI_CALL(0x0003D190u, sub_0003D190); /* call 0x0003D190 */

loc_000B641D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B643F; /* je: equal / zero */

loc_000B6421: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x000B6428u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B6428: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B654B; /* je: equal / zero */

loc_000B6433: ;
    ecx = eax;
    PUSH32(esp, 0x000B643Au); RECOMP_ABI_CALL(0x000BCDE0u, sub_000BCDE0); /* call 0x000BCDE0 */

loc_000B643A: ;
    goto loc_000B6577;

loc_000B643F: ;
    PUSH32(esp, 0x1B53C8);
    ecx = esi;
    PUSH32(esp, 0x000B644Bu); RECOMP_ABI_CALL(0x0003D190u, sub_0003D190); /* call 0x0003D190 */

loc_000B644B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B646D; /* je: equal / zero */

loc_000B644F: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x000B6456u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B6456: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B654B; /* je: equal / zero */

loc_000B6461: ;
    ecx = eax;
    PUSH32(esp, 0x000B6468u); RECOMP_ABI_CALL(0x000B45C0u, sub_000B45C0); /* call 0x000B45C0 */

loc_000B6468: ;
    goto loc_000B6577;

loc_000B646D: ;
    PUSH32(esp, 0x1B5338);
    ecx = esi;
    PUSH32(esp, 0x000B6479u); RECOMP_ABI_CALL(0x0003D190u, sub_0003D190); /* call 0x0003D190 */

loc_000B6479: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B649B; /* je: equal / zero */

loc_000B647D: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x000B6484u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B6484: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B654B; /* je: equal / zero */

loc_000B648F: ;
    ecx = eax;
    PUSH32(esp, 0x000B6496u); RECOMP_ABI_CALL(0x000B5250u, sub_000B5250); /* call 0x000B5250 */

loc_000B6496: ;
    goto loc_000B6577;

loc_000B649B: ;
    PUSH32(esp, 0x1B539C);
    ecx = esi;
    PUSH32(esp, 0x000B64A7u); RECOMP_ABI_CALL(0x0003D190u, sub_0003D190); /* call 0x0003D190 */

loc_000B64A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B64C9; /* je: equal / zero */

loc_000B64AB: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x000B64B2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B64B2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B654B; /* je: equal / zero */

loc_000B64BD: ;
    ecx = eax;
    PUSH32(esp, 0x000B64C4u); RECOMP_ABI_CALL(0x000B3360u, sub_000B3360); /* call 0x000B3360 */

loc_000B64C4: ;
    goto loc_000B6577;

loc_000B64C9: ;
    PUSH32(esp, 0x1B53E4);
    ecx = esi;
    PUSH32(esp, 0x000B64D5u); RECOMP_ABI_CALL(0x0003D190u, sub_0003D190); /* call 0x0003D190 */

loc_000B64D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B64F3; /* je: equal / zero */

loc_000B64D9: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x000B64E0u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B64E0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B654B; /* je: equal / zero */

loc_000B64E7: ;
    ecx = eax;
    PUSH32(esp, 0x000B64EEu); RECOMP_ABI_CALL(0x000BD480u, sub_000BD480); /* call 0x000BD480 */

loc_000B64EE: ;
    goto loc_000B6577;

loc_000B64F3: ;
    PUSH32(esp, 0x1B530C);
    ecx = esi;
    PUSH32(esp, 0x000B64FFu); RECOMP_ABI_CALL(0x0003D190u, sub_0003D190); /* call 0x0003D190 */

loc_000B64FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6552; /* je: equal / zero */

loc_000B6503: ;
    ecx = MEM32(0x1D3F08);
    PUSH32(esp, 0x000B650Eu); RECOMP_ABI_CALL(0x000146E0u, sub_000146E0); /* call 0x000146E0 */

loc_000B650E: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000B6515u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B6515: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6540; /* je: equal / zero */

loc_000B651C: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000B6530u); RECOMP_ABI_CALL(0x000B5C60u, sub_000B5C60); /* call 0x000B5C60 */

loc_000B6530: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6539u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B6539: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000B6540: ;
    ecx = MEM32(ebx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B654Bu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B654B: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000B6552: ;
    PUSH32(esp, 0x1C0254);
    ecx = esi;
    PUSH32(esp, 0x000B655Eu); RECOMP_ABI_CALL(0x0003D190u, sub_0003D190); /* call 0x0003D190 */

loc_000B655E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B654B; /* je: equal / zero */

loc_000B6562: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x000B6569u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B6569: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B654B; /* je: equal / zero */

loc_000B6570: ;
    ecx = eax;
    PUSH32(esp, 0x000B6577u); RECOMP_ABI_CALL(0x000BBE70u, sub_000BBE70); /* call 0x000BBE70 */

loc_000B6577: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B654B; /* je: equal / zero */

loc_000B657B: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6584u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_000B6584: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000B658Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B658B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B65BB; /* je: equal / zero */

loc_000B6594: ;
    ecx = esi;
    PUSH32(esp, 0x000B659Bu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B659B: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C01F0;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B65B1u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B65B1: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000B65BB: ;
    ecx = MEM32(ebx + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B65C6u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B65C6: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B65D0
 * Original: 0x000B65D0 - 0x000B6650 (128 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B65D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B65D0: ;
    eax = MEM32(0x1D3F68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000B65FA; /* jne: not equal / not zero */

loc_000B65DC: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x000B65E3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B65E3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B65F3; /* je: equal / zero */

loc_000B65EA: ;
    ecx = eax;
    PUSH32(esp, 0x000B65F1u); RECOMP_ABI_CALL(0x000170E0u, sub_000170E0); /* call 0x000170E0 */

loc_000B65F1: ;
    goto loc_000B65F5;

loc_000B65F3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B65F5: ;
    MEM32(0x1D3F68) = eax;

loc_000B65FA: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B663F; /* ja: above (unsigned >) */

loc_000B6600: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000B6608u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B6608: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6633; /* je: equal / zero */

loc_000B6611: ;
    ecx = esi;
    PUSH32(esp, 0x000B6618u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B6618: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0230;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B662Eu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B662E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000B6633: ;
    ecx = MEM32(ebx + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B663Eu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B663E: ;
    POP32(esp, esi);

loc_000B663F: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_000B6650(); return; /* fallthrough 0x000B6650 */

}

/**
 * sub_000B6650
 * Original: 0x000B6650 - 0x000B66A7 (87 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6650: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, 0x2C);
    MEM32(ebx + 4) = 2;
    PUSH32(esp, 0x000B6661u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B6661: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B66A2; /* je: equal / zero */

loc_000B666A: ;
    PUSH32(esp, edi);
    edi = eax + 4;
    MEM32(eax) = 2;
    eax = edi;
    ecx = 2;
    goto loc_000B6680;

    /* nop */

loc_000B6680: ;
    MEM32(eax) = 0x1BF9A0;
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B6680; /* jne: not equal / not zero */

loc_000B669C: ;
    MEM32(ebx + 8) = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000B66A2: ;
    MEM32(ebx + 8) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B66B0
 * Original: 0x000B66B0 - 0x000B6712 (98 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B66B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B66B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ecx + 0xC;
    /* nop */

loc_000B66C0: ;
    edx = MEM32(0x1CE808);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B66DC; /* jbe: below or equal (unsigned <=) */

loc_000B66CC: ;
    ecx = MEM32(0x1CE804);

loc_000B66D2: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B670D; /* je: equal / zero */

loc_000B66D7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B66D2; /* jb: below (unsigned <) */

loc_000B66DC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B66DE: ;
    eax = MEM32(eax + 4);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B66E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B66E6u); } /* indirect call */
    }

loc_000B66E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B66FE; /* je: equal / zero */

loc_000B66ED: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000B66F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B66F2u); } /* indirect call */
    }

loc_000B66F5: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B66FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B66FBu); } /* indirect call */
    }

loc_000B66FE: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x4C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B66C0; /* jb: below (unsigned <) */

loc_000B6707: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000B670D: ;
    eax = ecx + eax * 8;
    goto loc_000B66DE;

}

/**
 * sub_000B6720
 * Original: 0x000B6720 - 0x000B67A7 (135 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B6720: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    edi = ecx + 0x518;
    ebx = ecx + 0x188;
    goto loc_000B6740;

    /* nop */

loc_000B6740: ;
    ebp = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6748u); RECOMP_ABI_CALL(0x000B9A80u, sub_000B9A80); /* call 0x000B9A80 */

loc_000B6748: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 0xC); PUSH32(esp, 0x000B6751u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B674Eu); } /* indirect call */
    }

loc_000B6751: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B678B; /* je: equal / zero */

loc_000B6755: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000B675Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B675Au); } /* indirect call */
    }

loc_000B675D: ;
    ecx = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x1C02DC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x000B677Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B6776u); } /* indirect call */
    }

loc_000B677C: ;
    ecx = MEM32(esp + 0x18);
    MEM32(edi) = ecx;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B678Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B6788u); } /* indirect call */
    }

loc_000B678B: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x4C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000B6740; /* jb: below (unsigned <) */

loc_000B679F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B67B0
 * Original: 0x000B67B0 - 0x000B67FC (76 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B67B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B67B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B67F4; /* jbe: below or equal (unsigned <=) */

loc_000B67C0: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B67C3: ;
    eax = MEM32(esi + 8);
    edx = MEM32(eax + edi);
    ecx = eax + edi;
    eax = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000B67D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B67D1u); } /* indirect call */
    }

loc_000B67D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B67E8; /* je: equal / zero */

loc_000B67D8: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 1;
    MEM32(edx) = ecx;

loc_000B67E8: ;
    eax = MEM32(esi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B67C3; /* jb: below (unsigned <) */

loc_000B67F3: ;
    POP32(esp, edi);

loc_000B67F4: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B6800
 * Original: 0x000B6800 - 0x000B6811 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6800(void)
{

loc_000B6800: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4 + 0xC);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B6820
 * Original: 0x000B6820 - 0x000B6893 (115 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6820: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B683B; /* jne: not equal / not zero */

loc_000B682A: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x236);
    PUSH32(esp, 0x000B683Au); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000B683A: ;
    esp += 4; return; /* ret */

loc_000B683B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6851; /* jne: not equal / not zero */

loc_000B6840: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x2C6);
    PUSH32(esp, 0x000B6850u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000B6850: ;
    esp += 4; return; /* ret */

loc_000B6851: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6867; /* jne: not equal / not zero */

loc_000B6856: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0xEB);
    PUSH32(esp, 0x000B6866u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000B6866: ;
    esp += 4; return; /* ret */

loc_000B6867: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B687D; /* jne: not equal / not zero */

loc_000B686C: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x2C4);
    PUSH32(esp, 0x000B687Cu); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000B687C: ;
    esp += 4; return; /* ret */

loc_000B687D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6892; /* jne: not equal / not zero */

loc_000B6882: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x344);
    PUSH32(esp, 0x000B6892u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000B6892: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B68A0
 * Original: 0x000B68A0 - 0x000B68B7 (23 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B68A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B68A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax * 4 + 0x1CE780);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B68C0
 * Original: 0x000B68C0 - 0x000B68E1 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B68C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B68C0: ;
    ecx = MEM32(esp + 4);
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1CE780) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1CE780;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_000B68D0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B68DE; /* je: equal / zero */

loc_000B68D5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B68D0; /* jl: less (signed <) */

loc_000B68DE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B68F0
 * Original: 0x000B68F0 - 0x000B6931 (65 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B68F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B68F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = 0x1CE784;
    /* nop */

loc_000B6900: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edx;

loc_000B6904: ;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B690E; /* jne: not equal / not zero */

loc_000B6909: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6928; /* je: equal / zero */

loc_000B690E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B6904; /* jl: less (signed <) */

loc_000B6917: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1CE804) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1CE804 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B6900; /* jl: less (signed <) */

loc_000B6922: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B6928: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B6940
 * Original: 0x000B6940 - 0x000B6977 (55 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6940(void)
{

loc_000B6940: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, 0x1C0300);
    PUSH32(esp, edi);
    ecx = esi + 0x34;
    PUSH32(esp, 0x000B6956u); RECOMP_ABI_CALL(0x00014B70u, sub_00014B70); /* call 0x00014B70 */

loc_000B6956: ;
    PUSH32(esp, 0x1C02F0);
    PUSH32(esp, edi);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x000B6964u); RECOMP_ABI_CALL(0x00014B70u, sub_00014B70); /* call 0x00014B70 */

loc_000B6964: ;
    PUSH32(esp, 0x1C02E4);
    PUSH32(esp, edi);
    ecx = esi + 4;
    PUSH32(esp, 0x000B6972u); RECOMP_ABI_CALL(0x00014B70u, sub_00014B70); /* call 0x00014B70 */

loc_000B6972: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B6980
 * Original: 0x000B6980 - 0x000B6ABC (316 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B6980: ;
    eax = MEM32(0x1C02C4);
    _fb = (uint32_t)(0x248) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x248;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    esi = ecx;
    PUSH32(esp, 0x1C02C8);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000B69A2u); RECOMP_ABI_CALL(0x000F8F90u, sub_000F8F90); /* call 0x000F8F90 */

loc_000B69A2: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x000B69ABu); RECOMP_ABI_CALL(0x000F9280u, sub_000F9280); /* call 0x000F9280 */

loc_000B69AB: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    ebx = esi + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1BF9B0);
    ecx = esp + 0x24;
    PUSH32(esp, 0x000B69C2u); RECOMP_ABI_CALL(0x000F7930u, sub_000F7930); /* call 0x000F7930 */

loc_000B69C2: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B69E7; /* je: equal / zero */

loc_000B69C9: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_000B69DB; /* je: equal / zero */

loc_000B69D3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B69D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B69D7u); } /* indirect call */
    }

loc_000B69D9: ;
    goto loc_000B69E4;

loc_000B69DB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B69E1u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000B69E1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B69E4: ;
    MEM32(esi + 8) = ebp;

loc_000B69E7: ;
    edi = MEM32(ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B6A4D; /* jbe: below or equal (unsigned <=) */

loc_000B69ED: ;
    eax = edi + edi * 4;
    ecx = eax * 4 + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B69FDu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B69FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6A17; /* je: equal / zero */

loc_000B6A04: ;
    PUSH32(esp, 0xB2C50);
    PUSH32(esp, edi);
    ebp = eax + 4;
    PUSH32(esp, 0x14);
    PUSH32(esp, ebp);
    MEM32(eax) = edi;
    PUSH32(esp, 0x000B6A17u); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_000B6A17: ;
    ecx = MEM32(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 8) = ebp;
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000B6A4D; /* jbe: below or equal (unsigned <=) */

loc_000B6A26: ;
    edx = eax + eax * 4;
    eax = MEM32(esi + 8);
    ecx = eax + edx * 4;
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000B6A3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B6A3Bu); } /* indirect call */
    }

loc_000B6A3E: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000B6A26; /* jb: below (unsigned <) */

loc_000B6A4D: ;
    PUSH32(esp, 0x1C031C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000B6A5Bu); RECOMP_ABI_CALL(0x000F7E10u, sub_000F7E10); /* call 0x000F7E10 */

loc_000B6A5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6A76; /* je: equal / zero */

loc_000B6A5F: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B6A6Bu); RECOMP_ABI_CALL(0x000B66B0u, sub_000B66B0); /* call 0x000B66B0 */

loc_000B6A6B: ;
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000B6A76u); RECOMP_ABI_CALL(0x000F7590u, sub_000F7590); /* call 0x000F7590 */

loc_000B6A76: ;
    PUSH32(esp, 0x1C0310);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000B6A84u); RECOMP_ABI_CALL(0x000F7E10u, sub_000F7E10); /* call 0x000F7E10 */

loc_000B6A84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6A9F; /* je: equal / zero */

loc_000B6A88: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000B6A94u); RECOMP_ABI_CALL(0x000B6720u, sub_000B6720); /* call 0x000B6720 */

loc_000B6A94: ;
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000B6A9Fu); RECOMP_ABI_CALL(0x000F7590u, sub_000F7590); /* call 0x000F7590 */

loc_000B6A9F: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x000B6AA8u); RECOMP_ABI_CALL(0x000F7550u, sub_000F7550); /* call 0x000F7550 */

loc_000B6AA8: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x000B6AB1u); RECOMP_ABI_CALL(0x000F7480u, sub_000F7480); /* call 0x000F7480 */

loc_000B6AB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x248) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x248;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B6AC0
 * Original: 0x000B6AC0 - 0x000B6AF0 (48 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6AC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ecx) = 0x1C032C;
    esi = ecx + 0x50;
    ebx = 3;

loc_000B6AD0: ;
    eax = MEM32(esi + -24);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000B6AEA; /* je: equal / zero */

loc_000B6AE1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6AE7u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000B6AE7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B6AEA: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B6AD0; /* jne: not equal / not zero */

loc_000B6AED: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B6AF0
 * Original: 0x000B6AF0 - 0x000B6B0E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6AF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B6AF8u); RECOMP_ABI_CALL(0x000B6AC0u, sub_000B6AC0); /* call 0x000B6AC0 */

loc_000B6AF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B6B08; /* je: equal / zero */

loc_000B6AFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B6B05u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000B6B05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B6B08: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B6B10
 * Original: 0x000B6B10 - 0x000B6BAA (154 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B6B10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx + 0xC;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    MEM32(ecx) = 0x1C0334;
    ebp = ebx + 8;
    MEM32(esp + 0x10) = 5;
    /* nop */

loc_000B6B30: ;
    MEM32(ebx) = 0x1C032C;
    esi = ebp;
    edi = 3;
    /* nop */

loc_000B6B40: ;
    ecx = esi;
    PUSH32(esp, 0x000B6B47u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_000B6B47: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B6B40; /* jne: not equal / not zero */

loc_000B6B4D: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x4C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x4C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_000B6B30; /* jne: not equal / not zero */

loc_000B6B5E: ;
    ebx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x188) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x188;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebx + 8;
    MEM32(esp + 0x10) = 0xC;

loc_000B6B73: ;
    MEM32(ebx) = 0x1C032C;
    esi = ebp;
    edi = 3;

loc_000B6B80: ;
    ecx = esi;
    PUSH32(esp, 0x000B6B87u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_000B6B87: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B6B80; /* jne: not equal / not zero */

loc_000B6B8D: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x4C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x4C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_000B6B73; /* jne: not equal / not zero */

loc_000B6B9E: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B6BB0
 * Original: 0x000B6BB0 - 0x000B6C57 (167 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B6BB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp) = 0x1C0334;
    if (CMP_EQ(_fa, _fb)) goto loc_000B6BE7; /* je: equal / zero */

loc_000B6BC5: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_000B6BD7; /* je: equal / zero */

loc_000B6BCF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B6BD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B6BD3u); } /* indirect call */
    }

loc_000B6BD5: ;
    goto loc_000B6BE0;

loc_000B6BD7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6BDDu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000B6BDD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B6BE0: ;
    MEM32(ebp + 8) = 0;

loc_000B6BE7: ;
    edi = ebp + 0x518;
    MEM32(esp + 0x10) = 0xC;
    goto loc_000B6C00;

    /* nop */
    edi = edi;

loc_000B6C00: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi) = 0x1C032C;
    esi = edi + 0x4C;
    ebx = 3;

loc_000B6C11: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x000B6C1Bu); RECOMP_ABI_CALL(0x00015080u, sub_00015080); /* call 0x00015080 */

loc_000B6C1B: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B6C11; /* jne: not equal / not zero */

loc_000B6C1E: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B6C00; /* jne: not equal / not zero */

loc_000B6C24: ;
    edi = ebp + 0x188;
    ebp = 5;
    /* nop */

loc_000B6C30: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi) = 0x1C032C;
    esi = edi + 0x4C;
    ebx = 3;

loc_000B6C41: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x000B6C4Bu); RECOMP_ABI_CALL(0x00015080u, sub_00015080); /* call 0x00015080 */

loc_000B6C4B: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B6C41; /* jne: not equal / not zero */

loc_000B6C4E: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B6C30; /* jne: not equal / not zero */

loc_000B6C51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B6C60
 * Original: 0x000B6C60 - 0x000B6C7E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6C60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B6C68u); RECOMP_ABI_CALL(0x000B6BB0u, sub_000B6BB0); /* call 0x000B6BB0 */

loc_000B6C68: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B6C78; /* je: equal / zero */

loc_000B6C6F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B6C75u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000B6C75: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B6C78: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B6C80
 * Original: 0x000B6C80 - 0x000B6CA4 (36 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6C80(void)
{

loc_000B6C80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B6C88u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B6C88: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0344;
    MEM32(0x1CE80C) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B6CB0
 * Original: 0x000B6CB0 - 0x000B6CC9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6CB0(void)
{

loc_000B6CB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B6CB8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B6CB8: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0368;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B6CD0
 * Original: 0x000B6CD0 - 0x000B6CE9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6CD0(void)
{

loc_000B6CD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B6CD8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B6CD8: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C038C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B6CF0
 * Original: 0x000B6CF0 - 0x000B6D1E (46 bytes, 15 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6CF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6CF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x1C03B0);
    PUSH32(esp, 0x27);
    MEM32(esi + 0x14) = 0;
    PUSH32(esp, 0x000B6D08u); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000B6D08: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6D1Cu); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000B6D1C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B6D20
 * Original: 0x000B6D20 - 0x000B6D51 (49 bytes, 15 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6D20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CE80C);
    esi = ecx;
    PUSH32(esp, 0x1C03CC);
    PUSH32(esp, 0x2A);
    MEM32(esi + 0x14) = 0;
    PUSH32(esp, 0x000B6D3Bu); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000B6D3B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6D4Fu); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000B6D4F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B6D60
 * Original: 0x000B6D60 - 0x000B6D73 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6D60(void)
{

loc_000B6D60: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1BFEA4);
    PUSH32(esp, 0x000B6D72u); RECOMP_ABI_CALL(0x000EBD00u, sub_000EBD00); /* call 0x000EBD00 */

loc_000B6D72: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B6D80
 * Original: 0x000B6D80 - 0x000B6E4D (205 bytes, 65 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6D80: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B6DCA; /* je: equal / zero */

loc_000B6D8F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B6E47; /* jne: not equal / not zero */

loc_000B6D96: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B57C4);
    PUSH32(esp, 0x000B6DA3u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B6DA3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6E47; /* jne: not equal / not zero */

loc_000B6DAE: ;
    MEM32(0x1DA948) = 1;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6DC1u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B6DC1: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B6DCA: ;
    ecx = MEM32(ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B57AC);
    PUSH32(esp, 0x000B6DD7u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B6DD7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6E47; /* jne: not equal / not zero */

loc_000B6DDE: ;
    edx = MEM32(0x1D8624);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = 0x1D8620;
    PUSH32(esp, 0x000B6DF1u); RECOMP_ABI_CALL(0x000A1580u, sub_000A1580); /* call 0x000A1580 */

loc_000B6DF1: ;
    ecx = 0x1D8620;
    PUSH32(esp, 0x000B6DFBu); RECOMP_ABI_CALL(0x000A1720u, sub_000A1720); /* call 0x000A1720 */

loc_000B6DFB: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000B6E02u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B6E02: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6E32; /* je: equal / zero */

loc_000B6E0B: ;
    ecx = esi;
    PUSH32(esp, 0x000B6E12u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B6E12: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C038C;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B6E28u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B6E28: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B6E32: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B6E3Du); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B6E3D: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B6E47: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B6E50
 * Original: 0x000B6E50 - 0x000B6E69 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6E50(void)
{

loc_000B6E50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B6E58u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B6E58: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C03E4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B6E70
 * Original: 0x000B6E70 - 0x000B6E94 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6E70: ;
    PUSH32(esp, esi);
    esi = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0408);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x000B6E87u); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000B6E87: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B6E92u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000B6E92: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B6EA0
 * Original: 0x000B6EA0 - 0x000B6EB3 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6EA0(void)
{

loc_000B6EA0: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0408);
    PUSH32(esp, 0x000B6EB2u); RECOMP_ABI_CALL(0x000EBD00u, sub_000EBD00); /* call 0x000EBD00 */

loc_000B6EB2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B6EC0
 * Original: 0x000B6EC0 - 0x000B6FC6 (262 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6EC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    if ((_fa == 0)) goto loc_000B6F02; /* je: equal / zero */

loc_000B6ED0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B6FBF; /* jne: not equal / not zero */

loc_000B6ED7: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C0408);
    PUSH32(esp, 0x000B6EE4u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B6EE4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6FBF; /* jne: not equal / not zero */

loc_000B6EEF: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6EF8u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B6EF8: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B6F02: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B5A58);
    PUSH32(esp, 0x000B6F0Fu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B6F0F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6F6C; /* jne: not equal / not zero */

loc_000B6F16: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000B6F1Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B6F1D: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6F57; /* je: equal / zero */

loc_000B6F26: ;
    ecx = esi;
    PUSH32(esp, 0x000B6F2Du); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B6F2D: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0344;
    MEM32(0x1CE80C) = 0;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B6F4Du); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B6F4D: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B6F57: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B6F62u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B6F62: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B6F6C: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1B5A44);
    PUSH32(esp, 0x000B6F79u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B6F79: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6FBF; /* jne: not equal / not zero */

loc_000B6F80: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000B6F87u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B6F87: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6FAA; /* je: equal / zero */

loc_000B6F8E: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x000B6F97u); RECOMP_ABI_CALL(0x000B6C80u, sub_000B6C80); /* call 0x000B6C80 */

loc_000B6F97: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6FA0u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B6FA0: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B6FAA: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6FB5u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B6FB5: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B6FBF: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B6FD0
 * Original: 0x000B6FD0 - 0x000B6FF0 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6FD0(void)
{

loc_000B6FD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B6FD8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B6FD8: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0420;
    MEM32(esi + 0x10) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B6FF0
 * Original: 0x000B6FF0 - 0x000B7030 (64 bytes, 22 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6FF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7008; /* je: equal / zero */

loc_000B6FFA: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7008u); RECOMP_ABI_CALL(0x000EBCF0u, sub_000EBCF0); /* call 0x000EBCF0 */

loc_000B7008: ;
    eax = MEM32(0x1D8634);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BFEFC);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x000B701Au); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000B701A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B702Eu); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000B702E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7030
 * Original: 0x000B7030 - 0x000B7050 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7030(void)
{

loc_000B7030: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B7038u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B7038: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0444;
    MEM32(esi + 0x10) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7050
 * Original: 0x000B7050 - 0x000B70C8 (120 bytes, 36 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7050: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x14) = 0;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0x000B7067u); RECOMP_ABI_CALL(0x00013A40u, sub_00013A40); /* call 0x00013A40 */

loc_000B7067: ;
    ecx = MEM32(0x1D8634);
    MEM32(ecx + 0x38) = eax;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7085; /* je: equal / zero */

loc_000B7077: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7085u); RECOMP_ABI_CALL(0x000EBCF0u, sub_000EBCF0); /* call 0x000EBCF0 */

loc_000B7085: ;
    _fa = (uint32_t)(MEM32(0x1D867C)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1D867C), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B709E; /* jne: not equal / not zero */

loc_000B708E: ;
    edx = MEM32(0x1D8634);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1BFD6C);
    PUSH32(esp, 0x2B);
    goto loc_000B70AB;

loc_000B709E: ;
    eax = MEM32(0x1D8634);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BFD6C);
    PUSH32(esp, 0x28);

loc_000B70AB: ;
    PUSH32(esp, 0x000B70B0u); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000B70B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0x000B70C6u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000B70C6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B70D0
 * Original: 0x000B70D0 - 0x000B70E0 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B70D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B70D0: ;
    PUSH32(esp, 0x1D8620);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000B70DCu); RECOMP_ABI_CALL(0x000BB4B0u, sub_000BB4B0); /* call 0x000BB4B0 */

loc_000B70DC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B70E0
 * Original: 0x000B70E0 - 0x000B71E0 (256 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B70E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B70E0: ;
    eax = MEM32(0x1D9FE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000B70FB; /* jne: not equal / not zero */

loc_000B70ED: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000B70F7u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B70F7: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B70FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B71CF; /* jne: not equal / not zero */

loc_000B7104: ;
    eax = MEM32(0x1D867C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B716C; /* jne: not equal / not zero */

loc_000B710E: ;
    eax = MEM32(0x1D8634);
    PUSH32(esp, esi);
    MEM32(eax + 0x158) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B7123u); RECOMP_ABI_CALL(0x00046120u, sub_00046120); /* call 0x00046120 */

loc_000B7123: ;
    ecx = eax;
    PUSH32(esp, 0x000B712Au); RECOMP_ABI_CALL(0x00017220u, sub_00017220); /* call 0x00017220 */

loc_000B712A: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000B7131u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B7131: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B715C; /* je: equal / zero */

loc_000B713A: ;
    ecx = esi;
    PUSH32(esp, 0x000B7141u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B7141: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0344;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B7157u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B7157: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B715C: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B7167u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B7167: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B716C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7176; /* je: equal / zero */

loc_000B7171: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B71CF; /* jne: not equal / not zero */

loc_000B7176: ;
    _fa = (uint32_t)(MEM32(0x1D8624)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1D8624), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B7186; /* jbe: below or equal (unsigned <=) */

loc_000B717F: ;
    PUSH32(esp, 0x000B7184u); RECOMP_ABI_CALL(0x00050E70u, sub_00050E70); /* call 0x00050E70 */

loc_000B7184: ;
    goto loc_000B71A2;

loc_000B7186: ;
    ecx = MEM32(0x1D8634);
    MEM32(ecx + 0x158) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B719Bu); RECOMP_ABI_CALL(0x00046120u, sub_00046120); /* call 0x00046120 */

loc_000B719B: ;
    ecx = eax;
    PUSH32(esp, 0x000B71A2u); RECOMP_ABI_CALL(0x00017220u, sub_00017220); /* call 0x00017220 */

loc_000B71A2: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000B71A9u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B71A9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B71C4; /* je: equal / zero */

loc_000B71B0: ;
    ecx = eax;
    PUSH32(esp, 0x000B71B7u); RECOMP_ABI_CALL(0x000B6CD0u, sub_000B6CD0); /* call 0x000B6CD0 */

loc_000B71B7: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B71C0u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B71C0: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B71C4: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B71CFu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B71CF: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_000B71E0(); return; /* fallthrough 0x000B71E0 */

}

/**
 * sub_000B71E0
 * Original: 0x000B71E0 - 0x000B7277 (151 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B71E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B71E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000B71E9u); RECOMP_ABI_CALL(0x000BCB80u, sub_000BCB80); /* call 0x000BCB80 */

loc_000B71E9: ;
    PUSH32(esp, 0x1C04B4);
    ecx = esi;
    MEM32(esi) = 0x1C0494;
    MEM32(esi + 0x5C) = 0x1C048C;
    PUSH32(esp, 0x000B7202u); RECOMP_ABI_CALL(0x0011E860u, sub_0011E860); /* call 0x0011E860 */

loc_000B7202: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = 0x1D8620;
    MEM32(0x1D867C) = 5;
    PUSH32(esp, 0x000B721Au); RECOMP_ABI_CALL(0x000A1580u, sub_000A1580); /* call 0x000A1580 */

loc_000B721A: ;
    ecx = 0x1D8620;
    PUSH32(esp, 0x000B7224u); RECOMP_ABI_CALL(0x000A15A0u, sub_000A15A0); /* call 0x000A15A0 */

loc_000B7224: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x20);
    edx = MEM32(ecx + 4);
    eax = MEM32(0x1D8634);
    PUSH32(esp, 0x10);
    MEM32(eax + 0x40) = edx;
    PUSH32(esp, 0x000B723Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B723E: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7268; /* je: equal / zero */

loc_000B7247: ;
    ecx = edi;
    PUSH32(esp, 0x000B724Eu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B724E: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(edi + 8) = 1;
    MEM32(edi) = 0x1C03E4;
    PUSH32(esp, 0x000B7263u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B7263: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B7268: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000B7272u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B7272: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7280
 * Original: 0x000B7280 - 0x000B7351 (209 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7280: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x000B7289u); RECOMP_ABI_CALL(0x000BCB80u, sub_000BCB80); /* call 0x000BCB80 */

loc_000B7289: ;
    PUSH32(esp, 0x1C04EC);
    ecx = edi;
    MEM32(edi) = 0x1C04CC;
    MEM32(edi + 0x5C) = 0x1C04C4;
    PUSH32(esp, 0x000B72A2u); RECOMP_ABI_CALL(0x0011E860u, sub_0011E860); /* call 0x0011E860 */

loc_000B72A2: ;
    _fa = (uint32_t)(MEM32(0x1D8624)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1D8624), 1 (32-bit) */
    MEM32(0x1D867C) = 4;
    if (CMP_BE(_fa, _fb)) goto loc_000B72E6; /* jbe: below or equal (unsigned <=) */

loc_000B72B5: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000B72BCu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B72BC: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7342; /* je: equal / zero */

loc_000B72C5: ;
    ecx = esi;
    PUSH32(esp, 0x000B72CCu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B72CC: ;
    ecx = edi;
    PUSH32(esp, esi);
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0368;
    PUSH32(esp, 0x000B72E1u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B72E1: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B72E6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = 0x1D8620;
    PUSH32(esp, 0x000B72F4u); RECOMP_ABI_CALL(0x000A1580u, sub_000A1580); /* call 0x000A1580 */

loc_000B72F4: ;
    ecx = 0x1D8620;
    PUSH32(esp, 0x000B72FEu); RECOMP_ABI_CALL(0x000A15A0u, sub_000A15A0); /* call 0x000A15A0 */

loc_000B72FE: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x20);
    edx = MEM32(ecx + 4);
    eax = MEM32(0x1D8634);
    PUSH32(esp, 0x18);
    MEM32(eax + 0x40) = edx;
    PUSH32(esp, 0x000B7318u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B7318: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7342; /* je: equal / zero */

loc_000B7321: ;
    ecx = esi;
    PUSH32(esp, 0x000B7328u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B7328: ;
    ecx = edi;
    PUSH32(esp, esi);
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C038C;
    PUSH32(esp, 0x000B733Du); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B733D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B7342: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B734Cu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B734C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7360
 * Original: 0x000B7360 - 0x000B7374 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7360(void)
{

loc_000B7360: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x000B736Au); RECOMP_ABI_CALL(0x000BBEE0u, sub_000BBEE0); /* call 0x000BBEE0 */

loc_000B736A: ;
    MEM32(esi) = 0x1C04FC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7380
 * Original: 0x000B7380 - 0x000B7486 (262 bytes, 86 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7380: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7393; /* je: equal / zero */

loc_000B738A: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B7393: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B7403; /* je: equal / zero */

loc_000B73A0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B747F; /* jne: not equal / not zero */

loc_000B73A7: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C03CC);
    PUSH32(esp, 0x000B73B4u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B73B4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B747F; /* jne: not equal / not zero */

loc_000B73BF: ;
    PUSH32(esp, 0x10);
    MEM32(edi + 0x14) = 1;
    PUSH32(esp, 0x000B73CDu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B73CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B73EE; /* je: equal / zero */

loc_000B73D4: ;
    ecx = eax;
    PUSH32(esp, 0x000B73DBu); RECOMP_ABI_CALL(0x000B6E50u, sub_000B6E50); /* call 0x000B6E50 */

loc_000B73DB: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B73E4u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B73E4: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B73EE: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B73F9u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B73F9: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B7403: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x1C03CC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B7410u); RECOMP_ABI_CALL(0x00105910u, sub_00105910); /* call 0x00105910 */

loc_000B7410: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B747F; /* je: equal / zero */

loc_000B7417: ;
    MEM32(edi + 0x14) = 1;
    esi = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B7427u); RECOMP_ABI_CALL(0x000B9B00u, sub_000B9B00); /* call 0x000B9B00 */

loc_000B7427: ;
    PUSH32(esp, 0x000B742Cu); RECOMP_ABI_CALL(0x000130B0u, sub_000130B0); /* call 0x000130B0 */

loc_000B742C: ;
    edx = MEM32(eax + esi * 4 + 0x518);
    eax = MEM32(0x1D8634);
    MEM32(eax + 0x38) = edx;
    PUSH32(esp, 0x14);
    MEM32(0x1D8654) = 0x10;
    PUSH32(esp, 0x000B744Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B744C: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7474; /* je: equal / zero */

loc_000B7455: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000B745Eu); RECOMP_ABI_CALL(0x000BBEE0u, sub_000BBEE0); /* call 0x000BBEE0 */

loc_000B745E: ;
    MEM32(esi) = 0x1C04FC;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B746Du); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B746D: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B7474: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B747Fu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B747F: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B7490
 * Original: 0x000B7490 - 0x000B7560 (208 bytes, 71 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7490: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B750B; /* je: equal / zero */

loc_000B749F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B755A; /* jne: not equal / not zero */

loc_000B74A6: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BFEFC);
    PUSH32(esp, 0x000B74B3u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B74B3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B755A; /* jne: not equal / not zero */

loc_000B74BE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000B74C6u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B74C6: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B74F6; /* je: equal / zero */

loc_000B74CF: ;
    ecx = esi;
    PUSH32(esp, 0x000B74D6u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B74D6: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C038C;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B74ECu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B74EC: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B74F6: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B7501u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B7501: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B750B: ;
    ecx = MEM32(ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1BFEFC);
    PUSH32(esp, 0x000B7518u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B7518: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B755A; /* jne: not equal / not zero */

loc_000B751F: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000B7526u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B7526: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7546; /* je: equal / zero */

loc_000B752D: ;
    ecx = eax;
    PUSH32(esp, 0x000B7534u); RECOMP_ABI_CALL(0x000B7030u, sub_000B7030); /* call 0x000B7030 */

loc_000B7534: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B753Du); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B753D: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B7546: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7551u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B7551: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B755A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B7560
 * Original: 0x000B7560 - 0x000B7662 (258 bytes, 83 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7560: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B75CE; /* jne: not equal / not zero */

loc_000B756A: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B75D7; /* je: equal / zero */

loc_000B7576: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B765C; /* jne: not equal / not zero */

loc_000B757D: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BFD6C);
    PUSH32(esp, 0x000B758Au); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B758A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B765C; /* jne: not equal / not zero */

loc_000B7595: ;
    PUSH32(esp, 0x14);
    MEM32(edi + 0x14) = 1;
    PUSH32(esp, 0x000B75A3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B75A3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B75C3; /* je: equal / zero */

loc_000B75AA: ;
    ecx = eax;
    PUSH32(esp, 0x000B75B1u); RECOMP_ABI_CALL(0x000B6FD0u, sub_000B6FD0); /* call 0x000B6FD0 */

loc_000B75B1: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B75BAu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B75BA: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B75C3: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B75CEu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B75CE: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B75D7: ;
    ecx = MEM32(ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1BFD6C);
    PUSH32(esp, 0x000B75E4u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B75E4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B765C; /* jne: not equal / not zero */

loc_000B75EB: ;
    MEM32(edi + 0x14) = 1;
    edx = MEM32(0x1D8634);
    eax = MEM32(edx + 0x38);
    ecx = MEM32(0x1D3F08);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B760Bu); RECOMP_ABI_CALL(0x00013A30u, sub_00013A30); /* call 0x00013A30 */

loc_000B760B: ;
    PUSH32(esp, 0x14);
    MEM32(0x1D8654) = 0xF;
    PUSH32(esp, 0x000B761Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B761C: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7647; /* je: equal / zero */

loc_000B7625: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000B762Eu); RECOMP_ABI_CALL(0x000BBEE0u, sub_000BBEE0); /* call 0x000BBEE0 */

loc_000B762E: ;
    MEM32(esi) = 0x1C04FC;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B763Du); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B763D: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B7647: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B7652u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B7652: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B765C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B7670
 * Original: 0x000B7670 - 0x000B76B2 (66 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7670: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0x000B767Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B767B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B76A4; /* je: equal / zero */

loc_000B7684: ;
    ecx = esi;
    PUSH32(esp, 0x000B768Bu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000B768B: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0468;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B76A1u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B76A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B76A4: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B76AFu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B76AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B76C0
 * Original: 0x000B76C0 - 0x000B7811 (337 bytes, 118 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B76C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B76C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B76D5; /* je: equal / zero */

loc_000B76CB: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B76D5: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B7758; /* je: equal / zero */

loc_000B76E1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B780A; /* jne: not equal / not zero */

loc_000B76E8: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C03B0);
    PUSH32(esp, 0x000B76F5u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B76F5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B780A; /* jne: not equal / not zero */

loc_000B7700: ;
    edi = 1;
    MEM32(esi + 0x14) = edi;
    _fa = (uint32_t)(MEM32(0x1D8624)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1D8624), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B7747; /* jbe: below or equal (unsigned <=) */

loc_000B7710: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000B7717u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B7717: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7735; /* je: equal / zero */

loc_000B771E: ;
    ecx = eax;
    PUSH32(esp, 0x000B7725u); RECOMP_ABI_CALL(0x000B6CB0u, sub_000B6CB0); /* call 0x000B6CB0 */

loc_000B7725: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B772Eu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B772E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B7735: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7740u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B7740: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B7747: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000B7751u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B7751: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B7758: ;
    ecx = MEM32(ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1C03B0);
    PUSH32(esp, 0x000B7765u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B7765: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B780A; /* jne: not equal / not zero */

loc_000B7770: ;
    eax = MEM32(0x1D8624);
    ecx = MEM32(esi + 0x10);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x14) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_000B77C3; /* jbe: below or equal (unsigned <=) */

loc_000B7784: ;
    PUSH32(esp, 0x000B7789u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000B7789: ;
    PUSH32(esp, eax);
    ecx = 0x1D8620;
    PUSH32(esp, 0x000B7794u); RECOMP_ABI_CALL(0x000A1940u, sub_000A1940); /* call 0x000A1940 */

loc_000B7794: ;
    PUSH32(esp, 0x14);
    MEM32(0x1D8654) = 0xF;
    PUSH32(esp, 0x000B77A5u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B77A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B77F8; /* je: equal / zero */

loc_000B77AC: ;
    ecx = eax;
    PUSH32(esp, 0x000B77B3u); RECOMP_ABI_CALL(0x000B7360u, sub_000B7360); /* call 0x000B7360 */

loc_000B77B3: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B77BCu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B77BC: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B77C3: ;
    PUSH32(esp, 0x000B77C8u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000B77C8: ;
    PUSH32(esp, eax);
    ecx = 0x1D8620;
    PUSH32(esp, 0x000B77D3u); RECOMP_ABI_CALL(0x000A1940u, sub_000A1940); /* call 0x000A1940 */

loc_000B77D3: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000B77DAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B77DA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B77F8; /* je: equal / zero */

loc_000B77E1: ;
    ecx = eax;
    PUSH32(esp, 0x000B77E8u); RECOMP_ABI_CALL(0x000B6FD0u, sub_000B6FD0); /* call 0x000B6FD0 */

loc_000B77E8: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B77F1u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B77F1: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B77F8: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7803u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B7803: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B780A: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B7820
 * Original: 0x000B7820 - 0x000B7828 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7820(void)
{

loc_000B7820: ;
    MEM32(ecx + 0x30) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000B7830
 * Original: 0x000B7830 - 0x000B7848 (24 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7830(void)
{

loc_000B7830: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x34) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x38) = edx;
    MEM32(ecx + 0x3C) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B7850
 * Original: 0x000B7850 - 0x000B7913 (195 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7850: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x1D9FB8);
    MEM32(esp) = ecx;
    ecx = MEM32(eax + 0x6C);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B790F; /* jne: not equal / not zero */

loc_000B7867: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x14);
    ecx = MEM32(ebp + 0x3C);
    eax = MEM32(ecx + 0x654);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000B790B; /* jle: less or equal (signed <=) */

loc_000B7881: ;
    eax = MEM32(0x1D98D4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000B7890;

    /* nop */

loc_000B7890: ;
    edx = MEM32(ecx + 0x650);
    edi = MEM32(edx + ebx + 0xBC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B78DD; /* je: equal / zero */

loc_000B78A1: ;
    ecx = MEM32(ecx + 0xF14);
    edi = MEM32(ecx + esi * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B78DD; /* je: equal / zero */

loc_000B78AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B78D3; /* jne: not equal / not zero */

loc_000B78B2: ;
    PUSH32(esp, 0xB64);
    PUSH32(esp, 0x000B78BCu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B78BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B78CC; /* je: equal / zero */

loc_000B78C3: ;
    ecx = eax;
    PUSH32(esp, 0x000B78CAu); RECOMP_ABI_CALL(0x0008FB90u, sub_0008FB90); /* call 0x0008FB90 */

loc_000B78CA: ;
    goto loc_000B78CE;

loc_000B78CC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B78CE: ;
    MEM32(0x1D98D4) = eax;

loc_000B78D3: ;
    edx = eax + 0x8E0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B78F9; /* je: equal / zero */

loc_000B78DD: ;
    ecx = MEM32(ebp + 0x3C);
    edx = MEM32(ecx + 0x654);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x114;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B7890; /* jl: less (signed <) */

loc_000B78F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000B78F9: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax + 0x30) = 1;
    MEM32(eax + 0x2C) = 0;

loc_000B790B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000B790F: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B7920
 * Original: 0x000B7920 - 0x000B793A (26 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7920: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x94)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x94) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7937; /* jne: not equal / not zero */

loc_000B792C: ;
    eax = 1;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x2C) = eax;

loc_000B7937: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B7940
 * Original: 0x000B7940 - 0x000B795D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7940: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x94)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x94) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B795A; /* jne: not equal / not zero */

loc_000B794C: ;
    MEM32(ecx + 0x30) = 1;
    MEM32(ecx + 0x2C) = 0;

loc_000B795A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B7960
 * Original: 0x000B7960 - 0x000B79D2 (114 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7960: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x30) = 0;
    edx = MEM32(0x1D9FB8);
    ecx = MEM32(edx + 0x6C);
    eax = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7995; /* je: equal / zero */

loc_000B7980: ;
    ecx = MEM32(edx + 0x38);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B798Du); RECOMP_ABI_CALL(0x00030700u, sub_00030700); /* call 0x00030700 */

loc_000B798D: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + ecx * 4 + -4);

loc_000B7995: ;
    edi = MEM32(esi + 0x94);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C0534);
    PUSH32(esp, 0x1D3AA0);
    MEM32(edi + 0x94) = eax;
    PUSH32(esp, 0x000B79B1u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_000B79B1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1D3AA0);
    ecx = edi + 8;
    PUSH32(esp, 0x000B79C1u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_000B79C1: ;
    PUSH32(esp, 0x1C054C);
    ecx = esi + 8;
    PUSH32(esp, 0x000B79CEu); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_000B79CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B79E0
 * Original: 0x000B79E0 - 0x000B7A31 (81 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B79E0(void)
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

loc_000B79E0: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x6C);
    eax = MEM32(0x1DA954);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_000B7A25; /* jne: not equal / not zero */

loc_000B79F5: ;
    PUSH32(esp, 0x548);
    PUSH32(esp, 0x000B79FFu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B79FF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7A1E; /* je: equal / zero */

loc_000B7A06: ;
    ecx = eax;
    PUSH32(esp, 0x000B7A0Du); RECOMP_ABI_CALL(0x000B6B10u, sub_000B6B10); /* call 0x000B6B10 */

loc_000B7A0D: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x4C);
    MEM32(0x1DA954) = eax;
    fp_push(MEMF(esi + eax + 0x18C)); /* fld float */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B7A1E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x1DA954) = eax;

loc_000B7A25: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x4C);
    fp_push(MEMF(esi + eax + 0x18C)); /* fld float */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7A40
 * Original: 0x000B7A40 - 0x000B83DC (2460 bytes, 679 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7A40(void)
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

loc_000B7A40: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x68);
    fp_push(MEMF(esi + 0x70)); /* fld float */
    eax = MEM32(esi + 0x54);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEM32(esp + 0x68) = eax;
    fp_push(MEMF(esi + 0x74)); /* fld float */
    edx = MEM32(esi + 0x4C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    PUSH32(esp, edi);
    fp_push(MEMF(esi + 0x78)); /* fld float */
    edi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    ecx = MEM32(esi + 0x50);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEM32(esp + 0x6C) = ecx;
    fp_push(MEMF(esi + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEM32(esp + 0x6C) = edx;
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x40)); /* fadd dword ptr [esi + 0x40] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x44)); /* fadd dword ptr [esi + 0x44] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x48)); /* fadd dword ptr [esi + 0x48] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(esi + 0x54);
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x6C) = ecx;
    fp_push(MEMF(esp + 8)); /* fld float */
    edx = MEM32(esi + 0x50);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x34);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esi + 0x4C);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEM32(esp + 0x6C) = edx;
    fp_push(MEMF(esi + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEM32(esp + 0x6C) = eax;
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x40)); /* fadd dword ptr [esi + 0x40] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x44)); /* fadd dword ptr [esi + 0x44] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x54);
    MEM32(esp + 0x6C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x48)); /* fadd dword ptr [esi + 0x48] */
    eax = MEM32(esi + 0x50);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x34);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esi + 0x4C);
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEM32(esp + 0x6C) = eax;
    fp_push(MEMF(esi + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEM32(esp + 0x6C) = ecx;
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x50);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEM32(esp + 0x6C) = eax;
    fp_push(MEMF(esi + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x34);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x58) = edx;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEM32(esp + 0x6C) = ecx;
    fp_push(MEMF(esi + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    edx = MEM32(esi + 0x4C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEM32(esp + 0x6C) = edx;
    fp_push(MEMF(esi + 0x58)); /* fld float */
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    ecx = esp + 0x54;
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    edx = esp + 0x4C;
    fp_push(MEMF(esi + 0x60)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    ecx = edi + 0x50;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x78)); /* fmul dword ptr [esp + 0x78] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x78)); /* fmul dword ptr [esp + 0x78] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x78)); /* fmul dword ptr [esp + 0x78] */
    fp_push(MEMF(esi + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x40);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x70) = eax;
    eax = esp + 0x44;
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000B7EE4u); RECOMP_ABI_CALL(0x000D7990u, sub_000D7990); /* call 0x000D7990 */

loc_000B7EE4: ;
    PUSH32(esp, 0);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = edi + 0xAC;
    PUSH32(esp, 0x000B7F00u); RECOMP_ABI_CALL(0x000D7990u, sub_000D7990); /* call 0x000D7990 */

loc_000B7F00: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    ecx = MEM32(esi + 0x54);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    MEM32(esp + 0x6C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    edx = MEM32(esi + 0x50);
    fp_push(MEMF(esi + 0x78)); /* fld float */
    eax = MEM32(esi + 0x4C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEM32(esp + 0x6C) = edx;
    fp_push(MEMF(esi + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEM32(esp + 0x6C) = eax;
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x40)); /* fadd dword ptr [esi + 0x40] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x44)); /* fadd dword ptr [esi + 0x44] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x48)); /* fadd dword ptr [esi + 0x48] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    edx = MEM32(esi + 0x54);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esp + 0x6C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    eax = MEM32(esi + 0x50);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x34);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esi + 0x4C);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEM32(esp + 0x6C) = eax;
    fp_push(MEMF(esi + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEM32(esp + 0x6C) = ecx;
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x40)); /* fadd dword ptr [esi + 0x40] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x44)); /* fadd dword ptr [esi + 0x44] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x48)); /* fadd dword ptr [esi + 0x48] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x54);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM32(esp + 0x6C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    ecx = MEM32(esi + 0x50);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x34);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(esi + 0x4C);
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    MEM32(esp + 0x6C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esi + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    MEM32(esp + 0x6C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    ecx = MEM32(esi + 0x54);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    edx = MEM32(esi + 0x50);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    MEM32(esp + 0x6C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esi + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x34);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x58) = eax;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    MEM32(esp + 0x6C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esi + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, 0);
    edx = esp + 0x54;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    MEM32(esp + 0x74) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    eax = esp + 0x4C;
    fp_push(MEMF(esi + 0x58)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x78)); /* fmul dword ptr [esp + 0x78] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_push(MEMF(esi + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x40);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x70) = ecx;
    ecx = esp + 0x44;
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = edi + 0x108;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000B83B8u); RECOMP_ABI_CALL(0x000D7990u, sub_000D7990); /* call 0x000D7990 */

loc_000B83B8: ;
    PUSH32(esp, 0);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = edi + 0x164;
    PUSH32(esp, 0x000B83D4u); RECOMP_ABI_CALL(0x000D7990u, sub_000D7990); /* call 0x000D7990 */

loc_000B83D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B83E0
 * Original: 0x000B83E0 - 0x000B8431 (81 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B83E0(void)
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

loc_000B83E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    eax = MEM32(eax + 0x3C);
    ecx = esi + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B83F3u); RECOMP_ABI_CALL(0x00078570u, sub_00078570); /* call 0x00078570 */

loc_000B83F3: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C0528)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c0528] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B842A; /* je: equal / zero */

loc_000B8403: ;
    edx = MEM32(esi + 0x40);
    eax = MEM32(edx + 0x3C);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xAC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B8416u); RECOMP_ABI_CALL(0x00078570u, sub_00078570); /* call 0x00078570 */

loc_000B8416: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C0528)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c0528] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B842A; /* je: equal / zero */

loc_000B8426: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B842A: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B8440
 * Original: 0x000B8440 - 0x000B8494 (84 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8440(void)
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

loc_000B8440: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    eax = MEM32(eax + 0x3C);
    ecx = esi + 0x108;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B8456u); RECOMP_ABI_CALL(0x00078570u, sub_00078570); /* call 0x00078570 */

loc_000B8456: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C0528)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c0528] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B848D; /* je: equal / zero */

loc_000B8466: ;
    edx = MEM32(esi + 0x40);
    eax = MEM32(edx + 0x3C);
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x164;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B8479u); RECOMP_ABI_CALL(0x00078570u, sub_00078570); /* call 0x00078570 */

loc_000B8479: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C0528)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c0528] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B848D; /* je: equal / zero */

loc_000B8489: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B848D: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B84A0
 * Original: 0x000B84A0 - 0x000B84ED (77 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B84A0(void)
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

loc_000B84A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B84A8u); RECOMP_ABI_CALL(0x000B79E0u, sub_000B79E0); /* call 0x000B79E0 */

loc_000B84A8: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB2C)); /* fmul dword ptr [0x1aeb2c] */
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B84BE; /* jne: not equal / not zero */

loc_000B84B6: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1D4)); /* fmul dword ptr [esi + 0x1d4] */
    goto loc_000B84D6;

loc_000B84BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B84CB; /* jne: not equal / not zero */

loc_000B84C3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1D0)); /* fmul dword ptr [esi + 0x1d0] */
    goto loc_000B84D6;

loc_000B84CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B84D6; /* jne: not equal / not zero */

loc_000B84D0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1CC)); /* fmul dword ptr [esi + 0x1cc] */

loc_000B84D6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91CC)); /* fadd dword ptr [0x1c91cc] */
    PUSH32(esp, 0x000B84E1u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_000B84E1: ;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B84F0
 * Original: 0x000B84F0 - 0x000B8516 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B84F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B84F0: ;
    MEM32(ecx) = 0x1C0560;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8515; /* je: equal / zero */

loc_000B84FD: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_000B850E; /* je: equal / zero */

loc_000B8507: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B850Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B850Bu); } /* indirect call */
    }

loc_000B850D: ;
    esp += 4; return; /* ret */

loc_000B850E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B8514u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000B8514: ;
    POP32(esp, ecx);

loc_000B8515: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B8520
 * Original: 0x000B8520 - 0x000B8561 (65 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8520: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x1C0560;
    if (CMP_EQ(_fa, _fb)) goto loc_000B854B; /* je: equal / zero */

loc_000B8530: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8542; /* je: equal / zero */

loc_000B853A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B8540u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B853Eu); } /* indirect call */
    }

loc_000B8540: ;
    goto loc_000B854B;

loc_000B8542: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B8548u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000B8548: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B854B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B855B; /* je: equal / zero */

loc_000B8552: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B8558u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000B8558: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B855B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8570
 * Original: 0x000B8570 - 0x000B8580 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8570(void)
{

loc_000B8570: ;
    eax = ecx;
    MEM32(eax) = 0x1C0570;
    MEM32(eax + 0xC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000B8580
 * Original: 0x000B8580 - 0x000B85B2 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8580: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x94);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C0534);
    PUSH32(esp, 0x1D3AA0);
    MEM32(esi + 0x30) = 0;
    PUSH32(esp, 0x000B85A0u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_000B85A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1D3AA0);
    ecx = esi + 8;
    PUSH32(esp, 0x000B85B0u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_000B85B0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B85C0
 * Original: 0x000B85C0 - 0x000B86B1 (241 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B85C0(void)
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

loc_000B85C0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8606; /* je: equal / zero */

loc_000B85CD: ;
    fp_push(MEMF(esi + 0x1C0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B8611; /* jp: parity */

loc_000B85E0: ;
    fp_push(MEMF(esi + 0x1C4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B8611; /* jp: parity */

loc_000B85F3: ;
    fp_push(MEMF(esi + 0x1C8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B8611; /* jp: parity */

loc_000B8606: ;
    fp_push(MEMF(0x1C91E0)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B8611: ;
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    PUSH32(esp, ecx);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x28)); /* fmul dword ptr [esi + 0x28] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x2C)); /* fmul dword ptr [esi + 0x2c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x30)); /* fmul dword ptr [esi + 0x30] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 4) - fp_top()); /* fsubr dword ptr [esi + 4] */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x1C0)); /* fsub dword ptr [esi + 0x1c0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x1C4)); /* fsub dword ptr [esi + 0x1c4] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x1C8)); /* fsub dword ptr [esi + 0x1c8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000B867Du); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_000B867D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D0)); /* fadd dword ptr [0x1c91d0] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = esp + 4;
    if (TEST_Z(_fa, _fb)) goto loc_000B86A6; /* je: equal / zero */

loc_000B86A2: ;
    eax = esp + 8;

loc_000B86A6: ;
    fp_push(MEMF(eax)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp)); /* fdiv dword ptr [esp] */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B86C0
 * Original: 0x000B86C0 - 0x000B86D9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B86C0(void)
{

loc_000B86C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000B86CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B86CBu); } /* indirect call */
    }

loc_000B86CE: ;
    PUSH32(esp, eax);
    ecx = esi + 4;
    PUSH32(esp, 0x000B86D7u); RECOMP_ABI_CALL(0x00030820u, sub_00030820); /* call 0x00030820 */

loc_000B86D7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B86E0
 * Original: 0x000B86E0 - 0x000B8778 (152 bytes, 50 insns)
 * Category: game_debug
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B86E0(void)
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

loc_000B86E0: ;
    eax = MEM32(0x1D9FB8);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x114);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 0x38);
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000B8703u); RECOMP_ABI_CALL(0x00102DA0u, sub_00102DA0); /* call 0x00102DA0 */

loc_000B8703: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8728; /* jne: not equal / not zero */

loc_000B8709: ;
    PUSH32(esp, ebx);
    edx = esp + 0x1C;
    PUSH32(esp, 0x1C0580);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B8719u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_000B8719: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000B8728: ;
    fp_push(MEMF(esi + 0x4C)); /* fld float */
    eax = esp + 0xC;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esi + 0x40;
    fp_push(MEMF(esi + 0x50)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    ecx = edi + 4;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B8764u); RECOMP_ABI_CALL(0x000302A0u, sub_000302A0); /* call 0x000302A0 */

loc_000B8764: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000B876Cu); RECOMP_ABI_CALL(0x000B7A40u, sub_000B7A40); /* call 0x000B7A40 */

loc_000B876C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B8780
 * Original: 0x000B8780 - 0x000B879B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8780(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B8780: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B8789u); RECOMP_ABI_CALL(0x000B85C0u, sub_000B85C0); /* call 0x000B85C0 */

loc_000B8789: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    PUSH32(esp, 0x000B8794u); RECOMP_ABI_CALL(0x000B79E0u, sub_000B79E0); /* call 0x000B79E0 */

loc_000B8794: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
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
 * sub_000B87A0
 * Original: 0x000B87A0 - 0x000B87B7 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B87A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B87A0: ;
    eax = ecx;
    ecx = MEM32(eax);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B87B6; /* je: equal / zero */

loc_000B87B0: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;

loc_000B87B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B87C0
 * Original: 0x000B87C0 - 0x000B87E4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B87C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B87C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C05D0;
    PUSH32(esp, 0x000B87CEu); RECOMP_ABI_CALL(0x000B84F0u, sub_000B84F0); /* call 0x000B84F0 */

loc_000B87CE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B87DE; /* je: equal / zero */

loc_000B87D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B87DBu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000B87DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B87DE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B87F0
 * Original: 0x000B87F0 - 0x000B882C (60 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B87F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B87F0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B87FA; /* jne: not equal / not zero */

loc_000B87F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000B87FA: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8818; /* je: equal / zero */

loc_000B8804: ;
    MEM32(edx + 8) = 0;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 4);
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_000B8818: ;
    edx = MEM32(ecx + 0x10);
    MEM32(ecx + 0x14) = 0;
    edx = MEM32(edx + 4);
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000B8830
 * Original: 0x000B8830 - 0x000B8864 (52 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8830: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8861; /* je: equal / zero */

loc_000B8838: ;
    MEM32(eax + 8) = 0;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8858; /* je: equal / zero */

loc_000B884C: ;
    MEM32(edx + 8) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_000B8858: ;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B8861: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8870
 * Original: 0x000B8870 - 0x000B88FA (138 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8870: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B88E6; /* je: equal / zero */

loc_000B887D: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B889F; /* je: equal / zero */

loc_000B8884: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8896; /* je: equal / zero */

loc_000B888E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B8894u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8892u); } /* indirect call */
    }

loc_000B8894: ;
    goto loc_000B889F;

loc_000B8896: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B889Cu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000B889C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B889F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B88DF; /* jle: less or equal (signed <=) */

loc_000B88A3: ;
    ecx = ebx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B88B1u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B88B1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B88D1; /* je: equal / zero */

loc_000B88B8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xB8570);
    PUSH32(esp, ebx);
    esi = eax + 4;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    MEM32(eax) = ebx;
    PUSH32(esp, 0x000B88CCu); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_000B88CC: ;
    eax = esi;
    POP32(esp, esi);
    goto loc_000B88D3;

loc_000B88D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B88D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B88E6; /* jne: not equal / not zero */

loc_000B88DA: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000B88DF: ;
    MEM32(edi + 4) = 0;

loc_000B88E6: ;
    edx = MEM32(edi);
    ecx = edi;
    MEM32(edi + 8) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B88F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B88EDu); } /* indirect call */
    }

loc_000B88F0: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8900
 * Original: 0x000B8900 - 0x000B8992 (146 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8900: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000B895D; /* je: equal / zero */

loc_000B890A: ;
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
    if ((_fas < 0)) goto loc_000B8945; /* js: sign (negative) */

loc_000B891C: ;
    edi = eax + 1;
    /* nop */

loc_000B8920: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi) = 0x1C0570;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8942; /* je: equal / zero */

loc_000B8930: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B893B; /* jne: not equal / not zero */

loc_000B8935: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B893Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8939u); } /* indirect call */
    }

loc_000B893B: ;
    MEM32(esi + 0xC) = 0;

loc_000B8942: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B8920; /* jne: not equal / not zero */

loc_000B8945: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B8955; /* je: equal / zero */

loc_000B894C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000B8952u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000B8952: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8955: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000B895D: ;
    MEM32(edi) = 0x1C0570;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B897C; /* je: equal / zero */

loc_000B896A: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B8975; /* jne: not equal / not zero */

loc_000B896F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B8975u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8973u); } /* indirect call */
    }

loc_000B8975: ;
    MEM32(edi + 0xC) = 0;

loc_000B897C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B898C; /* je: equal / zero */

loc_000B8983: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B8989u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000B8989: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B898C: ;
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B89A0
 * Original: 0x000B89A0 - 0x000B8A33 (147 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B89A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B89A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x40) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x1C0574;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0xA8) = eax;
    MEM32(esi + 0x104) = eax;
    MEM32(esi + 0x160) = eax;
    ecx = 4;
    MEM32(esi + 0x1BC) = eax;
    MEM32(esi + 0x48) = ecx;
    MEM32(esi + 0x4C) = ecx;
    ecx = MEM32(edx + 0x74);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B8A01; /* je: equal / zero */

loc_000B89E2: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B89F1; /* je: equal / zero */

loc_000B89E5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B8A04; /* jne: not equal / not zero */

loc_000B89E8: ;
    MEM32(esi + 0x48) = 3;
    goto loc_000B8A04;

loc_000B89F1: ;
    MEM32(esi + 0x48) = 1;
    MEM32(esi + 0x4C) = 2;
    goto loc_000B8A04;

loc_000B8A01: ;
    MEM32(esi + 0x48) = eax;

loc_000B8A04: ;
    ecx = MEM32(edx + 0x78);
    MEM32(esi + 0x1CC) = ecx;
    eax = MEM32(edx + 0x7C);
    MEM32(esi + 0x1D0) = eax;
    ecx = MEM32(edx + 0x80);
    MEM32(esi + 0x1D4) = ecx;
    edx = MEM32(edx + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000B8A2Du); RECOMP_ABI_CALL(0x000B86E0u, sub_000B86E0); /* call 0x000B86E0 */

loc_000B8A2D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B8A40
 * Original: 0x000B8A40 - 0x000B8A5F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8A40: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C0574;
    if (TEST_Z(_fa, _fb)) goto loc_000B8A59; /* je: equal / zero */

loc_000B8A50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B8A56u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000B8A56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8A59: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8A60
 * Original: 0x000B8A60 - 0x000B8AD6 (118 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8A60(void)
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

loc_000B8A60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B8A68u); RECOMP_ABI_CALL(0x000B85C0u, sub_000B85C0); /* call 0x000B85C0 */

loc_000B8A68: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB30)); /* fmul dword ptr [0x1aeb30] */
    eax = MEM32(0x1D9FB8);
    fp_push(MEMF(0x1C91CC)); /* fld float */
    ecx = MEM32(eax + 0x6C);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8A8A; /* jne: not equal / not zero */

loc_000B8A82: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1C9220)); /* fld float */

loc_000B8A8A: ;
    fp_push(MEMF(esi + 0x1D4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B8AA8; /* jne: not equal / not zero */

loc_000B8A9F: ;
    fp_pop(); /* fstp st(0) */
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B8AA8: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x1D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x1d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B8ABE; /* jne: not equal / not zero */

loc_000B8AB5: ;
    fp_pop(); /* fstp st(0) */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B8ABE: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x1CC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x1cc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B8ACF; /* jne: not equal / not zero */

loc_000B8ACB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B8ACF: ;
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B8AE0
 * Original: 0x000B8AE0 - 0x000B8BDF (255 bytes, 77 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8AE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8BAE; /* je: equal / zero */

loc_000B8AEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8BAE; /* je: equal / zero */

loc_000B8AF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8B30; /* jne: not equal / not zero */

loc_000B8AFC: ;
    PUSH32(esp, 0x000B8B01u); RECOMP_ABI_CALL(0x000B83E0u, sub_000B83E0); /* call 0x000B83E0 */

loc_000B8B01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8BDB; /* je: equal / zero */

loc_000B8B09: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000B8B14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8B11u); } /* indirect call */
    }

loc_000B8B14: ;
    PUSH32(esp, eax);
    ecx = esi + 4;
    PUSH32(esp, 0x000B8B1Du); RECOMP_ABI_CALL(0x00030820u, sub_00030820); /* call 0x00030820 */

loc_000B8B1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8BDB; /* je: equal / zero */

loc_000B8B25: ;
    MEM32(esi + 0x44) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B8B30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8BDB; /* jne: not equal / not zero */

loc_000B8B39: ;
    ecx = esi;
    PUSH32(esp, 0x000B8B40u); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_000B8B40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8B4F; /* je: equal / zero */

loc_000B8B44: ;
    MEM32(esi + 0x44) = 3;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B8B4F: ;
    eax = MEM32(esi + 0x40);
    eax = MEM32(eax + 0x5C);
    eax = MEM32(eax + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x48) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8B65; /* je: equal / zero */

loc_000B8B60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x4C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8BA3; /* jne: not equal / not zero */

loc_000B8B65: ;
    ecx = esi;
    PUSH32(esp, 0x000B8B6Cu); RECOMP_ABI_CALL(0x000B86C0u, sub_000B86C0); /* call 0x000B86C0 */

loc_000B8B6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8BA3; /* je: equal / zero */

loc_000B8B70: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx + 0x44);
    eax = MEM32(edx + 0x278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8BA3; /* jne: not equal / not zero */

loc_000B8B80: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000B8B85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8B82u); } /* indirect call */
    }

loc_000B8B85: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x1C0) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x1C4) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x1C8) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B8BA3: ;
    MEM32(esi + 0x44) = 2;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B8BAE: ;
    ecx = MEM32(esi + 0x40);
    ecx = MEM32(ecx + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000B8BB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8BB6u); } /* indirect call */
    }

loc_000B8BB9: ;
    PUSH32(esp, eax);
    ecx = esi + 4;
    PUSH32(esp, 0x000B8BC2u); RECOMP_ABI_CALL(0x00030820u, sub_00030820); /* call 0x00030820 */

loc_000B8BC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8BDB; /* jne: not equal / not zero */

loc_000B8BC6: ;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x1C0) = eax;
    MEM32(esi + 0x1C4) = eax;
    MEM32(esi + 0x1C8) = eax;

loc_000B8BDB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8BE0
 * Original: 0x000B8BE0 - 0x000B8C4B (107 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8BE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1C055C;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8C35; /* je: equal / zero */

loc_000B8BF0: ;
    PUSH32(esp, edi);

loc_000B8BF1: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(eax + 4);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8C02; /* je: equal / zero */

loc_000B8BFD: ;
    MEM32(edx + 4) = ecx;
    goto loc_000B8C05;

loc_000B8C02: ;
    MEM32(esi + 4) = ecx;

loc_000B8C05: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8C14; /* je: equal / zero */

loc_000B8C0C: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_000B8C1A;

loc_000B8C14: ;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;

loc_000B8C1A: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8C27; /* je: equal / zero */

loc_000B8C21: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000B8C27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8C24u); } /* indirect call */
    }

loc_000B8C27: ;
    edx = MEM32(esi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0xC) = edx;
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000B8BF1; /* jne: not equal / not zero */

loc_000B8C34: ;
    POP32(esp, edi);

loc_000B8C35: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8C49; /* je: equal / zero */

loc_000B8C3C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B8C42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8C40u); } /* indirect call */
    }

loc_000B8C42: ;
    MEM32(esi + 0x10) = 0;

loc_000B8C49: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8C50
 * Original: 0x000B8C50 - 0x000B8CD5 (133 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8C50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000B8C5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8C59u); } /* indirect call */
    }

loc_000B8C5C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8CB7; /* je: equal / zero */

loc_000B8C62: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    eax = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8C8B; /* je: equal / zero */

loc_000B8C70: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8C81; /* je: equal / zero */

loc_000B8C74: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B8C7F; /* jne: not equal / not zero */

loc_000B8C79: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B8C7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8C7Du); } /* indirect call */
    }

loc_000B8C7F: ;
    eax = MEM32(ebx);

loc_000B8C81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8C8B; /* je: equal / zero */

loc_000B8C88: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B8C8B: ;
    eax = MEM32(edi + 8);
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = 0;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000B8CBE; /* je: equal / zero */

loc_000B8CA0: ;
    MEM32(eax + 4) = esi;
    eax = MEM32(edi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 8) = esi;
    MEM32(edi + 0xC) = eax;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B8CB7: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B8CBE: ;
    eax = MEM32(edi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 4) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 0xC) = eax;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8CE0
 * Original: 0x000B8CE0 - 0x000B8D29 (73 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8CE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8D17; /* jne: not equal / not zero */

loc_000B8CED: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000B8CF4u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B8CF4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8D12; /* je: equal / zero */

loc_000B8CFB: ;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax) = 0x1C05D0;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = esi;
    goto loc_000B8D14;

loc_000B8D12: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B8D14: ;
    MEM32(edi + 0x10) = eax;

loc_000B8D17: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B8D24u); RECOMP_ABI_CALL(0x000B8870u, sub_000B8870); /* call 0x000B8870 */

loc_000B8D24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8D30
 * Original: 0x000B8D30 - 0x000B8D4E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8D30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B8D38u); RECOMP_ABI_CALL(0x000B8BE0u, sub_000B8BE0); /* call 0x000B8BE0 */

loc_000B8D38: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B8D48; /* je: equal / zero */

loc_000B8D3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B8D45u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000B8D45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8D48: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8D50
 * Original: 0x000B8D50 - 0x000B8D5E (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8D50(void)
{

loc_000B8D50: ;
    eax = 1;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x2C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8D60
 * Original: 0x000B8D60 - 0x000B8DAA (74 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8D60: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x1C05E0;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8D83; /* je: equal / zero */

loc_000B8D73: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B8D79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8D77u); } /* indirect call */
    }

loc_000B8D79: ;
    MEM32(esi + 0x90) = 0;

loc_000B8D83: ;
    ecx = esi + 0x18;
    PUSH32(esp, 0x000B8D8Bu); RECOMP_ABI_CALL(0x000B8BE0u, sub_000B8BE0); /* call 0x000B8BE0 */

loc_000B8D8B: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8DA2; /* je: equal / zero */

loc_000B8D99: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B8D9Fu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000B8D9F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8DA2: ;
    MEM32(esi) = 0x1BB3A8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8DB0
 * Original: 0x000B8DB0 - 0x000B8EC6 (278 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8DB0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 8) = esi;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x2C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8E9A; /* je: equal / zero */

loc_000B8DCE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 4);

loc_000B8DD3: ;
    ebx = MEM32(eax + 0xC);
    eax = MEM32(ebx + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEM32(ebx + 0x30) = edi;
    MEM32(ebx + 0x2C) = edi;
    PUSH32(esp, 0x000B8DE9u); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B8DE9: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8E64; /* je: equal / zero */

loc_000B8DF1: ;
    esi = MEM32(eax + 0xC);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x2C) = edi;
    PUSH32(esp, 0x000B8E07u); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B8E07: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8E29; /* je: equal / zero */

loc_000B8E0F: ;
    /* nop */

loc_000B8E10: ;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x000B8E18u); RECOMP_ABI_CALL(0x000B8DB0u, sub_000B8DB0); /* call 0x000B8DB0 */

loc_000B8E18: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x000B8E21u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B8E21: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8E10; /* jne: not equal / not zero */

loc_000B8E29: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8E48; /* je: equal / zero */

loc_000B8E33: ;
    MEM32(eax + 0x44) = edi;
    MEM32(eax + 0x1C0) = edi;
    MEM32(eax + 0x1C4) = edi;
    MEM32(eax + 0x1C8) = edi;

loc_000B8E48: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000B8E4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8E4Cu); } /* indirect call */
    }

loc_000B8E4F: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x000B8E58u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B8E58: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8DF1; /* jne: not equal / not zero */

loc_000B8E60: ;
    esi = MEM32(esp + 0x10);

loc_000B8E64: ;
    eax = MEM32(ebx + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8E83; /* je: equal / zero */

loc_000B8E6E: ;
    MEM32(eax + 0x44) = edi;
    MEM32(eax + 0x1C0) = edi;
    MEM32(eax + 0x1C4) = edi;
    MEM32(eax + 0x1C8) = edi;

loc_000B8E83: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000B8E8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8E87u); } /* indirect call */
    }

loc_000B8E8A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    eax = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8E98; /* je: equal / zero */

loc_000B8E90: ;
    ebp = MEM32(ebp + 4);
    goto loc_000B8DD3;

loc_000B8E98: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000B8E9A: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8EB9; /* je: equal / zero */

loc_000B8EA4: ;
    MEM32(eax + 0x44) = edi;
    MEM32(eax + 0x1C0) = edi;
    MEM32(eax + 0x1C4) = edi;
    MEM32(eax + 0x1C8) = edi;

loc_000B8EB9: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000B8EC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8EBDu); } /* indirect call */
    }

loc_000B8EC0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B8ED0
 * Original: 0x000B8ED0 - 0x000B9067 (407 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8ED0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x90);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8EF9; /* je: equal / zero */

loc_000B8EE4: ;
    eax = MEM32(eax + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9035; /* je: equal / zero */

loc_000B8EF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9035; /* je: equal / zero */

loc_000B8EF9: ;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B905F; /* je: equal / zero */

loc_000B8F02: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B905F; /* je: equal / zero */

loc_000B8F15: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_000B8F18: ;
    esi = MEM32(eax + 0xC);
    ecx = MEM32(eax + 4);
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x20) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8F45; /* je: equal / zero */

loc_000B8F30: ;
    eax = MEM32(eax + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9043; /* je: equal / zero */

loc_000B8F3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9043; /* je: equal / zero */

loc_000B8F45: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9017; /* je: equal / zero */

loc_000B8F4E: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x000B8F63u); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B8F63: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9017; /* je: equal / zero */

loc_000B8F6F: ;
    /* nop */

loc_000B8F70: ;
    edi = MEM32(eax + 0xC);
    eax = MEM32(edi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8F8A; /* je: equal / zero */

loc_000B8F7D: ;
    eax = MEM32(eax + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8FDF; /* je: equal / zero */

loc_000B8F85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8FDF; /* je: equal / zero */

loc_000B8F8A: ;
    _fa = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x24), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8FD8; /* je: equal / zero */

loc_000B8F8F: ;
    eax = MEM32(edi + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000B8F9Eu); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B8F9E: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8FD8; /* je: equal / zero */

loc_000B8FA6: ;
    esi = MEM32(eax + 0xC);
    ecx = esi;
    PUSH32(esp, 0x000B8FB0u); RECOMP_ABI_CALL(0x000B8ED0u, sub_000B8ED0); /* call 0x000B8ED0 */

loc_000B8FB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8FBE; /* je: equal / zero */

loc_000B8FB4: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8FBF; /* jne: not equal / not zero */

loc_000B8FBB: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000B8FBF;

loc_000B8FBE: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B8FBF: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x000B8FC8u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B8FC8: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8FA6; /* jne: not equal / not zero */

loc_000B8FD0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8FDF; /* jne: not equal / not zero */

loc_000B8FD4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8FEC; /* jne: not equal / not zero */

loc_000B8FD8: ;
    eax = MEM32(edi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8FEC; /* je: equal / zero */

loc_000B8FDF: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8FF0; /* jne: not equal / not zero */

loc_000B8FE6: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000B8FF0;

loc_000B8FEC: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B8FF0: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0x000B8FF9u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B8FF9: ;
    eax = MEM32(esp + 0x34);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8F70; /* jne: not equal / not zero */

loc_000B9007: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B903F; /* jne: not equal / not zero */

loc_000B900D: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B901C; /* jne: not equal / not zero */

loc_000B9013: ;
    esi = MEM32(esp + 0x20);

loc_000B9017: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9043; /* jne: not equal / not zero */

loc_000B901C: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B9020: ;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8F18; /* jne: not equal / not zero */

loc_000B902C: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ebx (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_000B904E; /* je: equal / zero */

loc_000B9035: ;
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B903F: ;
    esi = MEM32(esp + 0x20);

loc_000B9043: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9020; /* jne: not equal / not zero */

loc_000B9048: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000B9020;

loc_000B904E: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B905B; /* je: equal / zero */

loc_000B9054: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B905B: ;
    ecx = MEM32(esp + 0x18);

loc_000B905F: ;
    eax = MEM32(ecx + 0x30);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9070
 * Original: 0x000B9070 - 0x000B926F (511 bytes, 160 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9070: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x80);
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000B925F; /* je: equal / zero */

loc_000B908D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_000B908F: ;
    ebx = MEM32(eax + 0xC);
    ecx = MEM32(eax + 4);
    edx = MEM32(ebx + 0x1C);
    MEM32(esp + 0x7C) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x70;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x000B90AAu); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B90AA: ;
    eax = MEM32(esp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9249; /* je: equal / zero */

loc_000B90B6: ;
    esi = MEM32(eax + 0xC);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x000B90CAu); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B90CA: ;
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9228; /* je: equal / zero */

loc_000B90D6: ;
    ebx = MEM32(eax + 0xC);
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, ecx);
    ecx = esp + 0x58;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x000B90EAu); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B90EA: ;
    eax = MEM32(esp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9207; /* je: equal / zero */

loc_000B90F6: ;
    esi = MEM32(eax + 0xC);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    ecx = esp + 0x4C;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x000B910Au); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B910A: ;
    eax = MEM32(esp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B91E6; /* je: equal / zero */

loc_000B9116: ;
    ebp = MEM32(eax + 0xC);
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, 0x000B9126u); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B9126: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B91C4; /* je: equal / zero */

loc_000B9132: ;
    ebx = MEM32(eax + 0xC);
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    PUSH32(esp, 0x000B9142u); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B9142: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B91A3; /* je: equal / zero */

loc_000B914A: ;
    /* nop */

loc_000B9150: ;
    esi = MEM32(eax + 0xC);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x000B9160u); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B9160: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B918A; /* je: equal / zero */

loc_000B9168: ;
    goto loc_000B9170;

    /* nop */

loc_000B9170: ;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B9179u); RECOMP_ABI_CALL(0x000B9070u, sub_000B9070); /* call 0x000B9070 */

loc_000B9179: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x000B9182u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B9182: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9170; /* jne: not equal / not zero */

loc_000B918A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000B9192u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B918Fu); } /* indirect call */
    }

loc_000B9192: ;
    ecx = esp + 0x30;
    PUSH32(esp, 0x000B919Bu); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B919B: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9150; /* jne: not equal / not zero */

loc_000B91A3: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B91ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B91A8u); } /* indirect call */
    }

loc_000B91AB: ;
    ecx = esp + 0x3C;
    PUSH32(esp, 0x000B91B4u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B91B4: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9132; /* jne: not equal / not zero */

loc_000B91C0: ;
    esi = MEM32(esp + 0x10);

loc_000B91C4: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000B91CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B91CAu); } /* indirect call */
    }

loc_000B91CD: ;
    ecx = esp + 0x48;
    PUSH32(esp, 0x000B91D6u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B91D6: ;
    eax = MEM32(esp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9116; /* jne: not equal / not zero */

loc_000B91E2: ;
    ebx = MEM32(esp + 0x14);

loc_000B91E6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B91EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B91EBu); } /* indirect call */
    }

loc_000B91EE: ;
    ecx = esp + 0x54;
    PUSH32(esp, 0x000B91F7u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B91F7: ;
    eax = MEM32(esp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B90F6; /* jne: not equal / not zero */

loc_000B9203: ;
    esi = MEM32(esp + 0x18);

loc_000B9207: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000B920Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B920Cu); } /* indirect call */
    }

loc_000B920F: ;
    ecx = esp + 0x60;
    PUSH32(esp, 0x000B9218u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B9218: ;
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B90D6; /* jne: not equal / not zero */

loc_000B9224: ;
    ebx = MEM32(esp + 0x1C);

loc_000B9228: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B9230u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B922Du); } /* indirect call */
    }

loc_000B9230: ;
    ecx = esp + 0x6C;
    PUSH32(esp, 0x000B9239u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B9239: ;
    eax = MEM32(esp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B90B6; /* jne: not equal / not zero */

loc_000B9245: ;
    esi = MEM32(esp + 0x20);

loc_000B9249: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000B9251u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B924Eu); } /* indirect call */
    }

loc_000B9251: ;
    eax = MEM32(esp + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B908F; /* jne: not equal / not zero */

loc_000B925D: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000B925F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B9267u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9264u); } /* indirect call */
    }

loc_000B9267: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9270
 * Original: 0x000B9270 - 0x000B946F (511 bytes, 160 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9270: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x80);
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000B945F; /* je: equal / zero */

loc_000B928D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_000B928F: ;
    ebx = MEM32(eax + 0xC);
    ecx = MEM32(eax + 4);
    edx = MEM32(ebx + 0x1C);
    MEM32(esp + 0x7C) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x70;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x000B92AAu); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B92AA: ;
    eax = MEM32(esp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9449; /* je: equal / zero */

loc_000B92B6: ;
    esi = MEM32(eax + 0xC);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x000B92CAu); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B92CA: ;
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9428; /* je: equal / zero */

loc_000B92D6: ;
    ebx = MEM32(eax + 0xC);
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, ecx);
    ecx = esp + 0x58;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x000B92EAu); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B92EA: ;
    eax = MEM32(esp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9407; /* je: equal / zero */

loc_000B92F6: ;
    esi = MEM32(eax + 0xC);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    ecx = esp + 0x4C;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x000B930Au); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B930A: ;
    eax = MEM32(esp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B93E6; /* je: equal / zero */

loc_000B9316: ;
    ebp = MEM32(eax + 0xC);
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, 0x000B9326u); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B9326: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B93C4; /* je: equal / zero */

loc_000B9332: ;
    ebx = MEM32(eax + 0xC);
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    PUSH32(esp, 0x000B9342u); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B9342: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B93A3; /* je: equal / zero */

loc_000B934A: ;
    /* nop */

loc_000B9350: ;
    esi = MEM32(eax + 0xC);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x000B9360u); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B9360: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B938A; /* je: equal / zero */

loc_000B9368: ;
    goto loc_000B9370;

    /* nop */

loc_000B9370: ;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B9379u); RECOMP_ABI_CALL(0x000B9270u, sub_000B9270); /* call 0x000B9270 */

loc_000B9379: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x000B9382u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B9382: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9370; /* jne: not equal / not zero */

loc_000B938A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B9392u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B938Fu); } /* indirect call */
    }

loc_000B9392: ;
    ecx = esp + 0x30;
    PUSH32(esp, 0x000B939Bu); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B939B: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9350; /* jne: not equal / not zero */

loc_000B93A3: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B93ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B93A8u); } /* indirect call */
    }

loc_000B93AB: ;
    ecx = esp + 0x3C;
    PUSH32(esp, 0x000B93B4u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B93B4: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9332; /* jne: not equal / not zero */

loc_000B93C0: ;
    esi = MEM32(esp + 0x10);

loc_000B93C4: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B93CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B93CAu); } /* indirect call */
    }

loc_000B93CD: ;
    ecx = esp + 0x48;
    PUSH32(esp, 0x000B93D6u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B93D6: ;
    eax = MEM32(esp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9316; /* jne: not equal / not zero */

loc_000B93E2: ;
    ebx = MEM32(esp + 0x14);

loc_000B93E6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B93EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B93EBu); } /* indirect call */
    }

loc_000B93EE: ;
    ecx = esp + 0x54;
    PUSH32(esp, 0x000B93F7u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B93F7: ;
    eax = MEM32(esp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B92F6; /* jne: not equal / not zero */

loc_000B9403: ;
    esi = MEM32(esp + 0x18);

loc_000B9407: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B940Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B940Cu); } /* indirect call */
    }

loc_000B940F: ;
    ecx = esp + 0x60;
    PUSH32(esp, 0x000B9418u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B9418: ;
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B92D6; /* jne: not equal / not zero */

loc_000B9424: ;
    ebx = MEM32(esp + 0x1C);

loc_000B9428: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B9430u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B942Du); } /* indirect call */
    }

loc_000B9430: ;
    ecx = esp + 0x6C;
    PUSH32(esp, 0x000B9439u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B9439: ;
    eax = MEM32(esp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B92B6; /* jne: not equal / not zero */

loc_000B9445: ;
    esi = MEM32(esp + 0x20);

loc_000B9449: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B9451u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B944Eu); } /* indirect call */
    }

loc_000B9451: ;
    eax = MEM32(esp + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B928F; /* jne: not equal / not zero */

loc_000B945D: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000B945F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B9467u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9464u); } /* indirect call */
    }

loc_000B9467: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9470
 * Original: 0x000B9470 - 0x000B966F (511 bytes, 160 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9470: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x80);
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000B965F; /* je: equal / zero */

loc_000B948D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_000B948F: ;
    ebx = MEM32(eax + 0xC);
    ecx = MEM32(eax + 4);
    edx = MEM32(ebx + 0x1C);
    MEM32(esp + 0x7C) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x70;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x000B94AAu); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B94AA: ;
    eax = MEM32(esp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9649; /* je: equal / zero */

loc_000B94B6: ;
    esi = MEM32(eax + 0xC);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x000B94CAu); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B94CA: ;
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9628; /* je: equal / zero */

loc_000B94D6: ;
    ebx = MEM32(eax + 0xC);
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, ecx);
    ecx = esp + 0x58;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x000B94EAu); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B94EA: ;
    eax = MEM32(esp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9607; /* je: equal / zero */

loc_000B94F6: ;
    esi = MEM32(eax + 0xC);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    ecx = esp + 0x4C;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x000B950Au); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B950A: ;
    eax = MEM32(esp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B95E6; /* je: equal / zero */

loc_000B9516: ;
    ebp = MEM32(eax + 0xC);
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, 0x000B9526u); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B9526: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B95C4; /* je: equal / zero */

loc_000B9532: ;
    ebx = MEM32(eax + 0xC);
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    PUSH32(esp, 0x000B9542u); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B9542: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B95A3; /* je: equal / zero */

loc_000B954A: ;
    /* nop */

loc_000B9550: ;
    esi = MEM32(eax + 0xC);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x000B9560u); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B9560: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B958A; /* je: equal / zero */

loc_000B9568: ;
    goto loc_000B9570;

    /* nop */

loc_000B9570: ;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B9579u); RECOMP_ABI_CALL(0x000B9470u, sub_000B9470); /* call 0x000B9470 */

loc_000B9579: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x000B9582u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B9582: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9570; /* jne: not equal / not zero */

loc_000B958A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000B9592u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B958Fu); } /* indirect call */
    }

loc_000B9592: ;
    ecx = esp + 0x30;
    PUSH32(esp, 0x000B959Bu); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B959B: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9550; /* jne: not equal / not zero */

loc_000B95A3: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000B95ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B95A8u); } /* indirect call */
    }

loc_000B95AB: ;
    ecx = esp + 0x3C;
    PUSH32(esp, 0x000B95B4u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B95B4: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9532; /* jne: not equal / not zero */

loc_000B95C0: ;
    esi = MEM32(esp + 0x10);

loc_000B95C4: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000B95CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B95CAu); } /* indirect call */
    }

loc_000B95CD: ;
    ecx = esp + 0x48;
    PUSH32(esp, 0x000B95D6u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B95D6: ;
    eax = MEM32(esp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9516; /* jne: not equal / not zero */

loc_000B95E2: ;
    ebx = MEM32(esp + 0x14);

loc_000B95E6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000B95EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B95EBu); } /* indirect call */
    }

loc_000B95EE: ;
    ecx = esp + 0x54;
    PUSH32(esp, 0x000B95F7u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B95F7: ;
    eax = MEM32(esp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B94F6; /* jne: not equal / not zero */

loc_000B9603: ;
    esi = MEM32(esp + 0x18);

loc_000B9607: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000B960Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B960Cu); } /* indirect call */
    }

loc_000B960F: ;
    ecx = esp + 0x60;
    PUSH32(esp, 0x000B9618u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B9618: ;
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B94D6; /* jne: not equal / not zero */

loc_000B9624: ;
    ebx = MEM32(esp + 0x1C);

loc_000B9628: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000B9630u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B962Du); } /* indirect call */
    }

loc_000B9630: ;
    ecx = esp + 0x6C;
    PUSH32(esp, 0x000B9639u); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B9639: ;
    eax = MEM32(esp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B94B6; /* jne: not equal / not zero */

loc_000B9645: ;
    esi = MEM32(esp + 0x20);

loc_000B9649: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000B9651u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B964Eu); } /* indirect call */
    }

loc_000B9651: ;
    eax = MEM32(esp + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B948F; /* jne: not equal / not zero */

loc_000B965D: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000B965F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000B9667u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9664u); } /* indirect call */
    }

loc_000B9667: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9670
 * Original: 0x000B9670 - 0x000B9710 (160 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9670(void)
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

loc_000B9670: ;
    eax = MEM32(ecx + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B968E; /* je: equal / zero */

loc_000B967A: ;
    edx = MEM32(eax + 0x44);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9687; /* je: equal / zero */

loc_000B9682: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B968E; /* jne: not equal / not zero */

loc_000B9687: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_000B8A60(); return; /* tail jmp 0x000B8A60 */

loc_000B968E: ;
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B96C4; /* jp: parity */

loc_000B969E: ;
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B96C4; /* jp: parity */

loc_000B96AE: ;
    fp_push(MEMF(ecx + 0x3C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B96C4; /* jp: parity */

loc_000B96BE: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_000B96C4: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B970A; /* je: equal / zero */

loc_000B96CB: ;
    eax = MEM32(0x1D9FB8);
    edx = MEM32(eax + 0x14);
    fp_push(MEMF(edx + 0xB0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x3C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0x3c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B96EB; /* jp: parity */

loc_000B96E3: ;
    fp_pop(); /* fstp st(0) */
    eax = 2;
    esp += 4; return; /* ret */

loc_000B96EB: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x38)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0x38] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B96FD; /* jp: parity */

loc_000B96F5: ;
    fp_pop(); /* fstp st(0) */
    eax = 1;
    esp += 4; return; /* ret */

loc_000B96FD: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B970A; /* jp: parity */

loc_000B9707: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000B970A: ;
    eax = 3;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B9710
 * Original: 0x000B9710 - 0x000B97E4 (212 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9710(void)
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

loc_000B9710: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x90);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B97C0; /* je: equal / zero */

loc_000B9723: ;
    ecx = edi;
    PUSH32(esp, 0x000B972Au); RECOMP_ABI_CALL(0x000B85C0u, sub_000B85C0); /* call 0x000B85C0 */

loc_000B972A: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    PUSH32(esp, 0x000B9735u); RECOMP_ABI_CALL(0x000B79E0u, sub_000B79E0); /* call 0x000B79E0 */

loc_000B9735: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    ecx = MEM32(esi + 0x90);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B9748u); RECOMP_ABI_CALL(0x000B8A60u, sub_000B8A60); /* call 0x000B8A60 */

loc_000B9748: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B977D; /* jne: not equal / not zero */

loc_000B974D: ;
    edi = MEM32(esi + 0x90);
    ecx = edi;
    PUSH32(esp, 0x000B975Au); RECOMP_ABI_CALL(0x000B79E0u, sub_000B79E0); /* call 0x000B79E0 */

loc_000B975A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB2C)); /* fmul dword ptr [0x1aeb2c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1D4)); /* fmul dword ptr [edi + 0x1d4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91CC)); /* fadd dword ptr [0x1c91cc] */
    PUSH32(esp, 0x000B9771u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_000B9771: ;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_000B977D: ;
    eax = MEM32(0x1CA3A0);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9791; /* jne: not equal / not zero */

loc_000B978A: ;
    PUSH32(esp, 0x1B6108);
    goto loc_000B97A2;

loc_000B9791: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x340);
    PUSH32(esp, 0x000B97A1u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000B97A1: ;
    PUSH32(esp, eax);

loc_000B97A2: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x1C05FC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B97B7u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_000B97B7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000B97C0: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x14);
    fp_push(MEMF(ecx + 0xB0)); /* fld float */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B97DBu); RECOMP_ABI_CALL(0x00042790u, sub_00042790); /* call 0x00042790 */

loc_000B97DB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
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
 * sub_000B97F0
 * Original: 0x000B97F0 - 0x000B9846 (86 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B97F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B97F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 8;
    MEM32(esi + 4) = edi;
    MEM32(esi) = 0x1C05E0;
    PUSH32(esp, 0x000B9807u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_000B9807: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x18) = 0x1C055C;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x90) = edi;
    MEM32(esi + 0x94) = eax;
    POP32(esp, edi);
    MEM32(esi) = 0x1C0604;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9850
 * Original: 0x000B9850 - 0x000B98AE (94 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9850: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x1C05E0;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9873; /* je: equal / zero */

loc_000B9863: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B9869u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9867u); } /* indirect call */
    }

loc_000B9869: ;
    MEM32(esi + 0x90) = 0;

loc_000B9873: ;
    ecx = esi + 0x18;
    PUSH32(esp, 0x000B987Bu); RECOMP_ABI_CALL(0x000B8BE0u, sub_000B8BE0); /* call 0x000B8BE0 */

loc_000B987B: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9892; /* je: equal / zero */

loc_000B9889: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B988Fu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000B988F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9892: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x1BB3A8;
    if (TEST_Z(_fa, _fb)) goto loc_000B98A8; /* je: equal / zero */

loc_000B989F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B98A5u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000B98A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B98A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B98B0
 * Original: 0x000B98B0 - 0x000B998A (218 bytes, 78 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B98B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B98B0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000B98C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B98C3u); } /* indirect call */
    }

loc_000B98C6: ;
    eax = MEM32(edi + 0x1C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9971; /* je: equal / zero */

loc_000B98D3: ;
    PUSH32(esp, esi);

loc_000B98D4: ;
    ecx = MEM32(eax + 4);
    esi = MEM32(eax + 0xC);
    edx = MEM32(esi);
    MEM32(esp + 0x24) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B98E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B98E3u); } /* indirect call */
    }

loc_000B98E6: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000B98F3u); RECOMP_ABI_CALL(0x000E73B0u, sub_000E73B0); /* call 0x000E73B0 */

loc_000B98F3: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B993A; /* je: equal / zero */

loc_000B98FB: ;
    goto loc_000B9900;

    /* nop */

loc_000B9900: ;
    edi = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x000B990Bu); RECOMP_ABI_CALL(0x000B98B0u, sub_000B98B0); /* call 0x000B98B0 */

loc_000B990B: ;
    ecx = edi;
    PUSH32(esp, 0x000B9912u); RECOMP_ABI_CALL(0x000B8ED0u, sub_000B8ED0); /* call 0x000B8ED0 */

loc_000B9912: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9925; /* je: equal / zero */

loc_000B9916: ;
    _fa = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x2C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9925; /* jne: not equal / not zero */

loc_000B991B: ;
    MEM32(esi + 0x30) = 1;
    MEM32(esi + 0x2C) = ebp;

loc_000B9925: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x000B992Eu); RECOMP_ABI_CALL(0x000B87A0u, sub_000B87A0); /* call 0x000B87A0 */

loc_000B992E: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9900; /* jne: not equal / not zero */

loc_000B9936: ;
    edi = MEM32(esp + 0x10);

loc_000B993A: ;
    ecx = MEM32(esi + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B994A; /* je: equal / zero */

loc_000B9944: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000B994Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9947u); } /* indirect call */
    }

loc_000B994A: ;
    ecx = esi;
    PUSH32(esp, 0x000B9951u); RECOMP_ABI_CALL(0x000B8ED0u, sub_000B8ED0); /* call 0x000B8ED0 */

loc_000B9951: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9964; /* je: equal / zero */

loc_000B9955: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9964; /* jne: not equal / not zero */

loc_000B995A: ;
    MEM32(edi + 0x30) = 1;
    MEM32(edi + 0x2C) = ebp;

loc_000B9964: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B98D4; /* jne: not equal / not zero */

loc_000B9970: ;
    POP32(esp, esi);

loc_000B9971: ;
    ecx = MEM32(edi + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9981; /* je: equal / zero */

loc_000B997B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000B9981u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B997Eu); } /* indirect call */
    }

loc_000B9981: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9990
 * Original: 0x000B9990 - 0x000B9A45 (181 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9990: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = esi + 8;
    MEM32(esi + 4) = ebp;
    MEM32(esi) = 0x1C05E0;
    PUSH32(esp, 0x000B99AAu); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_000B99AA: ;
    MEM32(esi + 0x18) = 0x1C055C;
    MEM32(esi + 0x20) = ebp;
    MEM32(esi + 0x1C) = ebp;
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x28) = ebp;
    edi = esi + 0x18;
    PUSH32(esp, 0x98);
    MEM32(esi + 0x2C) = ebp;
    MEM32(esi + 0x30) = ebp;
    MEM32(esi + 0x34) = ebp;
    MEM32(esi + 0x38) = ebp;
    MEM32(esi + 0x3C) = ebp;
    MEM32(esi + 0x90) = ebp;
    MEM32(esi) = 0x1C0620;
    PUSH32(esp, 0x000B99E5u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B99E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B99F8; /* je: equal / zero */

loc_000B99EC: ;
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x000B99F4u); RECOMP_ABI_CALL(0x000B97F0u, sub_000B97F0); /* call 0x000B97F0 */

loc_000B99F4: ;
    ebx = eax;
    goto loc_000B99FA;

loc_000B99F8: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B99FA: ;
    MEM32(esi + 0x94) = ebx;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9A0C; /* je: equal / zero */

loc_000B9A07: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9A15; /* jne: not equal / not zero */

loc_000B9A0C: ;
    PUSH32(esp, 0xA);
    ecx = edi;
    PUSH32(esp, 0x000B9A15u); RECOMP_ABI_CALL(0x000B8CE0u, sub_000B8CE0); /* call 0x000B8CE0 */

loc_000B9A15: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9A20; /* je: equal / zero */

loc_000B9A1D: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B9A20: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000B9A2Cu); RECOMP_ABI_CALL(0x000B8C50u, sub_000B8C50); /* call 0x000B8C50 */

loc_000B9A2C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9A3D; /* je: equal / zero */

loc_000B9A30: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) - 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B9A3D; /* jne: not equal / not zero */

loc_000B9A35: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B9A3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9A3Bu); } /* indirect call */
    }

loc_000B9A3D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9A50
 * Original: 0x000B9A50 - 0x000B9A6E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9A50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B9A58u); RECOMP_ABI_CALL(0x000B8D60u, sub_000B8D60); /* call 0x000B8D60 */

loc_000B9A58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B9A68; /* je: equal / zero */

loc_000B9A5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B9A65u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000B9A65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9A68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9A70
 * Original: 0x000B9A70 - 0x000B9A7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9A70: ;
    ecx = MEM32(ecx + 0xB0);
    g_seh_ebp = ebp; sub_000212A0(); return; /* tail jmp 0x000212A0 */

}

/**
 * sub_000B9A80
 * Original: 0x000B9A80 - 0x000B9AAE (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9A80: ;
    PUSH32(esp, esi);
    esi = MEM32(0x1CE880);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B9AA1; /* jbe: below or equal (unsigned <=) */

loc_000B9A8D: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x1CE87C);

loc_000B9A97: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 8), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9AA8; /* je: equal / zero */

loc_000B9A9C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9A97; /* jb: below (unsigned <) */

loc_000B9AA1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(eax + 4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B9AA8: ;
    eax = MEM32(ecx + eax * 8 + 4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9AB0
 * Original: 0x000B9AB0 - 0x000B9AF1 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9AB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9AB0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x1C0648);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B9ACBu); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_000B9ACB: ;
    ecx = MEM32(0x1DB454);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000B9ADEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9ADBu); } /* indirect call */
    }

loc_000B9ADE: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9AEAu); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000B9AEA: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9B00
 * Original: 0x000B9B00 - 0x000B9B0A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9B00(void)
{

loc_000B9B00: ;
    eax = MEM32(esp + 4);
    MEM32(0x1DA970) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9B10
 * Original: 0x000B9B10 - 0x000B9B4F (63 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0xA0);
    eax = esi + 0x10;
    MEM32(esi) = 0x1C065C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x000B9B3Eu); RECOMP_ABI_CALL(0x00100DA0u, sub_00100DA0); /* call 0x00100DA0 */

loc_000B9B3E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xB0) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9B50
 * Original: 0x000B9B50 - 0x000B9BA7 (87 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9B50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x1C065C;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9B73; /* je: equal / zero */

loc_000B9B63: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B9B69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9B67u); } /* indirect call */
    }

loc_000B9B69: ;
    MEM32(esi + 0xB0) = 0;

loc_000B9B73: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9B8C; /* je: equal / zero */

loc_000B9B7A: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B9B85; /* jne: not equal / not zero */

loc_000B9B7F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B9B85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9B83u); } /* indirect call */
    }

loc_000B9B85: ;
    MEM32(esi + 4) = 0;

loc_000B9B8C: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9BA5; /* je: equal / zero */

loc_000B9B93: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B9B9E; /* jne: not equal / not zero */

loc_000B9B98: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B9B9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9B9Cu); } /* indirect call */
    }

loc_000B9B9E: ;
    MEM32(esi + 4) = 0;

loc_000B9BA5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9BB0
 * Original: 0x000B9BB0 - 0x000B9BB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9BB0: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_000B98B0(); return; /* tail jmp 0x000B98B0 */

}

/**
 * sub_000B9BC0
 * Original: 0x000B9BC0 - 0x000B9BC8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9BC0: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_000B8DB0(); return; /* tail jmp 0x000B8DB0 */

}

/**
 * sub_000B9BD0
 * Original: 0x000B9BD0 - 0x000B9BD8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9BD0: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_000B9070(); return; /* tail jmp 0x000B9070 */

}

/**
 * sub_000B9BE0
 * Original: 0x000B9BE0 - 0x000B9BE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9BE0: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_000B9270(); return; /* tail jmp 0x000B9270 */

}

/**
 * sub_000B9BF0
 * Original: 0x000B9BF0 - 0x000B9BF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9BF0: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_000B9470(); return; /* tail jmp 0x000B9470 */

}

/**
 * sub_000B9C00
 * Original: 0x000B9C00 - 0x000B9C53 (83 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9C00: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B9C31; /* jge: greater or equal (signed >=) */

loc_000B9C14: ;
    eax = MEM32(ecx + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9C4C; /* je: equal / zero */

loc_000B9C1D: ;
    /* nop */

loc_000B9C20: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9C4E; /* je: equal / zero */

loc_000B9C24: ;
    eax = MEM32(eax + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9C20; /* jne: not equal / not zero */

loc_000B9C2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B9C31: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = esi + -1;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9C4C; /* je: equal / zero */

loc_000B9C3B: ;
    goto loc_000B9C40;

    /* nop */

loc_000B9C40: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9C4E; /* je: equal / zero */

loc_000B9C44: ;
    eax = MEM32(eax + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9C40; /* jne: not equal / not zero */

loc_000B9C4C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B9C4E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9C60
 * Original: 0x000B9C60 - 0x000B9C7E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9C60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B9C68u); RECOMP_ABI_CALL(0x000B9B50u, sub_000B9B50); /* call 0x000B9B50 */

loc_000B9C68: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B9C78; /* je: equal / zero */

loc_000B9C6F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B9C75u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000B9C75: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9C78: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9C80
 * Original: 0x000B9C80 - 0x000B9D61 (225 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9C80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x1D8930);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000B9CB1; /* jne: not equal / not zero */

loc_000B9C90: ;
    PUSH32(esp, 0x560);
    PUSH32(esp, 0x000B9C9Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B9C9A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9CAA; /* je: equal / zero */

loc_000B9CA1: ;
    ecx = eax;
    PUSH32(esp, 0x000B9CA8u); RECOMP_ABI_CALL(0x000735D0u, sub_000735D0); /* call 0x000735D0 */

loc_000B9CA8: ;
    goto loc_000B9CAC;

loc_000B9CAA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B9CAC: ;
    MEM32(0x1D8930) = eax;

loc_000B9CB1: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x000B9CB9u); RECOMP_ABI_CALL(0x000730A0u, sub_000730A0); /* call 0x000730A0 */

loc_000B9CB9: ;
    ecx = MEM32(eax + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000B9D5C; /* jle: less or equal (signed <=) */

loc_000B9CCA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = eax + 4;

loc_000B9CD0: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x000B9CD8u); RECOMP_ABI_CALL(0x000B9C00u, sub_000B9C00); /* call 0x000B9C00 */

loc_000B9CD8: ;
    esi = MEM32(eax + 0xC);
    edi = MEM32(esi + 8);
    PUSH32(esp, 0x1BB440);
    PUSH32(esp, 0x000B9CE8u); RECOMP_ABI_CALL(0x001025F0u, sub_001025F0); /* call 0x001025F0 */

loc_000B9CE8: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9CF0u); RECOMP_ABI_CALL(0x0012B4C9u, sub_0012B4C9); /* call 0x0012B4C9 */

loc_000B9CF0: ;
    edi = MEM32(esp + 0x18);
    ecx = MEM32(edi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9D06; /* jne: not equal / not zero */

loc_000B9CFF: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9D1A; /* jne: not equal / not zero */

loc_000B9D06: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B9CD0; /* jl: less (signed <) */

loc_000B9D12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B9D1A: ;
    PUSH32(esp, 0x1D8);
    PUSH32(esp, 0x000B9D24u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B9D24: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9D4E; /* je: equal / zero */

loc_000B9D2B: ;
    ecx = MEM32(0x1D9FB8);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000B9D3Du); RECOMP_ABI_CALL(0x000B89A0u, sub_000B89A0); /* call 0x000B89A0 */

loc_000B9D3D: ;
    edx = MEM32(edi + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 0x90) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B9D4E: ;
    edx = MEM32(edi + 4);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(edx + 0x90) = eax;
    POP32(esp, ebp);

loc_000B9D5C: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9D70
 * Original: 0x000B9D70 - 0x000B9EA0 (304 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9D70: ;
    eax = MEM32(0x1DA970);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000B9DDD; /* jl: less (signed <) */

loc_000B9D82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B9DDD; /* jg: greater (signed >) */

loc_000B9D87: ;
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x000B9D91u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B9D91: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9E4F; /* je: equal / zero */

loc_000B9D9C: ;
    ecx = eax;
    PUSH32(esp, 0x000B9DA3u); RECOMP_ABI_CALL(0x000B9990u, sub_000B9990); /* call 0x000B9990 */

loc_000B9DA3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9DAC; /* je: equal / zero */

loc_000B9DA9: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B9DAC: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9DCC; /* je: equal / zero */

loc_000B9DB3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9DC2; /* je: equal / zero */

loc_000B9DB7: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B9DC2; /* jne: not equal / not zero */

loc_000B9DBC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B9DC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9DC0u); } /* indirect call */
    }

loc_000B9DC2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi + 4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9DDD; /* je: equal / zero */

loc_000B9DC9: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B9DCC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9DDD; /* je: equal / zero */

loc_000B9DD0: ;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B9DDD; /* jne: not equal / not zero */

loc_000B9DD5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B9DDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9DDBu); } /* indirect call */
    }

loc_000B9DDD: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0x000B9DE5u); RECOMP_ABI_CALL(0x000B8DB0u, sub_000B8DB0); /* call 0x000B8DB0 */

loc_000B9DE5: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(0x1D9FB8);
    edx = MEM32(ecx + 0x38);
    ebp = MEM32(edx + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    esi = eax;
    ebx = 0x28;
    /* nop */

loc_000B9E00: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x000B9E08u); RECOMP_ABI_CALL(0x000770F0u, sub_000770F0); /* call 0x000770F0 */

loc_000B9E08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9E16; /* je: equal / zero */

loc_000B9E0C: ;
    eax = MEM32(edi + 0xC);
    MEM32(edi + eax * 4 + 0x10) = esi;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B9E16: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B9E00; /* jne: not equal / not zero */

loc_000B9E1A: ;
    eax = MEM32(0x1CA5BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9E56; /* je: equal / zero */

loc_000B9E23: ;
    esi = MEM32(eax + 4);
    ebx = 0x11;
    goto loc_000B9E30;

    /* nop */

loc_000B9E30: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9E44; /* jne: not equal / not zero */

loc_000B9E38: ;
    PUSH32(esp, 0xBF800000u);
    ecx = eax;
    PUSH32(esp, 0x000B9E44u); RECOMP_ABI_CALL(0x000241C0u, sub_000241C0); /* call 0x000241C0 */

loc_000B9E44: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9E56; /* je: equal / zero */

loc_000B9E4A: ;
    esi = MEM32(esi + 4);
    goto loc_000B9E30;

loc_000B9E4F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000B9DAC;

loc_000B9E56: ;
    ebx = MEM32(edi + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x118);
    MEM32(ebp + 0x34) = ecx;
    PUSH32(esp, 0x000B9E6Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B9E6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9E8D; /* je: equal / zero */

loc_000B9E75: ;
    ecx = eax;
    PUSH32(esp, 0x000B9E7Cu); RECOMP_ABI_CALL(0x00021220u, sub_00021220); /* call 0x00021220 */

loc_000B9E7C: ;
    MEM32(edi + 0xB0) = eax;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000B9C80(); return; /* tail jmp 0x000B9C80 */

loc_000B9E8D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0xB0) = eax;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000B9C80(); return; /* tail jmp 0x000B9C80 */

}

/**
 * sub_000B9EA0
 * Original: 0x000B9EA0 - 0x000B9ED0 (48 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9EA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C066C);
    PUSH32(esp, 0x39);
    PUSH32(esp, 0x000B9EB3u); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000B9EB3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9EC7u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000B9EC7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_000B9ED0(); return; /* fallthrough 0x000B9ED0 */

}

/**
 * sub_000B9ED0
 * Original: 0x000B9ED0 - 0x000B9EED (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9ED0(void)
{

loc_000B9ED0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9EE4u); RECOMP_ABI_CALL(0x000EBCF0u, sub_000EBCF0); /* call 0x000EBCF0 */

loc_000B9EE4: ;
    MEM32(esi + 0x18) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9EF0
 * Original: 0x000B9EF0 - 0x000B9F0C (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9EF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000B9EFDu); RECOMP_ABI_CALL(0x00015BA0u, sub_00015BA0); /* call 0x00015BA0 */

loc_000B9EFD: ;
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000B9F08u); RECOMP_ABI_CALL(0x00056460u, sub_00056460); /* call 0x00056460 */

loc_000B9F08: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9F10
 * Original: 0x000B9F10 - 0x000BA046 (310 bytes, 104 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9F10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx;
    if ((_fa == 0)) goto loc_000B9F90; /* je: equal / zero */

loc_000B9F20: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BA03F; /* jne: not equal / not zero */

loc_000B9F27: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C066C);
    PUSH32(esp, 0x000B9F34u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B9F34: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA03F; /* jne: not equal / not zero */

loc_000B9F3F: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9F86; /* je: equal / zero */

loc_000B9F46: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000B9F4Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000B9F4D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9F7B; /* je: equal / zero */

loc_000B9F54: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000B9F68u); RECOMP_ABI_CALL(0x000B5C60u, sub_000B5C60); /* call 0x000B5C60 */

loc_000B9F68: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9F71u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B9F71: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B9F7B: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9F86u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000B9F86: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B9F90: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1B5DE8);
    PUSH32(esp, 0x000B9F9Du); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B9F9D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9FD5; /* jne: not equal / not zero */

loc_000B9FA4: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9FCB; /* jne: not equal / not zero */

loc_000B9FAB: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    MEM32(0x1D74D8) = eax;
    PUSH32(esp, 0x000B9FB9u); RECOMP_ABI_CALL(0x00015BA0u, sub_00015BA0); /* call 0x00015BA0 */

loc_000B9FB9: ;
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000B9FC4u); RECOMP_ABI_CALL(0x00056460u, sub_00056460); /* call 0x00056460 */

loc_000B9FC4: ;
    ecx = esi;
    PUSH32(esp, 0x000B9FCBu); RECOMP_ABI_CALL(0x0006AE60u, sub_0006AE60); /* call 0x0006AE60 */

loc_000B9FCB: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B9FD5: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B5CAC);
    PUSH32(esp, 0x000B9FE2u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000B9FE2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA03F; /* jne: not equal / not zero */

loc_000B9FE9: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA03F; /* je: equal / zero */

loc_000B9FF0: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx + 0x15C);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(0x1D74D8) = eax;
    PUSH32(esp, 0x000BA006u); RECOMP_ABI_CALL(0x000B9EF0u, sub_000B9EF0); /* call 0x000B9EF0 */

loc_000BA006: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000BA00Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BA00D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9F7B; /* je: equal / zero */

loc_000BA018: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000BA02Cu); RECOMP_ABI_CALL(0x000B5C60u, sub_000B5C60); /* call 0x000B5C60 */

loc_000BA02C: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA035u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA035: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA03F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA050
 * Original: 0x000BA050 - 0x000BA072 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA050(void)
{

loc_000BA050: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BA058u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BA058: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0694;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA080
 * Original: 0x000BA080 - 0x000BA0A2 (34 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA080(void)
{

loc_000BA080: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BA088u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BA088: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C06B8;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA0B0
 * Original: 0x000BA0B0 - 0x000BA0D0 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA0B0(void)
{

loc_000BA0B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BA0B8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BA0B8: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C06DC;
    MEM32(esi + 0x10) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA0D0
 * Original: 0x000BA0D0 - 0x000BA0FB (43 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA0D0(void)
{

loc_000BA0D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BA0D8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BA0D8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0700;
    ecx = MEM32(eax);
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x10) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA100
 * Original: 0x000BA100 - 0x000BA122 (34 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA100(void)
{

loc_000BA100: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BA108u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BA108: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0724;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA130
 * Original: 0x000BA130 - 0x000BA196 (102 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA130: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BA13Fu); RECOMP_ABI_CALL(0x0008A900u, sub_0008A900); /* call 0x0008A900 */

loc_000BA13F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0748);
    PUSH32(esp, 0x31);
    PUSH32(esp, 0x000BA14Du); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000BA14D: ;
    ecx = MEM32(0x1DE810);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BA160u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000BA160: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA17E; /* je: equal / zero */

loc_000BA167: ;
    PUSH32(esp, 0x000BA16Cu); RECOMP_ABI_CALL(0x000474A0u, sub_000474A0); /* call 0x000474A0 */

loc_000BA16C: ;
    ecx = eax;
    PUSH32(esp, 0x000BA173u); RECOMP_ABI_CALL(0x00047160u, sub_00047160); /* call 0x00047160 */

loc_000BA173: ;
    ecx = MEM32(edi + 0xB4);
    PUSH32(esp, 0x000BA17Eu); RECOMP_ABI_CALL(0x000501E0u, sub_000501E0); /* call 0x000501E0 */

loc_000BA17E: ;
    POP32(esp, edi);
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 0x14) = 0;
    MEM32(esi + 0x1C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA1A0
 * Original: 0x000BA1A0 - 0x000BA1B3 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA1A0(void)
{

loc_000BA1A0: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0748);
    PUSH32(esp, 0x000BA1B2u); RECOMP_ABI_CALL(0x000EBD00u, sub_000EBD00); /* call 0x000EBD00 */

loc_000BA1B2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BA1C0
 * Original: 0x000BA1C0 - 0x000BA1E9 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA1C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA1C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0758);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA1D3u); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000BA1D3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA1E7u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000BA1E7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA1F0
 * Original: 0x000BA1F0 - 0x000BA31F (303 bytes, 103 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA1F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    if ((_fa == 0)) goto loc_000BA277; /* je: equal / zero */

loc_000BA200: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BA318; /* jne: not equal / not zero */

loc_000BA207: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C0758);
    PUSH32(esp, 0x000BA214u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BA214: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA318; /* jne: not equal / not zero */

loc_000BA21F: ;
    PUSH32(esp, 0x000BA224u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_000BA224: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000BA22Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BA22B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA262; /* je: equal / zero */

loc_000BA234: ;
    ecx = esi;
    PUSH32(esp, 0x000BA23Bu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BA23B: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C00D0;
    MEM32(esi + 0x18) = 0;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BA258u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA258: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA262: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BA26Du); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA26D: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA277: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B5B50);
    PUSH32(esp, 0x000BA284u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BA284: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA2C1; /* jne: not equal / not zero */

loc_000BA28B: ;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x35) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), 0x35 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA318; /* jne: not equal / not zero */

loc_000BA295: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000BA29Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BA29C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA303; /* je: equal / zero */

loc_000BA2A3: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000BA2AEu); RECOMP_ABI_CALL(0x000BA080u, sub_000BA080); /* call 0x000BA080 */

loc_000BA2AE: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA2B7u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA2B7: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA2C1: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B5C74);
    PUSH32(esp, 0x000BA2CEu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BA2CE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA318; /* jne: not equal / not zero */

loc_000BA2D5: ;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), 0x32 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA318; /* jne: not equal / not zero */

loc_000BA2DB: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000BA2E2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BA2E2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA303; /* je: equal / zero */

loc_000BA2E9: ;
    ecx = eax;
    PUSH32(esp, 0x000BA2F0u); RECOMP_ABI_CALL(0x000BA0B0u, sub_000BA0B0); /* call 0x000BA0B0 */

loc_000BA2F0: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA2F9u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA2F9: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA303: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA30Eu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA30E: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA318: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA320
 * Original: 0x000BA320 - 0x000BA349 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA320: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B5C48);
    PUSH32(esp, 0x36);
    PUSH32(esp, 0x000BA333u); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000BA333: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA347u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000BA347: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA350
 * Original: 0x000BA350 - 0x000BA362 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA350(void)
{

loc_000BA350: ;
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA361u); RECOMP_ABI_CALL(0x000EBCF0u, sub_000EBCF0); /* call 0x000EBCF0 */

loc_000BA361: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BA370
 * Original: 0x000BA370 - 0x000BA3EB (123 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA370: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BA3E5; /* jne: not equal / not zero */

loc_000BA37D: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B5C48);
    PUSH32(esp, 0x000BA38Au); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BA38A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA3E5; /* jne: not equal / not zero */

loc_000BA391: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000BA399u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BA399: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA3D0; /* je: equal / zero */

loc_000BA3A2: ;
    ecx = esi;
    PUSH32(esp, 0x000BA3A9u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BA3A9: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0694;
    MEM32(esi + 0x14) = 0x35;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BA3C6u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA3C6: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BA3D0: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BA3DBu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA3DB: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BA3E5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA3F0
 * Original: 0x000BA3F0 - 0x000BA417 (39 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA3F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA3F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C076C);
    PUSH32(esp, 0x3E);
    esi = ecx;
    PUSH32(esp, 0x000BA401u); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000BA401: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA415u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000BA415: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA420
 * Original: 0x000BA420 - 0x000BA4A0 (128 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA420: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BA491; /* je: equal / zero */

loc_000BA42F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BA49A; /* jne: not equal / not zero */

loc_000BA432: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C076C);
    PUSH32(esp, 0x000BA43Fu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BA43F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA49A; /* jne: not equal / not zero */

loc_000BA446: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000BA44Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BA44E: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA485; /* je: equal / zero */

loc_000BA457: ;
    ecx = esi;
    PUSH32(esp, 0x000BA45Eu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BA45E: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0694;
    MEM32(esi + 0x14) = 0x32;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BA47Bu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA47B: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BA485: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BA490u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA490: ;
    POP32(esp, esi);

loc_000BA491: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BA49A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA4A0
 * Original: 0x000BA4A0 - 0x000BA4E9 (73 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BA4A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1B5C04);
    PUSH32(esp, 0x37);
    esi = ecx;
    PUSH32(esp, 0x000BA4B1u); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000BA4B1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA4C5u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000BA4C5: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA4E7; /* je: equal / zero */

loc_000BA4CC: ;
    PUSH32(esp, 0x000BA4D1u); RECOMP_ABI_CALL(0x000474A0u, sub_000474A0); /* call 0x000474A0 */

loc_000BA4D1: ;
    ecx = eax;
    PUSH32(esp, 0x000BA4D8u); RECOMP_ABI_CALL(0x00047160u, sub_00047160); /* call 0x00047160 */

loc_000BA4D8: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0xB4);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000501E0(); return; /* tail jmp 0x000501E0 */

loc_000BA4E7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA4F0
 * Original: 0x000BA4F0 - 0x000BA5D5 (229 bytes, 79 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA4F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BA572; /* je: equal / zero */

loc_000BA500: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BA5CE; /* jne: not equal / not zero */

loc_000BA507: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B5C04);
    PUSH32(esp, 0x000BA514u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BA514: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA5CE; /* jne: not equal / not zero */

loc_000BA51F: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000BA526u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BA526: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA55D; /* je: equal / zero */

loc_000BA52F: ;
    ecx = esi;
    PUSH32(esp, 0x000BA536u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BA536: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C00D0;
    MEM32(esi + 0x18) = 0;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BA553u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA553: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA55D: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BA568u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA568: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA572: ;
    ecx = MEM32(ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B5C04);
    PUSH32(esp, 0x000BA57Fu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BA57F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA5CE; /* jne: not equal / not zero */

loc_000BA586: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000BA58Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BA58D: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA5B9; /* je: equal / zero */

loc_000BA596: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, 0x000BA59Eu); RECOMP_ABI_CALL(0x000568B0u, sub_000568B0); /* call 0x000568B0 */

loc_000BA59E: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BA5A6u); RECOMP_ABI_CALL(0x000BA100u, sub_000BA100); /* call 0x000BA100 */

loc_000BA5A6: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA5AFu); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_000BA5AF: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA5B9: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA5C4u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_000BA5C4: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA5CE: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA5E0
 * Original: 0x000BA5E0 - 0x000BA5E9 (9 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA5E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA5E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x1C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000BA5F0
 * Original: 0x000BA5F0 - 0x000BA79D (429 bytes, 127 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA5F0(void)
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

loc_000BA5F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA695; /* je: equal / zero */

loc_000BA5FE: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18)); /* fadd dword ptr [esi + 0x18] */
    MEMF(esi + 0x18) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(esi + 0x1C);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000BA670; /* jp: parity */

loc_000BA618: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA799; /* jne: not equal / not zero */

loc_000BA620: ;
    PUSH32(esp, 0x000BA625u); RECOMP_ABI_CALL(0x00048900u, sub_00048900); /* call 0x00048900 */

loc_000BA625: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA799; /* je: equal / zero */

loc_000BA62D: ;
    PUSH32(esp, 0x000BA632u); RECOMP_ABI_CALL(0x00048900u, sub_00048900); /* call 0x00048900 */

loc_000BA632: ;
    ecx = eax;
    PUSH32(esp, 0x000BA639u); RECOMP_ABI_CALL(0x00049130u, sub_00049130); /* call 0x00049130 */

loc_000BA639: ;
    MEM32(esi + 0x1C) = 1;
    PUSH32(esp, 0x000BA645u); RECOMP_ABI_CALL(0x00048900u, sub_00048900); /* call 0x00048900 */

loc_000BA645: ;
    ecx = eax;
    PUSH32(esp, 0x000BA64Cu); RECOMP_ABI_CALL(0x000490A0u, sub_000490A0); /* call 0x000490A0 */

loc_000BA64C: ;
    PUSH32(esp, 0x000BA651u); RECOMP_ABI_CALL(0x00048900u, sub_00048900); /* call 0x00048900 */

loc_000BA651: ;
    ecx = eax;
    PUSH32(esp, 0x000BA658u); RECOMP_ABI_CALL(0x000488D0u, sub_000488D0); /* call 0x000488D0 */

loc_000BA658: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000BA665u); RECOMP_ABI_CALL(0x00048900u, sub_00048900); /* call 0x00048900 */

loc_000BA665: ;
    ecx = eax;
    PUSH32(esp, 0x000BA66Cu); RECOMP_ABI_CALL(0x00049000u, sub_00049000); /* call 0x00049000 */

loc_000BA66C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA670: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA687; /* je: equal / zero */

loc_000BA674: ;
    MEM32(esi + 0x1C) = 0;
    PUSH32(esp, 0x000BA680u); RECOMP_ABI_CALL(0x00048900u, sub_00048900); /* call 0x00048900 */

loc_000BA680: ;
    ecx = eax;
    PUSH32(esp, 0x000BA687u); RECOMP_ABI_CALL(0x00049190u, sub_00049190); /* call 0x00049190 */

loc_000BA687: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000BA691u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA691: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA695: ;
    MEM32(esi + 0x14) = 1;
    MEM32(esi + 0x18) = 0;
    eax = MEM32(0x1DA878);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA6CD; /* jne: not equal / not zero */

loc_000BA6AC: ;
    PUSH32(esp, 0x360);
    PUSH32(esp, 0x000BA6B6u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BA6B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA6C6; /* je: equal / zero */

loc_000BA6BD: ;
    ecx = eax;
    PUSH32(esp, 0x000BA6C4u); RECOMP_ABI_CALL(0x000B0870u, sub_000B0870); /* call 0x000B0870 */

loc_000BA6C4: ;
    goto loc_000BA6C8;

loc_000BA6C6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BA6C8: ;
    MEM32(0x1DA878) = eax;

loc_000BA6CD: ;
    ecx = eax;
    PUSH32(esp, 0x000BA6D4u); RECOMP_ABI_CALL(0x000B03E0u, sub_000B03E0); /* call 0x000B03E0 */

loc_000BA6D4: ;
    _fa = (uint32_t)(MEM32(0x1CA3A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CA3A0), 2 (32-bit) */
    esi = MEM32(esi + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_000BA719; /* jne: not equal / not zero */

loc_000BA6E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000BA752; /* ja: above (unsigned >) */

loc_000BA6E5: ;
    { uint32_t _jt = MEM32(esi * 4 + 0xBA7A0); /* switch: 12 entries, 10 targets */
    if (_jt == 0x000BA6ECu) goto loc_000BA6EC;
    if (_jt == 0x000BA6F5u) goto loc_000BA6F5;
    if (_jt == 0x000BA6FEu) goto loc_000BA6FE;
    if (_jt == 0x000BA707u) goto loc_000BA707;
    if (_jt == 0x000BA710u) goto loc_000BA710;
    if (_jt == 0x000BA725u) goto loc_000BA725;
    if (_jt == 0x000BA72Eu) goto loc_000BA72E;
    if (_jt == 0x000BA737u) goto loc_000BA737;
    if (_jt == 0x000BA740u) goto loc_000BA740;
    if (_jt == 0x000BA752u) goto loc_000BA752;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000BA6EC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0828);
    goto loc_000BA747;

loc_000BA6F5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0810);
    goto loc_000BA747;

loc_000BA6FE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C07F8);
    goto loc_000BA747;

loc_000BA707: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C07DC);
    goto loc_000BA747;

loc_000BA710: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C07C8);
    goto loc_000BA747;

loc_000BA719: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000BA752; /* ja: above (unsigned >) */

loc_000BA71E: ;
    { uint32_t _jt = MEM32(esi * 4 + 0xBA7B8); /* switch: 6 entries, 5 targets */
    if (_jt == 0x000BA725u) goto loc_000BA725;
    if (_jt == 0x000BA72Eu) goto loc_000BA72E;
    if (_jt == 0x000BA737u) goto loc_000BA737;
    if (_jt == 0x000BA740u) goto loc_000BA740;
    if (_jt == 0x000BA752u) goto loc_000BA752;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000BA725: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C07B4);
    goto loc_000BA747;

loc_000BA72E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C07A0);
    goto loc_000BA747;

loc_000BA737: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C078C);
    goto loc_000BA747;

loc_000BA740: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0778);

loc_000BA747: ;
    ecx = MEM32(0x1D3ED8);
    PUSH32(esp, 0x000BA752u); RECOMP_ABI_CALL(0x000F2970u, sub_000F2970); /* call 0x000F2970 */

loc_000BA752: ;
    eax = MEM32(0x1DA878);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA78E; /* jne: not equal / not zero */

loc_000BA75B: ;
    PUSH32(esp, 0x360);
    PUSH32(esp, 0x000BA765u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BA765: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA787; /* je: equal / zero */

loc_000BA76C: ;
    ecx = eax;
    PUSH32(esp, 0x000BA773u); RECOMP_ABI_CALL(0x000B0870u, sub_000B0870); /* call 0x000B0870 */

loc_000BA773: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    MEM32(0x1DA878) = eax;
    PUSH32(esp, 0x000BA783u); RECOMP_ABI_CALL(0x000B0290u, sub_000B0290); /* call 0x000B0290 */

loc_000BA783: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA787: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x1DA878) = eax;

loc_000BA78E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x000BA799u); RECOMP_ABI_CALL(0x000B0290u, sub_000B0290); /* call 0x000B0290 */

loc_000BA799: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BA7D0
 * Original: 0x000BA7D0 - 0x000BA857 (135 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA7D0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA819; /* jne: not equal / not zero */

loc_000BA7DA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000BA7E2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BA7E2: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA80B; /* je: equal / zero */

loc_000BA7EB: ;
    ecx = esi;
    PUSH32(esp, 0x000BA7F2u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BA7F2: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0230;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BA808u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA808: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000BA80B: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BA816u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA816: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000BA819: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA855; /* jne: not equal / not zero */

loc_000BA81E: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x000BA825u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BA825: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA84A; /* je: equal / zero */

loc_000BA82C: ;
    ecx = MEM32(0x1D3F08);
    edx = MEM32(ecx + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x000BA83Fu); RECOMP_ABI_CALL(0x000B5C20u, sub_000B5C20); /* call 0x000B5C20 */

loc_000BA83F: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA848u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA848: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000BA84A: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA855u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA855: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA860
 * Original: 0x000BA860 - 0x000BAA7B (539 bytes, 184 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA860: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    if ((_fa == 0)) goto loc_000BA8E0; /* je: equal / zero */

loc_000BA870: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BA8A1; /* je: equal / zero */

loc_000BA873: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000BA89A; /* jne: not equal / not zero */

loc_000BA878: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BAE20);
    PUSH32(esp, 0x000BA885u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BA885: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA89A; /* jne: not equal / not zero */

loc_000BA88C: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(edi + 0x14) = ecx;

loc_000BA89A: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA8A1: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1C0748);
    PUSH32(esp, 0x000BA8AEu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BA8AE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA8D6; /* jne: not equal / not zero */

loc_000BA8B5: ;
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(edi + 4);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA8C8u); RECOMP_ABI_CALL(0x0008BA80u, sub_0008BA80); /* call 0x0008BA80 */

loc_000BA8C8: ;
    ecx = edi;
    MEM32(edi + 0x1C) = 0;
    PUSH32(esp, 0x000BA8D6u); RECOMP_ABI_CALL(0x000BA7D0u, sub_000BA7D0); /* call 0x000BA7D0 */

loc_000BA8D6: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA8E0: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B5C60);
    PUSH32(esp, 0x000BA8EDu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BA8ED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA922; /* jne: not equal / not zero */

loc_000BA8F4: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000BA8FBu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BA8FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAA3A; /* je: equal / zero */

loc_000BA906: ;
    PUSH32(esp, 0x32);
    ecx = eax;
    PUSH32(esp, 0x000BA90Fu); RECOMP_ABI_CALL(0x000BA050u, sub_000BA050); /* call 0x000BA050 */

loc_000BA90F: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA918u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA918: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA922: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1B5C48);
    PUSH32(esp, 0x000BA92Fu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BA92F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA964; /* jne: not equal / not zero */

loc_000BA936: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000BA93Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BA93D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAA3A; /* je: equal / zero */

loc_000BA948: ;
    PUSH32(esp, 0x35);
    ecx = eax;
    PUSH32(esp, 0x000BA951u); RECOMP_ABI_CALL(0x000BA050u, sub_000BA050); /* call 0x000BA050 */

loc_000BA951: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA95Au); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA95A: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA964: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B5C34);
    PUSH32(esp, 0x000BA971u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BA971: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA9A6; /* jne: not equal / not zero */

loc_000BA978: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000BA97Fu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BA97F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAA3A; /* je: equal / zero */

loc_000BA98A: ;
    PUSH32(esp, 0x34);
    ecx = eax;
    PUSH32(esp, 0x000BA993u); RECOMP_ABI_CALL(0x000BA050u, sub_000BA050); /* call 0x000BA050 */

loc_000BA993: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA99Cu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BA99C: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA9A6: ;
    PUSH32(esp, 0x1B5BF0);
    ecx = esi;
    PUSH32(esp, 0x000BA9B2u); RECOMP_ABI_CALL(0x0003D190u, sub_0003D190); /* call 0x0003D190 */

loc_000BA9B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA9F5; /* je: equal / zero */

loc_000BA9B6: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000BA9BDu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BA9BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA9E0; /* je: equal / zero */

loc_000BA9C4: ;
    PUSH32(esp, 5);
    ecx = eax;
    PUSH32(esp, 0x000BA9CDu); RECOMP_ABI_CALL(0x000BA100u, sub_000BA100); /* call 0x000BA100 */

loc_000BA9CD: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA9D6u); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_000BA9D6: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA9E0: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA9EBu); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_000BA9EB: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BA9F5: ;
    PUSH32(esp, 0x1B5C04);
    ecx = esi;
    PUSH32(esp, 0x000BAA01u); RECOMP_ABI_CALL(0x0003D190u, sub_0003D190); /* call 0x0003D190 */

loc_000BAA01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAA4F; /* je: equal / zero */

loc_000BAA05: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000BAA0Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BAA0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAA3A; /* je: equal / zero */

loc_000BAA13: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000BAA27u); RECOMP_ABI_CALL(0x000BA0D0u, sub_000BA0D0); /* call 0x000BA0D0 */

loc_000BAA27: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BAA30u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BAA30: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BAA3A: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BAA45u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BAA45: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BAA4F: ;
    PUSH32(esp, 0x1B5C20);
    ecx = esi;
    PUSH32(esp, 0x000BAA5Bu); RECOMP_ABI_CALL(0x0003D190u, sub_0003D190); /* call 0x0003D190 */

loc_000BAA5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA89A; /* je: equal / zero */

loc_000BAA63: ;
    ecx = edi;
    MEM32(edi + 0x1C) = 1;
    PUSH32(esp, 0x000BAA71u); RECOMP_ABI_CALL(0x000BA7D0u, sub_000BA7D0); /* call 0x000BA7D0 */

loc_000BAA71: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BAA80
 * Original: 0x000BAA80 - 0x000BAABF (63 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BAA80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BAA92; /* je: equal / zero */

loc_000BAA89: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BAABD; /* jne: not equal / not zero */

loc_000BAA8C: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000BA7D0(); return; /* tail jmp 0x000BA7D0 */

loc_000BAA92: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAAB5; /* je: equal / zero */

loc_000BAA99: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BAAAEu); RECOMP_ABI_CALL(0x0008BA80u, sub_0008BA80); /* call 0x0008BA80 */

loc_000BAAAE: ;
    MEM32(esi + 0x10) = 2;

loc_000BAAB5: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000BA7D0(); return; /* tail jmp 0x000BA7D0 */

loc_000BAABD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BAAC0
 * Original: 0x000BAAC0 - 0x000BAAF0 (48 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAAC0(void)
{

loc_000BAAC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BAAC8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BAAC8: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0848;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BAAF0
 * Original: 0x000BAAF0 - 0x000BAB19 (41 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAAF0(void)
{

loc_000BAAF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BAAF8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BAAF8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C00AC;
    MEM32(esi + 0x18) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BAB20
 * Original: 0x000BAB20 - 0x000BAB4D (45 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAB20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x000BAB28u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BAB28: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAB47; /* je: equal / zero */

loc_000BAB2F: ;
    ecx = MEM32(esp + 8);
    edx = esp;
    MEM32(esp) = ecx;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000BAB43u); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_000BAB43: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000BAB47: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BAB50
 * Original: 0x000BAB50 - 0x000BAB93 (67 bytes, 23 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAB50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAB50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C086C);
    PUSH32(esp, 0x2F);
    MEM32(esi + 0x14) = 0;
    PUSH32(esp, 0x000BAB6Bu); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000BAB6B: ;
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000BAB7Bu); RECOMP_ABI_CALL(0x0005D3A0u, sub_0005D3A0); /* call 0x0005D3A0 */

loc_000BAB7B: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BAB89u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000BAB89: ;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BABA0
 * Original: 0x000BABA0 - 0x000BABB3 (19 bytes, 5 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BABA0(void)
{

loc_000BABA0: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C086C);
    PUSH32(esp, 0x000BABB2u); RECOMP_ABI_CALL(0x000EBD00u, sub_000EBD00); /* call 0x000EBD00 */

loc_000BABB2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BABC0
 * Original: 0x000BABC0 - 0x000BABF7 (55 bytes, 17 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BABC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BABC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C0884);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x000BABD3u); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000BABD3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BABE7u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000BABE7: ;
    MEM32(esi + 0x14) = 0;
    MEM32(esi + 0x28) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BAC00
 * Original: 0x000BAC00 - 0x000BAC13 (19 bytes, 5 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAC00(void)
{

loc_000BAC00: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0884);
    PUSH32(esp, 0x000BAC12u); RECOMP_ABI_CALL(0x000EBD00u, sub_000EBD00); /* call 0x000EBD00 */

loc_000BAC12: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BAC20
 * Original: 0x000BAC20 - 0x000BAD92 (370 bytes, 122 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BAC20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAD08; /* jne: not equal / not zero */

loc_000BAC32: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B62EC);
    PUSH32(esp, 0x000BAC3Fu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BAC3F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAD8C; /* jne: not equal / not zero */

loc_000BAC4A: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAD8C; /* jne: not equal / not zero */

loc_000BAC55: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000BAC5Fu); RECOMP_ABI_CALL(0x0005A050u, sub_0005A050); /* call 0x0005A050 */

loc_000BAC5F: ;
    ebx = eax;
    ebp = esi + 0x20;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x000BAC6Cu); RECOMP_ABI_CALL(0x00012E40u, sub_00012E40); /* call 0x00012E40 */

loc_000BAC6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BACF4; /* jne: not equal / not zero */

loc_000BAC74: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    MEM32(esi + 0x14) = 1;
    PUSH32(esp, ecx);
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, 0x000BAC8Bu); RECOMP_ABI_CALL(0x000BAB20u, sub_000BAB20); /* call 0x000BAB20 */

loc_000BAC8B: ;
    edi = eax;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000BAC94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BAC91u); } /* indirect call */
    }

loc_000BAC94: ;
    ecx = edi;
    PUSH32(esp, 0x000BAC9Bu); RECOMP_ABI_CALL(0x000144B0u, sub_000144B0); /* call 0x000144B0 */

loc_000BAC9B: ;
    PUSH32(esp, ebx);
    ecx = edi + 8;
    PUSH32(esp, 0x000BACA4u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_000BACA4: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(edi + 0x20);
    MEM32(eax + 4) = ecx;
    MEM32(edi + 0x3C) = 1;
    ecx = MEM32(0x1D3F0C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BACC0u); RECOMP_ABI_CALL(0x00012C00u, sub_00012C00); /* call 0x00012C00 */

loc_000BACC0: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000BACC8u); RECOMP_ABI_CALL(0x00013060u, sub_00013060); /* call 0x00013060 */

loc_000BACC8: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0884);
    PUSH32(esp, 0x000BACDAu); RECOMP_ABI_CALL(0x000EBD00u, sub_000EBD00); /* call 0x000EBD00 */

loc_000BACDA: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0x28) = 2;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000BACE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BACE5u); } /* indirect call */
    }

loc_000BACE8: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BACF4: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BACFDu); RECOMP_ABI_CALL(0x0005A070u, sub_0005A070); /* call 0x0005A070 */

loc_000BACFD: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BAD08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAD5A; /* jne: not equal / not zero */

loc_000BAD0D: ;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAD5A; /* jne: not equal / not zero */

loc_000BAD14: ;
    PUSH32(esp, 0x20);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x000BAD1Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BAD1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAD46; /* je: equal / zero */

loc_000BAD25: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000BAD34u); RECOMP_ABI_CALL(0x000BAAC0u, sub_000BAAC0); /* call 0x000BAAC0 */

loc_000BAD34: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BAD3Du); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BAD3D: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BAD46: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BAD51u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BAD51: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BAD5A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAD8C; /* jne: not equal / not zero */

loc_000BAD5F: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAD7C; /* je: equal / zero */

loc_000BAD67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAD7C; /* je: equal / zero */

loc_000BAD6C: ;
    MEM32(esi + 0x28) = 4;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BAD7C: ;
    MEM32(esi + 0x28) = 2;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BAD8C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BADA0
 * Original: 0x000BADA0 - 0x000BADF6 (86 bytes, 22 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BADA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BADA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C0898);
    PUSH32(esp, 0x2E);
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 0x24) = 1;
    PUSH32(esp, 0x000BADC1u); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000BADC1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BADD5u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000BADD5: ;
    MEM32(esi + 0x1C) = 0;
    _fa = (uint32_t)(MEM32(0x1CE890)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CE890), 1 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000BADF5; /* je: equal / zero */

loc_000BADE6: ;
    PUSH32(esp, 0x000BADEBu); RECOMP_ABI_CALL(0x000474A0u, sub_000474A0); /* call 0x000474A0 */

loc_000BADEB: ;
    MEM32(eax + 0x148) = 1;

loc_000BADF5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BAE00
 * Original: 0x000BAE00 - 0x000BAE13 (19 bytes, 5 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAE00(void)
{

loc_000BAE00: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0898);
    PUSH32(esp, 0x000BAE12u); RECOMP_ABI_CALL(0x000EBD00u, sub_000EBD00); /* call 0x000EBD00 */

loc_000BAE12: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BAE20
 * Original: 0x000BAE20 - 0x000BAE4B (43 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAE20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAE20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x000BAE2Bu); RECOMP_ABI_CALL(0x0005A0D0u, sub_0005A0D0); /* call 0x0005A0D0 */

loc_000BAE2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAE37; /* je: equal / zero */

loc_000BAE2F: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x000BAE37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BAE34u); } /* indirect call */
    }

loc_000BAE37: ;
    PUSH32(esp, 0x000BAE3Cu); RECOMP_ABI_CALL(0x000474A0u, sub_000474A0); /* call 0x000474A0 */

loc_000BAE3C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x148) = ecx;
    MEM32(esi + 0x1C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BAE50
 * Original: 0x000BAE50 - 0x000BAE73 (35 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAE50(void)
{

loc_000BAE50: ;
    edx = MEM32(ecx + 0x14);
    eax = ecx + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    MEM32(ecx + 0x1C) = 2;
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BAE70u); RECOMP_ABI_CALL(0x0008B930u, sub_0008B930); /* call 0x0008B930 */

loc_000BAE70: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BAE80
 * Original: 0x000BAE80 - 0x000BAEEA (106 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAE80: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x1C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000BAEE8; /* je: equal / zero */

loc_000BAE91: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BAEA0u); RECOMP_ABI_CALL(0x00013060u, sub_00013060); /* call 0x00013060 */

loc_000BAEA0: ;
    MEM32(edi + 0x10) = 1;
    PUSH32(esp, 0x000BAEACu); RECOMP_ABI_CALL(0x00050E00u, sub_00050E00); /* call 0x00050E00 */

loc_000BAEAC: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000BAEB3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BAEB3: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAEDC; /* je: equal / zero */

loc_000BAEBC: ;
    ecx = esi;
    PUSH32(esp, 0x000BAEC3u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BAEC3: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0230;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BAED9u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BAED9: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000BAEDC: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BAEE7u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BAEE7: ;
    POP32(esp, esi);

loc_000BAEE8: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BAEF0
 * Original: 0x000BAEF0 - 0x000BB150 (608 bytes, 195 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAEF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000BAFB4; /* jne: not equal / not zero */

loc_000BAF03: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C0898);
    PUSH32(esp, 0x000BAF10u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BAF10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAFB4; /* jne: not equal / not zero */

loc_000BAF1B: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAFB4; /* jne: not equal / not zero */

loc_000BAF26: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAFB4; /* jne: not equal / not zero */

loc_000BAF31: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB149; /* je: equal / zero */

loc_000BAF3C: ;
    eax = MEM32(eax + 0x178);
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BAF51u); RECOMP_ABI_CALL(0x0008A9F0u, sub_0008A9F0); /* call 0x0008A9F0 */

loc_000BAF51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAF6A; /* je: equal / zero */

loc_000BAF55: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BAF60u); RECOMP_ABI_CALL(0x000BAE50u, sub_000BAE50); /* call 0x000BAE50 */

loc_000BAF60: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BAF6A: ;
    PUSH32(esp, 0x20);
    MEM32(esi + 0x10) = 1;
    PUSH32(esp, 0x000BAF78u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BAF78: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAF9F; /* je: equal / zero */

loc_000BAF7F: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 0xE);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000BAF8Cu); RECOMP_ABI_CALL(0x000BAAC0u, sub_000BAAC0); /* call 0x000BAAC0 */

loc_000BAF8C: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BAF95u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BAF95: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BAF9F: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BAFAAu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BAFAA: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BAFB4: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB069; /* jne: not equal / not zero */

loc_000BAFC0: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB069; /* jne: not equal / not zero */

loc_000BAFCB: ;
    ecx = MEM32(0x1D3F0C);
    PUSH32(esp, 0x000BAFD6u); RECOMP_ABI_CALL(0x00012CE0u, sub_00012CE0); /* call 0x00012CE0 */

loc_000BAFD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB00B; /* jne: not equal / not zero */

loc_000BAFDA: ;
    PUSH32(esp, 0x14);
    MEM32(esi + 0x10) = 1;
    PUSH32(esp, 0x000BAFE8u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BAFE8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB054; /* je: equal / zero */

loc_000BAFEF: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x000BAFF8u); RECOMP_ABI_CALL(0x00064850u, sub_00064850); /* call 0x00064850 */

loc_000BAFF8: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB001u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BB001: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BB00B: ;
    eax = MEM32(0x1CE890);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BAFDA; /* je: equal / zero */

loc_000BB015: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BB05F; /* jne: not equal / not zero */

loc_000BB018: ;
    PUSH32(esp, 0x20);
    MEM32(esi + 0x10) = 1;
    PUSH32(esp, 0x000BB026u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BB026: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB054; /* je: equal / zero */

loc_000BB02D: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000BB041u); RECOMP_ABI_CALL(0x000B5C60u, sub_000B5C60); /* call 0x000B5C60 */

loc_000BB041: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB04Au); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BB04A: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BB054: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB05Fu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BB05F: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BB069: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB0DC; /* jne: not equal / not zero */

loc_000BB06E: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB0DC; /* jne: not equal / not zero */

loc_000BB075: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB149; /* je: equal / zero */

loc_000BB080: ;
    eax = MEM32(eax + 0x178);
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB095u); RECOMP_ABI_CALL(0x0008A9F0u, sub_0008A9F0); /* call 0x0008A9F0 */

loc_000BB095: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB149; /* je: equal / zero */

loc_000BB09D: ;
    MEM32(esi + 0x1C) = 4;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x355);
    PUSH32(esp, 0x000BB0B4u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BB0B4: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x1BCAC4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1A27B8);
    PUSH32(esp, 0x000BB0CFu); RECOMP_ABI_CALL(0x0006A480u, sub_0006A480); /* call 0x0006A480 */

loc_000BB0CF: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BB0DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB149; /* jne: not equal / not zero */

loc_000BB0E1: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB12B; /* jne: not equal / not zero */

loc_000BB0E7: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB105; /* je: equal / zero */

loc_000BB0EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB105; /* je: equal / zero */

loc_000BB0F4: ;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = 0;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BB105: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    MEM32(esi + 0x1C) = 3;
    PUSH32(esp, ecx);
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, 0x000BB121u); RECOMP_ABI_CALL(0x0008B540u, sub_0008B540); /* call 0x0008B540 */

loc_000BB121: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BB12B: ;
    edi = MEM32(edi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB138; /* je: equal / zero */

loc_000BB133: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB0F4; /* jne: not equal / not zero */

loc_000BB138: ;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = 5;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BB149: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BB150
 * Original: 0x000BB150 - 0x000BB192 (66 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB150(void)
{

loc_000BB150: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000BB159u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BB159: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x1C) = ecx;
    edi = esi + 0x20;
    ecx = edi;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C08B4;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x000BB17Eu); RECOMP_ABI_CALL(0x00014AA0u, sub_00014AA0); /* call 0x00014AA0 */

loc_000BB17E: ;
    MEM32(edi) = 0x1AE640;
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BB1A0
 * Original: 0x000BB1A0 - 0x000BB1C8 (40 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB1A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x20;
    PUSH32(esp, 0x000BB1ABu); RECOMP_ABI_CALL(0x00014AB0u, sub_00014AB0); /* call 0x00014AB0 */

loc_000BB1AB: ;
    ecx = esi;
    PUSH32(esp, 0x000BB1B2u); RECOMP_ABI_CALL(0x000BC740u, sub_000BC740); /* call 0x000BC740 */

loc_000BB1B2: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BB1C2; /* je: equal / zero */

loc_000BB1B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BB1BFu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000BB1BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BB1C2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BB1D0
 * Original: 0x000BB1D0 - 0x000BB2C2 (242 bytes, 86 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB1D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000BB2BB; /* je: equal / zero */

loc_000BB1DF: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB252; /* jne: not equal / not zero */

loc_000BB1EA: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C086C);
    PUSH32(esp, 0x000BB1F7u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BB1F7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB252; /* jne: not equal / not zero */

loc_000BB1FE: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB252; /* jne: not equal / not zero */

loc_000BB205: ;
    PUSH32(esp, 0x2C);
    MEM32(esi + 0x14) = 1;
    PUSH32(esp, 0x000BB213u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BB213: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB22B; /* je: equal / zero */

loc_000BB21A: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000BB229u); RECOMP_ABI_CALL(0x000BB150u, sub_000BB150); /* call 0x000BB150 */

loc_000BB229: ;
    goto loc_000BB22D;

loc_000BB22B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BB22D: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB236u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BB236: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C086C);
    PUSH32(esp, 0x000BB248u); RECOMP_ABI_CALL(0x000EBD00u, sub_000EBD00); /* call 0x000EBD00 */

loc_000BB248: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BB252: ;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB2BB; /* jne: not equal / not zero */

loc_000BB258: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C086C);
    PUSH32(esp, 0x000BB265u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BB265: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB2BB; /* jne: not equal / not zero */

loc_000BB26C: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB2BB; /* jne: not equal / not zero */

loc_000BB273: ;
    PUSH32(esp, 0x28);
    MEM32(esi + 0x14) = 1;
    PUSH32(esp, 0x000BB281u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BB281: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB2A6; /* je: equal / zero */

loc_000BB288: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000BB293u); RECOMP_ABI_CALL(0x000BAAF0u, sub_000BAAF0); /* call 0x000BAAF0 */

loc_000BB293: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB29Cu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BB29C: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BB2A6: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB2B1u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BB2B1: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BB2BB: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BB2D0
 * Original: 0x000BB2D0 - 0x000BB342 (114 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB2D0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x28);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BB324; /* je: equal / zero */

loc_000BB2DB: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000BB340; /* jne: not equal / not zero */

loc_000BB2E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BB2E6u); RECOMP_ABI_CALL(0x00050E20u, sub_00050E20); /* call 0x00050E20 */

loc_000BB2E6: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000BB2EDu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BB2ED: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB316; /* je: equal / zero */

loc_000BB2F6: ;
    ecx = esi;
    PUSH32(esp, 0x000BB2FDu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BB2FD: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0230;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BB313u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BB313: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000BB316: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BB321u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BB321: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000BB324: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB339u); RECOMP_ABI_CALL(0x0008BA80u, sub_0008BA80); /* call 0x0008BA80 */

loc_000BB339: ;
    MEM32(edi + 0x28) = 4;

loc_000BB340: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB350
 * Original: 0x000BB350 - 0x000BB3E8 (152 bytes, 48 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BB350: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000BB3E5; /* ja: above (unsigned >) */

loc_000BB361: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xBB3E8); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000BB368u) goto loc_000BB368;
    if (_jt == 0x000BB3BAu) goto loc_000BB3BA;
    if (_jt == 0x000BB3C4u) goto loc_000BB3C4;
    if (_jt == 0x000BB3D6u) goto loc_000BB3D6;
    if (_jt == 0x000BB3E5u) goto loc_000BB3E5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000BB368: ;
    PUSH32(esp, 0x000BB36Du); RECOMP_ABI_CALL(0x000474A0u, sub_000474A0); /* call 0x000474A0 */

loc_000BB36D: ;
    MEM32(eax + 0x148) = 0;
    eax = MEM32(0x1D3F0C);
    ecx = MEM32(eax + 0x58);
    edx = MEM32(ecx + 4);
    ecx = MEM32(esi + 0x18);
    eax = esp + 4;
    MEM32(esp + 4) = edx;
    ecx = MEM32(ecx + 0x140);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB399u); RECOMP_ABI_CALL(0x00058240u, sub_00058240); /* call 0x00058240 */

loc_000BB399: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0x1C0898);
    PUSH32(esp, 0x000BB3A9u); RECOMP_ABI_CALL(0x000EBAD0u, sub_000EBAD0); /* call 0x000EBAD0 */

loc_000BB3A9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x000BB3B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BB3ADu); } /* indirect call */
    }

loc_000BB3B0: ;
    MEM32(esi + 0x1C) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000BB3BA: ;
    ecx = esi;
    PUSH32(esp, 0x000BB3C1u); RECOMP_ABI_CALL(0x000BAE80u, sub_000BAE80); /* call 0x000BAE80 */

loc_000BB3C1: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000BB3C4: ;
    ecx = MEM32(esi + 0x18);
    MEM32(esi + 0x1C) = 0;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x000BB3D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BB3D0u); } /* indirect call */
    }

loc_000BB3D3: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000BB3D6: ;
    ecx = MEM32(esi + 0x18);
    MEM32(esi + 0x1C) = 0;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x000BB3E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BB3E2u); } /* indirect call */
    }

loc_000BB3E5: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB400
 * Original: 0x000BB400 - 0x000BB47C (124 bytes, 45 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000BB400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BB400: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000BB479; /* ja: above (unsigned >) */

loc_000BB409: ;
    eax = ZX8(MEM8(eax + 0xBB490));
    { uint32_t _jt = MEM32(eax * 4 + 0xBB47C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000BB417u) goto loc_000BB417;
    if (_jt == 0x000BB424u) goto loc_000BB424;
    if (_jt == 0x000BB431u) goto loc_000BB431;
    if (_jt == 0x000BB452u) goto loc_000BB452;
    if (_jt == 0x000BB473u) goto loc_000BB473;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000BB417: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

loc_000BB424: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 9 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

loc_000BB431: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB473; /* je: equal / zero */

loc_000BB439: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB473; /* je: equal / zero */

loc_000BB43E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB473; /* je: equal / zero */

loc_000BB443: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB473; /* je: equal / zero */

loc_000BB448: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB473; /* je: equal / zero */

loc_000BB44D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    goto loc_000BB471;

loc_000BB452: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB473; /* je: equal / zero */

loc_000BB45A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB473; /* je: equal / zero */

loc_000BB45F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB473; /* je: equal / zero */

loc_000BB464: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB473; /* je: equal / zero */

loc_000BB469: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB473; /* je: equal / zero */

loc_000BB46E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */

loc_000BB471: ;
    if (CMP_NE(_fa, _fb)) goto loc_000BB479; /* jne: not equal / not zero */

loc_000BB473: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000BB479: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BB4B0
 * Original: 0x000BB4B0 - 0x000BB4D3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB4B0: ;
    eax = MEM32(0x1D73C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB4D2; /* jne: not equal / not zero */

loc_000BB4B9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x000BB4C5u); RECOMP_ABI_CALL(0x000A1720u, sub_000A1720); /* call 0x000A1720 */

loc_000BB4C5: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BB4D1u); RECOMP_ABI_CALL(0x000A1640u, sub_000A1640); /* call 0x000A1640 */

loc_000BB4D1: ;
    POP32(esp, esi);

loc_000BB4D2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BB4E0
 * Original: 0x000BB4E0 - 0x000BB4EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB4E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BB4E0: ;
    ecx = 0x1D8620;
    g_seh_ebp = ebp; sub_000A1720(); return; /* tail jmp 0x000A1720 */

}

/**
 * sub_000BB4F0
 * Original: 0x000BB4F0 - 0x000BB57B (139 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BB4F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB4F0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000BB500: ;
    MEM32(esi * 4 + 0x1DA9C0) = 0;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB571; /* jne: not equal / not zero */

loc_000BB511: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BB51Fu); RECOMP_ABI_CALL(0x00013900u, sub_00013900); /* call 0x00013900 */

loc_000BB51F: ;
    edi = eax;
    eax = MEM32(0x1DA114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB54B; /* jne: not equal / not zero */

loc_000BB52A: ;
    PUSH32(esp, 0x968);
    PUSH32(esp, 0x000BB534u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BB534: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB544; /* je: equal / zero */

loc_000BB53B: ;
    ecx = eax;
    PUSH32(esp, 0x000BB542u); RECOMP_ABI_CALL(0x000A41D0u, sub_000A41D0); /* call 0x000A41D0 */

loc_000BB542: ;
    goto loc_000BB546;

loc_000BB544: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BB546: ;
    MEM32(0x1DA114) = eax;

loc_000BB54B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000BB553u); RECOMP_ABI_CALL(0x000A3EA0u, sub_000A3EA0); /* call 0x000A3EA0 */

loc_000BB553: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BB55Fu); RECOMP_ABI_CALL(0x000A43A0u, sub_000A43A0); /* call 0x000A43A0 */

loc_000BB55F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB571; /* jne: not equal / not zero */

loc_000BB566: ;
    MEM32(esi * 4 + 0x1DA9C0) = 1;

loc_000BB571: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BB500; /* jl: less (signed <) */

loc_000BB577: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB580
 * Original: 0x000BB580 - 0x000BB590 (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB580(void)
{

loc_000BB580: ;
    eax = MEM32(esp + 4);
    MEM32(eax * 4 + 0x1DA9C0) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000BB590
 * Original: 0x000BB590 - 0x000BB5E7 (87 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB590: ;
    eax = MEM32(0x1DA114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB5BA; /* jne: not equal / not zero */

loc_000BB599: ;
    PUSH32(esp, 0x968);
    PUSH32(esp, 0x000BB5A3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BB5A3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB5B3; /* je: equal / zero */

loc_000BB5AA: ;
    ecx = eax;
    PUSH32(esp, 0x000BB5B1u); RECOMP_ABI_CALL(0x000A41D0u, sub_000A41D0); /* call 0x000A41D0 */

loc_000BB5B1: ;
    goto loc_000BB5B5;

loc_000BB5B3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BB5B5: ;
    MEM32(0x1DA114) = eax;

loc_000BB5BA: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000BB5C8u); RECOMP_ABI_CALL(0x000A3CE0u, sub_000A3CE0); /* call 0x000A3CE0 */

loc_000BB5C8: ;
    ecx = MEM32(eax * 4 + 0x1DA9C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB5E0; /* je: equal / zero */

loc_000BB5D3: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BB5E6; /* jle: less or equal (signed <=) */

loc_000BB5DD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;

loc_000BB5E0: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000BB5E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BB5F0
 * Original: 0x000BB5F0 - 0x000BB695 (165 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB5F0(void)
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

loc_000BB5F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 8) = 0;
    MEM32(esp + 0x10) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_000BB614; /* jne: not equal / not zero */

loc_000BB60A: ;
    fp_push(MEMF(0x1C91CC)); /* fld float */
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000BB614: ;
    if (CMP_BE(_fa, _fb)) goto loc_000BB641; /* jbe: below or equal (unsigned <=) */

loc_000BB616: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx + 0x14;
    goto loc_000BB620;

    /* nop */

loc_000BB620: ;
    esi = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000BB62Au); RECOMP_ABI_CALL(0x00026B30u, sub_00026B30); /* call 0x00026B30 */

loc_000BB62A: ;
    fp_push((double)SMEM32(esi + 0x64)); /* fild */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000BB620; /* jne: not equal / not zero */

loc_000BB63B: ;
    ebp = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);

loc_000BB641: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000BB653; /* jge: greater or equal (signed >=) */

loc_000BB64D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D8)); /* fadd dword ptr [0x1c91d8] */

loc_000BB653: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 8) / fp_top()); /* fdivr dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x1C91D0)); /* fsub dword ptr [0x1c91d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF68)); /* fmul dword ptr [0x1aff68] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BB67C; /* jne: not equal / not zero */

loc_000BB670: ;
    POP32(esp, ebp);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1C91D0)); /* fld float */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000BB67C: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000BB691; /* jp: parity */

loc_000BB689: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1C91E0)); /* fld float */

loc_000BB691: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BB6A0
 * Original: 0x000BB6A0 - 0x000BB6D5 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB6A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    /* nop */

loc_000BB6B0: ;
    PUSH32(esp, 0xB);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x000BB6BCu); RECOMP_ABI_CALL(0x000CE0A0u, sub_000CE0A0); /* call 0x000CE0A0 */

loc_000BB6BC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000BB6D0; /* je: equal / zero */

loc_000BB6C2: ;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BB6C9u); RECOMP_ABI_CALL(0x000BB400u, sub_000BB400); /* call 0x000BB400 */

loc_000BB6C9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB6B0; /* je: equal / zero */

loc_000BB6D0: ;
    POP32(esp, edi);
    eax = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB6E0
 * Original: 0x000BB6E0 - 0x000BB991 (689 bytes, 219 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BB6E0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x1D9BA8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x34);
    ebx = 1;
    MEM32(esp + 0x10) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000BB723; /* jne: not equal / not zero */

loc_000BB702: ;
    PUSH32(esp, 0x33F8);
    PUSH32(esp, 0x000BB70Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BB70C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB71C; /* je: equal / zero */

loc_000BB713: ;
    ecx = eax;
    PUSH32(esp, 0x000BB71Au); RECOMP_ABI_CALL(0x00095660u, sub_00095660); /* call 0x00095660 */

loc_000BB71A: ;
    goto loc_000BB71E;

loc_000BB71C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BB71E: ;
    MEM32(0x1D9BA8) = eax;

loc_000BB723: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2BC);
    edx = MEM32(edi + eax + 0xC8);
    eax = MEM32(ebp + 0x10);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_000BB989; /* jbe: below or equal (unsigned <=) */

loc_000BB745: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x14)) >> 32) & 1);
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x18) = edi;

loc_000BB750: ;
    eax = MEM32(0x1D7400);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    ebp = MEM32(ebp);
    if (CMP_A(_fa, _fb)) goto loc_000BB94B; /* ja: above (unsigned >) */

loc_000BB761: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xBB994); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000BB768u) goto loc_000BB768;
    if (_jt == 0x000BB8DBu) goto loc_000BB8DB;
    if (_jt == 0x000BB8E7u) goto loc_000BB8E7;
    if (_jt == 0x000BB916u) goto loc_000BB916;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000BB768: ;
    MEM32(esp + 0x20) = 1;

loc_000BB770: ;
    eax = MEM32(0x1D73C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000BB789; /* jne: not equal / not zero */

loc_000BB779: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000BB781u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BB77Eu); } /* indirect call */
    }

loc_000BB781: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000BB791; /* jne: not equal / not zero */

loc_000BB785: ;
    edx = MEM32(esp + 0x14);

loc_000BB789: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000BB876; /* jne: not equal / not zero */

loc_000BB791: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ebp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB79Fu); RECOMP_ABI_CALL(0x000BB6A0u, sub_000BB6A0); /* call 0x000BB6A0 */

loc_000BB79F: ;
    edx = MEM32(0x1D3F08);
    ecx = MEM32(edx + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BB7B3u); RECOMP_ABI_CALL(0x00013940u, sub_00013940); /* call 0x00013940 */

loc_000BB7B3: ;
    edi = eax;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000BB7BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BB7BAu); } /* indirect call */
    }

loc_000BB7BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB80E; /* je: equal / zero */

loc_000BB7C1: ;
    eax = MEM32(0x1DA128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000BB7EB; /* jne: not equal / not zero */

loc_000BB7CA: ;
    PUSH32(esp, 0x312C);
    PUSH32(esp, 0x000BB7D4u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BB7D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB7E4; /* je: equal / zero */

loc_000BB7DB: ;
    ecx = eax;
    PUSH32(esp, 0x000BB7E2u); RECOMP_ABI_CALL(0x000A4AA0u, sub_000A4AA0); /* call 0x000A4AA0 */

loc_000BB7E2: ;
    goto loc_000BB7E6;

loc_000BB7E4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BB7E6: ;
    MEM32(0x1DA128) = eax;

loc_000BB7EB: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x478);
    edx = MEM32(ecx + eax + 0xC0);
    eax = ecx + eax + 4;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BB807u); RECOMP_ABI_CALL(0x000A43A0u, sub_000A43A0); /* call 0x000A43A0 */

loc_000BB807: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000BB87B; /* jne: not equal / not zero */

loc_000BB80E: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000BB816u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BB813u); } /* indirect call */
    }

loc_000BB816: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB867; /* je: equal / zero */

loc_000BB81A: ;
    eax = MEM32(0x1DA128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000BB844; /* jne: not equal / not zero */

loc_000BB823: ;
    PUSH32(esp, 0x312C);
    PUSH32(esp, 0x000BB82Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BB82D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB83D; /* je: equal / zero */

loc_000BB834: ;
    ecx = eax;
    PUSH32(esp, 0x000BB83Bu); RECOMP_ABI_CALL(0x000A4AA0u, sub_000A4AA0); /* call 0x000A4AA0 */

loc_000BB83B: ;
    goto loc_000BB83F;

loc_000BB83D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BB83F: ;
    MEM32(0x1DA128) = eax;

loc_000BB844: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x478);
    edx = MEM32(ecx + eax + 0xC0);
    eax = ecx + eax + 4;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BB860u); RECOMP_ABI_CALL(0x000A43A0u, sub_000A43A0); /* call 0x000A43A0 */

loc_000BB860: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000BB87B; /* jne: not equal / not zero */

loc_000BB867: ;
    edi = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000BB770;

loc_000BB876: ;
    esi = MEM32(ebp + 0x38);
    goto loc_000BB883;

loc_000BB87B: ;
    edi = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);

loc_000BB883: ;
    ecx = MEM32(esp + 0x18);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_000BB8A3; /* jbe: below or equal (unsigned <=) */

loc_000BB88D: ;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x14)) >> 32) & 1);
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BB894: ;
    ebx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(ebx + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x38), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000BB8D1; /* je: equal / zero */

loc_000BB89B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000BB894; /* jb: below (unsigned <) */

loc_000BB8A3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB8D1; /* je: equal / zero */

loc_000BB8A7: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_000BB8BC; /* je: equal / zero */

loc_000BB8B3: ;
    eax = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    goto loc_000BB8C4;

loc_000BB8BC: ;
    MEM32(esp + 0x20) = 0;

loc_000BB8C4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB770; /* je: equal / zero */

loc_000BB8CC: ;
    goto loc_000BB95C;

loc_000BB8D1: ;
    ebx = 1;
    goto loc_000BB95C;

loc_000BB8DB: ;
    esi = MEM32(edi * 4 + 0x1CE89C);
    goto loc_000BB95C;

loc_000BB8E7: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = MEM32(edi * 4 + 0x1CE89C);
    if (CMP_AE(_fa, _fb)) goto loc_000BB8FD; /* jae: above or equal (unsigned >=) */

loc_000BB8F6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    goto loc_000BB95C;

loc_000BB8FD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = edi;
    if (CMP_B(_fa, _fb)) goto loc_000BB909; /* jb: below (unsigned <) */

loc_000BB903: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000BB903; /* jae: above or equal (unsigned >=) */

loc_000BB909: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(ecx + eax * 4 + 0x14);
    esi = MEM32(eax + 0x38);
    goto loc_000BB95C;

loc_000BB916: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_000BB92D; /* jbe: below or equal (unsigned <=) */

loc_000BB91E: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(eax + 0x14);
    esi = MEM32(ecx + 0x38);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x14)) >> 32) & 1);
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000BB95C;

loc_000BB92D: ;
    eax = MEM32(0x1D73C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB93B; /* je: equal / zero */

loc_000BB936: ;
    esi = MEM32(ebp + 0x38);
    goto loc_000BB95C;

loc_000BB93B: ;
    PUSH32(esp, 0xB);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x000BB947u); RECOMP_ABI_CALL(0x000CE0A0u, sub_000CE0A0); /* call 0x000CE0A0 */

loc_000BB947: ;
    esi = eax;
    goto loc_000BB958;

loc_000BB94B: ;
    PUSH32(esp, 0x1C08E8);
    PUSH32(esp, 0x000BB955u); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_000BB955: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BB958: ;
    edx = MEM32(esp + 0x14);

loc_000BB95C: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x38) = esi;
    ebp = MEM32(esp + 0x24);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(4)) >> 32) & 1);
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x24) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_000BB750; /* jb: below (unsigned <) */

loc_000BB989: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BB9B0
 * Original: 0x000BB9B0 - 0x000BBBD3 (547 bytes, 184 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB9B0(void)
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

loc_000BB9B0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000BBBC8; /* je: equal / zero */

loc_000BB9C9: ;
    eax = MEM32(0x1DA114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB9F3; /* jne: not equal / not zero */

loc_000BB9D2: ;
    PUSH32(esp, 0x968);
    PUSH32(esp, 0x000BB9DCu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BB9DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB9EC; /* je: equal / zero */

loc_000BB9E3: ;
    ecx = eax;
    PUSH32(esp, 0x000BB9EAu); RECOMP_ABI_CALL(0x000A41D0u, sub_000A41D0); /* call 0x000A41D0 */

loc_000BB9EA: ;
    goto loc_000BB9EE;

loc_000BB9EC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BB9EE: ;
    MEM32(0x1DA114) = eax;

loc_000BB9F3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000BB9FCu); RECOMP_ABI_CALL(0x000A3B00u, sub_000A3B00); /* call 0x000A3B00 */

loc_000BB9FC: ;
    eax = MEM32(esp + 0x24);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C092C)); /* fmul dword ptr [0x1c092c] */
    PUSH32(esp, 0x000BBA0Du); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_000BBA0D: ;
    ecx = MEM32(esp + 0x28);
    fp_push(MEMF(ecx)); /* fld float */
    esi = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C092C)); /* fmul dword ptr [0x1c092c] */
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x000BBA24u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_000BBA24: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_000BBA32; /* jge: greater or equal (signed >=) */

loc_000BBA2E: ;
    eax = ecx;
    goto loc_000BBA3A;

loc_000BBA32: ;
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = edx;

loc_000BBA3A: ;
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    edi = esi;
    ebp = esi;
    PUSH32(esp, 0x000BBA56u); RECOMP_ABI_CALL(0x000BB590u, sub_000BB590); /* call 0x000BB590 */

loc_000BBA56: ;
    esi = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BBB21; /* jle: less or equal (signed <=) */

loc_000BBA65: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_000BBAB8; /* js: sign (negative) */

loc_000BBA68: ;
    eax = MEM32(0x1DA114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBA92; /* jne: not equal / not zero */

loc_000BBA71: ;
    PUSH32(esp, 0x968);
    PUSH32(esp, 0x000BBA7Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BBA7B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBA8B; /* je: equal / zero */

loc_000BBA82: ;
    ecx = eax;
    PUSH32(esp, 0x000BBA89u); RECOMP_ABI_CALL(0x000A41D0u, sub_000A41D0); /* call 0x000A41D0 */

loc_000BBA89: ;
    goto loc_000BBA8D;

loc_000BBA8B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BBA8D: ;
    MEM32(0x1DA114) = eax;

loc_000BBA92: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x000BBA9Au); RECOMP_ABI_CALL(0x000A3CE0u, sub_000A3CE0); /* call 0x000A3CE0 */

loc_000BBA9A: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x1DA9C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x1DA9C0), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBAA6; /* jne: not equal / not zero */

loc_000BBAA3: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000BBABA;

loc_000BBAA6: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BBABA; /* jle: less or equal (signed <=) */

loc_000BBAAE: ;
    ecx = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000BBABA;

loc_000BBAB8: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BBABA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BBB21; /* jle: less or equal (signed <=) */

loc_000BBABE: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x18 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BBB14; /* jge: greater or equal (signed >=) */

loc_000BBAC4: ;
    eax = MEM32(0x1DA114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBAEE; /* jne: not equal / not zero */

loc_000BBACD: ;
    PUSH32(esp, 0x968);
    PUSH32(esp, 0x000BBAD7u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BBAD7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBAE7; /* je: equal / zero */

loc_000BBADE: ;
    ecx = eax;
    PUSH32(esp, 0x000BBAE5u); RECOMP_ABI_CALL(0x000A41D0u, sub_000A41D0); /* call 0x000A41D0 */

loc_000BBAE5: ;
    goto loc_000BBAE9;

loc_000BBAE7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BBAE9: ;
    MEM32(0x1DA114) = eax;

loc_000BBAEE: ;
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x000BBAF6u); RECOMP_ABI_CALL(0x000A3CE0u, sub_000A3CE0); /* call 0x000A3CE0 */

loc_000BBAF6: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x1DA9C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x1DA9C0), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBB02; /* jne: not equal / not zero */

loc_000BBAFF: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000BBB19;

loc_000BBB02: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BBB19; /* jle: less or equal (signed <=) */

loc_000BBB0A: ;
    ecx = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000BBB19;

loc_000BBB14: ;
    ebp = 0x17;

loc_000BBB19: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BBA65; /* jg: greater (signed >) */

loc_000BBB21: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    ebx = 0x64;
    if (CMP_LE(_fas, _fbs)) goto loc_000BBBC6; /* jle: less or equal (signed <=) */

loc_000BBB33: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BBBC6; /* jle: less or equal (signed <=) */

loc_000BBB3B: ;
    ecx = ebp;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x000BBB4Bu); RECOMP_ABI_CALL(0x000CE0A0u, sub_000CE0A0); /* call 0x000CE0A0 */

loc_000BBB4B: ;
    esi = eax;
    eax = MEM32(0x1DA114);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBB79; /* jne: not equal / not zero */

loc_000BBB58: ;
    PUSH32(esp, 0x968);
    PUSH32(esp, 0x000BBB62u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BBB62: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBB72; /* je: equal / zero */

loc_000BBB69: ;
    ecx = eax;
    PUSH32(esp, 0x000BBB70u); RECOMP_ABI_CALL(0x000A41D0u, sub_000A41D0); /* call 0x000A41D0 */

loc_000BBB70: ;
    goto loc_000BBB74;

loc_000BBB72: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BBB74: ;
    MEM32(0x1DA114) = eax;

loc_000BBB79: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000BBB81u); RECOMP_ABI_CALL(0x000A3CE0u, sub_000A3CE0); /* call 0x000A3CE0 */

loc_000BBB81: ;
    ecx = MEM32(eax * 4 + 0x1DA9C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBBA9; /* jne: not equal / not zero */

loc_000BBB8C: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx * 4 + 0x1DAA20) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax * 4 + 0x1DA9C0) = 1;
    MEM32(esp + 0x14) = ecx;
    goto loc_000BBBAA;

loc_000BBBA9: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000BBBAA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBBB1; /* jne: not equal / not zero */

loc_000BBBAE: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000BBBB6;

loc_000BBBB1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBBB6; /* jne: not equal / not zero */

loc_000BBBB5: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000BBBB6: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BBB33; /* jl: less (signed <) */

loc_000BBBC6: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000BBBC8: ;
    POP32(esp, edi);
    eax = 0x1DAA20;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BBBE0
 * Original: 0x000BBBE0 - 0x000BBC98 (184 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BBBE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x000BBBF5u); RECOMP_ABI_CALL(0x000BB4F0u, sub_000BB4F0); /* call 0x000BB4F0 */

loc_000BBBF5: ;
    edi = MEM32(esp + 0x1C);
    eax = MEM32(edi + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BBC2D; /* jbe: below or equal (unsigned <=) */

loc_000BBC03: ;
    ebp = edi + 0x14;

loc_000BBC06: ;
    esi = MEM32(ebp);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000BBC10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BBC0Du); } /* indirect call */
    }

loc_000BBC10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBC22; /* je: equal / zero */

loc_000BBC14: ;
    eax = MEM32(esi + 0x40);
    MEM32(eax * 4 + 0x1DA9C0) = 1;

loc_000BBC22: ;
    eax = MEM32(edi + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BBC06; /* jb: below (unsigned <) */

loc_000BBC2D: ;
    ecx = MEM32(edi + 8);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BBC48u); RECOMP_ABI_CALL(0x000BB9B0u, sub_000BB9B0); /* call 0x000BB9B0 */

loc_000BBC48: ;
    ecx = MEM32(edi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_000BBC92; /* jbe: below or equal (unsigned <=) */

loc_000BBC5A: ;
    ebp = eax;
    ebx = edi + 0x14;
    /* nop */

loc_000BBC60: ;
    eax = MEM32(0x1D73C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000BBC7F; /* jne: not equal / not zero */

loc_000BBC6B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000BBC72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BBC6Fu); } /* indirect call */
    }

loc_000BBC72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBC7F; /* je: equal / zero */

loc_000BBC76: ;
    eax = MEM32(ebp);
    MEM32(esi + 0x40) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BBC7F: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(edi + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000BBC60; /* jb: below (unsigned <) */

loc_000BBC92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BBCA0
 * Original: 0x000BBCA0 - 0x000BBE6D (461 bytes, 131 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBCA0(void)
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

loc_000BBCA0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = 0x1DAA98;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x000BBCB9u); RECOMP_ABI_CALL(0x000A16E0u, sub_000A16E0); /* call 0x000A16E0 */

loc_000BBCB9: ;
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1DAA98);
    PUSH32(esp, 0x000BBCCAu); RECOMP_ABI_CALL(0x0008B190u, sub_0008B190); /* call 0x0008B190 */

loc_000BBCCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBE5C; /* jne: not equal / not zero */

loc_000BBCD2: ;
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x000BBCDCu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BBCDC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBD18; /* je: equal / zero */

loc_000BBCE3: ;
    PUSH32(esp, 0x1BDBE0);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x24) = 0xBF800000u;
    MEM32(esp + 0x28) = 0xBF800000u;
    MEM32(esp + 0x2C) = 0x40000000;
    MEM32(esp + 0x30) = 0x40000000;
    PUSH32(esp, 0x000BBD14u); RECOMP_ABI_CALL(0x0010FDE0u, sub_0010FDE0); /* call 0x0010FDE0 */

loc_000BBD14: ;
    edi = eax;
    goto loc_000BBD1A;

loc_000BBD18: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BBD1A: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BBD27u); RECOMP_ABI_CALL(0x000EBCD0u, sub_000EBCD0); /* call 0x000EBCD0 */

loc_000BBD27: ;
    PUSH32(esp, 0x7C);
    MEM32(edi + 0x40) = 3;
    MEM32(edi + 0x2C) = 0xBF800000u;
    PUSH32(esp, 0x000BBD3Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BBD3C: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBD7E; /* je: equal / zero */

loc_000BBD45: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 1);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x230);
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = 0x3F666666;
    PUSH32(esp, 0x000BBD68u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BBD68: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C0980);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BBD7Au); RECOMP_ABI_CALL(0x00035E90u, sub_00035E90); /* call 0x00035E90 */

loc_000BBD7A: ;
    esi = eax;
    goto loc_000BBD80;

loc_000BBD7E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BBD80: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = 0x3F266666;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x000BBD9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BBD9Au); } /* indirect call */
    }

loc_000BBD9D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 0x20) = 0x1C0960;
    PUSH32(esp, 0x000BBDADu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_000BBDAD: ;
    PUSH32(esp, 0xB0);
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x000BBDBBu); RECOMP_ABI_CALL(0x000367A0u, sub_000367A0); /* call 0x000367A0 */

loc_000BBDBB: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x1B8);
    PUSH32(esp, 0x000BBDC9u); RECOMP_ABI_CALL(0x000367E0u, sub_000367E0); /* call 0x000367E0 */

loc_000BBDC9: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x1B8);
    PUSH32(esp, 0x000BBDD7u); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_000BBDD7: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(edx + 4) = ecx;
    MEM32(esp + 0x3C) = 0;
    ecx = MEM32(esp + 0x3C);
    MEM32(edx + 8) = eax;
    PUSH32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    PUSH32(esp, 0x000BBE21u); RECOMP_ABI_CALL(0x0004F190u, sub_0004F190); /* call 0x0004F190 */

loc_000BBE21: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000BBE28u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BBE28: ;
    esi = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBE4E; /* je: equal / zero */

loc_000BBE31: ;
    ecx = esi;
    PUSH32(esp, 0x000BBE38u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BBE38: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1AEE98;
    MEM32(esi + 0x10) = 0x1DAA98;
    goto loc_000BBE50;

loc_000BBE4E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BBE50: ;
    ecx = MEM32(0x1D3EA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BBE5Cu); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_000BBE5C: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BBE65u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BBE65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BBE70
 * Original: 0x000BBE70 - 0x000BBED2 (98 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBE70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000BBE79u); RECOMP_ABI_CALL(0x000BCB80u, sub_000BCB80); /* call 0x000BCB80 */

loc_000BBE79: ;
    PUSH32(esp, 0x1C09C0);
    ecx = esi;
    MEM32(esi) = 0x1C09A0;
    MEM32(esi + 0x5C) = 0x1C0998;
    PUSH32(esp, 0x000BBE92u); RECOMP_ABI_CALL(0x0011E860u, sub_0011E860); /* call 0x0011E860 */

loc_000BBE92: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000BBE99u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BBE99: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBEC3; /* je: equal / zero */

loc_000BBEA2: ;
    ecx = edi;
    PUSH32(esp, 0x000BBEA9u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BBEA9: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(edi + 8) = 1;
    MEM32(edi) = 0x1C093C;
    PUSH32(esp, 0x000BBEBEu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BBEBE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000BBEC3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000BBECDu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BBECD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BBEE0
 * Original: 0x000BBEE0 - 0x000BBF83 (163 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBEE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000BBEE9u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BBEE9: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0xDC);
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C09EC;
    MEM32(esi + 0x10) = 0;
    PUSH32(esp, 0x000BBF0Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BBF0B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBF29; /* jne: not equal / not zero */

loc_000BBF12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBF3C; /* je: equal / zero */

loc_000BBF16: ;
    PUSH32(esp, 0x1D8620);
    PUSH32(esp, 0x1C09D8);
    ecx = eax;
    PUSH32(esp, 0x000BBF27u); RECOMP_ABI_CALL(0x000691A0u, sub_000691A0); /* call 0x000691A0 */

loc_000BBF27: ;
    goto loc_000BBF3E;

loc_000BBF29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBF3C; /* je: equal / zero */

loc_000BBF2D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C09D8);
    ecx = eax;
    PUSH32(esp, 0x000BBF3Au); RECOMP_ABI_CALL(0x000691A0u, sub_000691A0); /* call 0x000691A0 */

loc_000BBF3A: ;
    goto loc_000BBF3E;

loc_000BBF3C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BBF3E: ;
    ecx = eax;
    MEM32(0x1DAB18) = eax;
    PUSH32(esp, 0x000BBF4Au); RECOMP_ABI_CALL(0x00069F30u, sub_00069F30); /* call 0x00069F30 */

loc_000BBF4A: ;
    eax = MEM32(0x1DAB18);
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BBF5Du); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000BBF5D: ;
    edx = MEM32(0x1DAB18);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(0x1D889C);
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0x000BBF7Cu); RECOMP_ABI_CALL(0x00048040u, sub_00048040); /* call 0x00048040 */

loc_000BBF7C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BBF90
 * Original: 0x000BBF90 - 0x000BC000 (112 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBF90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(0x1DAB18);
    if (CMP_NE(_fa, _fb)) goto loc_000BBFE4; /* jne: not equal / not zero */

loc_000BBF9F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBFFC; /* je: equal / zero */

loc_000BBFA3: ;
    ecx = MEM32(0x1D889C);
    edx = MEM32(ecx + 0xB0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBFE4; /* jne: not equal / not zero */

loc_000BBFB3: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BBFC1u); RECOMP_ABI_CALL(0x000EBCF0u, sub_000EBCF0); /* call 0x000EBCF0 */

loc_000BBFC1: ;
    edx = MEM32(0x1DAB18);
    MEM32(edx + 0xD8) = 1;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000BBFD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BBFD5u); } /* indirect call */
    }

loc_000BBFD8: ;
    MEM32(esi + 0x10) = 1;
    eax = MEM32(0x1DAB18);

loc_000BBFE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBFFC; /* je: equal / zero */

loc_000BBFE8: ;
    ecx = MEM32(eax + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBFFC; /* je: equal / zero */

loc_000BBFEF: ;
    ecx = MEM32(0x1D889C);
    MEM32(ecx + 0x24) = 0;

loc_000BBFFC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC000
 * Original: 0x000BC000 - 0x000BC048 (72 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BC000: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    edi = ecx;
    PUSH32(esp, 0x000BC00Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BC00B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC031; /* je: equal / zero */

loc_000BC014: ;
    ecx = esi;
    PUSH32(esp, 0x000BC01Bu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BC01B: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1AEE98;
    MEM32(esi + 0x10) = 0x1D8620;
    goto loc_000BC033;

loc_000BC031: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BC033: ;
    ecx = MEM32(0x1D3EA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC03Fu); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_000BC03F: ;
    eax = MEM32(edi);
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_000BC050
 * Original: 0x000BC050 - 0x000BC069 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC050(void)
{

loc_000BC050: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BC058u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BC058: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0A24;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BC070
 * Original: 0x000BC070 - 0x000BC090 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC070(void)
{

loc_000BC070: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BC078u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BC078: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0A6C;
    MEM32(esi + 0x10) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BC090
 * Original: 0x000BC090 - 0x000BC0B0 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC090(void)
{

loc_000BC090: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BC098u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BC098: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0A90;
    MEM32(esi + 0x10) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BC0B0
 * Original: 0x000BC0B0 - 0x000BC110 (96 bytes, 36 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BC0B0: ;
    eax = MEM32(0x1D3F08);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0x000BC0C0u); RECOMP_ABI_CALL(0x00013A40u, sub_00013A40); /* call 0x00013A40 */

loc_000BC0C0: ;
    ecx = MEM32(0x1D8634);
    MEM32(ecx + 0x38) = eax;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC0DE; /* je: equal / zero */

loc_000BC0D0: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC0DEu); RECOMP_ABI_CALL(0x000EBCF0u, sub_000EBCF0); /* call 0x000EBCF0 */

loc_000BC0DE: ;
    edx = MEM32(0x1D8634);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1BFD6C);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000BC0F1u); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000BC0F1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC105u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000BC105: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_000BC110(); return; /* fallthrough 0x000BC110 */

}

/**
 * sub_000BC110
 * Original: 0x000BC110 - 0x000BC1F8 (232 bytes, 77 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC110: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BC179; /* je: equal / zero */

loc_000BC11F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BC1F2; /* jne: not equal / not zero */

loc_000BC126: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BFD6C);
    PUSH32(esp, 0x000BC133u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BC133: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC1F2; /* jne: not equal / not zero */

loc_000BC13E: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000BC145u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BC145: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC165; /* je: equal / zero */

loc_000BC14C: ;
    ecx = eax;
    PUSH32(esp, 0x000BC153u); RECOMP_ABI_CALL(0x000BC070u, sub_000BC070); /* call 0x000BC070 */

loc_000BC153: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC15Cu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BC15C: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BC165: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC170u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BC170: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BC179: ;
    ecx = MEM32(ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1BFD6C);
    PUSH32(esp, 0x000BC186u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BC186: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC1F2; /* jne: not equal / not zero */

loc_000BC18D: ;
    edx = MEM32(0x1D8634);
    eax = MEM32(edx + 0x38);
    ecx = MEM32(0x1D3F08);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC1A6u); RECOMP_ABI_CALL(0x00013A30u, sub_00013A30); /* call 0x00013A30 */

loc_000BC1A6: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000BC1ADu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BC1AD: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC1DD; /* je: equal / zero */

loc_000BC1B6: ;
    ecx = esi;
    PUSH32(esp, 0x000BC1BDu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BC1BD: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0A48;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC1D3u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BC1D3: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BC1DD: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC1E8u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BC1E8: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BC1F2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC200
 * Original: 0x000BC200 - 0x000BC32F (303 bytes, 99 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC200(void)
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

loc_000BC200: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    MEM32(ecx + 0x10) = 0;
    eax = MEM32(0x1D9BA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(0x1D8654);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000BC23B; /* jne: not equal / not zero */

loc_000BC21A: ;
    PUSH32(esp, 0x33F8);
    PUSH32(esp, 0x000BC224u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BC224: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC234; /* je: equal / zero */

loc_000BC22B: ;
    ecx = eax;
    PUSH32(esp, 0x000BC232u); RECOMP_ABI_CALL(0x00095660u, sub_00095660); /* call 0x00095660 */

loc_000BC232: ;
    goto loc_000BC236;

loc_000BC234: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BC236: ;
    MEM32(0x1D9BA8) = eax;

loc_000BC23B: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2BC);
    eax = esi + eax + 4;
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BC255; /* jle: less or equal (signed <=) */

loc_000BC250: ;
    eax = 8;

loc_000BC255: ;
    ecx = MEM32(0x1D8624);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    edi = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000BC278; /* jbe: below or equal (unsigned <=) */

loc_000BC264: ;
    eax = MEM32(0x1DAB24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC271; /* je: equal / zero */

loc_000BC26D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000BC278;

loc_000BC271: ;
    edi = 6;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000BC278: ;
    PUSH32(esp, 0x1D8620);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BC283u); RECOMP_ABI_CALL(0x000BB4B0u, sub_000BB4B0); /* call 0x000BB4B0 */

loc_000BC283: ;
    PUSH32(esp, 0x1D8620);
    PUSH32(esp, 0x000BC28Du); RECOMP_ABI_CALL(0x000BB5F0u, sub_000BB5F0); /* call 0x000BB5F0 */

loc_000BC28D: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1D8620);
    PUSH32(esp, 0x000BC2A5u); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_000BC2A5: ;
    PUSH32(esp, 0x1D8620);
    PUSH32(esp, 0x000BC2AFu); RECOMP_ABI_CALL(0x000BB6E0u, sub_000BB6E0); /* call 0x000BB6E0 */

loc_000BC2AF: ;
    eax = MEM32(0x1D8630);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_000BC309; /* jle: less or equal (signed <=) */

loc_000BC2C0: ;
    PUSH32(esp, ebx);
    ebx = 0x1D8634;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_000BC2D0: ;
    esi = MEM32(ebx);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000BC2D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC2D6u); } /* indirect call */
    }

loc_000BC2D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000BC2E8; /* je: equal / zero */

loc_000BC2DF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000BC2E5u); RECOMP_ABI_CALL(0x000266B0u, sub_000266B0); /* call 0x000266B0 */

loc_000BC2E5: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000BC2FA;

loc_000BC2E8: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000BC2EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC2EAu); } /* indirect call */
    }

loc_000BC2ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC2FA; /* je: equal / zero */

loc_000BC2F1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000BC2FAu); RECOMP_ABI_CALL(0x000266B0u, sub_000266B0); /* call 0x000266B0 */

loc_000BC2FA: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_000BC2D0; /* jne: not equal / not zero */

loc_000BC308: ;
    POP32(esp, ebx);

loc_000BC309: ;
    esi = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0AB4);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000BC31Fu); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000BC31F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BC32Au); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000BC32A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BC330
 * Original: 0x000BC330 - 0x000BC343 (19 bytes, 5 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC330(void)
{

loc_000BC330: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0AB4);
    PUSH32(esp, 0x000BC342u); RECOMP_ABI_CALL(0x000EBD00u, sub_000EBD00); /* call 0x000EBD00 */

loc_000BC342: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BC350
 * Original: 0x000BC350 - 0x000BC35B (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC350(void)
{

loc_000BC350: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000BC35Au); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BC35A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BC360
 * Original: 0x000BC360 - 0x000BC404 (164 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC360: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x000BC36Au); RECOMP_ABI_CALL(0x000BCB80u, sub_000BCB80); /* call 0x000BCB80 */

loc_000BC36A: ;
    PUSH32(esp, 0x1C0AF4);
    ecx = edi;
    MEM32(edi) = 0x1C0AD4;
    MEM32(edi + 0x5C) = 0x1C0ACC;
    PUSH32(esp, 0x000BC383u); RECOMP_ABI_CALL(0x0011E860u, sub_0011E860); /* call 0x0011E860 */

loc_000BC383: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = 0x1D8620;
    MEM32(0x1D867C) = ebx;
    PUSH32(esp, 0x000BC398u); RECOMP_ABI_CALL(0x000A1580u, sub_000A1580); /* call 0x000A1580 */

loc_000BC398: ;
    ecx = 0x1D8620;
    PUSH32(esp, 0x000BC3A2u); RECOMP_ABI_CALL(0x000A15A0u, sub_000A15A0); /* call 0x000A15A0 */

loc_000BC3A2: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x20);
    edx = MEM32(ecx + 4);
    eax = MEM32(0x1D8634);
    PUSH32(esp, 0x14);
    MEM32(eax + 0x40) = edx;
    PUSH32(esp, 0x000BC3BCu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BC3BC: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC3DE; /* je: equal / zero */

loc_000BC3C5: ;
    ecx = esi;
    PUSH32(esp, 0x000BC3CCu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BC3CC: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0A6C;
    MEM32(esi + 0x10) = ebx;
    goto loc_000BC3E0;

loc_000BC3DE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BC3E0: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000BC3E8u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BC3E8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x1D8654) = ebx;
    MEM32(0x1D8664) = ebx;
    MEM32(0x1D865C) = 3;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BC410
 * Original: 0x000BC410 - 0x000BC496 (134 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC410: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000BC419u); RECOMP_ABI_CALL(0x000BCB80u, sub_000BCB80); /* call 0x000BCB80 */

loc_000BC419: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi) = 0x1C0B1C;
    MEM32(esi + 0x5C) = 0x1C0B14;
    ecx = MEM32(eax);
    MEM32(0x1DAB24) = ecx;
    PUSH32(esp, 0x1C0B04);
    ecx = esi;
    PUSH32(esp, 0x000BC43Eu); RECOMP_ABI_CALL(0x0011E860u, sub_0011E860); /* call 0x0011E860 */

loc_000BC43E: ;
    PUSH32(esp, 0x10);
    MEM32(0x1D867C) = 0;
    MEM32(0x1D865C) = 2;
    PUSH32(esp, 0x000BC459u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BC459: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC485; /* je: equal / zero */

loc_000BC462: ;
    ecx = edi;
    PUSH32(esp, 0x000BC469u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BC469: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(edi + 8) = 1;
    MEM32(edi) = 0x1C0A24;
    PUSH32(esp, 0x000BC47Eu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BC47E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BC485: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000BC48Fu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BC48F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC4A0
 * Original: 0x000BC4A0 - 0x000BC56D (205 bytes, 65 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC4A0: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BC4EA; /* je: equal / zero */

loc_000BC4AF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BC567; /* jne: not equal / not zero */

loc_000BC4B6: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B57C4);
    PUSH32(esp, 0x000BC4C3u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BC4C3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC567; /* jne: not equal / not zero */

loc_000BC4CE: ;
    MEM32(0x1DA948) = 1;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC4E1u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BC4E1: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BC4EA: ;
    ecx = MEM32(ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B57AC);
    PUSH32(esp, 0x000BC4F7u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BC4F7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC567; /* jne: not equal / not zero */

loc_000BC4FE: ;
    edx = MEM32(0x1D8624);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = 0x1D8620;
    PUSH32(esp, 0x000BC511u); RECOMP_ABI_CALL(0x000A1580u, sub_000A1580); /* call 0x000A1580 */

loc_000BC511: ;
    ecx = 0x1D8620;
    PUSH32(esp, 0x000BC51Bu); RECOMP_ABI_CALL(0x000A1720u, sub_000A1720); /* call 0x000A1720 */

loc_000BC51B: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000BC522u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BC522: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC552; /* je: equal / zero */

loc_000BC52B: ;
    ecx = esi;
    PUSH32(esp, 0x000BC532u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BC532: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0A48;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC548u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BC548: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BC552: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC55Du); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BC55D: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BC567: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC570
 * Original: 0x000BC570 - 0x000BC5FD (141 bytes, 51 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC570: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BC5A8; /* je: equal / zero */

loc_000BC57F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BC5F7; /* jne: not equal / not zero */

loc_000BC582: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BFEFC);
    PUSH32(esp, 0x000BC58Fu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BC58F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC5F7; /* jne: not equal / not zero */

loc_000BC596: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC59Fu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BC59F: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BC5A8: ;
    ecx = MEM32(ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1BFEFC);
    PUSH32(esp, 0x000BC5B5u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BC5B5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC5F7; /* jne: not equal / not zero */

loc_000BC5BC: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000BC5C3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BC5C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC5E3; /* je: equal / zero */

loc_000BC5CA: ;
    ecx = eax;
    PUSH32(esp, 0x000BC5D1u); RECOMP_ABI_CALL(0x000BC090u, sub_000BC090); /* call 0x000BC090 */

loc_000BC5D1: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC5DAu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BC5DA: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BC5E3: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC5EEu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BC5EE: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BC5F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC600
 * Original: 0x000BC600 - 0x000BC718 (280 bytes, 91 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC600: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC6A6; /* jne: not equal / not zero */

loc_000BC60E: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BC6AF; /* je: equal / zero */

loc_000BC61E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BC712; /* jne: not equal / not zero */

loc_000BC625: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C0AB4);
    PUSH32(esp, 0x000BC632u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BC632: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC712; /* jne: not equal / not zero */

loc_000BC63D: ;
    MEM32(edi + 0x10) = 1;
    _fa = (uint32_t)(MEM32(0x1D8624)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1D8624), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BC674; /* jbe: below or equal (unsigned <=) */

loc_000BC64D: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000BC654u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BC654: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC69B; /* je: equal / zero */

loc_000BC65B: ;
    ecx = eax;
    PUSH32(esp, 0x000BC662u); RECOMP_ABI_CALL(0x000BC050u, sub_000BC050); /* call 0x000BC050 */

loc_000BC662: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC66Bu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BC66B: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BC674: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000BC67Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BC67B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC69B; /* je: equal / zero */

loc_000BC682: ;
    ecx = eax;
    PUSH32(esp, 0x000BC689u); RECOMP_ABI_CALL(0x000BC090u, sub_000BC090); /* call 0x000BC090 */

loc_000BC689: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC692u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BC692: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BC69B: ;
    ecx = MEM32(edi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC6A6u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BC6A6: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BC6AF: ;
    ecx = MEM32(ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1C0AB4);
    PUSH32(esp, 0x000BC6BCu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BC6BC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC712; /* jne: not equal / not zero */

loc_000BC6C3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    MEM32(edi + 0x10) = 1;
    PUSH32(esp, 0x000BC6D2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BC6D2: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC6FD; /* je: equal / zero */

loc_000BC6DB: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000BC6E4u); RECOMP_ABI_CALL(0x000BBEE0u, sub_000BBEE0); /* call 0x000BBEE0 */

loc_000BC6E4: ;
    MEM32(esi) = 0x1C0B3C;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC6F3u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BC6F3: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BC6FD: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC708u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BC708: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BC712: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC720
 * Original: 0x000BC720 - 0x000BC734 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC720: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x1C0B70;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000BC740
 * Original: 0x000BC740 - 0x000BC747 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC740(void)
{

loc_000BC740: ;
    MEM32(ecx) = 0x1C0B70;
    esp += 4; return; /* ret */

}

/**
 * sub_000BC750
 * Original: 0x000BC750 - 0x000BC798 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC750: ;
    eax = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax) = 0x1C0B90;
    ecx = eax + 0x10;
    esi = 5;
    /* nop */

loc_000BC770: ;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BC770; /* jne: not equal / not zero */

loc_000BC77B: ;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x40) = edx;
    MEM32(eax + 0x44) = edx;
    MEM32(eax + 0x48) = edx;
    MEM32(eax + 0x4C) = edx;
    MEM32(eax + 0x50) = edx;
    MEM32(eax + 0x54) = edx;
    MEM32(eax + 0x58) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BC7A0
 * Original: 0x000BC7A0 - 0x000BC7EC (76 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC7A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC7EA; /* jne: not equal / not zero */

loc_000BC7A9: ;
    eax = MEM32(esi + 0x58);
    MEM32(esi + 0x4C) = 0;
    _fa = (uint32_t)(MEM32(esi + eax * 8 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 8 + 0x14), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC7CE; /* jne: not equal / not zero */

loc_000BC7BA: ;
    ecx = MEM32(esi + eax * 8 + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000BC7C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC7C0u); } /* indirect call */
    }

loc_000BC7C3: ;
    ecx = MEM32(esi + 0x58);
    MEM32(esi + ecx * 8 + 0x14) = 1;

loc_000BC7CE: ;
    eax = MEM32(esi + 0x58);
    edx = MEM32(esi + 0x3C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x58) = eax;
    MEM32(esi + eax * 8 + 0x10) = edx;
    MEM32(esi + 0x44) = 0;
    MEM32(esi + 0x3C) = 0;

loc_000BC7EA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BC7F0
 * Original: 0x000BC7F0 - 0x000BC838 (72 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BC7F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC834; /* je: equal / zero */

loc_000BC7FB: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC80D; /* jne: not equal / not zero */

loc_000BC801: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000BC806u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC803u); } /* indirect call */
    }

loc_000BC806: ;
    MEM32(esi + 4) = 1;

loc_000BC80D: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC821; /* jne: not equal / not zero */

loc_000BC813: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000BC81Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC817u); } /* indirect call */
    }

loc_000BC81A: ;
    MEM32(esi + 4) = 0;

loc_000BC821: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC834; /* je: equal / zero */

loc_000BC827: ;
    eax = MEM32(ecx);
    POP32(esp, esi);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

loc_000BC834: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC840
 * Original: 0x000BC840 - 0x000BC846 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC840(void)
{

loc_000BC840: ;
    eax = 0x1C0BB0;
    esp += 4; return; /* ret */

}

/**
 * sub_000BC850
 * Original: 0x000BC850 - 0x000BC86D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC850: ;
    eax = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x1C0BBC;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000BC870
 * Original: 0x000BC870 - 0x000BC88F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC870: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C0BBC;
    if (TEST_Z(_fa, _fb)) goto loc_000BC889; /* je: equal / zero */

loc_000BC880: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC886u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000BC886: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BC889: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC890
 * Original: 0x000BC890 - 0x000BC8C8 (56 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC890(void)
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

loc_000BC890: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC8A7; /* je: equal / zero */

loc_000BC89D: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x10)); /* fadd dword ptr [ecx + 0x10] */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_000BC8A7: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC8BE; /* jne: not equal / not zero */

loc_000BC8AD: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

loc_000BC8BE: ;
    MEM32(ecx + 0xC) = 0;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BC8D0
 * Original: 0x000BC8D0 - 0x000BC8E1 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC8D0(void)
{

loc_000BC8D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC8F0
 * Original: 0x000BC8F0 - 0x000BC90F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC8F0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C0B70;
    if (TEST_Z(_fa, _fb)) goto loc_000BC909; /* je: equal / zero */

loc_000BC900: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC906u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000BC906: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BC909: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC910
 * Original: 0x000BC910 - 0x000BC992 (130 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC910: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x1C0B90;
    MEM32(edi + 0x54) = 1;
    esi = edi + 0x10;
    ebx = 5;
    /* nop */

loc_000BC930: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC968; /* je: equal / zero */

loc_000BC936: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC948; /* jne: not equal / not zero */

loc_000BC93C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000BC941u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC93Eu); } /* indirect call */
    }

loc_000BC941: ;
    MEM32(esi + 4) = 1;

loc_000BC948: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC95C; /* jne: not equal / not zero */

loc_000BC94E: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000BC955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC952u); } /* indirect call */
    }

loc_000BC955: ;
    MEM32(esi + 4) = 0;

loc_000BC95C: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC968; /* je: equal / zero */

loc_000BC962: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000BC968u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC966u); } /* indirect call */
    }

loc_000BC968: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BC930; /* jne: not equal / not zero */

loc_000BC96E: ;
    ecx = MEM32(edi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC97B; /* je: equal / zero */

loc_000BC975: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000BC97Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC979u); } /* indirect call */
    }

loc_000BC97B: ;
    ecx = MEM32(edi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC988; /* je: equal / zero */

loc_000BC982: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000BC988u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC986u); } /* indirect call */
    }

loc_000BC988: ;
    MEM32(edi) = 0x1C0B70;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BC9A0
 * Original: 0x000BC9A0 - 0x000BCA0E (110 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC9A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x48);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC9DC; /* jne: not equal / not zero */

loc_000BC9AE: ;
    eax = MEM32(esi + 0x58);
    ecx = esi + eax * 8 + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0x4C) = edi;
    PUSH32(esp, 0x000BC9C0u); RECOMP_ABI_CALL(0x000BC7F0u, sub_000BC7F0); /* call 0x000BC7F0 */

loc_000BC9C0: ;
    edx = MEM32(esi + 0x58);
    MEM32(esi + edx * 8 + 0x10) = edi;
    eax = MEM32(esi + 0x58);
    MEM32(esi + eax * 8 + 0x14) = edi;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BC9D9; /* jbe: below or equal (unsigned <=) */

loc_000BC9D5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x58) = eax;

loc_000BC9D9: ;
    MEM32(esi + 0x48) = edi;

loc_000BC9DC: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCA0B; /* jne: not equal / not zero */

loc_000BC9E2: ;
    ecx = MEM32(esi + 0x58);
    edx = esi + ecx * 8 + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi + 0x4C) = edi;
    PUSH32(esp, 0x000BC9F4u); RECOMP_ABI_CALL(0x000BC7F0u, sub_000BC7F0); /* call 0x000BC7F0 */

loc_000BC9F4: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(esi + 0x58);
    MEM32(esi + eax * 8 + 0x10) = ecx;
    edx = MEM32(esi + 0x58);
    MEM32(esi + edx * 8 + 0x14) = edi;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x38) = edi;

loc_000BCA0B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BCA10
 * Original: 0x000BCA10 - 0x000BCA4D (61 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCA10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000BCA28; /* jne: not equal / not zero */

loc_000BCA1C: ;
    POP32(esp, edi);
    MEM32(esi + 0x48) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BCA28: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCA3B; /* jne: not equal / not zero */

loc_000BCA2E: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCA3B; /* je: equal / zero */

loc_000BCA35: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000BCA3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BCA39u); } /* indirect call */
    }

loc_000BCA3B: ;
    MEM32(edi + 4) = esi;
    MEM32(esi + 0x38) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x40) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BCA50
 * Original: 0x000BCA50 - 0x000BCA7B (43 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCA50: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCA66; /* jne: not equal / not zero */

loc_000BCA59: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCA66; /* je: equal / zero */

loc_000BCA60: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000BCA66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BCA64u); } /* indirect call */
    }

loc_000BCA66: ;
    eax = MEM32(esp + 8);
    MEM32(eax + 4) = esi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x44) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BCA80
 * Original: 0x000BCA80 - 0x000BCA9E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCA80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BCA88u); RECOMP_ABI_CALL(0x000BC910u, sub_000BC910); /* call 0x000BC910 */

loc_000BCA88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BCA98; /* je: equal / zero */

loc_000BCA8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BCA95u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000BCA95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BCA98: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BCAA0
 * Original: 0x000BCAA0 - 0x000BCB7B (219 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCAA0(void)
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

loc_000BCAA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BCAA9u); RECOMP_ABI_CALL(0x000BC9A0u, sub_000BC9A0); /* call 0x000BC9A0 */

loc_000BCAA9: ;
    eax = MEM32(esi + 0x44);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCAF2; /* jne: not equal / not zero */

loc_000BCAB5: ;
    eax = MEM32(esi + 0x58);
    MEM32(esi + 0x4C) = 0;
    _fa = (uint32_t)(MEM32(esi + eax * 8 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 8 + 0x14), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCAD6; /* jne: not equal / not zero */

loc_000BCAC6: ;
    ecx = MEM32(esi + eax * 8 + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000BCACFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BCACCu); } /* indirect call */
    }

loc_000BCACF: ;
    ecx = MEM32(esi + 0x58);
    MEM32(esi + ecx * 8 + 0x14) = ebx;

loc_000BCAD6: ;
    eax = MEM32(esi + 0x58);
    edx = MEM32(esi + 0x3C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x58) = eax;
    MEM32(esi + eax * 8 + 0x10) = edx;
    MEM32(esi + 0x44) = 0;
    MEM32(esi + 0x3C) = 0;

loc_000BCAF2: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esi + 0x58);
    ecx = MEM32(esi + eax * 8 + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCB5E; /* je: equal / zero */

loc_000BCB04: ;
    edx = MEM32(esi + eax * 8 + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCB18; /* jne: not equal / not zero */

loc_000BCB0C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000BCB11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BCB0Eu); } /* indirect call */
    }

loc_000BCB11: ;
    eax = MEM32(esi + 0x58);
    MEM32(esi + eax * 8 + 0x14) = ebx;

loc_000BCB18: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(MEM32(esi + eax * 8 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 8 + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCB35; /* jne: not equal / not zero */

loc_000BCB21: ;
    ecx = MEM32(esi + eax * 8 + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000BCB2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BCB27u); } /* indirect call */
    }

loc_000BCB2A: ;
    eax = MEM32(esi + 0x58);
    MEM32(esi + eax * 8 + 0x14) = 2;

loc_000BCB35: ;
    ecx = MEM32(esi + 0x58);
    ecx = MEM32(esi + ecx * 8 + 0x10);
    eax = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000BCB46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BCB43u); } /* indirect call */
    }

loc_000BCB46: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x4C)); /* fadd dword ptr [esi + 0x4c] */
    ecx = esi;
    MEMF(esi + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BCB57u); RECOMP_ABI_CALL(0x000BC9A0u, sub_000BC9A0); /* call 0x000BC9A0 */

loc_000BCB57: ;
    ecx = esi;
    PUSH32(esp, 0x000BCB5Eu); RECOMP_ABI_CALL(0x000BC7A0u, sub_000BC7A0); /* call 0x000BC7A0 */

loc_000BCB5E: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCB76; /* je: equal / zero */

loc_000BCB65: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCB76; /* jne: not equal / not zero */

loc_000BCB6C: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCB76; /* jne: not equal / not zero */

loc_000BCB73: ;
    MEM32(eax + 0x48) = ebx;

loc_000BCB76: ;
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
 * sub_000BCB80
 * Original: 0x000BCB80 - 0x000BCBA4 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCB80(void)
{

loc_000BCB80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000BCB89u); RECOMP_ABI_CALL(0x000BC750u, sub_000BC750); /* call 0x000BC750 */

loc_000BCB89: ;
    edi = esi + 0x5C;
    ecx = edi;
    PUSH32(esp, 0x000BCB93u); RECOMP_ABI_CALL(0x00119D20u, sub_00119D20); /* call 0x00119D20 */

loc_000BCB93: ;
    MEM32(edi) = 0x1C0BEC;
    POP32(esp, edi);
    MEM32(esi) = 0x1C0BCC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BCBB0
 * Original: 0x000BCBB0 - 0x000BCBCF (31 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BCBB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x5C;
    MEM32(esi) = 0x1C0BCC;
    MEM32(ecx) = 0x1C0BEC;
    PUSH32(esp, 0x000BCBC7u); RECOMP_ABI_CALL(0x00119CF0u, sub_00119CF0); /* call 0x00119CF0 */

loc_000BCBC7: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000BC910(); return; /* tail jmp 0x000BC910 */

}

/**
 * sub_000BCBD0
 * Original: 0x000BCBD0 - 0x000BCC10 (64 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCBD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BCBD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + -4);
    PUSH32(esp, edi);
    edi = MEM32(esi + eax * 8 + -76);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCC06; /* je: equal / zero */

loc_000BCBDF: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000BCBE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BCBE3u); } /* indirect call */
    }

loc_000BCBE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCC06; /* jne: not equal / not zero */

loc_000BCBEB: ;
    eax = MEM32(esi + -4);
    _fa = (uint32_t)(MEM32(esi + eax * 8 + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 8 + -72), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCC06; /* jne: not equal / not zero */

loc_000BCBF5: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000BCC01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BCBFEu); } /* indirect call */
    }

loc_000BCC01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BCC06: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_000BCC10(); return; /* fallthrough 0x000BCC10 */

}

/**
 * sub_000BCC10
 * Original: 0x000BCC10 - 0x000BCC18 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BCC10: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000BCC20(); return; /* tail jmp 0x000BCC20 */

}

/**
 * sub_000BCC20
 * Original: 0x000BCC20 - 0x000BCC54 (52 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCC20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x5C;
    MEM32(esi) = 0x1C0BCC;
    MEM32(ecx) = 0x1C0BEC;
    PUSH32(esp, 0x000BCC37u); RECOMP_ABI_CALL(0x00119CF0u, sub_00119CF0); /* call 0x00119CF0 */

loc_000BCC37: ;
    ecx = esi;
    PUSH32(esp, 0x000BCC3Eu); RECOMP_ABI_CALL(0x000BC910u, sub_000BC910); /* call 0x000BC910 */

loc_000BCC3E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BCC4E; /* je: equal / zero */

loc_000BCC45: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BCC4Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000BCC4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BCC4E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BCC60
 * Original: 0x000BCC60 - 0x000BCC84 (36 bytes, 11 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCC60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCC60: ;
    eax = MEM32(0x1D8634);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C0C28);
    PUSH32(esp, 5);
    PUSH32(esp, 0x000BCC72u); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000BCC72: ;
    ecx = MEM32(0x1DE810);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BCC83u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000BCC83: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BCC90
 * Original: 0x000BCC90 - 0x000BCCA3 (19 bytes, 5 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCC90(void)
{

loc_000BCC90: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0C28);
    PUSH32(esp, 0x000BCCA2u); RECOMP_ABI_CALL(0x000EBD00u, sub_000EBD00); /* call 0x000EBD00 */

loc_000BCCA2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BCCB0
 * Original: 0x000BCCB0 - 0x000BCCC9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCCB0(void)
{

loc_000BCCB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BCCB8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BCCB8: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0C3C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BCCD0
 * Original: 0x000BCCD0 - 0x000BCD0B (59 bytes, 16 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCCD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCCD0: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0x000BCCDDu); RECOMP_ABI_CALL(0x00013A40u, sub_00013A40); /* call 0x00013A40 */

loc_000BCCDD: ;
    ecx = MEM32(0x1D8634);
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(0x1D8634);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1BFD6C);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000BCCF9u); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000BCCF9: ;
    ecx = MEM32(0x1DE810);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BCD0Au); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000BCD0A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BCD10
 * Original: 0x000BCD10 - 0x000BCD54 (68 bytes, 20 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCD10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCD10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x1C0AB4);
    MEM32(esi + 0x1C) = 0;
    edi = MEM32(0x1DE810);
    PUSH32(esp, 7);
    PUSH32(esp, 0x000BCD31u); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000BCD31: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000BCD3Cu); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000BCD3C: ;
    POP32(esp, edi);
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 0x14) = 0;
    MEM32(esi + 0x18) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BCD60
 * Original: 0x000BCD60 - 0x000BCD8E (46 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCD60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BCD8C; /* jne: not equal / not zero */

loc_000BCD69: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCD8C; /* je: equal / zero */

loc_000BCD70: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, 0x000BCD85u); RECOMP_ABI_CALL(0x0008B540u, sub_0008B540); /* call 0x0008B540 */

loc_000BCD85: ;
    MEM32(esi + 0x10) = 2;

loc_000BCD8C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BCD90
 * Original: 0x000BCD90 - 0x000BCDC4 (52 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCD90(void)
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

loc_000BCD90: ;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCD9B; /* jne: not equal / not zero */

loc_000BCD96: ;
    g_seh_ebp = ebp; sub_000BBF90(); return; /* tail jmp 0x000BBF90 */

loc_000BCD9B: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x1C)); /* fadd dword ptr [ecx + 0x1c] */
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BCDC1; /* jne: not equal / not zero */

loc_000BCDB6: ;
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, 0x000BCDC1u); RECOMP_ABI_CALL(0x0008A900u, sub_0008A900); /* call 0x0008A900 */

loc_000BCDC1: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BCDD0
 * Original: 0x000BCDD0 - 0x000BCDE0 (16 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCDD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BCDD0: ;
    ecx = MEM32(ecx + 4);
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_000BCA10(); return; /* tail jmp 0x000BCA10 */

}

/**
 * sub_000BCDE0
 * Original: 0x000BCDE0 - 0x000BCE8A (170 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCDE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000BCDE9u); RECOMP_ABI_CALL(0x000BCB80u, sub_000BCB80); /* call 0x000BCB80 */

loc_000BCDE9: ;
    PUSH32(esp, 0x1C0CD0);
    ecx = esi;
    MEM32(esi) = 0x1C0CB0;
    MEM32(esi + 0x5C) = 0x1C0CA8;
    PUSH32(esp, 0x000BCE02u); RECOMP_ABI_CALL(0x0011E860u, sub_0011E860); /* call 0x0011E860 */

loc_000BCE02: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = 0x1D8620;
    MEM32(0x1D867C) = 1;
    PUSH32(esp, 0x000BCE1Au); RECOMP_ABI_CALL(0x000A1580u, sub_000A1580); /* call 0x000A1580 */

loc_000BCE1A: ;
    ecx = 0x1D8620;
    PUSH32(esp, 0x000BCE24u); RECOMP_ABI_CALL(0x000A15A0u, sub_000A15A0); /* call 0x000A15A0 */

loc_000BCE24: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x20);
    edx = MEM32(ecx + 4);
    eax = MEM32(0x1D8634);
    PUSH32(esp, 0x10);
    MEM32(eax + 0x40) = edx;
    PUSH32(esp, 0x000BCE3Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BCE3E: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCE5D; /* je: equal / zero */

loc_000BCE47: ;
    ecx = edi;
    PUSH32(esp, 0x000BCE4Eu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BCE4E: ;
    MEM32(edi + 8) = 1;
    MEM32(edi) = 0x1C0C04;
    goto loc_000BCE5F;

loc_000BCE5D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BCE5F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000BCE67u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BCE67: ;
    POP32(esp, edi);
    eax = esi;
    MEM32(0x1D865C) = 0x29A;
    MEM32(0x1D8664) = 0;
    MEM32(0x1D8654) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BCE90
 * Original: 0x000BCE90 - 0x000BCF33 (163 bytes, 57 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCE90: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BCECC; /* je: equal / zero */

loc_000BCE9F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BCF2D; /* jne: not equal / not zero */

loc_000BCEA6: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C0C28);
    PUSH32(esp, 0x000BCEB3u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BCEB3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCF2D; /* jne: not equal / not zero */

loc_000BCEBA: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BCEC3u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BCEC3: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BCECC: ;
    ecx = MEM32(ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1C0C28);
    PUSH32(esp, 0x000BCED9u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BCED9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCF2D; /* jne: not equal / not zero */

loc_000BCEE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000BCEE8u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BCEE8: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCF18; /* je: equal / zero */

loc_000BCEF1: ;
    ecx = esi;
    PUSH32(esp, 0x000BCEF8u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BCEF8: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0C3C;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BCF0Eu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BCF0E: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BCF18: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BCF23u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BCF23: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BCF2D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BCF40
 * Original: 0x000BCF40 - 0x000BD025 (229 bytes, 75 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCF40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BCFBB; /* je: equal / zero */

loc_000BCF50: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BD01E; /* jne: not equal / not zero */

loc_000BCF57: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BFD6C);
    PUSH32(esp, 0x000BCF64u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BCF64: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD01E; /* jne: not equal / not zero */

loc_000BCF6F: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000BCF76u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BCF76: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCFA6; /* je: equal / zero */

loc_000BCF7F: ;
    ecx = esi;
    PUSH32(esp, 0x000BCF86u); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BCF86: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0C04;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BCF9Cu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BCF9C: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BCFA6: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BCFB1u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BCFB1: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BCFBB: ;
    ecx = MEM32(ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1BFD6C);
    PUSH32(esp, 0x000BCFC8u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BCFC8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD01E; /* jne: not equal / not zero */

loc_000BCFCF: ;
    edx = MEM32(0x1D8634);
    eax = MEM32(edx + 0x38);
    ecx = MEM32(0x1D3F08);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BCFE7u); RECOMP_ABI_CALL(0x00013A30u, sub_00013A30); /* call 0x00013A30 */

loc_000BCFE7: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000BCFEEu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BCFEE: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCFA6; /* je: equal / zero */

loc_000BCFF7: ;
    ecx = esi;
    PUSH32(esp, 0x000BCFFEu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BCFFE: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0C60;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BD014u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BD014: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BD01E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BD030
 * Original: 0x000BD030 - 0x000BD044 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD030(void)
{

loc_000BD030: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x000BD03Au); RECOMP_ABI_CALL(0x000BBEE0u, sub_000BBEE0); /* call 0x000BBEE0 */

loc_000BD03A: ;
    MEM32(esi) = 0x1C0CDC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD050
 * Original: 0x000BD050 - 0x000BD160 (272 bytes, 94 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD050: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x000BD05Du); RECOMP_ABI_CALL(0x000474A0u, sub_000474A0); /* call 0x000474A0 */

loc_000BD05D: ;
    MEM32(eax + 0x148) = 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x14) = ebx;
    esi = MEM32(0x1D8654);
    PUSH32(esp, 0x100);
    MEM32(edi + 0x18) = esi;
    PUSH32(esp, 0x000BD07Fu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BD07F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD08F; /* je: equal / zero */

loc_000BD086: ;
    ecx = eax;
    PUSH32(esp, 0x000BD08Du); RECOMP_ABI_CALL(0x000BFC10u, sub_000BFC10); /* call 0x000BFC10 */

loc_000BD08D: ;
    goto loc_000BD091;

loc_000BD08F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BD091: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(0x1DA008) = eax;
    PUSH32(esp, 0x000BD09Eu); RECOMP_ABI_CALL(0x000BF8F0u, sub_000BF8F0); /* call 0x000BF8F0 */

loc_000BD09E: ;
    ecx = MEM32(0x1D3EF0);
    esi = MEM32(0x1D3EEC);
    PUSH32(esp, 0x000BD0AFu); RECOMP_ABI_CALL(0x0008A900u, sub_0008A900); /* call 0x0008A900 */

loc_000BD0AF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1BC9E4);
    MEM32(edi + 0x1C) = ebx;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000BD0BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD0BCu); } /* indirect call */
    }

loc_000BD0BF: ;
    eax = MEM32(edi + 0x18);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x1D3EF0);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000BD0DAu); RECOMP_ABI_CALL(0x0008A6F0u, sub_0008A6F0); /* call 0x0008A6F0 */

loc_000BD0DA: ;
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = ebx;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000BD0F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD0EDu); } /* indirect call */
    }

loc_000BD0F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD12E; /* jne: not equal / not zero */

loc_000BD0F4: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD142; /* je: equal / zero */

loc_000BD0FA: ;
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = ebx;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000BD10Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD108u); } /* indirect call */
    }

loc_000BD10B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD121; /* jne: not equal / not zero */

loc_000BD10F: ;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000BD121u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD11Eu); } /* indirect call */
    }

loc_000BD121: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1BC9E4);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000BD12Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD12Bu); } /* indirect call */
    }

loc_000BD12E: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD142; /* je: equal / zero */

loc_000BD134: ;
    MEM32(edi + 0x14) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BD142: ;
    PUSH32(esp, 0x000BD147u); RECOMP_ABI_CALL(0x000474A0u, sub_000474A0); /* call 0x000474A0 */

loc_000BD147: ;
    MEM32(eax + 0x148) = ebx;
    PUSH32(esp, 0x000BD152u); RECOMP_ABI_CALL(0x000BB4E0u, sub_000BB4E0); /* call 0x000BB4E0 */

loc_000BD152: ;
    MEM32(edi + 0x14) = 3;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BD160
 * Original: 0x000BD160 - 0x000BD1A9 (73 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD160: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BD189; /* je: equal / zero */

loc_000BD169: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BD1A7; /* jne: not equal / not zero */

loc_000BD16C: ;
    PUSH32(esp, 0x000BD171u); RECOMP_ABI_CALL(0x000474A0u, sub_000474A0); /* call 0x000474A0 */

loc_000BD171: ;
    MEM32(eax + 0x148) = 0;
    PUSH32(esp, 0x000BD180u); RECOMP_ABI_CALL(0x000BB4E0u, sub_000BB4E0); /* call 0x000BB4E0 */

loc_000BD180: ;
    MEM32(esi + 0x14) = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000BD189: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, 0x000BD1A0u); RECOMP_ABI_CALL(0x0008B930u, sub_0008B930); /* call 0x0008B930 */

loc_000BD1A0: ;
    MEM32(esi + 0x14) = 2;

loc_000BD1A7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD1B0
 * Original: 0x000BD1B0 - 0x000BD1F2 (66 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD1B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0x000BD1BBu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BD1BB: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD1E4; /* je: equal / zero */

loc_000BD1C4: ;
    ecx = esi;
    PUSH32(esp, 0x000BD1CBu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BD1CB: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0C84;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BD1E1u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BD1E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000BD1E4: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BD1EFu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BD1EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD200
 * Original: 0x000BD200 - 0x000BD388 (392 bytes, 123 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BD200: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD213; /* je: equal / zero */

loc_000BD20A: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BD213: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000BD381; /* ja: above (unsigned >) */

loc_000BD224: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xBD388); /* switch: 7 entries, 5 targets */
    if (_jt == 0x000BD22Bu) goto loc_000BD22B;
    if (_jt == 0x000BD287u) goto loc_000BD287;
    if (_jt == 0x000BD2DDu) goto loc_000BD2DD;
    if (_jt == 0x000BD35Fu) goto loc_000BD35F;
    if (_jt == 0x000BD381u) goto loc_000BD381;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000BD22B: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C0AB4);
    PUSH32(esp, 0x000BD238u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BD238: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD381; /* jne: not equal / not zero */

loc_000BD243: ;
    PUSH32(esp, 0x20);
    MEM32(esi + 0x1C) = 1;
    PUSH32(esp, 0x000BD251u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BD251: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD272; /* je: equal / zero */

loc_000BD258: ;
    ecx = eax;
    PUSH32(esp, 0x000BD25Fu); RECOMP_ABI_CALL(0x000BD030u, sub_000BD030); /* call 0x000BD030 */

loc_000BD25F: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BD268u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BD268: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BD272: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BD27Du); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BD27D: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BD287: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1C0AB4);
    PUSH32(esp, 0x000BD294u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BD294: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD381; /* jne: not equal / not zero */

loc_000BD29F: ;
    MEM32(esi + 0x1C) = 1;
    PUSH32(esp, 0x000BD2ABu); RECOMP_ABI_CALL(0x000474A0u, sub_000474A0); /* call 0x000474A0 */

loc_000BD2AB: ;
    PUSH32(esp, 0x10);
    MEM32(eax + 0x148) = 0;
    PUSH32(esp, 0x000BD2BCu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BD2BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD272; /* je: equal / zero */

loc_000BD2C3: ;
    ecx = eax;
    PUSH32(esp, 0x000BD2CAu); RECOMP_ABI_CALL(0x000BCCB0u, sub_000BCCB0); /* call 0x000BCCB0 */

loc_000BD2CA: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BD2D3u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BD2D3: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BD2DD: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1C0AB4);
    PUSH32(esp, 0x000BD2EAu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BD2EA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD381; /* jne: not equal / not zero */

loc_000BD2F5: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0x1C0AB4);
    PUSH32(esp, 0x000BD305u); RECOMP_ABI_CALL(0x000EBAD0u, sub_000EBAD0); /* call 0x000EBAD0 */

loc_000BD305: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD381; /* je: equal / zero */

loc_000BD309: ;
    ecx = eax;
    PUSH32(esp, 0x000BD310u); RECOMP_ABI_CALL(0x00060CC0u, sub_00060CC0); /* call 0x00060CC0 */

loc_000BD310: ;
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BD31Fu); RECOMP_ABI_CALL(0x0008A8E0u, sub_0008A8E0); /* call 0x0008A8E0 */

loc_000BD31F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD381; /* je: equal / zero */

loc_000BD323: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x1C0D08);
    PUSH32(esp, 0x191);
    PUSH32(esp, 0x000BD343u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD343: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000BD34Bu); RECOMP_ABI_CALL(0x0006A480u, sub_0006A480); /* call 0x0006A480 */

loc_000BD34B: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x10) = 1;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BD35F: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C0D08);
    PUSH32(esp, 0x000BD36Cu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BD36C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD381; /* jne: not equal / not zero */

loc_000BD373: ;
    eax = MEM32(edi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x14) = ecx;

loc_000BD381: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BD3B0
 * Original: 0x000BD3B0 - 0x000BD402 (82 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD3B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD3B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0D48);
    MEM32(ecx + 0x10) = 0;
    esi = MEM32(0x1DE810);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x000BD3CEu); RECOMP_ABI_CALL(0x00037920u, sub_00037920); /* call 0x00037920 */

loc_000BD3CE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BD3D9u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000BD3D9: ;
    ecx = MEM32(0x1D3F08);
    edx = MEM32(ecx + 0x20);
    ecx = MEM32(edx + 4);
    eax = MEM32(0x1D8634);
    MEM32(eax + 0x40) = ecx;
    PUSH32(esp, 4);
    ecx = 0x1D8620;
    MEM32(eax + 0x38) = 0;
    PUSH32(esp, 0x000BD400u); RECOMP_ABI_CALL(0x000A1940u, sub_000A1940); /* call 0x000A1940 */

loc_000BD400: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD410
 * Original: 0x000BD410 - 0x000BD423 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD410(void)
{

loc_000BD410: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C0D48);
    PUSH32(esp, 0x000BD422u); RECOMP_ABI_CALL(0x000EBD00u, sub_000EBD00); /* call 0x000EBD00 */

loc_000BD422: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD430
 * Original: 0x000BD430 - 0x000BD472 (66 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD430: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    edi = ecx;
    PUSH32(esp, 0x000BD43Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BD43B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD464; /* je: equal / zero */

loc_000BD444: ;
    ecx = esi;
    PUSH32(esp, 0x000BD44Bu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BD44B: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1C0D24;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BD461u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BD461: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000BD464: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BD46Fu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BD46F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD480
 * Original: 0x000BD480 - 0x000BD504 (132 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD480: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000BD489u); RECOMP_ABI_CALL(0x000BCB80u, sub_000BCB80); /* call 0x000BCB80 */

loc_000BD489: ;
    PUSH32(esp, 0x1C0D84);
    ecx = esi;
    MEM32(esi) = 0x1C0D64;
    MEM32(esi + 0x5C) = 0x1C0D5C;
    PUSH32(esp, 0x000BD4A2u); RECOMP_ABI_CALL(0x0011E860u, sub_0011E860); /* call 0x0011E860 */

loc_000BD4A2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = 0x1D8620;
    MEM32(0x1D867C) = 0xA;
    PUSH32(esp, 0x000BD4BAu); RECOMP_ABI_CALL(0x000A1580u, sub_000A1580); /* call 0x000A1580 */

loc_000BD4BA: ;
    ecx = 0x1D8620;
    PUSH32(esp, 0x000BD4C4u); RECOMP_ABI_CALL(0x000A15A0u, sub_000A15A0); /* call 0x000A15A0 */

loc_000BD4C4: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000BD4CBu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BD4CB: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD4F5; /* je: equal / zero */

loc_000BD4D4: ;
    ecx = edi;
    PUSH32(esp, 0x000BD4DBu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_000BD4DB: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(edi + 8) = 1;
    MEM32(edi) = 0x1C0D24;
    PUSH32(esp, 0x000BD4F0u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BD4F0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000BD4F5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000BD4FFu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BD4FF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD510
 * Original: 0x000BD510 - 0x000BD518 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BD510: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000B3430(); return; /* tail jmp 0x000B3430 */

}

/**
 * sub_000BD520
 * Original: 0x000BD520 - 0x000BD662 (322 bytes, 103 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD520: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD533; /* je: equal / zero */

loc_000BD52A: ;
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BD533: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BD578; /* je: equal / zero */

loc_000BD540: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BD571; /* jne: not equal / not zero */

loc_000BD543: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C0D48);
    PUSH32(esp, 0x000BD550u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BD550: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD571; /* jne: not equal / not zero */

loc_000BD557: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    MEM32(edi + 0x10) = 1;
    PUSH32(esp, 0x000BD567u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BD567: ;
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BD571: ;
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BD578: ;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B5A1C);
    PUSH32(esp, 0x000BD586u); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BD586: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD5DF; /* jne: not equal / not zero */

loc_000BD58D: ;
    MEM32(edi + 0x10) = 1;
    PUSH32(esp, 0x1D8620);
    PUSH32(esp, eax);
    MEM32(0x1D867C) = 0xA;
    MEM32(0x1D8654) = 0x12;
    PUSH32(esp, 0x000BD5B3u); RECOMP_ABI_CALL(0x000BB4B0u, sub_000BB4B0); /* call 0x000BB4B0 */

loc_000BD5B3: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000BD5BAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BD5BA: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD5D4; /* je: equal / zero */

loc_000BD5C3: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000BD5CCu); RECOMP_ABI_CALL(0x000BBEE0u, sub_000BBEE0); /* call 0x000BBEE0 */

loc_000BD5CC: ;
    MEM32(esi) = 0x1C0D90;
    goto loc_000BD5D6;

loc_000BD5D4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BD5D6: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BD5DFu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BD5DF: ;
    edx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1B5A04);
    PUSH32(esp, 0x000BD5ECu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_000BD5EC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD657; /* jne: not equal / not zero */

loc_000BD5F3: ;
    MEM32(edi + 0x10) = 1;
    PUSH32(esp, 0x1D8620);
    PUSH32(esp, eax);
    MEM32(0x1D867C) = 0xB;
    MEM32(0x1D8654) = 0x11;
    PUSH32(esp, 0x000BD619u); RECOMP_ABI_CALL(0x000BB4B0u, sub_000BB4B0); /* call 0x000BB4B0 */

loc_000BD619: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000BD620u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000BD620: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD64C; /* je: equal / zero */

loc_000BD629: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000BD632u); RECOMP_ABI_CALL(0x000BBEE0u, sub_000BBEE0); /* call 0x000BBEE0 */

loc_000BD632: ;
    MEM32(esi) = 0x1C0D90;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BD641u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BD641: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000BD64C: ;
    ecx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BD657u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_000BD657: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BD670
 * Original: 0x000BD670 - 0x000BD687 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BD670: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD67F; /* jne: not equal / not zero */

loc_000BD67A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000BD67Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD67Cu); } /* indirect call */
    }

loc_000BD67F: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_000BD690
 * Original: 0x000BD690 - 0x000BD6B0 (32 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BD690: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x10) = 0xFFFFFFFFu;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_000BD6B0(); return; /* fallthrough 0x000BD6B0 */

}

/**
 * sub_000BD6B0
 * Original: 0x000BD6B0 - 0x000BD6F4 (68 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD6B0: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BD6E3; /* je: equal / zero */

loc_000BD6B8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BD6D2; /* je: equal / zero */

loc_000BD6BB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BD6C1; /* je: equal / zero */

loc_000BD6BE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000BD6C1: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x316);
    PUSH32(esp, 0x000BD6D1u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD6D1: ;
    esp += 4; return; /* ret */

loc_000BD6D2: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x31A);
    PUSH32(esp, 0x000BD6E2u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD6E2: ;
    esp += 4; return; /* ret */

loc_000BD6E3: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x31E);
    PUSH32(esp, 0x000BD6F3u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD6F3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD700
 * Original: 0x000BD700 - 0x000BD763 (99 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD700: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD71F; /* je: equal / zero */

loc_000BD707: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD71F; /* je: equal / zero */

loc_000BD70E: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x314);
    PUSH32(esp, 0x000BD71Eu); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD71E: ;
    esp += 4; return; /* ret */

loc_000BD71F: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BD752; /* je: equal / zero */

loc_000BD727: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BD741; /* je: equal / zero */

loc_000BD72A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BD730; /* je: equal / zero */

loc_000BD72D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000BD730: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x316);
    PUSH32(esp, 0x000BD740u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD740: ;
    esp += 4; return; /* ret */

loc_000BD741: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x31A);
    PUSH32(esp, 0x000BD751u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD751: ;
    esp += 4; return; /* ret */

loc_000BD752: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x31E);
    PUSH32(esp, 0x000BD762u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD762: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD770
 * Original: 0x000BD770 - 0x000BD7A1 (49 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD770: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x10) = 0xFFFFFFFFu;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx + 0x3C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x000BD7A0u); RECOMP_ABI_CALL(0x0001D0C0u, sub_0001D0C0); /* call 0x0001D0C0 */

loc_000BD7A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD7B0
 * Original: 0x000BD7B0 - 0x000BD832 (130 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD7B0: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD7CF; /* je: equal / zero */

loc_000BD7B7: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD7CF; /* je: equal / zero */

loc_000BD7BE: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x314);
    PUSH32(esp, 0x000BD7CEu); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD7CE: ;
    esp += 4; return; /* ret */

loc_000BD7CF: ;
    eax = MEM32(ecx + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD7EE; /* jne: not equal / not zero */

loc_000BD7D6: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD7EE; /* je: equal / zero */

loc_000BD7DD: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x313);
    PUSH32(esp, 0x000BD7EDu); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD7ED: ;
    esp += 4; return; /* ret */

loc_000BD7EE: ;
    ecx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BD821; /* je: equal / zero */

loc_000BD7F6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BD810; /* je: equal / zero */

loc_000BD7F9: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BD7FF; /* je: equal / zero */

loc_000BD7FC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000BD7FF: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x316);
    PUSH32(esp, 0x000BD80Fu); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD80F: ;
    esp += 4; return; /* ret */

loc_000BD810: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x31A);
    PUSH32(esp, 0x000BD820u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD820: ;
    esp += 4; return; /* ret */

loc_000BD821: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x31E);
    PUSH32(esp, 0x000BD831u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD831: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD840
 * Original: 0x000BD840 - 0x000BD85C (28 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD840: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x10) = 0xFFFFFFFFu;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD860
 * Original: 0x000BD860 - 0x000BD8E2 (130 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD860: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD87F; /* je: equal / zero */

loc_000BD867: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD87F; /* je: equal / zero */

loc_000BD86E: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x314);
    PUSH32(esp, 0x000BD87Eu); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD87E: ;
    esp += 4; return; /* ret */

loc_000BD87F: ;
    eax = MEM32(ecx + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD89E; /* jne: not equal / not zero */

loc_000BD886: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD89E; /* je: equal / zero */

loc_000BD88D: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x31D);
    PUSH32(esp, 0x000BD89Du); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD89D: ;
    esp += 4; return; /* ret */

loc_000BD89E: ;
    ecx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BD8D1; /* je: equal / zero */

loc_000BD8A6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BD8C0; /* je: equal / zero */

loc_000BD8A9: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BD8AF; /* je: equal / zero */

loc_000BD8AC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000BD8AF: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x316);
    PUSH32(esp, 0x000BD8BFu); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD8BF: ;
    esp += 4; return; /* ret */

loc_000BD8C0: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x31A);
    PUSH32(esp, 0x000BD8D0u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD8D0: ;
    esp += 4; return; /* ret */

loc_000BD8D1: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x31E);
    PUSH32(esp, 0x000BD8E1u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD8E1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD8F0
 * Original: 0x000BD8F0 - 0x000BD972 (130 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD8F0: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD90F; /* je: equal / zero */

loc_000BD8F7: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD90F; /* je: equal / zero */

loc_000BD8FE: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x314);
    PUSH32(esp, 0x000BD90Eu); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD90E: ;
    esp += 4; return; /* ret */

loc_000BD90F: ;
    eax = MEM32(ecx + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD92E; /* jne: not equal / not zero */

loc_000BD916: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD92E; /* je: equal / zero */

loc_000BD91D: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x31B);
    PUSH32(esp, 0x000BD92Du); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD92D: ;
    esp += 4; return; /* ret */

loc_000BD92E: ;
    ecx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BD961; /* je: equal / zero */

loc_000BD936: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BD950; /* je: equal / zero */

loc_000BD939: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BD93F; /* je: equal / zero */

loc_000BD93C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000BD93F: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x316);
    PUSH32(esp, 0x000BD94Fu); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD94F: ;
    esp += 4; return; /* ret */

loc_000BD950: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x31A);
    PUSH32(esp, 0x000BD960u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD960: ;
    esp += 4; return; /* ret */

loc_000BD961: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x31E);
    PUSH32(esp, 0x000BD971u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD971: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD980
 * Original: 0x000BD980 - 0x000BDA02 (130 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD980: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD99F; /* je: equal / zero */

loc_000BD987: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD99F; /* je: equal / zero */

loc_000BD98E: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x314);
    PUSH32(esp, 0x000BD99Eu); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD99E: ;
    esp += 4; return; /* ret */

loc_000BD99F: ;
    eax = MEM32(ecx + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD9BE; /* jne: not equal / not zero */

loc_000BD9A6: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD9BE; /* je: equal / zero */

loc_000BD9AD: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x312);
    PUSH32(esp, 0x000BD9BDu); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD9BD: ;
    esp += 4; return; /* ret */

loc_000BD9BE: ;
    ecx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BD9F1; /* je: equal / zero */

loc_000BD9C6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BD9E0; /* je: equal / zero */

loc_000BD9C9: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BD9CF; /* je: equal / zero */

loc_000BD9CC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000BD9CF: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x316);
    PUSH32(esp, 0x000BD9DFu); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD9DF: ;
    esp += 4; return; /* ret */

loc_000BD9E0: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x31A);
    PUSH32(esp, 0x000BD9F0u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BD9F0: ;
    esp += 4; return; /* ret */

loc_000BD9F1: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x31E);
    PUSH32(esp, 0x000BDA01u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BDA01: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BDA10
 * Original: 0x000BDA10 - 0x000BDA7A (106 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDA10: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDA36; /* je: equal / zero */

loc_000BDA17: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDA36; /* je: equal / zero */

loc_000BDA1E: ;
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BDA36; /* jne: not equal / not zero */

loc_000BDA25: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x314);
    PUSH32(esp, 0x000BDA35u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BDA35: ;
    esp += 4; return; /* ret */

loc_000BDA36: ;
    ecx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BDA69; /* je: equal / zero */

loc_000BDA3E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BDA58; /* je: equal / zero */

loc_000BDA41: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000BDA47; /* je: equal / zero */

loc_000BDA44: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000BDA47: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x316);
    PUSH32(esp, 0x000BDA57u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BDA57: ;
    esp += 4; return; /* ret */

loc_000BDA58: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x31A);
    PUSH32(esp, 0x000BDA68u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BDA68: ;
    esp += 4; return; /* ret */

loc_000BDA69: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x31E);
    PUSH32(esp, 0x000BDA79u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000BDA79: ;
    esp += 4; return; /* ret */

}
