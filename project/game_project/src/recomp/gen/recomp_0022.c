/**
 * ATV: Quad Power Racing 2 - Recompiled code chunk 22
 * Functions: 250 (0x00117A40 - 0x00121B80)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00117A40
 * Original: 0x00117A40 - 0x00117A60 (32 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117A40: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C5454;
    if (TEST_Z(_fa, _fb)) goto loc_00117A59; /* je: equal / zero */

loc_00117A50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00117A56u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00117A56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00117A59: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00117A60(); return; /* fallthrough 0x00117A60 */

}

/**
 * sub_00117A60
 * Original: 0x00117A60 - 0x00117AD3 (115 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117A60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2228);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = ebp;
    PUSH32(esp, 0x00117A7Fu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00117A7F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117AC1; /* je: equal / zero */

loc_00117A86: ;
    ebx = eax + 4;
    MEM32(eax) = edi;
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00117AAC; /* jl: less (signed <) */

loc_00117A95: ;
    ebp = eax + 1;

loc_00117A98: ;
    ecx = esi;
    PUSH32(esp, 0x00117A9Fu); RECOMP_ABI_CALL(0x00128BC0u, sub_00128BC0); /* call 0x00128BC0 */

loc_00117A9F: ;
    _fb = (uint32_t)(0x2228) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2228;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00117A98; /* jne: not equal / not zero */

loc_00117AA8: ;
    ebp = MEM32(esp + 0x10);

loc_00117AAC: ;
    POP32(esp, esi);
    MEM32(ebp + 8) = edi;
    POP32(esp, edi);
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 0xC) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00117AC1: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 8) = edi;
    POP32(esp, edi);
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 0xC) = ebx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00117AE0
 * Original: 0x00117AE0 - 0x00117B53 (115 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117AE0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00117B37; /* je: equal / zero */

loc_00117AED: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, ebp);
    ebp = edi + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2228);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00117B20; /* js: sign (negative) */

loc_00117B02: ;
    edi = eax + 1;
    goto loc_00117B10;

    /* nop */
    edi = edi;

loc_00117B10: ;
    _fb = (uint32_t)(0x2228) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x2228;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x00117B1Du); RECOMP_ABI_CALL(0x00128C20u, sub_00128C20); /* call 0x00128C20 */

loc_00117B1D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00117B10; /* jne: not equal / not zero */

loc_00117B20: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00117B2E; /* je: equal / zero */

loc_00117B25: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00117B2Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00117B2B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00117B2E: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00117B37: ;
    ecx = edi;
    PUSH32(esp, 0x00117B3Eu); RECOMP_ABI_CALL(0x00128C20u, sub_00128C20); /* call 0x00128C20 */

loc_00117B3E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00117B4C; /* je: equal / zero */

loc_00117B43: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00117B49u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00117B49: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00117B4C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00117B60
 * Original: 0x00117B60 - 0x00117BC0 (96 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117B60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x10;
    ebp = 4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00117B70: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117B84; /* je: equal / zero */

loc_00117B76: ;
    ecx = MEM32(0x1DE460);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00117B82u); RECOMP_ABI_CALL(0x000ECFB0u, sub_000ECFB0); /* call 0x000ECFB0 */

loc_00117B82: ;
    MEM32(esi) = ebx;

loc_00117B84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00117B70; /* jne: not equal / not zero */

loc_00117B8A: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117BB5; /* je: equal / zero */

loc_00117B91: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00117BAC; /* je: equal / zero */

loc_00117B9B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00117BA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00117B9Fu); } /* indirect call */
    }

loc_00117BA1: ;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00117BAC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00117BB2u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00117BB2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00117BB5: ;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00117BC0
 * Original: 0x00117BC0 - 0x00117C08 (72 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117BC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = MEM32(esi + edi * 4 + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117BE4; /* je: equal / zero */

loc_00117BD0: ;
    ecx = MEM32(0x1DE460);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00117BDCu); RECOMP_ABI_CALL(0x000ECFB0u, sub_000ECFB0); /* call 0x000ECFB0 */

loc_00117BDC: ;
    MEM32(esi + edi * 4 + 0x10) = 0;

loc_00117BE4: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00117BFFu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00117BFF: ;
    MEM32(esi + edi * 4 + 0x10) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00117C10
 * Original: 0x00117C10 - 0x00117C5B (75 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117C10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00117C56; /* jle: less or equal (signed <=) */

loc_00117C1D: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00117C30;

    /* nop */
    edi = edi;

loc_00117C30: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx + edi + 0x221C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117C46; /* je: equal / zero */

loc_00117C40: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00117C46u); RECOMP_ABI_CALL(0x00128C60u, sub_00128C60); /* call 0x00128C60 */

loc_00117C46: ;
    eax = MEM32(esi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2228) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2228;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117C30; /* jl: less (signed <) */

loc_00117C54: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00117C56: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00117C60
 * Original: 0x00117C60 - 0x00117CE0 (128 bytes, 40 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117C60(void)
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

loc_00117C60: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00117C83; /* jle: less or equal (signed <=) */

loc_00117C6B: ;
    edi = MEM32(ecx + 4);
    eax = edi + 0x221C;

loc_00117C74: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117C8A; /* je: equal / zero */

loc_00117C79: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2228) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2228;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117C74; /* jl: less (signed <) */

loc_00117C83: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

loc_00117C8A: ;
    eax = MEM32(esp + 0xC);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2228);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    esi = MEM32(esp + 0x10);
    MEM32(edx + edi + 0x2214) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + eax + 0x2218) = esi;
    eax = MEM32(ecx + 4);
    esi = MEM32(esp + 0x18);
    MEM32(edx + eax + 0x2224) = esi;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00117CD6; /* jnp: not parity */

loc_00117CC8: ;
    eax = MEM32(ecx + 4);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(edx + eax + 0x2220) = (float)fp_top(); fp_pop(); /* fstp */

loc_00117CD6: ;
    eax = MEM32(ecx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00117CE0
 * Original: 0x00117CE0 - 0x00117D34 (84 bytes, 31 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117CE0: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_00117D01; /* je: equal / zero */

loc_00117CF1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x2214)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x2214) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117D01; /* jne: not equal / not zero */

loc_00117CF9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x2218)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x2218) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117D1A; /* je: equal / zero */

loc_00117D01: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00117D12u); RECOMP_ABI_CALL(0x00117C60u, sub_00117C60); /* call 0x00117C60 */

loc_00117D12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117D1A; /* jne: not equal / not zero */

loc_00117D16: ;
    POP32(esp, esi);
    esp += 36; return; /* ret 32 */

loc_00117D1A: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00117D30u); RECOMP_ABI_CALL(0x00128CD0u, sub_00128CD0); /* call 0x00128CD0 */

loc_00117D30: ;
    POP32(esp, esi);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00117D40
 * Original: 0x00117D40 - 0x00117E60 (288 bytes, 87 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117D40: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00117D4Eu); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00117D4E: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00117D56u); RECOMP_ABI_CALL(0x0001D270u, sub_0001D270); /* call 0x0001D270 */

loc_00117D56: ;
    eax = MEM32(0x1DC428);
    esi = 1;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117D7F; /* je: equal / zero */

loc_00117D67: ;
    eax = MEM32(0x1A50F0);
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1DC428) = esi;
    MEM32(0x1A50F0) = eax;
    MEM32(0x1A2EA0) = esi;

loc_00117D7F: ;
    _fa = (uint32_t)(MEM32(0x1DC3CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC3CC), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117D9F; /* je: equal / zero */

loc_00117D87: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = ebp;
    PUSH32(esp, 0x00117D99u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00117D99: ;
    MEM32(0x1A51F8) = ebp;

loc_00117D9F: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = 0x1DE768;
    PUSH32(esp, 0x00117DAEu); RECOMP_ABI_CALL(0x000192E0u, sub_000192E0); /* call 0x000192E0 */

loc_00117DAE: ;
    edx = esp + 0x14;
    ecx = 0x60;
    PUSH32(esp, 0x00117DBCu); RECOMP_ABI_CALL(0x00195820u, sub_00195820); /* call 0x00195820 */

loc_00117DBC: ;
    ecx = edi + 0x10;
    MEM32(esp + 0x10) = ecx;

loc_00117DC3: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117DD2; /* jne: not equal / not zero */

loc_00117DCD: ;
    eax = MEM32(0x1DE3DC);

loc_00117DD2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00117DDAu); RECOMP_ABI_CALL(0x000E6A00u, sub_000E6A00); /* call 0x000E6A00 */

loc_00117DDA: ;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00117E18; /* jle: less or equal (signed <=) */

loc_00117DE6: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00117DF0;

    /* nop */

loc_00117DF0: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + esi + 0x2224);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117E05; /* jne: not equal / not zero */

loc_00117E00: ;
    PUSH32(esp, 0x00117E05u); RECOMP_ABI_CALL(0x00128EA0u, sub_00128EA0); /* call 0x00128EA0 */

loc_00117E05: ;
    eax = MEM32(edi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2228) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2228;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117DF0; /* jl: less (signed <) */

loc_00117E13: ;
    esi = 1;

loc_00117E18: ;
    ecx = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00117DC3; /* jl: less (signed <) */

loc_00117E29: ;
    eax = MEM32(0x1DC3CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117E4A; /* jne: not equal / not zero */

loc_00117E32: ;
    edx = esi;
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = esi;
    PUSH32(esp, 0x00117E44u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00117E44: ;
    MEM32(0x1A51F8) = esi;

loc_00117E4A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00117E51u); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_00117E51: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0012AF20(); return; /* tail jmp 0x0012AF20 */

}

/**
 * sub_00117E60
 * Original: 0x00117E60 - 0x00117E81 (33 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117E60: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117E7E; /* jl: less (signed <) */

loc_00117E69: ;
    ecx = MEM32(ecx + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 4));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    PUSH32(esp, 0x00117E7Eu); RECOMP_ABI_CALL(0x001A0530u, sub_001A0530); /* call 0x001A0530 */

loc_00117E7E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00117E90
 * Original: 0x00117E90 - 0x00117EB5 (37 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117E90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117E90: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 8));
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00117EACu); RECOMP_ABI_CALL(0x00196890u, sub_00196890); /* call 0x00196890 */

loc_00117EAC: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x34);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00117EC0
 * Original: 0x00117EC0 - 0x00117ECB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117EC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117EC0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00117ED0
 * Original: 0x00117ED0 - 0x00117EE3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117ED0: ;
    PUSH32(esp, esi);
    esi = ecx + 4;
    ecx = esi;
    PUSH32(esp, 0x00117EDBu); RECOMP_ABI_CALL(0x00123230u, sub_00123230); /* call 0x00123230 */

loc_00117EDB: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00123230(); return; /* tail jmp 0x00123230 */

}

/**
 * sub_00117EF0
 * Original: 0x00117EF0 - 0x00117F78 (136 bytes, 54 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117EF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = ecx;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ebx + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00117F19; /* je: equal / zero */

loc_00117F08: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117F12; /* jne: not equal / not zero */

loc_00117F0D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117F19; /* je: equal / zero */

loc_00117F12: ;
    ecx = edi;
    PUSH32(esp, 0x00117F19u); RECOMP_ABI_CALL(0x00123230u, sub_00123230); /* call 0x00123230 */

loc_00117F19: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    MEM32(ebx + 0xC) = esi;
    MEM32(ebx + 0x10) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_00117F6C; /* jne: not equal / not zero */

loc_00117F24: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)ebp);
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = esi;
    MEM32(edi + 4) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00117F37u); RECOMP_ABI_CALL(0x00196840u, sub_00196840); /* call 0x00196840 */

loc_00117F37: ;
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
    if ((_fa == 0)) goto loc_00117F6C; /* je: equal / zero */

loc_00117F4B: ;
    PUSH32(esp, 0x1C3E74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00117F56u); RECOMP_ABI_CALL(0x000E36B0u, sub_000E36B0); /* call 0x000E36B0 */

loc_00117F56: ;
    PUSH32(esp, 0x1C5460);
    PUSH32(esp, 0x00117F60u); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_00117F60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00117F6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00117F80
 * Original: 0x00117F80 - 0x00118193 (531 bytes, 156 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117F80: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = esp + 0x14;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = 0x1DE768;
    MEM32(edi) = ebp;
    PUSH32(esp, 0x00117F9Cu); RECOMP_ABI_CALL(0x000192E0u, sub_000192E0); /* call 0x000192E0 */

loc_00117F9C: ;
    edx = esp + 0x14;
    ecx = 0x60;
    PUSH32(esp, 0x00117FAAu); RECOMP_ABI_CALL(0x00195820u, sub_00195820); /* call 0x00195820 */

loc_00117FAA: ;
    ecx = MEM32(esp + 0x58);
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117FB8; /* je: equal / zero */

loc_00117FB5: ;
    PUSH32(esp, eax);
    goto loc_00117FBF;

loc_00117FB8: ;
    edx = MEM32(0x1DE3DC);
    PUSH32(esp, edx);

loc_00117FBF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00117FC5u); RECOMP_ABI_CALL(0x000E6A00u, sub_000E6A00); /* call 0x000E6A00 */

loc_00117FC5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00117FD3u); RECOMP_ABI_CALL(0x000E5430u, sub_000E5430); /* call 0x000E5430 */

loc_00117FD3: ;
    MEM32(0x1DF760) = ebp;
    MEM32(0x1DF438) = ebp;
    PUSH32(esp, 0x00117FE4u); RECOMP_ABI_CALL(0x000F95A0u, sub_000F95A0); /* call 0x000F95A0 */

loc_00117FE4: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00117FEBu); RECOMP_ABI_CALL(0x000FB660u, sub_000FB660); /* call 0x000FB660 */

loc_00117FEB: ;
    eax = MEM32(0x1DE3E8);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118003; /* je: equal / zero */

loc_00117FF7: ;
    PUSH32(esp, ebp);
    MEM32(0x1DE3E8) = ebp;
    PUSH32(esp, 0x00118003u); RECOMP_ABI_CALL(0x001931B0u, sub_001931B0); /* call 0x001931B0 */

loc_00118003: ;
    _fa = (uint32_t)(MEM32(0x1DC3CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC3CC), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118023; /* je: equal / zero */

loc_0011800B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = ebp;
    PUSH32(esp, 0x0011801Du); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0011801D: ;
    MEM32(0x1A51F8) = ebp;

loc_00118023: ;
    eax = MEM32(0x1DC444);
    esi = 0x203;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118049; /* je: equal / zero */

loc_00118031: ;
    edx = esi;
    ecx = 0x40354;
    MEM32(0x1DC444) = esi;
    PUSH32(esp, 0x00118043u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00118043: ;
    MEM32(0x1A51DC) = esi;

loc_00118049: ;
    ecx = MEM32(0x1DC428);
    eax = 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    ebx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00118075; /* je: equal / zero */

loc_0011805D: ;
    ecx = MEM32(0x1A50F0);
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1DC428) = eax;
    MEM32(0x1A50F0) = ecx;
    MEM32(0x1A2EA0) = eax;

loc_00118075: ;
    _fa = (uint32_t)(MEM32(0x1DC368)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC368), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118095; /* je: equal / zero */

loc_0011807D: ;
    eax = MEM32(0x1A50F0);
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1DC368) = ebx;
    MEM32(0x1A50F0) = eax;
    MEM32(0x1A2EA4) = ebx;

loc_00118095: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001180A1u); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_001180A1: ;
    _fa = (uint32_t)(MEM32(0x1DC368)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC368), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001180C1; /* je: equal / zero */

loc_001180A9: ;
    eax = MEM32(0x1A50F0);
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1DC368) = ebx;
    MEM32(0x1A50F0) = eax;
    MEM32(0x1A2EA4) = ebx;

loc_001180C1: ;
    ecx = MEM32(esp + 0x58);
    MEM32(ecx + 0x14) = ebp;
    PUSH32(esp, 0x001180CDu); RECOMP_ABI_CALL(0x001184B0u, sub_001184B0); /* call 0x001184B0 */

loc_001180CD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118120; /* je: equal / zero */

loc_001180D3: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118111; /* je: equal / zero */

loc_001180D8: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, ebp);
    edx = ecx;
    PUSH32(esp, edx);
    eax = esi + 0x38;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, eax);
    ecx = 0x1DE498;
    PUSH32(esp, 0x001180F1u); RECOMP_ABI_CALL(0x000F9C40u, sub_000F9C40); /* call 0x000F9C40 */

loc_001180F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001180FA; /* jne: not equal / not zero */

loc_001180F5: ;
    MEM32(esi + 0x4C) = ebp;
    goto loc_00118111;

loc_001180FA: ;
    ecx = esi;
    MEM32(esi + 0x4C) = ebx;
    PUSH32(esp, 0x00118104u); RECOMP_ABI_CALL(0x00129BF0u, sub_00129BF0); /* call 0x00129BF0 */

loc_00118104: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(edi);
    edx = ecx + ecx + -2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;

loc_00118111: ;
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, 0x0011811Au); RECOMP_ABI_CALL(0x001184B0u, sub_001184B0); /* call 0x001184B0 */

loc_0011811A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001180D3; /* jne: not equal / not zero */

loc_00118120: ;
    ecx = MEM32(0x1DE3E8);
    eax = 0x900;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011813A; /* je: equal / zero */

loc_0011812F: ;
    PUSH32(esp, eax);
    MEM32(0x1DE3E8) = eax;
    PUSH32(esp, 0x0011813Au); RECOMP_ABI_CALL(0x001931B0u, sub_001931B0); /* call 0x001931B0 */

loc_0011813A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00118140u); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_00118140: ;
    eax = MEM32(0x1DC3CC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118164; /* jne: not equal / not zero */

loc_0011814C: ;
    edx = ebx;
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = ebx;
    PUSH32(esp, 0x0011815Eu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0011815E: ;
    MEM32(0x1A51F8) = ebx;

loc_00118164: ;
    ecx = MEM32(0x1DC398);
    eax = 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118187; /* je: equal / zero */

loc_00118173: ;
    MEM32(0x1A50F0) = MEM32(0x1A50F0) | 0x800;
    _fa = (uint32_t)(MEM32(0x1A50F0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1A2ED0) = eax;
    MEM32(0x1DC398) = eax;

loc_00118187: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001181A0
 * Original: 0x001181A0 - 0x001181DE (62 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001181A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001181A0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x1C47F8;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = 0xBF800000u;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = 0x3F800000;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x20) = 0x3F000000;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001181E0
 * Original: 0x001181E0 - 0x0011837A (410 bytes, 129 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001181E0(void)
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

loc_001181E0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    MEM32(esi + 8) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001181F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001181EFu); } /* indirect call */
    }

loc_001181F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118375; /* je: equal / zero */

loc_001181FA: ;
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118375; /* je: equal / zero */

loc_00118205: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118375; /* je: equal / zero */

loc_00118210: ;
    ecx = MEM32(0x1DFDA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118375; /* je: equal / zero */

loc_0011821E: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011823A; /* je: equal / zero */

loc_00118226: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011823A; /* je: equal / zero */

loc_0011822D: ;
    _fa = (uint32_t)(MEM32(eax + 0x1E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1E8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001182E0; /* je: equal / zero */

loc_0011823A: ;
    fp_push(MEMF(esi + 0x48)); /* fld float */
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE140)); /* fmul dword ptr [0x1ae140] */
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push(MEMF(esi + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE140)); /* fmul dword ptr [0x1ae140] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE140)); /* fmul dword ptr [0x1ae140] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00118270u); RECOMP_ABI_CALL(0x000D37D0u, sub_000D37D0); /* call 0x000D37D0 */

loc_00118270: ;
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    MEMF(esi + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C5490)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c5490] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00118374; /* jnp: not parity */

loc_00118288: ;
    edx = MEM32(esp + 8);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011829Cu); RECOMP_ABI_CALL(0x00018FA0u, sub_00018FA0); /* call 0x00018FA0 */

loc_0011829C: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001182ABu); RECOMP_ABI_CALL(0x00018F10u, sub_00018F10); /* call 0x00018F10 */

loc_001182AB: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x28) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(0x1DFDA8);
    eax = MEM32(ecx + 0x34);
    edx = MEM32(eax);
    MEM32(esi + 0x3C) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x40) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x44) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = 1;

loc_001182E0: ;
    PUSH32(esp, ebx);
    edi = esi + 0x30;
    PUSH32(esp, edi);
    ebx = esi + 0x3C;
    eax = esp + 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001182F3u); RECOMP_ABI_CALL(0x00018F40u, sub_00018F40); /* call 0x00018F40 */

loc_001182F3: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C9210)); /* fmul dword ptr [0x1c9210] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = edi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C9210)); /* fmul dword ptr [0x1c9210] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C9210)); /* fmul dword ptr [0x1c9210] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00118331u); RECOMP_ABI_CALL(0x00019080u, sub_00019080); /* call 0x00019080 */

loc_00118331: ;
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0011835C; /* jnp: not parity */

loc_00118342: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0011834Eu); RECOMP_ABI_CALL(0x00018EE0u, sub_00018EE0); /* call 0x00018EE0 */

loc_0011834E: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esi + 8) = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011835C: ;
    edx = MEM32(ebx);
    MEM32(edi) = edx;
    eax = MEM32(ebx + 4);
    MEM32(edi + 4) = eax;
    ecx = MEM32(ebx + 8);
    MEM32(edi + 8) = ecx;
    MEM32(esi + 8) = 1;
    POP32(esp, ebx);

loc_00118374: ;
    POP32(esp, edi);

loc_00118375: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00118380
 * Original: 0x00118380 - 0x00118391 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118380(void)
{

loc_00118380: ;
    eax = MEM32(ecx + 0x14);
    MEM32(ecx + 8) = 0;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001183A0
 * Original: 0x001183A0 - 0x001183ED (77 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001183A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001183A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001183B5u); RECOMP_ABI_CALL(0x00118900u, sub_00118900); /* call 0x00118900 */

loc_001183B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001183BE; /* jne: not equal / not zero */

loc_001183B9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001183BE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001183CCu); RECOMP_ABI_CALL(0x00118900u, sub_00118900); /* call 0x00118900 */

loc_001183CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001183D6; /* jne: not equal / not zero */

loc_001183D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001183D6: ;
    ecx = MEM32(edi);
    POP32(esp, edi);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001183F0
 * Original: 0x001183F0 - 0x00118408 (24 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001183F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001183F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x001183FFu); RECOMP_ABI_CALL(0x00118960u, sub_00118960); /* call 0x00118960 */

loc_001183FF: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00118410
 * Original: 0x00118410 - 0x0011842E (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118410: ;
    eax = ecx;
    MEM32(eax) = 0x1C54AC;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 0x1C) = 0xFF;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x18) = 0x1C549C;
    MEM32(eax + 0x2C) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00118430
 * Original: 0x00118430 - 0x00118456 (38 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118430: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C54AC;
    MEM32(esi + 0x18) = 0x1AFF10;
    if (TEST_Z(_fa, _fb)) goto loc_00118450; /* je: equal / zero */

loc_00118447: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011844Du); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011844D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00118450: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00118460
 * Original: 0x00118460 - 0x0011849B (59 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118460: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x14);
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = edi;
    PUSH32(esp, 0x0011847Fu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011847F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118494; /* je: equal / zero */

loc_00118486: ;
    ecx = eax;
    PUSH32(esp, 0x0011848Du); RECOMP_ABI_CALL(0x00117EC0u, sub_00117EC0); /* call 0x00117EC0 */

loc_0011848D: ;
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00118494: ;
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001184A0
 * Original: 0x001184A0 - 0x001184AE (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001184A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001184A0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x001184A9u); RECOMP_ABI_CALL(0x00129290u, sub_00129290); /* call 0x00129290 */

loc_001184A9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001184B0
 * Original: 0x001184B0 - 0x001184C8 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001184B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001184B0: ;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001184BB; /* jne: not equal / not zero */

loc_001184B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001184BB: ;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x14) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001184D0
 * Original: 0x001184D0 - 0x00118571 (161 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001184D0(void)
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

loc_001184D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    esi = ecx;
    ecx = MEM32(0x1DE460);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001184EFu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_001184EF: ;
    edi = MEM32(esp + 0x10);
    ecx = edi;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x00118501u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00118501: ;
    fp_push(MEMF(0x1C91E0)); /* fld float */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x1C) = eax;
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) / fp_top()); /* fdivr dword ptr [0x1c91d0] */
    MEM32(esi + 0x20) = edi;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_0011855D; /* jle: less or equal (signed <=) */

loc_00118522: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    goto loc_00118530;

    /* nop */
    /* nop */

loc_00118530: ;
    edx = MEM32(esi + 0x1C);
    MEM32(eax + edx) = 1;
    edx = MEM32(esi + 0x1C);
    MEM32(edx + eax + 4) = 0;
    edx = MEM32(esi + 0x1C);
    MEMF(edx + eax + 8) = (float)fp_top(); /* fst */
    edx = MEM32(esi + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(edx + eax + -4) = (float)fp_top(); /* fst */
    if ((_fa != 0)) goto loc_00118530; /* jne: not equal / not zero */

loc_0011855D: ;
    eax = MEM32(esi + 0x1C);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00118569u); RECOMP_ABI_CALL(0x00129270u, sub_00129270); /* call 0x00129270 */

loc_00118569: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00118580
 * Original: 0x00118580 - 0x0011861B (155 bytes, 66 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118580: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00118597u); RECOMP_ABI_CALL(0x00117EF0u, sub_00117EF0); /* call 0x00117EF0 */

loc_00118597: ;
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001185A5u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_001185A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001185D7; /* je: equal / zero */

loc_001185AC: ;
    ebx = eax + 4;
    MEM32(eax) = ebp;
    eax = ebp + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_001185D9; /* jl: less (signed <) */

loc_001185BA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    /* nop */

loc_001185C0: ;
    ecx = edi;
    PUSH32(esp, 0x001185C7u); RECOMP_ABI_CALL(0x00129310u, sub_00129310); /* call 0x00129310 */

loc_001185C7: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x5C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_001185C0; /* jne: not equal / not zero */

loc_001185D5: ;
    goto loc_001185D9;

loc_001185D7: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001185D9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esi + 4) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00118609; /* jle: less or equal (signed <=) */

loc_001185E2: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001185E4: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001185F3u); RECOMP_ABI_CALL(0x00129970u, sub_00129970); /* call 0x00129970 */

loc_001185F3: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00118601u); RECOMP_ABI_CALL(0x00129250u, sub_00129250); /* call 0x00129250 */

loc_00118601: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x5C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001185E4; /* jl: less (signed <) */

loc_00118609: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 8) = ebp;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00118620
 * Original: 0x00118620 - 0x0011868B (107 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118620: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011865F; /* je: equal / zero */

loc_0011862D: ;
    eax = MEM32(ecx + -4);
    PUSH32(esp, ebp);
    ebp = ecx + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x5C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00118651; /* js: sign (negative) */

loc_0011863F: ;
    ebx = eax + 1;

loc_00118642: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x5C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0011864Cu); RECOMP_ABI_CALL(0x00129BC0u, sub_00129BC0); /* call 0x00129BC0 */

loc_0011864C: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00118642; /* jne: not equal / not zero */

loc_0011864F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00118651: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00118657u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00118657: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(edi + 4) = ebx;
    POP32(esp, ebp);

loc_0011865F: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118675; /* je: equal / zero */

loc_00118666: ;
    ecx = MEM32(0x1DE460);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00118672u); RECOMP_ABI_CALL(0x000ECFB0u, sub_000ECFB0); /* call 0x000ECFB0 */

loc_00118672: ;
    MEM32(edi + 0x18) = ebx;

loc_00118675: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118688; /* je: equal / zero */

loc_0011867C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00118682u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00118682: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x1C) = ebx;

loc_00118688: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00118690
 * Original: 0x00118690 - 0x001186D9 (73 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118690: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001186D1; /* jle: less or equal (signed <=) */

loc_001186A1: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001186A4: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x1F) = LO8(ebx);
    MEM8(esp + 0x1E) = LO8(ebx);
    MEM8(esp + 0x1D) = LO8(ebx);
    MEM8(esp + 0x1C) = LO8(ebx);
    PUSH32(esp, 0x001186C5u); RECOMP_ABI_CALL(0x001299B0u, sub_001299B0); /* call 0x001299B0 */

loc_001186C5: ;
    eax = MEM32(esi + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x5C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001186A4; /* jl: less (signed <) */

loc_001186D0: ;
    POP32(esp, ebp);

loc_001186D1: ;
    POP32(esp, edi);
    MEM32(esi + 0x10) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001186E0
 * Original: 0x001186E0 - 0x00118773 (147 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001186E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001186E0: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0xC);
    eax = ecx + -50;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118771; /* jl: less (signed <) */

loc_001186F4: ;
    PUSH32(esp, ebx);
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x10);
    _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax + eax * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_00118714; /* jns: not sign (positive) */

loc_0011870B: ;
    eax = ecx;
    /* nop */

loc_00118710: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_00118710; /* js: sign (negative) */

loc_00118714: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118726; /* jl: less (signed <) */

loc_0011871B: ;
    ecx = eax;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    /* nop */

loc_00118720: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00118720; /* jge: greater or equal (signed >=) */

loc_00118726: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011876F; /* jle: less or equal (signed <=) */

loc_0011872A: ;
    /* nop */

loc_00118730: ;
    edx = MEM32(edi + 4);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00118745u); RECOMP_ABI_CALL(0x001292A0u, sub_001292A0); /* call 0x001292A0 */

loc_00118745: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00118754; /* jns: not sign (positive) */

loc_0011874A: ;
    eax = MEM32(edi + 8);
    /* nop */

loc_00118750: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_00118750; /* js: sign (negative) */

loc_00118754: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118766; /* jl: less (signed <) */

loc_0011875B: ;
    ecx = eax;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    /* nop */

loc_00118760: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00118760; /* jge: greater or equal (signed >=) */

loc_00118766: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011876F; /* je: equal / zero */

loc_0011876B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00118730; /* jg: greater (signed >) */

loc_0011876F: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00118771: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00118780
 * Original: 0x00118780 - 0x001187A9 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118780: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011879A; /* je: equal / zero */

loc_0011878A: ;
    ecx = edi;
    PUSH32(esp, 0x00118791u); RECOMP_ABI_CALL(0x00117ED0u, sub_00117ED0); /* call 0x00117ED0 */

loc_00118791: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00118797u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00118797: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011879A: ;
    POP32(esp, edi);
    MEM32(esi) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00118620(); return; /* tail jmp 0x00118620 */

}

/**
 * sub_001187B0
 * Original: 0x001187B0 - 0x001187C1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001187B0(void)
{

loc_001187B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001187B8u); RECOMP_ABI_CALL(0x00118690u, sub_00118690); /* call 0x00118690 */

loc_001187B8: ;
    MEM32(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001187D0
 * Original: 0x001187D0 - 0x00118838 (104 bytes, 43 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001187D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001187D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 4);
    edx = MEM32(edi + 8);
    goto loc_001187E0;

    /* nop */

loc_001187E0: ;
    eax = MEM32(edi + 0x10);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x5C);
    ecx = eax + 1;
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(edi + 0x10) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001187FB; /* jge: greater or equal (signed >=) */

loc_001187F7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0xC) = eax;

loc_001187FB: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118806; /* je: equal / zero */

loc_00118802: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001187E0; /* jl: less (signed <) */

loc_00118806: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118813; /* jl: less (signed <) */

loc_0011880A: ;
    esi = ebx;
    MEM32(edi + 0x10) = 1;

loc_00118813: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00118829u); RECOMP_ABI_CALL(0x001299B0u, sub_001299B0); /* call 0x001299B0 */

loc_00118829: ;
    ecx = edi;
    PUSH32(esp, 0x00118830u); RECOMP_ABI_CALL(0x001186E0u, sub_001186E0); /* call 0x001186E0 */

loc_00118830: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00118840
 * Original: 0x00118840 - 0x001188EE (174 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118840: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    MEM32(esp + 0x10) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00118864; /* jne: not equal / not zero */

loc_00118859: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00118862u); RECOMP_ABI_CALL(0x001187D0u, sub_001187D0); /* call 0x001187D0 */

loc_00118862: ;
    esi = eax;

loc_00118864: ;
    ebp = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011887Cu); RECOMP_ABI_CALL(0x001294B0u, sub_001294B0); /* call 0x001294B0 */

loc_0011887C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001188E4; /* ja: above (unsigned >) */

loc_00118882: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1188F0); /* switch: 4 entries, 2 targets */
    if (_jt == 0x00118889u) goto loc_00118889;
    if (_jt == 0x001188ADu) goto loc_001188AD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00118889: ;
    ecx = esi;
    PUSH32(esp, 0x00118890u); RECOMP_ABI_CALL(0x00129290u, sub_00129290); /* call 0x00129290 */

loc_00118890: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011889Cu); RECOMP_ABI_CALL(0x001187D0u, sub_001187D0); /* call 0x001187D0 */

loc_0011889C: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    esi = eax;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_001188D0;

loc_001188AD: ;
    ecx = esi;
    PUSH32(esp, 0x001188B4u); RECOMP_ABI_CALL(0x00129290u, sub_00129290); /* call 0x00129290 */

loc_001188B4: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001188C1u); RECOMP_ABI_CALL(0x001187D0u, sub_001187D0); /* call 0x001187D0 */

loc_001188C1: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, edx);

loc_001188D0: ;
    ecx = esi;
    PUSH32(esp, 0x001188D7u); RECOMP_ABI_CALL(0x001294B0u, sub_001294B0); /* call 0x001294B0 */

loc_001188D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001188E4; /* je: equal / zero */

loc_001188DB: ;
    ecx = esi;
    PUSH32(esp, 0x001188E2u); RECOMP_ABI_CALL(0x00129290u, sub_00129290); /* call 0x00129290 */

loc_001188E2: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001188E4: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00118900
 * Original: 0x00118900 - 0x00118955 (85 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118900: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00118917; /* jle: less or equal (signed <=) */

loc_00118911: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00118917: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011894C; /* jle: less or equal (signed <=) */

loc_0011891D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_00118923: ;
    edx = MEM32(ecx + 8);
    ebx = MEM32(ecx + 0x10);
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, MEM8(eax + edi));
    MEM8(edx + ebx) = LO8(eax);
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ecx + 8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00118923; /* jl: less (signed <) */

loc_0011894A: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0011894C: ;
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00118960
 * Original: 0x00118960 - 0x001189A6 (70 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118960: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00118977; /* jle: less or equal (signed <=) */

loc_00118971: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00118977: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011899D; /* jle: less or equal (signed <=) */

loc_0011897D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_00118983: ;
    edx = MEM32(ecx + 0x10);
    ebx = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(edx + ebx));
    MEM8(eax + edi) = LO8(edx);
    edx = MEM32(ecx + 8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ecx + 8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00118983; /* jl: less (signed <) */

loc_0011899B: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0011899D: ;
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001189B0
 * Original: 0x001189B0 - 0x001189C0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001189B0(void)
{

loc_001189B0: ;
    eax = ecx;
    MEM32(eax) = 0x7FFFFFFF;
    MEM32(eax + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001189C0
 * Original: 0x001189C0 - 0x00118A2E (110 bytes, 40 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001189C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001189C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    eax = 1;
    if (CMP_NE(_fa, _fb)) goto loc_001189EE; /* jne: not equal / not zero */

loc_001189D2: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x001189D9u); RECOMP_ABI_CALL(0x00196960u, sub_00196960); /* call 0x00196960 */

loc_001189D9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 4) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x8007000Eu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    goto loc_00118A0D;

loc_001189EE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118A11; /* jne: not equal / not zero */

loc_001189F3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001189FAu); RECOMP_ABI_CALL(0x00196960u, sub_00196960); /* call 0x00196960 */

loc_001189FA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 4) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x8007000Eu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;

loc_00118A0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118A25; /* je: equal / zero */

loc_00118A11: ;
    PUSH32(esp, 0x1C54C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00118A1Cu); RECOMP_ABI_CALL(0x000E36B0u, sub_000E36B0); /* call 0x000E36B0 */

loc_00118A1C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00118A25: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00118A30
 * Original: 0x00118A30 - 0x00118A51 (33 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x7FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118A4A; /* je: equal / zero */

loc_00118A3B: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00118A44u); RECOMP_ABI_CALL(0x00197CB0u, sub_00197CB0); /* call 0x00197CB0 */

loc_00118A44: ;
    MEM32(esi) = 0x7FFFFFFF;

loc_00118A4A: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00118A60
 * Original: 0x00118A60 - 0x00118A7E (30 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118A60(void)
{

loc_00118A60: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0xA0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00118A6Eu); RECOMP_ABI_CALL(0x001969C0u, sub_001969C0); /* call 0x001969C0 */

loc_00118A6E: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax + ecx * 4);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00118A80
 * Original: 0x00118A80 - 0x00118AAF (47 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118A80: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00118A8Bu); RECOMP_ABI_CALL(0x001969C0u, sub_001969C0); /* call 0x001969C0 */

loc_00118A8B: ;
    ecx = MEM32(esp + 0xC);
    edx = ecx * 4;
    ecx = MEM32(esp + 4);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    eax = eax + edx * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00118AA9u); RECOMP_ABI_CALL(0x000F5860u, sub_000F5860); /* call 0x000F5860 */

loc_00118AA9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00118AB0
 * Original: 0x00118AB0 - 0x00118B77 (199 bytes, 63 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118AB0(void)
{
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

loc_00118AB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00118B74; /* jne: not equal / not zero */

loc_00118ABF: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00118ACBu); RECOMP_ABI_CALL(0x001969C0u, sub_001969C0); /* call 0x001969C0 */

loc_00118ACB: ;
    ecx = MEM32(ebx);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00118B6C; /* jle: less or equal (signed <=) */

loc_00118AE4: ;
    PUSH32(esp, esi);
    esi = eax + 2;
    goto loc_00118AF0;

    /* nop */

loc_00118AF0: ;
    edx = ZX8(MEM8(esi));
    eax = ZX8(MEM8(esi + -1));
    ecx = ZX8(MEM8(esi + -2));
    MEM32(esp + 0xC) = edx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esp + 0xC) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esp + 0xC) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1BE848)); /* fmul dword ptr [0x1be848] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1BE844)); /* fmul dword ptr [0x1be844] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1BE84C)); /* fmul dword ptr [0x1be84c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE82C)); /* fmul dword ptr [0x1ae82c] */
    PUSH32(esp, 0x00118B4Cu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00118B4C: ;
    MEM8(esi + -2) = LO8(eax);
    MEM8(esi + -1) = LO8(eax);
    MEM8(esi) = LO8(eax);
    edx = MEM32(ebx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x10)) >> 32) & 1);
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00118AF0; /* jl: less (signed <) */

loc_00118B6B: ;
    POP32(esp, esi);

loc_00118B6C: ;
    MEM32(ebx + 8) = 1;
    POP32(esp, edi);

loc_00118B74: ;
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
 * sub_00118B80
 * Original: 0x00118B80 - 0x00118B9C (28 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118B80: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x7FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118B9A; /* je: equal / zero */

loc_00118B8B: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00118B94u); RECOMP_ABI_CALL(0x00197CB0u, sub_00197CB0); /* call 0x00197CB0 */

loc_00118B94: ;
    MEM32(esi) = 0x7FFFFFFF;

loc_00118B9A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00118BA0
 * Original: 0x00118BA0 - 0x00118CF7 (343 bytes, 119 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118BA0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00118C62; /* jne: not equal / not zero */

loc_00118BB8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00118BC6u); RECOMP_ABI_CALL(0x00108590u, sub_00108590); /* call 0x00108590 */

loc_00118BC6: ;
    ebp = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00118BDFu); RECOMP_ABI_CALL(0x00108600u, sub_00108600); /* call 0x00108600 */

loc_00118BDF: ;
    _fa = (uint32_t)(MEM8(esp + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x28), 1 (8-bit) */
    esi = MEM32(esp + 0x18);
    if (TEST_Z(_fa, _fb)) goto loc_00118C0E; /* je: equal / zero */

loc_00118BEA: ;
    ecx = MEM32(esp + 0x14);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118C0E; /* je: equal / zero */

loc_00118BF7: ;
    eax = esi + 1;
    /* nop */

loc_00118C00: ;
    MEM8(eax + 1) = MEM8(eax + 1) >> 1;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(eax) = MEM8(eax) >> 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(eax + -1) = MEM8(eax + -1) >> 1;
    _fa = (uint32_t)(MEM8(eax + -1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00118C00; /* jne: not equal / not zero */

loc_00118C0E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x20 (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00118C36; /* je: equal / zero */

loc_00118C14: ;
    SET_LO8(eax, 0xFF);
    MEM8(esp + 0x22) = LO8(eax);
    MEM8(esp + 0x20) = LO8(eax);
    MEM8(esp + 0x23) = LO8(ebx);
    MEM8(esp + 0x21) = LO8(ebx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00118C36u); RECOMP_ABI_CALL(0x001091A0u, sub_001091A0); /* call 0x001091A0 */

loc_00118C36: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00118C40u); RECOMP_ABI_CALL(0x001969C0u, sub_001969C0); /* call 0x001969C0 */

loc_00118C40: ;
    PUSH32(esp, 0x40);

loc_00118C42: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00118C49u); RECOMP_ABI_CALL(0x000F5860u, sub_000F5860); /* call 0x000F5860 */

loc_00118C49: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118C59; /* je: equal / zero */

loc_00118C50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00118C56u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00118C56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00118C59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00118C62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118CE1; /* jne: not equal / not zero */

loc_00118C67: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00118C76u); RECOMP_ABI_CALL(0x00108590u, sub_00108590); /* call 0x00108590 */

loc_00118C76: ;
    esi = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00118C92u); RECOMP_ABI_CALL(0x00108600u, sub_00108600); /* call 0x00108600 */

loc_00118C92: ;
    _fa = (uint32_t)(MEM8(esp + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x24), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00118CA2; /* je: equal / zero */

loc_00118C99: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00118CA2u); RECOMP_ABI_CALL(0x001092A0u, sub_001092A0); /* call 0x001092A0 */

loc_00118CA2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118CC9; /* je: equal / zero */

loc_00118CA7: ;
    SET_LO8(eax, 0xFF);
    MEM8(esp + 0x22) = LO8(eax);
    MEM8(esp + 0x20) = LO8(eax);
    MEM8(esp + 0x23) = LO8(ebx);
    MEM8(esp + 0x21) = LO8(ebx);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00118CC9u); RECOMP_ABI_CALL(0x001091A0u, sub_001091A0); /* call 0x001091A0 */

loc_00118CC9: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00118CD3u); RECOMP_ABI_CALL(0x001969C0u, sub_001969C0); /* call 0x001969C0 */

loc_00118CD3: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0x400);
    goto loc_00118C42;

loc_00118CE1: ;
    PUSH32(esp, 0x1C54E0);
    PUSH32(esp, 0x00118CEBu); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_00118CEB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00118D00
 * Original: 0x00118D00 - 0x00118D26 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118D00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118D00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00118D08u); RECOMP_ABI_CALL(0x001161F0u, sub_001161F0); /* call 0x001161F0 */

loc_00118D08: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0xA4) = eax;
    MEM32(esi + 0xA8) = eax;
    MEM32(esi) = 0x1C5518;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00118D30
 * Original: 0x00118D30 - 0x00118D9B (107 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118D30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00118D3Eu); RECOMP_ABI_CALL(0x00116220u, sub_00116220); /* call 0x00116220 */

loc_00118D3E: ;
    eax = MEM32(edi + 0x38);
    MEM32(esi + 0x98) = eax;
    ecx = MEM32(edi + 0x3C);
    MEM32(esi + 0x9C) = ecx;
    edx = MEM32(edi + 0x40);
    MEM32(esi + 0xA0) = edx;
    eax = MEM32(edi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118D96; /* je: equal / zero */

loc_00118D60: ;
    ecx = MEM32(edi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118D96; /* je: equal / zero */

loc_00118D67: ;
    MEM32(esi + 0xA8) = eax;
    eax = MEM32(edi + 0x48);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00118D79u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00118D79: ;
    ecx = MEM32(esi + 0xA8);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0xA4) = eax;
    edx = MEM32(edi + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00118D93u); RECOMP_ABI_CALL(0x000F5860u, sub_000F5860); /* call 0x000F5860 */

loc_00118D93: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00118D96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00118DA0
 * Original: 0x00118DA0 - 0x00118DAF (15 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118DA0: ;
    MEM32(ecx + 0xAC) = 0;
    g_seh_ebp = ebp; sub_001161D0(); return; /* tail jmp 0x001161D0 */

}

/**
 * sub_00118DB0
 * Original: 0x00118DB0 - 0x00118DC0 (16 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 18 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118DB0: ;
    esp += 76; return; /* ret 72 */

    g_seh_ebp = ebp; sub_00118DC0(); return; /* fallthrough 0x00118DC0 */

}

/**
 * sub_00118DC0
 * Original: 0x00118DC0 - 0x00118E00 (64 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118DC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00118DCEu); RECOMP_ABI_CALL(0x00116670u, sub_00116670); /* call 0x00116670 */

loc_00118DCE: ;
    eax = edi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00118DDCu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00118DDC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118DF3; /* je: equal / zero */

loc_00118DE3: ;
    MEM32(eax) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x94) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00118DF3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x94) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00118E00
 * Original: 0x00118E00 - 0x00118EC0 (192 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 19 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118E00: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(ecx + 0x8C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00118EB5; /* je: equal / zero */

loc_00118E13: ;
    eax = MEM32(ecx + 0x88);
    edx = MEM32(ecx + 0x94);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x14);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(eax + 8) = esi;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x44);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x58);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x5C);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x44);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x58);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x5C);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00118EB5u); RECOMP_ABI_CALL(0x001162E0u, sub_001162E0); /* call 0x001162E0 */

loc_00118EB5: ;
    POP32(esp, esi);
    esp += 80; return; /* ret 76 */

    g_seh_ebp = ebp; sub_00118EC0(); return; /* fallthrough 0x00118EC0 */

}

/**
 * sub_00118EC0
 * Original: 0x00118EC0 - 0x00118FDB (283 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118EC0(void)
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

loc_00118EC0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xAC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 0xAC) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00118EFA; /* jge: greater or equal (signed >=) */

loc_00118EDA: ;
    /* nop */

loc_00118EE0: ;
    eax = MEM32(esi + 0x8C);
    ecx = MEM32(esi + 0xAC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xAC) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00118EE0; /* jl: less (signed <) */

loc_00118EFA: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(MEM32(esi + 0xAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xAC), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118F2A; /* jl: less (signed <) */

loc_00118F08: ;
    goto loc_00118F10;

    /* nop */

loc_00118F10: ;
    edx = MEM32(esi + 0xAC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0xAC) = edx;
    eax = MEM32(esi + 0x8C);
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00118F10; /* jge: greater or equal (signed >=) */

loc_00118F2A: ;
    eax = MEM32(esi + 0xAC);
    edi = MEM32(esi + 0x84);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 4);
    if ((_fas >= 0)) goto loc_00118F44; /* jns: not sign (positive) */

loc_00118F3D: ;
    /* nop */

loc_00118F40: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_00118F40; /* js: sign (negative) */

loc_00118F44: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118F56; /* jl: less (signed <) */

loc_00118F48: ;
    ecx = eax;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    /* nop */

loc_00118F50: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00118F50; /* jge: greater or equal (signed >=) */

loc_00118F56: ;
    ecx = MEM32(esi + 0xA8);
    fp_push(MEMF(0x1C5514)); /* fld float */
    edx = MEM32(esi + 0xA4);
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, ecx);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x80);
    eax = esp + 0x10;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xA0);
    MEM32(esp + 0x18) = 0;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x00118F9Eu); RECOMP_ABI_CALL(0x000D37D0u, sub_000D37D0); /* call 0x000D37D0 */

loc_00118F9E: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C5510)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c5510] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00118FD5; /* jnp: not parity */

loc_00118FAB: ;
    edx = MEM32(esi + 0xA0);
    eax = MEM32(edx + 0x34);
    ecx = MEM32(esi + 0x94);
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    MEM32(edi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(edi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = edx;

loc_00118FD5: ;
    POP32(esp, edi);
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
 * sub_00118FE0
 * Original: 0x00118FE0 - 0x0011919A (442 bytes, 140 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118FE0(void)
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

loc_00118FE0: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x88) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00119193; /* je: equal / zero */

loc_00118FF8: ;
    eax = MEM32(edi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00119009; /* je: equal / zero */

loc_00119002: ;
    ecx = edi;
    PUSH32(esp, 0x00119009u); RECOMP_ABI_CALL(0x00118EC0u, sub_00118EC0); /* call 0x00118EC0 */

loc_00119009: ;
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00119016u); RECOMP_ABI_CALL(0x001164A0u, sub_001164A0); /* call 0x001164A0 */

loc_00119016: ;
    esi = MEM32(edi + 0x84);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x88) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00119192; /* je: equal / zero */

loc_00119028: ;
    goto loc_00119030;

    /* nop */

loc_00119030: ;
    edx = MEM32(edi + 0x80);
    eax = MEM32(edi + 0x94);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    fp_push(MEMF(ecx + edx + 8)); /* fld float */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esi;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0xC)); /* fadd dword ptr [edx + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011916A; /* jp: parity */

loc_00119073: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi + 0x98);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    MEM32(esp + 8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    edx = MEM32(edi + 0x9C);
    MEM32(esp + 0x64) = edx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x64)); /* fmul dword ptr [esp + 0x64] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x64)); /* fmul dword ptr [esp + 0x64] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x64)); /* fmul dword ptr [esp + 0x64] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x5C);
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x14) = edx;
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0011916C;

loc_0011916A: ;
    fp_pop(); /* fstp st(0) */

loc_0011916C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 4);
    if ((_fas >= 0)) goto loc_00119176; /* jns: not sign (positive) */

loc_00119172: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_00119172; /* js: sign (negative) */

loc_00119176: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00119186; /* jl: less (signed <) */

loc_0011917A: ;
    ecx = eax;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = edi;

loc_00119180: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00119180; /* jge: greater or equal (signed >=) */

loc_00119186: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x88) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00119030; /* jne: not equal / not zero */

loc_00119192: ;
    POP32(esp, esi);

loc_00119193: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001191A0
 * Original: 0x001191A0 - 0x001191EB (75 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001191A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001191A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA4);
    PUSH32(esp, eax);
    MEM32(esi) = 0x1C5518;
    PUSH32(esp, 0x001191B5u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001191B5: ;
    eax = MEM32(esi + 0x94);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001191CE; /* je: equal / zero */

loc_001191C2: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001191CBu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001191CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001191CE: ;
    ecx = esi;
    PUSH32(esp, 0x001191D5u); RECOMP_ABI_CALL(0x00116CD0u, sub_00116CD0); /* call 0x00116CD0 */

loc_001191D5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001191E5; /* je: equal / zero */

loc_001191DC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001191E2u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001191E2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001191E5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001191F0
 * Original: 0x001191F0 - 0x00119205 (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001191F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001191F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x90) = eax;
    MEM32(ecx + 0x94) = eax;
    MEM32(ecx + 0x98) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00119210
 * Original: 0x00119210 - 0x00119230 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119210: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00119218u); RECOMP_ABI_CALL(0x00128A20u, sub_00128A20); /* call 0x00128A20 */

loc_00119218: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi) = 0x1C5548;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00119230
 * Original: 0x00119230 - 0x00119354 (292 bytes, 108 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119230(void)
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

loc_00119230: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    esi = ecx;
    ecx = MEM32(edi);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00119247u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119244u); } /* indirect call */
    }

loc_00119247: ;
    edx = MEM32(edi + 4);
    MEM32(esi + 0x28) = edx;
    eax = MEM32(edi + 0xC);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011925Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011925B: ;
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
    if (CMP_LE(_fas, _fbs)) goto loc_0011928E; /* jle: less or equal (signed <=) */

loc_0011926F: ;
    /* nop */

loc_00119270: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_00119270; /* jl: less (signed <) */

loc_0011928E: ;
    edx = MEM32(edi + 0x24);
    MEM32(esi + 0x48) = edx;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x34) = eax;
    ecx = MEM32(edi + 0x14);
    MEM32(esi + 0x38) = ecx;
    edx = MEM32(edi + 0x18);
    MEM32(esi + 0x3C) = edx;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x40) = eax;
    ecx = MEM32(edi + 0x20);
    MEM32(esi + 0x44) = ecx;
    eax = esi + 0x4C;
    ecx = eax;
    edx = edi + 0x28;
    ebx = MEM32(edx);
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(ecx + 8) = ebx;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    ecx = esi + 0x5C;
    edx = edi + 0x38;
    ebp = MEM32(edx);
    ebx = ecx;
    MEM32(ebx) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edx + 8);
    MEM32(ebx + 8) = ebp;
    edx = MEM32(edx + 0xC);
    MEM32(ebx + 0xC) = edx;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0xC)); /* fsub dword ptr [eax + 0xc] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    eax = esi + 0x7C;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    eax = MEM32(edi + 0x48);
    MEM32(esi + 0x6C) = eax;
    ecx = MEM32(edi + 0x4C);
    MEM32(esi + 0x70) = ecx;
    edx = MEM32(edi + 0x50);
    MEM32(esi + 0x74) = edx;
    eax = MEM32(edi + 0x54);
    POP32(esp, edi);
    MEM32(esi + 0x78) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00119360
 * Original: 0x00119360 - 0x0011943F (223 bytes, 70 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119360: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x94);
    ecx = MEM32(edi + 0x8C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    esi = edi + 0x94;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011943A; /* jl: less (signed <) */

loc_00119387: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x30) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011943A; /* jge: greater or equal (signed >=) */

loc_00119390: ;
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + 8);
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = 0;
    edx = MEM32(edi + 4);
    eax = esp + 0xC;
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = 0;
    MEM32(esi) = edx;
    PUSH32(esp, 0x001193F5u); RECOMP_ABI_CALL(0x00028EF0u, sub_00028EF0); /* call 0x00028EF0 */

loc_001193F5: ;
    ecx = MEM32(edi + 0x90);
    edx = MEM32(esi);
    eax = edi + 0x90;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00119434; /* jne: not equal / not zero */

loc_0011940A: ;
    edx = MEM32(edi + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x0011942Cu); RECOMP_ABI_CALL(0x00028EF0u, sub_00028EF0); /* call 0x00028EF0 */

loc_0011942C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

loc_00119434: ;
    MEM32(edi + 0x98) = MEM32(edi + 0x98) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011943A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00119440
 * Original: 0x00119440 - 0x001195FA (442 bytes, 140 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119440(void)
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

loc_00119440: ;
    eax = MEM32(ecx + 0x94);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x90);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001195F3; /* je: equal / zero */

loc_00119458: ;
    goto loc_00119460;

    /* nop */

loc_00119460: ;
    eax = MEM32(ecx + 0x8C);
    fp_push(MEMF(esp + 0x38)); /* fld float */
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + eax + 0x20)); /* fadd dword ptr [edx + eax + 0x20] */
    MEMF(edx + eax + 0x20) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x34] */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001194C7; /* jne: not equal / not zero */

loc_00119483: ;
    edx = MEM32(ecx + 0x90);
    eax = MEM32(ecx + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ecx + 0x90) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001194A3; /* jge: greater or equal (signed >=) */

loc_00119497: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00119497; /* jl: less (signed <) */

loc_0011949D: ;
    MEM32(ecx + 0x90) = edx;

loc_001194A3: ;
    edx = MEM32(ecx + 0x90);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001194BC; /* jl: less (signed <) */

loc_001194AD: ;
    /* nop */

loc_001194B0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001194B0; /* jge: greater or equal (signed >=) */

loc_001194B6: ;
    MEM32(ecx + 0x90) = edx;

loc_001194BC: ;
    MEM32(ecx + 0x98) = MEM32(ecx + 0x98) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_001195CF;

loc_001194C7: ;
    fp_push(MEMF(ecx + 0x78)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x10)); /* fmul dword ptr [edx + 0x10] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x14)); /* fmul dword ptr [edx + 0x14] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x6C)); /* fadd dword ptr [ecx + 0x6c] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x70)); /* fadd dword ptr [ecx + 0x70] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x74)); /* fadd dword ptr [ecx + 0x74] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0xC)); /* fadd dword ptr [edx + 0xc] */
    MEMF(edx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x10)); /* fadd dword ptr [edx + 0x10] */
    MEMF(edx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x14)); /* fadd dword ptr [edx + 0x14] */
    MEMF(edx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x10)); /* fmul dword ptr [edx + 0x10] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x14)); /* fmul dword ptr [edx + 0x14] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx)); /* fadd dword ptr [edx] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 4)); /* fadd dword ptr [edx + 4] */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 8)); /* fadd dword ptr [edx + 8] */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x1C)); /* fmul dword ptr [edx + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x18)); /* fadd dword ptr [edx + 0x18] */
    MEMF(edx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x20)); /* fmul dword ptr [edx + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x34)); /* fdiv dword ptr [ecx + 0x34] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x54)); /* fadd dword ptr [ecx + 0x54] */
    MEMF(edx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x20)); /* fmul dword ptr [edx + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x34)); /* fdiv dword ptr [ecx + 0x34] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x50)); /* fadd dword ptr [ecx + 0x50] */
    MEMF(edx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x20)); /* fmul dword ptr [edx + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x34)); /* fdiv dword ptr [ecx + 0x34] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x4C)); /* fadd dword ptr [ecx + 0x4c] */
    MEMF(edx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x38)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x38] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001195AA; /* jp: parity */

loc_001195A2: ;
    fp_push(MEMF(edx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x38)); /* fdiv dword ptr [ecx + 0x38] */
    goto loc_001195CC;

loc_001195AA: ;
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x3C)); /* fsub dword ptr [ecx + 0x3c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001195C3; /* jne: not equal / not zero */

loc_001195BA: ;
    MEM32(edx + 0x30) = 0x3F800000;
    goto loc_001195CF;

loc_001195C3: ;
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x20)); /* fsub dword ptr [edx + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x3C)); /* fdiv dword ptr [ecx + 0x3c] */

loc_001195CC: ;
    MEMF(edx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */

loc_001195CF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 4);
    if ((_fas >= 0)) goto loc_001195D9; /* jns: not sign (positive) */

loc_001195D5: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_001195D5; /* js: sign (negative) */

loc_001195D9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001195E7; /* jl: less (signed <) */

loc_001195DD: ;
    edx = eax;
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_001195E1: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001195E1; /* jge: greater or equal (signed >=) */

loc_001195E7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x94)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0x94) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00119460; /* jne: not equal / not zero */

loc_001195F3: ;
    POP32(esp, esi);
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
 * sub_00119600
 * Original: 0x00119600 - 0x00119640 (64 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119600: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00119616u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00119616: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00119630; /* je: equal / zero */

loc_0011961D: ;
    MEM32(eax) = edi;
    MEM32(esi + 4) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x8C) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00119630: ;
    MEM32(esi + 4) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x8C) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00119640
 * Original: 0x00119640 - 0x00119C38 (1528 bytes, 416 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119640(void)
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

loc_00119640: ;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x98);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001196F1; /* je: equal / zero */

loc_0011965E: ;
    MEM32(esp + 0x38) = esi;
    PUSH32(esp, 0x00119667u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00119667: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00119672u); RECOMP_ABI_CALL(0x000E5430u, sub_000E5430); /* call 0x000E5430 */

loc_00119672: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xDC;
    PUSH32(esp, eax);
    ecx = 0x1DE768;
    PUSH32(esp, 0x00119687u); RECOMP_ABI_CALL(0x000192E0u, sub_000192E0); /* call 0x000192E0 */

loc_00119687: ;
    edx = esp + 0xDC;
    ecx = 0x60;
    PUSH32(esp, 0x00119698u); RECOMP_ABI_CALL(0x00195820u, sub_00195820); /* call 0x00195820 */

loc_00119698: ;
    MEM32(0x1DF760) = esi;
    MEM32(0x1DF438) = esi;
    PUSH32(esp, 0x001196A9u); RECOMP_ABI_CALL(0x000F95A0u, sub_000F95A0); /* call 0x000F95A0 */

loc_001196A9: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x001196B0u); RECOMP_ABI_CALL(0x000FB660u, sub_000FB660); /* call 0x000FB660 */

loc_001196B0: ;
    ecx = MEM32(edi + 0x28);
    edx = MEM32(edi + 0x48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001196C2u); RECOMP_ABI_CALL(0x00128A60u, sub_00128A60); /* call 0x00128A60 */

loc_001196C2: ;
    eax = MEM32(edi + 0x98);
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
    PUSH32(esp, 0x001196E6u); RECOMP_ABI_CALL(0x000FAF60u, sub_000FAF60); /* call 0x000FAF60 */

loc_001196E6: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001196FC; /* jne: not equal / not zero */

loc_001196F1: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001196FC: ;
    eax = MEM32(edi + 0x94);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0x90);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x20) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00119BEF; /* je: equal / zero */

loc_00119715: ;
    PUSH32(esp, ebx);
    ebx = 2;
    goto loc_00119720;

    /* nop */

loc_00119720: ;
    ecx = MEM32(edi + 0x8C);
    eax = MEM32(esp + 0x20);
    edx = MEM32(eax + 0x2C);
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    edi = MEM32(esi + ecx + 0x34);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00119743u); RECOMP_ABI_CALL(0x000E4140u, sub_000E4140); /* call 0x000E4140 */

loc_00119743: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x48) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C5544)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c5544] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00119BB0; /* jp: parity */

loc_0011975B: ;
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
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00119836; /* jnp: not parity */

loc_00119778: ;
    ecx = MEM32(esi + 0x18);
    edx = ecx;
    PUSH32(esp, edx);
    MEM32(esp + 0x74) = ecx;
    PUSH32(esp, 0x00119787u); RECOMP_ABI_CALL(0x000CDDF0u, sub_000CDDF0); /* call 0x000CDDF0 */

loc_00119787: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x18);
    ecx = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x7C) = eax;
    PUSH32(esp, 0x0011979Au); RECOMP_ABI_CALL(0x000CDE00u, sub_000CDE00); /* call 0x000CDE00 */

loc_0011979A: ;
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1DE538)); /* fmul dword ptr [0x1de538] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x1DE544)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1DE53C)); /* fmul dword ptr [0x1de53c] */
    fp_push(MEMF(0x1DE548)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1DE540)); /* fmul dword ptr [0x1de540] */
    fp_push(MEMF(0x1DE54C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1DE544)); /* fmul dword ptr [0x1de544] */
    fp_push(MEMF(0x1DE538)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1DE548)); /* fmul dword ptr [0x1de548] */
    fp_push(MEMF(0x1DE53C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1DE54C)); /* fmul dword ptr [0x1de54c] */
    fp_push(MEMF(0x1DE540)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0011986C;

loc_00119836: ;
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

loc_0011986C: ;
    eax = MEM32(esp + 0x20);
    fp_push(MEMF(eax + 0x40)); /* fld float */
    ecx = esp + 0x44;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C9210)); /* fmul dword ptr [0x1c9210] */
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
    fp_push(MEMF(eax + 0x44)); /* fld float */
    eax = MEM32(esi + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C9210)); /* fmul dword ptr [0x1c9210] */
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x50)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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
    fp_push(MEMF(esi + 0x28)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x30)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00119927u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00119927: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C9220)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c9220] */
    ecx = MEM32(esp + 0x44);
    MEM32(esp + 0x18) = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00119964; /* jp: parity */

loc_00119940: ;
    ecx = ZX8(MEM8(esp + 0x47));
    MEM32(esp + 0x1C) = ecx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    PUSH32(esp, 0x0011995Cu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0011995C: ;
    MEM8(esp + 0x1B) = LO8(eax);
    ecx = MEM32(esp + 0x18);

loc_00119964: ;
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

loc_00119BB0: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(edx + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = ebp;
    if ((_fas >= 0)) goto loc_00119BC8; /* jns: not sign (positive) */

loc_00119BBE: ;
    edi = edi;

loc_00119BC0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_00119BC0; /* js: sign (negative) */

loc_00119BC4: ;
    MEM32(esp + 0x24) = ebp;

loc_00119BC8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00119BDA; /* jl: less (signed <) */

loc_00119BCC: ;
    ecx = eax;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00119BD0: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00119BD0; /* jge: greater or equal (signed >=) */

loc_00119BD6: ;
    MEM32(esp + 0x24) = ebp;

loc_00119BDA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x94)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edx + 0x94) (32-bit) */
    edi = MEM32(esp + 0x20);
    if (CMP_NE(_fa, _fb)) goto loc_00119720; /* jne: not equal / not zero */

loc_00119BEA: ;
    esi = MEM32(esp + 0x40);
    POP32(esp, ebx);

loc_00119BEF: ;
    edx = esi + esi * 2;
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    eax = esi * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00119C02u); RECOMP_ABI_CALL(0x000FAC60u, sub_000FAC60); /* call 0x000FAC60 */

loc_00119C02: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_LE(_fas, _fbs)) goto loc_00119C1D; /* jle: less or equal (signed <=) */

loc_00119C0A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00119C15u); RECOMP_ABI_CALL(0x000FAD00u, sub_000FAD00); /* call 0x000FAD00 */

loc_00119C15: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00119C1Du); RECOMP_ABI_CALL(0x000FA850u, sub_000FA850); /* call 0x000FA850 */

loc_00119C1D: ;
    ecx = edi;
    PUSH32(esp, 0x00119C24u); RECOMP_ABI_CALL(0x00128AF0u, sub_00128AF0); /* call 0x00128AF0 */

loc_00119C24: ;
    PUSH32(esp, 0x00119C29u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00119C29: ;
    eax = MEM32(edi + 0x98);
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
 * sub_00119C40
 * Original: 0x00119C40 - 0x00119C88 (72 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00119C40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1C5548;
    if (CMP_EQ(_fa, _fb)) goto loc_00119C60; /* je: equal / zero */

loc_00119C50: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00119C56u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00119C56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = 0;

loc_00119C60: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00119C80; /* je: equal / zero */

loc_00119C6A: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00119C73u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00119C73: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x8C) = 0;

loc_00119C80: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00128A10(); return; /* tail jmp 0x00128A10 */

}

/**
 * sub_00119C90
 * Original: 0x00119C90 - 0x00119CF0 (96 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00119C90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1C5548;
    if (CMP_EQ(_fa, _fb)) goto loc_00119CB0; /* je: equal / zero */

loc_00119CA0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00119CA6u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00119CA6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = 0;

loc_00119CB0: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00119CD0; /* je: equal / zero */

loc_00119CBA: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00119CC3u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00119CC3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x8C) = 0;

loc_00119CD0: ;
    ecx = esi;
    PUSH32(esp, 0x00119CD7u); RECOMP_ABI_CALL(0x00128A10u, sub_00128A10); /* call 0x00128A10 */

loc_00119CD7: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00119CE7; /* je: equal / zero */

loc_00119CDE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00119CE4u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00119CE4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00119CE7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00119CF0(); return; /* fallthrough 0x00119CF0 */

}

/**
 * sub_00119CF0
 * Original: 0x00119CF0 - 0x00119D03 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119CF0(void)
{

loc_00119CF0: ;
    MEM32(ecx) = 0x1C5578;
    PUSH32(esp, ecx);
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0x00119D02u); RECOMP_ABI_CALL(0x000EC3E0u, sub_000EC3E0); /* call 0x000EC3E0 */

loc_00119D02: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00119D10
 * Original: 0x00119D10 - 0x00119D15 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00119D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119D10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00119D20
 * Original: 0x00119D20 - 0x00119D41 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119D20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x1C5578;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00119D3Du); RECOMP_ABI_CALL(0x000EC3B0u, sub_000EC3B0); /* call 0x000EC3B0 */

loc_00119D3D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00119D50
 * Original: 0x00119D50 - 0x00119D7B (43 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119D50: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C5578;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00119D65u); RECOMP_ABI_CALL(0x000EC3E0u, sub_000EC3E0); /* call 0x000EC3E0 */

loc_00119D65: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00119D75; /* je: equal / zero */

loc_00119D6C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00119D72u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00119D72: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00119D75: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00119D80
 * Original: 0x00119D80 - 0x00119D9A (26 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119D80: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x1C5588;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00119DA0
 * Original: 0x00119DA0 - 0x00119DA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119DA0(void)
{

loc_00119DA0: ;
    MEM32(ecx) = 0x1C5588;
    esp += 4; return; /* ret */

}

/**
 * sub_00119DB0
 * Original: 0x00119DB0 - 0x00119DBC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00119DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119DB0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00119DC0
 * Original: 0x00119DC0 - 0x00119DCA (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00119DC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119DC0: ;
    MEM32(ecx + 0xC) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00119DD0
 * Original: 0x00119DD0 - 0x00119E4E (126 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00119DDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119DD7u); } /* indirect call */
    }

loc_00119DDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00119E4A; /* jne: not equal / not zero */

loc_00119DDE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00119DE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119DE3u); } /* indirect call */
    }

loc_00119DE6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00119E26; /* je: equal / zero */

loc_00119DEC: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    ebx = ebx & 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00119DF7; /* je: equal / zero */

loc_00119DF6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00119DF7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00119DFDu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00119DFD: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00119E1D; /* je: equal / zero */

loc_00119E0A: ;
    ecx = edi + -1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00119E14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119E11u); } /* indirect call */
    }

loc_00119E14: ;
    edx = MEM32(esi + 4);
    MEM8(edi + edx) = 0;
    goto loc_00119E2D;

loc_00119E1D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00119E24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119E21u); } /* indirect call */
    }

loc_00119E24: ;
    goto loc_00119E2D;

loc_00119E26: ;
    MEM32(esi + 4) = 0;

loc_00119E2D: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00119E40; /* je: equal / zero */

loc_00119E3E: ;
    MEM32(eax) = edi;

loc_00119E40: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00119E47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119E44u); } /* indirect call */
    }

loc_00119E47: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

loc_00119E4A: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00119E50
 * Original: 0x00119E50 - 0x00119E7B (43 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119E50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00119E65; /* je: equal / zero */

loc_00119E5C: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00119E65: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00119E6Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00119E6B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00119E80
 * Original: 0x00119E80 - 0x00119F50 (208 bytes, 100 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00119E80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00119E92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119E8Fu); } /* indirect call */
    }

loc_00119E92: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00119EA7; /* je: equal / zero */

loc_00119E98: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00119E9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119E9Cu); } /* indirect call */
    }

loc_00119E9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00119EA7: ;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00119EAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119EACu); } /* indirect call */
    }

loc_00119EAF: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00119EC8; /* jne: not equal / not zero */

loc_00119EB5: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00119EBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119EB9u); } /* indirect call */
    }

loc_00119EBC: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00119EC8: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00119ED1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119ECEu); } /* indirect call */
    }

loc_00119ED1: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00119EE7; /* je: equal / zero */

loc_00119ED7: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00119EDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119EDBu); } /* indirect call */
    }

loc_00119EDE: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00119EE7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00119EEDu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00119EED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00119EFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119EF8u); } /* indirect call */
    }

loc_00119EFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00119F25; /* je: equal / zero */

loc_00119F03: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00119F09u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00119F09: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00119F13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119F10u); } /* indirect call */
    }

loc_00119F13: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00119F1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119F17u); } /* indirect call */
    }

loc_00119F1A: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00119F25: ;
    edx = MEM32(edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00119F2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119F2Bu); } /* indirect call */
    }

loc_00119F2E: ;
    ebp = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00119F37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119F34u); } /* indirect call */
    }

loc_00119F37: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00119F3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00119F3Bu); } /* indirect call */
    }

loc_00119F3E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00119F44u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00119F44: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00119F50
 * Original: 0x00119F50 - 0x00119F70 (32 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00119F50: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C5588;
    if (TEST_Z(_fa, _fb)) goto loc_00119F69; /* je: equal / zero */

loc_00119F60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00119F66u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00119F66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00119F69: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00119F70(); return; /* fallthrough 0x00119F70 */

}

/**
 * sub_00119F70
 * Original: 0x00119F70 - 0x00119FCC (92 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119F70: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    /* nop */

loc_00119F80: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + ecx + 7) = LO8(edx);
    if (CMP_NE(_fa, _fb)) goto loc_00119F80; /* jne: not equal / not zero */

loc_00119F92: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    eax = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00119FAD; /* jge: greater or equal (signed >=) */

loc_00119F98: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edi;
    eax = edx + ecx;
    /* nop */

loc_00119FA0: ;
    edi = MEM32(esi);
    MEM8(edi) = 0x30;
    ebx = MEM32(esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = ebx;
    if ((_fa != 0)) goto loc_00119FA0; /* jne: not equal / not zero */

loc_00119FAD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_00119FC7; /* jle: less or equal (signed <=) */

loc_00119FB2: ;
    SET_LO8(edx, MEM8(esp + ecx + 3));
    edi = MEM32(esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0x30);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(edi) = LO8(edx);
    edi = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = edi;
    if (CMP_G(_fas, _fbs)) goto loc_00119FB2; /* jg: greater (signed >) */

loc_00119FC7: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00119FD0
 * Original: 0x00119FD0 - 0x0011A012 (66 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119FD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00119FE3; /* jge: greater or equal (signed >=) */

loc_00119FDA: ;
    edx = MEM32(esi);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM8(edx) = 0x2D;
    goto loc_00119FFB;

loc_00119FE3: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00119FF1; /* je: equal / zero */

loc_00119FEA: ;
    edx = MEM32(esi);
    MEM8(edx) = 0x2B;
    goto loc_00119FFB;

loc_00119FF1: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011A002; /* je: equal / zero */

loc_00119FF6: ;
    edx = MEM32(esi);
    MEM8(edx) = 0x20;

loc_00119FFB: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = 1;

loc_0011A002: ;
    MEM32(ecx + 0xC) = edi;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0x0011A00Du); RECOMP_ABI_CALL(0x00119F70u, sub_00119F70); /* call 0x00119F70 */

loc_0011A00D: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A020
 * Original: 0x0011A020 - 0x0011A04F (47 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A020: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(edi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011A030; /* je: equal / zero */

loc_0011A029: ;
    eax = MEM32(esi);
    MEM8(eax) = 0x2B;
    goto loc_0011A039;

loc_0011A030: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011A03E; /* je: equal / zero */

loc_0011A034: ;
    ecx = MEM32(esi);
    MEM8(ecx) = 0x20;

loc_0011A039: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011A03E: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x0011A04Au); RECOMP_ABI_CALL(0x00119F70u, sub_00119F70); /* call 0x00119F70 */

loc_0011A04A: ;
    _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A050
 * Original: 0x0011A050 - 0x0011A0F2 (162 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011A050: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0011A066; /* je: equal / zero */

loc_0011A05F: ;
    edi = MEM32(eax);
    MEM8(edi) = 0x2B;
    goto loc_0011A070;

loc_0011A066: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011A075; /* je: equal / zero */

loc_0011A06B: ;
    edi = MEM32(eax);
    MEM8(edi) = 0x20;

loc_0011A070: ;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011A075: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011A090; /* je: equal / zero */

loc_0011A07A: ;
    edi = MEM32(eax);
    MEM8(edi) = 0x30;
    ebp = MEM32(eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ebp;
    edi = ebp;
    MEM8(edi) = 0x78;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 2;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_0011A090: ;
    SET_LO8(ebx, LO8(edx));
    SET_LO8(ebx, LO8(ebx) & 0xF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esp + ecx + 0xC) = LO8(ebx);
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A090; /* jne: not equal / not zero */

loc_0011A0A1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 8) (32-bit) */
    edi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_0011A0B7; /* jge: greater or equal (signed >=) */

loc_0011A0A8: ;
    edx = MEM32(eax);
    MEM8(edx) = 0x30;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esi + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011A0A8; /* jl: less (signed <) */

loc_0011A0B7: ;
    edx = MEM32(esp + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ebp = 0x1CF5D8;
    if (CMP_NE(_fa, _fb)) goto loc_0011A0C9; /* jne: not equal / not zero */

loc_0011A0C4: ;
    ebp = 0x1CF5C4;

loc_0011A0C9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011A0E6; /* jle: less or equal (signed <=) */

loc_0011A0CD: ;
    /* nop */

loc_0011A0D0: ;
    edx = (uint32_t)(int32_t)SMEM8(esp + ecx + 0xB);
    ebx = MEM32(eax);
    SET_LO8(edx, MEM8(edx + ebp));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ebx) = LO8(edx);
    ebx = MEM32(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = ebx;
    if (CMP_G(_fas, _fbs)) goto loc_0011A0D0; /* jg: greater (signed >) */

loc_0011A0E6: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011A100
 * Original: 0x0011A100 - 0x0011A201 (257 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A100(void)
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

loc_0011A100: ;
    fp_push(MEMD(esp + 8)); /* fld double */
    PUSH32(esp, ebx);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x1C1D78)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [0x1c1d78] */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011A126; /* jp: parity */

loc_0011A11D: ;
    eax = MEM32(esi);
    fp_top() = -fp_top(); /* fchs */
    MEM8(eax) = 0x2D;
    goto loc_0011A13D;

loc_0011A126: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011A134; /* je: equal / zero */

loc_0011A12D: ;
    ecx = MEM32(esi);
    MEM8(ecx) = 0x2B;
    goto loc_0011A13D;

loc_0011A134: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011A14E; /* je: equal / zero */

loc_0011A138: ;
    edx = MEM32(esi);
    MEM8(edx) = 0x20;

loc_0011A13D: ;
    eax = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = 1;
    ebx = MEM32(esp + 0x14);
    MEM32(esi) = eax;

loc_0011A14E: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(ebp + 0xC) = ebx;
    PUSH32(esp, 0x0011A158u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0011A158: ;
    MEM32(esp + 0x18) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - (double)SMEM32(esp + 0x18)); /* fisub dword ptr [esp + 0x18] */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x0011A168u); RECOMP_ABI_CALL(0x00119F70u, sub_00119F70); /* call 0x00119F70 */

loc_0011A168: ;
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011A17B; /* jge: greater or equal (signed >=) */

loc_0011A171: ;
    edi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */

loc_0011A17B: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0011A1F8; /* jle: less or equal (signed <=) */

loc_0011A17D: ;
    eax = MEM32(esi);
    MEM8(eax) = 0x2E;
    edx = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = edx;
    ebp = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0011A1ED; /* jle: less or equal (signed <=) */

loc_0011A194: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + edi;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0011A1A0;

    /* nop */

loc_0011A1A0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x1C1D88)); /* fmul qword ptr [0x1c1d88] */
    eax = edi + -1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011A1B1; /* jge: greater or equal (signed >=) */

loc_0011A1AD: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    goto loc_0011A1B9;

loc_0011A1B1: ;
    fp_push(MEMD(0x1C1D80)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */

loc_0011A1B9: ;
    PUSH32(esp, 0x0011A1BEu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0011A1BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0011A1CA; /* jge: greater or equal (signed >=) */

loc_0011A1C6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0011A1D4;

loc_0011A1CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011A1D8; /* jle: less or equal (signed <=) */

loc_0011A1CF: ;
    eax = 9;

loc_0011A1D4: ;
    MEM32(esp + 0x18) = eax;

loc_0011A1D8: ;
    fp_top() = RECOMP_FP_PC(fp_top() - (double)SMEM32(esp + 0x18)); /* fisub dword ptr [esp + 0x18] */
    _fb = (uint32_t)(0x30) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x30);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ebp) = LO8(eax);
    edx = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esi) = edx;
    ebp = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0011A1A0; /* jl: less (signed <) */

loc_0011A1ED: ;
    eax = MEM32(esp + 0x14);
    fp_pop(); /* fstp st(0) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0011A1F8: ;
    POP32(esp, edi);
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011A210
 * Original: 0x0011A210 - 0x0011A2D8 (200 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A210: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0011A21Eu); RECOMP_ABI_CALL(0x0011B270u, sub_0011B270); /* call 0x0011B270 */

loc_0011A21E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A2D3; /* je: equal / zero */

loc_0011A229: ;
    /* nop */

loc_0011A230: ;
    ecx = MEM32(ebx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011A23F; /* jl: less (signed <) */

loc_0011A237: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011A2D3; /* jge: greater or equal (signed >=) */

loc_0011A23F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A2AB; /* jne: not equal / not zero */

loc_0011A244: ;
    ecx = MEM32(ebx + 0x210);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A2AB; /* je: equal / zero */

loc_0011A24E: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011A258u); RECOMP_ABI_CALL(0x0011B270u, sub_0011B270); /* call 0x0011B270 */

loc_0011A258: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A269; /* jne: not equal / not zero */

loc_0011A260: ;
    edx = MEM32(esi);
    MEM8(edx) = LO8(eax);
    ecx = MEM32(esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0011A2BB;

loc_0011A269: ;
    _fb = (uint32_t)(0x31) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x31;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_0011A2BE; /* js: sign (negative) */

loc_0011A26E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x210)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x210) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011A2BE; /* jge: greater or equal (signed >=) */

loc_0011A276: ;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ebx + 0x10;
    MEM32(esp + 4) = eax;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A2BE; /* je: equal / zero */

loc_0011A286: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011A290u); RECOMP_ABI_CALL(0x0011B270u, sub_0011B270); /* call 0x0011B270 */

loc_0011A290: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011A299u); RECOMP_ABI_CALL(0x00129C70u, sub_00129C70); /* call 0x00129C70 */

loc_0011A299: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edx));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A286; /* jne: not equal / not zero */

loc_0011A2A9: ;
    goto loc_0011A2BE;

loc_0011A2AB: ;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011A2B4u); RECOMP_ABI_CALL(0x00129C70u, sub_00129C70); /* call 0x00129C70 */

loc_0011A2B4: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011A2BB: ;
    MEM32(esi) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011A2BE: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011A2C8u); RECOMP_ABI_CALL(0x0011B270u, sub_0011B270); /* call 0x0011B270 */

loc_0011A2C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A230; /* jne: not equal / not zero */

loc_0011A2D3: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011A2E0
 * Original: 0x0011A2E0 - 0x0011A338 (88 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0011A2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0011A2E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    esi = ecx;
    MEM32(esp + 0xC) = edi;

loc_0011A2F4: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax + edi * 4)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011A308u); RECOMP_ABI_CALL(0x0011A100u, sub_0011A100); /* call 0x0011A100 */

loc_0011A308: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1C55C4);
    MEM32(esp + 0x1C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011A31Cu); RECOMP_ABI_CALL(0x0011A210u, sub_0011A210); /* call 0x0011A210 */

loc_0011A31C: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    MEM32(esp + 0xC) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0011A2F4; /* jl: less (signed <) */

loc_0011A32F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011A340
 * Original: 0x0011A340 - 0x0011AF8A (3146 bytes, 1032 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A340(void)
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

loc_0011A340: ;
    _fb = (uint32_t)(0x440) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x440;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x444);
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x450);
    edx = MEM32(ebp);
    MEM32(esp + 0x18) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x28 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x23C) = ebx;
    MEM32(esp + 0x240) = eax;
    MEM32(esp + 0x244) = 0xFFFFFFFFu;
    MEM32(esp + 0x248) = eax;
    MEM32(esp + 0x44C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0011A9C7; /* jne: not equal / not zero */

loc_0011A398: ;
    ecx = edx + 1;
    MEM32(ebp) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A9B1; /* je: equal / zero */

loc_0011A3A9: ;
    /* nop */

loc_0011A3B0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x29 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A9B6; /* je: equal / zero */

loc_0011A3B9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A3C1; /* jne: not equal / not zero */

loc_0011A3BE: ;
    MEM32(ebp) = MEM32(ebp) + 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011A3C1: ;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = esp + eax + 0x24C;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ebp);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x28 (32-bit) */
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x238) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0011A476; /* jne: not equal / not zero */

loc_0011A3FB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = eax;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A463; /* je: equal / zero */

loc_0011A406: ;
    esi = MEM32(esp + 0x460);
    edi = MEM32(esp + 0x45C);

loc_0011A414: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x29 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A468; /* je: equal / zero */

loc_0011A419: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A421; /* jne: not equal / not zero */

loc_0011A41E: ;
    MEM32(ebp) = MEM32(ebp) + 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011A421: ;
    edx = MEM32(esp + 0x238);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = edx << 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esp + 0x24;
    eax = esp + edx + 0x40;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x0011A440u); RECOMP_ABI_CALL(0x0011A340u, sub_0011A340); /* call 0x0011A340 */

loc_0011A440: ;
    edx = MEM32(esp + 0x2C);
    MEM8(edx) = 0;
    ecx = MEM32(esp + 0x248);
    eax = MEM32(ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x238) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A414; /* jne: not equal / not zero */

loc_0011A463: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x29 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A472; /* jne: not equal / not zero */

loc_0011A468: ;
    eax = MEM32(ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = eax;
    ecx = (uint32_t)(int32_t)SMEM8(eax);

loc_0011A472: ;
    ebx = MEM32(esp + 0x28);

loc_0011A476: ;
    eax = ecx + -32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0011A4B3; /* ja: above (unsigned >) */

loc_0011A47E: ;
    edx = ZX8(MEM8(eax + 0x11AFA4));
    { uint32_t _jt = MEM32(edx * 4 + 0x11AF8C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0011A48Cu) goto loc_0011A48C;
    if (_jt == 0x0011A49Fu) goto loc_0011A49F;
    if (_jt == 0x0011A4A4u) goto loc_0011A4A4;
    if (_jt == 0x0011A4A9u) goto loc_0011A4A9;
    if (_jt == 0x0011A4AEu) goto loc_0011A4AE;
    if (_jt == 0x0011A4B3u) goto loc_0011A4B3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0011A48C: ;
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0011A48F: ;
    eax = MEM32(ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = ebx;
    MEM32(ebp) = eax;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    goto loc_0011A476;

loc_0011A49F: ;
    ebx = ebx | 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0011A48F;

loc_0011A4A4: ;
    ebx = ebx | 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0011A48F;

loc_0011A4A9: ;
    ebx = ebx | 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0011A48F;

loc_0011A4AE: ;
    ebx = ebx | 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0011A48F;

loc_0011A4B3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A4EC; /* jne: not equal / not zero */

loc_0011A4B8: ;
    eax = MEM32(ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = eax;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    eax = MEM32(esp + 0x45C);
    edi = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi;
    MEM32(eax) = edi;
    edx = MEM32(edx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x2C) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0011A528; /* jge: greater or equal (signed >=) */

loc_0011A4DD: ;
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = edx;
    goto loc_0011A528;

loc_0011A4EC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011A521; /* jl: less (signed <) */

loc_0011A4F1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011A521; /* jg: greater (signed >) */

loc_0011A4F6: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0011A500;

    /* nop */

loc_0011A500: ;
    eax = edx + edx * 4;
    edx = ecx + eax * 2 + -48;
    ecx = MEM32(ebp);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    MEM32(esp + 0x2C) = edx;
    MEM32(ebp) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011A521; /* jl: less (signed <) */

loc_0011A51C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011A500; /* jle: less or equal (signed <=) */

loc_0011A521: ;
    eax = MEM32(esp + 0x45C);

loc_0011A528: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A537; /* jne: not equal / not zero */

loc_0011A52D: ;
    ecx = MEM32(ebp);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(ecx);

loc_0011A537: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A562; /* jne: not equal / not zero */

loc_0011A53C: ;
    esi = MEM32(ebp);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = esi;
    edx = MEM32(eax);
    ecx = esi;
    ecx = (uint32_t)(int32_t)SMEM8(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(edx + -4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(esp + 0x30) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0011A593; /* jge: greater or equal (signed >=) */

loc_0011A55C: ;
    MEM32(esp + 0x30) = esi;
    goto loc_0011A593;

loc_0011A562: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011A591; /* jl: less (signed <) */

loc_0011A567: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011A591; /* jg: greater (signed >) */

loc_0011A56C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011A570: ;
    edx = edx + edx * 4;
    edx = ecx + edx * 2 + -48;
    ecx = MEM32(ebp);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = edx;
    MEM32(ebp) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011A593; /* jl: less (signed <) */

loc_0011A58A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011A570; /* jle: less or equal (signed <=) */

loc_0011A58F: ;
    goto loc_0011A593;

loc_0011A591: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011A593: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x4C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A5C7; /* je: equal / zero */

loc_0011A598: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x68 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011A5C2; /* je: equal / zero */

loc_0011A59D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A5CF; /* jne: not equal / not zero */

loc_0011A5A2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011A5AF; /* je: equal / zero */

loc_0011A5A7: ;
    ebx = ebx | 0x100;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0011A5B2;

loc_0011A5AF: ;
    ebx = ebx | 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0011A5B2: ;
    ecx = MEM32(ebp);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = ebx;
    MEM32(ebp) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(ecx);
    goto loc_0011A593;

loc_0011A5C2: ;
    ebx = ebx | 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0011A5B2;

loc_0011A5C7: ;
    ebx = ebx | 0x180;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0011A5B2;

loc_0011A5CF: ;
    edx = ecx + -68;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x34 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0011A8D1; /* ja: above (unsigned >) */

loc_0011A5DB: ;
    edx = ZX8(MEM8(edx + 0x11AFF0));
    { uint32_t _jt = MEM32(edx * 4 + 0x11AFB8); /* switch: 14 entries, 14 targets */
    if (_jt == 0x0011A5E9u) goto loc_0011A5E9;
    if (_jt == 0x0011A61Au) goto loc_0011A61A;
    if (_jt == 0x0011A668u) goto loc_0011A668;
    if (_jt == 0x0011A6B2u) goto loc_0011A6B2;
    if (_jt == 0x0011A6ECu) goto loc_0011A6EC;
    if (_jt == 0x0011A701u) goto loc_0011A701;
    if (_jt == 0x0011A70Fu) goto loc_0011A70F;
    if (_jt == 0x0011A738u) goto loc_0011A738;
    if (_jt == 0x0011A761u) goto loc_0011A761;
    if (_jt == 0x0011A796u) goto loc_0011A796;
    if (_jt == 0x0011A7F0u) goto loc_0011A7F0;
    if (_jt == 0x0011A84Au) goto loc_0011A84A;
    if (_jt == 0x0011A8ABu) goto loc_0011A8AB;
    if (_jt == 0x0011A8D1u) goto loc_0011A8D1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0011A5E9: ;
    edx = MEM32(eax);
    esi = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    eax = edx;
    eax = MEM32(eax + -4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011A600u); RECOMP_ABI_CALL(0x00129C70u, sub_00129C70); /* call 0x00129C70 */

loc_0011A600: ;
    ecx = MEM32(ebp);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = esi;
    eax = 1;
    MEM32(ebp) = ecx;
    goto loc_0011A8D3;

loc_0011A61A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    ecx = MEM32(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0011A62E; /* je: equal / zero */

loc_0011A621: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + -4);
    goto loc_0011A64E;

loc_0011A62E: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011A644; /* je: equal / zero */

loc_0011A633: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = MEM32(ecx + -8);
    ecx = MEM32(ecx + -4);
    MEM32(esp + 0x14) = ecx;
    goto loc_0011A653;

loc_0011A644: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = MEM32(eax + -4);

loc_0011A64E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esp + 0x14) = edx;

loc_0011A653: ;
    ecx = esp + 0x28;
    edx = esp + 0x18;
    PUSH32(esp, 0x0011A660u); RECOMP_ABI_CALL(0x00119FD0u, sub_00119FD0); /* call 0x00119FD0 */

loc_0011A660: ;
    MEM32(ebp) = MEM32(ebp) + 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0011A8D3;

loc_0011A668: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    ecx = MEM32(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0011A67C; /* je: equal / zero */

loc_0011A66F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + -4);
    goto loc_0011A698;

loc_0011A67C: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011A68E; /* je: equal / zero */

loc_0011A681: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = MEM32(ecx + -8);
    edx = MEM32(ecx + -4);
    goto loc_0011A699;

loc_0011A68E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = MEM32(eax + -4);

loc_0011A698: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */

loc_0011A699: ;
    MEM32(esp + 0x14) = edx;
    ecx = esp + 0x28;
    edx = esp + 0x18;
    PUSH32(esp, 0x0011A6AAu); RECOMP_ABI_CALL(0x00119FD0u, sub_00119FD0); /* call 0x00119FD0 */

loc_0011A6AA: ;
    MEM32(ebp) = MEM32(ebp) + 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0011A8D3;

loc_0011A6B2: ;
    edi = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    eax = edi;
    fp_push(MEMD(eax + -8)); /* fld double */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0011A6CF; /* jns: not sign (positive) */

loc_0011A6C8: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    goto loc_0011A6D4;

loc_0011A6CF: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);

loc_0011A6D4: ;
    eax = esp + 0x24;
    PUSH32(esp, 0x0011A6DDu); RECOMP_ABI_CALL(0x0011A100u, sub_0011A100); /* call 0x0011A100 */

loc_0011A6DD: ;
    ecx = MEM32(ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = ecx;
    goto loc_0011A8D3;

loc_0011A6EC: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    eax = edx;
    edx = MEM32(eax + -4);
    eax = MEM32(esp + 0x460);
    MEM32(edx) = eax;

loc_0011A701: ;
    ecx = MEM32(ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = ecx;
    goto loc_0011A8D3;

loc_0011A70F: ;
    ebx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    eax = ebx;
    edx = MEM32(eax + -4);
    PUSH32(esp, esi);
    esi = esp + 0x2C;
    eax = esp + 0x1C;
    PUSH32(esp, 0x0011A729u); RECOMP_ABI_CALL(0x0011A050u, sub_0011A050); /* call 0x0011A050 */

loc_0011A729: ;
    ecx = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = ecx;
    goto loc_0011A8D3;

loc_0011A738: ;
    edi = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    eax = edi;
    ecx = MEM32(eax + -4);
    PUSH32(esp, ecx);
    ebx = esp + 0x2C;
    esi = esp + 0x1C;
    PUSH32(esp, 0x0011A752u); RECOMP_ABI_CALL(0x0011A210u, sub_0011A210); /* call 0x0011A210 */

loc_0011A752: ;
    ecx = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = ecx;
    goto loc_0011A8D3;

loc_0011A761: ;
    ebx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    ecx = MEM32(0x1DB454);
    eax = ebx;
    eax = MEM32(eax + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011A779u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_0011A779: ;
    PUSH32(esp, eax);
    ebx = esp + 0x2C;
    esi = esp + 0x1C;
    PUSH32(esp, 0x0011A787u); RECOMP_ABI_CALL(0x0011A210u, sub_0011A210); /* call 0x0011A210 */

loc_0011A787: ;
    ecx = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = ecx;
    goto loc_0011A8D3;

loc_0011A796: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    ecx = MEM32(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0011A7AF; /* je: equal / zero */

loc_0011A79D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = ZX16(MEM16(eax + -4));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esp + 0x14) = edx;
    goto loc_0011A7D3;

loc_0011A7AF: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011A7C5; /* je: equal / zero */

loc_0011A7B4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    edx = MEM32(ecx + -4);
    eax = MEM32(ecx + -8);
    MEM32(esp + 0x14) = edx;
    goto loc_0011A7D3;

loc_0011A7C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = MEM32(eax + -4);
    MEM32(esp + 0x14) = esi;

loc_0011A7D3: ;
    PUSH32(esp, eax);
    edi = esp + 0x2C;
    eax = esp + 0x1C;
    PUSH32(esp, 0x0011A7E1u); RECOMP_ABI_CALL(0x0011A020u, sub_0011A020); /* call 0x0011A020 */

loc_0011A7E1: ;
    ecx = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = ecx;
    goto loc_0011A8D3;

loc_0011A7F0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    ecx = MEM32(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0011A809; /* je: equal / zero */

loc_0011A7F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = ZX16(MEM16(eax + -4));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esp + 0x14) = edx;
    goto loc_0011A82D;

loc_0011A809: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011A81F; /* je: equal / zero */

loc_0011A80E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = MEM32(ecx + -8);
    ecx = MEM32(ecx + -4);
    MEM32(esp + 0x14) = ecx;
    goto loc_0011A82D;

loc_0011A81F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = MEM32(eax + -4);
    MEM32(esp + 0x14) = esi;

loc_0011A82D: ;
    PUSH32(esp, eax);
    edi = esp + 0x2C;
    eax = esp + 0x1C;
    PUSH32(esp, 0x0011A83Bu); RECOMP_ABI_CALL(0x0011A020u, sub_0011A020); /* call 0x0011A020 */

loc_0011A83B: ;
    ecx = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = ecx;
    goto loc_0011A8D3;

loc_0011A84A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    edx = MEM32(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0011A863; /* je: equal / zero */

loc_0011A851: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    eax = edx;
    eax = ZX16(MEM16(eax + -4));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esp + 0x14) = edx;
    goto loc_0011A887;

loc_0011A863: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011A879; /* je: equal / zero */

loc_0011A868: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    eax = MEM32(edx + -8);
    edx = MEM32(edx + -4);
    MEM32(esp + 0x14) = edx;
    goto loc_0011A887;

loc_0011A879: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    eax = edx;
    eax = MEM32(eax + -4);
    MEM32(esp + 0x14) = esi;

loc_0011A887: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x58 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esi = esp + 0x28;
    PUSH32(esp, edx);
    edx = eax;
    eax = esp + 0x1C;
    PUSH32(esp, 0x0011A89Fu); RECOMP_ABI_CALL(0x0011A050u, sub_0011A050); /* call 0x0011A050 */

loc_0011A89F: ;
    ecx = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = ecx;
    goto loc_0011A8D3;

loc_0011A8AB: ;
    edi = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    eax = edi;
    eax = MEM32(eax + -4);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0011A8C5u); RECOMP_ABI_CALL(0x0011A2E0u, sub_0011A2E0); /* call 0x0011A2E0 */

loc_0011A8C5: ;
    ecx = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = ecx;
    goto loc_0011A8D3;

loc_0011A8D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011A8D3: ;
    ebx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011A98D; /* jge: greater or equal (signed >=) */

loc_0011A8DF: ;
    _fa = (uint32_t)(MEM8(esp + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x28), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011A906; /* je: equal / zero */

loc_0011A8E6: ;
    ecx = MEM32(esp + 0x18);
    /* nop */

loc_0011A8F0: ;
    MEM8(ecx) = 0x20;
    edx = MEM32(esp + 0x2C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011A8F0; /* jl: less (signed <) */

loc_0011A8FD: ;
    MEM32(esp + 0x18) = ecx;
    goto loc_0011A98D;

loc_0011A906: ;
    esi = MEM32(esp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(esp + 0x28)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x28), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011A93F; /* je: equal / zero */

loc_0011A913: ;
    eax = MEM32(esp + 0x34);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0x30;
    if (CMP_LE(_fas, _fbs)) goto loc_0011A947; /* jle: less or equal (signed <=) */

loc_0011A925: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011A92Bu); RECOMP_ABI_CALL(0x00128200u, sub_00128200); /* call 0x00128200 */

loc_0011A92B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011A925; /* jl: less (signed <) */

loc_0011A939: ;
    MEM32(esp + 0x24) = esi;
    goto loc_0011A947;

loc_0011A93F: ;
    MEM32(esp + 0x10) = 0x20;

loc_0011A947: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    edx = ebx + esi;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011A958u); RECOMP_ABI_CALL(0x00129C80u, sub_00129C80); /* call 0x00129C80 */

loc_0011A958: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011A989; /* jle: less or equal (signed <=) */

loc_0011A95F: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    edi = MEM32(esp + 0x24);
    ecx = ebx;
    MEM32(esp + 0x10) = ebx;
    SET_LO8(ebx, LO8(eax));
    SET_HI8(ebx, LO8(ebx));
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(eax, LO16(ebx));
    ebx = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_0011A989: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + ebx;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011A98D: ;
    eax = MEM32(esp + 0x18);
    MEM8(eax) = 0;
    eax = MEM32(esp + 0x44C);
    ecx = MEM32(ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x44C) = eax;
    ecx = (uint32_t)(int32_t)SMEM8(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A3B0; /* jne: not equal / not zero */

loc_0011A9B1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x29 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011A9C0; /* jne: not equal / not zero */

loc_0011A9B6: ;
    eax = MEM32(ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = eax;
    ecx = (uint32_t)(int32_t)SMEM8(eax);

loc_0011A9C0: ;
    ebx = MEM32(esp + 0x23C);

loc_0011A9C7: ;
    eax = ecx + -32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0011AA07; /* ja: above (unsigned >) */

loc_0011A9CF: ;
    edx = ZX8(MEM8(eax + 0x11B040));
    { uint32_t _jt = MEM32(edx * 4 + 0x11B028); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0011A9DDu) goto loc_0011A9DD;
    if (_jt == 0x0011A9F3u) goto loc_0011A9F3;
    if (_jt == 0x0011A9F8u) goto loc_0011A9F8;
    if (_jt == 0x0011A9FDu) goto loc_0011A9FD;
    if (_jt == 0x0011AA02u) goto loc_0011AA02;
    if (_jt == 0x0011AA07u) goto loc_0011AA07;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0011A9DD: ;
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0011A9E0: ;
    eax = MEM32(ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x23C) = ebx;
    MEM32(ebp) = eax;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    goto loc_0011A9C7;

loc_0011A9F3: ;
    ebx = ebx | 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0011A9E0;

loc_0011A9F8: ;
    ebx = ebx | 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0011A9E0;

loc_0011A9FD: ;
    ebx = ebx | 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0011A9E0;

loc_0011AA02: ;
    ebx = ebx | 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0011A9E0;

loc_0011AA07: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011AA4B; /* jne: not equal / not zero */

loc_0011AA0C: ;
    esi = MEM32(ebp);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = esi;
    eax = esi;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    eax = MEM32(esp + 0x45C);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(edx + -4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(esp + 0x240) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0011AA94; /* jge: greater or equal (signed >=) */

loc_0011AA36: ;
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x23C) = ebx;
    MEM32(esp + 0x240) = edx;
    goto loc_0011AA96;

loc_0011AA4B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011AA8D; /* jl: less (signed <) */

loc_0011AA50: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011AA8D; /* jg: greater (signed >) */

loc_0011AA55: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0011AA60: ;
    eax = edx + edx * 4;
    edx = ecx + eax * 2 + -48;
    ecx = MEM32(ebp);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    MEM32(esp + 0x240) = edx;
    MEM32(ebp) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011AA84; /* jl: less (signed <) */

loc_0011AA7F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011AA60; /* jle: less or equal (signed <=) */

loc_0011AA84: ;
    eax = MEM32(esp + 0x45C);
    goto loc_0011AA96;

loc_0011AA8D: ;
    eax = MEM32(esp + 0x45C);

loc_0011AA94: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011AA96: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011AAA5; /* jne: not equal / not zero */

loc_0011AA9B: ;
    ecx = MEM32(ebp);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(ecx);

loc_0011AAA5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011AAD4; /* jne: not equal / not zero */

loc_0011AAAA: ;
    edi = MEM32(ebp);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = edi;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    ecx = (uint32_t)(int32_t)SMEM8(ecx);
    MEM32(eax) = edx;
    edx = MEM32(edx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(esp + 0x244) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0011AB02; /* jge: greater or equal (signed >=) */

loc_0011AACB: ;
    MEM32(esp + 0x244) = esi;
    goto loc_0011AB02;

loc_0011AAD4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011AB02; /* jl: less (signed <) */

loc_0011AAD9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011AB02; /* jg: greater (signed >) */

loc_0011AADE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011AAE0: ;
    edx = edx + edx * 4;
    edx = ecx + edx * 2 + -48;
    ecx = MEM32(ebp);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x244) = edx;
    MEM32(ebp) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011AB02; /* jl: less (signed <) */

loc_0011AAFD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011AAE0; /* jle: less or equal (signed <=) */

loc_0011AB02: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x4C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011AB39; /* je: equal / zero */

loc_0011AB07: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x68 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011AB34; /* je: equal / zero */

loc_0011AB0C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011AB41; /* jne: not equal / not zero */

loc_0011AB11: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011AB1E; /* je: equal / zero */

loc_0011AB16: ;
    ebx = ebx | 0x100;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0011AB21;

loc_0011AB1E: ;
    ebx = ebx | 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0011AB21: ;
    ecx = MEM32(ebp);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x23C) = ebx;
    MEM32(ebp) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(ecx);
    goto loc_0011AB02;

loc_0011AB34: ;
    ebx = ebx | 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0011AB21;

loc_0011AB39: ;
    ebx = ebx | 0x180;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0011AB21;

loc_0011AB41: ;
    edx = ecx + -68;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x34 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0011ADF1; /* ja: above (unsigned >) */

loc_0011AB4D: ;
    edx = ZX8(MEM8(edx + 0x11B08C));
    { uint32_t _jt = MEM32(edx * 4 + 0x11B054); /* switch: 14 entries, 14 targets */
    if (_jt == 0x0011AB5Bu) goto loc_0011AB5B;
    if (_jt == 0x0011AB8Du) goto loc_0011AB8D;
    if (_jt == 0x0011ABE1u) goto loc_0011ABE1;
    if (_jt == 0x0011AC56u) goto loc_0011AC56;
    if (_jt == 0x0011ACC9u) goto loc_0011ACC9;
    if (_jt == 0x0011ACE3u) goto loc_0011ACE3;
    if (_jt == 0x0011AD16u) goto loc_0011AD16;
    if (_jt == 0x0011AD24u) goto loc_0011AD24;
    if (_jt == 0x0011AD63u) goto loc_0011AD63;
    if (_jt == 0x0011AD98u) goto loc_0011AD98;
    if (_jt == 0x0011ADEEu) goto loc_0011ADEE;
    if (_jt == 0x0011ADF1u) goto loc_0011ADF1;
    if (_jt == 0x0011AE38u) goto loc_0011AE38;
    if (_jt == 0x0011AEA6u) goto loc_0011AEA6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0011AB5B: ;
    ebx = MEM32(eax);
    edi = MEM32(esp + 0x454);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    ecx = MEM32(edi);
    eax = ebx;
    eax = MEM32(eax + -4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011AB77u); RECOMP_ABI_CALL(0x00129C70u, sub_00129C70); /* call 0x00129C70 */

loc_0011AB77: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = 1;
    MEM32(ebp) = eax;
    goto loc_0011ADF8;

loc_0011AB8D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    ecx = MEM32(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0011ABA1; /* je: equal / zero */

loc_0011AB94: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + -4);
    goto loc_0011ABBD;

loc_0011ABA1: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011ABB3; /* je: equal / zero */

loc_0011ABA6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = MEM32(ecx + -8);
    edx = MEM32(ecx + -4);
    goto loc_0011ABBE;

loc_0011ABB3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = MEM32(eax + -4);

loc_0011ABBD: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */

loc_0011ABBE: ;
    edi = MEM32(esp + 0x454);
    MEM32(esp + 0x14) = edx;
    ecx = esp + 0x23C;
    edx = edi;
    PUSH32(esp, 0x0011ABD7u); RECOMP_ABI_CALL(0x00119FD0u, sub_00119FD0); /* call 0x00119FD0 */

loc_0011ABD7: ;
    esi = eax;
    MEM32(ebp) = MEM32(ebp) + 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0011ADF8;

loc_0011ABE1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    ecx = MEM32(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0011ABF5; /* je: equal / zero */

loc_0011ABE8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + -4);
    goto loc_0011AC32;

loc_0011ABF5: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011AC28; /* je: equal / zero */

loc_0011ABFA: ;
    edi = MEM32(esp + 0x454);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = MEM32(ecx + -8);
    ecx = MEM32(ecx + -4);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x23C;
    edx = edi;
    PUSH32(esp, 0x0011AC1Eu); RECOMP_ABI_CALL(0x00119FD0u, sub_00119FD0); /* call 0x00119FD0 */

loc_0011AC1E: ;
    esi = eax;
    MEM32(ebp) = MEM32(ebp) + 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0011ADF8;

loc_0011AC28: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = MEM32(eax + -4);

loc_0011AC32: ;
    edi = MEM32(esp + 0x454);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esp + 0x14) = edx;
    ecx = esp + 0x23C;
    edx = edi;
    PUSH32(esp, 0x0011AC4Cu); RECOMP_ABI_CALL(0x00119FD0u, sub_00119FD0); /* call 0x00119FD0 */

loc_0011AC4C: ;
    esi = eax;
    MEM32(ebp) = MEM32(ebp) + 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0011ADF8;

loc_0011AC56: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0011AC93; /* jns: not sign (positive) */

loc_0011AC5D: ;
    ebx = MEM32(eax);
    edi = MEM32(esp + 0x45C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    eax = ebx;
    fp_push(MEMD(eax + -8)); /* fld double */
    edx = esp + 0x244;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0x0011AC82u); RECOMP_ABI_CALL(0x0011A100u, sub_0011A100); /* call 0x0011A100 */

loc_0011AC82: ;
    esi = eax;
    eax = MEM32(ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = eax;
    goto loc_0011ADF8;

loc_0011AC93: ;
    edi = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    eax = edi;
    fp_push(MEMD(eax + -8)); /* fld double */
    edi = MEM32(esp + 0x45C);
    eax = esp + 0x244;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0x0011ACB8u); RECOMP_ABI_CALL(0x0011A100u, sub_0011A100); /* call 0x0011A100 */

loc_0011ACB8: ;
    esi = eax;
    eax = MEM32(ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = eax;
    goto loc_0011ADF8;

loc_0011ACC9: ;
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x460);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    ecx = MEM32(eax + -4);
    MEM32(ecx) = edx;
    goto loc_0011ADEE;

loc_0011ACE3: ;
    edi = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    eax = edi;
    edx = MEM32(eax + -4);
    edi = MEM32(esp + 0x454);
    PUSH32(esp, esi);
    esi = esp + 0x240;
    eax = edi;
    PUSH32(esp, 0x0011AD05u); RECOMP_ABI_CALL(0x0011A050u, sub_0011A050); /* call 0x0011A050 */

loc_0011AD05: ;
    esi = eax;
    eax = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = eax;
    goto loc_0011ADF8;

loc_0011AD16: ;
    esi = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    eax = esi;
    eax = MEM32(eax + -4);
    goto loc_0011AD3C;

loc_0011AD24: ;
    edi = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    ecx = MEM32(0x1DB454);
    eax = edi;
    eax = MEM32(eax + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011AD3Cu); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_0011AD3C: ;
    edi = MEM32(esp + 0x454);
    PUSH32(esp, eax);
    ebx = esp + 0x240;
    esi = edi;
    PUSH32(esp, 0x0011AD52u); RECOMP_ABI_CALL(0x0011A210u, sub_0011A210); /* call 0x0011A210 */

loc_0011AD52: ;
    esi = eax;
    eax = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = eax;
    goto loc_0011ADF8;

loc_0011AD63: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    ecx = MEM32(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0011AD7C; /* je: equal / zero */

loc_0011AD6A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = ZX16(MEM16(eax + -4));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esp + 0x14) = edx;
    goto loc_0011ADD5;

loc_0011AD7C: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011AD92; /* je: equal / zero */

loc_0011AD81: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = MEM32(ecx + -8);
    ecx = MEM32(ecx + -4);
    MEM32(esp + 0x14) = ecx;
    goto loc_0011ADD5;

loc_0011AD92: ;
    MEM32(esp + 0x14) = esi;
    goto loc_0011ADCB;

loc_0011AD98: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    ecx = MEM32(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0011ADB1; /* je: equal / zero */

loc_0011AD9F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = ZX16(MEM16(eax + -4));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esp + 0x14) = edx;
    goto loc_0011ADD5;

loc_0011ADB1: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011ADC7; /* je: equal / zero */

loc_0011ADB6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    edx = MEM32(ecx + -4);
    eax = MEM32(ecx + -8);
    MEM32(esp + 0x14) = edx;
    goto loc_0011ADD5;

loc_0011ADC7: ;
    MEM32(esp + 0x14) = esi;

loc_0011ADCB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = MEM32(eax + -4);

loc_0011ADD5: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x458);
    edi = esp + 0x240;
    PUSH32(esp, 0x0011ADE9u); RECOMP_ABI_CALL(0x0011A020u, sub_0011A020); /* call 0x0011A020 */

loc_0011ADE9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_0011ADEE: ;
    MEM32(ebp) = MEM32(ebp) + 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011ADF1: ;
    edi = MEM32(esp + 0x454);

loc_0011ADF8: ;
    ebx = MEM32(esp + 0x240);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011AF7D; /* jge: greater or equal (signed >=) */

loc_0011AE07: ;
    _fa = (uint32_t)(MEM8(esp + 0x23C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x23C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011AED9; /* je: equal / zero */

loc_0011AE15: ;
    ecx = MEM32(edi);
    MEM8(ecx) = 0x20;
    edx = MEM32(edi);
    eax = MEM32(esp + 0x240);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(edi) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0011AE15; /* jl: less (signed <) */

loc_0011AE2B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x440) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x440;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011AE38: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    edx = MEM32(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0011AE51; /* je: equal / zero */

loc_0011AE3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    eax = edx;
    eax = ZX16(MEM16(eax + -4));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esp + 0x14) = edx;
    goto loc_0011AE75;

loc_0011AE51: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011AE67; /* je: equal / zero */

loc_0011AE56: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    eax = MEM32(edx + -8);
    edx = MEM32(edx + -4);
    MEM32(esp + 0x14) = edx;
    goto loc_0011AE75;

loc_0011AE67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    eax = edx;
    eax = MEM32(eax + -4);
    MEM32(esp + 0x14) = esi;

loc_0011AE75: ;
    edi = MEM32(esp + 0x454);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x58 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esi = esp + 0x23C;
    PUSH32(esp, edx);
    edx = eax;
    eax = edi;
    PUSH32(esp, 0x0011AE95u); RECOMP_ABI_CALL(0x0011A050u, sub_0011A050); /* call 0x0011A050 */

loc_0011AE95: ;
    esi = eax;
    eax = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = eax;
    goto loc_0011ADF8;

loc_0011AEA6: ;
    esi = MEM32(eax);
    edi = MEM32(esp + 0x454);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    eax = esi;
    eax = MEM32(eax + -4);
    PUSH32(esp, eax);
    eax = esp + 0x240;
    ecx = edi;
    PUSH32(esp, 0x0011AEC8u); RECOMP_ABI_CALL(0x0011A2E0u, sub_0011A2E0); /* call 0x0011A2E0 */

loc_0011AEC8: ;
    esi = eax;
    eax = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = eax;
    goto loc_0011ADF8;

loc_0011AED9: ;
    SET_LO8(eax, MEM8(esp + 0x23C));
    ebp = MEM32(esp + 0x20);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011AF2A; /* je: equal / zero */

loc_0011AEEA: ;
    eax = MEM32(esp + 0x248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = 0x30;
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0011AF32; /* jle: less or equal (signed <=) */

loc_0011AF05: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0011AF0Bu); RECOMP_ABI_CALL(0x00128200u, sub_00128200); /* call 0x00128200 */

loc_0011AF0B: ;
    ecx = MEM32(esp + 0x24C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0011AF05; /* jl: less (signed <) */

loc_0011AF24: ;
    MEM32(esp + 0x20) = ebp;
    goto loc_0011AF32;

loc_0011AF2A: ;
    MEM32(esp + 0x1C) = 0x20;

loc_0011AF32: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    eax = ebx + ebp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011AF41u); RECOMP_ABI_CALL(0x00129C80u, sub_00129C80); /* call 0x00129C80 */

loc_0011AF41: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011AF79; /* jle: less or equal (signed <=) */

loc_0011AF48: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    edi = MEM32(esp + 0x20);
    ecx = ebx;
    MEM32(esp + 0x10) = ebx;
    SET_LO8(ebx, LO8(eax));
    SET_HI8(ebx, LO8(ebx));
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(eax, LO16(ebx));
    ebx = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(esp + 0x454);

loc_0011AF79: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + ebx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011AF7D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x440) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x440;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011B0D0
 * Original: 0x0011B0D0 - 0x0011B161 (145 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B0D0: ;
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0011B0DDu); RECOMP_ABI_CALL(0x0011B270u, sub_0011B270); /* call 0x0011B270 */

loc_0011B0DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B156; /* je: equal / zero */

loc_0011B0E4: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    /* nop */

loc_0011B0F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B12D; /* jne: not equal / not zero */

loc_0011B0F5: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x25 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B10D; /* jne: not equal / not zero */

loc_0011B0FE: ;
    MEM8(esi) = 0x25;
    ecx = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    goto loc_0011B139;

loc_0011B10D: ;
    PUSH32(esp, edi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011B122u); RECOMP_ABI_CALL(0x0011A340u, sub_0011A340); /* call 0x0011A340 */

loc_0011B122: ;
    esi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0011B13E;

loc_0011B12D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011B134u); RECOMP_ABI_CALL(0x00129C70u, sub_00129C70); /* call 0x00129C70 */

loc_0011B134: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011B139: ;
    MEM32(esp + 0xC) = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011B13E: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011B148u); RECOMP_ABI_CALL(0x0011B270u, sub_0011B270); /* call 0x0011B270 */

loc_0011B148: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B0F0; /* jne: not equal / not zero */

loc_0011B14F: ;
    MEM8(esi) = LO8(eax);
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0011B156: ;
    eax = MEM32(esp + 8);
    MEM8(eax) = 0;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B170
 * Original: 0x0011B170 - 0x0011B182 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B170: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011B181; /* jl: less (signed <) */

loc_0011B179: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011B181; /* jg: greater (signed >) */

loc_0011B17E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011B181: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B190
 * Original: 0x0011B190 - 0x0011B1F5 (101 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B190: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ZX8(MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0011B1F3; /* jns: not sign (positive) */

loc_0011B19D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    PUSH32(esp, edi);
    edx = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0011B1B5; /* je: equal / zero */

loc_0011B1A7: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = 0x80;
    ecx = edx;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B1A7; /* jne: not equal / not zero */

loc_0011B1B5: ;
    ecx = 8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0011B1F3; /* jle: less or equal (signed <=) */

loc_0011B1CC: ;
    /* nop */

loc_0011B1D0: ;
    ecx = ZX8(MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0011B1EE; /* jns: not sign (positive) */

loc_0011B1D8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B1EE; /* jne: not equal / not zero */

loc_0011B1DD: ;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_0011B1D0; /* jg: greater (signed >) */

loc_0011B1EC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011B1EE: ;
    eax = 0x40;

loc_0011B1F3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B200
 * Original: 0x0011B200 - 0x0011B265 (101 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B200: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ZX8(MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0011B263; /* jns: not sign (positive) */

loc_0011B20D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    PUSH32(esp, edi);
    edx = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0011B225; /* je: equal / zero */

loc_0011B217: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = 0x80;
    ecx = edx;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B217; /* jne: not equal / not zero */

loc_0011B225: ;
    ecx = 8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0011B263; /* jle: less or equal (signed <=) */

loc_0011B23C: ;
    /* nop */

loc_0011B240: ;
    ecx = ZX8(MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0011B25E; /* jns: not sign (positive) */

loc_0011B248: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B25E; /* jne: not equal / not zero */

loc_0011B24D: ;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_0011B240; /* jg: greater (signed >) */

loc_0011B25C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011B25E: ;
    eax = 0x2A;

loc_0011B263: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B270
 * Original: 0x0011B270 - 0x0011B27D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B270: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx);
    eax = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B280
 * Original: 0x0011B280 - 0x0011B2AB (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B280: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B2A5; /* je: equal / zero */

loc_0011B289: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B2A5; /* je: equal / zero */

loc_0011B28E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B2A5; /* je: equal / zero */

loc_0011B293: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B2A5; /* je: equal / zero */

loc_0011B298: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B2A5; /* je: equal / zero */

loc_0011B29D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B2A5; /* je: equal / zero */

loc_0011B2A2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0011B2A5: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B2B0
 * Original: 0x0011B2B0 - 0x0011B2E1 (49 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B2B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(esi));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_0011B2D6; /* je: equal / zero */

loc_0011B2C6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011B2DE; /* jge: greater or equal (signed >=) */

loc_0011B2CA: ;
    MEM8(edx + eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B2C6; /* jne: not equal / not zero */

loc_0011B2D6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011B2DE; /* jge: greater or equal (signed >=) */

loc_0011B2DA: ;
    MEM8(edx + eax) = 0;

loc_0011B2DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B2F0
 * Original: 0x0011B2F0 - 0x0011B322 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B2F0: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0011B321; /* je: equal / zero */

loc_0011B300: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0011B302: ;
    edi = ZX8(MEM8(ecx));
    esi = eax;
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi ^ edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = MEM32(esi * 4 + 0x1C57D0);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011B302; /* jne: not equal / not zero */

loc_0011B31F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0011B321: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B330
 * Original: 0x0011B330 - 0x0011B356 (38 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B330: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011B33Au); RECOMP_ABI_CALL(0x001A04F0u, sub_001A04F0); /* call 0x001A04F0 */

loc_0011B33A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B351; /* je: equal / zero */

loc_0011B33E: ;
    PUSH32(esp, 0x1C5BD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B349u); RECOMP_ABI_CALL(0x000E36B0u, sub_000E36B0); /* call 0x000E36B0 */

loc_0011B349: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0011B351: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B360
 * Original: 0x0011B360 - 0x0011B437 (215 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011B360: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(edi));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B394; /* je: equal / zero */

loc_0011B36E: ;
    edi = edi;

loc_0011B370: ;
    SET_LO8(eax, MEM8(esi + edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B394; /* je: equal / zero */

loc_0011B377: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B380u); RECOMP_ABI_CALL(0x0011B280u, sub_0011B280); /* call 0x0011B280 */

loc_0011B380: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B38B; /* je: equal / zero */

loc_0011B387: ;
    MEM8(esi + edi) = 0;

loc_0011B38B: ;
    SET_LO8(eax, MEM8(esi + edi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B370; /* jne: not equal / not zero */

loc_0011B394: ;
    _fa = (uint32_t)(MEM8(esi + edi)) & 0xFFu; _fb = (uint32_t)(0x3D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + edi), 0x3D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B434; /* jne: not equal / not zero */

loc_0011B39E: ;
    MEM8(esi + edi) = 0;
    ecx = (uint32_t)(int32_t)SMEM8(esi + edi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011B3AEu); RECOMP_ABI_CALL(0x0011B280u, sub_0011B280); /* call 0x0011B280 */

loc_0011B3AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B3C8; /* je: equal / zero */

loc_0011B3B5: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + edi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011B3C1u); RECOMP_ABI_CALL(0x0011B280u, sub_0011B280); /* call 0x0011B280 */

loc_0011B3C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B3B5; /* jne: not equal / not zero */

loc_0011B3C8: ;
    eax = MEM32(0x1E3DB0);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011B433; /* jle: less or equal (signed <=) */

loc_0011B3D4: ;
    eax = MEM32(ebx * 4 + 0x1DFDB0);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011B3E5u); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_0011B3E5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B3FA; /* je: equal / zero */

loc_0011B3EC: ;
    eax = MEM32(0x1E3DB0);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011B3D4; /* jl: less (signed <) */

loc_0011B3F6: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011B3FA: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx * 4 + 0x1DFDB0);
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011B41F; /* jne: not equal / not zero */

loc_0011B408: ;
    edx = MEM32(ebp);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011B413u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011B410u); } /* indirect call */
    }

loc_0011B413: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B41F; /* je: equal / zero */

loc_0011B41B: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) | 2;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0011B41F: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0011B433; /* je: equal / zero */

loc_0011B428: ;
    ebx = MEM32(ebx * 4 + 0x1DFDB0);
    MEM32(ebx + 8) = MEM32(ebx + 8) | 1;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0011B433: ;
    POP32(esp, ebx);

loc_0011B434: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B440
 * Original: 0x0011B440 - 0x0011B4F2 (178 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011B440: ;
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x208);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B457u); RECOMP_ABI_CALL(0x00115AE0u, sub_00115AE0); /* call 0x00115AE0 */

loc_0011B457: ;
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011B45Fu); RECOMP_ABI_CALL(0x001155F0u, sub_001155F0); /* call 0x001155F0 */

loc_0011B45F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0011B4E0; /* jle: less or equal (signed <=) */

loc_0011B46C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edi;

loc_0011B470: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011B4A4; /* jge: greater or equal (signed >=) */

loc_0011B476: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1FF (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0011B4A4; /* jae: above or equal (unsigned >=) */

loc_0011B47E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    esi = esp + edi + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011B48Du); RECOMP_ABI_CALL(0x001157C0u, sub_001157C0); /* call 0x001157C0 */

loc_0011B48D: ;
    SET_LO8(eax, MEM8(esi));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B4A4; /* je: equal / zero */

loc_0011B497: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B4A4; /* je: equal / zero */

loc_0011B49B: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011B476; /* jl: less (signed <) */

loc_0011B4A4: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x23);
    PUSH32(esp, ecx);
    MEM8(esp + edi + 0x1C) = 0;
    PUSH32(esp, 0x0011B4B5u); RECOMP_ABI_CALL(0x00129D30u, sub_00129D30); /* call 0x00129D30 */

loc_0011B4B5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B4BF; /* je: equal / zero */

loc_0011B4BC: ;
    MEM8(eax) = 0;

loc_0011B4BF: ;
    edx = MEM32(esp + 0x21C);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B4D3u); RECOMP_ABI_CALL(0x0011B360u, sub_0011B360); /* call 0x0011B360 */

loc_0011B4D3: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011B470; /* jl: less (signed <) */

loc_0011B4DE: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0011B4E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011B4E6u); RECOMP_ABI_CALL(0x00115570u, sub_00115570); /* call 0x00115570 */

loc_0011B4E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B500
 * Original: 0x0011B500 - 0x0011B510 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B500(void)
{

loc_0011B500: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x50) = eax;
    eax = MEM32(eax + 0x38);
    MEM32(ecx + 0x4C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B510
 * Original: 0x0011B510 - 0x0011B5CA (186 bytes, 79 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011B510: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    ebp = MEM32(esi + 0x4C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0011B549; /* jbe: below or equal (unsigned <=) */

loc_0011B522: ;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B52Cu); RECOMP_ABI_CALL(0x00196160u, sub_00196160); /* call 0x00196160 */

loc_0011B52C: ;
    ecx = MEM32(0x1A5F98);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    edx = eax + eax * 2;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0011B541u); RECOMP_ABI_CALL(0x001A0600u, sub_001A0600); /* call 0x001A0600 */

loc_0011B541: ;
    eax = MEM32(esi + 0x14);
    edi = MEM32(esi + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011B549: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0011B588; /* jbe: below or equal (unsigned <=) */

loc_0011B550: ;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B55Au); RECOMP_ABI_CALL(0x00196160u, sub_00196160); /* call 0x00196160 */

loc_0011B55A: ;
    eax = MEM32(esi + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B585; /* je: equal / zero */

loc_0011B563: ;
    eax = MEM32(esi + 0x1C);

loc_0011B566: ;
    ecx = MEM32(0x1A5F98);
    edx = ecx + edi * 2;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0011B578u); RECOMP_ABI_CALL(0x001A0600u, sub_001A0600); /* call 0x001A0600 */

loc_0011B578: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B566; /* jne: not equal / not zero */

loc_0011B585: ;
    _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(esi + 0x28);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011B588: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0011B5C5; /* jbe: below or equal (unsigned <=) */

loc_0011B58F: ;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B599u); RECOMP_ABI_CALL(0x00196160u, sub_00196160); /* call 0x00196160 */

loc_0011B599: ;
    eax = MEM32(esi + 0x2C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B5C5; /* je: equal / zero */

loc_0011B5A2: ;
    eax = MEM32(esi + 0x30);

loc_0011B5A5: ;
    ecx = MEM32(0x1A5F98);
    edx = ecx + edi * 2;
    PUSH32(esp, edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0011B5B8u); RECOMP_ABI_CALL(0x001A0600u, sub_001A0600); /* call 0x001A0600 */

loc_0011B5B8: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B5A5; /* jne: not equal / not zero */

loc_0011B5C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B5D0
 * Original: 0x0011B5D0 - 0x0011B635 (101 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B5D0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B5DC; /* jne: not equal / not zero */

loc_0011B5DA: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0011B5DC: ;
    MEM32(eax + 8) = 0;
    eax = MEM32(edi + 0x54);
    ecx = MEM32(0x1DC340);
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B62D; /* je: equal / zero */

loc_0011B5F4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(eax + 4) = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0xC;

loc_0011B600: ;
    edx = MEM32(edi + 0x54);
    ecx = MEM32(esi + edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B622; /* je: equal / zero */

loc_0011B60A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0011B60Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011B60Cu); } /* indirect call */
    }

loc_0011B60F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B622; /* je: equal / zero */

loc_0011B613: ;
    eax = MEM32(edi + 0x54);
    ecx = ebx;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 8) = MEM32(eax + 8) | edx;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0011B622: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011B600; /* jl: less (signed <) */

loc_0011B62B: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0011B62D: ;
    eax = MEM32(edi + 0x54);
    eax = MEM32(eax + 8);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B640
 * Original: 0x0011B640 - 0x0011B65D (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B640: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B64C; /* jne: not equal / not zero */

loc_0011B647: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0011B64C: ;
    eax = MEM32(ecx + 0x44);
    ecx = MEM32(eax + 4);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B660
 * Original: 0x0011B660 - 0x0011B663 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B660(void)
{

loc_0011B660: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B670
 * Original: 0x0011B670 - 0x0011B72D (189 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011B670: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x24);
    esi = ecx;
    PUSH32(esp, 0x0011B67Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011B67D: ;
    ecx = MEM32(esi + 0x40);
    MEM32(esi + 0x54) = eax;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x54);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 4) = 0xFFFFFFFFu;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x18;
    /* nop */

loc_0011B6A0: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x54);
    edx = MEM32(edi + ecx + -24);
    MEM32(edi + eax + -12) = edx;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(edi + eax + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011B6C3; /* jne: not equal / not zero */

loc_0011B6BA: ;
    MEM32(edi + eax) = 0;
    goto loc_0011B717;

loc_0011B6C3: ;
    eax = MEM32(eax);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B6CEu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011B6CE: ;
    ecx = MEM32(esi + 0x54);
    MEM32(edi + ecx) = eax;
    edx = MEM32(esi + 0x50);
    eax = MEM32(edx + ebp + 0x1C);
    ecx = MEM32(eax + 4);
    edx = MEM32(esi + 0x4C);
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ecx + edx * 8;
    ecx = MEM32(esi + 0x54);
    eax = MEM32(edi + ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011B717; /* jle: less or equal (signed <=) */

loc_0011B6F9: ;
    ecx = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0011B700: ;
    ebx = MEM32(ecx + eax);
    MEM32(eax) = ebx;
    ebx = MEM32(ecx + eax + 4);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(esi + 0x54);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011B700; /* jl: less (signed <) */

loc_0011B717: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x24 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011B6A0; /* jl: less (signed <) */

loc_0011B726: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B730
 * Original: 0x0011B730 - 0x0011B7FA (202 bytes, 70 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B730(void)
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

loc_0011B730: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x54);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebx;
    ebp = 0xC;

loc_0011B747: ;
    ecx = ebx;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 8), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011B7E1; /* je: equal / zero */

loc_0011B759: ;
    ecx = MEM32(edx + ebp + 0xC);
    edx = MEM32(esi + 0x50);
    eax = MEM32(edx + ebx * 8 + 0x1C);
    edi = MEM32(esi + 0x4C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x0011B773u); RECOMP_ABI_CALL(0x00196890u, sub_00196890); /* call 0x00196890 */

loc_0011B773: ;
    ecx = MEM32(esi + 0x54);
    ecx = MEM32(ecx + ebp);
    edx = MEM32(ecx);
    eax = eax + edi * 8;
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0011B785u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011B782u); } /* indirect call */
    }

loc_0011B785: ;
    edx = MEM32(esi + 0x54);
    ecx = MEM32(edx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011B7E1; /* jle: less or equal (signed <=) */

loc_0011B790: ;
    ecx = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x18);
    edx = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0011B7A0: ;
    edx = MEM32(eax);
    MEM32(esp + 0x1C) = edx;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    edx = MEM32(eax + 4);
    MEM32(esp + 0x20) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + -4)); /* fadd dword ptr [ecx - 4] */
    MEM32(ebx + ecx + -8) = edx;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    MEM32(ebx + ecx + -4) = edx;
    edx = MEM32(esi + 0x54);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011B7A0; /* jl: less (signed <) */

loc_0011B7DD: ;
    ebx = MEM32(esp + 0x14);

loc_0011B7E1: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x18 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0011B747; /* jl: less (signed <) */

loc_0011B7F2: ;
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
 * sub_0011B800
 * Original: 0x0011B800 - 0x0011B85B (91 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B800: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax) = 0x1C5C28;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(0x1E3DB4) = MEM32(0x1E3DB4) + 1;
    _fa = (uint32_t)(MEM32(0x1E3DB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x60) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B860
 * Original: 0x0011B860 - 0x0011B8EE (142 bytes, 47 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B860: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C5C28;
    MEM32(0x1E3DB4) = MEM32(0x1E3DB4) - 1;
    _fa = (uint32_t)(MEM32(0x1E3DB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B8BD; /* je: equal / zero */

loc_0011B876: ;
    PUSH32(esp, edi);
    edi = 0x18;
    /* nop */

loc_0011B880: ;
    eax = MEM32(esi + 0x54);
    eax = MEM32(edi + eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B89D; /* je: equal / zero */

loc_0011B88A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B890u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011B890: ;
    ecx = MEM32(esi + 0x54);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + ecx) = 0;

loc_0011B89D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x24 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011B880; /* jl: less (signed <) */

loc_0011B8A5: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011B8BD; /* je: equal / zero */

loc_0011B8AD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B8B3u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011B8B3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x54) = 0;

loc_0011B8BD: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B8E5; /* je: equal / zero */

loc_0011B8C4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B8CAu); RECOMP_ABI_CALL(0x00197CB0u, sub_00197CB0); /* call 0x00197CB0 */

loc_0011B8CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011B8DE; /* je: equal / zero */

loc_0011B8CE: ;
    PUSH32(esp, 0x1C3ED8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B8D9u); RECOMP_ABI_CALL(0x000E36B0u, sub_000E36B0); /* call 0x000E36B0 */

loc_0011B8D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011B8DE: ;
    MEM32(esi + 0x44) = 0;

loc_0011B8E5: ;
    MEM32(esi + 0x48) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B8F0
 * Original: 0x0011B8F0 - 0x0011B9A5 (181 bytes, 75 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B8F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + edi;
    PUSH32(esp, eax);
    MEM32(esi + 0x48) = edi;
    PUSH32(esp, 0x0011B90Eu); RECOMP_ABI_CALL(0x00196920u, sub_00196920); /* call 0x00196920 */

loc_0011B90E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x44) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x8007000Eu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    if ((_fa == 0)) goto loc_0011B93C; /* je: equal / zero */

loc_0011B923: ;
    PUSH32(esp, 0x1C3EB8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B92Eu); RECOMP_ABI_CALL(0x000E36B0u, sub_000E36B0); /* call 0x000E36B0 */

loc_0011B92E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C5C30);
    PUSH32(esp, 0x0011B939u); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_0011B939: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011B93C: ;
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esi + 0x34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0011B9A1; /* je: equal / zero */

loc_0011B944: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(eax + 4);
    eax = edx + ecx * 2;
    ecx = MEM32(esi + 0x18);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0011B97B; /* jbe: below or equal (unsigned <=) */

loc_0011B95B: ;
    goto loc_0011B960;

    /* nop */

loc_0011B960: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B96Du); RECOMP_ABI_CALL(0x000F54B0u, sub_000F54B0); /* call 0x000F54B0 */

loc_0011B96D: ;
    _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esi + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0011B960; /* jb: below (unsigned <) */

loc_0011B97B: ;
    ecx = MEM32(esi + 0x2C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0011B9A1; /* jbe: below or equal (unsigned <=) */

loc_0011B986: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011B993u); RECOMP_ABI_CALL(0x000F5260u, sub_000F5260); /* call 0x000F5260 */

loc_0011B993: ;
    _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esi + 0x38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0011B986; /* jb: below (unsigned <) */

loc_0011B9A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011B9B0
 * Original: 0x0011B9B0 - 0x0011B9CE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B9B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0011B9B8u); RECOMP_ABI_CALL(0x0011B860u, sub_0011B860); /* call 0x0011B860 */

loc_0011B9B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011B9C8; /* je: equal / zero */

loc_0011B9BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011B9C5u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011B9C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011B9C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011B9D0
 * Original: 0x0011B9D0 - 0x0011BA74 (164 bytes, 58 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011B9D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0xC) = eax;
    eax = eax + eax * 2;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0011BA22; /* jbe: below or equal (unsigned <=) */

loc_0011B9F9: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011BA01u); RECOMP_ABI_CALL(0x000F3D90u, sub_000F3D90); /* call 0x000F3D90 */

loc_0011BA01: ;
    ecx = MEM32(esi + 0x18);
    MEM32(esi + 0x1C) = eax;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(esi + 8);
    eax = eax + eax + 2;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x24) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x28) = eax;

loc_0011BA22: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x2C) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0011BA59; /* jbe: below or equal (unsigned <=) */

loc_0011BA2D: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011BA38u); RECOMP_ABI_CALL(0x000F3D60u, sub_000F3D60); /* call 0x000F3D60 */

loc_0011BA38: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(esi + 0x30) = eax;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)eax);
    MEM32(esi + 0x38) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM32(esi + 0x34) = edx;
    MEM32(esi + 0x3C) = eax;

loc_0011BA59: ;
    eax = MEM32(esi + 0x3C);
    edx = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi + 0x40) = eax;
    PUSH32(esp, 0x0011BA70u); RECOMP_ABI_CALL(0x0011B8F0u, sub_0011B8F0); /* call 0x0011B8F0 */

loc_0011BA70: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0011BA80
 * Original: 0x0011BA80 - 0x0011BAB3 (51 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BA80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BA99; /* je: equal / zero */

loc_0011BA8D: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011BA96u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011BA96: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011BA99: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BAAA; /* je: equal / zero */

loc_0011BA9E: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011BAA7u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011BAA7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011BAAA: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011BAC0
 * Original: 0x0011BAC0 - 0x0011BFBC (1276 bytes, 413 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011BAC0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BADE; /* je: equal / zero */

loc_0011BAD2: ;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011BADBu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011BADB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011BADE: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BAEF; /* je: equal / zero */

loc_0011BAE3: ;
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011BAECu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011BAEC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011BAEF: ;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 0x10) = esi;
    esi = MEM32(esp + 0x34);
    edx = ZX8(MEM8(esi + 6));
    eax = ZX8(MEM8(esi + 5));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = edx;
    eax = ZX8(MEM8(esi + 2));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = 0x40;
    ecx = 0x10;
    if ((_fa == 0)) goto loc_0011BBDE; /* je: equal / zero */

loc_0011BB1E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0011BB95; /* je: equal / zero */

loc_0011BB21: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011BBD2; /* jne: not equal / not zero */

loc_0011BB28: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BBD2; /* jne: not equal / not zero */

loc_0011BB33: ;
    SET_LO8(eax, MEM8(esi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BBD2; /* jne: not equal / not zero */

loc_0011BB3E: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BBD2; /* jne: not equal / not zero */

loc_0011BB49: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), 8 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BBD2; /* jne: not equal / not zero */

loc_0011BB53: ;
    ebx = 0x20;
    PUSH32(esp, 0x400);
    MEM32(edi + 8) = 0x100;
    MEM32(edi + 0x10) = ebx;
    PUSH32(esp, 0x0011BB6Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011BB6C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x18) = eax;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011BB76: ;
    MEM8(ecx + 2) = LO8(eax);
    MEM8(ecx + 1) = LO8(eax);
    MEM8(ecx) = LO8(eax);
    MEM8(ecx + 3) = 0xFF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011BB76; /* jl: less (signed <) */

loc_0011BB8D: ;
    MEM32(edi + 0xC) = ebp;
    MEM8(esi + 7) = LO8(ebx);
    goto loc_0011BC12;

loc_0011BB95: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BBA5; /* jne: not equal / not zero */

loc_0011BB9C: ;
    MEM32(edi + 0xC) = 0x20;
    goto loc_0011BC12;

loc_0011BBA5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x18) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x18 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BBB4; /* jne: not equal / not zero */

loc_0011BBA9: ;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x11), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011BC12; /* jne: not equal / not zero */

loc_0011BBAF: ;
    MEM32(edi + 0xC) = ecx;
    goto loc_0011BC12;

loc_0011BBB4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BBC1; /* jne: not equal / not zero */

loc_0011BBB8: ;
    MEM32(edi + 0xC) = 8;
    goto loc_0011BC12;

loc_0011BBC1: ;
    ecx = ZX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1C5C64);
    PUSH32(esp, 0x0011BBCFu); RECOMP_ABI_CALL(0x0012C711u, sub_0012C711); /* call 0x0012C711 */

loc_0011BBCF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011BBD2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011BBDE: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BBD2; /* jne: not equal / not zero */

loc_0011BBE4: ;
    SET_LO8(eax, MEM8(esi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BBD2; /* jne: not equal / not zero */

loc_0011BBEB: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BBD2; /* jne: not equal / not zero */

loc_0011BBF2: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), 8 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BBD2; /* jne: not equal / not zero */

loc_0011BBF8: ;
    SET_LO8(eax, MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x18) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x18 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BC04; /* jne: not equal / not zero */

loc_0011BBFF: ;
    MEM32(edi + 0x10) = ecx;
    goto loc_0011BC0F;

loc_0011BC04: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BBD2; /* jne: not equal / not zero */

loc_0011BC08: ;
    MEM32(edi + 0x10) = 0x20;

loc_0011BC0F: ;
    MEM32(edi + 0xC) = ebp;

loc_0011BC12: ;
    edx = ZX8(MEM8(esi));
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebp = edx + esi + 0x12;
    if (CMP_EQ(_fa, _fb)) goto loc_0011BC63; /* je: equal / zero */

loc_0011BC20: ;
    eax = ZX8(MEM8(esi + 7));
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x600) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x600 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011BC37; /* jge: greater or equal (signed >=) */

loc_0011BC32: ;
    eax = 0x600;

loc_0011BC37: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011BC3Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011BC3D: ;
    MEM32(edi + 0x18) = eax;
    ecx = ZX8(MEM8(esi + 7));
    ecx = ecx >> 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edi + 8));
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011BC53u); RECOMP_ABI_CALL(0x000F5860u, sub_000F5860); /* call 0x000F5860 */

loc_0011BC53: ;
    edx = ZX8(MEM8(esi + 7));
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(edi + 8));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011BC63: ;
    eax = ZX8(MEM8(esi + 0x10));
    ecx = ZX16(MEM16(esi + 0xC));
    edx = ZX16(MEM16(esi + 0xE));
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011BC7Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011BC7E: ;
    MEM32(edi + 0x14) = eax;
    edx = ZX16(MEM16(esi + 0xE));
    ebx = ZX16(MEM16(esi + 0xC));
    ecx = ZX8(MEM8(esi + 0x10));
    MEM32(esp + 0x38) = ebp;
    ebp = edx + -1;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ebx);
    ecx = ecx >> 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011BCE2; /* jle: less or equal (signed <=) */

loc_0011BCA8: ;
    eax = ZX16(MEM16(esi + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    /* nop */

loc_0011BCB0: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0011BCBCu); RECOMP_ABI_CALL(0x000F5860u, sub_000F5860); /* call 0x000F5860 */

loc_0011BCBC: ;
    eax = ZX8(MEM8(esi + 0x10));
    ecx = ZX16(MEM16(esi + 0xC));
    edx = MEM32(esp + 0x40);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x40) = edx;
    edx = ZX16(MEM16(esi + 0xE));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011BCB0; /* jl: less (signed <) */

loc_0011BCE2: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), 0x10 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BD10; /* jne: not equal / not zero */

loc_0011BCE8: ;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x11), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011BD10; /* jne: not equal / not zero */

loc_0011BCEE: ;
    eax = ZX16(MEM16(esi + 0xE));
    edx = ZX16(MEM16(esi + 0xC));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011BD10; /* jle: less or equal (signed <=) */

loc_0011BCFF: ;
    /* nop */

loc_0011BD00: ;
    ecx = MEM32(edi + 0x14);
    MEM8(ecx + eax * 2 + 1) = MEM8(ecx + eax * 2 + 1) | 0x80;
    _fa = (uint32_t)(MEM8(ecx + eax * 2 + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ecx + eax * 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011BD00; /* jl: less (signed <) */

loc_0011BD10: ;
    edx = ZX16(MEM16(esi + 0xC));
    MEM32(edi) = edx;
    eax = ZX16(MEM16(esi + 0xE));
    MEM32(edi + 4) = eax;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), 0x40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BDE0; /* jne: not equal / not zero */

loc_0011BD27: ;
    eax = ZX16(MEM16(esi + 0xC));
    ecx = ZX16(MEM16(esi + 0xE));
    ebp = MEM32(edi + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    SET_LO8(edx, LO8(edx) | 0xFF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BD53; /* je: equal / zero */

loc_0011BD3E: ;
    edi = edi;

loc_0011BD40: ;
    SET_LO8(ecx, MEM8(ebp));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0011BD49; /* jae: above or equal (unsigned >=) */

loc_0011BD47: ;
    SET_LO8(edx, LO8(ecx));

loc_0011BD49: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0011BD4F; /* jbe: below or equal (unsigned <=) */

loc_0011BD4D: ;
    SET_LO8(ebx, LO8(ecx));

loc_0011BD4F: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011BD40; /* jne: not equal / not zero */

loc_0011BD53: ;
    ecx = ZX8(LO8(edx));
    eax = ZX8(LO8(ebx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(esp + 0x34) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_0011BDE0; /* jg: greater (signed >) */

loc_0011BD68: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM32(edi + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0011BDE0; /* je: equal / zero */

loc_0011BD70: ;
    ecx = ZX16(MEM16(esi + 0xC));
    ebx = ZX16(MEM16(esi + 0xE));
    eax = MEM32(edi + 0x14);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BD88; /* je: equal / zero */

loc_0011BD82: ;
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    MEM8(eax) = MEM8(eax) - LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011BD82; /* jne: not equal / not zero */

loc_0011BD88: ;
    eax = ZX8(MEM8(esi + 7));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 8));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011BD9Fu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011BD9F: ;
    ecx = ZX8(MEM8(esi + 7));
    ebp = eax;
    eax = MEM32(edi + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi + 0x18);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0011BDD1u); RECOMP_ABI_CALL(0x000F5860u, sub_000F5860); /* call 0x000F5860 */

loc_0011BDD1: ;
    edx = MEM32(edi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011BDDAu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011BDDA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x18) = ebp;

loc_0011BDE0: ;
    _fa = (uint32_t)(MEM8(esp + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x38), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011BFAD; /* je: equal / zero */

loc_0011BDEB: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BE8D; /* jne: not equal / not zero */

loc_0011BDF5: ;
    eax = ZX16(MEM16(esi + 0xC));
    ecx = ZX16(MEM16(esi + 0xE));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = eax + eax * 2;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011BE09u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011BE09: ;
    edx = ZX16(MEM16(esi + 0xE));
    ebp = eax;
    eax = ZX16(MEM16(esi + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x38) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0011BE67; /* jle: less or equal (signed <=) */

loc_0011BE23: ;
    eax = MEM32(edi + 0x14);
    eax = ZX8(MEM8(ecx + eax));
    edx = eax + eax * 2;
    eax = MEM32(edi + 0x18);
    SET_LO8(ebx, MEM8(eax + edx + 1));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(eax + 2));
    SET_LO8(eax, MEM8(eax));
    MEM8(esp + 0x34) = LO8(eax);
    MEM8(esp + 0x35) = LO8(ebx);
    SET_LO16(ebx, MEM16(esp + 0x34));
    eax = ebp;
    MEM16(eax) = LO16(ebx);
    MEM8(eax + 2) = LO8(edx);
    edx = ZX16(MEM16(esi + 0xC));
    eax = ZX16(MEM16(esi + 0xE));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 3;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011BE23; /* jl: less (signed <) */

loc_0011BE63: ;
    ebp = MEM32(esp + 0x38);

loc_0011BE67: ;
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011BE70u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011BE70: ;
    edx = MEM32(edi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011BE79u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011BE79: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x14) = ebp;
    MEM32(edi + 0x10) = 0;
    MEM32(edi + 0xC) = 0x10;

loc_0011BE8D: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BFAD; /* jne: not equal / not zero */

loc_0011BE97: ;
    eax = ZX16(MEM16(esi + 0xC));
    ecx = ZX16(MEM16(esi + 0xE));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = eax * 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011BEAFu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011BEAF: ;
    edx = ZX16(MEM16(esi + 0xE));
    ebx = eax;
    eax = ZX16(MEM16(esi + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x2C) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0011BF87; /* jle: less or equal (signed <=) */

loc_0011BECD: ;
    eax = 0xFF;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x28) = eax;

loc_0011BEE2: ;
    eax = MEM32(edi + 0x14);
    edx = ZX8(MEM8(ecx + eax));
    eax = MEM32(edi + 0x18);
    ebp = ZX8(MEM8(eax + edx * 4 + 1));
    eax = eax + edx * 4;
    edx = ZX8(MEM8(eax));
    MEM32(esp + 0x38) = edx;
    edx = ZX8(MEM8(eax + 2));
    eax = ZX8(MEM8(eax + 3));
    MEM32(esp + 0x14) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x1C) = edx;
    eax = esp + 0x10;
    if (CMP_G(_fas, _fbs)) goto loc_0011BF1E; /* jg: greater (signed >) */

loc_0011BF1A: ;
    eax = esp + 0x14;

loc_0011BF1E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF (32-bit) */
    SET_LO8(eax, MEM8(eax));
    MEM8(esp + 0x37) = LO8(eax);
    eax = esp + 0x18;
    if (CMP_G(_fas, _fbs)) goto loc_0011BF34; /* jg: greater (signed >) */

loc_0011BF30: ;
    eax = esp + 0x1C;

loc_0011BF34: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFF (32-bit) */
    SET_LO8(edx, MEM8(eax));
    MEM8(esp + 0x36) = LO8(edx);
    eax = esp + 0x20;
    if (CMP_G(_fas, _fbs)) goto loc_0011BF4A; /* jg: greater (signed >) */

loc_0011BF46: ;
    eax = esp + 0x24;

loc_0011BF4A: ;
    SET_LO8(eax, MEM8(eax));
    MEM8(esp + 0x35) = LO8(eax);
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x38), 0xFF (32-bit) */
    eax = esp + 0x28;
    if (CMP_G(_fas, _fbs)) goto loc_0011BF62; /* jg: greater (signed >) */

loc_0011BF5E: ;
    eax = esp + 0x38;

loc_0011BF62: ;
    SET_LO8(edx, MEM8(eax));
    ebx = MEM32(esp + 0x2C);
    MEM8(esp + 0x34) = LO8(edx);
    eax = MEM32(esp + 0x34);
    MEM32(ebx + ecx * 4) = eax;
    edx = ZX16(MEM16(esi + 0xC));
    eax = ZX16(MEM16(esi + 0xE));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011BEE2; /* jl: less (signed <) */

loc_0011BF87: ;
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011BF90u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011BF90: ;
    edx = MEM32(edi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011BF99u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011BF99: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x14) = ebx;
    MEM32(edi + 0x10) = 0;
    MEM32(edi + 0xC) = 0x20;

loc_0011BFAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011BFC0
 * Original: 0x0011BFC0 - 0x0011C169 (425 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BFC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011BFC0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011BFCEu); RECOMP_ABI_CALL(0x00115AE0u, sub_00115AE0); /* call 0x00115AE0 */

loc_0011BFCE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0011BFE0; /* jne: not equal / not zero */

loc_0011BFDB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0011BFE0: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0011BFF6; /* jne: not equal / not zero */

loc_0011BFEF: ;
    ebx = 0x10;
    goto loc_0011C005;

loc_0011BFF6: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx & 0x100;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0011C005: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x24);
    MEM8(0x1E3DBA) = LO8(eax);
    MEM8(0x1E3DB9) = LO8(edx);
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(0x1E3DB8) = 0;
    MEM8(0x1E3DBC) = 0;
    MEM8(0x1E3DBB) = 0;
    MEM8(0x1E3DBD) = LO8(ebx);
    MEM8(0x1E3DBE) = LO8(eax);
    MEM16(0x1E3DC0) = LO16(esi);
    edx = edx & 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    MEM8(0x1E3DBF) = LO8(edx);
    MEM16(0x1E3DC2) = LO16(esi);
    MEM16(0x1E3DC4) = LO16(edi);
    MEM16(0x1E3DC6) = LO16(ebp);
    if (CMP_NE(_fa, _fb)) goto loc_0011C08C; /* jne: not equal / not zero */

loc_0011C083: ;
    MEM8(0x1E3DC8) = 0x10;
    goto loc_0011C0BD;

loc_0011C08C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C099; /* jne: not equal / not zero */

loc_0011C091: ;
    MEM8(0x1E3DC8) = LO8(ecx);
    goto loc_0011C0BD;

loc_0011C099: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C0B6; /* je: equal / zero */

loc_0011C0A1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C0B6; /* je: equal / zero */

loc_0011C0A6: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1C5C74);
    PUSH32(esp, 0x0011C0B1u); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_0011C0B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0011C0BD;

loc_0011C0B6: ;
    MEM8(0x1E3DC8) = 8;

loc_0011C0BD: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x1E3DB8);
    PUSH32(esp, eax);
    MEM8(0x1E3DC9) = 0;
    PUSH32(esp, 0x0011C0D5u); RECOMP_ABI_CALL(0x00115590u, sub_00115590); /* call 0x00115590 */

loc_0011C0D5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C0F0; /* je: equal / zero */

loc_0011C0DC: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011C0EDu); RECOMP_ABI_CALL(0x00115590u, sub_00115590); /* call 0x00115590 */

loc_0011C0ED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011C0F0: ;
    ecx = ZX8(MEM8(0x1E3DC8));
    eax = ebp + -1;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x28);
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((3) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011C151; /* jle: less or equal (signed <=) */

loc_0011C115: ;
    ebx = ebp;
    goto loc_0011C120;

    /* nop */

loc_0011C120: ;
    eax = MEM32(esp + 0x10);
    ecx = ecx >> 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011C132u); RECOMP_ABI_CALL(0x00115590u, sub_00115590); /* call 0x00115590 */

loc_0011C132: ;
    ecx = ZX8(MEM8(0x1E3DC8));
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011C120; /* jne: not equal / not zero */

loc_0011C151: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011C15Bu); RECOMP_ABI_CALL(0x00115570u, sub_00115570); /* call 0x00115570 */

loc_0011C15B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C170
 * Original: 0x0011C170 - 0x0011C31E (430 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C170(void)
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

loc_0011C170: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = esi + 0x20;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 8) = edx;
    MEM32(esi + 4) = edx;
    eax = edi;
    ecx = 4;
    /* nop */

loc_0011C190: ;
    fp_push(MEMF(eax + -8)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xC)); /* fadd dword ptr [esi + 0xc] */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_0011C190; /* jne: not equal / not zero */

loc_0011C1B1: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    ebx = 4;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C9210)); /* fmul dword ptr [0x1c9210] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C9210)); /* fmul dword ptr [0x1c9210] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C9210)); /* fmul dword ptr [0x1c9210] */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi) = edx;
    /* nop */

loc_0011C1E0: ;
    fp_push(MEMF(edi + -8)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    fp_push(MEMF(edi + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xC)); /* fsub dword ptr [esi + 0xc] */
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
    PUSH32(esp, 0x0011C210u); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_0011C210: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011C220; /* jne: not equal / not zero */

loc_0011C21C: ;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0011C222;

loc_0011C220: ;
    fp_pop(); /* fstp st(0) */

loc_0011C222: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011C1E0; /* jne: not equal / not zero */

loc_0011C228: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18)); /* fsub dword ptr [esi + 0x18] */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x1C)); /* fsub dword ptr [esi + 0x1c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x20)); /* fsub dword ptr [esi + 0x20] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18)); /* fsub dword ptr [esi + 0x18] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x1C)); /* fsub dword ptr [esi + 0x1c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x20)); /* fsub dword ptr [esi + 0x20] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x80) = eax;
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x80)); /* fld float */
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    fp_push(MEMF(esi + 0x78)); /* fld float */
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
    PUSH32(esp, 0x0011C2D1u); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_0011C2D1: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) / fp_top()); /* fdivr dword ptr [0x1c91d0] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x78)); /* fmul dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x7C)); /* fmul dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x80)); /* fmul dword ptr [esi + 0x80] */
    MEMF(esi + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    POP32(esp, edi);
    MEMF(esi + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_0011C320
 * Original: 0x0011C320 - 0x0011C4CD (429 bytes, 131 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C320(void)
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

loc_0011C320: ;
    eax = MEM32(0x1DE3E8);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0011C340; /* je: equal / zero */

loc_0011C334: ;
    PUSH32(esp, edi);
    MEM32(0x1DE3E8) = edi;
    PUSH32(esp, 0x0011C340u); RECOMP_ABI_CALL(0x001931B0u, sub_001931B0); /* call 0x001931B0 */

loc_0011C340: ;
    _fa = (uint32_t)(MEM32(esp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x68), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C34D; /* je: equal / zero */

loc_0011C346: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C359; /* jne: not equal / not zero */

loc_0011C34D: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C359; /* jne: not equal / not zero */

loc_0011C354: ;
    eax = MEM32(0x1DE3DC);

loc_0011C359: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011C360u); RECOMP_ABI_CALL(0x000E6A00u, sub_000E6A00); /* call 0x000E6A00 */

loc_0011C360: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011C36Eu); RECOMP_ABI_CALL(0x000E5430u, sub_000E5430); /* call 0x000E5430 */

loc_0011C36E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = 0x1DE768;
    PUSH32(esp, 0x0011C380u); RECOMP_ABI_CALL(0x000192E0u, sub_000192E0); /* call 0x000192E0 */

loc_0011C380: ;
    edx = esp + 0x24;
    ecx = 0x60;
    PUSH32(esp, 0x0011C38Eu); RECOMP_ABI_CALL(0x00195820u, sub_00195820); /* call 0x00195820 */

loc_0011C38E: ;
    fp_push(MEMF(0x1CF1D4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    ecx = 0x67;
    fp_push(MEMF(0x1CF1D8)); /* fld float */
    MEM32(0x1DF760) = edi;
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(0x1CF1DC)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x20);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(0x1DFA9C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x1DFAA4) = edx;
    edx = 0x1DFA9C;
    MEMF(0x1DFAA0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0011C3D7u); RECOMP_ABI_CALL(0x001957C0u, sub_001957C0); /* call 0x001957C0 */

loc_0011C3D7: ;
    PUSH32(esp, 0x0011C3DCu); RECOMP_ABI_CALL(0x000FE4C0u, sub_000FE4C0); /* call 0x000FE4C0 */

loc_0011C3DC: ;
    PUSH32(esp, 0x0011C3E1u); RECOMP_ABI_CALL(0x000F95A0u, sub_000F95A0); /* call 0x000F95A0 */

loc_0011C3E1: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0011C3F5u); RECOMP_ABI_CALL(0x000FAF60u, sub_000FAF60); /* call 0x000FAF60 */

loc_0011C3F5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x48;
    ebx = esi + 0x68;
    ecx = esi + 0x20;

loc_0011C403: ;
    edx = MEM32(esp + 0x14);
    ebp = MEM32(ecx + -8);
    MEM32(edx + eax) = ebp;
    ebp = MEM32(ecx + -4);
    MEM32(edx + eax + 4) = ebp;
    ebp = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = ebp;
    edx = MEM32(esp + 0x14);
    ebp = MEM32(esi + 0x78);
    MEM32(eax + edx + 0xC) = ebp;
    ebp = MEM32(esi + 0x7C);
    edx = eax + edx + 0xC;
    MEM32(edx + 4) = ebp;
    ebp = MEM32(esi + 0x80);
    MEM32(edx + 8) = ebp;
    edx = MEM32(ebx);
    ebp = MEM32(esp + 0x14);
    MEM32(eax + ebp + 0x18) = edx;
    edx = MEM32(edi);
    ebp = MEM32(esp + 0x14);
    MEM32(eax + ebp + 0x1C) = edx;
    edx = MEM32(edi + 4);
    ebp = MEM32(esp + 0x14);
    MEM32(eax + ebp + 0x20) = edx;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011C403; /* jl: less (signed <) */

loc_0011C46B: ;
    eax = MEM32(esp + 0x10);
    MEM16(eax) = 0;
    ecx = MEM32(esp + 0x10);
    MEM16(ecx + 2) = 1;
    edx = MEM32(esp + 0x10);
    eax = 2;
    MEM16(edx + 4) = LO16(eax);
    ecx = MEM32(esp + 0x10);
    MEM16(ecx + 6) = LO16(eax);
    edx = MEM32(esp + 0x10);
    MEM16(edx + 8) = 3;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 6);
    PUSH32(esp, 4);
    MEM16(eax + 0xA) = 0;
    PUSH32(esp, 0x0011C4B0u); RECOMP_ABI_CALL(0x000FAC60u, sub_000FAC60); /* call 0x000FAC60 */

loc_0011C4B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011C4BBu); RECOMP_ABI_CALL(0x000FAD00u, sub_000FAD00); /* call 0x000FAD00 */

loc_0011C4BB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0011C4C3u); RECOMP_ABI_CALL(0x000FA850u, sub_000FA850); /* call 0x000FA850 */

loc_0011C4C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_0011C4D0
 * Original: 0x0011C4D0 - 0x0011C6CA (506 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C4D0(void)
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

loc_0011C4D0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011C53C; /* jp: parity */

loc_0011C50A: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0011C53C: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011C554; /* jne: not equal / not zero */

loc_0011C54D: ;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    goto loc_0011C583;

loc_0011C554: ;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011C55Eu); RECOMP_ABI_CALL(0x000CDE30u, sub_000CDE30); /* call 0x000CDE30 */

loc_0011C55E: ;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011C56Cu); RECOMP_ABI_CALL(0x000CDDF0u, sub_000CDDF0); /* call 0x000CDDF0 */

loc_0011C56C: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C5CAC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c5cac] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011C5EA; /* jp: parity */

loc_0011C57C: ;
    edx = MEM32(esp + 0x50);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, edx);

loc_0011C583: ;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x48);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = edx;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011C5C8u); RECOMP_ABI_CALL(0x000CE9F0u, sub_000CE9F0); /* call 0x000CE9F0 */

loc_0011C5C8: ;
    ecx = MEM32(eax);
    esi = MEM32(esp + 0x60);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = edx;
    goto loc_0011C6A8;

loc_0011C5EA: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0011C609u); RECOMP_ABI_CALL(0x000CDDF0u, sub_000CDDF0); /* call 0x000CDDF0 */

loc_0011C609: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1C91D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x54)); /* fsub dword ptr [esp + 0x54] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0011C64Du); RECOMP_ABI_CALL(0x000CDDF0u, sub_000CDDF0); /* call 0x000CDDF0 */

loc_0011C64D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    esi = MEM32(esp + 0x38);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x4C);
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xC) = eax;
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0011C6A8: ;
    ecx = esi;
    PUSH32(esp, 0x0011C6AFu); RECOMP_ABI_CALL(0x000237B0u, sub_000237B0); /* call 0x000237B0 */

loc_0011C6AF: ;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = edx;
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
 * sub_0011C6D0
 * Original: 0x0011C6D0 - 0x0011C705 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C6D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C6D0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011C6E7u); RECOMP_ABI_CALL(0x00019370u, sub_00019370); /* call 0x00019370 */

loc_0011C6E7: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011C710
 * Original: 0x0011C710 - 0x0011C7EA (218 bytes, 70 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0011C710(void)
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

loc_0011C710: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011C765; /* jp: parity */

loc_0011C749: ;
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */

loc_0011C765: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    eax = MEM32(esp + 0x20);
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xC)); /* fsub dword ptr [ecx + 0xc] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    ecx = MEM32(esp + 0x34);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xC) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_0011C7F0
 * Original: 0x0011C7F0 - 0x0011C853 (99 bytes, 31 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0011C7F0(void)
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

loc_0011C7F0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    eax = MEM32(esp + 0x1C);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
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
 * sub_0011C860
 * Original: 0x0011C860 - 0x0011C8CB (107 bytes, 34 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0011C860(void)
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

loc_0011C860: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    eax = MEM32(esp + 0x1C);
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
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
 * sub_0011C8D0
 * Original: 0x0011C8D0 - 0x0011D208 (2360 bytes, 611 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C8D0(void)
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

loc_0011C8D0: ;
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xF8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x8C;
    PUSH32(esp, 0x0011C8EEu); RECOMP_ABI_CALL(0x00019230u, sub_00019230); /* call 0x00019230 */

loc_0011C8EE: ;
    ecx = esp + 0x88;
    MEM32(esp + 0xC8) = ecx;
    ecx = esp + 0xA8;
    MEM32(esp + 0x80) = ecx;
    esi = esp + 0x40;
    ecx = 0x2C;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xD0) = ecx;
    esi = esp + 0x88;
    ecx = 0xC;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xFC) = ecx;
    ebp = esp + 0x40;
    ecx = 4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp + 0x88;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x40) = 0x3F800000;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0x3F800000;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0x3F800000;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0;
    MEM32(esp + 0x74) = 0;
    MEM32(esp + 0x78) = 0;
    MEM32(esp + 0x7C) = 0x3F800000;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    edx = esp + 0x94;
    MEM32(esp + 0x84) = 3;
    MEM32(esp + 0xCC) = ebp;
    MEM32(esp + 0xE4) = esi;
    goto loc_0011CA00;

loc_0011C9F2: ;
    eax = MEM32(esp + 0x14);
    goto loc_0011CA00;

    /* nop */
    /* nop */

loc_0011CA00: ;
    _fa = (uint32_t)(MEM32(esp + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x84), 4 (32-bit) */
    edi = eax + 1;
    ebx = eax;
    MEM32(esp + 0xE8) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0011CBD0; /* jl: less (signed <) */

loc_0011CA1A: ;
    eax = MEM32(esp + 0xD0);
    ebp = MEM32(esp + 0x80);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + eax + 0x40;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0xFC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = esp + ebp * 4 + 8;
    esi = ecx + -4;
    MEM32(esp + 0x10) = ebp;
    goto loc_0011CA50;

loc_0011CA4C: ;
    ebp = MEM32(esp + 0x10);

loc_0011CA50: ;
    fp_push(MEMF(ebp + -32)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    fp_push(MEMF(ebp + -32)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011CA65; /* jp: parity */

loc_0011CA63: ;
    fp_top() = -fp_top(); /* fchs */

loc_0011CA65: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + eax + 0x88)); /* fld float */
    ebp = esp + eax + 0x88;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    fp_push(MEMF(ebp)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011CA8B; /* jp: parity */

loc_0011CA89: ;
    fp_top() = -fp_top(); /* fchs */

loc_0011CA8B: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011CAA1; /* jne: not equal / not zero */

loc_0011CA98: ;
    esi = MEM32(esp + 0x1C);
    ebx = edi;
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFE0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011CAA1: ;
    ebp = MEM32(esp + 0x10);
    fp_push(MEMF(ebp + -16)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    fp_push(MEMF(ebp + -16)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011CABA; /* jp: parity */

loc_0011CAB8: ;
    fp_top() = -fp_top(); /* fchs */

loc_0011CABA: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + eax + 0x88)); /* fld float */
    ebp = esp + eax + 0x88;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    fp_push(MEMF(ebp)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011CAE0; /* jp: parity */

loc_0011CADE: ;
    fp_top() = -fp_top(); /* fchs */

loc_0011CAE0: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011CAF7; /* jne: not equal / not zero */

loc_0011CAED: ;
    esi = MEM32(esp + 0x1C);
    ebx = edi + 1;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011CAF7: ;
    ebp = MEM32(esp + 0x10);
    fp_push(MEMF(ebp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    fp_push(MEMF(ebp)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011CB10; /* jp: parity */

loc_0011CB0E: ;
    fp_top() = -fp_top(); /* fchs */

loc_0011CB10: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + eax + 0x88)); /* fld float */
    ebp = esp + eax + 0x88;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    fp_push(MEMF(ebp)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011CB36; /* jp: parity */

loc_0011CB34: ;
    fp_top() = -fp_top(); /* fchs */

loc_0011CB36: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011CB4A; /* jne: not equal / not zero */

loc_0011CB43: ;
    esi = MEM32(esp + 0x1C);
    ebx = edi + 2;

loc_0011CB4A: ;
    ebp = MEM32(esp + 0x10);
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011CB63; /* jp: parity */

loc_0011CB61: ;
    fp_top() = -fp_top(); /* fchs */

loc_0011CB63: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + eax + 0x88)); /* fld float */
    ebp = esp + eax + 0x88;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    fp_push(MEMF(ebp)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011CB89; /* jp: parity */

loc_0011CB87: ;
    fp_top() = -fp_top(); /* fchs */

loc_0011CB89: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011CBA0; /* jne: not equal / not zero */

loc_0011CB96: ;
    esi = MEM32(esp + 0x1C);
    ebx = edi + 3;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011CBA0: ;
    ebp = MEM32(esp + 0x1C);
    eax = 0x40;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ebp;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_0011CA4C; /* jl: less (signed <) */

loc_0011CBC5: ;
    ebp = MEM32(esp + 0xCC);
    eax = MEM32(esp + 0x14);

loc_0011CBD0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011CC65; /* jge: greater or equal (signed >=) */

loc_0011CBD9: ;
    eax = eax + edi * 4;
    ebp = ebx;
    esi = edi;
    eax = esp + eax * 4 + 0x88;
    ebp = ebp << 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = eax;

loc_0011CBF1: ;
    eax = MEM32(esp + 0x10);
    fp_push(MEMF(eax)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(esp + 0x10);
    fp_push(MEMF(eax)); /* fld float */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011CC0C; /* jp: parity */

loc_0011CC0A: ;
    fp_top() = -fp_top(); /* fchs */

loc_0011CC0C: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + eax + 0x88)); /* fld float */
    eax = esp + eax + 0x88;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    MEM32(esp + 0x14) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(eax)); /* fld float */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011CC39; /* jp: parity */

loc_0011CC37: ;
    fp_top() = -fp_top(); /* fchs */

loc_0011CC39: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011CC4A; /* jne: not equal / not zero */

loc_0011CC46: ;
    ebx = edi;
    ebp = esi;

loc_0011CC4A: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0011CBF1; /* jl: less (signed <) */

loc_0011CC5E: ;
    ebp = MEM32(esp + 0xCC);

loc_0011CC65: ;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebx;
    eax = esp + esi + 0x88;
    edi = eax;
    ebx = MEM32(edi);
    MEM32(esp + 0xEC) = ebx;
    fp_push(MEMF(esp + 0xEC)); /* fld float */
    ebx = MEM32(edi + 4);
    MEM32(esp + 0xF0) = ebx;
    ebx = MEM32(edi + 8);
    edi = MEM32(edi + 0xC);
    MEM32(esp + 0xF4) = ebx;
    MEM32(esp + 0xF8) = edi;
    edi = MEM32(esp + 0xE4);
    ebx = MEM32(edi + ecx);
    MEM32(eax) = ebx;
    ebx = MEM32(esp + ecx + 0x88);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(edx + -4);
    MEM32(eax + 8) = ebx;
    ebx = MEM32(edx);
    MEM32(eax + 0xC) = ebx;
    MEMF(edi + ecx) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xF0);
    MEM32(esp + ecx + 0x88) = eax;
    eax = MEM32(esp + 0xF4);
    MEM32(edx + -4) = eax;
    eax = MEM32(esp + 0xF8);
    MEM32(edx) = eax;
    eax = esp + esi + 0x40;
    esi = eax;
    ebx = MEM32(esi);
    MEM32(esp + 0xD4) = ebx;
    fp_push(MEMF(esp + 0xD4)); /* fld float */
    ebx = MEM32(esi + 4);
    MEM32(esp + 0xD8) = ebx;
    ebx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    MEM32(esp + 0xE0) = esi;
    esi = MEM32(ecx + ebp);
    MEM32(eax) = esi;
    esi = MEM32(esp + ecx + 0x40);
    MEM32(eax + 4) = esi;
    esi = MEM32(esp + ecx + 0x44);
    MEM32(eax + 8) = esi;
    esi = MEM32(esp + ecx + 0x48);
    MEM32(eax + 0xC) = esi;
    MEMF(ecx + ebp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xD8);
    MEM32(esp + ecx + 0x40) = eax;
    eax = ebx;
    MEM32(esp + 0xDC) = ebx;
    ebx = MEM32(esp + 0xC8);
    fp_push(MEMF(ebx)); /* fld float */
    MEM32(esp + ecx + 0x44) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = MEM32(esp + 0xE0);
    MEM32(esp + ecx + 0x48) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0011D1C0; /* jnp: not parity */

loc_0011CD6D: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    esi = MEM32(esp + 0x84);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebx)); /* fdiv dword ptr [ebx] */
    eax = MEM32(esp + 0x80);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + ebp)); /* fmul dword ptr [ecx + ebp] */
    MEMF(ecx + ebp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x40)); /* fmul dword ptr [esp + ecx + 0x40] */
    MEMF(esp + ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x44)); /* fmul dword ptr [esp + ecx + 0x44] */
    MEMF(esp + ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x48)); /* fmul dword ptr [esp + ecx + 0x48] */
    MEMF(esp + ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + ecx)); /* fmul dword ptr [edi + ecx] */
    MEMF(edi + ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x88)); /* fmul dword ptr [esp + ecx + 0x88] */
    MEMF(esp + ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -4)); /* fmul dword ptr [edx - 4] */
    MEMF(edx + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0011CE9A; /* je: equal / zero */

loc_0011CDD6: ;
    fp_push(MEMF(eax + -32)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + ebp)); /* fmul dword ptr [ecx + ebp] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x40)); /* fmul dword ptr [esp + ecx + 0x40] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x44)); /* fmul dword ptr [esp + ecx + 0x44] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x48)); /* fmul dword ptr [esp + ecx + 0x48] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + -32)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + ecx)); /* fmul dword ptr [edi + ecx] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x88)); /* fmul dword ptr [esp + ecx + 0x88] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -4)); /* fmul dword ptr [edx - 4] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x88)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x8C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(esp + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x90)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    MEMF(esp + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x94)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    MEMF(esp + 0x94) = (float)fp_top(); fp_pop(); /* fstp */

loc_0011CE9A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011CF67; /* je: equal / zero */

loc_0011CEA3: ;
    fp_push(MEMF(eax + -16)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + ebp)); /* fmul dword ptr [ecx + ebp] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x40)); /* fmul dword ptr [esp + ecx + 0x40] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x44)); /* fmul dword ptr [esp + ecx + 0x44] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x48)); /* fmul dword ptr [esp + ecx + 0x48] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + -16)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + ecx)); /* fmul dword ptr [edi + ecx] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x88)); /* fmul dword ptr [esp + ecx + 0x88] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -4)); /* fmul dword ptr [edx - 4] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x98)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x9C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(esp + 0x9C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xA0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    MEMF(esp + 0xA0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xA4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    MEMF(esp + 0xA4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0011CF67: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D032; /* je: equal / zero */

loc_0011CF70: ;
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + ebp)); /* fmul dword ptr [ecx + ebp] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x40)); /* fmul dword ptr [esp + ecx + 0x40] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x44)); /* fmul dword ptr [esp + ecx + 0x44] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x48)); /* fmul dword ptr [esp + ecx + 0x48] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + ecx)); /* fmul dword ptr [edi + ecx] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x88)); /* fmul dword ptr [esp + ecx + 0x88] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -4)); /* fmul dword ptr [edx - 4] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xA8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xAC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(esp + 0xAC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    MEMF(esp + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xB4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    MEMF(esp + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0011D032: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D0FE; /* je: equal / zero */

loc_0011D03A: ;
    fp_push(MEMF(eax + 0x10)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + ebp)); /* fmul dword ptr [ecx + ebp] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x40)); /* fmul dword ptr [esp + ecx + 0x40] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x44)); /* fmul dword ptr [esp + ecx + 0x44] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x48)); /* fmul dword ptr [esp + ecx + 0x48] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + ecx)); /* fmul dword ptr [edi + ecx] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + ecx + 0x88)); /* fmul dword ptr [esp + ecx + 0x88] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -4)); /* fmul dword ptr [edx - 4] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xB8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xBC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(esp + 0xBC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    MEMF(esp + 0xC0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    MEMF(esp + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0011D0FE: ;
    edi = MEM32(esp + 0xE8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC8) = ebx;
    ebx = MEM32(esp + 0x18);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x84) = esi;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x80) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0011C9F2; /* jg: greater (signed >) */

loc_0011D13F: ;
    eax = MEM32(esp + 0x104);
    fp_push(MEMF(esp + 0x40)); /* fld float */
    ecx = MEM32(esp + 0x44);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x48);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x50);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x58);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x64);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0x68);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0x6C);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(esp + 0x70);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(esp + 0x74);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(esp + 0x70);
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(esp + 0x74);
    POP32(esp, ebp);
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xF0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011D1C0: ;
    eax = MEM32(esp + 0x104);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    edx = 0x3F800000;
    MEM32(eax) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = ecx;
    POP32(esp, ebp);
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xF0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011D210
 * Original: 0x0011D210 - 0x0011D284 (116 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D210: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0011D250; /* jne: not equal / not zero */

loc_0011D21C: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011D24Cu); RECOMP_ABI_CALL(0x0011C710u, sub_0011C710); /* call 0x0011C710 */

loc_0011D24C: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011D250: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011D280u); RECOMP_ABI_CALL(0x0011C4D0u, sub_0011C4D0); /* call 0x0011C4D0 */

loc_0011D280: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011D290
 * Original: 0x0011D290 - 0x0011D29F (15 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D290: ;
    MEM32(ecx + 0xC4) = 0;
    g_seh_ebp = ebp; sub_00110010(); return; /* tail jmp 0x00110010 */

}

/**
 * sub_0011D2A0
 * Original: 0x0011D2A0 - 0x0011D2F5 (85 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D2A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0011D2ADu); RECOMP_ABI_CALL(0x00110AF0u, sub_00110AF0); /* call 0x00110AF0 */

loc_0011D2AD: ;
    ecx = 1;
    MEM32(esi + 0x74) = ecx;
    MEM32(esi + 0x84) = ecx;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi + 0x78;
    MEM32(esi) = 0x1C5CC8;
    MEM32(eax) = 0;
    MEM32(esi + 0x7C) = 0;
    MEM32(esi + 0x80) = 0x64;
    if (CMP_NE(_fa, _fb)) goto loc_0011D2EC; /* jne: not equal / not zero */

loc_0011D2E3: ;
    MEM32(esi + 0x70) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0011D2EC: ;
    MEM32(esi + 0x70) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011D300
 * Original: 0x0011D300 - 0x0011D38C (140 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D300: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0xC) = 0xBF800000u;
    MEM32(esp + 0x10) = 0xBF800000u;
    MEM32(esp + 0x14) = 0x40000000;
    MEM32(esp + 0x18) = 0x40000000;
    PUSH32(esp, 0x0011D337u); RECOMP_ABI_CALL(0x00111390u, sub_00111390); /* call 0x00111390 */

loc_0011D337: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x3F800000);
    ecx = esi + 0x54;
    MEM32(esi) = 0x1C5D3C;
    MEM32(esi + 0x50) = edx;
    PUSH32(esp, 0x0011D360u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011D360: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    ecx = esi + 0x58;
    PUSH32(esp, 0x0011D37Cu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011D37C: ;
    MEM32(esi + 0x5C) = 0x3DCCCCCD;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011D390
 * Original: 0x0011D390 - 0x0011D475 (229 bytes, 91 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D390(void)
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

loc_0011D390: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011D46D; /* je: equal / zero */

loc_0011D3A0: ;
    PUSH32(esp, 0x0011D3A5u); RECOMP_ABI_CALL(0x0010FC00u, sub_0010FC00); /* call 0x0010FC00 */

loc_0011D3A5: ;
    ebx = MEM32(esp + 0x10);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D3CB; /* je: equal / zero */

loc_0011D3AF: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0011D3B7u); RECOMP_ABI_CALL(0x001109D0u, sub_001109D0); /* call 0x001109D0 */

loc_0011D3B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D3CB; /* je: equal / zero */

loc_0011D3BB: ;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0011D3C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011D3C0u); } /* indirect call */
    }

loc_0011D3C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D462; /* jne: not equal / not zero */

loc_0011D3CB: ;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D3EC; /* jne: not equal / not zero */

loc_0011D3D1: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D3EC; /* jne: not equal / not zero */

loc_0011D3D6: ;
    eax = MEM32(esi + 0xC4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 3;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(esi + 0xC4) = edx;

loc_0011D3EC: ;
    eax = MEM32(esi + 0xC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D404; /* jne: not equal / not zero */

loc_0011D3F6: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0011D3FEu); RECOMP_ABI_CALL(0x00110190u, sub_00110190); /* call 0x00110190 */

loc_0011D3FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0011D404: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    edx = esi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_0011D420; /* je: equal / zero */

loc_0011D40C: ;
    edx = esi + 0x14;
    eax = esi + 0x18;

loc_0011D412: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0011D462; /* ja: above (unsigned >) */

loc_0011D419: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x11D478); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0011D425u) goto loc_0011D425;
    if (_jt == 0x0011D437u) goto loc_0011D437;
    if (_jt == 0x0011D449u) goto loc_0011D449;
    if (_jt == 0x0011D45Bu) goto loc_0011D45B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0011D420: ;
    eax = esi + 0x10;
    goto loc_0011D412;

loc_0011D425: ;
    fp_push(MEMF(ebx + 0x14)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    POP32(esp, esi);
    POP32(esp, ebx);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_0011D437: ;
    fp_push(MEMF(eax)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 0x14)); /* fsub dword ptr [ebx + 0x14] */
    POP32(esp, esi);
    POP32(esp, ebx);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_0011D449: ;
    fp_push(MEMF(edx)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 0x14)); /* fsub dword ptr [ebx + 0x14] */
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

loc_0011D45B: ;
    fp_push(MEMF(ebx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx)); /* fadd dword ptr [edx] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */

loc_0011D462: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0011D46D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011D490
 * Original: 0x0011D490 - 0x0011D567 (215 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D490: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x0011D49Bu); RECOMP_ABI_CALL(0x00110AF0u, sub_00110AF0); /* call 0x00110AF0 */

loc_0011D49B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF7D70A4u);
    ecx = esi;
    MEM32(esi) = 0x1C5D58;
    { uint32_t _icall_target = MEM32(0x1C5D88); PUSH32(esp, 0x0011D4B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011D4AAu); } /* indirect call */
    }

loc_0011D4B0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3FFD70A4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0011D4C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011D4BEu); } /* indirect call */
    }

loc_0011D4C1: ;
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0011D4C8u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011D4C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D4E0; /* je: equal / zero */

loc_0011D4CF: ;
    ecx = MEM32(0x1DE818);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0011D4DEu); RECOMP_ABI_CALL(0x0011D300u, sub_0011D300); /* call 0x0011D300 */

loc_0011D4DE: ;
    goto loc_0011D4E2;

loc_0011D4E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011D4E2: ;
    PUSH32(esp, 0x3E6B851F);
    PUSH32(esp, 0x3EE66666);
    PUSH32(esp, 0x3ED1EB85);
    MEM32(esi + 0x70) = eax;
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x14;
    MEM32(eax + 0x5C) = 0x3D4CCCCD;
    PUSH32(esp, 0x0011D509u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011D509: ;
    edx = MEM32(esi + 0x70);
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x14;
    MEM32(edx + 0x54) = eax;
    PUSH32(esp, 0x0011D52Au); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011D52A: ;
    ecx = MEM32(esi + 0x70);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    MEM32(ecx + 0x58) = edx;
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0011D54Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011D54B: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x2C) = ecx;
    edx = MEM32(esi + 0x70);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0011D562u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011D562: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D570
 * Original: 0x0011D570 - 0x0011D5A4 (52 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D570: ;
    eax = MEM32(ecx + 0x70);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D584; /* je: equal / zero */

loc_0011D578: ;
    MEM32(ecx + 0x94) = 0x1C21CC;
    goto loc_0011D58E;

loc_0011D584: ;
    MEM32(ecx + 0x94) = 0x1C5DC8;

loc_0011D58E: ;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0011D59Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011D59Bu); } /* indirect call */
    }

loc_0011D59E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011D5B0
 * Original: 0x0011D5B0 - 0x0011D69C (236 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D5B0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D693; /* je: equal / zero */

loc_0011D5C1: ;
    edx = MEM32(esp + 0x28);
    _fa = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D687; /* jne: not equal / not zero */

loc_0011D5CF: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0011D5E5; /* je: equal / zero */

loc_0011D5DC: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D5EA; /* je: equal / zero */

loc_0011D5E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D5FA; /* jne: not equal / not zero */

loc_0011D5E5: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D5F6; /* jne: not equal / not zero */

loc_0011D5EA: ;
    eax = MEM32(esi + 0x84);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    goto loc_0011D614;

loc_0011D5F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D603; /* je: equal / zero */

loc_0011D5FA: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D608; /* je: equal / zero */

loc_0011D5FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D614; /* jne: not equal / not zero */

loc_0011D603: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D614; /* jne: not equal / not zero */

loc_0011D608: ;
    eax = MEM32(esi + 0x84);
    edx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = edx;

loc_0011D614: ;
    ecx = MEM32(esi + 0x70);
    eax = MEM32(ecx);
    edx = MEM32(esi + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011D62A; /* jl: less (signed <) */

loc_0011D620: ;
    edx = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011D62C; /* jle: less or equal (signed <=) */

loc_0011D62A: ;
    MEM32(ecx) = edx;

loc_0011D62C: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011D687; /* je: equal / zero */

loc_0011D634: ;
    ecx = esi;
    PUSH32(esp, 0x0011D63Bu); RECOMP_ABI_CALL(0x00110470u, sub_00110470); /* call 0x00110470 */

loc_0011D63B: ;
    ecx = MEM32(esi + 0x70);
    ecx = MEM32(ecx);
    edx = MEM32(esi + 0x30);
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 4;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = 4;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0011D687u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011D684u); } /* indirect call */
    }

loc_0011D687: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0011D693: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011D6A0
 * Original: 0x0011D6A0 - 0x0011D6BE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D6A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0011D6A8u); RECOMP_ABI_CALL(0x0003F0A0u, sub_0003F0A0); /* call 0x0003F0A0 */

loc_0011D6A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011D6B8; /* je: equal / zero */

loc_0011D6AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D6B5u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011D6B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011D6B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011D6C0
 * Original: 0x0011D6C0 - 0x0011D6E4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D6C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C5DD0;
    PUSH32(esp, 0x0011D6CEu); RECOMP_ABI_CALL(0x001128D0u, sub_001128D0); /* call 0x001128D0 */

loc_0011D6CE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011D6DE; /* je: equal / zero */

loc_0011D6D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D6DBu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011D6DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011D6DE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011D6F0
 * Original: 0x0011D6F0 - 0x0011D717 (39 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0011D6F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0011D6F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0011D6FEu); RECOMP_ABI_CALL(0x00111BF0u, sub_00111BF0); /* call 0x00111BF0 */

loc_0011D6FE: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x68)); /* fsub dword ptr [edi + 0x68] */
    eax = MEM32(esi + 8);
    MEM32(esi + 8) = eax;
    POP32(esp, edi);
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_0011D720
 * Original: 0x0011D720 - 0x0011D942 (546 bytes, 157 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D720: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = esi + 0xC4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 2);
    MEM32(ebp) = ebx;
    PUSH32(esp, 0x0011D73Au); RECOMP_ABI_CALL(0x001109C0u, sub_001109C0); /* call 0x001109C0 */

loc_0011D73A: ;
    PUSH32(esp, 0x1C5E40);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0011D747u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_0011D747: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x0011D74Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011D74E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D777; /* je: equal / zero */

loc_0011D755: ;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 0xC) = 1;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax) = 0x1B3444;
    MEM32(eax + 0x14) = 0x3E99999A;
    MEM32(eax + 0x18) = ebx;
    goto loc_0011D779;

loc_0011D777: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011D779: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0xB0) = eax;
    PUSH32(esp, 0x0011D789u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011D789: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x0011D790u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011D790: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D7D0; /* je: equal / zero */

loc_0011D799: ;
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x1C) = 0xBF800000u;
    MEM32(esp + 0x20) = 0xBF800000u;
    MEM32(esp + 0x24) = 0x40000000;
    MEM32(esp + 0x28) = 0x40000000;
    PUSH32(esp, 0x0011D7C6u); RECOMP_ABI_CALL(0x00111390u, sub_00111390); /* call 0x00111390 */

loc_0011D7C6: ;
    MEM32(edi) = 0x1B2F44;
    ecx = edi;
    goto loc_0011D7D2;

loc_0011D7D0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011D7D2: ;
    MEM32(esi + 0xB4) = ecx;
    edx = MEM32(0x1DE818);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011D7E4u); RECOMP_ABI_CALL(0x00111320u, sub_00111320); /* call 0x00111320 */

loc_0011D7E4: ;
    ecx = MEM32(0x1E3DD0);
    eax = MEM32(esi + 0xB4);
    MEM32(eax + 0x2C) = ecx;
    edx = MEM32(esi + 0xB4);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0011D802u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011D802: ;
    PUSH32(esp, 0x74);
    PUSH32(esp, 0x0011D809u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011D809: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D832; /* je: equal / zero */

loc_0011D812: ;
    PUSH32(esp, ebx);
    eax = edi + 0x68;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0011D81Eu); RECOMP_ABI_CALL(0x00050560u, sub_00050560); /* call 0x00050560 */

loc_0011D81E: ;
    MEM32(edi) = 0x1C5DE8;
    MEM32(edi + 0x6C) = ebp;
    MEM32(edi + 0x70) = 0x1CF630;
    ecx = edi;
    goto loc_0011D834;

loc_0011D832: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011D834: ;
    eax = esp + 0x14;
    MEM32(esi + 0xC0) = ecx;
    MEM32(esp + 0x14) = 0xBF800000u;
    MEM32(esp + 0x18) = 0xBF800000u;
    MEM32(esp + 0x1C) = 0x40000000;
    MEM32(esp + 0x20) = 0;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0011D864u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011D861u); } /* indirect call */
    }

loc_0011D864: ;
    ecx = MEM32(esi + 0xC0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F000000);
    MEM32(ecx + 0x48) = 0x22;
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0011D886u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011D886: ;
    eax = MEM32(esi + 0xC0);
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    edx = MEM32(esi + 0xC0);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0011D8A5u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011D8A5: ;
    PUSH32(esp, 0x6C);
    PUSH32(esp, 0x0011D8ACu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011D8AC: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D8D7; /* je: equal / zero */

loc_0011D8B5: ;
    PUSH32(esp, ebx);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0011D8C1u); RECOMP_ABI_CALL(0x00050560u, sub_00050560); /* call 0x00050560 */

loc_0011D8C1: ;
    MEM32(edi) = 0x1C5E14;
    MEM32(edi + 0x48) = 0x20;
    MEM32(edi + 0x68) = 0x3DA3D70A;
    goto loc_0011D8D9;

loc_0011D8D7: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011D8D9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0xBC) = edi;
    PUSH32(esp, 0x0011D8E8u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011D8E8: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0011D8EFu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011D8EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011D91D; /* je: equal / zero */

loc_0011D8F7: ;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 4) = ebx;
    ecx = 1;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax) = 0x1C5DD0;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = 0x3DCCCCCD;
    goto loc_0011D91F;

loc_0011D91D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011D91F: ;
    MEM32(esi + 0xB8) = eax;
    MEM32(eax + 0x1C) = 0x3CCCCCCD;
    ecx = MEM32(esi + 0xB8);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011D93Bu); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011D93B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011D950
 * Original: 0x0011D950 - 0x0011DB54 (516 bytes, 143 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D950: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x0011D964u); RECOMP_ABI_CALL(0x0011D2A0u, sub_0011D2A0); /* call 0x0011D2A0 */

loc_0011D964: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = MEM32(esp + 0x20);
    ebx = esi + 0x20;
    MEM32(esi) = 0x1C5E50;
    MEM32(ebx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0011D97F; /* jne: not equal / not zero */

loc_0011D977: ;
    ecx = esi + 0x78;
    MEM32(esi + 0x70) = ecx;
    goto loc_0011D982;

loc_0011D97F: ;
    MEM32(esi + 0x70) = edi;

loc_0011D982: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF800000u);
    ecx = esi;
    MEM32(esi + 0x7C) = 0;
    MEM32(esi + 0x80) = 1;
    { uint32_t _icall_target = MEM32(0x1C5E80); PUSH32(esp, 0x0011D9A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011D99Cu); } /* indirect call */
    }

loc_0011D9A2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x40000000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0011D9B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011D9B0u); } /* indirect call */
    }

loc_0011D9B3: ;
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0011D9BAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011D9BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D9D4; /* je: equal / zero */

loc_0011D9C1: ;
    ecx = MEM32(0x1DE818);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0011D9D0u); RECOMP_ABI_CALL(0x0011D300u, sub_0011D300); /* call 0x0011D300 */

loc_0011D9D0: ;
    edi = eax;
    goto loc_0011D9D6;

loc_0011D9D4: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011D9D6: ;
    PUSH32(esp, 0x3E6B851F);
    PUSH32(esp, 0x3EE66666);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x34;
    MEM32(esi + 0x90) = edi;
    PUSH32(esp, 0x0011D9F9u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011D9F9: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x34;
    MEM32(edi + 0x54) = edx;
    PUSH32(esp, 0x0011DA17u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011DA17: ;
    eax = MEM32(esi + 0x90);
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 0x58) = ecx;
    edx = MEM32(esi + 0x90);
    MEM32(edx + 0x5C) = 0x3D4CCCCD;
    eax = MEM32(esi + 0x90);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011DA41u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011DA41: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x0011DA48u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011DA48: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DA5B; /* je: equal / zero */

loc_0011DA4F: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0011DA59u); RECOMP_ABI_CALL(0x00050560u, sub_00050560); /* call 0x00050560 */

loc_0011DA59: ;
    goto loc_0011DA5D;

loc_0011DA5B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011DA5D: ;
    ecx = esp + 0xC;
    MEM32(esi + 0x88) = eax;
    MEM32(esp + 0xC) = 0xBF7D70A4u;
    MEM32(esp + 0x10) = 0xBF733333u;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3FF33333;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0011DA8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011DA8Cu); } /* indirect call */
    }

loc_0011DA8F: ;
    edx = MEM32(esi + 0x88);
    MEM32(edx + 0x48) = 0x10;
    eax = MEM32(esi + 0x88);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011DAACu); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011DAAC: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x0011DAB3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011DAB3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DACC; /* je: equal / zero */

loc_0011DABA: ;
    PUSH32(esp, 0);
    ecx = esi + 0x94;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0011DACAu); RECOMP_ABI_CALL(0x00050560u, sub_00050560); /* call 0x00050560 */

loc_0011DACA: ;
    goto loc_0011DACE;

loc_0011DACC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011DACE: ;
    ecx = esp + 0xC;
    MEM32(esi + 0x8C) = eax;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0xBF733333u;
    MEM32(esp + 0x14) = 0x3F7D70A4;
    MEM32(esp + 0x18) = 0x3FF33333;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0011DB00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011DAFDu); } /* indirect call */
    }

loc_0011DB00: ;
    edx = MEM32(esi + 0x8C);
    MEM32(edx + 0x48) = 0x12;
    eax = MEM32(esi + 0x8C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011DB1Du); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011DB1D: ;
    ecx = MEM32(esi + 0x70);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DB31; /* je: equal / zero */

loc_0011DB25: ;
    MEM32(esi + 0x94) = 0x1C21CC;
    goto loc_0011DB3B;

loc_0011DB31: ;
    MEM32(esi + 0x94) = 0x1C5DC8;

loc_0011DB3B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0011DB49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011DB46u); } /* indirect call */
    }

loc_0011DB49: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011DB60
 * Original: 0x0011DB60 - 0x0011DC4D (237 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DB60: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0011DB6Cu); RECOMP_ABI_CALL(0x0011D490u, sub_0011D490); /* call 0x0011D490 */

loc_0011DB6C: ;
    eax = MEM32(esp + 0x1C);
    edi = esi + 0x20;
    PUSH32(esp, 0x68);
    MEM32(esi) = 0x1C5EC8;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0011DB82u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011DB82: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DB95; /* je: equal / zero */

loc_0011DB89: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0011DB93u); RECOMP_ABI_CALL(0x00050560u, sub_00050560); /* call 0x00050560 */

loc_0011DB93: ;
    goto loc_0011DB97;

loc_0011DB95: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011DB97: ;
    ecx = esp + 8;
    MEM32(esi + 0x74) = eax;
    MEM32(esp + 8) = 0xBF7D70A4u;
    MEM32(esp + 0xC) = 0xBF733333u;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3FF33333;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0011DBC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011DBC3u); } /* indirect call */
    }

loc_0011DBC6: ;
    edx = MEM32(esi + 0x74);
    MEM32(edx + 0x48) = 0x10;
    eax = MEM32(esi + 0x74);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011DBDDu); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011DBDD: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x0011DBE4u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011DBE4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DBFB; /* je: equal / zero */

loc_0011DBEB: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0011DBF9u); RECOMP_ABI_CALL(0x00050560u, sub_00050560); /* call 0x00050560 */

loc_0011DBF9: ;
    goto loc_0011DBFD;

loc_0011DBFB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011DBFD: ;
    ecx = esp + 8;
    MEM32(esi + 0x78) = eax;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0xBF733333u;
    MEM32(esp + 0x10) = 0x3F7D70A4;
    MEM32(esp + 0x14) = 0x3FF33333;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0011DC2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011DC29u); } /* indirect call */
    }

loc_0011DC2C: ;
    edx = MEM32(esi + 0x78);
    MEM32(edx + 0x48) = 0x12;
    eax = MEM32(esi + 0x78);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011DC43u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011DC43: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011DC50
 * Original: 0x0011DC50 - 0x0011DC91 (65 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DC50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0011DC5Du); RECOMP_ABI_CALL(0x00110AF0u, sub_00110AF0); /* call 0x00110AF0 */

loc_0011DC5D: ;
    MEM32(esi) = 0x1C5F38;
    eax = esi + 0x78;
    ecx = 2;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0011DC70: ;
    MEM32(eax) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + -8) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011DC70; /* jne: not equal / not zero */

loc_0011DC81: ;
    MEM32(esi + 0x90) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011DCA0
 * Original: 0x0011DCA0 - 0x0011DDAD (269 bytes, 83 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DCA0(void)
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

loc_0011DCA0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011DDA3; /* je: equal / zero */

loc_0011DCB2: ;
    edi = MEM32(esp + 0x2C);
    edx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DCC6; /* je: equal / zero */

loc_0011DCBD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DCC6; /* je: equal / zero */

loc_0011DCC2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0011DCCB;

loc_0011DCC6: ;
    ecx = 1;

loc_0011DCCB: ;
    eax = MEM32(esi + ecx * 4 + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DD96; /* je: equal / zero */

loc_0011DCD7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    fp_push(MEMF(eax)); /* fld float */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DCF9; /* je: equal / zero */

loc_0011DCDE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DCF9; /* je: equal / zero */

loc_0011DCE2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DCEC; /* je: equal / zero */

loc_0011DCE7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DD06; /* jne: not equal / not zero */

loc_0011DCEC: ;
    fp_push(MEMF(esi + 0x90)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x14)); /* fmul dword ptr [edi + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(eax) - fp_top()); /* fsubr dword ptr [eax] */
    goto loc_0011DD04;

loc_0011DCF9: ;
    fp_push(MEMF(esi + 0x90)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x14)); /* fmul dword ptr [edi + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */

loc_0011DD04: ;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */

loc_0011DD06: ;
    edx = MEM32(esi + ecx * 4 + 0x70);
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + ecx * 4 + 0x80)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + ecx*4 + 0x80] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011DD23; /* jp: parity */

loc_0011DD1A: ;
    eax = MEM32(esi + ecx * 4 + 0x80);
    goto loc_0011DD3A;

loc_0011DD23: ;
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + ecx * 4 + 0x88)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + ecx*4 + 0x88] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011DD3C; /* jne: not equal / not zero */

loc_0011DD33: ;
    eax = MEM32(esi + ecx * 4 + 0x88);

loc_0011DD3A: ;
    MEM32(edx) = eax;

loc_0011DD3C: ;
    ecx = MEM32(esi + ecx * 4 + 0x70);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0011DD96; /* jnp: not parity */

loc_0011DD49: ;
    ecx = esi;
    PUSH32(esp, 0x0011DD50u); RECOMP_ABI_CALL(0x00110470u, sub_00110470); /* call 0x00110470 */

loc_0011DD50: ;
    edx = MEM32(esi + 0x30);
    esi = MEM32(esi + 0x70);
    ecx = esp + 8;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = 4;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0011DD96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011DD93u); } /* indirect call */
    }

loc_0011DD96: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0011DDA3: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_0011DDB0
 * Original: 0x0011DDB0 - 0x0011DE28 (120 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DDB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DDB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x3F800000);
    MEM32(esi + 0xC) = 1;
    MEM32(esi) = 0x1C5FA8;
    eax = 0xBF800000u;
    PUSH32(esp, 0x3F800000);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    eax = 0x40000000;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = esi + 0x24;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x0011DDFDu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011DDFD: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x30) = 0x3F000000;
    MEM32(esi + 0x38) = 0x11;
    edx = MEM32(0x1DE814);
    MEM32(esi + 0x34) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011DE30
 * Original: 0x0011DE30 - 0x0011DF16 (230 bytes, 74 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DE30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0011DE3Au); RECOMP_ABI_CALL(0x0011D490u, sub_0011D490); /* call 0x0011D490 */

loc_0011DE3A: ;
    edi = esi + 0xB4;
    ecx = edi;
    MEM32(esi) = 0x1C5FD8;
    PUSH32(esp, 0x0011DE4Du); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_0011DE4D: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0xCC) = ecx;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esi + 0xC8) = eax;
    PUSH32(esp, 0x0011DE6Du); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_0011DE6D: ;
    eax = MEM32(esi + 0xCC);
    PUSH32(esp, eax);
    edi = esi + 0x74;
    PUSH32(esp, 0x1C3170);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011DE82u); RECOMP_ABI_CALL(0x0012B3E8u, sub_0012B3E8); /* call 0x0012B3E8 */

loc_0011DE82: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DE92; /* jne: not equal / not zero */

loc_0011DE89: ;
    ecx = MEM32(0x1CF4A0);
    PUSH32(esp, ecx);
    goto loc_0011DE93;

loc_0011DE92: ;
    PUSH32(esp, edi);

loc_0011DE93: ;
    ecx = esi + 0x30;
    PUSH32(esp, 0x0011DE9Bu); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_0011DE9B: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DEBB; /* je: equal / zero */

loc_0011DEA3: ;
    edx = MEM32(esi + 0xCC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C5FC8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011DEB6u); RECOMP_ABI_CALL(0x0012B3E8u, sub_0012B3E8); /* call 0x0012B3E8 */

loc_0011DEB6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0011DED0;

loc_0011DEBB: ;
    eax = MEM32(esi + 0xCC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C5FC0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011DECDu); RECOMP_ABI_CALL(0x0012B3E8u, sub_0012B3E8); /* call 0x0012B3E8 */

loc_0011DECD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011DED0: ;
    ebx = esi + 0x20;
    PUSH32(esp, 0x68);
    MEM32(ebx) = edi;
    PUSH32(esp, 0x0011DEDCu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011DEDC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DEEF; /* je: equal / zero */

loc_0011DEE3: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0011DEEDu); RECOMP_ABI_CALL(0x00050560u, sub_00050560); /* call 0x00050560 */

loc_0011DEED: ;
    goto loc_0011DEF1;

loc_0011DEEF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011DEF1: ;
    MEM32(esi + 0xC4) = eax;
    MEM32(eax + 0x48) = 0x10;
    ecx = MEM32(esi + 0xC4);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011DF0Eu); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011DF0E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0011DF20
 * Original: 0x0011DF20 - 0x0011DFD5 (181 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DF20: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC8);
    edi = ecx;
    PUSH32(esp, 0x0011DF31u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011DF31: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DF5A; /* je: equal / zero */

loc_0011DF3A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x20);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0011DF47u); RECOMP_ABI_CALL(0x0010FD50u, sub_0010FD50); /* call 0x0010FD50 */

loc_0011DF47: ;
    ecx = esi;
    MEM32(esi) = 0x1C3178;
    MEM32(esi + 0x20) = ebx;
    PUSH32(esp, 0x0011DF57u); RECOMP_ABI_CALL(0x0011D720u, sub_0011D720); /* call 0x0011D720 */

loc_0011DF57: ;
    POP32(esp, ebx);
    goto loc_0011DF5C;

loc_0011DF5A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011DF5C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBF8CCCCDu);
    PUSH32(esp, 0xBF666666u);
    ecx = esi;
    MEM32(esi + 0x40) = 3;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0011DF74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011DF71u); } /* indirect call */
    }

loc_0011DF74: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 0x2C) = 0xBC23D70Au;
    PUSH32(esp, 0x0011DF85u); RECOMP_ABI_CALL(0x00110470u, sub_00110470); /* call 0x00110470 */

loc_0011DF85: ;
    ecx = eax;
    PUSH32(esp, 0x0011DF8Cu); RECOMP_ABI_CALL(0x0010FAB0u, sub_0010FAB0); /* call 0x0010FAB0 */

loc_0011DF8C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0011DF98u); RECOMP_ABI_CALL(0x0011E870u, sub_0011E870); /* call 0x0011E870 */

loc_0011DF98: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0011DFA1u); RECOMP_ABI_CALL(0x0011E560u, sub_0011E560); /* call 0x0011E560 */

loc_0011DFA1: ;
    edx = MEM32(edi + 0xCC);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0xC8); PUSH32(esp, 0x0011DFB3u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0011DFADu); } /* indirect call */
    }

loc_0011DFB3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    PUSH32(esp, 0x0011DFBFu); RECOMP_ABI_CALL(0x0011E570u, sub_0011E570); /* call 0x0011E570 */

loc_0011DFBF: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0011DFC8u); RECOMP_ABI_CALL(0x0011E550u, sub_0011E550); /* call 0x0011E550 */

loc_0011DFC8: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011DFE0
 * Original: 0x0011DFE0 - 0x0011E1CA (490 bytes, 138 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DFE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DFE0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x0011DFEFu); RECOMP_ABI_CALL(0x0011DC50u, sub_0011DC50); /* call 0x0011DC50 */

loc_0011DFEF: ;
    ebp = MEM32(esp + 0x24);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    eax = MEM32(esp + 0x20);
    ebx = esi + 0x20;
    MEM32(esi) = 0x1C6050;
    MEM32(ebx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0011E00E; /* jne: not equal / not zero */

loc_0011E006: ;
    ecx = esi + 0x7C;
    MEM32(esi + 0x74) = ecx;
    goto loc_0011E011;

loc_0011E00E: ;
    MEM32(esi + 0x74) = ebp;

loc_0011E011: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esi + 0x84) = edx;
    MEM32(esi + 0x8C) = eax;
    edx = MEM32(esi);
    PUSH32(esp, 0xBF800000u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0011E034u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011E031u); } /* indirect call */
    }

loc_0011E034: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x40000000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0011E045u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011E042u); } /* indirect call */
    }

loc_0011E045: ;
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0011E04Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011E04C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E066; /* je: equal / zero */

loc_0011E053: ;
    ecx = MEM32(0x1DE818);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0011E062u); RECOMP_ABI_CALL(0x0011D300u, sub_0011D300); /* call 0x0011D300 */

loc_0011E062: ;
    edi = eax;
    goto loc_0011E068;

loc_0011E066: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011E068: ;
    PUSH32(esp, 0x3E6B851F);
    PUSH32(esp, 0x3EE66666);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x34;
    MEM32(esi + 0x9C) = edi;
    PUSH32(esp, 0x0011E08Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011E08B: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x34;
    MEM32(edi + 0x54) = edx;
    PUSH32(esp, 0x0011E0A9u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011E0A9: ;
    eax = MEM32(esi + 0x9C);
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 0x58) = ecx;
    edx = MEM32(esi + 0x9C);
    MEM32(edx + 0x5C) = 0x3D4CCCCD;
    eax = MEM32(esi + 0x9C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011E0D3u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011E0D3: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x0011E0DAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011E0DA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011E0EE; /* je: equal / zero */

loc_0011E0E2: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0011E0ECu); RECOMP_ABI_CALL(0x00050560u, sub_00050560); /* call 0x00050560 */

loc_0011E0EC: ;
    goto loc_0011E0F0;

loc_0011E0EE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011E0F0: ;
    ecx = esp + 0xC;
    MEM32(esi + 0x94) = eax;
    MEM32(esp + 0xC) = 0xBF7D70A4u;
    MEM32(esp + 0x10) = 0xBF733333u;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3FF33333;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0011E122u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011E11Fu); } /* indirect call */
    }

loc_0011E122: ;
    edx = MEM32(esi + 0x94);
    MEM32(edx + 0x48) = 0x10;
    eax = MEM32(esi + 0x94);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011E13Fu); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011E13F: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x0011E146u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011E146: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E15C; /* je: equal / zero */

loc_0011E14D: ;
    PUSH32(esp, 0x1C6048);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x0011E15Au); RECOMP_ABI_CALL(0x0011DDB0u, sub_0011DDB0); /* call 0x0011DDB0 */

loc_0011E15A: ;
    goto loc_0011E15E;

loc_0011E15C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011E15E: ;
    MEM32(esi + 0x98) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = 0;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    MEM32(esp + 0x10) = 0xBF733333u;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    MEM32(esp + 0x14) = 0x3F7D70A4;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 8) = ecx;
    MEM32(esp + 0x18) = 0x3FF33333;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esi + 0x98);
    MEM32(eax + 0x38) = 0x12;
    ecx = MEM32(esi + 0x98);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011E1BFu); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011E1BF: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0011E1D0
 * Original: 0x0011E1D0 - 0x0011E45C (652 bytes, 181 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E1D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E1D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x0011E1E0u); RECOMP_ABI_CALL(0x0011DC50u, sub_0011DC50); /* call 0x0011DC50 */

loc_0011E1E0: ;
    ebx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = MEM32(esp + 0x24);
    edi = esi + 0x20;
    MEM32(esi) = 0x1C60C0;
    MEM32(edi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0011E1FF; /* jne: not equal / not zero */

loc_0011E1F7: ;
    ecx = esi + 0x78;
    MEM32(esi + 0x70) = ecx;
    goto loc_0011E202;

loc_0011E1FF: ;
    MEM32(esi + 0x70) = ebx;

loc_0011E202: ;
    ebp = MEM32(esp + 0x34);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    MEM32(esi + 0x80) = edx;
    MEM32(esi + 0x88) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0011E226; /* jne: not equal / not zero */

loc_0011E21E: ;
    ecx = esi + 0x7C;
    MEM32(esi + 0x74) = ecx;
    goto loc_0011E229;

loc_0011E226: ;
    MEM32(esi + 0x74) = ebp;

loc_0011E229: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esi + 0x84) = edx;
    MEM32(esi + 0x8C) = eax;
    edx = MEM32(esi);
    PUSH32(esp, 0xBF800000u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0011E24Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011E248u); } /* indirect call */
    }

loc_0011E24B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x40000000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0011E25Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011E259u); } /* indirect call */
    }

loc_0011E25C: ;
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0011E263u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011E263: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E27B; /* je: equal / zero */

loc_0011E26A: ;
    ecx = MEM32(0x1DE818);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0011E279u); RECOMP_ABI_CALL(0x0011D300u, sub_0011D300); /* call 0x0011D300 */

loc_0011E279: ;
    goto loc_0011E27D;

loc_0011E27B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011E27D: ;
    PUSH32(esp, 0x3E6B851F);
    PUSH32(esp, 0x3EE66666);
    PUSH32(esp, 0x3ED1EB85);
    MEM32(esi + 0xA0) = eax;
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x34;
    MEM32(eax + 0x5C) = 0x3D4CCCCD;
    PUSH32(esp, 0x0011E2A7u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011E2A7: ;
    edx = MEM32(esi + 0xA0);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x34;
    MEM32(edx + 0x54) = eax;
    PUSH32(esp, 0x0011E2CBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011E2CB: ;
    ecx = MEM32(esi + 0xA0);
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 0x58) = edx;
    eax = MEM32(esi + 0xA0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011E2E8u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011E2E8: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x0011E2EFu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011E2EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E302; /* je: equal / zero */

loc_0011E2F6: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0011E300u); RECOMP_ABI_CALL(0x00050560u, sub_00050560); /* call 0x00050560 */

loc_0011E300: ;
    goto loc_0011E304;

loc_0011E302: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011E304: ;
    ecx = esp + 0x10;
    MEM32(esi + 0x94) = eax;
    MEM32(esp + 0x10) = 0xBF4CCCCDu;
    MEM32(esp + 0x14) = 0xBF4CCCCDu;
    MEM32(esp + 0x18) = 0x3F4CCCCD;
    MEM32(esp + 0x1C) = 0x3FCCCCCD;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0011E336u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011E333u); } /* indirect call */
    }

loc_0011E336: ;
    edx = MEM32(esi + 0x94);
    MEM32(edx + 0x48) = 0x10;
    eax = MEM32(esi + 0x94);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011E353u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011E353: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x0011E35Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011E35A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E370; /* je: equal / zero */

loc_0011E361: ;
    PUSH32(esp, 0x1C3C64);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0011E36Eu); RECOMP_ABI_CALL(0x0011DDB0u, sub_0011DDB0); /* call 0x0011DDB0 */

loc_0011E36E: ;
    goto loc_0011E372;

loc_0011E370: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011E372: ;
    MEM32(esi + 0x98) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = 0;
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    MEM32(esp + 0x14) = 0xBF4CCCCDu;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 4) = edx;
    MEM32(esp + 0x18) = 0x3F4CCCCD;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 8) = ecx;
    MEM32(esp + 0x1C) = 0x3F4CCCCD;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esi + 0x98);
    edi = 0x12;
    MEM32(eax + 0x38) = edi;
    ecx = MEM32(esi + 0x98);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011E3D4u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011E3D4: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x0011E3DBu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011E3DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E3F1; /* je: equal / zero */

loc_0011E3E2: ;
    PUSH32(esp, 0x1C3C64);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x0011E3EFu); RECOMP_ABI_CALL(0x0011DDB0u, sub_0011DDB0); /* call 0x0011DDB0 */

loc_0011E3EF: ;
    goto loc_0011E3F3;

loc_0011E3F1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011E3F3: ;
    MEM32(esi + 0x9C) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = 0;
    edx = MEM32(esp + 0x10);
    MEM32(eax) = edx;
    MEM32(esp + 0x14) = 0;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 4) = ecx;
    MEM32(esp + 0x18) = 0x3F4CCCCD;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 8) = edx;
    MEM32(esp + 0x1C) = 0x3F4CCCCD;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(esi + 0x9C);
    MEM32(edx + 0x38) = edi;
    eax = MEM32(esi + 0x9C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011E450u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011E450: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0011E460
 * Original: 0x0011E460 - 0x0011E514 (180 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E460(void)
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

loc_0011E460: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0011E46Fu); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_0011E46F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011E476u); RECOMP_ABI_CALL(0x0001D270u, sub_0001D270); /* call 0x0001D270 */

loc_0011E476: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(0x1DE46C);
    edx = MEM32(eax + ecx * 4 + 0x24);
    MEM32(eax) = edx;
    eax = MEM32(esi + 0x28);
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2C);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011E49Bu); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_0011E49B: ;
    eax = MEM32(esi + 0x24);
    edi = MEM32(esp + 0xAC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0011E4B5u); RECOMP_ABI_CALL(0x00112400u, sub_00112400); /* call 0x00112400 */

loc_0011E4B5: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(esi + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 4) = edx;
    edx = MEM32(esi + 0xC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0011E4F5u); RECOMP_ABI_CALL(0x001124A0u, sub_001124A0); /* call 0x001124A0 */

loc_0011E4F5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011E4FCu); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_0011E4FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0011E504u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_0011E504: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011E520
 * Original: 0x0011E520 - 0x0011E54B (43 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E520: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xB4;
    PUSH32(esp, 0x0011E52Eu); RECOMP_ABI_CALL(0x000148B0u, sub_000148B0); /* call 0x000148B0 */

loc_0011E52E: ;
    ecx = esi;
    PUSH32(esp, 0x0011E535u); RECOMP_ABI_CALL(0x00110BA0u, sub_00110BA0); /* call 0x00110BA0 */

loc_0011E535: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011E545; /* je: equal / zero */

loc_0011E53C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E542u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011E542: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011E545: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E550
 * Original: 0x0011E550 - 0x0011E55B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E550: ;
    MEM32(ecx) = 0x1C6138;
    g_seh_ebp = ebp; sub_00114670(); return; /* tail jmp 0x00114670 */

}

/**
 * sub_0011E560
 * Original: 0x0011E560 - 0x0011E56B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E560(void)
{

loc_0011E560: ;
    PUSH32(esp, 0x0011E565u); RECOMP_ABI_CALL(0x00114150u, sub_00114150); /* call 0x00114150 */

loc_0011E565: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E570
 * Original: 0x0011E570 - 0x0011E58C (28 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E570: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0011E57Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011E577u); } /* indirect call */
    }

loc_0011E57A: ;
    ecx = esi;
    PUSH32(esp, 0x0011E581u); RECOMP_ABI_CALL(0x00114190u, sub_00114190); /* call 0x00114190 */

loc_0011E581: ;
    ecx = esi;
    PUSH32(esp, 0x0011E588u); RECOMP_ABI_CALL(0x00113790u, sub_00113790); /* call 0x00113790 */

loc_0011E588: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E590
 * Original: 0x0011E590 - 0x0011E5E8 (88 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E590: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA0);
    esi = ecx;
    PUSH32(esp, 0x0011E59Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011E59D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E5D3; /* je: equal / zero */

loc_0011E5A4: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0011E5BFu); RECOMP_ABI_CALL(0x0011DFE0u, sub_0011DFE0); /* call 0x0011DFE0 */

loc_0011E5BF: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011E5CAu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0011E5CA: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0011E5D3: ;
    ecx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011E5DFu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0011E5DF: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0011E5F0
 * Original: 0x0011E5F0 - 0x0011E63E (78 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E5F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x98);
    esi = ecx;
    PUSH32(esp, 0x0011E5FDu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011E5FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E629; /* je: equal / zero */

loc_0011E604: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0011E615u); RECOMP_ABI_CALL(0x0011D950u, sub_0011D950); /* call 0x0011D950 */

loc_0011E615: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011E620u); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0011E620: ;
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0011E629: ;
    ecx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011E635u); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0011E635: ;
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011E640
 * Original: 0x0011E640 - 0x0011E645 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011E640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E640: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0011E650
 * Original: 0x0011E650 - 0x0011E69B (75 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E650: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7C);
    esi = ecx;
    PUSH32(esp, 0x0011E65Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011E65A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E686; /* je: equal / zero */

loc_0011E661: ;
    edx = MEM32(esp + 8);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0011E672u); RECOMP_ABI_CALL(0x0011DB60u, sub_0011DB60); /* call 0x0011DB60 */

loc_0011E672: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011E67Du); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0011E67D: ;
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0011E686: ;
    ecx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011E692u); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0011E692: ;
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011E6A0
 * Original: 0x0011E6A0 - 0x0011E6B2 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E6A0(void)
{

loc_0011E6A0: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0011E6AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011E6ACu); } /* indirect call */
    }

loc_0011E6AF: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0011E6C0
 * Original: 0x0011E6C0 - 0x0011E6C5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011E6C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E6C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011E6D0
 * Original: 0x0011E6D0 - 0x0011E6D5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011E6D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E6D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0011E6E0
 * Original: 0x0011E6E0 - 0x0011E77D (157 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E6E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA4);
    ebx = ecx;
    PUSH32(esp, 0x0011E6EFu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011E6EF: ;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E721; /* je: equal / zero */

loc_0011E6FE: ;
    PUSH32(esp, 0x461C4000);
    PUSH32(esp, 0xC61C4000u);
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x461C4000);
    PUSH32(esp, 0xC61C4000u);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0011E71Fu); RECOMP_ABI_CALL(0x0011E1D0u, sub_0011E1D0); /* call 0x0011E1D0 */

loc_0011E71F: ;
    goto loc_0011E723;

loc_0011E721: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011E723: ;
    ecx = MEM32(ebx + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011E72Eu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0011E72E: ;
    PUSH32(esp, 0xA4);
    PUSH32(esp, 0x0011E738u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011E738: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E765; /* je: equal / zero */

loc_0011E73F: ;
    PUSH32(esp, 0x461C4000);
    PUSH32(esp, 0xC61C4000u);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x461C4000);
    PUSH32(esp, 0xC61C4000u);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0011E763u); RECOMP_ABI_CALL(0x0011E1D0u, sub_0011E1D0); /* call 0x0011E1D0 */

loc_0011E763: ;
    goto loc_0011E767;

loc_0011E765: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011E767: ;
    ecx = MEM32(ebx + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011E772u); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0011E772: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011E780
 * Original: 0x0011E780 - 0x0011E785 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E780: ;
    g_seh_ebp = ebp; sub_00113850(); return; /* tail jmp 0x00113850 */

}

/**
 * sub_0011E790
 * Original: 0x0011E790 - 0x0011E7A0 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E790: ;
    g_seh_ebp = ebp; sub_001138E0(); return; /* tail jmp 0x001138E0 */

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

    g_seh_ebp = ebp; sub_0011E7A0(); return; /* fallthrough 0x0011E7A0 */

}

/**
 * sub_0011E7A0
 * Original: 0x0011E7A0 - 0x0011E7B0 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E7A0: ;
    g_seh_ebp = ebp; sub_00113990(); return; /* tail jmp 0x00113990 */

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

    g_seh_ebp = ebp; sub_0011E7B0(); return; /* fallthrough 0x0011E7B0 */

}

/**
 * sub_0011E7B0
 * Original: 0x0011E7B0 - 0x0011E7C0 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E7B0: ;
    g_seh_ebp = ebp; sub_00113A00(); return; /* tail jmp 0x00113A00 */

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

    g_seh_ebp = ebp; sub_0011E7C0(); return; /* fallthrough 0x0011E7C0 */

}

/**
 * sub_0011E7C0
 * Original: 0x0011E7C0 - 0x0011E7D0 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E7C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E7C0: ;
    g_seh_ebp = ebp; sub_00113A80(); return; /* tail jmp 0x00113A80 */

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

    g_seh_ebp = ebp; sub_0011E7D0(); return; /* fallthrough 0x0011E7D0 */

}

/**
 * sub_0011E7D0
 * Original: 0x0011E7D0 - 0x0011E7E0 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E7D0: ;
    g_seh_ebp = ebp; sub_00113B00(); return; /* tail jmp 0x00113B00 */

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

    g_seh_ebp = ebp; sub_0011E7E0(); return; /* fallthrough 0x0011E7E0 */

}

/**
 * sub_0011E7E0
 * Original: 0x0011E7E0 - 0x0011E7F0 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E7E0: ;
    g_seh_ebp = ebp; sub_00113B60(); return; /* tail jmp 0x00113B60 */

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

    g_seh_ebp = ebp; sub_0011E7F0(); return; /* fallthrough 0x0011E7F0 */

}

/**
 * sub_0011E7F0
 * Original: 0x0011E7F0 - 0x0011E800 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E7F0: ;
    g_seh_ebp = ebp; sub_00113560(); return; /* tail jmp 0x00113560 */

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

    g_seh_ebp = ebp; sub_0011E800(); return; /* fallthrough 0x0011E800 */

}

/**
 * sub_0011E800
 * Original: 0x0011E800 - 0x0011E810 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E800: ;
    g_seh_ebp = ebp; sub_00113BC0(); return; /* tail jmp 0x00113BC0 */

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

    g_seh_ebp = ebp; sub_0011E810(); return; /* fallthrough 0x0011E810 */

}

/**
 * sub_0011E810
 * Original: 0x0011E810 - 0x0011E820 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E810: ;
    g_seh_ebp = ebp; sub_00113C30(); return; /* tail jmp 0x00113C30 */

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

    g_seh_ebp = ebp; sub_0011E820(); return; /* fallthrough 0x0011E820 */

}

/**
 * sub_0011E820
 * Original: 0x0011E820 - 0x0011E830 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E820: ;
    g_seh_ebp = ebp; sub_00113650(); return; /* tail jmp 0x00113650 */

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

    g_seh_ebp = ebp; sub_0011E830(); return; /* fallthrough 0x0011E830 */

}

/**
 * sub_0011E830
 * Original: 0x0011E830 - 0x0011E840 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E830: ;
    g_seh_ebp = ebp; sub_00113CE0(); return; /* tail jmp 0x00113CE0 */

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

    g_seh_ebp = ebp; sub_0011E840(); return; /* fallthrough 0x0011E840 */

}

/**
 * sub_0011E840
 * Original: 0x0011E840 - 0x0011E850 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E840: ;
    g_seh_ebp = ebp; sub_00113F60(); return; /* tail jmp 0x00113F60 */

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

    g_seh_ebp = ebp; sub_0011E850(); return; /* fallthrough 0x0011E850 */

}

/**
 * sub_0011E850
 * Original: 0x0011E850 - 0x0011E860 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E850: ;
    g_seh_ebp = ebp; sub_00114000(); return; /* tail jmp 0x00114000 */

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

    g_seh_ebp = ebp; sub_0011E860(); return; /* fallthrough 0x0011E860 */

}

/**
 * sub_0011E860
 * Original: 0x0011E860 - 0x0011E863 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E860(void)
{

loc_0011E860: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E870
 * Original: 0x0011E870 - 0x0011E8A5 (53 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E870(void)
{

loc_0011E870: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x0011E881u); RECOMP_ABI_CALL(0x00114300u, sub_00114300); /* call 0x00114300 */

loc_0011E881: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi) = 0x1C6138;
    MEM32(esi + 0xC) = 1;
    MEM32(eax + 0x2C) = 0xBF800000u;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011E8B0
 * Original: 0x0011E8B0 - 0x0011E8D4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E8B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C6138;
    PUSH32(esp, 0x0011E8BEu); RECOMP_ABI_CALL(0x00114670u, sub_00114670); /* call 0x00114670 */

loc_0011E8BE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011E8CE; /* je: equal / zero */

loc_0011E8C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011E8CBu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0011E8CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011E8CE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E8E0
 * Original: 0x0011E8E0 - 0x0011E8FD (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E8E0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x14), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011E8F5; /* je: equal / zero */

loc_0011E8E6: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0011E8F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011E8F2u); } /* indirect call */
    }

loc_0011E8F5: ;
    eax = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011E900
 * Original: 0x0011E900 - 0x0011E966 (102 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E900: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA4);
    esi = ecx;
    PUSH32(esp, 0x0011E90Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011E90D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E951; /* je: equal / zero */

loc_0011E914: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x461C4000);
    PUSH32(esp, 0xC61C4000u);
    edx = ecx + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x461C4000);
    PUSH32(esp, 0xC61C4000u);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0011E93Du); RECOMP_ABI_CALL(0x0011E1D0u, sub_0011E1D0); /* call 0x0011E1D0 */

loc_0011E93D: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011E948u); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0011E948: ;
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0011E951: ;
    ecx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011E95Du); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0011E95D: ;
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011E970
 * Original: 0x0011E970 - 0x0011EA56 (230 bytes, 77 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E970: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EA4D; /* je: equal / zero */

loc_0011E981: ;
    edx = MEM32(esp + 0x28);
    _fa = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EA41; /* jne: not equal / not zero */

loc_0011E98F: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx));
    if (CMP_EQ(_fa, _fb)) goto loc_0011E9A5; /* je: equal / zero */

loc_0011E99C: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E9AA; /* je: equal / zero */

loc_0011E9A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E9B7; /* jne: not equal / not zero */

loc_0011E9A5: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E9B3; /* jne: not equal / not zero */

loc_0011E9AA: ;
    SET_LO8(eax, MEM8(esi + 0x7B));
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ecx) = LO8(eax);
    goto loc_0011E9CE;

loc_0011E9B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E9C0; /* je: equal / zero */

loc_0011E9B7: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011E9C5; /* je: equal / zero */

loc_0011E9BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E9CE; /* jne: not equal / not zero */

loc_0011E9C0: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011E9CE; /* jne: not equal / not zero */

loc_0011E9C5: ;
    SET_LO8(eax, MEM8(esi + 0x7B));
    SET_LO8(edx, LO8(ebx));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(ecx) = LO8(edx);

loc_0011E9CE: ;
    ecx = MEM32(esi + 0x70);
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, MEM8(esi + 0x79));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011E9E1; /* jl: less (signed <) */

loc_0011E9DA: ;
    SET_LO8(edx, MEM8(esi + 0x7A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011E9E3; /* jle: less or equal (signed <=) */

loc_0011E9E1: ;
    MEM8(ecx) = LO8(edx);

loc_0011E9E3: ;
    eax = MEM32(esi + 0x70);
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0011EA41; /* je: equal / zero */

loc_0011E9ED: ;
    ecx = esi;
    PUSH32(esp, 0x0011E9F4u); RECOMP_ABI_CALL(0x00110470u, sub_00110470); /* call 0x00110470 */

loc_0011E9F4: ;
    ecx = MEM32(esi + 0x70);
    ecx = (uint32_t)(int32_t)SMEM8(ecx);
    edx = MEM32(esi + 0x30);
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 4;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = 4;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0011EA41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011EA3Eu); } /* indirect call */
    }

loc_0011EA41: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0011EA4D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EA60
 * Original: 0x0011EA60 - 0x0011EB46 (230 bytes, 77 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EA60: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EB3D; /* je: equal / zero */

loc_0011EA71: ;
    edx = MEM32(esp + 0x28);
    _fa = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EB31; /* jne: not equal / not zero */

loc_0011EA7F: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx));
    if (CMP_EQ(_fa, _fb)) goto loc_0011EA95; /* je: equal / zero */

loc_0011EA8C: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EA9A; /* je: equal / zero */

loc_0011EA91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EAA7; /* jne: not equal / not zero */

loc_0011EA95: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EAA3; /* jne: not equal / not zero */

loc_0011EA9A: ;
    SET_LO8(eax, MEM8(esi + 0x7B));
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ecx) = LO8(eax);
    goto loc_0011EABE;

loc_0011EAA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EAB0; /* je: equal / zero */

loc_0011EAA7: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EAB5; /* je: equal / zero */

loc_0011EAAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EABE; /* jne: not equal / not zero */

loc_0011EAB0: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EABE; /* jne: not equal / not zero */

loc_0011EAB5: ;
    SET_LO8(eax, MEM8(esi + 0x7B));
    SET_LO8(edx, LO8(ebx));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(ecx) = LO8(edx);

loc_0011EABE: ;
    ecx = MEM32(esi + 0x70);
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, MEM8(esi + 0x79));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0011EAD1; /* jb: below (unsigned <) */

loc_0011EACA: ;
    SET_LO8(edx, MEM8(esi + 0x7A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0011EAD3; /* jbe: below or equal (unsigned <=) */

loc_0011EAD1: ;
    MEM8(ecx) = LO8(edx);

loc_0011EAD3: ;
    eax = MEM32(esi + 0x70);
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0011EB31; /* je: equal / zero */

loc_0011EADD: ;
    ecx = esi;
    PUSH32(esp, 0x0011EAE4u); RECOMP_ABI_CALL(0x00110470u, sub_00110470); /* call 0x00110470 */

loc_0011EAE4: ;
    ecx = MEM32(esi + 0x70);
    ecx = ZX8(MEM8(ecx));
    edx = MEM32(esi + 0x30);
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 4;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = 4;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0011EB31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011EB2Eu); } /* indirect call */
    }

loc_0011EB31: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0011EB3D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EB50
 * Original: 0x0011EB50 - 0x0011EC40 (240 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EB50: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EC37; /* je: equal / zero */

loc_0011EB61: ;
    edx = MEM32(esp + 0x28);
    _fa = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EC2B; /* jne: not equal / not zero */

loc_0011EB6F: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(ecx));
    if (CMP_EQ(_fa, _fb)) goto loc_0011EB86; /* je: equal / zero */

loc_0011EB7D: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EB8B; /* je: equal / zero */

loc_0011EB82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EB9B; /* jne: not equal / not zero */

loc_0011EB86: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EB97; /* jne: not equal / not zero */

loc_0011EB8B: ;
    SET_LO16(eax, MEM16(esi + 0x7E));
    _fb = (uint32_t)(LO16(edi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + LO16(edi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(ecx) = LO16(eax);
    goto loc_0011EBB3;

loc_0011EB97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EBA4; /* je: equal / zero */

loc_0011EB9B: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EBA9; /* je: equal / zero */

loc_0011EBA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EBB3; /* jne: not equal / not zero */

loc_0011EBA4: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EBB3; /* jne: not equal / not zero */

loc_0011EBA9: ;
    SET_LO16(edx, LO16(edi));
    _fb = (uint32_t)(MEM16(esi + 0x7E)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(edx, LO16(edx) - MEM16(esi + 0x7E));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    MEM16(ecx) = LO16(edx);

loc_0011EBB3: ;
    ecx = MEM32(esi + 0x70);
    SET_LO16(eax, MEM16(ecx));
    SET_LO16(edx, MEM16(esi + 0x7A));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011EBCB; /* jl: less (signed <) */

loc_0011EBC2: ;
    SET_LO16(edx, MEM16(esi + 0x7C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011EBCE; /* jle: less or equal (signed <=) */

loc_0011EBCB: ;
    MEM16(ecx) = LO16(edx);

loc_0011EBCE: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(edi) (16-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011EC2B; /* je: equal / zero */

loc_0011EBD7: ;
    ecx = esi;
    PUSH32(esp, 0x0011EBDEu); RECOMP_ABI_CALL(0x00110470u, sub_00110470); /* call 0x00110470 */

loc_0011EBDE: ;
    ecx = MEM32(esi + 0x70);
    ecx = (uint32_t)(int32_t)SMEM16(ecx);
    edx = MEM32(esi + 0x30);
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 4;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = 4;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0011EC2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011EC28u); } /* indirect call */
    }

loc_0011EC2B: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0011EC37: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EC40
 * Original: 0x0011EC40 - 0x0011ED30 (240 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EC40: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011ED27; /* je: equal / zero */

loc_0011EC51: ;
    edx = MEM32(esp + 0x28);
    _fa = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011ED1B; /* jne: not equal / not zero */

loc_0011EC5F: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(ecx));
    if (CMP_EQ(_fa, _fb)) goto loc_0011EC76; /* je: equal / zero */

loc_0011EC6D: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EC7B; /* je: equal / zero */

loc_0011EC72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EC8B; /* jne: not equal / not zero */

loc_0011EC76: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EC87; /* jne: not equal / not zero */

loc_0011EC7B: ;
    SET_LO16(eax, MEM16(esi + 0x7E));
    _fb = (uint32_t)(LO16(edi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + LO16(edi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(ecx) = LO16(eax);
    goto loc_0011ECA3;

loc_0011EC87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EC94; /* je: equal / zero */

loc_0011EC8B: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EC99; /* je: equal / zero */

loc_0011EC90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011ECA3; /* jne: not equal / not zero */

loc_0011EC94: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011ECA3; /* jne: not equal / not zero */

loc_0011EC99: ;
    SET_LO16(edx, LO16(edi));
    _fb = (uint32_t)(MEM16(esi + 0x7E)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(edx, LO16(edx) - MEM16(esi + 0x7E));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    MEM16(ecx) = LO16(edx);

loc_0011ECA3: ;
    ecx = MEM32(esi + 0x70);
    SET_LO16(eax, MEM16(ecx));
    SET_LO16(edx, MEM16(esi + 0x7A));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0011ECBB; /* jb: below (unsigned <) */

loc_0011ECB2: ;
    SET_LO16(edx, MEM16(esi + 0x7C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0011ECBE; /* jbe: below or equal (unsigned <=) */

loc_0011ECBB: ;
    MEM16(ecx) = LO16(edx);

loc_0011ECBE: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(edi) (16-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011ED1B; /* je: equal / zero */

loc_0011ECC7: ;
    ecx = esi;
    PUSH32(esp, 0x0011ECCEu); RECOMP_ABI_CALL(0x00110470u, sub_00110470); /* call 0x00110470 */

loc_0011ECCE: ;
    ecx = MEM32(esi + 0x70);
    ecx = ZX16(MEM16(ecx));
    edx = MEM32(esi + 0x30);
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 4;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = 4;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0011ED1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011ED18u); } /* indirect call */
    }

loc_0011ED1B: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0011ED27: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011ED30
 * Original: 0x0011ED30 - 0x0011EE1C (236 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011ED30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011ED30: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EE13; /* je: equal / zero */

loc_0011ED41: ;
    edx = MEM32(esp + 0x28);
    _fa = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EE07; /* jne: not equal / not zero */

loc_0011ED4F: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0011ED65; /* je: equal / zero */

loc_0011ED5C: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011ED6A; /* je: equal / zero */

loc_0011ED61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011ED7A; /* jne: not equal / not zero */

loc_0011ED65: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011ED76; /* jne: not equal / not zero */

loc_0011ED6A: ;
    eax = MEM32(esi + 0x84);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    goto loc_0011ED94;

loc_0011ED76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011ED83; /* je: equal / zero */

loc_0011ED7A: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011ED88; /* je: equal / zero */

loc_0011ED7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011ED94; /* jne: not equal / not zero */

loc_0011ED83: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011ED94; /* jne: not equal / not zero */

loc_0011ED88: ;
    eax = MEM32(esi + 0x84);
    edx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = edx;

loc_0011ED94: ;
    ecx = MEM32(esi + 0x70);
    eax = MEM32(ecx);
    edx = MEM32(esi + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0011EDAA; /* jb: below (unsigned <) */

loc_0011EDA0: ;
    edx = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0011EDAC; /* jbe: below or equal (unsigned <=) */

loc_0011EDAA: ;
    MEM32(ecx) = edx;

loc_0011EDAC: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011EE07; /* je: equal / zero */

loc_0011EDB4: ;
    ecx = esi;
    PUSH32(esp, 0x0011EDBBu); RECOMP_ABI_CALL(0x00110470u, sub_00110470); /* call 0x00110470 */

loc_0011EDBB: ;
    ecx = MEM32(esi + 0x70);
    ecx = MEM32(ecx);
    edx = MEM32(esi + 0x30);
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 4;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = 4;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0011EE07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011EE04u); } /* indirect call */
    }

loc_0011EE07: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0011EE13: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EE20
 * Original: 0x0011EE20 - 0x0011EE98 (120 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EE20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EE20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x3F800000);
    MEM32(esi + 0xC) = 1;
    MEM32(esi) = 0x1C61F0;
    eax = 0xBF800000u;
    PUSH32(esp, 0x3F800000);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    eax = 0x40000000;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = esi + 0x24;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x0011EE6Du); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011EE6D: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x30) = 0x3F000000;
    MEM32(esi + 0x38) = 0x11;
    edx = MEM32(0x1DE814);
    MEM32(esi + 0x34) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011EEA0
 * Original: 0x0011EEA0 - 0x0011EF18 (120 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EEA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EEA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x3F800000);
    MEM32(esi + 0xC) = 1;
    MEM32(esi) = 0x1C6208;
    eax = 0xBF800000u;
    PUSH32(esp, 0x3F800000);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    eax = 0x40000000;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = esi + 0x24;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x0011EEEDu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011EEED: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x30) = 0x3F000000;
    MEM32(esi + 0x38) = 0x11;
    edx = MEM32(0x1DE814);
    MEM32(esi + 0x34) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011EF20
 * Original: 0x0011EF20 - 0x0011EF98 (120 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EF20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EF20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x3F800000);
    MEM32(esi + 0xC) = 1;
    MEM32(esi) = 0x1C6220;
    eax = 0xBF800000u;
    PUSH32(esp, 0x3F800000);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    eax = 0x40000000;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = esi + 0x24;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x0011EF6Du); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011EF6D: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x30) = 0x3F000000;
    MEM32(esi + 0x38) = 0x11;
    edx = MEM32(0x1DE814);
    MEM32(esi + 0x34) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011EFA0
 * Original: 0x0011EFA0 - 0x0011F018 (120 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EFA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EFA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x3F800000);
    MEM32(esi + 0xC) = 1;
    MEM32(esi) = 0x1C6238;
    eax = 0xBF800000u;
    PUSH32(esp, 0x3F800000);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    eax = 0x40000000;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = esi + 0x24;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x0011EFEDu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011EFED: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x30) = 0x3F000000;
    MEM32(esi + 0x38) = 0x11;
    edx = MEM32(0x1DE814);
    MEM32(esi + 0x34) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011F020
 * Original: 0x0011F020 - 0x0011F098 (120 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F020: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x3F800000);
    MEM32(esi + 0xC) = 1;
    MEM32(esi) = 0x1C6250;
    eax = 0xBF800000u;
    PUSH32(esp, 0x3F800000);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    eax = 0x40000000;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = esi + 0x24;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x0011F06Du); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011F06D: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x30) = 0x3F000000;
    MEM32(esi + 0x38) = 0x11;
    edx = MEM32(0x1DE814);
    MEM32(esi + 0x34) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011F0A0
 * Original: 0x0011F0A0 - 0x0011F118 (120 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F0A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011F0A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x3F800000);
    MEM32(esi + 0xC) = 1;
    MEM32(esi) = 0x1C6268;
    eax = 0xBF800000u;
    PUSH32(esp, 0x3F800000);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    eax = 0x40000000;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = esi + 0x24;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x0011F0EDu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011F0ED: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x30) = 0x3F000000;
    MEM32(esi + 0x38) = 0x11;
    edx = MEM32(0x1DE814);
    MEM32(esi + 0x34) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011F120
 * Original: 0x0011F120 - 0x0011F315 (501 bytes, 144 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F120: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x0011F12Fu); RECOMP_ABI_CALL(0x00110AF0u, sub_00110AF0); /* call 0x00110AF0 */

loc_0011F12F: ;
    ebp = MEM32(esp + 0x24);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = 1;
    MEM32(esi + 0x74) = ecx;
    eax = esi + 0x78;
    MEM8(esi + 0x7B) = LO8(ecx);
    ecx = MEM32(esp + 0x20);
    ebx = esi + 0x20;
    MEM8(eax) = 0;
    MEM8(esi + 0x79) = 0;
    MEM8(esi + 0x7A) = 0x64;
    MEM32(esi + 0x70) = eax;
    MEM32(esi) = 0x1C6280;
    MEM32(ebx) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0011F167; /* jne: not equal / not zero */

loc_0011F162: ;
    MEM32(esi + 0x70) = eax;
    goto loc_0011F16A;

loc_0011F167: ;
    MEM32(esi + 0x70) = ebp;

loc_0011F16A: ;
    SET_LO8(edx, MEM8(esp + 0x28));
    SET_LO8(eax, MEM8(esp + 0x2C));
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF800000u);
    ecx = esi;
    MEM8(esi + 0x79) = LO8(edx);
    MEM8(esi + 0x7A) = LO8(eax);
    { uint32_t _icall_target = MEM32(0x1C62B0); PUSH32(esp, 0x0011F188u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F182u); } /* indirect call */
    }

loc_0011F188: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x40000000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0011F199u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F196u); } /* indirect call */
    }

loc_0011F199: ;
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0011F1A0u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011F1A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F1BA; /* je: equal / zero */

loc_0011F1A7: ;
    ecx = MEM32(0x1DE818);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0011F1B6u); RECOMP_ABI_CALL(0x0011D300u, sub_0011D300); /* call 0x0011D300 */

loc_0011F1B6: ;
    edi = eax;
    goto loc_0011F1BC;

loc_0011F1BA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011F1BC: ;
    PUSH32(esp, 0x3E6B851F);
    PUSH32(esp, 0x3EE66666);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x3C;
    MEM32(esi + 0x84) = edi;
    PUSH32(esp, 0x0011F1DFu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011F1DF: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x3C;
    MEM32(edi + 0x54) = edx;
    PUSH32(esp, 0x0011F1FDu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011F1FD: ;
    eax = MEM32(esi + 0x84);
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 0x58) = ecx;
    edx = MEM32(esi + 0x84);
    MEM32(edx + 0x5C) = 0x3D4CCCCD;
    eax = MEM32(esi + 0x84);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011F227u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011F227: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x0011F22Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011F22E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011F242; /* je: equal / zero */

loc_0011F236: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0011F240u); RECOMP_ABI_CALL(0x00050560u, sub_00050560); /* call 0x00050560 */

loc_0011F240: ;
    goto loc_0011F244;

loc_0011F242: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011F244: ;
    ecx = esp + 0xC;
    MEM32(esi + 0x7C) = eax;
    MEM32(esp + 0xC) = 0xBF7D70A4u;
    MEM32(esp + 0x10) = 0xBF733333u;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3FF33333;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0011F273u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F270u); } /* indirect call */
    }

loc_0011F273: ;
    edx = MEM32(esi + 0x7C);
    MEM32(edx + 0x48) = 0x10;
    eax = MEM32(esi + 0x7C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011F28Au); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011F28A: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x0011F291u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011F291: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F2A7; /* je: equal / zero */

loc_0011F298: ;
    PUSH32(esp, 0x1B2A40);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x0011F2A5u); RECOMP_ABI_CALL(0x0011EE20u, sub_0011EE20); /* call 0x0011EE20 */

loc_0011F2A5: ;
    goto loc_0011F2A9;

loc_0011F2A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011F2A9: ;
    MEM32(esi + 0x80) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = 0;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    MEM32(esp + 0x10) = 0xBF733333u;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    MEM32(esp + 0x14) = 0x3F7D70A4;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 8) = ecx;
    MEM32(esp + 0x18) = 0x3FF33333;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esi + 0x80);
    MEM32(eax + 0x38) = 0x12;
    ecx = MEM32(esi + 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011F30Au); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011F30A: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0011F320
 * Original: 0x0011F320 - 0x0011F515 (501 bytes, 144 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F320: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x0011F32Fu); RECOMP_ABI_CALL(0x00110AF0u, sub_00110AF0); /* call 0x00110AF0 */

loc_0011F32F: ;
    ebp = MEM32(esp + 0x24);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = 1;
    MEM32(esi + 0x74) = ecx;
    eax = esi + 0x78;
    MEM8(esi + 0x7B) = LO8(ecx);
    ecx = MEM32(esp + 0x20);
    ebx = esi + 0x20;
    MEM8(eax) = 0;
    MEM8(esi + 0x79) = 0;
    MEM8(esi + 0x7A) = 0x64;
    MEM32(esi + 0x70) = eax;
    MEM32(esi) = 0x1C62F8;
    MEM32(ebx) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0011F367; /* jne: not equal / not zero */

loc_0011F362: ;
    MEM32(esi + 0x70) = eax;
    goto loc_0011F36A;

loc_0011F367: ;
    MEM32(esi + 0x70) = ebp;

loc_0011F36A: ;
    SET_LO8(edx, MEM8(esp + 0x28));
    SET_LO8(eax, MEM8(esp + 0x2C));
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF800000u);
    ecx = esi;
    MEM8(esi + 0x79) = LO8(edx);
    MEM8(esi + 0x7A) = LO8(eax);
    { uint32_t _icall_target = MEM32(0x1C6328); PUSH32(esp, 0x0011F388u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F382u); } /* indirect call */
    }

loc_0011F388: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x40000000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0011F399u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F396u); } /* indirect call */
    }

loc_0011F399: ;
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0011F3A0u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011F3A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F3BA; /* je: equal / zero */

loc_0011F3A7: ;
    ecx = MEM32(0x1DE818);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0011F3B6u); RECOMP_ABI_CALL(0x0011D300u, sub_0011D300); /* call 0x0011D300 */

loc_0011F3B6: ;
    edi = eax;
    goto loc_0011F3BC;

loc_0011F3BA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011F3BC: ;
    PUSH32(esp, 0x3E6B851F);
    PUSH32(esp, 0x3EE66666);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x3C;
    MEM32(esi + 0x84) = edi;
    PUSH32(esp, 0x0011F3DFu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011F3DF: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x3C;
    MEM32(edi + 0x54) = edx;
    PUSH32(esp, 0x0011F3FDu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011F3FD: ;
    eax = MEM32(esi + 0x84);
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 0x58) = ecx;
    edx = MEM32(esi + 0x84);
    MEM32(edx + 0x5C) = 0x3D4CCCCD;
    eax = MEM32(esi + 0x84);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011F427u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011F427: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x0011F42Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011F42E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0011F442; /* je: equal / zero */

loc_0011F436: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0011F440u); RECOMP_ABI_CALL(0x00050560u, sub_00050560); /* call 0x00050560 */

loc_0011F440: ;
    goto loc_0011F444;

loc_0011F442: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011F444: ;
    ecx = esp + 0xC;
    MEM32(esi + 0x7C) = eax;
    MEM32(esp + 0xC) = 0xBF7D70A4u;
    MEM32(esp + 0x10) = 0xBF733333u;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3FF33333;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0011F473u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F470u); } /* indirect call */
    }

loc_0011F473: ;
    edx = MEM32(esi + 0x7C);
    MEM32(edx + 0x48) = 0x10;
    eax = MEM32(esi + 0x7C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011F48Au); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011F48A: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x0011F491u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011F491: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F4A7; /* je: equal / zero */

loc_0011F498: ;
    PUSH32(esp, 0x1B2A40);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x0011F4A5u); RECOMP_ABI_CALL(0x0011EEA0u, sub_0011EEA0); /* call 0x0011EEA0 */

loc_0011F4A5: ;
    goto loc_0011F4A9;

loc_0011F4A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011F4A9: ;
    MEM32(esi + 0x80) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = 0;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    MEM32(esp + 0x10) = 0xBF733333u;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    MEM32(esp + 0x14) = 0x3F7D70A4;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 8) = ecx;
    MEM32(esp + 0x18) = 0x3FF33333;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esi + 0x80);
    MEM32(eax + 0x38) = 0x12;
    ecx = MEM32(esi + 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011F50Au); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011F50A: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0011F520
 * Original: 0x0011F520 - 0x0011F721 (513 bytes, 143 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F520: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0011F531u); RECOMP_ABI_CALL(0x00110AF0u, sub_00110AF0); /* call 0x00110AF0 */

loc_0011F531: ;
    ebp = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    ecx = 1;
    MEM32(esi + 0x74) = ecx;
    eax = esi + 0x78;
    MEM16(esi + 0x7E) = LO16(ecx);
    ecx = MEM32(esp + 0x24);
    ebx = esi + 0x20;
    MEM16(eax) = LO16(edi);
    MEM16(esi + 0x7A) = LO16(edi);
    MEM16(esi + 0x7C) = 0x64;
    MEM32(esi + 0x70) = eax;
    MEM32(esi) = 0x1C6370;
    MEM32(ebx) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0011F56C; /* jne: not equal / not zero */

loc_0011F567: ;
    MEM32(esi + 0x70) = eax;
    goto loc_0011F56F;

loc_0011F56C: ;
    MEM32(esi + 0x70) = ebp;

loc_0011F56F: ;
    SET_LO16(edx, MEM16(esp + 0x2C));
    SET_LO16(eax, MEM16(esp + 0x30));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0xBF800000u);
    ecx = esi;
    MEM16(esi + 0x7A) = LO16(edx);
    MEM16(esi + 0x7C) = LO16(eax);
    { uint32_t _icall_target = MEM32(0x1C63A0); PUSH32(esp, 0x0011F58Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F589u); } /* indirect call */
    }

loc_0011F58F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x40000000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0011F5A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F59Du); } /* indirect call */
    }

loc_0011F5A0: ;
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0011F5A7u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011F5A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F5BF; /* je: equal / zero */

loc_0011F5AE: ;
    ecx = MEM32(0x1DE818);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0011F5BDu); RECOMP_ABI_CALL(0x0011D300u, sub_0011D300); /* call 0x0011D300 */

loc_0011F5BD: ;
    edi = eax;

loc_0011F5BF: ;
    PUSH32(esp, 0x3E6B851F);
    PUSH32(esp, 0x3EE66666);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x3C;
    MEM32(esi + 0x88) = edi;
    PUSH32(esp, 0x0011F5E2u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011F5E2: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x3C;
    MEM32(edi + 0x54) = edx;
    PUSH32(esp, 0x0011F600u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011F600: ;
    eax = MEM32(esi + 0x88);
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 0x58) = ecx;
    edx = MEM32(esi + 0x88);
    MEM32(edx + 0x5C) = 0x3D4CCCCD;
    eax = MEM32(esi + 0x88);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011F62Au); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011F62A: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x0011F631u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011F631: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F644; /* je: equal / zero */

loc_0011F638: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0011F642u); RECOMP_ABI_CALL(0x00050560u, sub_00050560); /* call 0x00050560 */

loc_0011F642: ;
    goto loc_0011F646;

loc_0011F644: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011F646: ;
    ecx = esp + 0x10;
    MEM32(esi + 0x80) = eax;
    MEM32(esp + 0x10) = 0xBF7D70A4u;
    MEM32(esp + 0x14) = 0xBF733333u;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x3FF33333;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0011F678u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F675u); } /* indirect call */
    }

loc_0011F678: ;
    edx = MEM32(esi + 0x80);
    MEM32(edx + 0x48) = 0x10;
    eax = MEM32(esi + 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011F695u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011F695: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x0011F69Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011F69C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F6B2; /* je: equal / zero */

loc_0011F6A3: ;
    PUSH32(esp, 0x1B2A40);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x0011F6B0u); RECOMP_ABI_CALL(0x0011EF20u, sub_0011EF20); /* call 0x0011EF20 */

loc_0011F6B0: ;
    goto loc_0011F6B4;

loc_0011F6B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011F6B4: ;
    MEM32(esi + 0x84) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = 0;
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    MEM32(esp + 0x14) = 0xBF733333u;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 4) = edx;
    MEM32(esp + 0x18) = 0x3F7D70A4;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 8) = ecx;
    MEM32(esp + 0x1C) = 0x3FF33333;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esi + 0x84);
    MEM32(eax + 0x38) = 0x12;
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011F715u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011F715: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0011F730
 * Original: 0x0011F730 - 0x0011F931 (513 bytes, 143 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F730: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0011F741u); RECOMP_ABI_CALL(0x00110AF0u, sub_00110AF0); /* call 0x00110AF0 */

loc_0011F741: ;
    ebp = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    ecx = 1;
    MEM32(esi + 0x74) = ecx;
    eax = esi + 0x78;
    MEM16(esi + 0x7E) = LO16(ecx);
    ecx = MEM32(esp + 0x24);
    ebx = esi + 0x20;
    MEM16(eax) = LO16(edi);
    MEM16(esi + 0x7A) = LO16(edi);
    MEM16(esi + 0x7C) = 0x64;
    MEM32(esi + 0x70) = eax;
    MEM32(esi) = 0x1C63E8;
    MEM32(ebx) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0011F77C; /* jne: not equal / not zero */

loc_0011F777: ;
    MEM32(esi + 0x70) = eax;
    goto loc_0011F77F;

loc_0011F77C: ;
    MEM32(esi + 0x70) = ebp;

loc_0011F77F: ;
    SET_LO16(edx, MEM16(esp + 0x2C));
    SET_LO16(eax, MEM16(esp + 0x30));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0xBF800000u);
    ecx = esi;
    MEM16(esi + 0x7A) = LO16(edx);
    MEM16(esi + 0x7C) = LO16(eax);
    { uint32_t _icall_target = MEM32(0x1C6418); PUSH32(esp, 0x0011F79Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F799u); } /* indirect call */
    }

loc_0011F79F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x40000000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0011F7B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F7ADu); } /* indirect call */
    }

loc_0011F7B0: ;
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0011F7B7u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011F7B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F7CF; /* je: equal / zero */

loc_0011F7BE: ;
    ecx = MEM32(0x1DE818);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0011F7CDu); RECOMP_ABI_CALL(0x0011D300u, sub_0011D300); /* call 0x0011D300 */

loc_0011F7CD: ;
    edi = eax;

loc_0011F7CF: ;
    PUSH32(esp, 0x3E6B851F);
    PUSH32(esp, 0x3EE66666);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x3C;
    MEM32(esi + 0x88) = edi;
    PUSH32(esp, 0x0011F7F2u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011F7F2: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x3C;
    MEM32(edi + 0x54) = edx;
    PUSH32(esp, 0x0011F810u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011F810: ;
    eax = MEM32(esi + 0x88);
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 0x58) = ecx;
    edx = MEM32(esi + 0x88);
    MEM32(edx + 0x5C) = 0x3D4CCCCD;
    eax = MEM32(esi + 0x88);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011F83Au); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011F83A: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x0011F841u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011F841: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F854; /* je: equal / zero */

loc_0011F848: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0011F852u); RECOMP_ABI_CALL(0x00050560u, sub_00050560); /* call 0x00050560 */

loc_0011F852: ;
    goto loc_0011F856;

loc_0011F854: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011F856: ;
    ecx = esp + 0x10;
    MEM32(esi + 0x80) = eax;
    MEM32(esp + 0x10) = 0xBF7D70A4u;
    MEM32(esp + 0x14) = 0xBF733333u;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x3FF33333;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0011F888u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F885u); } /* indirect call */
    }

loc_0011F888: ;
    edx = MEM32(esi + 0x80);
    MEM32(edx + 0x48) = 0x10;
    eax = MEM32(esi + 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011F8A5u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011F8A5: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x0011F8ACu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011F8AC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F8C2; /* je: equal / zero */

loc_0011F8B3: ;
    PUSH32(esp, 0x1B2A40);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x0011F8C0u); RECOMP_ABI_CALL(0x0011EFA0u, sub_0011EFA0); /* call 0x0011EFA0 */

loc_0011F8C0: ;
    goto loc_0011F8C4;

loc_0011F8C2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011F8C4: ;
    MEM32(esi + 0x84) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = 0;
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    MEM32(esp + 0x14) = 0xBF733333u;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 4) = edx;
    MEM32(esp + 0x18) = 0x3F7D70A4;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 8) = ecx;
    MEM32(esp + 0x1C) = 0x3FF33333;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esi + 0x84);
    MEM32(eax + 0x38) = 0x12;
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011F925u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011F925: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0011F940
 * Original: 0x0011F940 - 0x0011FB44 (516 bytes, 143 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F940: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0011F951u); RECOMP_ABI_CALL(0x00110AF0u, sub_00110AF0); /* call 0x00110AF0 */

loc_0011F951: ;
    ebp = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    ecx = 1;
    MEM32(esi + 0x74) = ecx;
    eax = esi + 0x78;
    MEM32(esi + 0x84) = ecx;
    ecx = MEM32(esp + 0x24);
    ebx = esi + 0x20;
    MEM32(eax) = edi;
    MEM32(esi + 0x7C) = edi;
    MEM32(esi + 0x80) = 0x64;
    MEM32(esi + 0x70) = eax;
    MEM32(esi) = 0x1C6460;
    MEM32(ebx) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0011F990; /* jne: not equal / not zero */

loc_0011F98B: ;
    MEM32(esi + 0x70) = eax;
    goto loc_0011F993;

loc_0011F990: ;
    MEM32(esi + 0x70) = ebp;

loc_0011F993: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0xBF800000u);
    ecx = esi;
    MEM32(esi + 0x7C) = edx;
    MEM32(esi + 0x80) = eax;
    { uint32_t _icall_target = MEM32(0x1C6490); PUSH32(esp, 0x0011F9B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F9ACu); } /* indirect call */
    }

loc_0011F9B2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x40000000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0011F9C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F9C0u); } /* indirect call */
    }

loc_0011F9C3: ;
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0011F9CAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011F9CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011F9E2; /* je: equal / zero */

loc_0011F9D1: ;
    ecx = MEM32(0x1DE818);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0011F9E0u); RECOMP_ABI_CALL(0x0011D300u, sub_0011D300); /* call 0x0011D300 */

loc_0011F9E0: ;
    edi = eax;

loc_0011F9E2: ;
    PUSH32(esp, 0x3E6B851F);
    PUSH32(esp, 0x3EE66666);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x34;
    MEM32(esi + 0x90) = edi;
    PUSH32(esp, 0x0011FA05u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011FA05: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x34;
    MEM32(edi + 0x54) = edx;
    PUSH32(esp, 0x0011FA23u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011FA23: ;
    eax = MEM32(esi + 0x90);
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 0x58) = ecx;
    edx = MEM32(esi + 0x90);
    MEM32(edx + 0x5C) = 0x3D4CCCCD;
    eax = MEM32(esi + 0x90);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011FA4Du); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011FA4D: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x0011FA54u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011FA54: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FA67; /* je: equal / zero */

loc_0011FA5B: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0011FA65u); RECOMP_ABI_CALL(0x00050560u, sub_00050560); /* call 0x00050560 */

loc_0011FA65: ;
    goto loc_0011FA69;

loc_0011FA67: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011FA69: ;
    ecx = esp + 0x10;
    MEM32(esi + 0x88) = eax;
    MEM32(esp + 0x10) = 0xBF7D70A4u;
    MEM32(esp + 0x14) = 0xBF733333u;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x3FF33333;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0011FA9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011FA98u); } /* indirect call */
    }

loc_0011FA9B: ;
    edx = MEM32(esi + 0x88);
    MEM32(edx + 0x48) = 0x10;
    eax = MEM32(esi + 0x88);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011FAB8u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011FAB8: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x0011FABFu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011FABF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FAD5; /* je: equal / zero */

loc_0011FAC6: ;
    PUSH32(esp, 0x1B2A40);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x0011FAD3u); RECOMP_ABI_CALL(0x0011F020u, sub_0011F020); /* call 0x0011F020 */

loc_0011FAD3: ;
    goto loc_0011FAD7;

loc_0011FAD5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011FAD7: ;
    MEM32(esi + 0x8C) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = 0;
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    MEM32(esp + 0x14) = 0xBF733333u;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 4) = edx;
    MEM32(esp + 0x18) = 0x3F7D70A4;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 8) = ecx;
    MEM32(esp + 0x1C) = 0x3FF33333;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esi + 0x8C);
    MEM32(eax + 0x38) = 0x12;
    ecx = MEM32(esi + 0x8C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011FB38u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011FB38: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0011FB50
 * Original: 0x0011FB50 - 0x0011FD54 (516 bytes, 143 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011FB50: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0011FB61u); RECOMP_ABI_CALL(0x00110AF0u, sub_00110AF0); /* call 0x00110AF0 */

loc_0011FB61: ;
    ebp = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    ecx = 1;
    MEM32(esi + 0x74) = ecx;
    eax = esi + 0x78;
    MEM32(esi + 0x84) = ecx;
    ecx = MEM32(esp + 0x24);
    ebx = esi + 0x20;
    MEM32(eax) = edi;
    MEM32(esi + 0x7C) = edi;
    MEM32(esi + 0x80) = 0x64;
    MEM32(esi + 0x70) = eax;
    MEM32(esi) = 0x1C64D8;
    MEM32(ebx) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0011FBA0; /* jne: not equal / not zero */

loc_0011FB9B: ;
    MEM32(esi + 0x70) = eax;
    goto loc_0011FBA3;

loc_0011FBA0: ;
    MEM32(esi + 0x70) = ebp;

loc_0011FBA3: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0xBF800000u);
    ecx = esi;
    MEM32(esi + 0x7C) = edx;
    MEM32(esi + 0x80) = eax;
    { uint32_t _icall_target = MEM32(0x1C6508); PUSH32(esp, 0x0011FBC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011FBBCu); } /* indirect call */
    }

loc_0011FBC2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x40000000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0011FBD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011FBD0u); } /* indirect call */
    }

loc_0011FBD3: ;
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0011FBDAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011FBDA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FBF2; /* je: equal / zero */

loc_0011FBE1: ;
    ecx = MEM32(0x1DE818);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0011FBF0u); RECOMP_ABI_CALL(0x0011D300u, sub_0011D300); /* call 0x0011D300 */

loc_0011FBF0: ;
    edi = eax;

loc_0011FBF2: ;
    PUSH32(esp, 0x3E6B851F);
    PUSH32(esp, 0x3EE66666);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x34;
    MEM32(esi + 0x90) = edi;
    PUSH32(esp, 0x0011FC15u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011FC15: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x34;
    MEM32(edi + 0x54) = edx;
    PUSH32(esp, 0x0011FC33u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0011FC33: ;
    eax = MEM32(esi + 0x90);
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 0x58) = ecx;
    edx = MEM32(esi + 0x90);
    MEM32(edx + 0x5C) = 0x3D4CCCCD;
    eax = MEM32(esi + 0x90);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011FC5Du); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011FC5D: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x0011FC64u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011FC64: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FC77; /* je: equal / zero */

loc_0011FC6B: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0011FC75u); RECOMP_ABI_CALL(0x00050560u, sub_00050560); /* call 0x00050560 */

loc_0011FC75: ;
    goto loc_0011FC79;

loc_0011FC77: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011FC79: ;
    ecx = esp + 0x10;
    MEM32(esi + 0x88) = eax;
    MEM32(esp + 0x10) = 0xBF7D70A4u;
    MEM32(esp + 0x14) = 0xBF733333u;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x3FF33333;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0011FCABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011FCA8u); } /* indirect call */
    }

loc_0011FCAB: ;
    edx = MEM32(esi + 0x88);
    MEM32(edx + 0x48) = 0x10;
    eax = MEM32(esi + 0x88);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011FCC8u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011FCC8: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x0011FCCFu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0011FCCF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FCE5; /* je: equal / zero */

loc_0011FCD6: ;
    PUSH32(esp, 0x1B2A40);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x0011FCE3u); RECOMP_ABI_CALL(0x0011F0A0u, sub_0011F0A0); /* call 0x0011F0A0 */

loc_0011FCE3: ;
    goto loc_0011FCE7;

loc_0011FCE5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011FCE7: ;
    MEM32(esi + 0x8C) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = 0;
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    MEM32(esp + 0x14) = 0xBF733333u;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 4) = edx;
    MEM32(esp + 0x18) = 0x3F7D70A4;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 8) = ecx;
    MEM32(esp + 0x1C) = 0x3FF33333;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esi + 0x8C);
    MEM32(eax + 0x38) = 0x12;
    ecx = MEM32(esi + 0x8C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0011FD48u); RECOMP_ABI_CALL(0x00110480u, sub_00110480); /* call 0x00110480 */

loc_0011FD48: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0011FD60
 * Original: 0x0011FD60 - 0x0011FE12 (178 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FD60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FD60: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0011FD6Fu); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_0011FD6F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011FD76u); RECOMP_ABI_CALL(0x0001D270u, sub_0001D270); /* call 0x0001D270 */

loc_0011FD76: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(0x1DE46C);
    edx = MEM32(eax + ecx * 4 + 0x24);
    MEM32(eax) = edx;
    eax = MEM32(esi + 0x28);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011FD99u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_0011FD99: ;
    ecx = MEM32(esi + 0x24);
    edi = MEM32(esp + 0xAC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0011FDB3u); RECOMP_ABI_CALL(0x00112400u, sub_00112400); /* call 0x00112400 */

loc_0011FDB3: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esi + 8);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0011FDF3u); RECOMP_ABI_CALL(0x001124A0u, sub_001124A0); /* call 0x001124A0 */

loc_0011FDF3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011FDFAu); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_0011FDFA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0011FE02u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_0011FE02: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011FE20
 * Original: 0x0011FE20 - 0x0011FED2 (178 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FE20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FE20: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0011FE2Fu); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_0011FE2F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011FE36u); RECOMP_ABI_CALL(0x0001D270u, sub_0001D270); /* call 0x0001D270 */

loc_0011FE36: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(0x1DE46C);
    edx = MEM32(eax + ecx * 4 + 0x24);
    MEM32(eax) = edx;
    eax = MEM32(esi + 0x28);
    ecx = ZX8(MEM8(eax));
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011FE59u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_0011FE59: ;
    ecx = MEM32(esi + 0x24);
    edi = MEM32(esp + 0xAC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0011FE73u); RECOMP_ABI_CALL(0x00112400u, sub_00112400); /* call 0x00112400 */

loc_0011FE73: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esi + 8);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0011FEB3u); RECOMP_ABI_CALL(0x001124A0u, sub_001124A0); /* call 0x001124A0 */

loc_0011FEB3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011FEBAu); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_0011FEBA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0011FEC2u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_0011FEC2: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011FEE0
 * Original: 0x0011FEE0 - 0x0011FF92 (178 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FEE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FEE0: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0011FEEFu); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_0011FEEF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011FEF6u); RECOMP_ABI_CALL(0x0001D270u, sub_0001D270); /* call 0x0001D270 */

loc_0011FEF6: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(0x1DE46C);
    edx = MEM32(eax + ecx * 4 + 0x24);
    MEM32(eax) = edx;
    eax = MEM32(esi + 0x28);
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011FF19u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_0011FF19: ;
    ecx = MEM32(esi + 0x24);
    edi = MEM32(esp + 0xAC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0011FF33u); RECOMP_ABI_CALL(0x00112400u, sub_00112400); /* call 0x00112400 */

loc_0011FF33: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esi + 8);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0011FF73u); RECOMP_ABI_CALL(0x001124A0u, sub_001124A0); /* call 0x001124A0 */

loc_0011FF73: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011FF7Au); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_0011FF7A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0011FF82u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_0011FF82: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011FFA0
 * Original: 0x0011FFA0 - 0x00120052 (178 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FFA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011FFA0: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0011FFAFu); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_0011FFAF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011FFB6u); RECOMP_ABI_CALL(0x0001D270u, sub_0001D270); /* call 0x0001D270 */

loc_0011FFB6: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(0x1DE46C);
    edx = MEM32(eax + ecx * 4 + 0x24);
    MEM32(eax) = edx;
    eax = MEM32(esi + 0x28);
    ecx = ZX16(MEM16(eax));
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011FFD9u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_0011FFD9: ;
    ecx = MEM32(esi + 0x24);
    edi = MEM32(esp + 0xAC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0011FFF3u); RECOMP_ABI_CALL(0x00112400u, sub_00112400); /* call 0x00112400 */

loc_0011FFF3: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esi + 8);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00120033u); RECOMP_ABI_CALL(0x001124A0u, sub_001124A0); /* call 0x001124A0 */

loc_00120033: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012003Au); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_0012003A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00120042u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00120042: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120060
 * Original: 0x00120060 - 0x00120111 (177 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120060: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0012006Fu); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_0012006F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00120076u); RECOMP_ABI_CALL(0x0001D270u, sub_0001D270); /* call 0x0001D270 */

loc_00120076: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(0x1DE46C);
    edx = MEM32(eax + ecx * 4 + 0x24);
    MEM32(eax) = edx;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax);
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120098u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00120098: ;
    ecx = MEM32(esi + 0x24);
    edi = MEM32(esp + 0xAC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001200B2u); RECOMP_ABI_CALL(0x00112400u, sub_00112400); /* call 0x00112400 */

loc_001200B2: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esi + 8);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001200F2u); RECOMP_ABI_CALL(0x001124A0u, sub_001124A0); /* call 0x001124A0 */

loc_001200F2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001200F9u); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_001200F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00120101u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00120101: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120117
 * Original: 0x00120117 - 0x00120178 (97 bytes, 41 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120117(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120117: ;
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    PUSH32(esp, esi);
    PUSH32(esp, 0x88);
    esi = ecx;
    PUSH32(esp, 0x0012012Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0012012D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120163; /* je: equal / zero */

loc_00120134: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0012014Fu); RECOMP_ABI_CALL(0x0011F120u, sub_0011F120); /* call 0x0011F120 */

loc_0012014F: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012015Au); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0012015A: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00120163: ;
    ecx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012016Fu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0012016F: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00120120
 * Original: 0x00120120 - 0x00120360 (576 bytes, 240 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120120: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x88);
    esi = ecx;
    PUSH32(esp, 0x0012012Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0012012D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120163; /* je: equal / zero */

loc_00120134: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0012014Fu); RECOMP_ABI_CALL(0x0011F120u, sub_0011F120); /* call 0x0011F120 */

loc_0012014F: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012015Au); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0012015A: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00120163: ;
    ecx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012016Fu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0012016F: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001201C3; /* je: equal / zero */

loc_00120194: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001201AFu); RECOMP_ABI_CALL(0x0011F320u, sub_0011F320); /* call 0x0011F320 */

loc_001201AF: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001201BAu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_001201BA: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001201C3: ;
    ecx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001201CFu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_001201CF: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120223; /* je: equal / zero */

loc_001201F4: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0012020Fu); RECOMP_ABI_CALL(0x0011F520u, sub_0011F520); /* call 0x0011F520 */

loc_0012020F: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012021Au); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0012021A: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00120223: ;
    ecx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012022Fu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0012022F: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120283; /* je: equal / zero */

loc_00120254: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0012026Fu); RECOMP_ABI_CALL(0x0011F730u, sub_0011F730); /* call 0x0011F730 */

loc_0012026F: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012027Au); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0012027A: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00120283: ;
    ecx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012028Fu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0012028F: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001202E3; /* je: equal / zero */

loc_001202B4: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001202CFu); RECOMP_ABI_CALL(0x0011F940u, sub_0011F940); /* call 0x0011F940 */

loc_001202CF: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001202DAu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_001202DA: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001202E3: ;
    ecx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001202EFu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_001202EF: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120343; /* je: equal / zero */

loc_00120314: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0012032Fu); RECOMP_ABI_CALL(0x0011FB50u, sub_0011FB50); /* call 0x0011FB50 */

loc_0012032F: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012033Au); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0012033A: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00120343: ;
    ecx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012034Fu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0012034F: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    g_seh_ebp = ebp; sub_00120360(); return; /* fallthrough 0x00120360 */

}

/**
 * sub_00120180
 * Original: 0x00120180 - 0x001201D8 (88 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120180: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x88);
    esi = ecx;
    PUSH32(esp, 0x0012018Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0012018D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001201C3; /* je: equal / zero */

loc_00120194: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001201AFu); RECOMP_ABI_CALL(0x0011F320u, sub_0011F320); /* call 0x0011F320 */

loc_001201AF: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001201BAu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_001201BA: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001201C3: ;
    ecx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001201CFu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_001201CF: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001201E0
 * Original: 0x001201E0 - 0x00120238 (88 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001201E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001201E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8C);
    esi = ecx;
    PUSH32(esp, 0x001201EDu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_001201ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120223; /* je: equal / zero */

loc_001201F4: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0012020Fu); RECOMP_ABI_CALL(0x0011F520u, sub_0011F520); /* call 0x0011F520 */

loc_0012020F: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012021Au); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0012021A: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00120223: ;
    ecx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012022Fu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0012022F: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00120240
 * Original: 0x00120240 - 0x00120298 (88 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120240: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8C);
    esi = ecx;
    PUSH32(esp, 0x0012024Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0012024D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120283; /* je: equal / zero */

loc_00120254: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0012026Fu); RECOMP_ABI_CALL(0x0011F730u, sub_0011F730); /* call 0x0011F730 */

loc_0012026F: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012027Au); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0012027A: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00120283: ;
    ecx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012028Fu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0012028F: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001202A0
 * Original: 0x001202A0 - 0x001202F8 (88 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001202A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001202A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x94);
    esi = ecx;
    PUSH32(esp, 0x001202ADu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_001202AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001202E3; /* je: equal / zero */

loc_001202B4: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001202CFu); RECOMP_ABI_CALL(0x0011F940u, sub_0011F940); /* call 0x0011F940 */

loc_001202CF: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001202DAu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_001202DA: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001202E3: ;
    ecx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001202EFu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_001202EF: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00120300
 * Original: 0x00120300 - 0x00120358 (88 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120300: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x94);
    esi = ecx;
    PUSH32(esp, 0x0012030Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0012030D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120343; /* je: equal / zero */

loc_00120314: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0012032Fu); RECOMP_ABI_CALL(0x0011FB50u, sub_0011FB50); /* call 0x0011FB50 */

loc_0012032F: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012033Au); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0012033A: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00120343: ;
    ecx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012034Fu); RECOMP_ABI_CALL(0x0010FAA0u, sub_0010FAA0); /* call 0x0010FAA0 */

loc_0012034F: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00120360
 * Original: 0x00120360 - 0x00120383 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120360: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x61 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00120371; /* jl: less (signed <) */

loc_00120369: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7A (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00120371; /* jg: greater (signed >) */

loc_0012036E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00120371: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00120382; /* jl: less (signed <) */

loc_00120378: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFE (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00120382; /* jg: greater (signed >) */

loc_0012037F: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00120382: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00120390
 * Original: 0x00120390 - 0x00120412 (130 bytes, 45 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00120390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120390: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1A6554);
    PUSH32(esp, 0x0012039Eu); RECOMP_ABI_CALL(0x001A74E3u, sub_001A74E3); /* call 0x001A74E3 */

loc_0012039E: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001203B0;

    /* nop */
    /* nop */

loc_001203B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x37;
    edi = esi + 0x1E3DD8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 1;
    ecx = ebx;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001203EE; /* je: equal / zero */

loc_001203CC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1A6554);
    PUSH32(esp, 0x001203DBu); RECOMP_ABI_CALL(0x001A7572u, sub_001A7572); /* call 0x001A7572 */

loc_001203DB: ;
    ecx = esi + 0x1E3E8E;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esi + 0x1E3EA8) = eax;
    PUSH32(esp, 0x001203EEu); RECOMP_ABI_CALL(0x001A75D4u, sub_001A75D4); /* call 0x001A75D4 */

loc_001203EE: ;
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xDC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x370) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x370 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001203B0; /* jb: below (unsigned <) */

loc_001203FD: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0012040F; /* je: equal / zero */

loc_00120409: ;
    MEM32(eax) = 0x1E3DD8;

loc_0012040F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00120420
 * Original: 0x00120420 - 0x00120739 (793 bytes, 225 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120420(void)
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

loc_00120420: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00120434; /* jne: not equal / not zero */

loc_0012042F: ;
    esi = 0x1E3DD8;

loc_00120434: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1A6554);
    PUSH32(esp, 0x00120448u); RECOMP_ABI_CALL(0x001A7505u, sub_001A7505); /* call 0x001A7505 */

loc_00120448: ;
    edi = 0x1E3DD8;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(esi));
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x44) = 0x1E3E8E;
    ebx = esi + 0xD0;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x10) = 4;
    goto loc_00120470;

    /* nop */

loc_00120470: ;
    ecx = ebp;
    esi = 1;
    if (LO8(ecx)) _cf = (int)(((esi) >> (32 - (LO8(ecx)))) & 1);
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x14);
    eax = esi;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebx + 8) = eax;
    if ((_fa == 0)) goto loc_001204A0; /* je: equal / zero */

loc_0012048C: ;
    edx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00120494u); RECOMP_ABI_CALL(0x001A75C8u, sub_001A75C8); /* call 0x001A75C8 */

loc_00120494: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx) = eax;
    MEM16(ebx + -30) = LO16(eax);
    MEM16(ebx + -28) = LO16(eax);

loc_001204A0: ;
    _cf = 0; /* logical op clears CF */
    esi = esi & MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebx + 4) = esi;
    if ((_fa == 0)) goto loc_001204CE; /* je: equal / zero */

loc_001204AF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x1A6554);
    PUSH32(esp, 0x001204BEu); RECOMP_ABI_CALL(0x001A7572u, sub_001A7572); /* call 0x001A7572 */

loc_001204BE: ;
    MEM32(ebx) = eax;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(edi + ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001204CEu); RECOMP_ABI_CALL(0x001A75D4u, sub_001A75D4); /* call 0x001A75D4 */

loc_001204CE: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012070D; /* je: equal / zero */

loc_001204D8: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001204E3u); RECOMP_ABI_CALL(0x001A77B2u, sub_001A77B2); /* call 0x001A77B2 */

loc_001204E3: ;
    edx = ebx + -208;
    ecx = 5;
    esi = esp + 0x28;
    edi = edx;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    eax = (uint32_t)(int32_t)SMEM16(ebx + -198);
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91CC)); /* fadd dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C6554)); /* fmul dword ptr [0x1c6554] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0012052C; /* jne: not equal / not zero */

loc_00120524: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    goto loc_00120532;

loc_0012052C: ;
    fp_push(MEMF(0x1AF32C)); /* fld float */

loc_00120532: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x1C6550)); /* fsub dword ptr [0x1c6550] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C654C)); /* fmul dword ptr [0x1c654c] */
    fp_push(MEMF(0x1C91E0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0012055B; /* jne: not equal / not zero */

loc_00120553: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1C91E0)); /* fld float */

loc_0012055B: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + -196);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x1C) = ecx;
    MEMF(ebx + -188) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91CC)); /* fadd dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C6554)); /* fmul dword ptr [0x1c6554] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00120599; /* jne: not equal / not zero */

loc_00120591: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    goto loc_0012059F;

loc_00120599: ;
    fp_push(MEMF(0x1AF32C)); /* fld float */

loc_0012059F: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x1C6550)); /* fsub dword ptr [0x1c6550] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C654C)); /* fmul dword ptr [0x1c654c] */
    fp_push(MEMF(0x1C91E0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001205C8; /* jne: not equal / not zero */

loc_001205C0: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1C91E0)); /* fld float */

loc_001205C8: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + -194);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x1C) = eax;
    MEMF(ebx + -184) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91CC)); /* fadd dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C6554)); /* fmul dword ptr [0x1c6554] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00120606; /* jne: not equal / not zero */

loc_001205FE: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    goto loc_0012060C;

loc_00120606: ;
    fp_push(MEMF(0x1AF32C)); /* fld float */

loc_0012060C: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x1C6550)); /* fsub dword ptr [0x1c6550] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C654C)); /* fmul dword ptr [0x1c654c] */
    fp_push(MEMF(0x1C91E0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00120635; /* jne: not equal / not zero */

loc_0012062D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1C91E0)); /* fld float */

loc_00120635: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + -192);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x1C) = ecx;
    MEMF(ebx + -180) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91CC)); /* fadd dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C6554)); /* fmul dword ptr [0x1c6554] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00120673; /* jne: not equal / not zero */

loc_0012066B: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    goto loc_00120679;

loc_00120673: ;
    fp_push(MEMF(0x1AF32C)); /* fld float */

loc_00120679: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x1C6550)); /* fsub dword ptr [0x1c6550] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C654C)); /* fmul dword ptr [0x1c654c] */
    fp_push(MEMF(0x1C91E0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001206A2; /* jne: not equal / not zero */

loc_0012069A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1C91E0)); /* fld float */

loc_001206A2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    SET_LO16(eax, MEM16(edx));
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ebx + -172));
    MEMF(ebx + -176) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = 0; /* logical op clears CF */
    SET_LO16(edx, LO16(edx) ^ LO16(eax));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    MEM16(ebx + -172) = LO16(eax);
    fp_pop(); /* fstp st(0) */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ebx + -136) = LO16(edx);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebx + -168;
    goto loc_001206E0;

    /* nop */

loc_001206E0: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx + esi + -206)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ebx + esi + -206) (8-bit) */
    _cf = (int)(_fa < _fb);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_001206FB; /* je: equal / zero */

loc_001206EF: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(eax + 0x24) = edx;
    goto loc_001206FE;

loc_001206FB: ;
    MEM32(eax + 0x24) = ecx;

loc_001206FE: ;
    MEM32(eax) = edi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001206E0; /* jb: below (unsigned <) */

loc_00120709: ;
    edi = MEM32(esp + 0x20);

loc_0012070D: ;
    edx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xDC)) >> 32) & 1);
    edx = edx + 0xDC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xDC)) >> 32) & 1);
    ebx = ebx + 0xDC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00120470; /* jne: not equal / not zero */

loc_00120731: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
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
 * sub_00120740
 * Original: 0x00120740 - 0x001207AC (108 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00120740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120740: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    edx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0012077A; /* jne: not equal / not zero */

loc_0012075D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x118) = eax;
    MEM32(ecx + 0x11C) = eax;
    MEM32(ecx + 0x120) = eax;
    MEM32(ecx + 0x124) = eax;
    esp += 16; return; /* ret 12 */

loc_0012077A: ;
    MEM32(ecx + 0x118) = edx;
    MEM32(ecx + 0x11C) = edx;
    MEM32(ecx + 0x120) = edx;
    MEM32(ecx + 0x124) = 0;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1BC9D8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001207A4u); RECOMP_ABI_CALL(0x0012B3E8u, sub_0012B3E8); /* call 0x0012B3E8 */

loc_001207A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001207B0
 * Original: 0x001207B0 - 0x001207B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001207B0(void)
{

loc_001207B0: ;
    eax = 0xFFFFFFF2u;
    esp += 4; return; /* ret */

}

/**
 * sub_001207C0
 * Original: 0x001207C0 - 0x00120805 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001207C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001207C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001207D5u); RECOMP_ABI_CALL(0x000C9F6Du, sub_000C9F6D); /* call 0x000C9F6D */

loc_001207D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001207E2; /* jne: not equal / not zero */

loc_001207D9: ;
    eax = 0xFFFFFFF3u;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001207E2: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp);
    { uint32_t _c = (uint32_t)(0xE) & 31u; if (_c && _c < 32u) { eax = (eax >> _c) | (ecx << (32 - _c)); _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shrd result */ } }  /* shrd */
    ecx = ecx >> 0xE;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001207FC; /* ja: above (unsigned >) */

loc_001207F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC351) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC351 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00120801; /* jbe: below or equal (unsigned <=) */

loc_001207FC: ;
    eax = 0xC351;

loc_00120801: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00120810
 * Original: 0x00120810 - 0x0012082E (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120810: ;
    PUSH32(esp, ecx);
    eax = ecx + 0x11;
    edx = eax + 1;

loc_00120817: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120817; /* jne: not equal / not zero */

loc_0012081E: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = eax;
    eax = 0;
    SET_LO8(eax, ((_fa != 0)) ? 1 : 0); /* setne */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00120830
 * Original: 0x00120830 - 0x001208FC (204 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120830: ;
    _fb = (uint32_t)(0x588) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x588;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + 0x11;
    eax = esi;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax + 1;

loc_00120843: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120843; /* jne: not equal / not zero */

loc_0012084A: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = eax;
    if ((_fa != 0)) goto loc_00120895; /* jne: not equal / not zero */

loc_00120852: ;
    eax = esp + 0x250;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00120863u); RECOMP_ABI_CALL(0x001340CAu, sub_001340CA); /* call 0x001340CA */

loc_00120863: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001208CB; /* je: equal / zero */

loc_0012086A: ;
    /* nop */

loc_00120870: ;
    ecx = esp + 0x250;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0012087Fu); RECOMP_ABI_CALL(0x001341D1u, sub_001341D1); /* call 0x001341D1 */

loc_0012087F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120870; /* jne: not equal / not zero */

loc_00120883: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120889u); RECOMP_ABI_CALL(0x00134218u, sub_00134218); /* call 0x00134218 */

loc_00120889: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x588) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x588;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00120895: ;
    edx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001208A0u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_001208A0: ;
    eax = esp + 0x18;
    PUSH32(esp, 0x1C6560);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001208AFu); RECOMP_ABI_CALL(0x0010F0F0u, sub_0010F0F0); /* call 0x0010F0F0 */

loc_001208AF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x110;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001208C4u); RECOMP_ABI_CALL(0x001337E2u, sub_001337E2); /* call 0x001337E2 */

loc_001208C4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001208D7; /* jne: not equal / not zero */

loc_001208CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x588) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x588;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001208D7: ;
    eax = esp + 0x110;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x001208E6u); RECOMP_ABI_CALL(0x001338EFu, sub_001338EF); /* call 0x001338EF */

loc_001208E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001208D7; /* jne: not equal / not zero */

loc_001208EA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001208F0u); RECOMP_ABI_CALL(0x000C9F06u, sub_000C9F06); /* call 0x000C9F06 */

loc_001208F0: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x588) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x588;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00120900
 * Original: 0x00120900 - 0x00120A31 (305 bytes, 95 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120900: ;
    _fb = (uint32_t)(0x588) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x588;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx + 0x11;
    eax = esi;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_00120910: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120910; /* jne: not equal / not zero */

loc_00120917: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 8) = eax;
    if ((_fa != 0)) goto loc_0012098F; /* jne: not equal / not zero */

loc_0012091F: ;
    eax = esp + 0x24C;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00120930u); RECOMP_ABI_CALL(0x001340CAu, sub_001340CA); /* call 0x001340CA */

loc_00120930: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001209CB; /* je: equal / zero */

loc_0012093B: ;
    edi = MEM32(esp + 0x594);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00120957; /* jle: less or equal (signed <=) */

loc_00120946: ;
    ecx = esp + 0x24C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120954u); RECOMP_ABI_CALL(0x001341D1u, sub_001341D1); /* call 0x001341D1 */

loc_00120954: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00120946; /* jne: not equal / not zero */

loc_00120957: ;
    edx = MEM32(esp + 0x598);
    PUSH32(esp, edx);
    eax = esp + 0x494;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012096Cu); RECOMP_ABI_CALL(0x00129DF0u, sub_00129DF0); /* call 0x00129DF0 */

loc_0012096C: ;
    ecx = MEM32(esp + 0x5A4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(ecx) = 1;
    PUSH32(esp, 0x00120982u); RECOMP_ABI_CALL(0x00134218u, sub_00134218); /* call 0x00134218 */

loc_00120982: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x588) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x588;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0012098F: ;
    edx = esp + 0x14C;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012099Du); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_0012099D: ;
    eax = esp + 0x154;
    PUSH32(esp, 0x1C6560);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001209AFu); RECOMP_ABI_CALL(0x0010F0F0u, sub_0010F0F0); /* call 0x0010F0F0 */

loc_001209AF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x150;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001209C4u); RECOMP_ABI_CALL(0x001337E2u, sub_001337E2); /* call 0x001337E2 */

loc_001209C4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001209DB; /* jne: not equal / not zero */

loc_001209CB: ;
    POP32(esp, edi);
    eax = 0xFFFFFFFBu;
    POP32(esp, esi);
    _fb = (uint32_t)(0x588) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x588;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_001209DB: ;
    edi = MEM32(esp + 0x594);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001209F4; /* jle: less or equal (signed <=) */

loc_001209E6: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001209F1u); RECOMP_ABI_CALL(0x001338EFu, sub_001338EF); /* call 0x001338EF */

loc_001209F1: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001209E6; /* jne: not equal / not zero */

loc_001209F4: ;
    edx = MEM32(esp + 0x598);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00120A06u); RECOMP_ABI_CALL(0x000E1310u, sub_000E1310); /* call 0x000E1310 */

loc_00120A06: ;
    ecx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    ecx = MEM32(esp + 0x59C);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, esi);
    MEM32(ecx) = eax;
    PUSH32(esp, 0x00120A24u); RECOMP_ABI_CALL(0x000C9F06u, sub_000C9F06); /* call 0x000C9F06 */

loc_00120A24: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x588) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x588;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00120A40
 * Original: 0x00120A40 - 0x00120AB3 (115 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120A40: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0x1BC9E4;
    esi = eax;
    ecx = 3;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00120A72; /* jne: not equal / not zero */

loc_00120A61: ;
    MEM8(ebx + 0x11) = LO8(edx);

loc_00120A64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00120A72: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120A7Du); RECOMP_ABI_CALL(0x00129E30u, sub_00129E30); /* call 0x00129E30 */

loc_00120A7D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFF);
    esi = ebx + 0x11;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00120A9Bu); RECOMP_ABI_CALL(0x00133D97u, sub_00133D97); /* call 0x00133D97 */

loc_00120A9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120A64; /* je: equal / zero */

loc_00120A9F: ;
    POP32(esp, edi);
    MEM8(esi) = 0;
    POP32(esp, esi);
    eax = 0xFFFFFFFBu;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120AC0
 * Original: 0x00120AC0 - 0x00120CEB (555 bytes, 202 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120AC0: ;
    _fb = (uint32_t)(0x588) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x588));
    esp = esp - 0x588;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx + 0x11;
    eax = esi;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_00120AD2: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00120AD2; /* jne: not equal / not zero */

loc_00120AD9: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00120BEB; /* jne: not equal / not zero */

loc_00120AE5: ;
    eax = esp + 0x254;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xC)) >> 32) & 1);
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00120AF6u); RECOMP_ABI_CALL(0x001340CAu, sub_001340CA); /* call 0x001340CA */

loc_00120AF6: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00120B19; /* jne: not equal / not zero */

loc_00120AFD: ;
    ecx = MEM32(esp + 0x5A0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = 0;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x588) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x588)) >> 32) & 1);
    esp = esp + 0x588;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00120B19: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x49C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120B2Bu); RECOMP_ABI_CALL(0x00129DF0u, sub_00129DF0); /* call 0x00129DF0 */

loc_00120B2B: ;
    ebx = MEM32(esp + 0x5A4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 1;
    esi = esp + 0x14;
    eax = ebx;

loc_00120B40: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00120B64; /* jne: not equal / not zero */

loc_00120B48: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00120B60; /* je: equal / zero */

loc_00120B4C: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00120B64; /* jne: not equal / not zero */

loc_00120B56: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00120B40; /* jne: not equal / not zero */

loc_00120B60: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00120B69;

loc_00120B64: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00120B69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00120BCD; /* je: equal / zero */

loc_00120B6D: ;
    /* nop */

loc_00120B70: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00120BCD; /* je: equal / zero */

loc_00120B74: ;
    eax = esp + 0x254;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00120B82u); RECOMP_ABI_CALL(0x001341D1u, sub_001341D1); /* call 0x001341D1 */

loc_00120B82: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x49C;
    PUSH32(esp, edx);
    edi = eax;
    PUSH32(esp, 0x00120B96u); RECOMP_ABI_CALL(0x00129DF0u, sub_00129DF0); /* call 0x00129DF0 */

loc_00120B96: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 0x14;
    eax = ebx;
    /* nop */

loc_00120BA0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00120BC4; /* jne: not equal / not zero */

loc_00120BA8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00120BC0; /* je: equal / zero */

loc_00120BAC: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00120BC4; /* jne: not equal / not zero */

loc_00120BB6: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00120BA0; /* jne: not equal / not zero */

loc_00120BC0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00120BC9;

loc_00120BC4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00120BC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00120B70; /* jne: not equal / not zero */

loc_00120BCD: ;
    eax = MEM32(esp + 0x5A0);
    PUSH32(esp, ebp);
    MEM32(eax) = edi;
    PUSH32(esp, 0x00120BDCu); RECOMP_ABI_CALL(0x00134218u, sub_00134218); /* call 0x00134218 */

loc_00120BDC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x588) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x588)) >> 32) & 1);
    esp = esp + 0x588;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00120BEB: ;
    ecx = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00120BF6u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00120BF6: ;
    edx = esp + 0x1C;
    PUSH32(esp, 0x1C6560);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00120C05u); RECOMP_ABI_CALL(0x0010F0F0u, sub_0010F0F0); /* call 0x0010F0F0 */

loc_00120C05: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x114;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00120C1Au); RECOMP_ABI_CALL(0x001337E2u, sub_001337E2); /* call 0x001337E2 */

loc_00120C1A: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00120C3D; /* jne: not equal / not zero */

loc_00120C21: ;
    edx = MEM32(esp + 0x5A0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx) = 0;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x588) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x588)) >> 32) & 1);
    esp = esp + 0x588;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00120C3D: ;
    ebx = MEM32(esp + 0x59C);
    edi = 1;
    esi = esp + 0x140;
    ecx = ebx;

loc_00120C52: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00120C76; /* jne: not equal / not zero */

loc_00120C5A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00120C72; /* je: equal / zero */

loc_00120C5E: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00120C76; /* jne: not equal / not zero */

loc_00120C68: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00120C52; /* jne: not equal / not zero */

loc_00120C72: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00120C7B;

loc_00120C76: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00120C7B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00120CCD; /* je: equal / zero */

loc_00120C7F: ;
    /* nop */

loc_00120C80: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00120CCD; /* je: equal / zero */

loc_00120C84: ;
    ecx = esp + 0x114;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00120C92u); RECOMP_ABI_CALL(0x001338EFu, sub_001338EF); /* call 0x001338EF */

loc_00120C92: ;
    edi = eax;
    esi = esp + 0x140;
    ecx = ebx;
    /* nop */

loc_00120CA0: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00120CC4; /* jne: not equal / not zero */

loc_00120CA8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00120CC0; /* je: equal / zero */

loc_00120CAC: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00120CC4; /* jne: not equal / not zero */

loc_00120CB6: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00120CA0; /* jne: not equal / not zero */

loc_00120CC0: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00120CC9;

loc_00120CC4: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00120CC9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00120C80; /* jne: not equal / not zero */

loc_00120CCD: ;
    ecx = MEM32(esp + 0x5A0);
    PUSH32(esp, ebp);
    MEM32(ecx) = edi;
    PUSH32(esp, 0x00120CDCu); RECOMP_ABI_CALL(0x000C9F06u, sub_000C9F06); /* call 0x000C9F06 */

loc_00120CDC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x588) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x588)) >> 32) & 1);
    esp = esp + 0x588;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00120CF0
 * Original: 0x00120CF0 - 0x00120D74 (132 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120CF0: ;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00120CFEu); RECOMP_ABI_CALL(0x00120830u, sub_00120830); /* call 0x00120830 */

loc_00120CFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00120D14; /* jle: less or equal (signed <=) */

loc_00120D05: ;
    eax = 0xFFFFFFFCu;
    POP32(esp, edi);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00120D14: ;
    ecx = MEM32(esp + 0x208);
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00120D27u); RECOMP_ABI_CALL(0x00129E30u, sub_00129E30); /* call 0x00129E30 */

loc_00120D27: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFF);
    esi = edi + 0x11;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00120D45u); RECOMP_ABI_CALL(0x00133D97u, sub_00133D97); /* call 0x00133D97 */

loc_00120D45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi) = 0;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00120D68; /* je: equal / zero */

loc_00120D4D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x12;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFFFFFEAu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFEAu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00120D68: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120D80
 * Original: 0x00120D80 - 0x00120DBD (61 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00120D80: ;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x200));
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 4;
    esi = ecx;
    ecx = MEM32(esp + 0x208);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00120D9Bu); RECOMP_ABI_CALL(0x00129E30u, sub_00129E30); /* call 0x00129E30 */

loc_00120D9B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xC)) >> 32) & 1);
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120DACu); RECOMP_ABI_CALL(0x00133FFAu, sub_00133FFA); /* call 0x00133FFA */

loc_00120DAC: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFE9u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x200)) >> 32) & 1);
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120DC0
 * Original: 0x00120DC0 - 0x00120F69 (425 bytes, 150 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120DC0: ;
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120E0F; /* je: equal / zero */

loc_00120DD3: ;
    eax = MEM32(esi + 0x11C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120DEC; /* jne: not equal / not zero */

loc_00120DDD: ;
    eax = 0xFFFFFFFDu;
    POP32(esp, esi);
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00120DEC: ;
    eax = MEM32(esi + 0x124);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120E05; /* je: equal / zero */

loc_00120DF6: ;
    eax = 0xFFFFFFFCu;
    POP32(esp, esi);
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00120E05: ;
    eax = MEM32(esi + 0x118);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120E1C; /* jne: not equal / not zero */

loc_00120E0F: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00120E1C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00120E2Eu); RECOMP_ABI_CALL(0x000C9F6Du, sub_000C9F6D); /* call 0x000C9F6D */

loc_00120E2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120E41; /* jne: not equal / not zero */

loc_00120E32: ;
    eax = 0xFFFFFFF3u;
    POP32(esp, esi);
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00120E41: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x13C);
    eax = ebp + 0x14;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x138);
    if (CMP_B(_fa, _fb)) goto loc_00120E95; /* jb: below (unsigned <) */

loc_00120E5E: ;
    if (CMP_A(_fa, _fb)) goto loc_00120E66; /* ja: above (unsigned >) */

loc_00120E60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x18) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00120E95; /* jbe: below or equal (unsigned <=) */

loc_00120E66: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00120E73u); RECOMP_ABI_CALL(0x00120AC0u, sub_00120AC0); /* call 0x00120AC0 */

loc_00120E73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120F5C; /* jne: not equal / not zero */

loc_00120E7B: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120E95; /* jne: not equal / not zero */

loc_00120E83: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0xFFFFFFFCu;
    POP32(esp, esi);
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00120E95: ;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x11;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 0x3C;
    PUSH32(esp, 0x1AE90C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120EA9u); RECOMP_ABI_CALL(0x0012B3E8u, sub_0012B3E8); /* call 0x0012B3E8 */

loc_00120EA9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00120EC8u); RECOMP_ABI_CALL(0x001332F9u, sub_001332F9); /* call 0x001332F9 */

loc_00120EC8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120F00; /* je: equal / zero */

loc_00120ECF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00120ED6u); RECOMP_ABI_CALL(0x001344A1u, sub_001344A1); /* call 0x001344A1 */

loc_00120ED6: ;
    ebx = MEM32(esp + 0x13C);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00120EEEu); RECOMP_ABI_CALL(0x00132F3Du, sub_00132F3D); /* call 0x00132F3D */

loc_00120EEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120F12; /* jne: not equal / not zero */

loc_00120EF2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120EF8u); RECOMP_ABI_CALL(0x000C9F06u, sub_000C9F06); /* call 0x000C9F06 */

loc_00120EF8: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00120F00u); RECOMP_ABI_CALL(0x00134444u, sub_00134444); /* call 0x00134444 */

loc_00120F00: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0xFFFFFFEAu;
    POP32(esp, esi);
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00120F12: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00120F1Au); RECOMP_ABI_CALL(0x0013442Au, sub_0013442A); /* call 0x0013442A */

loc_00120F1A: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00120F25u); RECOMP_ABI_CALL(0x00134444u, sub_00134444); /* call 0x00134444 */

loc_00120F25: ;
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x14);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120F39u); RECOMP_ABI_CALL(0x00132F3Du, sub_00132F3D); /* call 0x00132F3D */

loc_00120F39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00120F55; /* jne: not equal / not zero */

loc_00120F3E: ;
    PUSH32(esp, 0x00120F43u); RECOMP_ABI_CALL(0x000C9F06u, sub_000C9F06); /* call 0x000C9F06 */

loc_00120F43: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0xFFFFFFEFu;
    POP32(esp, esi);
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00120F55: ;
    PUSH32(esp, 0x00120F5Au); RECOMP_ABI_CALL(0x000C9F06u, sub_000C9F06); /* call 0x000C9F06 */

loc_00120F5A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00120F5C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00120F70
 * Original: 0x00120F70 - 0x0012111A (426 bytes, 147 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120F70: ;
    eax = MEM32(ecx + 0x120);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00120FA4; /* je: equal / zero */

loc_00120F81: ;
    eax = MEM32(ecx + 0x11C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120F9A; /* jne: not equal / not zero */

loc_00120F8B: ;
    eax = 0xFFFFFFFDu;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00120F9A: ;
    eax = MEM32(ecx + 0x118);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120FB1; /* jne: not equal / not zero */

loc_00120FA4: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00120FB1: ;
    eax = MEM32(esp + 0x128);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x11;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    PUSH32(esp, 0x1AE90C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00120FCFu); RECOMP_ABI_CALL(0x0012B3E8u, sub_0012B3E8); /* call 0x0012B3E8 */

loc_00120FCF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000000u);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00120FEEu); RECOMP_ABI_CALL(0x001332F9u, sub_001332F9); /* call 0x001332F9 */

loc_00120FEE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00121047; /* je: equal / zero */

loc_00120FF9: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00121001u); RECOMP_ABI_CALL(0x001332BEu, sub_001332BE); /* call 0x001332BE */

loc_00121001: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebp = esi + -20;
    if (CMP_BE(_fa, _fb)) goto loc_00121102; /* jbe: below or equal (unsigned <=) */

loc_0012100E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00121102; /* ja: above (unsigned >) */

loc_0012101A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121020u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00121020: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ebx = eax;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00121034u); RECOMP_ABI_CALL(0x00132E50u, sub_00132E50); /* call 0x00132E50 */

loc_00121034: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121059; /* jne: not equal / not zero */

loc_00121038: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012103Eu); RECOMP_ABI_CALL(0x000C9F06u, sub_000C9F06); /* call 0x000C9F06 */

loc_0012103E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00121044u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00121044: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121047: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFEAu;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00121059: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00121060u); RECOMP_ABI_CALL(0x001344A1u, sub_001344A1); /* call 0x001344A1 */

loc_00121060: ;
    PUSH32(esp, ebp);
    esi = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012106Au); RECOMP_ABI_CALL(0x0013442Au, sub_0013442A); /* call 0x0013442A */

loc_0012106A: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121075u); RECOMP_ABI_CALL(0x00134444u, sub_00134444); /* call 0x00134444 */

loc_00121075: ;
    ecx = 5;
    edi = ebx + ebp;
    esi = esp + 0x1C;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_001210AC; /* je: equal / zero */

loc_00121087: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012108Du); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0012108D: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012109Au); RECOMP_ABI_CALL(0x000C9F06u, sub_000C9F06); /* call 0x000C9F06 */

loc_0012109A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFEFu;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_001210AC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001210B2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_001210B2: ;
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    esi = ebx;
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
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    MEM32(esp + 0x1C) = eax;
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
    PUSH32(esp, 0x001210D0u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001210D0: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x140);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM32(eax) = ecx;
    PUSH32(esp, 0x001210EAu); RECOMP_ABI_CALL(0x000C9F06u, sub_000C9F06); /* call 0x000C9F06 */

loc_001210EA: ;
    eax = MEM32(esp + 0x13C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ebp;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00121102: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00121108u); RECOMP_ABI_CALL(0x000C9F06u, sub_000C9F06); /* call 0x000C9F06 */

loc_00121108: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFEBu;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00121120
 * Original: 0x00121120 - 0x0012115E (62 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00121120: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x100));
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x11)) >> 32) & 1);
    ecx = ecx + 0x11;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, 0x1AE90C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012113Eu); RECOMP_ABI_CALL(0x0012B3E8u, sub_0012B3E8); /* call 0x0012B3E8 */

loc_0012113E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012114Bu); RECOMP_ABI_CALL(0x001336E8u, sub_001336E8); /* call 0x001336E8 */

loc_0012114B: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x17;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFFFFFE9u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE9u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE9u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x100)) >> 32) & 1);
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121160
 * Original: 0x00121160 - 0x001211C6 (102 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121160: ;
    _fb = (uint32_t)(0x344) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x344;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x118);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012117D; /* jne: not equal / not zero */

loc_00121173: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x344) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x344;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012117D: ;
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012118Cu); RECOMP_ABI_CALL(0x001340CAu, sub_001340CA); /* call 0x001340CA */

loc_0012118C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012119E; /* jne: not equal / not zero */

loc_00121193: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x344) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x344;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012119E: ;
    edx = esp + 0x148;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x11;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x001211AFu); RECOMP_ABI_CALL(0x0012B3E8u, sub_0012B3E8); /* call 0x0012B3E8 */

loc_001211AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001211B8u); RECOMP_ABI_CALL(0x00134218u, sub_00134218); /* call 0x00134218 */

loc_001211B8: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    _fb = (uint32_t)(0x344) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x344;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001211D0
 * Original: 0x001211D0 - 0x001211F2 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001211D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001211D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1C656C;
    if (CMP_EQ(_fa, _fb)) goto loc_001211F0; /* je: equal / zero */

loc_001211E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001211E6u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001211E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;

loc_001211F0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121200
 * Original: 0x00121200 - 0x0012123E (62 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121200: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0012121B; /* je: equal / zero */

loc_0012120B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121211u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00121211: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;

loc_0012121B: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00121225u); RECOMP_ABI_CALL(0x001025F0u, sub_001025F0); /* call 0x001025F0 */

loc_00121225: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012122Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0012122C: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x00121236u); RECOMP_ABI_CALL(0x000E1310u, sub_000E1310); /* call 0x000E1310 */

loc_00121236: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121240
 * Original: 0x00121240 - 0x0012125D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121240: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x1C6580;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x18) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00121260
 * Original: 0x00121260 - 0x00121264 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121260(void)
{

loc_00121260: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_00121270
 * Original: 0x00121270 - 0x001212D4 (100 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121270: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121292; /* je: equal / zero */

loc_0012127B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121281u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00121281: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = 0;
    MEM32(edi + 0x10) = 0;

loc_00121292: ;
    esi = MEM32(esp + 0xC);
    eax = esi + esi * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    MEM32(edi + 0x10) = esi;
    PUSH32(esp, 0x001212A5u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_001212A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001212CA; /* je: equal / zero */

loc_001212AC: ;
    edx = esi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001212CC; /* jl: less (signed <) */

loc_001212B5: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001212B6: ;
    MEM32(ecx) = 0;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001212B6; /* jne: not equal / not zero */

loc_001212C2: ;
    MEM32(edi + 0xC) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001212CA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001212CC: ;
    MEM32(edi + 0xC) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001212E0
 * Original: 0x001212E0 - 0x0012130D (45 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001212E0(void)
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

loc_001212E0: ;
    edx = MEM32(ecx + 0xC);
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(eax + edx) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    MEM32(eax + edx + 4) = esi;
    ecx = MEM32(ecx + 4);
    MEM32(eax + edx + 8) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00121310
 * Original: 0x00121310 - 0x0012138E (126 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121310(void)
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

loc_00121310: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, esi);
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0xC);
    eax = eax + eax * 2;
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + eax * 4 + -12)); /* fld float */
    eax = MEM32(esp + 4);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121342u); RECOMP_ABI_CALL(0x000CDE90u, sub_000CDE90); /* call 0x000CDE90 */

loc_00121342: ;
    MEMF(esi + 4) = (float)fp_top(); /* fst */
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0xC);
    MEM32(esi + 0x14) = 0;
    fp_push(MEMF(edx)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012137C; /* jne: not equal / not zero */

loc_00121362: ;
    eax = MEM32(esi + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x14) = eax;
    edx = MEM32(esi + 0xC);
    eax = eax + eax * 2;
    fp_push(MEMF(edx + eax * 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00121362; /* jnp: not parity */

loc_0012137C: ;
    edx = MEM32(esi + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x18) = eax;
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
 * sub_00121390
 * Original: 0x00121390 - 0x001213AD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121390: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x1C6594;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001213B0
 * Original: 0x001213B0 - 0x001213B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001213B0(void)
{

loc_001213B0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001213C0
 * Original: 0x001213C0 - 0x001213C4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001213C0(void)
{

loc_001213C0: ;
    eax = ecx + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001213D0
 * Original: 0x001213D0 - 0x00121447 (119 bytes, 33 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001213D0(void)
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

loc_001213D0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001213E7; /* jp: parity */

loc_001213E5: ;
    fp_top() = -fp_top(); /* fchs */

loc_001213E7: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C6564)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c6564] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00121400; /* jne: not equal / not zero */

loc_001213F4: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 4)); /* fdiv dword ptr [esp + 4] */
    goto loc_00121406;

loc_00121400: ;
    fp_push(MEMF(0x1C91E0)); /* fld float */

loc_00121406: ;
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00121420; /* jp: parity */

loc_0012141E: ;
    fp_top() = -fp_top(); /* fchs */

loc_00121420: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C6564)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c6564] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012143D; /* jne: not equal / not zero */

loc_0012142D: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

loc_0012143D: ;
    MEM32(ecx + 0x10) = 0;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00121450
 * Original: 0x00121450 - 0x001214BC (108 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121450(void)
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

loc_00121450: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, esi);
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    eax = esi + 0x14;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00121484u); RECOMP_ABI_CALL(0x0003FAA0u, sub_0003FAA0); /* call 0x0003FAA0 */

loc_00121484: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    eax = esi + 0x18;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = 0x3F800000;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x001214B2u); RECOMP_ABI_CALL(0x0003FAA0u, sub_0003FAA0); /* call 0x0003FAA0 */

loc_001214B2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001214C0
 * Original: 0x001214C0 - 0x001214CE (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001214C0(void)
{

loc_001214C0: ;
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(ecx + 0xC);
    eax = eax + eax * 2;
    eax = ecx + eax * 4 + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_001214D0
 * Original: 0x001214D0 - 0x001214F4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001214D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001214D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C6594;
    PUSH32(esp, 0x001214DEu); RECOMP_ABI_CALL(0x001211D0u, sub_001211D0); /* call 0x001211D0 */

loc_001214DE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001214EE; /* je: equal / zero */

loc_001214E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001214EBu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001214EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001214EE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121500
 * Original: 0x00121500 - 0x00121536 (54 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121500: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1C656C;
    if (CMP_EQ(_fa, _fb)) goto loc_00121520; /* je: equal / zero */

loc_00121510: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121516u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00121516: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;

loc_00121520: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00121530; /* je: equal / zero */

loc_00121527: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012152Du); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0012152D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121530: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121540
 * Original: 0x00121540 - 0x0012159A (90 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121540: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1C6580;
    if (CMP_EQ(_fa, _fb)) goto loc_00121567; /* je: equal / zero */

loc_00121550: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121556u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00121556: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 0x10) = 0;

loc_00121567: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1C656C;
    if (CMP_EQ(_fa, _fb)) goto loc_00121584; /* je: equal / zero */

loc_00121574: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012157Au); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0012157A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;

loc_00121584: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00121594; /* je: equal / zero */

loc_0012158B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121591u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00121591: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121594: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001215A0
 * Original: 0x001215A0 - 0x001216E7 (327 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001215A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001215A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x1E4150);
    ecx = MEM32(0x1ED5B8);
    PUSH32(esp, ebx);
    ebx = MEM32(0x1E8584);
    PUSH32(esp, ebp);
    ebp = MEM32(0x1E4154);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    MEM32(esp + 0x1C) = ebx;
    ebx = MEM32(0x1F15C8);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x1E856C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001215F4; /* je: equal / zero */

loc_001215E2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121696; /* je: equal / zero */

loc_001215EB: ;
    ecx = 0xFEE;
    MEM32(esp + 0x20) = edi;

loc_001215F4: ;
    eax = MEM32(esp + 0x20);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    MEM32(esp + 0x20) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00121615; /* jne: not equal / not zero */

loc_00121603: ;
    eax = MEM32(esp + 0x1C);
    eax = ZX8(MEM8(edx + eax));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax | 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = eax;

loc_00121615: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(_fa, _fb)) goto loc_0012163D; /* je: equal / zero */

loc_0012161D: ;
    eax = ZX8(MEM8(edx + eax));
    ebx = MEM32(esp + 0x24);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx + 0x1F15D0) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00121699; /* jge: greater or equal (signed >=) */

loc_0012163B: ;
    goto loc_001215F4;

loc_0012163D: ;
    ebp = ZX8(MEM8(edx + eax));
    eax = ZX8(MEM8(edx + eax + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = eax;
    ebx = ebx & 0xF0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp | ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00121661: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_001215F4; /* jg: greater (signed >) */

loc_0012166B: ;
    ebx = MEM32(esp + 0x24);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ZX8(MEM8(eax + 0x1F15D0));
    MEM8(ecx + 0x1F15D0) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001216A5; /* jge: greater or equal (signed >=) */

loc_00121692: ;
    eax = MEM32(esp + 0x10);

loc_00121696: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00121661;

loc_00121699: ;
    MEM32(0x1F15C8) = 1;
    goto loc_001216AF;

loc_001216A5: ;
    MEM32(0x1F15C8) = 2;

loc_001216AF: ;
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(0x1E4158) = eax;
    eax = MEM32(esp + 0x1C);
    POP32(esp, esi);
    MEM32(0x1E4154) = ebp;
    MEM32(0x1E4150) = edx;
    edx = MEM32(esp + 8);
    POP32(esp, ebp);
    MEM32(0x1E8584) = eax;
    MEM32(0x1E856C) = edx;
    MEM32(0x1ED5B8) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001216F0
 * Original: 0x001216F0 - 0x00121749 (89 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001216F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001216F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = esi;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121719; /* jne: not equal / not zero */

loc_00121701: ;
    ecx = MEM32(edi + 4);
    edi = MEM32(esp + 0x10);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00121719: ;
    PUSH32(esp, 0x1011);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1F15D0);
    MEM32(0x1F15C8) = 0;
    PUSH32(esp, 0x00121734u); RECOMP_ABI_CALL(0x00100DA0u, sub_00100DA0); /* call 0x00100DA0 */

loc_00121734: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121743u); RECOMP_ABI_CALL(0x001215A0u, sub_001215A0); /* call 0x001215A0 */

loc_00121743: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121750
 * Original: 0x00121750 - 0x0012177D (45 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121750: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = 0;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121774; /* je: equal / zero */

loc_0012176B: ;
    MEM32(edx + 0x28) = eax;
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

loc_00121774: ;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121780
 * Original: 0x00121780 - 0x001217BF (63 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121780: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0012178Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121789u); } /* indirect call */
    }

loc_0012178C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121794; /* jne: not equal / not zero */

loc_00121790: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00121794: ;
    MEM32(eax + 4) = esi;
    ecx = MEM32(esi + 0x10);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = 0;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001217B5; /* je: equal / zero */

loc_001217AB: ;
    MEM32(ecx + 0x28) = eax;
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001217B5: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001217C0
 * Original: 0x001217C0 - 0x00121804 (68 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001217C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001217C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    MEM32(0x1F25E4) = ecx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001217D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001217D1u); } /* indirect call */
    }

loc_001217D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001217DE; /* je: equal / zero */

loc_001217D8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001217DE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001217E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001217E6u); } /* indirect call */
    }

loc_001217E9: ;
    ecx = MEM32(0x1F25E4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001217F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001217F1u); } /* indirect call */
    }

loc_001217F4: ;
    MEM32(0x1F25E4) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121810
 * Original: 0x00121810 - 0x00121888 (120 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121810: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 0x414;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012182Eu); RECOMP_ABI_CALL(0x0011B0D0u, sub_0011B0D0); /* call 0x0011B0D0 */

loc_0012182E: ;
    esi = MEM32(esp + 0x418);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121867; /* jne: not equal / not zero */

loc_0012183C: ;
    eax = MEM32(0x1F25E4);
    esi = MEM32(eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012184Du); RECOMP_ABI_CALL(0x001025F0u, sub_001025F0); /* call 0x001025F0 */

loc_0012184D: ;
    ecx = MEM32(0x1F25E4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x0012185Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012185Cu); } /* indirect call */
    }

loc_0012185F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00121867: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121871u); RECOMP_ABI_CALL(0x001025F0u, sub_001025F0); /* call 0x001025F0 */

loc_00121871: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012187Du); RECOMP_ABI_CALL(0x00115590u, sub_00115590); /* call 0x00115590 */

loc_0012187D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121890
 * Original: 0x00121890 - 0x001218AF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121890: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C66DC;
    if (TEST_Z(_fa, _fb)) goto loc_001218A9; /* je: equal / zero */

loc_001218A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001218A6u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001218A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001218A9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001218B0
 * Original: 0x001218B0 - 0x001218CE (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001218B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001218B0: ;
    eax = MEM32(esp + 4);
    MEM8(ecx + 0x2C) = 1;
    MEM32(ecx + 0x30) = eax;
    eax = MEM32(eax * 4 + 0x1CF63C);
    MEM32(esp + 4) = eax;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000E18A0(); return; /* tail jmp 0x000E18A0 */

}

/**
 * sub_001218D0
 * Original: 0x001218D0 - 0x00121906 (54 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001218D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001218D0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001218F8; /* je: equal / zero */

loc_001218D9: ;
    edi = MEM32(esp + 0xC);
    /* nop */

loc_001218E0: ;
    eax = esi + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001218EAu); RECOMP_ABI_CALL(0x000E1390u, sub_000E1390); /* call 0x000E1390 */

loc_001218EA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001218FF; /* jne: not equal / not zero */

loc_001218F1: ;
    esi = MEM32(esi + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001218E0; /* jne: not equal / not zero */

loc_001218F8: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001218FF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121910
 * Original: 0x00121910 - 0x00121946 (54 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121910: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00121938; /* je: equal / zero */

loc_00121919: ;
    edi = MEM32(esp + 0xC);
    /* nop */

loc_00121920: ;
    eax = esi + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012192Au); RECOMP_ABI_CALL(0x000E1390u, sub_000E1390); /* call 0x000E1390 */

loc_0012192A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012193F; /* jne: not equal / not zero */

loc_00121931: ;
    esi = MEM32(esi + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121920; /* jne: not equal / not zero */

loc_00121938: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0012193F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121950
 * Original: 0x00121950 - 0x0012197B (43 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121950: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012196A; /* je: equal / zero */

loc_00121954: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012196D; /* jne: not equal / not zero */

loc_00121963: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121954; /* jne: not equal / not zero */

loc_0012196A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0012196D: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121980
 * Original: 0x00121980 - 0x001219BC (60 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121980: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x00121992u); RECOMP_ABI_CALL(0x00115AE0u, sub_00115AE0); /* call 0x00115AE0 */

loc_00121992: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001219B5; /* je: equal / zero */

loc_0012199B: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001219A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001219A2u); } /* indirect call */
    }

loc_001219A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001219ABu); RECOMP_ABI_CALL(0x00115570u, sub_00115570); /* call 0x00115570 */

loc_001219AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001219B5: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001219C0
 * Original: 0x001219C0 - 0x00121A51 (145 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001219C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001219C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001219DF; /* je: equal / zero */

loc_001219CE: ;
    edi = edi;

loc_001219D0: ;
    ecx = esi;
    eax = MEM32(ecx);
    esi = MEM32(esi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001219DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001219D9u); } /* indirect call */
    }

loc_001219DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001219D0; /* jne: not equal / not zero */

loc_001219DF: ;
    esi = MEM32(esp + 0x14);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(edi + 0xC) = 0;
    MEM32(edi + 0x10) = 0;
    edx = MEM32(esi);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00121A04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121A01u); } /* indirect call */
    }

loc_00121A04: ;
    eax = MEM32(esp + 8);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00121A10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121A0Du); } /* indirect call */
    }

loc_00121A10: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00121A1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121A19u); } /* indirect call */
    }

loc_00121A1C: ;
    SET_LO8(eax, MEM8(edi + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121A2D; /* jne: not equal / not zero */

loc_00121A23: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00121A2D: ;
    MEM8(edi + 0x2C) = 1;
    MEM32(edi + 0x30) = 1;
    ecx = MEM32(0x1CF640);
    PUSH32(esp, ecx);
    ecx = edi + 0x34;
    PUSH32(esp, 0x00121A47u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_00121A47: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121A60
 * Original: 0x00121A60 - 0x00121A86 (38 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121A60: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121A82; /* je: equal / zero */

loc_00121A68: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    /* nop */

loc_00121A70: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00121A7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121A77u); } /* indirect call */
    }

loc_00121A7A: ;
    esi = MEM32(esi + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121A70; /* jne: not equal / not zero */

loc_00121A81: ;
    POP32(esp, edi);

loc_00121A82: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121A90
 * Original: 0x00121A90 - 0x00121ADD (77 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121A90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x18;
    PUSH32(esp, 0x22);
    ecx = edi;
    PUSH32(esp, 0x00121AA0u); RECOMP_ABI_CALL(0x000E1360u, sub_000E1360); /* call 0x000E1360 */

loc_00121AA0: ;
    ecx = MEM32(0x1C2B14);
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    eax = MEM32(edi);
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00121AC9; /* je: equal / zero */

loc_00121AB5: ;
    PUSH32(esp, 0x1C66EC);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121AC1u); RECOMP_ABI_CALL(0x00121810u, sub_00121810); /* call 0x00121810 */

loc_00121AC1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00121AC9: ;
    PUSH32(esp, 0x1C66E4);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121AD5u); RECOMP_ABI_CALL(0x00121810u, sub_00121810); /* call 0x00121810 */

loc_00121AD5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121AE0
 * Original: 0x00121AE0 - 0x00121B1C (60 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121AE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00121B03; /* jle: less or equal (signed <=) */

loc_00121AF1: ;
    PUSH32(esp, 0x1C6700);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121AFDu); RECOMP_ABI_CALL(0x00121810u, sub_00121810); /* call 0x00121810 */

loc_00121AFD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00121AF1; /* jne: not equal / not zero */

loc_00121B03: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C66F4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121B13u); RECOMP_ABI_CALL(0x00121810u, sub_00121810); /* call 0x00121810 */

loc_00121B13: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121B20
 * Original: 0x00121B20 - 0x00121B3A (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121B20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121B20: ;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B0638);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00121B34u); RECOMP_ABI_CALL(0x00121810u, sub_00121810); /* call 0x00121810 */

loc_00121B34: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121B40
 * Original: 0x00121B40 - 0x00121B7C (60 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121B40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00121B63; /* jle: less or equal (signed <=) */

loc_00121B51: ;
    PUSH32(esp, 0x1C6700);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121B5Du); RECOMP_ABI_CALL(0x00121810u, sub_00121810); /* call 0x00121810 */

loc_00121B5D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00121B51; /* jne: not equal / not zero */

loc_00121B63: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C6708);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00121B73u); RECOMP_ABI_CALL(0x00121810u, sub_00121810); /* call 0x00121810 */

loc_00121B73: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121B80
 * Original: 0x00121B80 - 0x00121BBC (60 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121B80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121BAC; /* je: equal / zero */

loc_00121B8C: ;
    ebx = MEM32(esp + 0x10);

loc_00121B90: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121BAC; /* je: equal / zero */

loc_00121B94: ;
    eax = esi + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121B9Eu); RECOMP_ABI_CALL(0x000E1390u, sub_000E1390); /* call 0x000E1390 */

loc_00121B9E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121BB4; /* jne: not equal / not zero */

loc_00121BA5: ;
    esi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121B90; /* jne: not equal / not zero */

loc_00121BAC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00121BB4: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
