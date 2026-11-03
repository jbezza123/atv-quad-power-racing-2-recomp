/**
 * ATV: Quad Power Racing 2 - Recompiled code chunk 0
 * Functions: 250 (0x00011000 - 0x00018300)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00011000
 * Original: 0x00011000 - 0x00011030 (48 bytes, 22 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011000: ;
    eax = MEM32(esp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0001102D; /* js: sign (negative) */

loc_00011007: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax + 1;
    /* nop */

loc_00011020: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00011024u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011022u); } /* indirect call */
    }

loc_00011024: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00011020; /* jne: not equal / not zero */

loc_00011029: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0001102D: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00011030
 * Original: 0x00011030 - 0x00011061 (49 bytes, 24 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011030: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0001105C; /* js: sign (negative) */

loc_00011048: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = eax + 1;

loc_00011051: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x00011057u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011055u); } /* indirect call */
    }

loc_00011057: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00011051; /* jne: not equal / not zero */

loc_0001105A: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0001105C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00011070
 * Original: 0x00011070 - 0x00011076 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011070(void)
{

loc_00011070: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00011080
 * Original: 0x00011080 - 0x000110C7 (71 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011080: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 7);
    edi = ecx;
    PUSH32(esp, 0x00011091u); RECOMP_ABI_CALL(0x000BB4B0u, sub_000BB4B0); /* call 0x000BB4B0 */

loc_00011091: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011097u); RECOMP_ABI_CALL(0x000BB6E0u, sub_000BB6E0); /* call 0x000BB6E0 */

loc_00011097: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 8;

loc_000110A5: ;
    ecx = MEM32(edi + -8);
    eax = MEM32(esi);
    MEM32(eax + 0x40) = ecx;
    edx = MEM32(edi);
    ecx = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 0x000110B8u); RECOMP_ABI_CALL(0x000266B0u, sub_000266B0); /* call 0x000266B0 */

loc_000110B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000110A5; /* jne: not equal / not zero */

loc_000110C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000110D0
 * Original: 0x000110D0 - 0x000110F7 (39 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000110D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000110D0: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_000110E0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000110E8; /* jne: not equal / not zero */

loc_000110E5: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_000110F4; /* js: sign (negative) */

loc_000110E8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000110E0; /* jl: less (signed <) */

loc_000110F1: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000110F4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011100
 * Original: 0x00011100 - 0x0001111F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011100: ;
    eax = MEM32(0x1D3F08);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0x00011110u); RECOMP_ABI_CALL(0x00013A40u, sub_00013A40); /* call 0x00013A40 */

loc_00011110: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0001111D; /* js: sign (negative) */

loc_00011116: ;
    eax = MEM32(esi + ecx * 4 + 0xC8);

loc_0001111D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00011120
 * Original: 0x00011120 - 0x00011145 (37 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011120(void)
{

loc_00011120: ;
    eax = MEM32(0x1D3F08);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00011136u); RECOMP_ABI_CALL(0x00013A30u, sub_00013A30); /* call 0x00013A30 */

loc_00011136: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + ecx * 4 + 0xC8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011150
 * Original: 0x00011150 - 0x0001120B (187 bytes, 67 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011150: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x1ADFA8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001116Du); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_0001116D: ;
    esi = MEM32(esp + 0x28);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00011180u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001117Du); } /* indirect call */
    }

loc_00011180: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011201; /* je: equal / zero */

loc_00011184: ;
    edx = MEM32(ebx);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE1FC);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1ADFA0);
    ecx = esi;
    MEM32(esp + 0x30) = edx;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x000111A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001119Eu); } /* indirect call */
    }

loc_000111A4: ;
    edx = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    ecx = ebx + 4;
    PUSH32(esp, ecx);
    edi = eax;
    MEM32(ebx) = edx;
    eax = MEM32(esi);
    PUSH32(esp, 0x1ADF90);
    ecx = esi;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x000111CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000111C6u); } /* indirect call */
    }

loc_000111CC: ;
    edx = MEM32(esi);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1ADF84);
    ecx = esi;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x000111EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000111E5u); } /* indirect call */
    }

loc_000111EB: ;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000111F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000111F3u); } /* indirect call */
    }

loc_000111F6: ;
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00011201: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00011210
 * Original: 0x00011210 - 0x00011240 (48 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011210(void)
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

loc_00011210: ;
    ecx = MEM32(esp + 4);
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 8);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001122A; /* jp: parity */

loc_00011223: ;
    eax = MEM32(edx);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 4; return; /* ret */

loc_0001122A: ;
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 0xC);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001123D; /* jne: not equal / not zero */

loc_00011239: ;
    edx = MEM32(edx);
    MEM32(ecx) = edx;

loc_0001123D: ;
    eax = ecx;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00011240
 * Original: 0x00011240 - 0x00011279 (57 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011240: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00011248u); RECOMP_ABI_CALL(0x00014AA0u, sub_00014AA0); /* call 0x00014AA0 */

loc_00011248: ;
    MEM32(esi) = 0x1ADF74;
    eax = esi + 8;
    ecx = 8;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00011260;

    /* nop */

loc_00011260: ;
    MEM32(eax) = 0xFFFFFFFFu;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00011260; /* jne: not equal / not zero */

loc_00011272: ;
    MEM32(esi + 4) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00011280
 * Original: 0x00011280 - 0x000112A4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011280: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1ADF74;
    PUSH32(esp, 0x0001128Eu); RECOMP_ABI_CALL(0x00014AB0u, sub_00014AB0); /* call 0x00014AB0 */

loc_0001128E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001129E; /* je: equal / zero */

loc_00011295: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001129Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001129B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001129E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000112B0
 * Original: 0x000112B0 - 0x000112EC (60 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000112B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000112B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = edi;
    ecx = esi + 0x10;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000112C1: ;
    MEM32(ecx) = edx;
    MEM32(ecx + -8) = eax;
    MEM32(ecx + -4) = edi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000112C1; /* jl: less (signed <) */

loc_000112D2: ;
    edi = esi + 0x68;
    ecx = 0x18;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = esi + 0xC8;
    ecx = 0xF;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000112F0
 * Original: 0x000112F0 - 0x000113F4 (260 bytes, 95 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000112F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000112F0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = MEM32(esi);
    ebx = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1ADFD4);
    ecx = esi;
    MEM32(esp + 0xC) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0001130Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011308u); } /* indirect call */
    }

loc_0001130B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000113EA; /* je: equal / zero */

loc_00011313: ;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0);
    eax = ebx + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1ADFCC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0001132Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011326u); } /* indirect call */
    }

loc_0001132C: ;
    ebp = eax;
    ebp = ebp & 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x28) = edi;

loc_00011337: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = edi + edi * 2;
    PUSH32(esp, esi);
    ecx = ebx + edx * 4 + 8;
    PUSH32(esp, 0x00011349u); RECOMP_ABI_CALL(0x00011150u, sub_00011150); /* call 0x00011150 */

loc_00011349: ;
    ebp = ebp & eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    MEM32(esp + 0x28) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00011337; /* jl: less (signed <) */

loc_00011355: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x68;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00011360: ;
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, 0x1ADFC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011370u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00011370: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, ebx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0001138Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011387u); } /* indirect call */
    }

loc_0001138D: ;
    ebp = ebp & eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00011360; /* jl: less (signed <) */

loc_00011398: ;
    ebx = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000113A4: ;
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x1ADFB4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000113B4u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_000113B4: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    PUSH32(esp, ebx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x000113CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000113C6u); } /* indirect call */
    }

loc_000113CC: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000113A4; /* jl: less (signed <) */

loc_000113D5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000113DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000113DBu); } /* indirect call */
    }

loc_000113DE: ;
    POP32(esp, edi);
    eax = eax & ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000113EA: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011400
 * Original: 0x00011400 - 0x00011594 (404 bytes, 128 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011400(void)
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

loc_00011400: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    fp_push((double)SMEM32(edi + 4)); /* fild */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_0001141E; /* jge: greater or equal (signed >=) */

loc_00011418: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D8)); /* fadd dword ptr [0x1c91d8] */

loc_0001141E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1ADFF4)); /* fmul dword ptr [0x1adff4] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91CC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91cc] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00011441; /* jp: parity */

loc_00011439: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1ADFF0)); /* fmul dword ptr [0x1adff0] */
    goto loc_00011471;

loc_00011441: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1ADFEC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1adfec] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001145A; /* jp: parity */

loc_00011452: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1ADFE8)); /* fmul dword ptr [0x1adfe8] */
    goto loc_00011471;

loc_0001145A: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1ADFE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1adfe4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00011475; /* jp: parity */

loc_00011467: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1ADFE0)); /* fmul dword ptr [0x1adfe0] */

loc_00011471: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_00011475: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00011490; /* jp: parity */

loc_00011486: ;
    MEM32(esp + 0xC) = 0;
    goto loc_000114A9;

loc_00011490: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000114A9; /* jne: not equal / not zero */

loc_000114A1: ;
    MEM32(esp + 0xC) = 0x3F800000;

loc_000114A9: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x000114B7u); RECOMP_ABI_CALL(0x000BB4F0u, sub_000BB4F0); /* call 0x000BB4F0 */

loc_000114B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000114C0: ;
    edx = esi + esi * 2;
    eax = MEM32(edi + edx * 4 + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000114E5; /* jne: not equal / not zero */

loc_000114CC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001158B; /* jne: not equal / not zero */

loc_000114D4: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x20);
    eax = MEM32(ecx + 4);
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = ebp;

loc_000114E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000114EBu); RECOMP_ABI_CALL(0x000BB580u, sub_000BB580); /* call 0x000BB580 */

loc_000114EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000114EE: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000114C0; /* jl: less (signed <) */

loc_000114F4: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001156B; /* jle: less or equal (signed <=) */

loc_000114FA: ;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi + 0x68;

loc_00011500: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00011514; /* jl: less (signed <) */

loc_00011506: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00011514; /* jg: greater (signed >) */

loc_0001150B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011511u); RECOMP_ABI_CALL(0x000BB580u, sub_000BB580); /* call 0x000BB580 */

loc_00011511: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011514: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00011500; /* jl: less (signed <) */

loc_0001151D: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x00011539u); RECOMP_ABI_CALL(0x000BB9B0u, sub_000BB9B0); /* call 0x000BB9B0 */

loc_00011539: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ebp;
    ecx = edi + 0x14;
    edx = 7;
    POP32(esp, ebx);
    /* nop */

loc_00011550: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011565; /* jne: not equal / not zero */

loc_00011555: ;
    esi = MEM32(esp + 0x10);
    esi = MEM32(eax + esi * 4);
    MEM32(ecx) = esi;
    MEM32(ecx + 4) = ebp;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00011565: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00011550; /* jne: not equal / not zero */

loc_0001156B: ;
    eax = edi + 0x14;
    ecx = 7;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00011576: ;
    esi = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + esi * 4 + 0x68) = edx;
    if ((_fa != 0)) goto loc_00011576; /* jne: not equal / not zero */

loc_00011582: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0001158B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000114EE;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000115A0
 * Original: 0x000115A0 - 0x000115D2 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000115A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000115A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000115A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000115A5u); } /* indirect call */
    }

loc_000115A8: ;
    PUSH32(esp, 0x1D8620);
    ecx = esi;
    PUSH32(esp, 0x000115B4u); RECOMP_ABI_CALL(0x00011400u, sub_00011400); /* call 0x00011400 */

loc_000115B4: ;
    ecx = 7;
    eax = esi + 0xC;
    edx = 8;

loc_000115C1: ;
    esi = MEM32(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    MEM32(eax) = esi;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000115C1; /* jne: not equal / not zero */

loc_000115D0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000115E0
 * Original: 0x000115E0 - 0x000116BA (218 bytes, 80 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000115E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000115E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 4);
    PUSH32(esp, esi);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(ebp + 4) = eax;
    edi = ebx;
    MEM32(esp + 0x10) = 8;

loc_00011602: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00011609u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011606u); } /* indirect call */
    }

loc_00011609: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001161F; /* je: equal / zero */

loc_0001160D: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + 0x260);
    esi = 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0001161F: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00011602; /* jne: not equal / not zero */

loc_0001162D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00011637; /* jle: less or equal (signed <=) */

loc_00011632: ;
    esi = 4;

loc_00011637: ;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 4), 0xF (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000116AE; /* jae: above or equal (unsigned >=) */

loc_0001163D: ;
    edi = 8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ebx;
    eax = ebp + 0xC;
    ebx = 8;
    edi = edi;

loc_00011650: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x48);
    ecx = MEM32(edx + 0x260);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000116B6; /* jne: not equal / not zero */

loc_00011667: ;
    edx = MEM32(eax + -4);
    MEM32(ebp + edx * 4 + 0x68) = 0;
    MEM32(eax) = 0;
    MEM32(eax + -4) = 0xFFFFFFFFu;

loc_0001167F: ;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00011650; /* jne: not equal / not zero */

loc_0001168B: ;
    eax = ebp + 0x68;
    edx = 0x18;

loc_00011693: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001169C; /* jl: less (signed <) */

loc_00011699: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;

loc_0001169C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00011693; /* jne: not equal / not zero */

loc_000116A2: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000116AEu); RECOMP_ABI_CALL(0x00011400u, sub_00011400); /* call 0x00011400 */

loc_000116AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000116B6: ;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0001167F;

}

/**
 * sub_000116C0
 * Original: 0x000116C0 - 0x000116EE (46 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000116C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000116C0: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_000116DF; /* jbe: below or equal (unsigned <=) */

loc_000116CB: ;
    esi = MEM32(ecx);
    edi = MEM32(esp + 0xC);
    ecx = esi;

loc_000116D3: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000116E6; /* je: equal / zero */

loc_000116D7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000116D3; /* jb: below (unsigned <) */

loc_000116DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000116E6: ;
    POP32(esp, edi);
    eax = esi + eax * 8;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000116F0
 * Original: 0x000116F0 - 0x0001171F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000116F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000116F0: ;
    eax = MEM32(0x1DA89C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001171E; /* jne: not equal / not zero */

loc_000116F9: ;
    PUSH32(esp, 0x35C);
    PUSH32(esp, 0x00011703u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00011703: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011717; /* je: equal / zero */

loc_0001170A: ;
    ecx = eax;
    PUSH32(esp, 0x00011711u); RECOMP_ABI_CALL(0x000B3FF0u, sub_000B3FF0); /* call 0x000B3FF0 */

loc_00011711: ;
    MEM32(0x1DA89C) = eax;
    esp += 4; return; /* ret */

loc_00011717: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x1DA89C) = eax;

loc_0001171E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00011720
 * Original: 0x00011720 - 0x00011760 (64 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011720: ;
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
    PUSH32(esp, esi);
    MEM32(eax + 0x10) = edx;
    PUSH32(esp, edi);
    edx = eax + 0x14;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = 0x13;
    edi = edi;

loc_00011750: ;
    edi = MEM32(ecx + edx);
    MEM32(edx) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00011750; /* jne: not equal / not zero */

loc_0001175B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011760
 * Original: 0x00011760 - 0x0001185C (252 bytes, 86 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011760: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ebx = ecx;
    ecx = esp + 0xC;
    PUSH32(esp, 0x1AE094);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001177Bu); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_0001177B: ;
    esi = MEM32(esp + 0x2C);
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0001178Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001178Bu); } /* indirect call */
    }

loc_0001178E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001184F; /* je: equal / zero */

loc_00011796: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1CE4B4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1AE088);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x000117ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000117A6u); } /* indirect call */
    }

loc_000117AC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE1FC);
    ecx = ebx + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1AE07C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x000117C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000117BEu); } /* indirect call */
    }

loc_000117C4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = ebx + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE068);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x000117DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000117D5u); } /* indirect call */
    }

loc_000117DB: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE060);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x000117F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000117ECu); } /* indirect call */
    }

loc_000117F2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE054);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0001180Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011809u); } /* indirect call */
    }

loc_0001180F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011814: ;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x1AE04C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00011824u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00011824: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0001183Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011836u); } /* indirect call */
    }

loc_0001183C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x13 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00011814; /* jl: less (signed <) */

loc_00011845: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0001184Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001184Bu); } /* indirect call */
    }

loc_0001184E: ;
    POP32(esp, edi);

loc_0001184F: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00011860
 * Original: 0x00011860 - 0x000118D9 (121 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011860: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    edx = ecx + 0x98;
    esi = 0x13;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00011873: ;
    MEM32(edx + -152) = eax;
    MEM32(edx + -76) = ebx;
    MEM32(edx) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00011873; /* jne: not equal / not zero */

loc_00011884: ;
    edx = eax;
    MEM32(ecx + 0xE4) = edx;
    MEM32(ecx + 0xE8) = edx;
    MEM32(ecx + 0xEC) = edx;
    MEM32(ecx + 0xF0) = edx;
    edx = ecx + 0xF8;
    esi = 3;
    /* nop */

loc_000118B0: ;
    MEM32(edx + -4) = eax;
    MEM32(edx + -8) = eax;
    MEM32(edx) = ebx;
    MEM32(edx + 4) = ebx;
    MEM32(edx + 8) = eax;
    edi = edx + 0xC;
    ecx = 0x13;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 4) = 9;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000118B0; /* jne: not equal / not zero */

loc_000118D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000118E0
 * Original: 0x000118E0 - 0x00011A2A (330 bytes, 111 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000118E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000118E0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    eax = MEM32(esi);
    ebp = ecx;
    PUSH32(esp, 0x1AE0E0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000118F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000118F4u); } /* indirect call */
    }

loc_000118F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011A1D; /* je: equal / zero */

loc_000118FF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + 0x98;
    /* nop */

loc_00011910: ;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x1AE0D0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00011920u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00011920: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = ebx + -152;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00011943u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001193Du); } /* indirect call */
    }

loc_00011943: ;
    PUSH32(esp, edi);
    edx = esp + 0x14;
    PUSH32(esp, 0x1AE0C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00011953u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00011953: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    ecx = ebx + -76;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00011973u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001196Du); } /* indirect call */
    }

loc_00011973: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, 0x1AE0B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011983u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00011983: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, ebx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x000119A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001199Au); } /* indirect call */
    }

loc_000119A0: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x13 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00011910; /* jb: below (unsigned <) */

loc_000119AD: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + 0xE4;

loc_000119B5: ;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x1AE0A0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000119C5u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_000119C5: ;
    edx = MEM32(ebx);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = esp + 0x3C;
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x000119E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000119E0u); } /* indirect call */
    }

loc_000119E6: ;
    eax = MEM32(esp + 0x34);
    MEM32(ebx) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000119B5; /* jb: below (unsigned <) */

loc_000119F5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + 0xF0;
    /* nop */

loc_00011A00: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00011A09u); RECOMP_ABI_CALL(0x00011760u, sub_00011760); /* call 0x00011760 */

loc_00011A09: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x60;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00011A00; /* jb: below (unsigned <) */

loc_00011A12: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00011A1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011A18u); } /* indirect call */
    }

loc_00011A1B: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00011A1D: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011A30
 * Original: 0x00011A30 - 0x00011A42 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011A30(void)
{

loc_00011A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00011A38u); RECOMP_ABI_CALL(0x00014AA0u, sub_00014AA0); /* call 0x00014AA0 */

loc_00011A38: ;
    MEM32(esi) = 0x1AE0EC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00011A50
 * Original: 0x00011A50 - 0x00011AB5 (101 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011A50: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011A8E; /* je: equal / zero */

loc_00011A5D: ;
    esi = MEM32(0x1CA1C4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00011AAC; /* jbe: below or equal (unsigned <=) */

loc_00011A67: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x1CA1C0);

loc_00011A71: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 8), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011A84; /* je: equal / zero */

loc_00011A76: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00011A71; /* jb: below (unsigned <) */

loc_00011A7B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(eax + 4);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00011A84: ;
    eax = ecx + eax * 8;
    eax = MEM32(eax + 4);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00011A8E: ;
    esi = MEM32(0x1CA1BC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00011AAC; /* jbe: below or equal (unsigned <=) */

loc_00011A98: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x1CA1B8);

loc_00011AA2: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 8), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011A84; /* je: equal / zero */

loc_00011AA7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00011AA2; /* jb: below (unsigned <) */

loc_00011AAC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(eax + 4);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00011AC0
 * Original: 0x00011AC0 - 0x00011BE0 (288 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011AC0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = MEM32(esi);
    ebp = ecx;
    PUSH32(esp, 0x1AE130);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00011AD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011AD4u); } /* indirect call */
    }

loc_00011AD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011BD3; /* je: equal / zero */

loc_00011ADF: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1CA1B8);
    eax = ebp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE11C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x00011AF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011AF3u); } /* indirect call */
    }

loc_00011AF9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = ebp + 0x308;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1ADFCC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00011B13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011B0Du); } /* indirect call */
    }

loc_00011B13: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = ebp + 0x5F4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE110);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00011B2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011B27u); } /* indirect call */
    }

loc_00011B2D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + 0x30C;

loc_00011B35: ;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x1AE108);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00011B45u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00011B45: ;
    edx = MEM32(ebx);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = esp + 0x30;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x00011B66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011B60u); } /* indirect call */
    }

loc_00011B66: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x1AE0FC);
    PUSH32(esp, ecx);
    MEM32(ebx) = eax;
    PUSH32(esp, 0x00011B7Cu); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00011B7C: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = ebx + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00011B9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011B96u); } /* indirect call */
    }

loc_00011B9C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x13 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00011B35; /* jb: below (unsigned <) */

loc_00011BA5: ;
    PUSH32(esp, esi);
    ecx = ebp + 0x3E4;
    PUSH32(esp, 0x00011BB1u); RECOMP_ABI_CALL(0x000118E0u, sub_000118E0); /* call 0x000118E0 */

loc_00011BB1: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + 8;

loc_00011BB6: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00011BBFu); RECOMP_ABI_CALL(0x00011760u, sub_00011760); /* call 0x00011760 */

loc_00011BBF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x60;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00011BB6; /* jb: below (unsigned <) */

loc_00011BC8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00011BD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011BCEu); } /* indirect call */
    }

loc_00011BD1: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00011BD3: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011BE0
 * Original: 0x00011BE0 - 0x00011C35 (85 bytes, 29 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011BE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00011C16; /* jbe: below or equal (unsigned <=) */

loc_00011BE9: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edx = ecx + 0x358;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = ebx;
    edi = edi;

loc_00011C00: ;
    ebp = MEM32(esi + eax);
    MEM32(edx + -76) = ebp;
    ebp = MEM32(eax);
    MEM32(edx) = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00011C00; /* jne: not equal / not zero */

loc_00011C13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00011C16: ;
    MEM32(ecx + ebx * 4 + 0x30C) = 0xFFFFFFFFu;
    MEM32(ecx + 0x5F4) = ebx;
    MEM32(ecx + 0x308) = 0;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00011C40
 * Original: 0x00011C40 - 0x00011C91 (81 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011C40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00011C8C; /* jbe: below or equal (unsigned <=) */

loc_00011C4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + 0x14;
    esi = ecx + 0x18;

loc_00011C57: ;
    eax = MEM32(edi);
    ecx = MEM32(esi + -12);
    MEM32(eax + 0x40) = ecx;
    eax = MEM32(esi + -16);
    edx = MEM32(edi);
    MEM32(edx + 0x38) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00011C70; /* jle: less or equal (signed <=) */

loc_00011C6D: ;
    PUSH32(esp, eax);
    goto loc_00011C75;

loc_00011C70: ;
    ecx = MEM32(esi + -4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);

loc_00011C75: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x00011C7Cu); RECOMP_ABI_CALL(0x000266B0u, sub_000266B0); /* call 0x000266B0 */

loc_00011C7C: ;
    eax = MEM32(ebp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00011C57; /* jb: below (unsigned <) */

loc_00011C8A: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00011C8C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011CA0
 * Original: 0x00011CA0 - 0x00011CC2 (34 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011CA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011CA0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax + eax * 2;
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + ecx + 0xC) = edx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + eax * 4 + 0x14);
    MEM32(eax + 0x40) = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00011CD0
 * Original: 0x00011CD0 - 0x00011D48 (120 bytes, 44 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011CD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = esi + esi * 2;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x18);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebp = eax + edi;
    MEM32(ebp + 8) = ebx;
    edx = MEM32(ecx + esi * 4 + 0x14);
    MEM32(edx + 0x38) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00011D07; /* jne: not equal / not zero */

loc_00011CF9: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00011D07u); RECOMP_ABI_CALL(0x00013A30u, sub_00013A30); /* call 0x00013A30 */

loc_00011D07: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00011D2A; /* jbe: below or equal (unsigned <=) */

loc_00011D11: ;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011D2A; /* jne: not equal / not zero */

loc_00011D17: ;
    edi = ebp + 0x1C;
    eax = ebx;
    ecx = 0x13;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00011D2A: ;
    edx = MEM32(edi + 0x308);
    ecx = MEM32(edi + edx * 4 + 0x30C);
    eax = esi + esi * 2;
    edx = ecx + eax * 8;
    MEM32(edi + edx * 4 + 0x1C) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00011D50
 * Original: 0x00011D50 - 0x00011DAF (95 bytes, 29 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011D50: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = edx + edx * 2;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = ecx + eax + 0x10;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + esi;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011DAB; /* je: equal / zero */

loc_00011D6D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011DAB; /* jne: not equal / not zero */

loc_00011D71: ;
    edx = MEM32(0x1D3F08);
    ecx = MEM32(edx + 0x20);
    edx = MEM32(eax + 0x308);
    edx = MEM32(eax + edx * 4 + 0x30C);
    MEM32(eax + edx * 4 + 0x47C) = esi;
    esi = MEM32(eax + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00011DABu); RECOMP_ABI_CALL(0x00014250u, sub_00014250); /* call 0x00014250 */

loc_00011DAB: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00011DB0
 * Original: 0x00011DB0 - 0x00011DD7 (39 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011DB0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax + eax * 2;
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + ecx + 0x18) = edx;
    ecx = MEM32(0x1D9FB8);
    ecx = MEM32(ecx + eax * 4 + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00011DD3u); RECOMP_ABI_CALL(0x000266B0u, sub_000266B0); /* call 0x000266B0 */

loc_00011DD3: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00011DE0
 * Original: 0x00011DE0 - 0x00011F1B (315 bytes, 105 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011DE0(void)
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

loc_00011DE0: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F17; /* je: equal / zero */

loc_00011DEB: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011F16; /* jne: not equal / not zero */

loc_00011DFB: ;
    eax = MEM32(0x1D3F08);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x20);
    eax = MEM32(0x1DA89C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011E30; /* jne: not equal / not zero */

loc_00011E0F: ;
    PUSH32(esp, 0x35C);
    PUSH32(esp, 0x00011E19u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00011E19: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011E29; /* je: equal / zero */

loc_00011E20: ;
    ecx = eax;
    PUSH32(esp, 0x00011E27u); RECOMP_ABI_CALL(0x000B3FF0u, sub_000B3FF0); /* call 0x000B3FF0 */

loc_00011E27: ;
    goto loc_00011E2B;

loc_00011E29: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00011E2B: ;
    MEM32(0x1DA89C) = eax;

loc_00011E30: ;
    esi = eax + 0x248;
    PUSH32(esp, 2);
    ecx = esi;
    ebx = ebp + 0xC0;
    PUSH32(esp, 0x00011E45u); RECOMP_ABI_CALL(0x000B3F30u, sub_000B3F30); /* call 0x000B3F30 */

loc_00011E45: ;
    ecx = MEM32(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    ecx = esi;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00011E55u); RECOMP_ABI_CALL(0x000B3F80u, sub_000B3F80); /* call 0x000B3F80 */

loc_00011E55: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00011E6Fu); RECOMP_ABI_CALL(0x00013A90u, sub_00013A90); /* call 0x00013A90 */

loc_00011E6F: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x00011E78u); RECOMP_ABI_CALL(0x000B3F30u, sub_000B3F30); /* call 0x000B3F30 */

loc_00011E78: ;
    ecx = ebx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00011E83u); RECOMP_ABI_CALL(0x00025BD0u, sub_00025BD0); /* call 0x00025BD0 */

loc_00011E83: ;
    PUSH32(esp, 0x00011E88u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00011E88: ;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x00011E92u); RECOMP_ABI_CALL(0x000B3F80u, sub_000B3F80); /* call 0x000B3F80 */

loc_00011E92: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00011EACu); RECOMP_ABI_CALL(0x00013A90u, sub_00013A90); /* call 0x00013A90 */

loc_00011EAC: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00011EB5u); RECOMP_ABI_CALL(0x000B3F30u, sub_000B3F30); /* call 0x000B3F30 */

loc_00011EB5: ;
    ecx = MEM32(ebp + 0x48);
    ebx = eax;
    eax = MEM32(ecx + 0x260);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00011ECAu); RECOMP_ABI_CALL(0x000B3F40u, sub_000B3F40); /* call 0x000B3F40 */

loc_00011ECA: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    ecx = ebx + 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00011EE0u); RECOMP_ABI_CALL(0x00013A90u, sub_00013A90); /* call 0x00013A90 */

loc_00011EE0: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00011EE9u); RECOMP_ABI_CALL(0x000B3F30u, sub_000B3F30); /* call 0x000B3F30 */

loc_00011EE9: ;
    ecx = MEM32(ebp + 0x5C);
    ebx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00011EF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011EF0u); } /* indirect call */
    }

loc_00011EF3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00011EFDu); RECOMP_ABI_CALL(0x000B3F80u, sub_000B3F80); /* call 0x000B3F80 */

loc_00011EFD: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = ebx + 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00011F13u); RECOMP_ABI_CALL(0x00013A90u, sub_00013A90); /* call 0x00013A90 */

loc_00011F13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00011F16: ;
    POP32(esp, ebp);

loc_00011F17: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00011F20
 * Original: 0x00011F20 - 0x00011F49 (41 bytes, 10 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00011F20(void)
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

loc_00011F20: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F46; /* je: equal / zero */

loc_00011F26: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011F46; /* jne: not equal / not zero */

loc_00011F2E: ;
    eax = MEM32(ecx + 0x308);
    fp_push(MEMF(esp + 8)); /* fld float */
    edx = MEM32(ecx + eax * 4 + 0x30C);
    MEMF(ecx + edx * 4 + 0x430) = (float)fp_top(); fp_pop(); /* fstp */

loc_00011F46: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00011F50
 * Original: 0x00011F50 - 0x00011F83 (51 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011F50: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F80; /* je: equal / zero */

loc_00011F56: ;
    eax = MEM32(ecx + 0x308);
    edx = MEM32(ecx + eax * 4 + 0x30C);
    eax = MEM32(ecx + edx * 4 + 0x3E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = ecx + edx * 4 + 0x3E4;
    edx = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_00011F7E; /* je: equal / zero */

loc_00011F7A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00011F80; /* jae: above or equal (unsigned >=) */

loc_00011F7E: ;
    MEM32(ecx) = edx;

loc_00011F80: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011F90
 * Original: 0x00011F90 - 0x00012028 (152 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011F90: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x10;
    PUSH32(esp, edi);

loc_00011FA0: ;
    esi = MEM32(edx);
    MEM32(esp + eax * 4 + 0x34) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00011FA0; /* jb: below (unsigned <) */

loc_00011FAF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00011FB1: ;
    MEM32(esp + eax * 4 + 0x14) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00011FB1; /* jb: below (unsigned <) */

loc_00011FBB: ;
    ebx = 1;
    esi = esp + 0x14;
    ebp = 7;
    /* nop */

loc_00011FD0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    edi = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_00012000; /* jae: above or equal (unsigned >=) */

loc_00011FD7: ;
    goto loc_00011FE0;

    /* nop */

loc_00011FE0: ;
    eax = MEM32(esp + edi * 4 + 0x14);
    edx = MEM32(esi);
    ecx = MEM32(esp + eax * 4 + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + edx * 4 + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + edx * 4 + 0x34) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00011FF6; /* jbe: below or equal (unsigned <=) */

loc_00011FF0: ;
    MEM32(esi) = eax;
    MEM32(esp + edi * 4 + 0x14) = edx;

loc_00011FF6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00011FE0; /* jb: below (unsigned <) */

loc_00011FFC: ;
    ecx = MEM32(esp + 0x10);

loc_00012000: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00011FD0; /* jne: not equal / not zero */

loc_00012007: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    /* nop */

loc_00012010: ;
    edx = MEM32(esp + eax * 4 + 4);
    edx = edx + edx * 2;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + ecx + 0x14) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012010; /* jb: below (unsigned <) */

loc_00012024: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00012030
 * Original: 0x00012030 - 0x00012037 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012030(void)
{

loc_00012030: ;
    eax = MEM32(ecx + 0x5F8);
    esp += 4; return; /* ret */

}

/**
 * sub_00012040
 * Original: 0x00012040 - 0x00012077 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012040: ;
    eax = MEM32(ecx + 0x308);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012068; /* je: equal / zero */

loc_0001204A: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x30C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x30C), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012068; /* je: equal / zero */

loc_00012054: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x5F4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x5F4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00012068; /* jae: above or equal (unsigned >=) */

loc_0001205C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

loc_00012068: ;
    eax = 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00012046
 * Original: 0x00012046 - 0x00012077 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012046(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012046: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012068; /* je: equal / zero */

loc_0001204A: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x30C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x30C), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012068; /* je: equal / zero */

loc_00012054: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x5F4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x5F4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00012068; /* jae: above or equal (unsigned >=) */

loc_0001205C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

loc_00012068: ;
    eax = 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00012080
 * Original: 0x00012080 - 0x000120A2 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00012080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012080: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00012090: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001209F; /* je: equal / zero */

loc_00012094: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012090; /* jb: below (unsigned <) */

loc_0001209D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001209F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012086
 * Original: 0x00012086 - 0x000120A2 (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00012086(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012086: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00012090: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001209F; /* je: equal / zero */

loc_00012094: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012090; /* jb: below (unsigned <) */

loc_0001209D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001209F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000120B0
 * Original: 0x000120B0 - 0x000120CD (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000120B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000120B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x3E4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3E4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0x13;
    /* nop */

loc_000120C0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000120C6; /* jne: not equal / not zero */

loc_000120C5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000120C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000120C0; /* jne: not equal / not zero */

loc_000120CC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000120D0
 * Original: 0x000120D0 - 0x00012160 (144 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000120D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000120D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0xFFFFFC9Cu;
    ebx = 0xFFFFFC7Cu;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx + 0x3C4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = 8;
    /* nop */

loc_000120F0: ;
    eax = MEM32(0x1DA89C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001211A; /* jne: not equal / not zero */

loc_000120F9: ;
    PUSH32(esp, 0x35C);
    PUSH32(esp, 0x00012103u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00012103: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012113; /* je: equal / zero */

loc_0001210A: ;
    ecx = eax;
    PUSH32(esp, 0x00012111u); RECOMP_ABI_CALL(0x000B3FF0u, sub_000B3FF0); /* call 0x000B3FF0 */

loc_00012111: ;
    goto loc_00012115;

loc_00012113: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012115: ;
    MEM32(0x1DA89C) = eax;

loc_0001211A: ;
    ecx = edi + esi;
    edx = MEM32(ecx + eax);
    MEM32(esi + -32) = edx;
    eax = MEM32(0x1DA89C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001214D; /* jne: not equal / not zero */

loc_0001212C: ;
    PUSH32(esp, 0x35C);
    PUSH32(esp, 0x00012136u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00012136: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012146; /* je: equal / zero */

loc_0001213D: ;
    ecx = eax;
    PUSH32(esp, 0x00012144u); RECOMP_ABI_CALL(0x000B3FF0u, sub_000B3FF0); /* call 0x000B3FF0 */

loc_00012144: ;
    goto loc_00012148;

loc_00012146: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012148: ;
    MEM32(0x1DA89C) = eax;

loc_0001214D: ;
    ecx = ebx + esi;
    edx = MEM32(ecx + eax);
    MEM32(esi) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000120F0; /* jne: not equal / not zero */

loc_0001215B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00012160
 * Original: 0x00012160 - 0x0001218F (47 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012160: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x3C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = 8;

loc_00012177: ;
    edi = MEM32(edx + eax);
    MEM32(ecx + -32) = edi;
    edi = MEM32(eax);
    MEM32(ecx) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012177; /* jne: not equal / not zero */

loc_0001218A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012190
 * Original: 0x00012190 - 0x000121CF (63 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012190: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000121AB; /* jne: not equal / not zero */

loc_0001219E: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0x000121ABu); RECOMP_ABI_CALL(0x00013A40u, sub_00013A40); /* call 0x00013A40 */

loc_000121AB: ;
    ecx = MEM32(esi + 0x308);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_000121CA; /* js: sign (negative) */

loc_000121B4: ;
    ecx = MEM32(esi + ecx * 4 + 0x30C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000121CA; /* je: equal / zero */

loc_000121C0: ;
    edx = edi + edi * 2;
    eax = ecx + edx * 8;
    eax = MEM32(esi + eax * 4 + 0x1C);

loc_000121CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000121D0
 * Original: 0x000121D0 - 0x000121F4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000121D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000121D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AE0EC;
    PUSH32(esp, 0x000121DEu); RECOMP_ABI_CALL(0x00014AB0u, sub_00014AB0); /* call 0x00014AB0 */

loc_000121DE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000121EE; /* je: equal / zero */

loc_000121E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000121EBu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000121EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000121EE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012200
 * Original: 0x00012200 - 0x00012293 (147 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 0x308) = ebx;
    MEM32(ebp + 0x5F4) = ebx;
    edx = ebp + 0x10;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    /* nop */

loc_00012220: ;
    MEM32(edx + -4) = eax;
    MEM32(edx + -8) = eax;
    MEM32(edx) = ebx;
    MEM32(edx + 4) = ebx;
    MEM32(edx + 8) = eax;
    edi = edx + 0xC;
    ecx = 0x13;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 4) = esi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012220; /* jb: below (unsigned <) */

loc_00012244: ;
    edx = 0xFFFFFFFEu;
    ecx = ebp + 0x358;
    esi = 0x13;

loc_00012254: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xB (32-bit) */
    MEM32(ecx + -76) = eax;
    if (CMP_A(_fa, _fb)) goto loc_00012270; /* ja: above (unsigned >) */

loc_0001225C: ;
    edi = ZX8(MEM8(edx + 0x1229C));
    { uint32_t _jt = MEM32(edi * 4 + 0x12294); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0001226Au) goto loc_0001226A;
    if (_jt == 0x00012270u) goto loc_00012270;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001226A: ;
    MEM32(ecx) = 2;

loc_00012270: ;
    MEM32(ecx) = 3;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012254; /* jne: not equal / not zero */

loc_0001227D: ;
    ecx = ebp + 0x3E4;
    PUSH32(esp, 0x00012288u); RECOMP_ABI_CALL(0x00011860u, sub_00011860); /* call 0x00011860 */

loc_00012288: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000120D0(); return; /* tail jmp 0x000120D0 */

}

/**
 * sub_00012254
 * Original: 0x00012254 - 0x00012293 (63 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012254(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012254: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xB (32-bit) */
    MEM32(ecx + -76) = eax;
    if (CMP_A(_fa, _fb)) goto loc_00012270; /* ja: above (unsigned >) */

loc_0001225C: ;
    edi = ZX8(MEM8(edx + 0x1229C));
    { uint32_t _jt = MEM32(edi * 4 + 0x12294); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0001226Au) goto loc_0001226A;
    if (_jt == 0x00012270u) goto loc_00012270;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001226A: ;
    MEM32(ecx) = 2;

loc_00012270: ;
    MEM32(ecx) = 3;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012254; /* jne: not equal / not zero */

loc_0001227D: ;
    ecx = ebp + 0x3E4;
    PUSH32(esp, 0x00012288u); RECOMP_ABI_CALL(0x00011860u, sub_00011860); /* call 0x00011860 */

loc_00012288: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000120D0(); return; /* tail jmp 0x000120D0 */

}

/**
 * sub_0001226A
 * Original: 0x0001226A - 0x000122B0 (70 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001226A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001226A: ;
    MEM32(ecx) = 2;
    MEM32(ecx) = 3;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_00012254(); return; } /* jne: not equal / not zero */

loc_0001227D: ;
    ecx = ebp + 0x3E4;
    PUSH32(esp, 0x00012288u); RECOMP_ABI_CALL(0x00011860u, sub_00011860); /* call 0x00011860 */

loc_00012288: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000120D0(); return; /* tail jmp 0x000120D0 */

    /* nop */
    PUSH32(esp, 0x22);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) { g_seh_ebp = ebp; sub_000122BC(); return; } /* jo: overflow */

loc_0001229A: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_000122B0(); return; /* fallthrough 0x000122B0 */

}

/**
 * sub_000122B0
 * Original: 0x000122B0 - 0x00012390 (224 bytes, 71 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000122B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000122B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000122CF; /* je: equal / zero */

loc_000122BC: ;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x30C) = ebx;
    MEM32(edi + 0x5F4) = ebp;
    goto loc_000122D4;

loc_000122CF: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000122D4: ;
    ecx = edi;
    PUSH32(esp, 0x000122DBu); RECOMP_ABI_CALL(0x000120D0u, sub_000120D0); /* call 0x000120D0 */

loc_000122DB: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(edi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00012358; /* je: equal / zero */

loc_000122E7: ;
    ebx = eax + eax * 4;
    ebx = ebx * 4 + 0x80;
    esi = edi + 0x358;
    ebp = 5;
    /* nop */

loc_00012300: ;
    eax = MEM32(0x1DA89C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001232A; /* jne: not equal / not zero */

loc_00012309: ;
    PUSH32(esp, 0x35C);
    PUSH32(esp, 0x00012313u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00012313: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012323; /* je: equal / zero */

loc_0001231A: ;
    ecx = eax;
    PUSH32(esp, 0x00012321u); RECOMP_ABI_CALL(0x000B3FF0u, sub_000B3FF0); /* call 0x000B3FF0 */

loc_00012321: ;
    goto loc_00012325;

loc_00012323: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012325: ;
    MEM32(0x1DA89C) = eax;

loc_0001232A: ;
    eax = MEM32(ebx + eax);
    MEM32(esi + -76) = eax;
    MEM32(esi) = 3;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0x5F4) = 5;
    if ((_fa != 0)) goto loc_00012300; /* jne: not equal / not zero */

loc_00012349: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x320) = 0xFFFFFFFFu;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00012358: ;
    MEM32(edi + 0x308) = ebp;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi + 0x10;

loc_00012363: ;
    MEM32(edx + -4) = ebx;
    MEM32(edx + -8) = ebx;
    MEM32(edx) = ebp;
    MEM32(edx + 4) = ebp;
    MEM32(edx + 8) = ebx;
    edi = edx + 0xC;
    ecx = 0x13;
    eax = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 4) = esi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012363; /* jb: below (unsigned <) */

loc_00012389: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012390
 * Original: 0x00012390 - 0x0001265E (718 bytes, 222 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012390(void)
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

loc_00012390: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    ebx = ebp;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = eax;
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = ecx + 0x14;

loc_000123B2: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    ecx = 0x13;
    edi = edx + 8;
    MEM32(edx + -4) = 0;
    MEM32(edx) = 0;
    MEM32(edx + 4) = eax;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    if (CMP_AE(_fa, _fb)) goto loc_000123DE; /* jae: above or equal (unsigned >=) */

loc_000123D3: ;
    ecx = MEM32(esp + 0x10);
    eax = esi + ecx;
    MEM32(edx) = eax;
    goto loc_000123E0;

loc_000123DE: ;
    MEM32(edx) = ebx;

loc_000123E0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000123B2; /* jb: below (unsigned <) */

loc_000123EA: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    MEM32(esp + 0x14) = 1;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AE13C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1ae13c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001240B; /* je: equal / zero */

loc_00012403: ;
    MEM32(esp + 0x14) = 0;

loc_0001240B: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00012415u); RECOMP_ABI_CALL(0x000BB4F0u, sub_000BB4F0); /* call 0x000BB4F0 */

loc_00012415: ;
    eax = MEM32(0x1DA89C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00012420: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012445; /* jne: not equal / not zero */

loc_00012424: ;
    PUSH32(esp, 0x35C);
    PUSH32(esp, 0x0001242Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001242E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001243E; /* je: equal / zero */

loc_00012435: ;
    ecx = eax;
    PUSH32(esp, 0x0001243Cu); RECOMP_ABI_CALL(0x000B3FF0u, sub_000B3FF0); /* call 0x000B3FF0 */

loc_0001243C: ;
    goto loc_00012440;

loc_0001243E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012440: ;
    MEM32(0x1DA89C) = eax;

loc_00012445: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(edx + 4);
    edx = ecx + esi * 4;
    ecx = MEM32(eax + edx * 4 + 0xBC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012468; /* jne: not equal / not zero */

loc_0001245A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00012460u); RECOMP_ABI_CALL(0x000BB580u, sub_000BB580); /* call 0x000BB580 */

loc_00012460: ;
    eax = MEM32(0x1DA89C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012468: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x18 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012420; /* jb: below (unsigned <) */

loc_0001246E: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012526; /* je: equal / zero */

loc_0001247C: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x20);
    edx = MEM32(ecx + 4);
    eax = edx;
    PUSH32(esp, eax);
    MEM32(edi + 0xC) = edx;
    MEM32(edi + 8) = 0;
    PUSH32(esp, 0x00012499u); RECOMP_ABI_CALL(0x000BB580u, sub_000BB580); /* call 0x000BB580 */

loc_00012499: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000124C9; /* jne: not equal / not zero */

loc_000124A4: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x1C) = 0x3F800000;
    eax = esp + 0x14;
    ecx = esp + 0x1C;
    goto loc_000125B9;

loc_000124C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000124FA; /* jne: not equal / not zero */

loc_000124CE: ;
    edx = MEM32(esp + 0x10);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, edx);
    goto loc_000125C0;

loc_000124FA: ;
    eax = MEM32(esp + 0x10);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x3F000000;
    PUSH32(esp, eax);
    goto loc_000125C0;

loc_00012526: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00012541; /* jbe: below or equal (unsigned <=) */

loc_0001252A: ;
    esi = edi + 0xC;
    ebx = ebp;
    /* nop */

loc_00012530: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00012538u); RECOMP_ABI_CALL(0x000BB580u, sub_000BB580); /* call 0x000BB580 */

loc_00012538: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012530; /* jne: not equal / not zero */

loc_00012541: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00012565; /* jp: parity */

loc_00012552: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001255Cu); RECOMP_ABI_CALL(0x000BB5F0u, sub_000BB5F0); /* call 0x000BB5F0 */

loc_0001255C: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0001256D;

loc_00012565: ;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x14) = eax;

loc_0001256D: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00012588; /* jp: parity */

loc_0001257E: ;
    MEM32(esp + 0x14) = 0;
    goto loc_000125A1;

loc_00012588: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000125A1; /* jne: not equal / not zero */

loc_00012599: ;
    MEM32(esp + 0x14) = 0x3F800000;

loc_000125A1: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x1C) = 0x3E800000;
    eax = esp + 0x1C;
    ecx = esp + 0x14;

loc_000125B9: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_000125C0: ;
    PUSH32(esp, 0x000125C5u); RECOMP_ABI_CALL(0x000BB9B0u, sub_000BB9B0); /* call 0x000BB9B0 */

loc_000125C5: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00012605; /* jbe: below or equal (unsigned <=) */

loc_000125D2: ;
    edx = MEM32(esp + 0x24);
    esi = edx + ebp * 4 + 0x14;
    edx = ebp + ebp * 2;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + edi + 0xC;

loc_000125E5: ;
    edi = MEM32(eax + ecx * 4);
    MEM32(edx) = edi;
    edi = MEM32(esi);
    ebx = MEM32(eax + ecx * 4);
    MEM32(edi + 0x40) = ebx;
    edi = MEM32(esp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000125E5; /* jb: below (unsigned <) */

loc_00012601: ;
    edi = MEM32(esp + 0x18);

loc_00012605: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001260Fu); RECOMP_ABI_CALL(0x000BB6E0u, sub_000BB6E0); /* call 0x000BB6E0 */

loc_0001260F: ;
    ecx = MEM32(esp + 0x14);
    ebx = ecx + ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    esi = ebp;
    if (CMP_AE(_fa, _fb)) goto loc_00012648; /* jae: above or equal (unsigned >=) */

loc_0001261F: ;
    edx = MEM32(esp + 0x24);
    edi = edx + ebp * 4 + 0x14;

loc_00012627: ;
    ecx = MEM32(edi);
    eax = MEM32(esp + 0x24);
    edx = MEM32(ecx + 0x38);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001263Cu); RECOMP_ABI_CALL(0x00011CD0u, sub_00011CD0); /* call 0x00011CD0 */

loc_0001263C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012627; /* jb: below (unsigned <) */

loc_00012644: ;
    edi = MEM32(esp + 0x18);

loc_00012648: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00012654u); RECOMP_ABI_CALL(0x00011C40u, sub_00011C40); /* call 0x00011C40 */

loc_00012654: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012660
 * Original: 0x00012660 - 0x000126AB (75 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012660: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x7FFFFFFF;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0x14;

loc_00012670: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebp;

loc_00012674: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012683; /* je: equal / zero */

loc_00012678: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012674; /* jb: below (unsigned <) */

loc_00012681: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012683: ;
    esi = edx + edx * 2;
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(esi + ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012695; /* je: equal / zero */

loc_00012691: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00012698; /* jae: above or equal (unsigned >=) */

loc_00012695: ;
    ebx = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00012698: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000126A4; /* je: equal / zero */

loc_0001269E: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012670; /* jb: below (unsigned <) */

loc_000126A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000126B0
 * Original: 0x000126B0 - 0x00012817 (359 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000126B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000126B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x308);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    MEM32(esi + 0x5F8) = 0;
    MEM32(esi + 0x308) = edx;
    _fa = (uint32_t)(MEM32(esi + eax * 4 + 0x30C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 4 + 0x30C), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000126DD; /* je: equal / zero */

loc_000126D6: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000126DD: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012812; /* je: equal / zero */

loc_000126EA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000126F4u); RECOMP_ABI_CALL(0x00012660u, sub_00012660); /* call 0x00012660 */

loc_000126F4: ;
    edi = eax;
    eax = ebx + ebx * 2 + 0x27;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + esi);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001274A; /* ja: above (unsigned >) */

loc_00012705: ;
    ecx = esi + 8;
    edx = ebx + ebx * 2;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    ecx = edx + esi + 0x4D4;
    PUSH32(esp, 0x0001271Bu); RECOMP_ABI_CALL(0x00011720u, sub_00011720); /* call 0x00011720 */

loc_0001271B: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    MEM32(eax + esi) = edi;
    ecx = MEM32(esi + 4);
    eax = esi + ecx * 4 + 0x4C8;
    ecx = MEM32(eax);
    if (CMP_GE(_fas, _fbs)) goto loc_00012811; /* jge: greater or equal (signed >=) */

loc_0001273F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012748; /* je: equal / zero */

loc_00012744: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001274A; /* jge: greater or equal (signed >=) */

loc_00012748: ;
    MEM32(eax) = edi;

loc_0001274A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00012811; /* jge: greater or equal (signed >=) */

loc_00012753: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012797; /* jne: not equal / not zero */

loc_0001275A: ;
    edx = MEM32(0x1D3F08);
    ecx = MEM32(edx + 0x18);
    PUSH32(esp, 0x00012768u); RECOMP_ABI_CALL(0x00013760u, sub_00013760); /* call 0x00013760 */

loc_00012768: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012782; /* jne: not equal / not zero */

loc_0001276C: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x25C);
    PUSH32(esp, 0x0001277Cu); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_0001277C: ;
    MEM32(esi + 0x5F8) = eax;

loc_00012782: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x18);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(ecx + 4) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00012797: ;
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000127D9; /* jne: not equal / not zero */

loc_000127A0: ;
    edx = MEM32(0x1D3F08);
    ecx = MEM32(edx + 0x18);
    PUSH32(esp, 0x000127AEu); RECOMP_ABI_CALL(0x00013770u, sub_00013770); /* call 0x00013770 */

loc_000127AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000127C8; /* jne: not equal / not zero */

loc_000127B2: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x252);
    PUSH32(esp, 0x000127C2u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_000127C2: ;
    MEM32(esi + 0x5F8) = eax;

loc_000127C8: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x18);
    MEM32(ecx + 8) = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000127D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012811; /* jne: not equal / not zero */

loc_000127DE: ;
    edx = MEM32(0x1D3F08);
    ecx = MEM32(edx + 0x18);
    PUSH32(esp, 0x000127ECu); RECOMP_ABI_CALL(0x00013780u, sub_00013780); /* call 0x00013780 */

loc_000127EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012806; /* jne: not equal / not zero */

loc_000127F0: ;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0xC4);
    PUSH32(esp, 0x00012800u); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_00012800: ;
    MEM32(esi + 0x5F8) = eax;

loc_00012806: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x18);
    MEM32(ecx + 0xC) = edi;

loc_00012811: ;
    POP32(esp, edi);

loc_00012812: ;
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00012820
 * Original: 0x00012820 - 0x000129E7 (455 bytes, 119 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012820(void)
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

loc_00012820: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    ebp = eax + edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    esi = ecx;
    MEM32(esp + 0x18) = 0x42700000;
    if (CMP_GE(_fas, _fbs)) goto loc_000128F8; /* jge: greater or equal (signed >=) */

loc_00012844: ;
    goto loc_00012850;

    /* nop */
    /* nop */

loc_00012850: ;
    ebx = MEM32(esi + edi * 4 + 0x3A4);
    eax = MEM32(esi + edi * 4 + 0x3C4);
    ecx = edi + edi * 2;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 4);
    ecx = 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000128B7; /* je: equal / zero */

loc_00012878: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000128B7; /* jne: not equal / not zero */

loc_0001287C: ;
    edx = MEM32(0x1D3F08);
    ecx = MEM32(edx + 0x20);
    edx = MEM32(esi + 0x308);
    edx = MEM32(esi + edx * 4 + 0x30C);
    MEM32(esi + edx * 4 + 0x47C) = eax;
    edx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000128B2u); RECOMP_ABI_CALL(0x00014250u, sub_00014250); /* call 0x00014250 */

loc_000128B2: ;
    ecx = 3;

loc_000128B7: ;
    eax = edi + 1;
    MEM32(ebx + 0x18) = eax;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000128DE; /* je: equal / zero */

loc_000128C2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000128DE; /* jne: not equal / not zero */

loc_000128C6: ;
    edx = MEM32(esi + 0x308);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = MEM32(esi + edx * 4 + 0x30C);
    MEMF(esi + edx * 4 + 0x430) = (float)fp_top(); fp_pop(); /* fstp */

loc_000128DE: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1AE140)); /* fadd dword ptr [0x1ae140] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00012850; /* jl: less (signed <) */

loc_000128F6: ;
    goto loc_000128FD;

loc_000128F8: ;
    ecx = 3;

loc_000128FD: ;
    edi = MEM32(esi + 0x10);
    eax = 0x190;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = edi;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001294B; /* je: equal / zero */

loc_0001290F: ;
    edx = MEM32(esi + 0x308);
    ecx = MEM32(0x1D3F08);
    edx = MEM32(esi + edx * 4 + 0x30C);
    ecx = MEM32(ecx + 0x20);
    MEM32(esi + edx * 4 + 0x47C) = eax;
    ebx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00012946u); RECOMP_ABI_CALL(0x00014250u, sub_00014250); /* call 0x00014250 */

loc_00012946: ;
    ecx = 3;

loc_0001294B: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ecx (32-bit) */
    MEM32(esi + 0x18) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_0001296F; /* je: equal / zero */

loc_00012957: ;
    eax = MEM32(esi + 0x308);
    edx = MEM32(esi + eax * 4 + 0x30C);
    MEM32(esi + edx * 4 + 0x430) = 0x42700000;

loc_0001296F: ;
    _fb = (uint32_t)(0x1F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x70) = MEM32(esi + 0x70) + 0x1F4;
    _fa = (uint32_t)(MEM32(esi + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x78) = 1;
    edi = MEM32(esi + 0xD0);
    eax = 0x12C;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xD0) = edi;
    MEM32(esi + 0xD8) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x130) = MEM32(esi + 0x130) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x130)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ecx (32-bit) */
    MEM32(esi + 0x138) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000129D1; /* je: equal / zero */

loc_000129A7: ;
    eax = MEM32(esi + 0x308);
    ecx = MEM32(esi + eax * 4 + 0x30C);
    eax = MEM32(esi + ecx * 4 + 0x3E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi + ecx * 4 + 0x3E4;
    if (CMP_EQ(_fa, _fb)) goto loc_000129CB; /* je: equal / zero */

loc_000129C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000129D1; /* jbe: below or equal (unsigned <=) */

loc_000129CB: ;
    MEM32(ecx) = 0;

loc_000129D1: ;
    ecx = esi;
    PUSH32(esp, 0x000129D8u); RECOMP_ABI_CALL(0x00011F90u, sub_00011F90); /* call 0x00011F90 */

loc_000129D8: ;
    ecx = esi;
    PUSH32(esp, 0x000129DFu); RECOMP_ABI_CALL(0x000126B0u, sub_000126B0); /* call 0x000126B0 */

loc_000129DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000129F0
 * Original: 0x000129F0 - 0x00012AA0 (176 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000129F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000129F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000129F8u); RECOMP_ABI_CALL(0x00014AA0u, sub_00014AA0); /* call 0x00014AA0 */

loc_000129F8: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0);
    ecx = esi + 0x5C;
    MEM32(esi) = 0x1AE150;
    PUSH32(esp, 0x00012A0Du); RECOMP_ABI_CALL(0x000E0EE0u, sub_000E0EE0); /* call 0x000E0EE0 */

loc_00012A0D: ;
    PUSH32(esp, 0x184);
    PUSH32(esp, 0x00012A17u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00012A17: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012A27; /* je: equal / zero */

loc_00012A1E: ;
    ecx = eax;
    PUSH32(esp, 0x00012A25u); RECOMP_ABI_CALL(0x00018210u, sub_00018210); /* call 0x00018210 */

loc_00012A25: ;
    goto loc_00012A29;

loc_00012A27: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012A29: ;
    PUSH32(esp, 0x8EC);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x00012A36u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00012A36: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012A46; /* je: equal / zero */

loc_00012A3D: ;
    ecx = eax;
    PUSH32(esp, 0x00012A44u); RECOMP_ABI_CALL(0x000181A0u, sub_000181A0); /* call 0x000181A0 */

loc_00012A44: ;
    goto loc_00012A48;

loc_00012A46: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012A48: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi + 8) = eax;
    edi = esi + 0xC;
    ebx = 0x13;

loc_00012A55: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x00012A5Fu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00012A5F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012A6F; /* je: equal / zero */

loc_00012A66: ;
    ecx = eax;
    PUSH32(esp, 0x00012A6Du); RECOMP_ABI_CALL(0x000150A0u, sub_000150A0); /* call 0x000150A0 */

loc_00012A6D: ;
    goto loc_00012A71;

loc_00012A6F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012A71: ;
    MEM32(edi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012A55; /* jne: not equal / not zero */

loc_00012A79: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00012A80u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00012A80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00012A97; /* je: equal / zero */

loc_00012A89: ;
    ecx = eax;
    PUSH32(esp, 0x00012A90u); RECOMP_ABI_CALL(0x00012D30u, sub_00012D30); /* call 0x00012D30 */

loc_00012A90: ;
    MEM32(esi + 0x58) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00012A97: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x58) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00012AA0
 * Original: 0x00012AA0 - 0x00012B04 (100 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012AA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi) = 0x1AE150;
    if (CMP_EQ(_fa, _fb)) goto loc_00012AB8; /* je: equal / zero */

loc_00012AB2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00012AB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012AB6u); } /* indirect call */
    }

loc_00012AB8: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012AC5; /* je: equal / zero */

loc_00012ABF: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00012AC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012AC3u); } /* indirect call */
    }

loc_00012AC5: ;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012AD2; /* je: equal / zero */

loc_00012ACC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00012AD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012AD0u); } /* indirect call */
    }

loc_00012AD2: ;
    esi = edi + 0xC;
    ebx = 0x13;
    /* nop */

loc_00012AE0: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012AEC; /* je: equal / zero */

loc_00012AE6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00012AECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012AEAu); } /* indirect call */
    }

loc_00012AEC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012AE0; /* jne: not equal / not zero */

loc_00012AF2: ;
    ecx = edi + 0x5C;
    PUSH32(esp, 0x00012AFAu); RECOMP_ABI_CALL(0x000E1130u, sub_000E1130); /* call 0x000E1130 */

loc_00012AFA: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00014AB0(); return; /* tail jmp 0x00014AB0 */

}

/**
 * sub_00012B10
 * Original: 0x00012B10 - 0x00012B50 (64 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012B10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x58);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00012B1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B19u); } /* indirect call */
    }

loc_00012B1C: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00012B24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B21u); } /* indirect call */
    }

loc_00012B24: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00012B2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B29u); } /* indirect call */
    }

loc_00012B2C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012B31: ;
    ecx = MEM32(edi);
    MEM32(ecx + 4) = esi;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00012B3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B3Au); } /* indirect call */
    }

loc_00012B3D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x13 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00012B31; /* jl: less (signed <) */

loc_00012B46: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00012B50(); return; /* fallthrough 0x00012B50 */

}

/**
 * sub_00012B50
 * Original: 0x00012B50 - 0x00012BFB (171 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00012B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012B50: ;
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    ebp = ecx;
    PUSH32(esp, 0x1AE188);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00012B64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B61u); } /* indirect call */
    }

loc_00012B64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012B7A; /* je: equal / zero */

loc_00012B68: ;
    ecx = MEM32(ebp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00012B71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B6Eu); } /* indirect call */
    }

loc_00012B71: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00012B7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B77u); } /* indirect call */
    }

loc_00012B7A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1AE17C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00012B86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B83u); } /* indirect call */
    }

loc_00012B86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012B9C; /* je: equal / zero */

loc_00012B8A: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00012B93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B90u); } /* indirect call */
    }

loc_00012B93: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00012B9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B99u); } /* indirect call */
    }

loc_00012B9C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1AE16C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00012BA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012BA5u); } /* indirect call */
    }

loc_00012BA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012BCF; /* je: equal / zero */

loc_00012BAC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ebp + 0xC;
    ebx = 0x13;

loc_00012BB6: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00012BBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012BBBu); } /* indirect call */
    }

loc_00012BBE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012BB6; /* jne: not equal / not zero */

loc_00012BC4: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00012BCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012BCAu); } /* indirect call */
    }

loc_00012BCD: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00012BCF: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1AE160);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00012BDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012BD8u); } /* indirect call */
    }

loc_00012BDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012BF1; /* je: equal / zero */

loc_00012BDF: ;
    ecx = MEM32(ebp + 0x58);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00012BE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012BE5u); } /* indirect call */
    }

loc_00012BE8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00012BF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012BEEu); } /* indirect call */
    }

loc_00012BF1: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012C00
 * Original: 0x00012C00 - 0x00012C53 (83 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012C00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x1D3F08);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C1E; /* je: equal / zero */

loc_00012C0E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00012C14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012C12u); } /* indirect call */
    }

loc_00012C14: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00012C1Bu); RECOMP_ABI_CALL(0x00015BF0u, sub_00015BF0); /* call 0x00015BF0 */

loc_00012C1B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012C1E: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C49; /* je: equal / zero */

loc_00012C26: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00012C2Cu); RECOMP_ABI_CALL(0x00015BF0u, sub_00015BF0); /* call 0x00015BF0 */

loc_00012C2C: ;
    ecx = edi + 0x5C;
    MEM32(esi + 4) = ecx;
    ecx = MEM32(0x1D3F08);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012C40u); RECOMP_ABI_CALL(0x000146E0u, sub_000146E0); /* call 0x000146E0 */

loc_00012C40: ;
    edx = MEM32(edi + 0x58);
    eax = MEM32(esi + 0x34);
    MEM32(edx + 4) = eax;

loc_00012C49: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012C60
 * Original: 0x00012C60 - 0x00012CD8 (120 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00012C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012C60: ;
    PUSH32(esp, ebp);
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax + 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = 0x20;

loc_00012C75: ;
    SET_LO8(edx, MEM8(edi + esi));
    MEM8(esi) = LO8(edx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012C75; /* jne: not equal / not zero */

loc_00012C7E: ;
    SET_LO8(edx, MEM8(ecx + 0x24));
    MEM8(eax + 0x24) = LO8(edx);
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = edx;
    SET_LO8(edx, MEM8(ecx + 0x2C));
    MEM8(eax + 0x2C) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x2D));
    MEM8(eax + 0x2D) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x2E));
    MEM8(eax + 0x2E) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x2F));
    MEM8(eax + 0x2F) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x30));
    MEM8(eax + 0x30) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x31));
    MEM8(eax + 0x31) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x32));
    MEM8(eax + 0x32) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x33));
    MEM8(eax + 0x33) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x34));
    MEM8(eax + 0x34) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x35));
    MEM8(eax + 0x35) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x36));
    POP32(esp, edi);
    MEM8(eax + 0x36) = LO8(edx);
    SET_LO8(ecx, MEM8(ecx + 0x37));
    POP32(esp, esi);
    MEM8(eax + 0x37) = LO8(ecx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012CE0
 * Original: 0x00012CE0 - 0x00012CEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012CE0: ;
    ecx = MEM32(0x1D3EF0);
    g_seh_ebp = ebp; sub_0008A9C0(); return; /* tail jmp 0x0008A9C0 */

}

/**
 * sub_00012CF0
 * Original: 0x00012CF0 - 0x00012D10 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00012CF8u); RECOMP_ABI_CALL(0x00012AA0u, sub_00012AA0); /* call 0x00012AA0 */

loc_00012CF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012D08; /* je: equal / zero */

loc_00012CFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00012D05u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00012D05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012D08: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00012D10(); return; /* fallthrough 0x00012D10 */

}

/**
 * sub_00012CFF
 * Original: 0x00012CFF - 0x00012D10 (17 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012CFF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012CFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00012D05u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00012D05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00012D10(); return; /* fallthrough 0x00012D10 */

}

/**
 * sub_00012D10
 * Original: 0x00012D10 - 0x00012D2D (29 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012D10(void)
{

loc_00012D10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x1D3EF0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012D20u); RECOMP_ABI_CALL(0x0008AA10u, sub_0008AA10); /* call 0x0008AA10 */

loc_00012D20: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012D2Au); RECOMP_ABI_CALL(0x00012C60u, sub_00012C60); /* call 0x00012C60 */

loc_00012D2A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012D30
 * Original: 0x00012D30 - 0x00012D42 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012D30(void)
{

loc_00012D30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00012D38u); RECOMP_ABI_CALL(0x00014AA0u, sub_00014AA0); /* call 0x00014AA0 */

loc_00012D38: ;
    MEM32(esi) = 0x1AE1A0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00012D50
 * Original: 0x00012D50 - 0x00012D58 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012D50(void)
{

loc_00012D50: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00012D60
 * Original: 0x00012D60 - 0x00012D89 (41 bytes, 11 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012D60: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    eax = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    PUSH32(esp, 0x80000000u);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE1B0);
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00012D81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012D7Bu); } /* indirect call */
    }

loc_00012D81: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012D90
 * Original: 0x00012D90 - 0x00012DB4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012D90: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AE1A0;
    PUSH32(esp, 0x00012D9Eu); RECOMP_ABI_CALL(0x00014AB0u, sub_00014AB0); /* call 0x00014AB0 */

loc_00012D9E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012DAE; /* je: equal / zero */

loc_00012DA5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00012DABu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00012DAB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012DAE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012DC0
 * Original: 0x00012DC0 - 0x00012E3F (127 bytes, 57 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012DC0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esi + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_00012E04; /* je: equal / zero */

loc_00012DD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00012DFC; /* jbe: below or equal (unsigned <=) */

loc_00012DD6: ;
    ebx = MEM32(esp + 0x10);
    /* nop */

loc_00012DE0: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + edi * 8 + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00012DEDu); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_00012DED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012E34; /* je: equal / zero */

loc_00012DF4: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012DE0; /* jb: below (unsigned <) */

loc_00012DFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00012E04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00012DFC; /* jbe: below or equal (unsigned <=) */

loc_00012E08: ;
    ebx = MEM32(esp + 0x10);
    /* nop */

loc_00012E10: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + edi * 8 + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00012E1Du); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_00012E1D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012E34; /* je: equal / zero */

loc_00012E24: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012E10; /* jb: below (unsigned <) */

loc_00012E2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00012E34: ;
    edx = MEM32(esi);
    eax = edx + edi * 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012E40
 * Original: 0x00012E40 - 0x00012EC7 (135 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012E40: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00012E56u); RECOMP_ABI_CALL(0x000E1310u, sub_000E1310); /* call 0x000E1310 */

loc_00012E56: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00012E60u); RECOMP_ABI_CALL(0x0006B200u, sub_0006B200); /* call 0x0006B200 */

loc_00012E60: ;
    eax = MEM32(0x1CA278);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00012E95; /* jbe: below or equal (unsigned <=) */

loc_00012E6E: ;
    edi = edi;

loc_00012E70: ;
    eax = MEM32(0x1CA274);
    ecx = MEM32(eax + esi * 8 + 4);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00012E84u); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_00012E84: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012E9F; /* je: equal / zero */

loc_00012E8B: ;
    eax = MEM32(0x1CA278);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012E70; /* jb: below (unsigned <) */

loc_00012E95: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012E97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00012E9F: ;
    eax = MEM32(0x1CA274);
    eax = eax + esi * 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012E95; /* je: equal / zero */

loc_00012EAB: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012E97; /* je: equal / zero */

loc_00012EB1: ;
    ecx = MEM32(edi + 4);
    edx = ecx;
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012ED0
 * Original: 0x00012ED0 - 0x00012F02 (50 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012ED0(void)
{

loc_00012ED0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CA274);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE308);
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x00012EF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012EF0u); } /* indirect call */
    }

loc_00012EF6: ;
    ecx = MEM32(esp + 4);
    MEM32(esi + 4) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012F10
 * Original: 0x00012F10 - 0x00012F41 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012F10: ;
    PUSH32(esp, esi);
    esi = MEM32(0x1CA280);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00012F31; /* jbe: below or equal (unsigned <=) */

loc_00012F1D: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x1CA27C);

loc_00012F27: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 8), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012F35; /* je: equal / zero */

loc_00012F2C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012F27; /* jb: below (unsigned <) */

loc_00012F31: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00012F35: ;
    eax = ecx + eax * 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012F31; /* je: equal / zero */

loc_00012F3C: ;
    eax = MEM32(eax + 4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00012F50
 * Original: 0x00012F50 - 0x00013055 (261 bytes, 97 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012F50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    if (TEST_Z(_fa, _fb)) goto loc_00012F74; /* je: equal / zero */

loc_00012F64: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012F66: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00012F6Eu); RECOMP_ABI_CALL(0x000138E0u, sub_000138E0); /* call 0x000138E0 */

loc_00012F6E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00012F66; /* jl: less (signed <) */

loc_00012F74: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012F8E; /* je: equal / zero */

loc_00012F79: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00012F80;

    /* nop */

loc_00012F80: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00012F88u); RECOMP_ABI_CALL(0x00013920u, sub_00013920); /* call 0x00013920 */

loc_00012F88: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00012F80; /* jl: less (signed <) */

loc_00012F8E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012FA3; /* je: equal / zero */

loc_00012F93: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012F95: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00012F9Du); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_00012F9D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x13 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00012F95; /* jl: less (signed <) */

loc_00012FA3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012FF8; /* je: equal / zero */

loc_00012FA8: ;
    eax = MEM32(0x1DA89C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012FD2; /* jne: not equal / not zero */

loc_00012FB1: ;
    PUSH32(esp, 0x35C);
    PUSH32(esp, 0x00012FBBu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00012FBB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012FCB; /* je: equal / zero */

loc_00012FC2: ;
    ecx = eax;
    PUSH32(esp, 0x00012FC9u); RECOMP_ABI_CALL(0x000B3FF0u, sub_000B3FF0); /* call 0x000B3FF0 */

loc_00012FC9: ;
    goto loc_00012FCD;

loc_00012FCB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012FCD: ;
    MEM32(0x1DA89C) = eax;

loc_00012FD2: ;
    ecx = MEM32(ebp + 0x20);
    eax = MEM32(eax + 0x1C);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00012FF0; /* je: equal / zero */

loc_00012FDD: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x00012FF0u); RECOMP_ABI_CALL(0x00014250u, sub_00014250); /* call 0x00014250 */

loc_00012FF0: ;
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, 0x00012FF8u); RECOMP_ABI_CALL(0x00013C20u, sub_00013C20); /* call 0x00013C20 */

loc_00012FF8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001300B; /* je: equal / zero */

loc_00012FFD: ;
    eax = 1;
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = eax;

loc_0001300B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00013023; /* je: equal / zero */

loc_00013010: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013012: ;
    ecx = MEM32(ebp + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001301Du); RECOMP_ABI_CALL(0x00013D70u, sub_00013D70); /* call 0x00013D70 */

loc_0001301D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00013012; /* jl: less (signed <) */

loc_00013023: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001304E; /* je: equal / zero */

loc_00013028: ;
    eax = MEM32(ebp + 0x20);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 4;
    edx = 5;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00013040: ;
    MEM32(eax + -8) = edx;
    MEM32(eax + -4) = esi;
    MEM32(eax) = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00013040; /* jne: not equal / not zero */

loc_0001304E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00013060
 * Original: 0x00013060 - 0x00013080 (32 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013060(void)
{

loc_00013060: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013072u); RECOMP_ABI_CALL(0x00012F50u, sub_00012F50); /* call 0x00012F50 */

loc_00013072: ;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(esi + 4);
    POP32(esp, edi);
    MEM32(ecx + 4) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013080
 * Original: 0x00013080 - 0x000130AF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013080: ;
    eax = MEM32(0x1D8A88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000130AE; /* jne: not equal / not zero */

loc_00013089: ;
    PUSH32(esp, 0x34C);
    PUSH32(esp, 0x00013093u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00013093: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000130A7; /* je: equal / zero */

loc_0001309A: ;
    ecx = eax;
    PUSH32(esp, 0x000130A1u); RECOMP_ABI_CALL(0x00082440u, sub_00082440); /* call 0x00082440 */

loc_000130A1: ;
    MEM32(0x1D8A88) = eax;
    esp += 4; return; /* ret */

loc_000130A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x1D8A88) = eax;

loc_000130AE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000130B0
 * Original: 0x000130B0 - 0x000130DF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000130B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000130B0: ;
    eax = MEM32(0x1DA954);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000130DE; /* jne: not equal / not zero */

loc_000130B9: ;
    PUSH32(esp, 0x548);
    PUSH32(esp, 0x000130C3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000130C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000130D7; /* je: equal / zero */

loc_000130CA: ;
    ecx = eax;
    PUSH32(esp, 0x000130D1u); RECOMP_ABI_CALL(0x000B6B10u, sub_000B6B10); /* call 0x000B6B10 */

loc_000130D1: ;
    MEM32(0x1DA954) = eax;
    esp += 4; return; /* ret */

loc_000130D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x1DA954) = eax;

loc_000130DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000130E0
 * Original: 0x000130E0 - 0x000130EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000130E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000130E0: ;
    MEM32(ecx) = 0x1AE31C;
    g_seh_ebp = ebp; sub_00014AB0(); return; /* tail jmp 0x00014AB0 */

}

/**
 * sub_000130F0
 * Original: 0x000130F0 - 0x00013140 (80 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000130F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000130F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 4;
    PUSH32(esp, 0x1AE32C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013101u); RECOMP_ABI_CALL(0x000E1310u, sub_000E1310); /* call 0x000E1310 */

loc_00013101: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x24) = 1;
    MEM32(esi + 0x28) = eax;
    MEM8(esi + 0x2C) = 0xE;
    MEM8(esi + 0x2D) = LO8(eax);
    MEM8(esi + 0x2E) = LO8(eax);
    MEM8(esi + 0x2F) = LO8(eax);
    MEM8(esi + 0x30) = LO8(eax);
    MEM8(esi + 0x31) = LO8(eax);
    MEM8(esi + 0x32) = LO8(eax);
    MEM8(esi + 0x33) = LO8(eax);
    MEM8(esi + 0x34) = LO8(eax);
    MEM8(esi + 0x35) = LO8(eax);
    MEM8(esi + 0x36) = LO8(eax);
    MEM8(esi + 0x37) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00013140(); return; /* fallthrough 0x00013140 */

}

/**
 * sub_00013140
 * Original: 0x00013140 - 0x000132AA (362 bytes, 126 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013140: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1AE438);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00013158u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013155u); } /* indirect call */
    }

loc_00013158: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0xFFFFFF80u);
    eax = edi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE424);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0001316Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013169u); } /* indirect call */
    }

loc_0001316F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE410);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0001318Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013186u); } /* indirect call */
    }

loc_0001318C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0xFFFFFF80u);
    eax = edi + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE404);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x000131A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001319Du); } /* indirect call */
    }

loc_000131A3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0xFFFFFF80u);
    eax = edi + 0x2D;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE3F0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x000131BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000131B4u); } /* indirect call */
    }

loc_000131BA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0xFFFFFF80u);
    eax = edi + 0x2E;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE3DC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x000131D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000131CBu); } /* indirect call */
    }

loc_000131D1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0xFFFFFF80u);
    eax = edi + 0x2F;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE3C8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x000131E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000131E2u); } /* indirect call */
    }

loc_000131E8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0xFFFFFF80u);
    eax = edi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE3B4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x000131FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000131F9u); } /* indirect call */
    }

loc_000131FF: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0xFFFFFF80u);
    eax = edi + 0x31;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE3A4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00013216u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013210u); } /* indirect call */
    }

loc_00013216: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0xFFFFFF80u);
    eax = edi + 0x32;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE398);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0001322Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013227u); } /* indirect call */
    }

loc_0001322D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0xFFFFFF80u);
    eax = edi + 0x33;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE388);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00013244u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001323Eu); } /* indirect call */
    }

loc_00013244: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0xFFFFFF80u);
    eax = edi + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE370);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0001325Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013255u); } /* indirect call */
    }

loc_0001325B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0xFFFFFF80u);
    eax = edi + 0x35;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE35C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00013272u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001326Cu); } /* indirect call */
    }

loc_00013272: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0xFFFFFF80u);
    eax = edi + 0x36;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE348);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00013289u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013283u); } /* indirect call */
    }

loc_00013289: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0xFFFFFF80u);
    _fb = (uint32_t)(0x37) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x37;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x1AE334);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x000132A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001329Au); } /* indirect call */
    }

loc_000132A0: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000132B0
 * Original: 0x000132B0 - 0x00013316 (102 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000132B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000132B0: ;
    _fa = (uint32_t)(MEM32(0x1CA3A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CA3A0), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000132F6; /* jne: not equal / not zero */

loc_000132B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000132C0;

    /* nop */

loc_000132C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000132D3; /* jl: less (signed <) */

loc_000132C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000132D6; /* jge: greater or equal (signed >=) */

loc_000132CA: ;
    edx = eax + 1;
    MEM32(ecx + eax * 4 + 0x14) = edx;
    goto loc_000132E5;

loc_000132D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */

loc_000132D6: ;
    if (CMP_NE(_fa, _fb)) goto loc_000132E1; /* jne: not equal / not zero */

loc_000132D8: ;
    MEM32(ecx + 0x30) = 4;
    goto loc_000132E5;

loc_000132E1: ;
    MEM32(ecx + eax * 4 + 0x14) = eax;

loc_000132E5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000132C0; /* jl: less (signed <) */

loc_000132EB: ;
    MEM32(ecx + 0xAC) = 0;
    esp += 4; return; /* ret */

loc_000132F6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x14;
    goto loc_00013300;

    /* nop */

loc_00013300: ;
    MEM32(edx) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00013300; /* jl: less (signed <) */

loc_0001330B: ;
    MEM32(ecx + 0xAC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00013320
 * Original: 0x00013320 - 0x00013594 (628 bytes, 210 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013320: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    ebp = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + 4;

loc_00013332: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, 0x1AE4C4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013342u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00013342: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00013351u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001334Eu); } /* indirect call */
    }

loc_00013351: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001337B; /* je: equal / zero */

loc_00013355: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1AE4BC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0001336Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013369u); } /* indirect call */
    }

loc_0001336F: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0001337Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013378u); } /* indirect call */
    }

loc_0001337B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00013332; /* jl: less (signed <) */

loc_00013384: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + 0x14;
    /* nop */

loc_00013390: ;
    PUSH32(esp, edi);
    edx = esp + 0x14;
    PUSH32(esp, 0x1AE4B4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000133A0u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_000133A0: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000133AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000133ACu); } /* indirect call */
    }

loc_000133AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000133D9; /* je: equal / zero */

loc_000133B3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1AE4BC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x000133CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000133C7u); } /* indirect call */
    }

loc_000133CD: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000133D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000133D6u); } /* indirect call */
    }

loc_000133D9: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00013390; /* jl: less (signed <) */

loc_000133E2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + 0x34;
    goto loc_000133F0;

    /* nop */

loc_000133F0: ;
    PUSH32(esp, edi);
    edx = esp + 0x14;
    PUSH32(esp, 0x1AE4A0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00013400u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00013400: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0001340Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001340Cu); } /* indirect call */
    }

loc_0001340F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013439; /* je: equal / zero */

loc_00013413: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1AE4BC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0001342Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013427u); } /* indirect call */
    }

loc_0001342D: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00013439u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013436u); } /* indirect call */
    }

loc_00013439: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000133F0; /* jl: less (signed <) */

loc_00013442: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + 0x48;
    goto loc_00013450;

    /* nop */

loc_00013450: ;
    PUSH32(esp, edi);
    edx = esp + 0x14;
    PUSH32(esp, 0x1AE494);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00013460u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00013460: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0001346Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001346Cu); } /* indirect call */
    }

loc_0001346F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013499; /* je: equal / zero */

loc_00013473: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1AE48C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0001348Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013487u); } /* indirect call */
    }

loc_0001348D: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00013499u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013496u); } /* indirect call */
    }

loc_00013499: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00013450; /* jl: less (signed <) */

loc_000134A2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = ebp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE480);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x000134BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000134B9u); } /* indirect call */
    }

loc_000134BF: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = ebp + 0x84;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE474);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x000134DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000134D9u); } /* indirect call */
    }

loc_000134DF: ;
    ecx = MEM32(ebp + 0x88);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = ecx;
    PUSH32(esp, 0x1AE464);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00013501u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000134FBu); } /* indirect call */
    }

loc_00013501: ;
    ecx = MEM32(esp + 0x34);
    MEM32(ebp + 0x88) = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + 0x9C;

loc_00013513: ;
    PUSH32(esp, ebx);
    edx = esp + 0x14;
    PUSH32(esp, 0x1ADFA8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00013523u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00013523: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00013532u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001352Fu); } /* indirect call */
    }

loc_00013532: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013576; /* je: equal / zero */

loc_00013536: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE45C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00013553u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001354Du); } /* indirect call */
    }

loc_00013553: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1AE450);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0001356Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013567u); } /* indirect call */
    }

loc_0001356D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00013576u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013573u); } /* indirect call */
    }

loc_00013576: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00013513; /* jl: less (signed <) */

loc_0001357F: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    MEM32(ebp + 0xAC) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000135A0
 * Original: 0x000135A0 - 0x00013622 (130 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000135A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000135A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(ecx + esi * 4 + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000135C0; /* jne: not equal / not zero */

loc_000135B3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000135C0; /* jne: not equal / not zero */

loc_000135B8: ;
    MEM32(ecx + 0x84) = MEM32(ecx + 0x84) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00013609;

loc_000135C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013609; /* jne: not equal / not zero */

loc_000135C5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013609; /* jne: not equal / not zero */

loc_000135C9: ;
    edi = MEM32(ecx + 0x84);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000135DB; /* jne: not equal / not zero */

loc_000135D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000135DB: ;
    _fa = (uint32_t)(MEM32(ecx + 0x88)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x88), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013602; /* jne: not equal / not zero */

loc_000135E3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x48;

loc_000135E8: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000135F1; /* jne: not equal / not zero */

loc_000135ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000135FC; /* jne: not equal / not zero */

loc_000135F1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000135E8; /* jl: less (signed <) */

loc_000135FA: ;
    goto loc_00013602;

loc_000135FC: ;
    MEM32(ecx + 0x88) = eax;

loc_00013602: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x84) = edi;

loc_00013609: ;
    MEM32(ecx + esi * 4 + 0x48) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0xAC) = 0;
    eax = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00013630
 * Original: 0x00013630 - 0x0001365F (47 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013630(void)
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

loc_00013630: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(ecx + edx * 4 + 4)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001364D; /* jp: parity */

loc_00013646: ;
    eax = 1;
    goto loc_0001364F;

loc_0001364D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001364F: ;
    MEM32(ecx + 0xAC) = MEM32(ecx + 0xAC) & eax;
    _fa = (uint32_t)(MEM32(ecx + 0xAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    MEM32(ecx + edx * 4 + 4) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00013660
 * Original: 0x00013660 - 0x0001368C (44 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013660: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ecx + eax * 4 + 0x34);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    edi = MEM32(ecx + 0xAC);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edi = edi & edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xAC) = edi;
    POP32(esp, edi);
    MEM32(ecx + eax * 4 + 0x34) = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00013690
 * Original: 0x00013690 - 0x000136C2 (50 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013690: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ecx + eax * 4 + 0x9C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    edi = MEM32(ecx + 0xAC);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edi = edi & edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xAC) = edi;
    POP32(esp, edi);
    MEM32(ecx + eax * 4 + 0x9C) = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000136D0
 * Original: 0x000136D0 - 0x000136FA (42 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000136D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000136D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x88);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    esi = MEM32(ecx + 0xAC);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(ecx + 0x88) = eax;
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xAC) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013700
 * Original: 0x00013700 - 0x0001373E (62 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00013700: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ecx + eax * 4 + 0x8C);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = MEM32(ecx + 0xAC);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _cf = 0; /* logical op clears CF */
    edi = edi & edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xAC) = edi;
    edx = MEM32(0x1D7420);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(ecx + eax * 4 + 0x8C) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00013740
 * Original: 0x00013740 - 0x00013752 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013740(void)
{

loc_00013740: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00013748u); RECOMP_ABI_CALL(0x00014AA0u, sub_00014AA0); /* call 0x00014AA0 */

loc_00013748: ;
    MEM32(esi) = 0x1AE4D0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013760
 * Original: 0x00013760 - 0x00013764 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013760(void)
{

loc_00013760: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00013770
 * Original: 0x00013770 - 0x00013774 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013770(void)
{

loc_00013770: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00013780
 * Original: 0x00013780 - 0x00013784 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013780(void)
{

loc_00013780: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00013790
 * Original: 0x00013790 - 0x000137A6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013790: ;
    edx = MEM32(0x1CA3A0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x1C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000137B0
 * Original: 0x000137B0 - 0x00013892 (226 bytes, 74 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000137B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000137B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x1AE568);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000137C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000137C1u); } /* indirect call */
    }

loc_000137C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013888; /* je: equal / zero */

loc_000137CC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE554);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x000137E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000137E3u); } /* indirect call */
    }

loc_000137E9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE53C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00013806u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013800u); } /* indirect call */
    }

loc_00013806: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE52C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00013823u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001381Du); } /* indirect call */
    }

loc_00013823: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE51C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0001383Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013834u); } /* indirect call */
    }

loc_0001383A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE50C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00013851u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001384Bu); } /* indirect call */
    }

loc_00013851: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = edi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE4F8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00013868u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013862u); } /* indirect call */
    }

loc_00013868: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x1AE4E0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0001387Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013879u); } /* indirect call */
    }

loc_0001387F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00013888u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013885u); } /* indirect call */
    }

loc_00013888: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000138A0
 * Original: 0x000138A0 - 0x000138B3 (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000138A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000138A0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000138C0
 * Original: 0x000138C0 - 0x000138D9 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000138C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000138C0: ;
    edx = ecx;
    ecx = MEM32(esp + 4);
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
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
 * sub_000138E0
 * Original: 0x000138E0 - 0x000138F3 (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000138E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000138E0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013900
 * Original: 0x00013900 - 0x00013919 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00013900: ;
    edx = ecx;
    ecx = MEM32(esp + 4);
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
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
 * sub_00013920
 * Original: 0x00013920 - 0x00013933 (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013920: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x14) = MEM32(eax + 0x14) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013940
 * Original: 0x00013940 - 0x00013959 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00013940: ;
    edx = ecx;
    ecx = MEM32(esp + 4);
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
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
 * sub_00013960
 * Original: 0x00013960 - 0x00013979 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00013960: ;
    edx = ecx;
    ecx = MEM32(esp + 4);
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(edx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
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
 * sub_00013980
 * Original: 0x00013980 - 0x000139A4 (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013980: ;
    edx = ecx;
    edx = MEM32(edx + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    /* nop */

loc_00013990: ;
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001399C; /* jne: not equal / not zero */

loc_0001399B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0001399C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00013990; /* jl: less (signed <) */

loc_000139A2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000139B0
 * Original: 0x000139B0 - 0x000139CE (30 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000139B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000139B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000139CA; /* jne: not equal / not zero */

loc_000139C5: ;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x1C) = eax;

loc_000139CA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000139D0
 * Original: 0x000139D0 - 0x000139EE (30 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000139D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000139D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000139EA; /* je: equal / zero */

loc_000139E5: ;
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = eax;

loc_000139EA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000139F0
 * Original: 0x000139F0 - 0x00013A23 (51 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000139F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000139F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000139F8u); RECOMP_ABI_CALL(0x00014AA0u, sub_00014AA0); /* call 0x00014AA0 */

loc_000139F8: ;
    MEM32(esi) = 0x1AE574;
    eax = esi + 0x20;
    edx = 4;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013A08: ;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00013A08; /* jne: not equal / not zero */

loc_00013A19: ;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013A30
 * Original: 0x00013A30 - 0x00013A3A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013A30(void)
{

loc_00013A30: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013A40
 * Original: 0x00013A40 - 0x00013A44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013A40(void)
{

loc_00013A40: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00013A50
 * Original: 0x00013A50 - 0x00013A86 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013A50: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(ecx + 4) = 0xE;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = 1;
    eax = ecx + 0x28;
    esi = 4;
    /* nop */

loc_00013A70: ;
    MEM32(eax + -8) = edx;
    MEM32(eax + -4) = edx;
    MEM32(eax) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00013A70; /* jne: not equal / not zero */

loc_00013A7E: ;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x18) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013A90
 * Original: 0x00013A90 - 0x00013B06 (118 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013A90(void)
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

loc_00013A90: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(ecx);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    MEM32(ecx + 0xC) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00013AAD; /* jp: parity */

loc_00013AA8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00013AAD: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013AFE; /* jne: not equal / not zero */

loc_00013AC4: ;
    eax = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00013ADD; /* jbe: below or equal (unsigned <=) */

loc_00013ACE: ;
    MEM32(ecx) = 5;
    MEM32(ecx + 4) = 0;
    goto loc_00013AEE;

loc_00013ADD: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    edx = 1;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x1C91D0)); /* fsub dword ptr [0x1c91d0] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_00013AEE: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00013AC4; /* je: equal / zero */

loc_00013AFE: ;
    MEM32(ecx + 8) = edx;
    eax = edx;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00013B10
 * Original: 0x00013B10 - 0x00013B77 (103 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013B10: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x00013B25u); RECOMP_ABI_CALL(0x000A3E70u, sub_000A3E70); /* call 0x000A3E70 */

loc_00013B25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0xC); PUSH32(esp, 0x00013B2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013B2Bu); } /* indirect call */
    }

loc_00013B2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013B6C; /* je: equal / zero */

loc_00013B32: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1AE590);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00013B46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013B40u); } /* indirect call */
    }

loc_00013B46: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x1AE584);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00013B63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013B5Du); } /* indirect call */
    }

loc_00013B63: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00013B6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013B69u); } /* indirect call */
    }

loc_00013B6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00013B80
 * Original: 0x00013B80 - 0x00013BD7 (87 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013B80: ;
    eax = MEM32(0x1DA89C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 1;
    PUSH32(esp, edi);
    edi = ecx;
    esi = ebx;

loc_00013B91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013BB6; /* jne: not equal / not zero */

loc_00013B95: ;
    PUSH32(esp, 0x35C);
    PUSH32(esp, 0x00013B9Fu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00013B9F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013BAF; /* je: equal / zero */

loc_00013BA6: ;
    ecx = eax;
    PUSH32(esp, 0x00013BADu); RECOMP_ABI_CALL(0x000B3FF0u, sub_000B3FF0); /* call 0x000B3FF0 */

loc_00013BAD: ;
    goto loc_00013BB1;

loc_00013BAF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013BB1: ;
    MEM32(0x1DA89C) = eax;

loc_00013BB6: ;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + esi * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + esi * 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00013BC0; /* jb: below (unsigned <) */

loc_00013BBE: ;
    ebx = esi;

loc_00013BC0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00013B91; /* jbe: below or equal (unsigned <=) */

loc_00013BC6: ;
    ecx = MEM32(edi + 0xC);
    MEM32(edi + 0xC) = ebx;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00013BE0
 * Original: 0x00013BE0 - 0x00013BED (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013BE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013BE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00013BE9u); RECOMP_ABI_CALL(0x000A3D60u, sub_000A3D60); /* call 0x000A3D60 */

loc_00013BE9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013BF0
 * Original: 0x00013BF0 - 0x00013C19 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013BF0: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013C02; /* jne: not equal / not zero */

loc_00013BF7: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013C02; /* jne: not equal / not zero */

loc_00013BFE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00013C07;

loc_00013C02: ;
    eax = 1;

loc_00013C07: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 4;
    /* nop */

loc_00013C10: ;
    eax = eax | MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00013C10; /* jne: not equal / not zero */

loc_00013C18: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013C20
 * Original: 0x00013C20 - 0x00013C39 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013C20: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x14) = edx;
    eax = ecx + 0x28;
    ecx = 4;

loc_00013C30: ;
    MEM32(eax) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00013C30; /* jne: not equal / not zero */

loc_00013C38: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013C40
 * Original: 0x00013C40 - 0x00013C52 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013C40(void)
{

loc_00013C40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00013C48u); RECOMP_ABI_CALL(0x00014AA0u, sub_00014AA0); /* call 0x00014AA0 */

loc_00013C48: ;
    MEM32(esi) = 0x1AE598;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013C60
 * Original: 0x00013C60 - 0x00013C70 (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013C60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013C60: ;
    PUSH32(esp, edi);
    edi = ecx + 4;
    ecx = 0xC;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013C70
 * Original: 0x00013C70 - 0x00013CD4 (100 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013C70: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx + 4;
    /* nop */

loc_00013C80: ;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, 0x1AE5A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013C90u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00013C90: ;
    ecx = MEM32(edi);
    edx = MEM32(ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    MEM32(esp + 0x68) = ecx;
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00013CB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013CB1u); } /* indirect call */
    }

loc_00013CB7: ;
    edx = MEM32(esp + 0x60);
    MEM32(edi) = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00013C80; /* jl: less (signed <) */

loc_00013CC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013CE0
 * Original: 0x00013CE0 - 0x00013CEB (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013CE0(void)
{

loc_00013CE0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013CF0
 * Original: 0x00013CF0 - 0x00013D4C (92 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013CF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00013D00;

    /* nop */

loc_00013D00: ;
    eax = MEM32(0x1DA954);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013D2A; /* jne: not equal / not zero */

loc_00013D09: ;
    PUSH32(esp, 0x548);
    PUSH32(esp, 0x00013D13u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00013D13: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013D23; /* je: equal / zero */

loc_00013D1A: ;
    ecx = eax;
    PUSH32(esp, 0x00013D21u); RECOMP_ABI_CALL(0x000B6B10u, sub_000B6B10); /* call 0x000B6B10 */

loc_00013D21: ;
    goto loc_00013D25;

loc_00013D23: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013D25: ;
    MEM32(0x1DA954) = eax;

loc_00013D2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x00013D33u); RECOMP_ABI_CALL(0x000B68A0u, sub_000B68A0); /* call 0x000B68A0 */

loc_00013D33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00013D44; /* jl: less (signed <) */

loc_00013D37: ;
    _fa = (uint32_t)(MEM32(ebx + eax * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + eax * 4 + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013D44; /* je: equal / zero */

loc_00013D3E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00013D00; /* jl: less (signed <) */

loc_00013D44: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013D50
 * Original: 0x00013D50 - 0x00013D6D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013D50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0xC;
    /* nop */

loc_00013D60: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013D66; /* jne: not equal / not zero */

loc_00013D65: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00013D66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00013D60; /* jne: not equal / not zero */

loc_00013D6C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013D70
 * Original: 0x00013D70 - 0x00013D99 (41 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013D70: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + edx * 4 + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00013D8C; /* jg: greater (signed >) */

loc_00013D81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013D8C; /* je: equal / zero */

loc_00013D86: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00013D8C: ;
    MEM32(ecx + edx * 4 + 4) = esi;
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00013DA0
 * Original: 0x00013DA0 - 0x00013DF1 (81 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013DA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00013DA8u); RECOMP_ABI_CALL(0x00014AA0u, sub_00014AA0); /* call 0x00014AA0 */

loc_00013DA8: ;
    eax = esi + 4;
    PUSH32(esp, 0x1AE32C);
    PUSH32(esp, eax);
    MEM32(esi) = 0x1AE31C;
    PUSH32(esp, 0x00013DBCu); RECOMP_ABI_CALL(0x000E1310u, sub_000E1310); /* call 0x000E1310 */

loc_00013DBC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x28) = eax;
    MEM8(esi + 0x2D) = LO8(eax);
    MEM8(esi + 0x2E) = LO8(eax);
    MEM8(esi + 0x2F) = LO8(eax);
    MEM8(esi + 0x30) = LO8(eax);
    MEM8(esi + 0x31) = LO8(eax);
    MEM8(esi + 0x32) = LO8(eax);
    MEM8(esi + 0x33) = LO8(eax);
    MEM8(esi + 0x34) = LO8(eax);
    MEM8(esi + 0x35) = LO8(eax);
    MEM8(esi + 0x36) = LO8(eax);
    MEM8(esi + 0x37) = LO8(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x24) = 1;
    MEM8(esi + 0x2C) = 0xE;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013E00
 * Original: 0x00013E00 - 0x00013E24 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013E00: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AE31C;
    PUSH32(esp, 0x00013E0Eu); RECOMP_ABI_CALL(0x00014AB0u, sub_00014AB0); /* call 0x00014AB0 */

loc_00013E0E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00013E1E; /* je: equal / zero */

loc_00013E15: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00013E1Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00013E1B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00013E1E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013E30
 * Original: 0x00013E30 - 0x00013E54 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013E30: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AE440;
    PUSH32(esp, 0x00013E3Eu); RECOMP_ABI_CALL(0x00014AB0u, sub_00014AB0); /* call 0x00014AB0 */

loc_00013E3E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00013E4E; /* je: equal / zero */

loc_00013E45: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00013E4Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00013E4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00013E4E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013E60
 * Original: 0x00013E60 - 0x00013F7A (282 bytes, 87 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013E60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0x3F800000;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, edi);
    edx = esi + 0x48;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x84) = ebp;
    MEM32(esi + 0x88) = 4;
    ecx = 0xF;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(0x1D8A88);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edx;

loc_00013EA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013EC5; /* jne: not equal / not zero */

loc_00013EA4: ;
    PUSH32(esp, 0x34C);
    PUSH32(esp, 0x00013EAEu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00013EAE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013EBE; /* je: equal / zero */

loc_00013EB5: ;
    ecx = eax;
    PUSH32(esp, 0x00013EBCu); RECOMP_ABI_CALL(0x00082440u, sub_00082440); /* call 0x00082440 */

loc_00013EBC: ;
    goto loc_00013EC0;

loc_00013EBE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013EC0: ;
    MEM32(0x1D8A88) = eax;

loc_00013EC5: ;
    _fa = (uint32_t)(MEM32(edi + eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax + 8), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013F11; /* je: equal / zero */

loc_00013ECB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013EF0; /* jne: not equal / not zero */

loc_00013ECF: ;
    PUSH32(esp, 0x34C);
    PUSH32(esp, 0x00013ED9u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00013ED9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013EE9; /* je: equal / zero */

loc_00013EE0: ;
    ecx = eax;
    PUSH32(esp, 0x00013EE7u); RECOMP_ABI_CALL(0x00082440u, sub_00082440); /* call 0x00082440 */

loc_00013EE7: ;
    goto loc_00013EEB;

loc_00013EE9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013EEB: ;
    MEM32(0x1D8A88) = eax;

loc_00013EF0: ;
    _fa = (uint32_t)(MEM32(edi + eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax + 4), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013F11; /* je: equal / zero */

loc_00013EF6: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013F00; /* jne: not equal / not zero */

loc_00013EFA: ;
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00013F00: ;
    MEM32(ebx) = 1;
    MEM32(esi + 0xAC) = ebp;
    eax = MEM32(0x1D8A88);

loc_00013F11: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x38;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x348) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x348 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00013EA0; /* jl: less (signed <) */

loc_00013F1F: ;
    eax = esi + 0x9C;
    ecx = 4;
    /* nop */

loc_00013F30: ;
    edx = MEM32(0x1D7420);
    MEM32(eax + -16) = edx;
    MEM32(eax) = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00013F30; /* jne: not equal / not zero */

loc_00013F41: ;
    ecx = esi;
    PUSH32(esp, 0x00013F48u); RECOMP_ABI_CALL(0x000132B0u, sub_000132B0); /* call 0x000132B0 */

loc_00013F48: ;
    MEM32(esi + 0x44) = 0xFFFFFFFFu;
    MEM32(esi + 0xAC) = ebp;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013F57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013F65; /* jne: not equal / not zero */

loc_00013F5C: ;
    MEM32(esi + 0x3C) = 1;
    goto loc_00013F69;

loc_00013F65: ;
    MEM32(esi + eax * 4 + 0x34) = ebp;

loc_00013F69: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00013F57; /* jl: less (signed <) */

loc_00013F6F: ;
    POP32(esp, edi);
    MEM32(esi + 0xAC) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00013F80
 * Original: 0x00013F80 - 0x00013FBA (58 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013F80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00013F80: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 4 + 0x14);
    PUSH32(esp, edi);
    _fb = (uint32_t)(MEM32(ecx + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(MEM32(ecx + edx * 4 + 0x14)));
    esi = esi - MEM32(ecx + edx * 4 + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(ecx + 0xAC);
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    edi = edi & esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xAC) = edi;
    edi = MEM32(ecx + edx * 4 + 0x14);
    esi = MEM32(ecx + eax * 4 + 0x14);
    MEM32(ecx + eax * 4 + 0x14) = edi;
    POP32(esp, edi);
    MEM32(ecx + edx * 4 + 0x14) = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00013FC0
 * Original: 0x00013FC0 - 0x0001400B (75 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013FC0: ;
    eax = ecx;
    ecx = MEM32(eax + 0x44);
    PUSH32(esp, ebp);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(eax + 0x44) = ecx;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x1D3F08);
    edx = MEM32(ecx + 0x18);
    edx = MEM32(edx + 0x1C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00013FE0: ;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013FEC; /* jne: not equal / not zero */

loc_00013FEB: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00013FEC: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00013FE0; /* jl: less (signed <) */

loc_00013FF2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 0xAC) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0001400A; /* jne: not equal / not zero */

loc_00014003: ;
    MEM32(eax + 0x44) = 0;

loc_0001400A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014010
 * Original: 0x00014010 - 0x00014034 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014010: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AE4D0;
    PUSH32(esp, 0x0001401Eu); RECOMP_ABI_CALL(0x00014AB0u, sub_00014AB0); /* call 0x00014AB0 */

loc_0001401E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001402E; /* je: equal / zero */

loc_00014025: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001402Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001402B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001402E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014040
 * Original: 0x00014040 - 0x00014186 (326 bytes, 119 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014040: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 4) = ebp;
    MEM32(edi + 8) = ebp;
    MEM32(edi + 0xC) = ebp;
    MEM32(edi + 0x10) = ebp;
    MEM32(edi + 0x18) = ebp;
    MEM32(edi + 0x14) = ebp;
    _fa = (uint32_t)(MEM32(0x1CA3A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CA3A0), 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + 0x1C) = eax;
    eax = MEM32(0x1D9BA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014097; /* jne: not equal / not zero */

loc_00014076: ;
    PUSH32(esp, 0x33F8);
    PUSH32(esp, 0x00014080u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00014080: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014090; /* je: equal / zero */

loc_00014087: ;
    ecx = eax;
    PUSH32(esp, 0x0001408Eu); RECOMP_ABI_CALL(0x00095660u, sub_00095660); /* call 0x00095660 */

loc_0001408E: ;
    goto loc_00014092;

loc_00014090: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00014092: ;
    MEM32(0x1D9BA8) = eax;

loc_00014097: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_000140A0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000140B3; /* je: equal / zero */

loc_000140A4: ;
    esi = MEM32(edi + 0x10);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x10) = esi;

loc_000140B3: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2BC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2BC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x13 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000140A0; /* jb: below (unsigned <) */

loc_000140BE: ;
    eax = MEM32(0x1DA114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000140E8; /* jne: not equal / not zero */

loc_000140C7: ;
    PUSH32(esp, 0x968);
    PUSH32(esp, 0x000140D1u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000140D1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000140E1; /* je: equal / zero */

loc_000140D8: ;
    ecx = eax;
    PUSH32(esp, 0x000140DFu); RECOMP_ABI_CALL(0x000A41D0u, sub_000A41D0); /* call 0x000A41D0 */

loc_000140DF: ;
    goto loc_000140E3;

loc_000140E1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000140E3: ;
    MEM32(0x1DA114) = eax;

loc_000140E8: ;
    ebx = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000140F0: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x000140F8u); RECOMP_ABI_CALL(0x000A3EA0u, sub_000A3EA0); /* call 0x000A3EA0 */

loc_000140F8: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014103u); RECOMP_ABI_CALL(0x000A43A0u, sub_000A43A0); /* call 0x000A43A0 */

loc_00014103: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001411B; /* je: equal / zero */

loc_0001410A: ;
    eax = MEM32(edi + 0x18);
    edx = 1;
    ecx = esi;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x18) = eax;

loc_0001411B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x18 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000140F0; /* jb: below (unsigned <) */

loc_00014121: ;
    eax = MEM32(0x1DA128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001414B; /* jne: not equal / not zero */

loc_0001412A: ;
    PUSH32(esp, 0x312C);
    PUSH32(esp, 0x00014134u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00014134: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014144; /* je: equal / zero */

loc_0001413B: ;
    ecx = eax;
    PUSH32(esp, 0x00014142u); RECOMP_ABI_CALL(0x000A4AA0u, sub_000A4AA0); /* call 0x000A4AA0 */

loc_00014142: ;
    goto loc_00014146;

loc_00014144: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00014146: ;
    MEM32(0x1DA128) = eax;

loc_0001414B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax + 0xC0;

loc_00014153: ;
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001415Du); RECOMP_ABI_CALL(0x000A43A0u, sub_000A43A0); /* call 0x000A43A0 */

loc_0001415D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014175; /* je: equal / zero */

loc_00014164: ;
    eax = MEM32(edi + 0x14);
    edx = 1;
    ecx = esi;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x14) = eax;

loc_00014175: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x478) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x478;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014153; /* jb: below (unsigned <) */

loc_00014181: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00014185
 * Original: 0x00014185 - 0x00014250 (203 bytes, 92 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014185(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014185: ;
    esp += 4; return; /* ret */

    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000141AE; /* je: equal / zero */

loc_000141A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000141ABu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000141AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000141AE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + 0x20;

loc_000141E7: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x000141F0u); RECOMP_ABI_CALL(0x00013B10u, sub_00013B10); /* call 0x00013B10 */

loc_000141F0: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000141E7; /* jl: less (signed <) */

loc_000141F9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE5D8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00014210u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001420Au); } /* indirect call */
    }

loc_00014210: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE5CC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00014227u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014221u); } /* indirect call */
    }

loc_00014227: ;
    edx = MEM32(esi);
    PUSH32(esp, 0x1CE4B4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1AE5C0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0001423Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014239u); } /* indirect call */
    }

loc_0001423F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00014250(); return; /* fallthrough 0x00014250 */

}

/**
 * sub_00014190
 * Original: 0x00014190 - 0x000141B4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014190: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AE574;
    PUSH32(esp, 0x0001419Eu); RECOMP_ABI_CALL(0x00014AB0u, sub_00014AB0); /* call 0x00014AB0 */

loc_0001419E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000141AE; /* je: equal / zero */

loc_000141A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000141ABu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000141AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000141AE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000141C0
 * Original: 0x000141C0 - 0x0001424B (139 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000141C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000141C0: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x1CE1FC);
    ecx = ebp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1AE5E8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x000141E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000141DCu); } /* indirect call */
    }

loc_000141E2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + 0x20;

loc_000141E7: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x000141F0u); RECOMP_ABI_CALL(0x00013B10u, sub_00013B10); /* call 0x00013B10 */

loc_000141F0: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000141E7; /* jl: less (signed <) */

loc_000141F9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE5D8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00014210u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001420Au); } /* indirect call */
    }

loc_00014210: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE5CC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00014227u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014221u); } /* indirect call */
    }

loc_00014227: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x1AE5C0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0001423Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014239u); } /* indirect call */
    }

loc_0001423F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014250
 * Original: 0x00014250 - 0x0001429A (74 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014250: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001425Eu); RECOMP_ABI_CALL(0x000A3D60u, sub_000A3D60); /* call 0x000A3D60 */

loc_0001425E: ;
    ecx = MEM32(esi + 8);
    ebx = eax;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ecx;
    ecx = MEM32(edi);
    MEM32(esi + 0x1C) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0001427Bu); RECOMP_ABI_CALL(0x00013B80u, sub_00013B80); /* call 0x00013B80 */

loc_0001427B: ;
    PUSH32(esp, edi);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x00014284u); RECOMP_ABI_CALL(0x000A3D60u, sub_000A3D60); /* call 0x000A3D60 */

loc_00014284: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    eax = MEM32(esi + 0x14);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    MEM32(esi + 0x18) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000142A0
 * Original: 0x000142A0 - 0x000143D2 (306 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000142A0(void)
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

loc_000142A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(0x1DA89C);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0x3F800000;
    edi = 1;
    edi = edi;

loc_000142C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000142E8; /* jne: not equal / not zero */

loc_000142C4: ;
    PUSH32(esp, 0x35C);
    PUSH32(esp, 0x000142CEu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000142CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000142E0; /* je: equal / zero */

loc_000142D5: ;
    ecx = eax;
    PUSH32(esp, 0x000142DCu); RECOMP_ABI_CALL(0x000B3FF0u, sub_000B3FF0); /* call 0x000B3FF0 */

loc_000142DC: ;
    esi = eax;
    goto loc_000142E2;

loc_000142E0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000142E2: ;
    MEM32(0x1DA89C) = esi;

loc_000142E8: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + edi * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + edi * 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014306; /* jb: below (unsigned <) */

loc_000142F0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x14) = edi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00014302; /* jge: greater or equal (signed >=) */

loc_000142FC: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D8)); /* fadd dword ptr [0x1c91d8] */

loc_00014302: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_00014306: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000142C0; /* jbe: below or equal (unsigned <=) */

loc_0001430C: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, 0x00014315u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00014315: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014328; /* jne: not equal / not zero */

loc_0001431C: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00014328: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014350; /* jne: not equal / not zero */

loc_0001432C: ;
    PUSH32(esp, 0x35C);
    PUSH32(esp, 0x00014336u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00014336: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014348; /* je: equal / zero */

loc_0001433D: ;
    ecx = eax;
    PUSH32(esp, 0x00014344u); RECOMP_ABI_CALL(0x000B3FF0u, sub_000B3FF0); /* call 0x000B3FF0 */

loc_00014344: ;
    esi = eax;
    goto loc_0001434A;

loc_00014348: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001434A: ;
    MEM32(0x1DA89C) = esi;

loc_00014350: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = MEM32(esi + ebx * 4);
    MEM32(esp + 0x14) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0001437F; /* jne: not equal / not zero */

loc_0001435B: ;
    PUSH32(esp, 0x35C);
    PUSH32(esp, 0x00014365u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00014365: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014377; /* je: equal / zero */

loc_0001436C: ;
    ecx = eax;
    PUSH32(esp, 0x00014373u); RECOMP_ABI_CALL(0x000B3FF0u, sub_000B3FF0); /* call 0x000B3FF0 */

loc_00014373: ;
    esi = eax;
    goto loc_00014379;

loc_00014377: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00014379: ;
    MEM32(0x1DA89C) = esi;

loc_0001437F: ;
    fp_push((double)SMEM32(ebp)); /* fild */
    ecx = MEM32(esi + ebx * 4 + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() - (double)SMEM32(esp + 0x14)); /* fisub dword ptr [esp + 0x14] */
    MEM32(esp + 0x14) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x14)); /* fidiv dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000143B5; /* jp: parity */

loc_000143A5: ;
    POP32(esp, edi);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1C91D0)); /* fld float */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000143B5: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AE5F4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1ae5f4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000143CA; /* jne: not equal / not zero */

loc_000143C2: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1AE5F4)); /* fld float */

loc_000143CA: ;
    POP32(esp, edi);
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
 * sub_000143E0
 * Original: 0x000143E0 - 0x00014404 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000143E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000143E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AE598;
    PUSH32(esp, 0x000143EEu); RECOMP_ABI_CALL(0x00014AB0u, sub_00014AB0); /* call 0x00014AB0 */

loc_000143EE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000143FE; /* je: equal / zero */

loc_000143F5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000143FBu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000143FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000143FE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014410
 * Original: 0x00014410 - 0x00014429 (25 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014410(void)
{

loc_00014410: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00014418u); RECOMP_ABI_CALL(0x00014AA0u, sub_00014AA0); /* call 0x00014AA0 */

loc_00014418: ;
    ecx = esi;
    MEM32(esi) = 0x1AE440;
    PUSH32(esp, 0x00014425u); RECOMP_ABI_CALL(0x00013E60u, sub_00013E60); /* call 0x00013E60 */

loc_00014425: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014430
 * Original: 0x00014430 - 0x00014446 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014430: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 8);
    ecx = esp;
    PUSH32(esp, ecx);
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x00014442u); RECOMP_ABI_CALL(0x000142A0u, sub_000142A0); /* call 0x000142A0 */

loc_00014442: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00014450
 * Original: 0x00014450 - 0x000144A9 (89 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014450: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x1AE32C);
    ecx = esi + 8;
    PUSH32(esp, 0x00014460u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_00014460: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00014468u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014465u); } /* indirect call */
    }

loc_00014468: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00014470u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001446Du); } /* indirect call */
    }

loc_00014470: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00014478u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014475u); } /* indirect call */
    }

loc_00014478: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00014480u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001447Du); } /* indirect call */
    }

loc_00014480: ;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00014488u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014485u); } /* indirect call */
    }

loc_00014488: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00014490u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001448Du); } /* indirect call */
    }

loc_00014490: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00014498u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014495u); } /* indirect call */
    }

loc_00014498: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x38) = 1;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000144A8
 * Original: 0x000144A8 - 0x000144B0 (8 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000144A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000144A8: ;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_000144B0(); return; /* fallthrough 0x000144B0 */

}

/**
 * sub_000144B0
 * Original: 0x000144B0 - 0x000144B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000144B0(void)
{

loc_000144B0: ;
    MEM32(ecx + 0x38) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000144C0
 * Original: 0x000144C0 - 0x00014671 (433 bytes, 157 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000144C0(void)
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

loc_000144C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 3 (8-bit) */
    PUSH32(esp, edi);
    PUSH32(esp, 0x7F7FFFFF);
    edi = ecx;
    ecx = esi;
    PUSH32(esp, 0xFF7FFFFFu);
    if (TEST_Z(_fa, _fb)) goto loc_0001463B; /* je: equal / zero */

loc_000144DE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CA298);
    PUSH32(esp, 0x1AE638);
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x000144F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000144EAu); } /* indirect call */
    }

loc_000144F0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1AE32C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000144FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000144F9u); } /* indirect call */
    }

loc_000144FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014519; /* je: equal / zero */

loc_00014500: ;
    eax = MEM32(esi);
    ecx = edi + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1AE630);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00014510u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001450Du); } /* indirect call */
    }

loc_00014510: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00014519u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014516u); } /* indirect call */
    }

loc_00014519: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1AE160);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00014525u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014522u); } /* indirect call */
    }

loc_00014525: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001453B; /* je: equal / zero */

loc_00014529: ;
    ecx = MEM32(edi + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00014532u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001452Fu); } /* indirect call */
    }

loc_00014532: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0001453Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014538u); } /* indirect call */
    }

loc_0001453B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1AE568);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00014547u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014544u); } /* indirect call */
    }

loc_00014547: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001455D; /* je: equal / zero */

loc_0001454B: ;
    ecx = MEM32(edi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00014554u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014551u); } /* indirect call */
    }

loc_00014554: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0001455Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001455Au); } /* indirect call */
    }

loc_0001455D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1AE624);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00014569u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014566u); } /* indirect call */
    }

loc_00014569: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001457F; /* je: equal / zero */

loc_0001456D: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00014576u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014573u); } /* indirect call */
    }

loc_00014576: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0001457Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001457Cu); } /* indirect call */
    }

loc_0001457F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1AE130);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0001458Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014588u); } /* indirect call */
    }

loc_0001458B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000145A1; /* je: equal / zero */

loc_0001458F: ;
    ecx = MEM32(edi + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00014598u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014595u); } /* indirect call */
    }

loc_00014598: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000145A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001459Eu); } /* indirect call */
    }

loc_000145A1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1ADFD4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000145ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000145AAu); } /* indirect call */
    }

loc_000145AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000145C3; /* je: equal / zero */

loc_000145B1: ;
    ecx = MEM32(edi + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000145BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000145B7u); } /* indirect call */
    }

loc_000145BA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000145C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000145C0u); } /* indirect call */
    }

loc_000145C3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1AE614);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000145CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000145CCu); } /* indirect call */
    }

loc_000145CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000145E5; /* je: equal / zero */

loc_000145D3: ;
    ecx = MEM32(edi + 0x2C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000145DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000145D9u); } /* indirect call */
    }

loc_000145DC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000145E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000145E2u); } /* indirect call */
    }

loc_000145E5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1AE60C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000145F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000145EEu); } /* indirect call */
    }

loc_000145F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014607; /* je: equal / zero */

loc_000145F5: ;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000145FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000145FBu); } /* indirect call */
    }

loc_000145FE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00014607u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014604u); } /* indirect call */
    }

loc_00014607: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE604);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00014624u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001461Eu); } /* indirect call */
    }

loc_00014624: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00014631; /* jne: not equal / not zero */

loc_0001462A: ;
    MEM32(edi + 0x38) = 0;

loc_00014631: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0001463B: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE638);
    MEM32(esp + 0x1C) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00014655u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001464Fu); } /* indirect call */
    }

loc_00014655: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1CA298)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1ca298] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000144F0; /* jnp: not parity */

loc_0001466A: ;
    POP32(esp, edi);
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
 * sub_00014680
 * Original: 0x00014680 - 0x000146D8 (88 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014680: ;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000146D0; /* je: equal / zero */

loc_00014690: ;
    PUSH32(esp, 0x00014695u); RECOMP_ABI_CALL(0x000E1070u, sub_000E1070); /* call 0x000E1070 */

loc_00014695: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x31);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000146A9u); RECOMP_ABI_CALL(0x000E2F60u, sub_000E2F60); /* call 0x000E2F60 */

loc_000146A9: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000146B2u); RECOMP_ABI_CALL(0x000E30A0u, sub_000E30A0); /* call 0x000E30A0 */

loc_000146B2: ;
    edx = MEM32(esi);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000146BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000146BBu); } /* indirect call */
    }

loc_000146BE: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000146C7u); RECOMP_ABI_CALL(0x000E1DD0u, sub_000E1DD0); /* call 0x000E1DD0 */

loc_000146C7: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000146D0u); RECOMP_ABI_CALL(0x000E2B40u, sub_000E2B40); /* call 0x000E2B40 */

loc_000146D0: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000146E0
 * Original: 0x000146E0 - 0x000146E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000146E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000146E0: ;
    g_seh_ebp = ebp; sub_00014680(); return; /* tail jmp 0x00014680 */

}

/**
 * sub_000146F0
 * Original: 0x000146F0 - 0x0001474C (92 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000146F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000146F0: ;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014744; /* je: equal / zero */

loc_00014700: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00014705u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014702u); } /* indirect call */
    }

loc_00014705: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014744; /* je: equal / zero */

loc_00014709: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x34);
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0001471Du); RECOMP_ABI_CALL(0x000E2F60u, sub_000E2F60); /* call 0x000E2F60 */

loc_0001471D: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00014726u); RECOMP_ABI_CALL(0x000E30A0u, sub_000E30A0); /* call 0x000E30A0 */

loc_00014726: ;
    edx = MEM32(esi);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00014732u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001472Fu); } /* indirect call */
    }

loc_00014732: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0001473Bu); RECOMP_ABI_CALL(0x000E1DD0u, sub_000E1DD0); /* call 0x000E1DD0 */

loc_0001473B: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00014744u); RECOMP_ABI_CALL(0x000E2B40u, sub_000E2B40); /* call 0x000E2B40 */

loc_00014744: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00014750
 * Original: 0x00014750 - 0x0001476E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014750: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00014758u); RECOMP_ABI_CALL(0x00014AB0u, sub_00014AB0); /* call 0x00014AB0 */

loc_00014758: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014768; /* je: equal / zero */

loc_0001475F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00014765u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00014765: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014768: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014770
 * Original: 0x00014770 - 0x000148A3 (307 bytes, 114 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014770: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00014781u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001477Eu); } /* indirect call */
    }

loc_00014781: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001478Eu); RECOMP_ABI_CALL(0x000E1310u, sub_000E1310); /* call 0x000E1310 */

loc_0001478E: ;
    eax = MEM32(edi + 0x20);
    SET_LO8(ecx, MEM8(eax + 4));
    MEM8(esi + 0x2C) = LO8(ecx);
    edx = MEM32(edi + 0x20);
    SET_LO8(eax, MEM8(edx + 0xC));
    MEM8(esi + 0x24) = LO8(eax);
    ecx = MEM32(edi + 0x20);
    edx = MEM32(ecx + 8);
    MEM32(esi + 0x28) = edx;
    eax = MEM32(edi + 0x20);
    SET_LO8(ecx, MEM8(eax + 0x20));
    MEM8(esi + 0x2D) = LO8(ecx);
    edx = MEM32(edi + 0x20);
    SET_LO8(eax, MEM8(edx + 0x50));
    MEM8(esi + 0x30) = LO8(eax);
    ecx = MEM32(edi + 0x20);
    SET_LO8(edx, MEM8(ecx + 0x40));
    MEM8(esi + 0x2F) = LO8(edx);
    eax = MEM32(edi + 0x20);
    SET_LO8(ecx, MEM8(eax + 0x30));
    MEM8(esi + 0x2E) = LO8(ecx);
    edx = MEM32(edi + 0x28);
    SET_LO8(eax, MEM8(edx + 4));
    MEM8(esi + 0x31) = LO8(eax);
    ecx = MEM32(edi + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000147E1u); RECOMP_ABI_CALL(0x00012040u, sub_00012040); /* call 0x00012040 */

loc_000147E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000147F3; /* je: equal / zero */

loc_000147E5: ;
    ecx = MEM32(edi + 0x24);
    SET_LO8(edx, MEM8(ecx + 0x308));
    MEM8(esi + 0x33) = LO8(edx);
    goto loc_000147F7;

loc_000147F3: ;
    MEM8(esi + 0x33) = 0;

loc_000147F7: ;
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, 0x000147FFu); RECOMP_ABI_CALL(0x00013780u, sub_00013780); /* call 0x00013780 */

loc_000147FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014809; /* je: equal / zero */

loc_00014803: ;
    MEM8(esi + 0x32) = 3;
    goto loc_0001482B;

loc_00014809: ;
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, 0x00014811u); RECOMP_ABI_CALL(0x00013770u, sub_00013770); /* call 0x00013770 */

loc_00014811: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001481B; /* je: equal / zero */

loc_00014815: ;
    MEM8(esi + 0x32) = 2;
    goto loc_0001482B;

loc_0001481B: ;
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, 0x00014823u); RECOMP_ABI_CALL(0x00013760u, sub_00013760); /* call 0x00013760 */

loc_00014823: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x32) = LO8(eax);

loc_0001482B: ;
    ecx = MEM32(edi + 0x2C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00014835u); RECOMP_ABI_CALL(0x00013CF0u, sub_00013CF0); /* call 0x00013CF0 */

loc_00014835: ;
    ecx = MEM32(edi + 0x2C);
    PUSH32(esp, 0);
    ebx = eax;
    PUSH32(esp, 0x00014841u); RECOMP_ABI_CALL(0x00013CF0u, sub_00013CF0); /* call 0x00013CF0 */

loc_00014841: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esi + 0x34) = LO8(ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x35) = LO8(ebx);
    MEM8(esi + 0x36) = LO8(ebx);
    MEM8(esi + 0x37) = LO8(ebx);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00014853: ;
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0001485Cu); RECOMP_ABI_CALL(0x000138C0u, sub_000138C0); /* call 0x000138C0 */

loc_0001485C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014863; /* je: equal / zero */

loc_00014860: ;
    MEM8(esi + 0x35) = MEM8(esi + 0x35) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x35)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00014863: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x13 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00014853; /* jl: less (signed <) */

loc_00014869: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00014870;

    /* nop */

loc_00014870: ;
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00014879u); RECOMP_ABI_CALL(0x00013940u, sub_00013940); /* call 0x00013940 */

loc_00014879: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014880; /* je: equal / zero */

loc_0001487D: ;
    MEM8(esi + 0x36) = MEM8(esi + 0x36) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x36)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00014880: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xB (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00014870; /* jl: less (signed <) */

loc_00014886: ;
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0001488Fu); RECOMP_ABI_CALL(0x00013900u, sub_00013900); /* call 0x00013900 */

loc_0001488F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014896; /* je: equal / zero */

loc_00014893: ;
    MEM8(esi + 0x37) = MEM8(esi + 0x37) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x37)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00014896: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00014886; /* jl: less (signed <) */

loc_0001489C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000148B0
 * Original: 0x000148B0 - 0x000148C5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000148B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000148B0: ;
    MEM32(ecx + 0xC) = 0;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000148C4; /* je: equal / zero */

loc_000148BD: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000148C3u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000148C3: ;
    POP32(esp, ecx);

loc_000148C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000148BE
 * Original: 0x000148BE - 0x000148C5 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000148BE(void)
{

loc_000148BE: ;
    PUSH32(esp, 0x000148C3u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000148C3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000148D0
 * Original: 0x000148D0 - 0x000149E8 (280 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000148D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000148D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000148D9u); RECOMP_ABI_CALL(0x00014AA0u, sub_00014AA0); /* call 0x00014AA0 */

loc_000148D9: ;
    ecx = esi + 8;
    MEM32(esi) = 0x1AE650;
    PUSH32(esp, 0x000148E7u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_000148E7: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    PUSH32(esp, 0xB0);
    MEM32(esi + 0x34) = ecx;
    PUSH32(esp, 0x000148FAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000148FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001490A; /* je: equal / zero */

loc_00014901: ;
    ecx = eax;
    PUSH32(esp, 0x00014908u); RECOMP_ABI_CALL(0x00014410u, sub_00014410); /* call 0x00014410 */

loc_00014908: ;
    goto loc_0001490C;

loc_0001490A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001490C: ;
    PUSH32(esp, 0x20);
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00014916u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00014916: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014926; /* je: equal / zero */

loc_0001491D: ;
    ecx = eax;
    PUSH32(esp, 0x00014924u); RECOMP_ABI_CALL(0x00013740u, sub_00013740); /* call 0x00013740 */

loc_00014924: ;
    goto loc_00014928;

loc_00014926: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00014928: ;
    PUSH32(esp, 0x60);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x00014932u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00014932: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014942; /* je: equal / zero */

loc_00014939: ;
    ecx = eax;
    PUSH32(esp, 0x00014940u); RECOMP_ABI_CALL(0x000139F0u, sub_000139F0); /* call 0x000139F0 */

loc_00014940: ;
    goto loc_00014944;

loc_00014942: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00014944: ;
    PUSH32(esp, 0x5FC);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x00014951u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00014951: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014961; /* je: equal / zero */

loc_00014958: ;
    ecx = eax;
    PUSH32(esp, 0x0001495Fu); RECOMP_ABI_CALL(0x00011A30u, sub_00011A30); /* call 0x00011A30 */

loc_0001495F: ;
    goto loc_00014963;

loc_00014961: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00014963: ;
    PUSH32(esp, 0x104);
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x00014970u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00014970: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014980; /* je: equal / zero */

loc_00014977: ;
    ecx = eax;
    PUSH32(esp, 0x0001497Eu); RECOMP_ABI_CALL(0x00011240u, sub_00011240); /* call 0x00011240 */

loc_0001497E: ;
    goto loc_00014982;

loc_00014980: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00014982: ;
    PUSH32(esp, 0x34);
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x0001498Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001498C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001499C; /* je: equal / zero */

loc_00014993: ;
    ecx = eax;
    PUSH32(esp, 0x0001499Au); RECOMP_ABI_CALL(0x00013C40u, sub_00013C40); /* call 0x00013C40 */

loc_0001499A: ;
    goto loc_0001499E;

loc_0001499C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001499E: ;
    PUSH32(esp, 8);
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, 0x000149A8u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000149A8: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000149C7; /* je: equal / zero */

loc_000149B1: ;
    ecx = edi;
    PUSH32(esp, 0x000149B8u); RECOMP_ABI_CALL(0x00014AA0u, sub_00014AA0); /* call 0x00014AA0 */

loc_000149B8: ;
    MEM32(edi) = 0x1AE640;
    MEM32(edi + 4) = 0;
    goto loc_000149C9;

loc_000149C7: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000149C9: ;
    MEM32(esi + 0x30) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x38) = 1;
    MEM32(esi + 0x3C) = 0;
    MEM32(esi + 4) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000149F0
 * Original: 0x000149F0 - 0x00014A73 (131 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000149F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000149F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x1AE650;
    if (CMP_EQ(_fa, _fb)) goto loc_00014A06; /* je: equal / zero */

loc_00014A00: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00014A06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014A04u); } /* indirect call */
    }

loc_00014A06: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014A13; /* je: equal / zero */

loc_00014A0D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00014A13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014A11u); } /* indirect call */
    }

loc_00014A13: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014A20; /* je: equal / zero */

loc_00014A1A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00014A20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014A1Eu); } /* indirect call */
    }

loc_00014A20: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014A2D; /* je: equal / zero */

loc_00014A27: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00014A2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014A2Bu); } /* indirect call */
    }

loc_00014A2D: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014A3A; /* je: equal / zero */

loc_00014A34: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00014A3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014A38u); } /* indirect call */
    }

loc_00014A3A: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014A47; /* je: equal / zero */

loc_00014A41: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00014A47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014A45u); } /* indirect call */
    }

loc_00014A47: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014A54; /* je: equal / zero */

loc_00014A4E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00014A54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014A52u); } /* indirect call */
    }

loc_00014A54: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00014A6B; /* je: equal / zero */

loc_00014A62: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014A68u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00014A68: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014A6B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00014AB0(); return; /* tail jmp 0x00014AB0 */

}

/**
 * sub_00014A80
 * Original: 0x00014A80 - 0x00014AA0 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014A80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00014A88u); RECOMP_ABI_CALL(0x000149F0u, sub_000149F0); /* call 0x000149F0 */

loc_00014A88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014A98; /* je: equal / zero */

loc_00014A8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00014A95u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00014A95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014A98: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00014AA0(); return; /* fallthrough 0x00014AA0 */

}

/**
 * sub_00014AA0
 * Original: 0x00014AA0 - 0x00014AA9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014AA0(void)
{

loc_00014AA0: ;
    eax = ecx;
    MEM32(eax) = 0x1AE668;
    esp += 4; return; /* ret */

}

/**
 * sub_00014AB0
 * Original: 0x00014AB0 - 0x00014AB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014AB0(void)
{

loc_00014AB0: ;
    MEM32(ecx) = 0x1AE668;
    esp += 4; return; /* ret */

}

/**
 * sub_00014AC0
 * Original: 0x00014AC0 - 0x00014ADF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014AC0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AE668;
    if (TEST_Z(_fa, _fb)) goto loc_00014AD9; /* je: equal / zero */

loc_00014AD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00014AD6u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00014AD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014AD9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014AE0
 * Original: 0x00014AE0 - 0x00014B6E (142 bytes, 56 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014AE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    ebx = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00014AF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014AF2u); } /* indirect call */
    }

loc_00014AF5: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014B66; /* je: equal / zero */

loc_00014AFB: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1AE68C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00014B15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014B0Fu); } /* indirect call */
    }

loc_00014B15: ;
    ecx = ebx + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    PUSH32(esp, 0x1AE630);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00014B27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014B24u); } /* indirect call */
    }

loc_00014B27: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F);
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFF80u);
    eax = ebx + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AE07C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00014B40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014B3Au); } /* indirect call */
    }

loc_00014B40: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0xFFFFFF80u);
    _fb = (uint32_t)(0x15) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x15;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1AE088);
    ecx = esi;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00014B59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014B53u); } /* indirect call */
    }

loc_00014B59: ;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00014B64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014B61u); } /* indirect call */
    }

loc_00014B64: ;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00014B66: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014B70
 * Original: 0x00014B70 - 0x00014C24 (180 bytes, 62 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014B70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    ebx = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00014B85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014B82u); } /* indirect call */
    }

loc_00014B85: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014C1C; /* je: equal / zero */

loc_00014B8F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1AE68C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00014BA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014BA3u); } /* indirect call */
    }

loc_00014BA9: ;
    ecx = ebx + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    PUSH32(esp, 0x1AE630);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00014BBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014BB8u); } /* indirect call */
    }

loc_00014BBB: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE1FC);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    PUSH32(esp, 0x1AE07C);
    ecx = esi;
    MEM32(esp + 0x1C) = edx;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x00014BDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014BD8u); } /* indirect call */
    }

loc_00014BDE: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x15);
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CE4B4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM8(ebx + 0x14) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, 0x1AE088);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x00014C08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014C02u); } /* indirect call */
    }

loc_00014C08: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(ebx + 0x15) = LO8(ecx);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00014C1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014C17u); } /* indirect call */
    }

loc_00014C1A: ;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00014C1C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014C30
 * Original: 0x00014C30 - 0x00014C5B (43 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014C30(void)
{

loc_00014C30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi + 4;
    MEM32(esi) = eax;
    PUSH32(esp, 0x00014C48u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_00014C48: ;
    SET_LO8(edx, MEM8(edi + 0x14));
    MEM8(esi + 0x14) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x15));
    MEM8(esi + 0x15) = LO8(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014C60
 * Original: 0x00014C60 - 0x00014CCC (108 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014C60: ;
    eax = MEM32(0x1D3F08);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx + 4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00014C77u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_00014C77: ;
    ecx = MEM32(esp + 0x48);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00014CC5; /* jbe: below or equal (unsigned <=) */

loc_00014C81: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x50);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00014C8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014C8Au); } /* indirect call */
    }

loc_00014C8D: ;
    esi = MEM32(esi + 0x40);
    MEM32(esp + 0x4C) = eax;
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(esp + 0x60) = 0;
    PUSH32(esp, 0x00014CB1u); RECOMP_ABI_CALL(0x000A3F30u, sub_000A3F30); /* call 0x000A3F30 */

loc_00014CB1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_00014CC5; /* jl: less (signed <) */

loc_00014CB9: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00014CC5u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_00014CC5: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014CD0
 * Original: 0x00014CD0 - 0x00014CF6 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014CD0: ;
    MEM32(ecx) = 0x1AE69C;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014CF5; /* je: equal / zero */

loc_00014CDD: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00014CEE; /* je: equal / zero */

loc_00014CE7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00014CEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014CEBu); } /* indirect call */
    }

loc_00014CED: ;
    esp += 4; return; /* ret */

loc_00014CEE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014CF4u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00014CF4: ;
    POP32(esp, ecx);

loc_00014CF5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014D00
 * Original: 0x00014D00 - 0x00014D41 (65 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014D00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x1AE69C;
    if (CMP_EQ(_fa, _fb)) goto loc_00014D2B; /* je: equal / zero */

loc_00014D10: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00014D22; /* je: equal / zero */

loc_00014D1A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00014D20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014D1Eu); } /* indirect call */
    }

loc_00014D20: ;
    goto loc_00014D2B;

loc_00014D22: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014D28u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00014D28: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014D2B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014D3B; /* je: equal / zero */

loc_00014D32: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00014D38u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00014D38: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014D3B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014D50
 * Original: 0x00014D50 - 0x00014DAB (91 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014D50: ;
    SET_LO8(edx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00014D91; /* je: equal / zero */

loc_00014D5C: ;
    ecx = MEM32(esi + -4);
    PUSH32(esp, edi);
    edi = esi + -4;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00014D7C; /* js: sign (negative) */

loc_00014D6D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi;

loc_00014D70: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0x1AE698;
    if ((_fa != 0)) goto loc_00014D70; /* jne: not equal / not zero */

loc_00014D7C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014D8A; /* je: equal / zero */

loc_00014D81: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00014D87u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00014D87: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014D8A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00014D91: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    MEM32(esi) = 0x1AE698;
    if (TEST_Z(_fa, _fb)) goto loc_00014DA5; /* je: equal / zero */

loc_00014D9C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00014DA2u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00014DA2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014DA5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014DB0
 * Original: 0x00014DB0 - 0x00014DB9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014DB0(void)
{

loc_00014DB0: ;
    eax = ecx;
    MEM32(eax) = 0x1AE698;
    esp += 4; return; /* ret */

}

/**
 * sub_00014DC0
 * Original: 0x00014DC0 - 0x00014E39 (121 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014DC0: ;
    eax = MEM32(0x1D9BA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00014DEF; /* jne: not equal / not zero */

loc_00014DCE: ;
    PUSH32(esp, 0x33F8);
    PUSH32(esp, 0x00014DD8u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00014DD8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014DE8; /* je: equal / zero */

loc_00014DDF: ;
    ecx = eax;
    PUSH32(esp, 0x00014DE6u); RECOMP_ABI_CALL(0x00095660u, sub_00095660); /* call 0x00095660 */

loc_00014DE6: ;
    goto loc_00014DEA;

loc_00014DE8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00014DEA: ;
    MEM32(0x1D9BA8) = eax;

loc_00014DEF: ;
    ecx = MEM32(esi + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2BC);
    eax = ecx + eax + 4;
    edi = esi + 0x1C;
    esi = eax + 0x128;
    ebx = 5;
    /* nop */

loc_00014E10: ;
    edx = MEM32(esi + -20);
    eax = esi + -16;
    PUSH32(esp, eax);
    ecx = edi + -16;
    MEM32(edi + -20) = edx;
    PUSH32(esp, 0x00014E22u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_00014E22: ;
    SET_LO8(ecx, MEM8(esi));
    MEM8(edi) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 1));
    MEM8(edi + 1) = LO8(edx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00014E10; /* jne: not equal / not zero */

loc_00014E35: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00014E40
 * Original: 0x00014E40 - 0x00014EE0 (160 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014E40: ;
    eax = MEM32(0x1D9BA8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00014E71; /* jne: not equal / not zero */

loc_00014E50: ;
    PUSH32(esp, 0x33F8);
    PUSH32(esp, 0x00014E5Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00014E5A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014E6A; /* je: equal / zero */

loc_00014E61: ;
    ecx = eax;
    PUSH32(esp, 0x00014E68u); RECOMP_ABI_CALL(0x00095660u, sub_00095660); /* call 0x00095660 */

loc_00014E68: ;
    goto loc_00014E6C;

loc_00014E6A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00014E6C: ;
    MEM32(0x1D9BA8) = eax;

loc_00014E71: ;
    ecx = MEM32(edi + 4);
    ebx = MEM32(esp + 0x20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2BC);
    eax = MEM32(ecx + eax + 0x1A0);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00014E8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014E8Au); } /* indirect call */
    }

loc_00014E8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014ED3; /* je: equal / zero */

loc_00014E91: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00014EA0;

    /* nop */

loc_00014EA0: ;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, 0x1AE6AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014EB0u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00014EB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00014EC0u); RECOMP_ABI_CALL(0x00014AE0u, sub_00014AE0); /* call 0x00014AE0 */

loc_00014EC0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014EA0; /* jb: below (unsigned <) */

loc_00014EC9: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00014ED2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014ECFu); } /* indirect call */
    }

loc_00014ED2: ;
    POP32(esp, esi);

loc_00014ED3: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014EE0
 * Original: 0x00014EE0 - 0x00014F0A (42 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014EE0(void)
{

loc_00014EE0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi + 4;
    MEM32(esi) = eax;
    PUSH32(esp, 0x00014EF6u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_00014EF6: ;
    eax = MEM32(esp + 8);
    SET_LO8(edx, MEM8(eax + 0x40));
    MEM8(esi + 0x14) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 0x38));
    MEM8(esi + 0x15) = LO8(eax);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00014F10
 * Original: 0x00014F10 - 0x00014F9A (138 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014F10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014F86; /* je: equal / zero */

loc_00014F1D: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014F3F; /* je: equal / zero */

loc_00014F24: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00014F36; /* je: equal / zero */

loc_00014F2E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00014F34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014F32u); } /* indirect call */
    }

loc_00014F34: ;
    goto loc_00014F3F;

loc_00014F36: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014F3Cu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00014F3C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014F3F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00014F7F; /* jle: less or equal (signed <=) */

loc_00014F43: ;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00014F51u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00014F51: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014F71; /* je: equal / zero */

loc_00014F58: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x14DB0);
    PUSH32(esp, ebx);
    esi = eax + 4;
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    MEM32(eax) = ebx;
    PUSH32(esp, 0x00014F6Cu); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_00014F6C: ;
    eax = esi;
    POP32(esp, esi);
    goto loc_00014F73;

loc_00014F71: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00014F73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00014F86; /* jne: not equal / not zero */

loc_00014F7A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00014F7F: ;
    MEM32(edi + 4) = 0;

loc_00014F86: ;
    edx = MEM32(edi);
    ecx = edi;
    MEM32(edi + 8) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00014F90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014F8Du); } /* indirect call */
    }

loc_00014F90: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014FA0
 * Original: 0x00014FA0 - 0x00014FC4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014FA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AE6BC;
    PUSH32(esp, 0x00014FAEu); RECOMP_ABI_CALL(0x00014CD0u, sub_00014CD0); /* call 0x00014CD0 */

loc_00014FAE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014FBE; /* je: equal / zero */

loc_00014FB5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00014FBBu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00014FBB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014FBE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014FD0
 * Original: 0x00014FD0 - 0x00015072 (162 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014FD0: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015070; /* je: equal / zero */

loc_00014FDE: ;
    edx = MEM32(ecx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = eax + edx + -28;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x10) = edx;
    MEM32(edx + 8) = esi;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 1 (32-bit) */
    eax = MEM32(ecx + 4);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00015018; /* jle: less or equal (signed <=) */

loc_00014FFB: ;
    edx = eax + 0x1C;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 4);
    edi = eax + -2;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEM32(eax + edx + -20) = edi;
    goto loc_00015028;

loc_00015018: ;
    MEM32(eax + 4) = esi;
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    MEM32(edx + eax + -20) = esi;

loc_00015028: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    MEM32(edx + eax + -24) = esi;
    edx = MEM32(ecx + 8);
    esi = 1;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00015069; /* jle: less or equal (signed <=) */

loc_00015042: ;
    eax = 0x1C;

loc_00015047: ;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edx + -28;
    MEM32(edx + 8) = edi;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edx + 0x1C;
    MEM32(edx + 4) = edi;
    edx = MEM32(ecx + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00015047; /* jl: less (signed <) */

loc_00015069: ;
    eax = MEM32(ecx + 8);
    MEM32(ecx + 0xC) = eax;
    POP32(esp, edi);

loc_00015070: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00015080
 * Original: 0x00015080 - 0x00015096 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015080: ;
    MEM32(ecx + 0x10) = 0;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015095; /* je: equal / zero */

loc_0001508E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015094u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00015094: ;
    POP32(esp, ecx);

loc_00015095: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001508E
 * Original: 0x0001508E - 0x00015096 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001508E(void)
{

loc_0001508E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015094u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00015094: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000150A0
 * Original: 0x000150A0 - 0x00015107 (103 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000150A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000150A0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x000150AAu); RECOMP_ABI_CALL(0x00014AA0u, sub_00014AA0); /* call 0x00014AA0 */

loc_000150AA: ;
    MEM32(ebp) = 0x1AE6CC;
    esi = ebp + 0xC;
    edi = 5;
    /* nop */

loc_000150C0: ;
    ecx = esi;
    PUSH32(esp, 0x000150C7u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_000150C7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000150C0; /* jne: not equal / not zero */

loc_000150CD: ;
    MEM32(ebp + 4) = 0xFFFFFFFFu;
    esi = ebp + 0x1C;
    edi = 5;
    /* nop */

loc_000150E0: ;
    PUSH32(esp, 0x1AE684);
    ecx = esi + -16;
    MEM32(esi + -20) = 0x43340000;
    PUSH32(esp, 0x000150F4u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_000150F4: ;
    MEM8(esi) = 0;
    MEM8(esi + 1) = 0;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000150E0; /* jne: not equal / not zero */

loc_00015101: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00015110
 * Original: 0x00015110 - 0x0001514D (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00015110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015110: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x1AE6CC;
    esi = edi + 0x84;
    ebp = 5;

loc_00015126: ;
    eax = MEM32(esi + -24);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00015140; /* je: equal / zero */

loc_00015137: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001513Du); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001513D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015140: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00015126; /* jne: not equal / not zero */

loc_00015143: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_00014AB0(); return; /* tail jmp 0x00014AB0 */

}

/**
 * sub_00015150
 * Original: 0x00015150 - 0x00015176 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015150: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015174; /* je: equal / zero */

loc_0001515A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0001515Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001515Cu); } /* indirect call */
    }

loc_0001515F: ;
    MEM32(esi + 8) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 0xC) = 0;

loc_00015174: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00015180
 * Original: 0x00015180 - 0x000151EB (107 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015180: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1AE694;
    if (CMP_EQ(_fa, _fb)) goto loc_000151D5; /* je: equal / zero */

loc_00015190: ;
    PUSH32(esp, edi);

loc_00015191: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(eax + 4);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000151A2; /* je: equal / zero */

loc_0001519D: ;
    MEM32(edx + 4) = ecx;
    goto loc_000151A5;

loc_000151A2: ;
    MEM32(esi + 4) = ecx;

loc_000151A5: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000151B4; /* je: equal / zero */

loc_000151AC: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_000151BA;

loc_000151B4: ;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;

loc_000151BA: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000151C7; /* je: equal / zero */

loc_000151C1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000151C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000151C4u); } /* indirect call */
    }

loc_000151C7: ;
    edx = MEM32(esi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0xC) = edx;
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00015191; /* jne: not equal / not zero */

loc_000151D4: ;
    POP32(esp, edi);

loc_000151D5: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000151E9; /* je: equal / zero */

loc_000151DC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000151E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000151E0u); } /* indirect call */
    }

loc_000151E2: ;
    MEM32(esi + 0x10) = 0;

loc_000151E9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000151F0
 * Original: 0x000151F0 - 0x0001525C (108 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000151F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000151F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000151FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000151F8u); } /* indirect call */
    }

loc_000151FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015244; /* je: equal / zero */

loc_000151FF: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    ecx = eax + 0xC;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(ecx + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0001524A; /* je: equal / zero */

loc_00015232: ;
    MEM32(ecx + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00015244: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0001524A: ;
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
 * sub_00015260
 * Original: 0x00015260 - 0x0001527E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015260: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00015268u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_00015268: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00015278; /* je: equal / zero */

loc_0001526F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015275u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00015275: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015278: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015280
 * Original: 0x00015280 - 0x0001529E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015280: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00015288u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_00015288: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00015298; /* je: equal / zero */

loc_0001528F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015295u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00015295: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015298: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000152A0
 * Original: 0x000152A0 - 0x00015305 (101 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000152A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000152A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x18);
    MEM32(esi) = 0x1AE694;
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    PUSH32(esp, 0x000152BFu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000152BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000152DD; /* je: equal / zero */

loc_000152C6: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax) = 0x1AE6BC;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    goto loc_000152DF;

loc_000152DD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000152DF: ;
    PUSH32(esp, 0x10);
    ecx = eax;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x000152EBu); RECOMP_ABI_CALL(0x00014F10u, sub_00014F10); /* call 0x00014F10 */

loc_000152EB: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015300; /* je: equal / zero */

loc_000152F2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000152F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000152F4u); } /* indirect call */
    }

loc_000152F7: ;
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 0xC) = edi;

loc_00015300: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00015310
 * Original: 0x00015310 - 0x00015315 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015310: ;
    g_seh_ebp = ebp; sub_00015180(); return; /* tail jmp 0x00015180 */

}

/**
 * sub_00015320
 * Original: 0x00015320 - 0x00015353 (51 bytes, 14 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015320: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esp) = eax;
    MEM32(esp + 8) = edx;
    edx = MEM32(esp + 0x20);
    eax = esp;
    PUSH32(esp, eax);
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0x0001534Du); RECOMP_ABI_CALL(0x000151F0u, sub_000151F0); /* call 0x000151F0 */

loc_0001534D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00015360
 * Original: 0x00015360 - 0x000155D8 (632 bytes, 206 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015360(void)
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

loc_00015360: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ebx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x70);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x2C) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */
    PUSH32(esp, edi);
    ebx = ecx;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x18) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_000154D9; /* jbe: below or equal (unsigned <=) */

loc_00015396: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ebp;
    /* nop */

loc_000153A0: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(ecx);
    edx = MEM32(esi + 0x48);
    eax = MEM32(esi);
    edi = MEM32(esi + 0x5C);
    ecx = esi;
    MEM32(esp + 0x1C) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000153B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000153B4u); } /* indirect call */
    }

loc_000153B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000154B4; /* je: equal / zero */

loc_000153BF: ;
    fp_push(MEMF(edi + 0x118)); /* fld float */
    ebp = 1;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0x38)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebx + 0x38] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000153E1; /* jne: not equal / not zero */

loc_000153D4: ;
    MEMF(ebx + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x28) = esi;
    goto loc_000153E3;

loc_000153E1: ;
    fp_pop(); /* fstp st(0) */

loc_000153E3: ;
    fp_push(MEMF(edi + 0x110)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebx + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00015400; /* jne: not equal / not zero */

loc_000153F3: ;
    MEMF(ebx + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x24) = esi;
    goto loc_00015402;

loc_00015400: ;
    fp_pop(); /* fstp st(0) */

loc_00015402: ;
    fp_push(MEMF(edi + 0xD8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0x68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebx + 0x68] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001541F; /* jne: not equal / not zero */

loc_00015412: ;
    MEMF(ebx + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x30) = esi;
    goto loc_00015421;

loc_0001541F: ;
    fp_pop(); /* fstp st(0) */

loc_00015421: ;
    fp_push(MEMF(edi + 0xD4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0x50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebx + 0x50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001543E; /* jne: not equal / not zero */

loc_00015431: ;
    MEMF(ebx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x2C) = esi;
    goto loc_00015440;

loc_0001543E: ;
    fp_pop(); /* fstp st(0) */

loc_00015440: ;
    edi = MEM32(esp + 0x1C);
    ecx = edi;
    PUSH32(esp, 0x0001544Bu); RECOMP_ABI_CALL(0x000ABC10u, sub_000ABC10); /* call 0x000ABC10 */

loc_0001544B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000154B4; /* je: equal / zero */

loc_0001544F: ;
    eax = MEM32(0x1D9BA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015479; /* jne: not equal / not zero */

loc_00015458: ;
    PUSH32(esp, 0x33F8);
    PUSH32(esp, 0x00015462u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015462: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015472; /* je: equal / zero */

loc_00015469: ;
    ecx = eax;
    PUSH32(esp, 0x00015470u); RECOMP_ABI_CALL(0x00095660u, sub_00095660); /* call 0x00095660 */

loc_00015470: ;
    goto loc_00015474;

loc_00015472: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00015474: ;
    MEM32(0x1D9BA8) = eax;

loc_00015479: ;
    ecx = MEM32(ebx + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2BC);
    edx = MEM32(ecx + eax + 0xF4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000154B4; /* jne: not equal / not zero */

loc_0001548D: ;
    ecx = edi;
    PUSH32(esp, 0x00015494u); RECOMP_ABI_CALL(0x000ABC10u, sub_000ABC10); /* call 0x000ABC10 */

loc_00015494: ;
    ecx = eax;
    PUSH32(esp, 0x0001549Bu); RECOMP_ABI_CALL(0x000AB950u, sub_000AB950); /* call 0x000AB950 */

loc_0001549B: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000154B2; /* jp: parity */

loc_000154A5: ;
    MEMF(ebx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x20) = esi;
    goto loc_000154B4;

loc_000154B2: ;
    fp_pop(); /* fstp st(0) */

loc_000154B4: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x78);
    ecx = MEM32(ebp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = edx;
    if (CMP_B(_fa, _fb)) goto loc_000153A0; /* jb: below (unsigned <) */

loc_000154D7: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000154D9: ;
    edi = MEM32(esp + 0x7C);
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000154F2; /* je: equal / zero */

loc_000154E4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000154E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000154E6u); } /* indirect call */
    }

loc_000154E9: ;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi + 0xC) = esi;

loc_000154F2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x7C) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00015501;

loc_000154FD: ;
    ebp = MEM32(esp + 0x78);

loc_00015501: ;
    esi = MEM32(esp + eax * 4 + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000155B5; /* je: equal / zero */

loc_0001550D: ;
    SET_LO8(eax, MEM8(esi + 0x40));
    MEM8(ebx + 0x10) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 0x38));
    MEM8(ebx + 0x11) = LO8(ecx);
    edx = MEM32(0x1D3F08);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0001552Au); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_0001552A: ;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 4), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0001556E; /* jbe: below or equal (unsigned <=) */

loc_00015530: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00015537u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015534u); } /* indirect call */
    }

loc_00015537: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0x40);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x0001555Bu); RECOMP_ABI_CALL(0x000A3F30u, sub_000A3F30); /* call 0x000A3F30 */

loc_0001555B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001556E; /* jl: less (signed <) */

loc_00015562: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0001556Eu); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_0001556E: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx);
    ebp = ebx + -4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00015579u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015576u); } /* indirect call */
    }

loc_00015579: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000155B5; /* je: equal / zero */

loc_0001557D: ;
    ecx = eax + 0xC;
    edx = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x7C);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ebp;
    MEM32(edx + 0xC) = esi;
    edx = MEM32(edi + 8);
    MEM32(eax + 8) = edx;
    MEM32(eax + 4) = 0;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000155AC; /* je: equal / zero */

loc_000155A7: ;
    MEM32(ecx + 4) = eax;
    goto loc_000155AF;

loc_000155AC: ;
    MEM32(edi + 4) = eax;

loc_000155AF: ;
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000155B5: ;
    eax = MEM32(esp + 0x7C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(esp + 0x7C) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000154FD; /* jb: below (unsigned <) */

loc_000155CA: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000155E0
 * Original: 0x000155E0 - 0x0001560F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000155E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000155E0: ;
    eax = MEM32(0x1D8930);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001560E; /* jne: not equal / not zero */

loc_000155E9: ;
    PUSH32(esp, 0x560);
    PUSH32(esp, 0x000155F3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000155F3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015607; /* je: equal / zero */

loc_000155FA: ;
    ecx = eax;
    PUSH32(esp, 0x00015601u); RECOMP_ABI_CALL(0x000735D0u, sub_000735D0); /* call 0x000735D0 */

loc_00015601: ;
    MEM32(0x1D8930) = eax;
    esp += 4; return; /* ret */

loc_00015607: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x1D8930) = eax;

loc_0001560E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00015610
 * Original: 0x00015610 - 0x0001563F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015610: ;
    eax = MEM32(0x1DA878);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001563E; /* jne: not equal / not zero */

loc_00015619: ;
    PUSH32(esp, 0x360);
    PUSH32(esp, 0x00015623u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015623: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015637; /* je: equal / zero */

loc_0001562A: ;
    ecx = eax;
    PUSH32(esp, 0x00015631u); RECOMP_ABI_CALL(0x000B0870u, sub_000B0870); /* call 0x000B0870 */

loc_00015631: ;
    MEM32(0x1DA878) = eax;
    esp += 4; return; /* ret */

loc_00015637: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x1DA878) = eax;

loc_0001563E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00015640
 * Original: 0x00015640 - 0x0001566C (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015640: ;
    eax = MEM32(0x1DA850);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001566B; /* jne: not equal / not zero */

loc_00015649: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00015650u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015650: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015664; /* je: equal / zero */

loc_00015657: ;
    ecx = eax;
    PUSH32(esp, 0x0001565Eu); RECOMP_ABI_CALL(0x000AE4C0u, sub_000AE4C0); /* call 0x000AE4C0 */

loc_0001565E: ;
    MEM32(0x1DA850) = eax;
    esp += 4; return; /* ret */

loc_00015664: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x1DA850) = eax;

loc_0001566B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00015670
 * Original: 0x00015670 - 0x0001569F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015670: ;
    eax = MEM32(0x1D80F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001569E; /* jne: not equal / not zero */

loc_00015679: ;
    PUSH32(esp, 0xE74);
    PUSH32(esp, 0x00015683u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015683: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015697; /* je: equal / zero */

loc_0001568A: ;
    ecx = eax;
    PUSH32(esp, 0x00015691u); RECOMP_ABI_CALL(0x00046ED0u, sub_00046ED0); /* call 0x00046ED0 */

loc_00015691: ;
    MEM32(0x1D80F0) = eax;
    esp += 4; return; /* ret */

loc_00015697: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x1D80F0) = eax;

loc_0001569E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000156A0
 * Original: 0x000156A0 - 0x000156CF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000156A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000156A0: ;
    eax = MEM32(0x1DA86C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000156CE; /* jne: not equal / not zero */

loc_000156A9: ;
    PUSH32(esp, 0x23C);
    PUSH32(esp, 0x000156B3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000156B3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000156C7; /* je: equal / zero */

loc_000156BA: ;
    ecx = eax;
    PUSH32(esp, 0x000156C1u); RECOMP_ABI_CALL(0x000AFC40u, sub_000AFC40); /* call 0x000AFC40 */

loc_000156C1: ;
    MEM32(0x1DA86C) = eax;
    esp += 4; return; /* ret */

loc_000156C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x1DA86C) = eax;

loc_000156CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000156D0
 * Original: 0x000156D0 - 0x000156FC (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000156D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000156D0: ;
    eax = MEM32(0x1D8A8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000156FB; /* jne: not equal / not zero */

loc_000156D9: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x000156E0u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000156E0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000156F4; /* je: equal / zero */

loc_000156E7: ;
    ecx = eax;
    PUSH32(esp, 0x000156EEu); RECOMP_ABI_CALL(0x00082920u, sub_00082920); /* call 0x00082920 */

loc_000156EE: ;
    MEM32(0x1D8A8C) = eax;
    esp += 4; return; /* ret */

loc_000156F4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x1D8A8C) = eax;

loc_000156FB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00015700
 * Original: 0x00015700 - 0x00015717 (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015700: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0001570Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015707u); } /* indirect call */
    }

loc_0001570A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015720
 * Original: 0x00015720 - 0x00015728 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015720(void)
{

loc_00015720: ;
    eax = 0xFFFFFFF2u;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015730
 * Original: 0x00015730 - 0x0001573E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00015730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015730: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00015740
 * Original: 0x00015740 - 0x0001575F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015740: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AE740;
    if (TEST_Z(_fa, _fb)) goto loc_00015759; /* je: equal / zero */

loc_00015750: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015756u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00015756: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015759: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015760
 * Original: 0x00015760 - 0x00015765 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00015760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015760: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00015770
 * Original: 0x00015770 - 0x00015775 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00015770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015770: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00015780
 * Original: 0x00015780 - 0x00015AEC (876 bytes, 232 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015780(void)
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

loc_00015780: ;
    PUSH32(esp, 0x154);
    PUSH32(esp, 0x0001578Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001578A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001579A; /* je: equal / zero */

loc_00015791: ;
    ecx = eax;
    PUSH32(esp, 0x00015798u); RECOMP_ABI_CALL(0x000EF8A0u, sub_000EF8A0); /* call 0x000EF8A0 */

loc_00015798: ;
    goto loc_0001579C;

loc_0001579A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001579C: ;
    MEM32(0x1D3EBC) = eax;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000157A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000157A5u); } /* indirect call */
    }

loc_000157A8: ;
    eax = MEM32(0x1AEF4C);
    ecx = MEM32(0x1D3EBC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000157B9u); RECOMP_ABI_CALL(0x000EF720u, sub_000EF720); /* call 0x000EF720 */

loc_000157B9: ;
    ecx = MEM32(0x1D3EBC);
    MEM32(0x1DC344) = ecx;
    PUSH32(esp, 0x000157CAu); RECOMP_ABI_CALL(0x000CDED0u, sub_000CDED0); /* call 0x000CDED0 */

loc_000157CA: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x000157D1u); RECOMP_ABI_CALL(0x000D7FB0u, sub_000D7FB0); /* call 0x000D7FB0 */

loc_000157D1: ;
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x000157DBu); RECOMP_ABI_CALL(0x000D00D0u, sub_000D00D0); /* call 0x000D00D0 */

loc_000157DB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000157E3u); RECOMP_ABI_CALL(0x000C98D0u, sub_000C98D0); /* call 0x000C98D0 */

loc_000157E3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(0x1D740C) = eax;
    PUSH32(esp, 0x000157F6u); RECOMP_ABI_CALL(0x00018D90u, sub_00018D90); /* call 0x00018D90 */

loc_000157F6: ;
    eax = MEM32(0x1D741C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001580C; /* je: equal / zero */

loc_00015802: ;
    MEM32(0x1D74E4) = 1;

loc_0001580C: ;
    PUSH32(esp, 0x1BC);
    PUSH32(esp, 0x00015816u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015816: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00015826; /* je: equal / zero */

loc_0001581D: ;
    ecx = eax;
    PUSH32(esp, 0x00015824u); RECOMP_ABI_CALL(0x000ED1E0u, sub_000ED1E0); /* call 0x000ED1E0 */

loc_00015824: ;
    goto loc_00015828;

loc_00015826: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00015828: ;
    ecx = eax + 0x20;
    MEM32(0x1D3EAC) = eax;
    MEM32(0x1DE460) = eax;
    PUSH32(esp, 0x0001583Au); RECOMP_ABI_CALL(0x000EA050u, sub_000EA050); /* call 0x000EA050 */

loc_0001583A: ;
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 0x1AE814);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001584Du); RECOMP_ABI_CALL(0x000EA080u, sub_000EA080); /* call 0x000EA080 */

loc_0001584D: ;
    PUSH32(esp, 0xA8);
    PUSH32(esp, 0x00015857u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015857: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00015867; /* je: equal / zero */

loc_0001585E: ;
    ecx = eax;
    PUSH32(esp, 0x00015865u); RECOMP_ABI_CALL(0x000EF360u, sub_000EF360); /* call 0x000EF360 */

loc_00015865: ;
    goto loc_00015869;

loc_00015867: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00015869: ;
    PUSH32(esp, 0x30);
    MEM32(0x1D3EB0) = eax;
    MEM32(0x1DE45C) = eax;
    PUSH32(esp, 0x0001587Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001587A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00015896; /* je: equal / zero */

loc_00015881: ;
    edx = MEM32(0x1AEF10);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0001588Fu); RECOMP_ABI_CALL(0x000EEC10u, sub_000EEC10); /* call 0x000EEC10 */

loc_0001588F: ;
    MEM32(0x1D3EA4) = eax;
    goto loc_000158A0;

loc_00015896: ;
    MEM32(0x1D3EA4) = 0;

loc_000158A0: ;
    PUSH32(esp, 0x19C);
    PUSH32(esp, 0x000158AAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000158AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000158BF; /* je: equal / zero */

loc_000158B1: ;
    PUSH32(esp, 0x100);
    ecx = eax;
    PUSH32(esp, 0x000158BDu); RECOMP_ABI_CALL(0x000EE4C0u, sub_000EE4C0); /* call 0x000EE4C0 */

loc_000158BD: ;
    goto loc_000158C1;

loc_000158BF: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000158C1: ;
    ecx = eax + 0x14;
    MEM32(0x1D3EA8) = eax;
    MEM32(0x1DE464) = eax;
    PUSH32(esp, 0x000158D3u); RECOMP_ABI_CALL(0x000EA050u, sub_000EA050); /* call 0x000EA050 */

loc_000158D3: ;
    ecx = MEM32(0x1DE464);
    PUSH32(esp, 0x1AE814);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x14)) >> 32) & 1);
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000158E6u); RECOMP_ABI_CALL(0x000EA080u, sub_000EA080); /* call 0x000EA080 */

loc_000158E6: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000158EDu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000158ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000158FD; /* je: equal / zero */

loc_000158F4: ;
    ecx = eax;
    PUSH32(esp, 0x000158FBu); RECOMP_ABI_CALL(0x000EDDD0u, sub_000EDDD0); /* call 0x000EDDD0 */

loc_000158FB: ;
    goto loc_000158FF;

loc_000158FD: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000158FF: ;
    PUSH32(esp, 0x6C);
    MEM32(0x1D3EB4) = eax;
    MEM32(0x1DE468) = eax;
    PUSH32(esp, 0x00015910u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015910: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00015920; /* je: equal / zero */

loc_00015917: ;
    ecx = eax;
    PUSH32(esp, 0x0001591Eu); RECOMP_ABI_CALL(0x000ED2E0u, sub_000ED2E0); /* call 0x000ED2E0 */

loc_0001591E: ;
    goto loc_00015922;

loc_00015920: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00015922: ;
    PUSH32(esp, 0x1C18);
    MEM32(0x1D3EB8) = eax;
    MEM32(0x1DE46C) = eax;
    PUSH32(esp, 0x00015936u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015936: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00015946; /* je: equal / zero */

loc_0001593D: ;
    ecx = eax;
    PUSH32(esp, 0x00015944u); RECOMP_ABI_CALL(0x000ED7B0u, sub_000ED7B0); /* call 0x000ED7B0 */

loc_00015944: ;
    goto loc_00015948;

loc_00015946: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00015948: ;
    ecx = MEM32(0x1CA2C0);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(0x1D3EFC) = eax;
    PUSH32(esp, 0x0001595Bu); RECOMP_ABI_CALL(0x000EDBA0u, sub_000EDBA0); /* call 0x000EDBA0 */

loc_0001595B: ;
    edx = MEM32(0x1D3EFC);
    ecx = MEM32(0x1D3EB8);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001596Fu); RECOMP_ABI_CALL(0x000ED280u, sub_000ED280); /* call 0x000ED280 */

loc_0001596F: ;
    eax = MEM32(0x1D3EFC);
    PUSH32(esp, 0x1C18);
    MEM32(eax + 0x1C10) = 0xBD23D70Au;
    MEM32(eax + 0x1C14) = 0xBD3C6A7Fu;
    PUSH32(esp, 0x00015992u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015992: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000159A2; /* je: equal / zero */

loc_00015999: ;
    ecx = eax;
    PUSH32(esp, 0x000159A0u); RECOMP_ABI_CALL(0x000ED7B0u, sub_000ED7B0); /* call 0x000ED7B0 */

loc_000159A0: ;
    goto loc_000159A4;

loc_000159A2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000159A4: ;
    ecx = MEM32(0x1CA2C4);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(0x1D3F00) = eax;
    PUSH32(esp, 0x000159B7u); RECOMP_ABI_CALL(0x000EDBA0u, sub_000EDBA0); /* call 0x000EDBA0 */

loc_000159B7: ;
    edx = MEM32(0x1D3F00);
    ecx = MEM32(0x1D3EB8);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000159CBu); RECOMP_ABI_CALL(0x000ED280u, sub_000ED280); /* call 0x000ED280 */

loc_000159CB: ;
    eax = MEM32(0x1D3F00);
    PUSH32(esp, 0x1C18);
    MEM32(eax + 0x1C10) = 0xBD23D70Au;
    MEM32(eax + 0x1C14) = 0xBD3C6A7Fu;
    PUSH32(esp, 0x000159EEu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000159EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000159FE; /* je: equal / zero */

loc_000159F5: ;
    ecx = eax;
    PUSH32(esp, 0x000159FCu); RECOMP_ABI_CALL(0x000ED7B0u, sub_000ED7B0); /* call 0x000ED7B0 */

loc_000159FC: ;
    goto loc_00015A00;

loc_000159FE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00015A00: ;
    ecx = MEM32(0x1CA2C8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(0x1D3F04) = eax;
    PUSH32(esp, 0x00015A13u); RECOMP_ABI_CALL(0x000EDBA0u, sub_000EDBA0); /* call 0x000EDBA0 */

loc_00015A13: ;
    edx = MEM32(0x1D3F04);
    ecx = MEM32(0x1D3EB8);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00015A27u); RECOMP_ABI_CALL(0x000ED280u, sub_000ED280); /* call 0x000ED280 */

loc_00015A27: ;
    eax = MEM32(0x1D3F04);
    PUSH32(esp, 0x5C);
    MEM32(eax + 0x1C10) = 0xBCA3D70Au;
    MEM32(eax + 0x1C14) = 0xBCF5C28Fu;
    PUSH32(esp, 0x00015A47u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015A47: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00015A59; /* je: equal / zero */

loc_00015A4E: ;
    PUSH32(esp, 4);
    ecx = eax;
    PUSH32(esp, 0x00015A57u); RECOMP_ABI_CALL(0x000EC080u, sub_000EC080); /* call 0x000EC080 */

loc_00015A57: ;
    goto loc_00015A5B;

loc_00015A59: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00015A5B: ;
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x1AE808);
    MEM32(0x1D3EE0) = eax;
    MEM32(0x1DE810) = eax;
    PUSH32(esp, 0x00015A80u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00015A80: ;
    PUSH32(esp, eax);
    MEM32(0x1D3EF4) = eax;
    PUSH32(esp, 0x00015A8Bu); RECOMP_ABI_CALL(0x000E3D40u, sub_000E3D40); /* call 0x000E3D40 */

loc_00015A8B: ;
    edx = MEM32(0x1D74E4);
    ecx = MEM32(0x1DE810);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015AA8u); RECOMP_ABI_CALL(0x000EBAE0u, sub_000EBAE0); /* call 0x000EBAE0 */

loc_00015AA8: ;
    ecx = MEM32(0x1DE810);
    fp_push(MEMF(ecx + 0x40)); /* fld float */
    PUSH32(esp, 0x68);
    fp_top() = RECOMP_FP_PC(MEMF(0x1AE738) / fp_top()); /* fdivr dword ptr [0x1ae738] */
    MEMF(0x1CEAD4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00015AC4u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015AC4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00015AD4; /* je: equal / zero */

loc_00015ACB: ;
    ecx = eax;
    PUSH32(esp, 0x00015AD2u); RECOMP_ABI_CALL(0x000BCB80u, sub_000BCB80); /* call 0x000BCB80 */

loc_00015AD2: ;
    goto loc_00015AD6;

loc_00015AD4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00015AD6: ;
    PUSH32(esp, 0x1AE800);
    ecx = eax;
    MEM32(0x1D3EA0) = eax;
    PUSH32(esp, 0x00015AE7u); RECOMP_ABI_CALL(0x0011E860u, sub_0011E860); /* call 0x0011E860 */

loc_00015AE7: ;
    g_seh_ebp = ebp; sub_000E4D80(); return; /* tail jmp 0x000E4D80 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00015AF0
 * Original: 0x00015AF0 - 0x00015B36 (70 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015AF0: ;
    PUSH32(esp, 0x120);
    PUSH32(esp, 0x00015AFAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015AFA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015B21; /* je: equal / zero */

loc_00015B01: ;
    PUSH32(esp, 0x1AE818);
    ecx = eax;
    PUSH32(esp, 0x00015B0Du); RECOMP_ABI_CALL(0x0003F270u, sub_0003F270); /* call 0x0003F270 */

loc_00015B0D: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(0x1D3F18) = eax;
    PUSH32(esp, 0x00015B20u); RECOMP_ABI_CALL(0x000EBCD0u, sub_000EBCD0); /* call 0x000EBCD0 */

loc_00015B20: ;
    esp += 4; return; /* ret */

loc_00015B21: ;
    ecx = MEM32(0x1DE810);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(0x1D3F18) = eax;
    PUSH32(esp, 0x00015B35u); RECOMP_ABI_CALL(0x000EBCD0u, sub_000EBCD0); /* call 0x000EBCD0 */

loc_00015B35: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00015B40
 * Original: 0x00015B40 - 0x00015B99 (89 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015B40: ;
    eax = MEM32(0x1D73DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015B5F; /* jne: not equal / not zero */

loc_00015B49: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00015B50u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015B50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015B79; /* je: equal / zero */

loc_00015B57: ;
    MEM32(eax) = 0x1AE7A0;
    goto loc_00015B7B;

loc_00015B5F: ;
    PUSH32(esp, 0x134);
    PUSH32(esp, 0x00015B69u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015B69: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015B79; /* je: equal / zero */

loc_00015B70: ;
    ecx = eax;
    PUSH32(esp, 0x00015B77u); RECOMP_ABI_CALL(0x000F0690u, sub_000F0690); /* call 0x000F0690 */

loc_00015B77: ;
    goto loc_00015B7B;

loc_00015B79: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00015B7B: ;
    PUSH32(esp, esi);
    MEM32(0x1D3EEC) = eax;
    esi = MEM32(eax);
    PUSH32(esp, 0x1AE828);
    PUSH32(esp, 0x00015B8Du); RECOMP_ABI_CALL(0x00018CB0u, sub_00018CB0); /* call 0x00018CB0 */

loc_00015B8D: ;
    ecx = MEM32(0x1D3EEC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x00015B97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015B94u); } /* indirect call */
    }

loc_00015B97: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00015BA0
 * Original: 0x00015BA0 - 0x00015BE4 (68 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015BA0: ;
    eax = MEM32(0x1D3EDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015BD7; /* jne: not equal / not zero */

loc_00015BA9: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00015BB0u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015BB0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015BD0; /* je: equal / zero */

loc_00015BB7: ;
    ecx = eax;
    PUSH32(esp, 0x00015BBEu); RECOMP_ABI_CALL(0x0006B350u, sub_0006B350); /* call 0x0006B350 */

loc_00015BBE: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(0x1D3EDC) = eax;
    PUSH32(esp, 0x00015BCFu); RECOMP_ABI_CALL(0x000E0960u, sub_000E0960); /* call 0x000E0960 */

loc_00015BCF: ;
    esp += 4; return; /* ret */

loc_00015BD0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x1D3EDC) = eax;

loc_00015BD7: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00015BE3u); RECOMP_ABI_CALL(0x000E0960u, sub_000E0960); /* call 0x000E0960 */

loc_00015BE3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00015BF0
 * Original: 0x00015BF0 - 0x00015C0D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015BF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x1D3F08) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00015C0C; /* je: equal / zero */

loc_00015BFD: ;
    ecx = MEM32(0x1D3F0C);
    edx = MEM32(ecx + 0x58);
    eax = MEM32(eax + 0x34);
    MEM32(edx + 4) = eax;

loc_00015C0C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00015C10
 * Original: 0x00015C10 - 0x00015C35 (37 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015C10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = eax;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x00015C2Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015C2A: ;
    MEM32(esi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015C40
 * Original: 0x00015C40 - 0x00015C6D (45 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015C40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    esi = ecx;
    ecx = MEM32(0x1DE460);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015C5Eu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00015C5E: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015C70
 * Original: 0x00015C70 - 0x00015CA3 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015C70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00015C99; /* jle: less or equal (signed <=) */

loc_00015C7D: ;
    /* nop */

loc_00015C80: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 0x00015C91u); RECOMP_ABI_CALL(0x000ECFB0u, sub_000ECFB0); /* call 0x000ECFB0 */

loc_00015C91: ;
    eax = MEM32(esi + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00015C80; /* jl: less (signed <) */

loc_00015C99: ;
    POP32(esp, edi);
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00015CB0
 * Original: 0x00015CB0 - 0x00015CC8 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015CB0(void)
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

loc_00015CB0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00015CC7; /* je: equal / zero */

loc_00015CC5: ;
    eax = ecx;

loc_00015CC7: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00015CD0
 * Original: 0x00015CD0 - 0x00015DAC (220 bytes, 58 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015CD0(void)
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

loc_00015CD0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE830)); /* fmul dword ptr [0x1ae830] */
    esi = ecx;
    MEM32(esp + 4) = 0x437F0000;
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AE830)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1ae830] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = esp + 4;
    if (TEST_Z(_fa, _fb)) goto loc_00015CFF; /* je: equal / zero */

loc_00015CFB: ;
    eax = esp + 0xC;

loc_00015CFF: ;
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, 0x00015D06u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00015D06: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE82C)); /* fmul dword ptr [0x1ae82c] */
    MEM8(esi + 3) = LO8(eax);
    MEM32(esp + 0xC) = 0x437F0000;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AE830)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1ae830] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = esp + 0xC;
    if (TEST_Z(_fa, _fb)) goto loc_00015D34; /* je: equal / zero */

loc_00015D30: ;
    eax = esp + 0x10;

loc_00015D34: ;
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, 0x00015D3Bu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00015D3B: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE82C)); /* fmul dword ptr [0x1ae82c] */
    MEM8(esi + 2) = LO8(eax);
    MEM32(esp + 0xC) = 0x437F0000;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AE830)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1ae830] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = esp + 0xC;
    if (TEST_Z(_fa, _fb)) goto loc_00015D69; /* je: equal / zero */

loc_00015D65: ;
    eax = esp + 0x10;

loc_00015D69: ;
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, 0x00015D70u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00015D70: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE82C)); /* fmul dword ptr [0x1ae82c] */
    MEM8(esi + 1) = LO8(eax);
    MEM32(esp + 0xC) = 0x437F0000;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AE830)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1ae830] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = esp + 0xC;
    if (TEST_Z(_fa, _fb)) goto loc_00015D9E; /* je: equal / zero */

loc_00015D9A: ;
    eax = esp + 0x10;

loc_00015D9E: ;
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, 0x00015DA5u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00015DA5: ;
    MEM8(esi) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00015DB0
 * Original: 0x00015DB0 - 0x00015E8E (222 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015DB0: ;
    eax = MEM32(0x1D74D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015DC5; /* je: equal / zero */

loc_00015DBA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015DC0u); RECOMP_ABI_CALL(0x00015BA0u, sub_00015BA0); /* call 0x00015BA0 */

loc_00015DC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00015DF5;

loc_00015DC5: ;
    eax = MEM32(0x1D3EDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015DEC; /* jne: not equal / not zero */

loc_00015DCE: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00015DD5u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015DD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015DE5; /* je: equal / zero */

loc_00015DDC: ;
    ecx = eax;
    PUSH32(esp, 0x00015DE3u); RECOMP_ABI_CALL(0x0006B350u, sub_0006B350); /* call 0x0006B350 */

loc_00015DE3: ;
    goto loc_00015DE7;

loc_00015DE5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00015DE7: ;
    MEM32(0x1D3EDC) = eax;

loc_00015DEC: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00015DF5u); RECOMP_ABI_CALL(0x000E0960u, sub_000E0960); /* call 0x000E0960 */

loc_00015DF5: ;
    PUSH32(esp, 0x1C18);
    PUSH32(esp, 0x00015DFFu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015DFF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E0F; /* je: equal / zero */

loc_00015E06: ;
    ecx = eax;
    PUSH32(esp, 0x00015E0Du); RECOMP_ABI_CALL(0x000ED7B0u, sub_000ED7B0); /* call 0x000ED7B0 */

loc_00015E0D: ;
    goto loc_00015E11;

loc_00015E0F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00015E11: ;
    ecx = MEM32(0x1CA2BC);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(0x1D3EF8) = eax;
    PUSH32(esp, 0x00015E24u); RECOMP_ABI_CALL(0x000EDBA0u, sub_000EDBA0); /* call 0x000EDBA0 */

loc_00015E24: ;
    edx = MEM32(0x1D3EF8);
    ecx = MEM32(0x1DE46C);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM32(0x1D3EB8) = ecx;
    PUSH32(esp, 0x00015E3Eu); RECOMP_ABI_CALL(0x000ED280u, sub_000ED280); /* call 0x000ED280 */

loc_00015E3E: ;
    eax = MEM32(0x1D3EB8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, 0x120);
    MEM32(eax) = ecx;
    PUSH32(esp, 0x00015E52u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015E52: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E79; /* je: equal / zero */

loc_00015E59: ;
    PUSH32(esp, 0x1AE818);
    ecx = eax;
    PUSH32(esp, 0x00015E65u); RECOMP_ABI_CALL(0x0003F270u, sub_0003F270); /* call 0x0003F270 */

loc_00015E65: ;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(0x1D3F18) = eax;
    PUSH32(esp, 0x00015E78u); RECOMP_ABI_CALL(0x000EBCD0u, sub_000EBCD0); /* call 0x000EBCD0 */

loc_00015E78: ;
    esp += 4; return; /* ret */

loc_00015E79: ;
    ecx = MEM32(0x1DE810);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(0x1D3F18) = eax;
    PUSH32(esp, 0x00015E8Du); RECOMP_ABI_CALL(0x000EBCD0u, sub_000EBCD0); /* call 0x000EBCD0 */

loc_00015E8D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00015E90
 * Original: 0x00015E90 - 0x00016CC8 (3640 bytes, 975 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015E90(void)
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

loc_00015E90: ;
    eax = MEM32(0x1D3F14);
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016CC0; /* jne: not equal / not zero */

loc_00015EA6: ;
    _fa = (uint32_t)(MEM32(0x1DA128)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DA128), edi (32-bit) */
    MEM32(0x1D3F14) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00015EDD; /* jne: not equal / not zero */

loc_00015EB8: ;
    PUSH32(esp, 0x312C);
    PUSH32(esp, 0x00015EC2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015EC2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015ED7; /* je: equal / zero */

loc_00015EC9: ;
    ecx = eax;
    PUSH32(esp, 0x00015ED0u); RECOMP_ABI_CALL(0x000A4AA0u, sub_000A4AA0); /* call 0x000A4AA0 */

loc_00015ED0: ;
    MEM32(0x1DA128) = eax;
    goto loc_00015EDD;

loc_00015ED7: ;
    MEM32(0x1DA128) = edi;

loc_00015EDD: ;
    _fa = (uint32_t)(MEM32(0x1DA114)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DA114), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015F0A; /* jne: not equal / not zero */

loc_00015EE5: ;
    PUSH32(esp, 0x968);
    PUSH32(esp, 0x00015EEFu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015EEF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015F04; /* je: equal / zero */

loc_00015EF6: ;
    ecx = eax;
    PUSH32(esp, 0x00015EFDu); RECOMP_ABI_CALL(0x000A41D0u, sub_000A41D0); /* call 0x000A41D0 */

loc_00015EFD: ;
    MEM32(0x1DA114) = eax;
    goto loc_00015F0A;

loc_00015F04: ;
    MEM32(0x1DA114) = edi;

loc_00015F0A: ;
    _fa = (uint32_t)(MEM32(0x1D9BA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1D9BA8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015F37; /* jne: not equal / not zero */

loc_00015F12: ;
    PUSH32(esp, 0x33F8);
    PUSH32(esp, 0x00015F1Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015F1C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015F31; /* je: equal / zero */

loc_00015F23: ;
    ecx = eax;
    PUSH32(esp, 0x00015F2Au); RECOMP_ABI_CALL(0x00095660u, sub_00095660); /* call 0x00095660 */

loc_00015F2A: ;
    MEM32(0x1D9BA8) = eax;
    goto loc_00015F37;

loc_00015F31: ;
    MEM32(0x1D9BA8) = edi;

loc_00015F37: ;
    _fa = (uint32_t)(MEM32(0x1D8930)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1D8930), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015F64; /* jne: not equal / not zero */

loc_00015F3F: ;
    PUSH32(esp, 0x560);
    PUSH32(esp, 0x00015F49u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015F49: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015F5E; /* je: equal / zero */

loc_00015F50: ;
    ecx = eax;
    PUSH32(esp, 0x00015F57u); RECOMP_ABI_CALL(0x000735D0u, sub_000735D0); /* call 0x000735D0 */

loc_00015F57: ;
    MEM32(0x1D8930) = eax;
    goto loc_00015F64;

loc_00015F5E: ;
    MEM32(0x1D8930) = edi;

loc_00015F64: ;
    _fa = (uint32_t)(MEM32(0x1D98D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1D98D4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015F91; /* jne: not equal / not zero */

loc_00015F6C: ;
    PUSH32(esp, 0xB64);
    PUSH32(esp, 0x00015F76u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015F76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015F8B; /* je: equal / zero */

loc_00015F7D: ;
    ecx = eax;
    PUSH32(esp, 0x00015F84u); RECOMP_ABI_CALL(0x0008FB90u, sub_0008FB90); /* call 0x0008FB90 */

loc_00015F84: ;
    MEM32(0x1D98D4) = eax;
    goto loc_00015F91;

loc_00015F8B: ;
    MEM32(0x1D98D4) = edi;

loc_00015F91: ;
    _fa = (uint32_t)(MEM32(0x1DA86C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DA86C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FBE; /* jne: not equal / not zero */

loc_00015F99: ;
    PUSH32(esp, 0x23C);
    PUSH32(esp, 0x00015FA3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015FA3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015FB8; /* je: equal / zero */

loc_00015FAA: ;
    ecx = eax;
    PUSH32(esp, 0x00015FB1u); RECOMP_ABI_CALL(0x000AFC40u, sub_000AFC40); /* call 0x000AFC40 */

loc_00015FB1: ;
    MEM32(0x1DA86C) = eax;
    goto loc_00015FBE;

loc_00015FB8: ;
    MEM32(0x1DA86C) = edi;

loc_00015FBE: ;
    _fa = (uint32_t)(MEM32(0x1DA850)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DA850), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FE8; /* jne: not equal / not zero */

loc_00015FC6: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00015FCDu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015FCD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015FE2; /* je: equal / zero */

loc_00015FD4: ;
    ecx = eax;
    PUSH32(esp, 0x00015FDBu); RECOMP_ABI_CALL(0x000AE4C0u, sub_000AE4C0); /* call 0x000AE4C0 */

loc_00015FDB: ;
    MEM32(0x1DA850) = eax;
    goto loc_00015FE8;

loc_00015FE2: ;
    MEM32(0x1DA850) = edi;

loc_00015FE8: ;
    PUSH32(esp, 0x00015FEDu); RECOMP_ABI_CALL(0x00058940u, sub_00058940); /* call 0x00058940 */

loc_00015FED: ;
    _fa = (uint32_t)(MEM32(0x1D80F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1D80F0), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001601A; /* jne: not equal / not zero */

loc_00015FF5: ;
    PUSH32(esp, 0xE74);
    PUSH32(esp, 0x00015FFFu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00015FFF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016014; /* je: equal / zero */

loc_00016006: ;
    ecx = eax;
    PUSH32(esp, 0x0001600Du); RECOMP_ABI_CALL(0x00046ED0u, sub_00046ED0); /* call 0x00046ED0 */

loc_0001600D: ;
    MEM32(0x1D80F0) = eax;
    goto loc_0001601A;

loc_00016014: ;
    MEM32(0x1D80F0) = edi;

loc_0001601A: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00016021u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016021: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016038; /* je: equal / zero */

loc_00016028: ;
    PUSH32(esp, 0x62);
    ecx = eax;
    PUSH32(esp, 0x00016031u); RECOMP_ABI_CALL(0x000F1B10u, sub_000F1B10); /* call 0x000F1B10 */

loc_00016031: ;
    MEM32(0x1D3ED0) = eax;
    goto loc_0001603E;

loc_00016038: ;
    MEM32(0x1D3ED0) = edi;

loc_0001603E: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00016045u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016045: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001605C; /* je: equal / zero */

loc_0001604C: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00016055u); RECOMP_ABI_CALL(0x000F3C00u, sub_000F3C00); /* call 0x000F3C00 */

loc_00016055: ;
    MEM32(0x1D3ED4) = eax;
    goto loc_00016062;

loc_0001605C: ;
    MEM32(0x1D3ED4) = edi;

loc_00016062: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0001606Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001606A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001607C; /* je: equal / zero */

loc_00016071: ;
    ecx = eax;
    PUSH32(esp, 0x00016078u); RECOMP_ABI_CALL(0x000F3B40u, sub_000F3B40); /* call 0x000F3B40 */

loc_00016078: ;
    esi = eax;
    goto loc_0001607E;

loc_0001607C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001607E: ;
    PUSH32(esp, 6);
    PUSH32(esp, 6);
    PUSH32(esp, 0x1F);
    ecx = esi;
    PUSH32(esp, 0x0001608Bu); RECOMP_ABI_CALL(0x000F3C20u, sub_000F3C20); /* call 0x000F3C20 */

loc_0001608B: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0xC) = 0;
    MEM8(esp + 0x14) = 0x10;
    MEM8(esp + 0x1C) = 8;
    MEM8(esp + 0x24) = 0x1C;
    MEM8(esp + 0xD) = 1;
    MEM8(esp + 0x15) = 0x11;
    MEM8(esp + 0x1D) = 9;
    MEM8(esp + 0x25) = 0x1D;
    MEM8(esp + 0xE) = 2;
    MEM8(esp + 0x16) = 0x12;
    MEM8(esp + 0x1E) = 0xA;
    MEM8(esp + 0x26) = 0x1E;
    MEM8(esp + 0xF) = 3;
    MEM8(esp + 0x17) = 0x13;
    MEM8(esp + 0x1F) = 0xB;
    MEM8(esp + 0x27) = 0x17;
    MEM8(esp + 0x10) = 4;
    MEM8(esp + 0x18) = 0x14;
    MEM8(esp + 0x20) = 0xC;
    MEM8(esp + 0x28) = 0x18;
    MEM8(esp + 0x11) = 5;
    MEM8(esp + 0x19) = 0x15;
    MEM8(esp + 0x21) = 0xD;
    MEM8(esp + 0x29) = 0x19;
    MEM8(esp + 0x12) = 6;
    MEM8(esp + 0x1A) = 0x16;
    MEM8(esp + 0x22) = 0xE;
    MEM8(esp + 0x2A) = 0x1A;
    MEM8(esp + 0x13) = 0xF;
    MEM8(esp + 0x1B) = 7;
    MEM8(esp + 0x23) = 0x1B;
    PUSH32(esp, 0x00016132u); RECOMP_ABI_CALL(0x000F3BB0u, sub_000F3BB0); /* call 0x000F3BB0 */

loc_00016132: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(esp + 0x14) = 4;
    MEM8(esp + 0x15) = 5;
    MEM8(esp + 0x16) = 6;
    PUSH32(esp, 0x00016150u); RECOMP_ABI_CALL(0x000F3CD0u, sub_000F3CD0); /* call 0x000F3CD0 */

loc_00016150: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    ecx = esi;
    MEM8(esp + 0x14) = 0;
    MEM8(esp + 0x15) = 1;
    MEM8(esp + 0x16) = 2;
    MEM8(esp + 0x17) = 3;
    PUSH32(esp, 0x00016174u); RECOMP_ABI_CALL(0x000F3CD0u, sub_000F3CD0); /* call 0x000F3CD0 */

loc_00016174: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 2);
    ecx = esi;
    MEM8(esp + 0x14) = 0xF;
    MEM8(esp + 0x15) = 0x10;
    MEM8(esp + 0x16) = 0x11;
    MEM8(esp + 0x17) = 0x12;
    MEM8(esp + 0x18) = 0x13;
    MEM8(esp + 0x19) = 0x14;
    MEM8(esp + 0x1A) = 0x15;
    MEM8(esp + 0x1B) = 0x16;
    PUSH32(esp, 0x000161ACu); RECOMP_ABI_CALL(0x000F3CD0u, sub_000F3CD0); /* call 0x000F3CD0 */

loc_000161AC: ;
    MEM8(esp + 8) = 7;
    MEM8(esp + 9) = 8;
    MEM8(esp + 0xA) = 9;
    MEM8(esp + 0xB) = 0xA;
    MEM8(esp + 0xC) = 0xB;
    MEM8(esp + 0xD) = 0xC;
    MEM8(esp + 0xE) = 0xD;
    MEM8(esp + 0xF) = 0xE;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x000161E4u); RECOMP_ABI_CALL(0x000F3CD0u, sub_000F3CD0); /* call 0x000F3CD0 */

loc_000161E4: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    ecx = esi;
    MEM8(esp + 0x14) = 0x17;
    MEM8(esp + 0x15) = 0x18;
    MEM8(esp + 0x16) = 0x19;
    MEM8(esp + 0x17) = 0x1A;
    PUSH32(esp, 0x00016208u); RECOMP_ABI_CALL(0x000F3CD0u, sub_000F3CD0); /* call 0x000F3CD0 */

loc_00016208: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    ecx = esi;
    MEM8(esp + 0x14) = 0x1B;
    MEM8(esp + 0x15) = 0x1C;
    MEM8(esp + 0x16) = 0x1D;
    MEM8(esp + 0x17) = 0x1E;
    PUSH32(esp, 0x0001622Cu); RECOMP_ABI_CALL(0x000F3CD0u, sub_000F3CD0); /* call 0x000F3CD0 */

loc_0001622C: ;
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0001623Au); RECOMP_ABI_CALL(0x000F3BD0u, sub_000F3BD0); /* call 0x000F3BD0 */

loc_0001623A: ;
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00016249u); RECOMP_ABI_CALL(0x000F3BD0u, sub_000F3BD0); /* call 0x000F3BD0 */

loc_00016249: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x10);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00016258u); RECOMP_ABI_CALL(0x000F3BD0u, sub_000F3BD0); /* call 0x000F3BD0 */

loc_00016258: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 9);
    PUSH32(esp, 8);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x00016267u); RECOMP_ABI_CALL(0x000F3BD0u, sub_000F3BD0); /* call 0x000F3BD0 */

loc_00016267: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x17);
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00016276u); RECOMP_ABI_CALL(0x000F3BD0u, sub_000F3BD0); /* call 0x000F3BD0 */

loc_00016276: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x00016285u); RECOMP_ABI_CALL(0x000F3BD0u, sub_000F3BD0); /* call 0x000F3BD0 */

loc_00016285: ;
    ecx = MEM32(0x1D3ED4);
    edx = MEM32(ecx + 4);
    MEM32(edx) = esi;
    eax = MEM32(0x1D3ED0);
    ecx = MEM32(0x1D3ED4);
    PUSH32(esp, 0x124);
    MEM32(0x1DE808) = eax;
    MEM32(0x1DE80C) = ecx;
    PUSH32(esp, 0x000162B0u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000162B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000162C5; /* je: equal / zero */

loc_000162B7: ;
    ecx = eax;
    PUSH32(esp, 0x000162BEu); RECOMP_ABI_CALL(0x000F35E0u, sub_000F35E0); /* call 0x000F35E0 */

loc_000162BE: ;
    MEM32(0x1D3EC0) = eax;
    goto loc_000162CB;

loc_000162C5: ;
    MEM32(0x1D3EC0) = edi;

loc_000162CB: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x000162D2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000162D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000162E2; /* je: equal / zero */

loc_000162D9: ;
    ecx = eax;
    PUSH32(esp, 0x000162E0u); RECOMP_ABI_CALL(0x000F1550u, sub_000F1550); /* call 0x000F1550 */

loc_000162E0: ;
    goto loc_000162E4;

loc_000162E2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000162E4: ;
    PUSH32(esp, 0x40);
    MEM32(0x1D3EC4) = eax;
    MEM32(0x1DE470) = eax;
    PUSH32(esp, 0x000162F5u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000162F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016318; /* je: equal / zero */

loc_000162FC: ;
    edx = MEM32(0x1AEF0C);
    ecx = MEM32(0x1AEF08);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00016311u); RECOMP_ABI_CALL(0x000F2E60u, sub_000F2E60); /* call 0x000F2E60 */

loc_00016311: ;
    MEM32(0x1D3ECC) = eax;
    goto loc_0001631E;

loc_00016318: ;
    MEM32(0x1D3ECC) = edi;

loc_0001631E: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00016325u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016325: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001633C; /* je: equal / zero */

loc_0001632C: ;
    PUSH32(esp, 5);
    ecx = eax;
    PUSH32(esp, 0x00016335u); RECOMP_ABI_CALL(0x000F2570u, sub_000F2570); /* call 0x000F2570 */

loc_00016335: ;
    MEM32(0x1D3ED8) = eax;
    goto loc_00016342;

loc_0001633C: ;
    MEM32(0x1D3ED8) = edi;

loc_00016342: ;
    PUSH32(esp, 0x00016347u); RECOMP_ABI_CALL(0x00089D30u, sub_00089D30); /* call 0x00089D30 */

loc_00016347: ;
    eax = MEM32(0x1D8A88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016371; /* jne: not equal / not zero */

loc_00016350: ;
    PUSH32(esp, 0x34C);
    PUSH32(esp, 0x0001635Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001635A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001636A; /* je: equal / zero */

loc_00016361: ;
    ecx = eax;
    PUSH32(esp, 0x00016368u); RECOMP_ABI_CALL(0x00082440u, sub_00082440); /* call 0x00082440 */

loc_00016368: ;
    goto loc_0001636C;

loc_0001636A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001636C: ;
    MEM32(0x1D8A88) = eax;

loc_00016371: ;
    ecx = eax;
    PUSH32(esp, 0x00016378u); RECOMP_ABI_CALL(0x000823A0u, sub_000823A0); /* call 0x000823A0 */

loc_00016378: ;
    eax = MEM32(0x1D8A8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001639F; /* jne: not equal / not zero */

loc_00016381: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x00016388u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016388: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016398; /* je: equal / zero */

loc_0001638F: ;
    ecx = eax;
    PUSH32(esp, 0x00016396u); RECOMP_ABI_CALL(0x00082920u, sub_00082920); /* call 0x00082920 */

loc_00016396: ;
    goto loc_0001639A;

loc_00016398: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001639A: ;
    MEM32(0x1D8A8C) = eax;

loc_0001639F: ;
    ecx = eax;
    PUSH32(esp, 0x000163A6u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_000163A6: ;
    eax = MEM32(0x1D8A8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000163CD; /* jne: not equal / not zero */

loc_000163AF: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x000163B6u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000163B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000163C6; /* je: equal / zero */

loc_000163BD: ;
    ecx = eax;
    PUSH32(esp, 0x000163C4u); RECOMP_ABI_CALL(0x00082920u, sub_00082920); /* call 0x00082920 */

loc_000163C4: ;
    goto loc_000163C8;

loc_000163C6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000163C8: ;
    MEM32(0x1D8A8C) = eax;

loc_000163CD: ;
    ecx = eax;
    PUSH32(esp, 0x000163D4u); RECOMP_ABI_CALL(0x000829F0u, sub_000829F0); /* call 0x000829F0 */

loc_000163D4: ;
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x1AEAE8);
    PUSH32(esp, 0x000163EEu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000163EE: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AEAD4);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x00016422u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016422: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AEAC0);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x00016458u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016458: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AEAA8);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x0001648Cu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_0001648C: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AEA8C);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x000164C2u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000164C2: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AEA78);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x000164F6u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000164F6: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    MEM32(ecx + edx * 4) = eax;
    MEM32(0x1CA2D8) = MEM32(0x1CA2D8) + 1;
    _fa = (uint32_t)(MEM32(0x1CA2D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x1AEA64);
    PUSH32(esp, 0x00016525u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016525: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AEA4C);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x00016559u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016559: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AEA34);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x0001658Fu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_0001658F: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AEA20);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x000165C3u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000165C3: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AEA04);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x000165F9u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000165F9: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE9EC);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x0001662Du); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_0001662D: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    PUSH32(esp, edi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 1);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x8000);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 0x1AE9D0);
    PUSH32(esp, 0x00016663u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016663: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE9B4);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x00016697u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016697: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE99C);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x000166CDu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000166CD: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE984);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x00016701u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016701: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE970);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x00016737u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016737: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE960);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x0001676Bu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_0001676B: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE94C);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x000167A1u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000167A1: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE938);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x000167D5u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000167D5: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE920);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x0001680Bu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_0001680B: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    MEM32(ecx + edx * 4) = eax;
    MEM32(0x1CA2D8) = MEM32(0x1CA2D8) + 1;
    _fa = (uint32_t)(MEM32(0x1CA2D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x1D8A88);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016827: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001684C; /* jne: not equal / not zero */

loc_0001682B: ;
    PUSH32(esp, 0x34C);
    PUSH32(esp, 0x00016835u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016835: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016845; /* je: equal / zero */

loc_0001683C: ;
    ecx = eax;
    PUSH32(esp, 0x00016843u); RECOMP_ABI_CALL(0x00082440u, sub_00082440); /* call 0x00082440 */

loc_00016843: ;
    goto loc_00016847;

loc_00016845: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016847: ;
    MEM32(0x1D8A88) = eax;

loc_0001684C: ;
    _fa = (uint32_t)(MEM32(esi + eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000168A2; /* je: equal / zero */

loc_00016852: ;
    edx = MEM32(esi + eax + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1AE914);
    eax = esp + 0x3C;
    PUSH32(esp, 0x1AE90C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001686Bu); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_0001686B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 0x00016888u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016888: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    MEM32(ecx + edx * 4) = eax;
    MEM32(0x1CA2D8) = MEM32(0x1CA2D8) + 1;
    _fa = (uint32_t)(MEM32(0x1CA2D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x1D8A88);

loc_000168A2: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x38;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x348) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x348 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00016827; /* jl: less (signed <) */

loc_000168B1: ;
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x1AE8F0);
    PUSH32(esp, 0x000168CBu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000168CB: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE8D4);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x000168FFu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000168FF: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE8B8);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x00016935u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016935: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE8A4);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x00016969u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016969: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE890);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x0001699Fu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_0001699F: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    edx = MEM32(0x1DE810);
    ecx = MEM32(0x1DE460);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x1CA2D8) = eax;
    fp_push(MEMF(edx + 0x40)); /* fld float */
    POP32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AE88C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1ae88c] */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    PUSH32(esp, 0x8000);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000169FB; /* jne: not equal / not zero */

loc_000169E0: ;
    PUSH32(esp, 0x1AE878);
    PUSH32(esp, 0x000169EAu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000169EA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x1AE864);
    goto loc_00016A14;

loc_000169FB: ;
    PUSH32(esp, 0x1AE84C);
    PUSH32(esp, 0x00016A05u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016A05: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x1AE834);

loc_00016A14: ;
    ecx = MEM32(0x1CA2D8);
    edx = MEM32(0x1CA2D0);
    MEM32(edx + ecx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x00016A3Bu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016A3B: ;
    ecx = MEM32(0x1CA2D8);
    edx = MEM32(0x1CA2D0);
    MEM32(edx + ecx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x40);
    MEM32(0x1CA2D8) = eax;
    MEM32(0x1D3F4C) = 0xBF67AE14u;
    MEM32(0x1D3F50) = 0xBF55C28Fu;
    MEM32(0x1D3F54) = 0x3FE7AE14;
    MEM32(0x1D3F58) = 0x3FD5C28F;
    PUSH32(esp, 0x00016A84u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016A84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016A9B; /* je: equal / zero */

loc_00016A8B: ;
    PUSH32(esp, 0x64);
    ecx = eax;
    PUSH32(esp, 0x00016A94u); RECOMP_ABI_CALL(0x000F0CD0u, sub_000F0CD0); /* call 0x000F0CD0 */

loc_00016A94: ;
    MEM32(0x1D3EC8) = eax;
    goto loc_00016AA1;

loc_00016A9B: ;
    MEM32(0x1D3EC8) = edi;

loc_00016AA1: ;
    _fa = (uint32_t)(MEM32(0x1DA878)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DA878), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016ACE; /* jne: not equal / not zero */

loc_00016AA9: ;
    PUSH32(esp, 0x360);
    PUSH32(esp, 0x00016AB3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016AB3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016AC8; /* je: equal / zero */

loc_00016ABA: ;
    ecx = eax;
    PUSH32(esp, 0x00016AC1u); RECOMP_ABI_CALL(0x000B0870u, sub_000B0870); /* call 0x000B0870 */

loc_00016AC1: ;
    MEM32(0x1DA878) = eax;
    goto loc_00016ACE;

loc_00016AC8: ;
    MEM32(0x1DA878) = edi;

loc_00016ACE: ;
    eax = MEM32(0x1D8A90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016AF8; /* jne: not equal / not zero */

loc_00016AD7: ;
    PUSH32(esp, 0x1E4);
    PUSH32(esp, 0x00016AE1u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016AE1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016AF1; /* je: equal / zero */

loc_00016AE8: ;
    ecx = eax;
    PUSH32(esp, 0x00016AEFu); RECOMP_ABI_CALL(0x00082CC0u, sub_00082CC0); /* call 0x00082CC0 */

loc_00016AEF: ;
    goto loc_00016AF3;

loc_00016AF1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016AF3: ;
    MEM32(0x1D8A90) = eax;

loc_00016AF8: ;
    ecx = eax;
    PUSH32(esp, 0x00016AFFu); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00016AFF: ;
    eax = MEM32(0x1D8A90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016B29; /* jne: not equal / not zero */

loc_00016B08: ;
    PUSH32(esp, 0x1E4);
    PUSH32(esp, 0x00016B12u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016B12: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016B22; /* je: equal / zero */

loc_00016B19: ;
    ecx = eax;
    PUSH32(esp, 0x00016B20u); RECOMP_ABI_CALL(0x00082CC0u, sub_00082CC0); /* call 0x00082CC0 */

loc_00016B20: ;
    goto loc_00016B24;

loc_00016B22: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016B24: ;
    MEM32(0x1D8A90) = eax;

loc_00016B29: ;
    ecx = eax;
    PUSH32(esp, 0x00016B30u); RECOMP_ABI_CALL(0x00082BA0u, sub_00082BA0); /* call 0x00082BA0 */

loc_00016B30: ;
    eax = MEM32(0x1DA88C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016B57; /* jne: not equal / not zero */

loc_00016B39: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x00016B40u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016B40: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016B50; /* je: equal / zero */

loc_00016B47: ;
    ecx = eax;
    PUSH32(esp, 0x00016B4Eu); RECOMP_ABI_CALL(0x000B2C70u, sub_000B2C70); /* call 0x000B2C70 */

loc_00016B4E: ;
    goto loc_00016B52;

loc_00016B50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016B52: ;
    MEM32(0x1DA88C) = eax;

loc_00016B57: ;
    ecx = eax;
    PUSH32(esp, 0x00016B5Eu); RECOMP_ABI_CALL(0x000B2C80u, sub_000B2C80); /* call 0x000B2C80 */

loc_00016B5E: ;
    eax = MEM32(0x1DA88C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016B85; /* jne: not equal / not zero */

loc_00016B67: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x00016B6Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016B6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016B7E; /* je: equal / zero */

loc_00016B75: ;
    ecx = eax;
    PUSH32(esp, 0x00016B7Cu); RECOMP_ABI_CALL(0x000B2C70u, sub_000B2C70); /* call 0x000B2C70 */

loc_00016B7C: ;
    goto loc_00016B80;

loc_00016B7E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016B80: ;
    MEM32(0x1DA88C) = eax;

loc_00016B85: ;
    ecx = eax;
    PUSH32(esp, 0x00016B8Cu); RECOMP_ABI_CALL(0x000B2D50u, sub_000B2D50); /* call 0x000B2D50 */

loc_00016B8C: ;
    eax = MEM32(0x1DA89C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016BB6; /* jne: not equal / not zero */

loc_00016B95: ;
    PUSH32(esp, 0x35C);
    PUSH32(esp, 0x00016B9Fu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016B9F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016BAF; /* je: equal / zero */

loc_00016BA6: ;
    ecx = eax;
    PUSH32(esp, 0x00016BADu); RECOMP_ABI_CALL(0x000B3FF0u, sub_000B3FF0); /* call 0x000B3FF0 */

loc_00016BAD: ;
    goto loc_00016BB1;

loc_00016BAF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016BB1: ;
    MEM32(0x1DA89C) = eax;

loc_00016BB6: ;
    ecx = eax;
    PUSH32(esp, 0x00016BBDu); RECOMP_ABI_CALL(0x000B3880u, sub_000B3880); /* call 0x000B3880 */

loc_00016BBD: ;
    eax = MEM32(0x1DA954);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016BE7; /* jne: not equal / not zero */

loc_00016BC6: ;
    PUSH32(esp, 0x548);
    PUSH32(esp, 0x00016BD0u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016BD0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016BE0; /* je: equal / zero */

loc_00016BD7: ;
    ecx = eax;
    PUSH32(esp, 0x00016BDEu); RECOMP_ABI_CALL(0x000B6B10u, sub_000B6B10); /* call 0x000B6B10 */

loc_00016BDE: ;
    goto loc_00016BE2;

loc_00016BE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016BE2: ;
    MEM32(0x1DA954) = eax;

loc_00016BE7: ;
    ecx = eax;
    PUSH32(esp, 0x00016BEEu); RECOMP_ABI_CALL(0x000B6650u, sub_000B6650); /* call 0x000B6650 */

loc_00016BEE: ;
    eax = MEM32(0x1DA954);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016C18; /* jne: not equal / not zero */

loc_00016BF7: ;
    PUSH32(esp, 0x548);
    PUSH32(esp, 0x00016C01u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016C01: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016C11; /* je: equal / zero */

loc_00016C08: ;
    ecx = eax;
    PUSH32(esp, 0x00016C0Fu); RECOMP_ABI_CALL(0x000B6B10u, sub_000B6B10); /* call 0x000B6B10 */

loc_00016C0F: ;
    goto loc_00016C13;

loc_00016C11: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016C13: ;
    MEM32(0x1DA954) = eax;

loc_00016C18: ;
    ecx = eax;
    PUSH32(esp, 0x00016C1Fu); RECOMP_ABI_CALL(0x000B6980u, sub_000B6980); /* call 0x000B6980 */

loc_00016C1F: ;
    PUSH32(esp, 0x9C);
    PUSH32(esp, 0x00016C29u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016C29: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016C39; /* je: equal / zero */

loc_00016C30: ;
    ecx = eax;
    PUSH32(esp, 0x00016C37u); RECOMP_ABI_CALL(0x000129F0u, sub_000129F0); /* call 0x000129F0 */

loc_00016C37: ;
    goto loc_00016C3B;

loc_00016C39: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016C3B: ;
    MEM32(0x1D3F0C) = eax;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00016C47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016C44u); } /* indirect call */
    }

loc_00016C47: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x00016C4Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016C4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016C6C; /* je: equal / zero */

loc_00016C55: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x30) = edi;
    PUSH32(esp, 0x00016C65u); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_00016C65: ;
    MEM32(0x1D3F08) = eax;
    goto loc_00016C72;

loc_00016C6C: ;
    MEM32(0x1D3F08) = edi;

loc_00016C72: ;
    PUSH32(esp, 0x00016C77u); RECOMP_ABI_CALL(0x00015B40u, sub_00015B40); /* call 0x00015B40 */

loc_00016C77: ;
    PUSH32(esp, 0x2A4);
    PUSH32(esp, 0x00016C81u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016C81: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016C9D; /* je: equal / zero */

loc_00016C88: ;
    edx = MEM32(0x1D3EEC);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00016C96u); RECOMP_ABI_CALL(0x0008AA20u, sub_0008AA20); /* call 0x0008AA20 */

loc_00016C96: ;
    MEM32(0x1D3EF0) = eax;
    goto loc_00016CA3;

loc_00016C9D: ;
    MEM32(0x1D3EF0) = edi;

loc_00016CA3: ;
    PUSH32(esp, 0x00016CA8u); RECOMP_ABI_CALL(0x000A53B0u, sub_000A53B0); /* call 0x000A53B0 */

loc_00016CA8: ;
    edx = MEM32(0x1D3ED8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 4) = eax;
    eax = MEM32(0x1D3ED8);
    ecx = 0x80000012u;
    MEM32(eax + 8) = ecx;

loc_00016CC0: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00016040
 * Original: 0x00016040 - 0x00016CC8 (3208 bytes, 859 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016040(void)
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

loc_00016040: ;
    PUSH32(esp, 0x00016045u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016045: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001605C; /* je: equal / zero */

loc_0001604C: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00016055u); RECOMP_ABI_CALL(0x000F3C00u, sub_000F3C00); /* call 0x000F3C00 */

loc_00016055: ;
    MEM32(0x1D3ED4) = eax;
    goto loc_00016062;

loc_0001605C: ;
    MEM32(0x1D3ED4) = edi;

loc_00016062: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0001606Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001606A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001607C; /* je: equal / zero */

loc_00016071: ;
    ecx = eax;
    PUSH32(esp, 0x00016078u); RECOMP_ABI_CALL(0x000F3B40u, sub_000F3B40); /* call 0x000F3B40 */

loc_00016078: ;
    esi = eax;
    goto loc_0001607E;

loc_0001607C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001607E: ;
    PUSH32(esp, 6);
    PUSH32(esp, 6);
    PUSH32(esp, 0x1F);
    ecx = esi;
    PUSH32(esp, 0x0001608Bu); RECOMP_ABI_CALL(0x000F3C20u, sub_000F3C20); /* call 0x000F3C20 */

loc_0001608B: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0xC) = 0;
    MEM8(esp + 0x14) = 0x10;
    MEM8(esp + 0x1C) = 8;
    MEM8(esp + 0x24) = 0x1C;
    MEM8(esp + 0xD) = 1;
    MEM8(esp + 0x15) = 0x11;
    MEM8(esp + 0x1D) = 9;
    MEM8(esp + 0x25) = 0x1D;
    MEM8(esp + 0xE) = 2;
    MEM8(esp + 0x16) = 0x12;
    MEM8(esp + 0x1E) = 0xA;
    MEM8(esp + 0x26) = 0x1E;
    MEM8(esp + 0xF) = 3;
    MEM8(esp + 0x17) = 0x13;
    MEM8(esp + 0x1F) = 0xB;
    MEM8(esp + 0x27) = 0x17;
    MEM8(esp + 0x10) = 4;
    MEM8(esp + 0x18) = 0x14;
    MEM8(esp + 0x20) = 0xC;
    MEM8(esp + 0x28) = 0x18;
    MEM8(esp + 0x11) = 5;
    MEM8(esp + 0x19) = 0x15;
    MEM8(esp + 0x21) = 0xD;
    MEM8(esp + 0x29) = 0x19;
    MEM8(esp + 0x12) = 6;
    MEM8(esp + 0x1A) = 0x16;
    MEM8(esp + 0x22) = 0xE;
    MEM8(esp + 0x2A) = 0x1A;
    MEM8(esp + 0x13) = 0xF;
    MEM8(esp + 0x1B) = 7;
    MEM8(esp + 0x23) = 0x1B;
    PUSH32(esp, 0x00016132u); RECOMP_ABI_CALL(0x000F3BB0u, sub_000F3BB0); /* call 0x000F3BB0 */

loc_00016132: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(esp + 0x14) = 4;
    MEM8(esp + 0x15) = 5;
    MEM8(esp + 0x16) = 6;
    PUSH32(esp, 0x00016150u); RECOMP_ABI_CALL(0x000F3CD0u, sub_000F3CD0); /* call 0x000F3CD0 */

loc_00016150: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    ecx = esi;
    MEM8(esp + 0x14) = 0;
    MEM8(esp + 0x15) = 1;
    MEM8(esp + 0x16) = 2;
    MEM8(esp + 0x17) = 3;
    PUSH32(esp, 0x00016174u); RECOMP_ABI_CALL(0x000F3CD0u, sub_000F3CD0); /* call 0x000F3CD0 */

loc_00016174: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 2);
    ecx = esi;
    MEM8(esp + 0x14) = 0xF;
    MEM8(esp + 0x15) = 0x10;
    MEM8(esp + 0x16) = 0x11;
    MEM8(esp + 0x17) = 0x12;
    MEM8(esp + 0x18) = 0x13;
    MEM8(esp + 0x19) = 0x14;
    MEM8(esp + 0x1A) = 0x15;
    MEM8(esp + 0x1B) = 0x16;
    PUSH32(esp, 0x000161ACu); RECOMP_ABI_CALL(0x000F3CD0u, sub_000F3CD0); /* call 0x000F3CD0 */

loc_000161AC: ;
    MEM8(esp + 8) = 7;
    MEM8(esp + 9) = 8;
    MEM8(esp + 0xA) = 9;
    MEM8(esp + 0xB) = 0xA;
    MEM8(esp + 0xC) = 0xB;
    MEM8(esp + 0xD) = 0xC;
    MEM8(esp + 0xE) = 0xD;
    MEM8(esp + 0xF) = 0xE;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x000161E4u); RECOMP_ABI_CALL(0x000F3CD0u, sub_000F3CD0); /* call 0x000F3CD0 */

loc_000161E4: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    ecx = esi;
    MEM8(esp + 0x14) = 0x17;
    MEM8(esp + 0x15) = 0x18;
    MEM8(esp + 0x16) = 0x19;
    MEM8(esp + 0x17) = 0x1A;
    PUSH32(esp, 0x00016208u); RECOMP_ABI_CALL(0x000F3CD0u, sub_000F3CD0); /* call 0x000F3CD0 */

loc_00016208: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    ecx = esi;
    MEM8(esp + 0x14) = 0x1B;
    MEM8(esp + 0x15) = 0x1C;
    MEM8(esp + 0x16) = 0x1D;
    MEM8(esp + 0x17) = 0x1E;
    PUSH32(esp, 0x0001622Cu); RECOMP_ABI_CALL(0x000F3CD0u, sub_000F3CD0); /* call 0x000F3CD0 */

loc_0001622C: ;
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0001623Au); RECOMP_ABI_CALL(0x000F3BD0u, sub_000F3BD0); /* call 0x000F3BD0 */

loc_0001623A: ;
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00016249u); RECOMP_ABI_CALL(0x000F3BD0u, sub_000F3BD0); /* call 0x000F3BD0 */

loc_00016249: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x10);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00016258u); RECOMP_ABI_CALL(0x000F3BD0u, sub_000F3BD0); /* call 0x000F3BD0 */

loc_00016258: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 9);
    PUSH32(esp, 8);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x00016267u); RECOMP_ABI_CALL(0x000F3BD0u, sub_000F3BD0); /* call 0x000F3BD0 */

loc_00016267: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x17);
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00016276u); RECOMP_ABI_CALL(0x000F3BD0u, sub_000F3BD0); /* call 0x000F3BD0 */

loc_00016276: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x00016285u); RECOMP_ABI_CALL(0x000F3BD0u, sub_000F3BD0); /* call 0x000F3BD0 */

loc_00016285: ;
    ecx = MEM32(0x1D3ED4);
    edx = MEM32(ecx + 4);
    MEM32(edx) = esi;
    eax = MEM32(0x1D3ED0);
    ecx = MEM32(0x1D3ED4);
    PUSH32(esp, 0x124);
    MEM32(0x1DE808) = eax;
    MEM32(0x1DE80C) = ecx;
    PUSH32(esp, 0x000162B0u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000162B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000162C5; /* je: equal / zero */

loc_000162B7: ;
    ecx = eax;
    PUSH32(esp, 0x000162BEu); RECOMP_ABI_CALL(0x000F35E0u, sub_000F35E0); /* call 0x000F35E0 */

loc_000162BE: ;
    MEM32(0x1D3EC0) = eax;
    goto loc_000162CB;

loc_000162C5: ;
    MEM32(0x1D3EC0) = edi;

loc_000162CB: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x000162D2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000162D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000162E2; /* je: equal / zero */

loc_000162D9: ;
    ecx = eax;
    PUSH32(esp, 0x000162E0u); RECOMP_ABI_CALL(0x000F1550u, sub_000F1550); /* call 0x000F1550 */

loc_000162E0: ;
    goto loc_000162E4;

loc_000162E2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000162E4: ;
    PUSH32(esp, 0x40);
    MEM32(0x1D3EC4) = eax;
    MEM32(0x1DE470) = eax;
    PUSH32(esp, 0x000162F5u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000162F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016318; /* je: equal / zero */

loc_000162FC: ;
    edx = MEM32(0x1AEF0C);
    ecx = MEM32(0x1AEF08);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00016311u); RECOMP_ABI_CALL(0x000F2E60u, sub_000F2E60); /* call 0x000F2E60 */

loc_00016311: ;
    MEM32(0x1D3ECC) = eax;
    goto loc_0001631E;

loc_00016318: ;
    MEM32(0x1D3ECC) = edi;

loc_0001631E: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00016325u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016325: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001633C; /* je: equal / zero */

loc_0001632C: ;
    PUSH32(esp, 5);
    ecx = eax;
    PUSH32(esp, 0x00016335u); RECOMP_ABI_CALL(0x000F2570u, sub_000F2570); /* call 0x000F2570 */

loc_00016335: ;
    MEM32(0x1D3ED8) = eax;
    goto loc_00016342;

loc_0001633C: ;
    MEM32(0x1D3ED8) = edi;

loc_00016342: ;
    PUSH32(esp, 0x00016347u); RECOMP_ABI_CALL(0x00089D30u, sub_00089D30); /* call 0x00089D30 */

loc_00016347: ;
    eax = MEM32(0x1D8A88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016371; /* jne: not equal / not zero */

loc_00016350: ;
    PUSH32(esp, 0x34C);
    PUSH32(esp, 0x0001635Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001635A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001636A; /* je: equal / zero */

loc_00016361: ;
    ecx = eax;
    PUSH32(esp, 0x00016368u); RECOMP_ABI_CALL(0x00082440u, sub_00082440); /* call 0x00082440 */

loc_00016368: ;
    goto loc_0001636C;

loc_0001636A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001636C: ;
    MEM32(0x1D8A88) = eax;

loc_00016371: ;
    ecx = eax;
    PUSH32(esp, 0x00016378u); RECOMP_ABI_CALL(0x000823A0u, sub_000823A0); /* call 0x000823A0 */

loc_00016378: ;
    eax = MEM32(0x1D8A8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001639F; /* jne: not equal / not zero */

loc_00016381: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x00016388u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016388: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016398; /* je: equal / zero */

loc_0001638F: ;
    ecx = eax;
    PUSH32(esp, 0x00016396u); RECOMP_ABI_CALL(0x00082920u, sub_00082920); /* call 0x00082920 */

loc_00016396: ;
    goto loc_0001639A;

loc_00016398: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001639A: ;
    MEM32(0x1D8A8C) = eax;

loc_0001639F: ;
    ecx = eax;
    PUSH32(esp, 0x000163A6u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_000163A6: ;
    eax = MEM32(0x1D8A8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000163CD; /* jne: not equal / not zero */

loc_000163AF: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x000163B6u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000163B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000163C6; /* je: equal / zero */

loc_000163BD: ;
    ecx = eax;
    PUSH32(esp, 0x000163C4u); RECOMP_ABI_CALL(0x00082920u, sub_00082920); /* call 0x00082920 */

loc_000163C4: ;
    goto loc_000163C8;

loc_000163C6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000163C8: ;
    MEM32(0x1D8A8C) = eax;

loc_000163CD: ;
    ecx = eax;
    PUSH32(esp, 0x000163D4u); RECOMP_ABI_CALL(0x000829F0u, sub_000829F0); /* call 0x000829F0 */

loc_000163D4: ;
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x1AEAE8);
    PUSH32(esp, 0x000163EEu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000163EE: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AEAD4);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x00016422u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016422: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AEAC0);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x00016458u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016458: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AEAA8);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x0001648Cu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_0001648C: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AEA8C);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x000164C2u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000164C2: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AEA78);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x000164F6u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000164F6: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    MEM32(ecx + edx * 4) = eax;
    MEM32(0x1CA2D8) = MEM32(0x1CA2D8) + 1;
    _fa = (uint32_t)(MEM32(0x1CA2D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x1AEA64);
    PUSH32(esp, 0x00016525u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016525: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AEA4C);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x00016559u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016559: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AEA34);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x0001658Fu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_0001658F: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AEA20);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x000165C3u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000165C3: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AEA04);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x000165F9u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000165F9: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE9EC);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x0001662Du); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_0001662D: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    PUSH32(esp, edi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 1);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x8000);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 0x1AE9D0);
    PUSH32(esp, 0x00016663u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016663: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE9B4);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x00016697u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016697: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE99C);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x000166CDu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000166CD: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE984);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x00016701u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016701: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE970);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x00016737u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016737: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE960);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x0001676Bu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_0001676B: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE94C);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x000167A1u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000167A1: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE938);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x000167D5u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000167D5: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE920);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x0001680Bu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_0001680B: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    MEM32(ecx + edx * 4) = eax;
    MEM32(0x1CA2D8) = MEM32(0x1CA2D8) + 1;
    _fa = (uint32_t)(MEM32(0x1CA2D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x1D8A88);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016827: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001684C; /* jne: not equal / not zero */

loc_0001682B: ;
    PUSH32(esp, 0x34C);
    PUSH32(esp, 0x00016835u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016835: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016845; /* je: equal / zero */

loc_0001683C: ;
    ecx = eax;
    PUSH32(esp, 0x00016843u); RECOMP_ABI_CALL(0x00082440u, sub_00082440); /* call 0x00082440 */

loc_00016843: ;
    goto loc_00016847;

loc_00016845: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016847: ;
    MEM32(0x1D8A88) = eax;

loc_0001684C: ;
    _fa = (uint32_t)(MEM32(esi + eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000168A2; /* je: equal / zero */

loc_00016852: ;
    edx = MEM32(esi + eax + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1AE914);
    eax = esp + 0x3C;
    PUSH32(esp, 0x1AE90C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001686Bu); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_0001686B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 0x00016888u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016888: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    MEM32(ecx + edx * 4) = eax;
    MEM32(0x1CA2D8) = MEM32(0x1CA2D8) + 1;
    _fa = (uint32_t)(MEM32(0x1CA2D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x1D8A88);

loc_000168A2: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x38;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x348) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x348 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00016827; /* jl: less (signed <) */

loc_000168B1: ;
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x1AE8F0);
    PUSH32(esp, 0x000168CBu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000168CB: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE8D4);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x000168FFu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000168FF: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE8B8);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x00016935u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016935: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE8A4);
    MEM32(0x1CA2D8) = eax;
    PUSH32(esp, 0x00016969u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016969: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1AE890);
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x0001699Fu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_0001699F: ;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1CA2D0);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    edx = MEM32(0x1DE810);
    ecx = MEM32(0x1DE460);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x1CA2D8) = eax;
    fp_push(MEMF(edx + 0x40)); /* fld float */
    POP32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AE88C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1ae88c] */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    PUSH32(esp, 0x8000);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000169FB; /* jne: not equal / not zero */

loc_000169E0: ;
    PUSH32(esp, 0x1AE878);
    PUSH32(esp, 0x000169EAu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_000169EA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x1AE864);
    goto loc_00016A14;

loc_000169FB: ;
    PUSH32(esp, 0x1AE84C);
    PUSH32(esp, 0x00016A05u); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016A05: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x1AE834);

loc_00016A14: ;
    ecx = MEM32(0x1CA2D8);
    edx = MEM32(0x1CA2D0);
    MEM32(edx + ecx * 4) = eax;
    edx = MEM32(0x1CA2D8);
    ecx = MEM32(0x1DE460);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x1CA2D8) = edx;
    PUSH32(esp, 0x00016A3Bu); RECOMP_ABI_CALL(0x000ECCA0u, sub_000ECCA0); /* call 0x000ECCA0 */

loc_00016A3B: ;
    ecx = MEM32(0x1CA2D8);
    edx = MEM32(0x1CA2D0);
    MEM32(edx + ecx * 4) = eax;
    eax = MEM32(0x1CA2D8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x40);
    MEM32(0x1CA2D8) = eax;
    MEM32(0x1D3F4C) = 0xBF67AE14u;
    MEM32(0x1D3F50) = 0xBF55C28Fu;
    MEM32(0x1D3F54) = 0x3FE7AE14;
    MEM32(0x1D3F58) = 0x3FD5C28F;
    PUSH32(esp, 0x00016A84u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016A84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016A9B; /* je: equal / zero */

loc_00016A8B: ;
    PUSH32(esp, 0x64);
    ecx = eax;
    PUSH32(esp, 0x00016A94u); RECOMP_ABI_CALL(0x000F0CD0u, sub_000F0CD0); /* call 0x000F0CD0 */

loc_00016A94: ;
    MEM32(0x1D3EC8) = eax;
    goto loc_00016AA1;

loc_00016A9B: ;
    MEM32(0x1D3EC8) = edi;

loc_00016AA1: ;
    _fa = (uint32_t)(MEM32(0x1DA878)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DA878), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016ACE; /* jne: not equal / not zero */

loc_00016AA9: ;
    PUSH32(esp, 0x360);
    PUSH32(esp, 0x00016AB3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016AB3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016AC8; /* je: equal / zero */

loc_00016ABA: ;
    ecx = eax;
    PUSH32(esp, 0x00016AC1u); RECOMP_ABI_CALL(0x000B0870u, sub_000B0870); /* call 0x000B0870 */

loc_00016AC1: ;
    MEM32(0x1DA878) = eax;
    goto loc_00016ACE;

loc_00016AC8: ;
    MEM32(0x1DA878) = edi;

loc_00016ACE: ;
    eax = MEM32(0x1D8A90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016AF8; /* jne: not equal / not zero */

loc_00016AD7: ;
    PUSH32(esp, 0x1E4);
    PUSH32(esp, 0x00016AE1u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016AE1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016AF1; /* je: equal / zero */

loc_00016AE8: ;
    ecx = eax;
    PUSH32(esp, 0x00016AEFu); RECOMP_ABI_CALL(0x00082CC0u, sub_00082CC0); /* call 0x00082CC0 */

loc_00016AEF: ;
    goto loc_00016AF3;

loc_00016AF1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016AF3: ;
    MEM32(0x1D8A90) = eax;

loc_00016AF8: ;
    ecx = eax;
    PUSH32(esp, 0x00016AFFu); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00016AFF: ;
    eax = MEM32(0x1D8A90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016B29; /* jne: not equal / not zero */

loc_00016B08: ;
    PUSH32(esp, 0x1E4);
    PUSH32(esp, 0x00016B12u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016B12: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016B22; /* je: equal / zero */

loc_00016B19: ;
    ecx = eax;
    PUSH32(esp, 0x00016B20u); RECOMP_ABI_CALL(0x00082CC0u, sub_00082CC0); /* call 0x00082CC0 */

loc_00016B20: ;
    goto loc_00016B24;

loc_00016B22: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016B24: ;
    MEM32(0x1D8A90) = eax;

loc_00016B29: ;
    ecx = eax;
    PUSH32(esp, 0x00016B30u); RECOMP_ABI_CALL(0x00082BA0u, sub_00082BA0); /* call 0x00082BA0 */

loc_00016B30: ;
    eax = MEM32(0x1DA88C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016B57; /* jne: not equal / not zero */

loc_00016B39: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x00016B40u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016B40: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016B50; /* je: equal / zero */

loc_00016B47: ;
    ecx = eax;
    PUSH32(esp, 0x00016B4Eu); RECOMP_ABI_CALL(0x000B2C70u, sub_000B2C70); /* call 0x000B2C70 */

loc_00016B4E: ;
    goto loc_00016B52;

loc_00016B50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016B52: ;
    MEM32(0x1DA88C) = eax;

loc_00016B57: ;
    ecx = eax;
    PUSH32(esp, 0x00016B5Eu); RECOMP_ABI_CALL(0x000B2C80u, sub_000B2C80); /* call 0x000B2C80 */

loc_00016B5E: ;
    eax = MEM32(0x1DA88C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016B85; /* jne: not equal / not zero */

loc_00016B67: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x00016B6Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016B6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016B7E; /* je: equal / zero */

loc_00016B75: ;
    ecx = eax;
    PUSH32(esp, 0x00016B7Cu); RECOMP_ABI_CALL(0x000B2C70u, sub_000B2C70); /* call 0x000B2C70 */

loc_00016B7C: ;
    goto loc_00016B80;

loc_00016B7E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016B80: ;
    MEM32(0x1DA88C) = eax;

loc_00016B85: ;
    ecx = eax;
    PUSH32(esp, 0x00016B8Cu); RECOMP_ABI_CALL(0x000B2D50u, sub_000B2D50); /* call 0x000B2D50 */

loc_00016B8C: ;
    eax = MEM32(0x1DA89C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016BB6; /* jne: not equal / not zero */

loc_00016B95: ;
    PUSH32(esp, 0x35C);
    PUSH32(esp, 0x00016B9Fu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016B9F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016BAF; /* je: equal / zero */

loc_00016BA6: ;
    ecx = eax;
    PUSH32(esp, 0x00016BADu); RECOMP_ABI_CALL(0x000B3FF0u, sub_000B3FF0); /* call 0x000B3FF0 */

loc_00016BAD: ;
    goto loc_00016BB1;

loc_00016BAF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016BB1: ;
    MEM32(0x1DA89C) = eax;

loc_00016BB6: ;
    ecx = eax;
    PUSH32(esp, 0x00016BBDu); RECOMP_ABI_CALL(0x000B3880u, sub_000B3880); /* call 0x000B3880 */

loc_00016BBD: ;
    eax = MEM32(0x1DA954);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016BE7; /* jne: not equal / not zero */

loc_00016BC6: ;
    PUSH32(esp, 0x548);
    PUSH32(esp, 0x00016BD0u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016BD0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016BE0; /* je: equal / zero */

loc_00016BD7: ;
    ecx = eax;
    PUSH32(esp, 0x00016BDEu); RECOMP_ABI_CALL(0x000B6B10u, sub_000B6B10); /* call 0x000B6B10 */

loc_00016BDE: ;
    goto loc_00016BE2;

loc_00016BE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016BE2: ;
    MEM32(0x1DA954) = eax;

loc_00016BE7: ;
    ecx = eax;
    PUSH32(esp, 0x00016BEEu); RECOMP_ABI_CALL(0x000B6650u, sub_000B6650); /* call 0x000B6650 */

loc_00016BEE: ;
    eax = MEM32(0x1DA954);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016C18; /* jne: not equal / not zero */

loc_00016BF7: ;
    PUSH32(esp, 0x548);
    PUSH32(esp, 0x00016C01u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016C01: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016C11; /* je: equal / zero */

loc_00016C08: ;
    ecx = eax;
    PUSH32(esp, 0x00016C0Fu); RECOMP_ABI_CALL(0x000B6B10u, sub_000B6B10); /* call 0x000B6B10 */

loc_00016C0F: ;
    goto loc_00016C13;

loc_00016C11: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016C13: ;
    MEM32(0x1DA954) = eax;

loc_00016C18: ;
    ecx = eax;
    PUSH32(esp, 0x00016C1Fu); RECOMP_ABI_CALL(0x000B6980u, sub_000B6980); /* call 0x000B6980 */

loc_00016C1F: ;
    PUSH32(esp, 0x9C);
    PUSH32(esp, 0x00016C29u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016C29: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016C39; /* je: equal / zero */

loc_00016C30: ;
    ecx = eax;
    PUSH32(esp, 0x00016C37u); RECOMP_ABI_CALL(0x000129F0u, sub_000129F0); /* call 0x000129F0 */

loc_00016C37: ;
    goto loc_00016C3B;

loc_00016C39: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016C3B: ;
    MEM32(0x1D3F0C) = eax;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00016C47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016C44u); } /* indirect call */
    }

loc_00016C47: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x00016C4Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016C4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016C6C; /* je: equal / zero */

loc_00016C55: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x30) = edi;
    PUSH32(esp, 0x00016C65u); RECOMP_ABI_CALL(0x000148D0u, sub_000148D0); /* call 0x000148D0 */

loc_00016C65: ;
    MEM32(0x1D3F08) = eax;
    goto loc_00016C72;

loc_00016C6C: ;
    MEM32(0x1D3F08) = edi;

loc_00016C72: ;
    PUSH32(esp, 0x00016C77u); RECOMP_ABI_CALL(0x00015B40u, sub_00015B40); /* call 0x00015B40 */

loc_00016C77: ;
    PUSH32(esp, 0x2A4);
    PUSH32(esp, 0x00016C81u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016C81: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016C9D; /* je: equal / zero */

loc_00016C88: ;
    edx = MEM32(0x1D3EEC);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00016C96u); RECOMP_ABI_CALL(0x0008AA20u, sub_0008AA20); /* call 0x0008AA20 */

loc_00016C96: ;
    MEM32(0x1D3EF0) = eax;
    goto loc_00016CA3;

loc_00016C9D: ;
    MEM32(0x1D3EF0) = edi;

loc_00016CA3: ;
    PUSH32(esp, 0x00016CA8u); RECOMP_ABI_CALL(0x000A53B0u, sub_000A53B0); /* call 0x000A53B0 */

loc_00016CA8: ;
    edx = MEM32(0x1D3ED8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 4) = eax;
    eax = MEM32(0x1D3ED8);
    ecx = 0x80000012u;
    MEM32(eax + 8) = ecx;
    POP32(esp, edi);
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00016CD0
 * Original: 0x00016CD0 - 0x00016CEF (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016CD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00016CD8u); RECOMP_ABI_CALL(0x00015C70u, sub_00015C70); /* call 0x00015C70 */

loc_00016CD8: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016CED; /* je: equal / zero */

loc_00016CDE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016CE4u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00016CE4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_00016CED: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016CF0
 * Original: 0x00016CF0 - 0x00016D5B (107 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1AEAFC;
    if (CMP_EQ(_fa, _fb)) goto loc_00016D45; /* je: equal / zero */

loc_00016D00: ;
    PUSH32(esp, edi);

loc_00016D01: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(eax + 4);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00016D12; /* je: equal / zero */

loc_00016D0D: ;
    MEM32(edx + 4) = ecx;
    goto loc_00016D15;

loc_00016D12: ;
    MEM32(esi + 4) = ecx;

loc_00016D15: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016D24; /* je: equal / zero */

loc_00016D1C: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_00016D2A;

loc_00016D24: ;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;

loc_00016D2A: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016D37; /* je: equal / zero */

loc_00016D31: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00016D37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016D34u); } /* indirect call */
    }

loc_00016D37: ;
    edx = MEM32(esi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0xC) = edx;
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00016D01; /* jne: not equal / not zero */

loc_00016D44: ;
    POP32(esp, edi);

loc_00016D45: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016D59; /* je: equal / zero */

loc_00016D4C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00016D52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016D50u); } /* indirect call */
    }

loc_00016D52: ;
    MEM32(esi + 0x10) = 0;

loc_00016D59: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016D60
 * Original: 0x00016D60 - 0x00016DCB (107 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016D60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1AEB00;
    if (CMP_EQ(_fa, _fb)) goto loc_00016DB5; /* je: equal / zero */

loc_00016D70: ;
    PUSH32(esp, edi);

loc_00016D71: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(eax + 4);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00016D82; /* je: equal / zero */

loc_00016D7D: ;
    MEM32(edx + 4) = ecx;
    goto loc_00016D85;

loc_00016D82: ;
    MEM32(esi + 4) = ecx;

loc_00016D85: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016D94; /* je: equal / zero */

loc_00016D8C: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_00016D9A;

loc_00016D94: ;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;

loc_00016D9A: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016DA7; /* je: equal / zero */

loc_00016DA1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00016DA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016DA4u); } /* indirect call */
    }

loc_00016DA7: ;
    edx = MEM32(esi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0xC) = edx;
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00016D71; /* jne: not equal / not zero */

loc_00016DB4: ;
    POP32(esp, edi);

loc_00016DB5: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016DC9; /* je: equal / zero */

loc_00016DBC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00016DC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016DC0u); } /* indirect call */
    }

loc_00016DC2: ;
    MEM32(esi + 0x10) = 0;

loc_00016DC9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016DD0
 * Original: 0x00016DD0 - 0x00016E3B (107 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1AEB04;
    if (CMP_EQ(_fa, _fb)) goto loc_00016E25; /* je: equal / zero */

loc_00016DE0: ;
    PUSH32(esp, edi);

loc_00016DE1: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(eax + 4);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00016DF2; /* je: equal / zero */

loc_00016DED: ;
    MEM32(edx + 4) = ecx;
    goto loc_00016DF5;

loc_00016DF2: ;
    MEM32(esi + 4) = ecx;

loc_00016DF5: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016E04; /* je: equal / zero */

loc_00016DFC: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    goto loc_00016E0A;

loc_00016E04: ;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;

loc_00016E0A: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016E17; /* je: equal / zero */

loc_00016E11: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00016E17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016E14u); } /* indirect call */
    }

loc_00016E17: ;
    edx = MEM32(esi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0xC) = edx;
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00016DE1; /* jne: not equal / not zero */

loc_00016E24: ;
    POP32(esp, edi);

loc_00016E25: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016E39; /* je: equal / zero */

loc_00016E2C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00016E32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016E30u); } /* indirect call */
    }

loc_00016E32: ;
    MEM32(esi + 0x10) = 0;

loc_00016E39: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016E40
 * Original: 0x00016E40 - 0x00016E5E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016E40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00016E48u); RECOMP_ABI_CALL(0x00016CF0u, sub_00016CF0); /* call 0x00016CF0 */

loc_00016E48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00016E58; /* je: equal / zero */

loc_00016E4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E55u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00016E55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016E58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00016E60
 * Original: 0x00016E60 - 0x00016E7E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016E60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00016E68u); RECOMP_ABI_CALL(0x00016D60u, sub_00016D60); /* call 0x00016D60 */

loc_00016E68: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00016E78; /* je: equal / zero */

loc_00016E6F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E75u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00016E75: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016E78: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00016E80
 * Original: 0x00016E80 - 0x00016E9E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016E80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00016E88u); RECOMP_ABI_CALL(0x00016DD0u, sub_00016DD0); /* call 0x00016DD0 */

loc_00016E88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00016E98; /* je: equal / zero */

loc_00016E8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E95u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00016E95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016E98: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00016EA0
 * Original: 0x00016EA0 - 0x000170DF (575 bytes, 170 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016EA0: ;
    eax = MEM32(0x1D3EF4);
    ecx = MEM32(0x1DE460);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016EB2u); RECOMP_ABI_CALL(0x000ECFB0u, sub_000ECFB0); /* call 0x000ECFB0 */

loc_00016EB2: ;
    eax = MEM32(0x1D86C8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x1D3EF4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00016EE4; /* jne: not equal / not zero */

loc_00016EC3: ;
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x00016ECDu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00016ECD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016EDD; /* je: equal / zero */

loc_00016ED4: ;
    ecx = eax;
    PUSH32(esp, 0x00016EDBu); RECOMP_ABI_CALL(0x00068B80u, sub_00068B80); /* call 0x00068B80 */

loc_00016EDB: ;
    goto loc_00016EDF;

loc_00016EDD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016EDF: ;
    MEM32(0x1D86C8) = eax;

loc_00016EE4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00016EEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016EE8u); } /* indirect call */
    }

loc_00016EEB: ;
    ecx = 0x1CA2D0;
    PUSH32(esp, 0x00016EF5u); RECOMP_ABI_CALL(0x00015C70u, sub_00015C70); /* call 0x00015C70 */

loc_00016EF5: ;
    ecx = MEM32(0x1D3EE0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016F0B; /* je: equal / zero */

loc_00016EFF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00016F05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016F03u); } /* indirect call */
    }

loc_00016F05: ;
    MEM32(0x1D3EE0) = esi;

loc_00016F0B: ;
    ecx = MEM32(0x1D3EC8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00016F2C; /* je: equal / zero */

loc_00016F16: ;
    edi = ecx;
    PUSH32(esp, 0x00016F1Du); RECOMP_ABI_CALL(0x000F0D50u, sub_000F0D50); /* call 0x000F0D50 */

loc_00016F1D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00016F23u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00016F23: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x1D3EC8) = esi;

loc_00016F2C: ;
    ecx = MEM32(0x1D3ED8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016F42; /* je: equal / zero */

loc_00016F36: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00016F3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016F3Au); } /* indirect call */
    }

loc_00016F3C: ;
    MEM32(0x1D3ED8) = esi;

loc_00016F42: ;
    edi = MEM32(0x1D3ECC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016F6B; /* je: equal / zero */

loc_00016F4C: ;
    ecx = edi + 0x2C;
    PUSH32(esp, 0x00016F54u); RECOMP_ABI_CALL(0x00016CF0u, sub_00016CF0); /* call 0x00016CF0 */

loc_00016F54: ;
    ecx = edi + 0xC;
    PUSH32(esp, 0x00016F5Cu); RECOMP_ABI_CALL(0x00016DD0u, sub_00016DD0); /* call 0x00016DD0 */

loc_00016F5C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00016F62u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00016F62: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x1D3ECC) = esi;

loc_00016F6B: ;
    ecx = MEM32(0x1D3EC4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016F8B; /* je: equal / zero */

loc_00016F75: ;
    edi = ecx;
    PUSH32(esp, 0x00016F7Cu); RECOMP_ABI_CALL(0x000F1740u, sub_000F1740); /* call 0x000F1740 */

loc_00016F7C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00016F82u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00016F82: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x1D3EC4) = esi;

loc_00016F8B: ;
    ecx = MEM32(0x1D3EC0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016FA1; /* je: equal / zero */

loc_00016F95: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00016F9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016F99u); } /* indirect call */
    }

loc_00016F9B: ;
    MEM32(0x1D3EC0) = esi;

loc_00016FA1: ;
    eax = MEM32(0x1D3EB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016FB9; /* je: equal / zero */

loc_00016FAA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016FB0u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00016FB0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x1D3EB8) = esi;

loc_00016FB9: ;
    eax = MEM32(0x1D3EB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016FDB; /* je: equal / zero */

loc_00016FC2: ;
    ecx = eax + 0xC;
    edi = eax;
    PUSH32(esp, 0x00016FCCu); RECOMP_ABI_CALL(0x00016D60u, sub_00016D60); /* call 0x00016D60 */

loc_00016FCC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00016FD2u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00016FD2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x1D3EB4) = esi;

loc_00016FDB: ;
    ecx = MEM32(0x1D3EA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016FFB; /* je: equal / zero */

loc_00016FE5: ;
    edi = ecx;
    PUSH32(esp, 0x00016FECu); RECOMP_ABI_CALL(0x000EE0F0u, sub_000EE0F0); /* call 0x000EE0F0 */

loc_00016FEC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00016FF2u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00016FF2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x1D3EA8) = esi;

loc_00016FFB: ;
    ecx = MEM32(0x1D3EA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001701B; /* je: equal / zero */

loc_00017005: ;
    edi = ecx;
    PUSH32(esp, 0x0001700Cu); RECOMP_ABI_CALL(0x000EECA0u, sub_000EECA0); /* call 0x000EECA0 */

loc_0001700C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00017012u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00017012: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x1D3EA4) = esi;

loc_0001701B: ;
    ecx = MEM32(0x1D3EB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017031; /* je: equal / zero */

loc_00017025: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0001702Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017029u); } /* indirect call */
    }

loc_0001702B: ;
    MEM32(0x1D3EB0) = esi;

loc_00017031: ;
    ecx = MEM32(0x1D3EBC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017047; /* je: equal / zero */

loc_0001703B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00017041u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001703Fu); } /* indirect call */
    }

loc_00017041: ;
    MEM32(0x1D3EBC) = esi;

loc_00017047: ;
    ecx = MEM32(0x1D3ED0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017067; /* je: equal / zero */

loc_00017051: ;
    edi = ecx;
    PUSH32(esp, 0x00017058u); RECOMP_ABI_CALL(0x000F1FA0u, sub_000F1FA0); /* call 0x000F1FA0 */

loc_00017058: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001705Eu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001705E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x1D3ED0) = esi;

loc_00017067: ;
    ecx = MEM32(0x1D3EF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017087; /* je: equal / zero */

loc_00017071: ;
    edi = ecx;
    PUSH32(esp, 0x00017078u); RECOMP_ABI_CALL(0x000EDB80u, sub_000EDB80); /* call 0x000EDB80 */

loc_00017078: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001707Eu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001707E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x1D3EF8) = esi;

loc_00017087: ;
    ecx = MEM32(0x1D3EAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000170A7; /* je: equal / zero */

loc_00017091: ;
    edi = ecx;
    PUSH32(esp, 0x00017098u); RECOMP_ABI_CALL(0x000ECBA0u, sub_000ECBA0); /* call 0x000ECBA0 */

loc_00017098: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001709Eu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001709E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x1D3EAC) = esi;

loc_000170A7: ;
    ecx = MEM32(0x1D3F08);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000170BE; /* je: equal / zero */

loc_000170B2: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000170B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000170B6u); } /* indirect call */
    }

loc_000170B8: ;
    MEM32(0x1D3F08) = esi;

loc_000170BE: ;
    ecx = MEM32(0x1D3EF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000170D4; /* je: equal / zero */

loc_000170C8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000170CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000170CCu); } /* indirect call */
    }

loc_000170CE: ;
    MEM32(0x1D3EF0) = esi;

loc_000170D4: ;
    PUSH32(esp, 0x000170D9u); RECOMP_ABI_CALL(0x000F3DA0u, sub_000F3DA0); /* call 0x000F3DA0 */

loc_000170D9: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000E3AF0(); return; /* tail jmp 0x000E3AF0 */

}

/**
 * sub_000170E0
 * Original: 0x000170E0 - 0x000170F4 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000170E0(void)
{

loc_000170E0: ;
    eax = ecx;
    MEM8(eax) = 0;
    MEM32(eax + 4) = 0x3F000000;
    MEM32(eax + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00017100
 * Original: 0x00017100 - 0x00017209 (265 bytes, 87 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017100(void)
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

loc_00017100: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91CC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91cc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00017205; /* jnp: not parity */

loc_0001711E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esi + 8) = ebx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = esi + 0xC;
    goto loc_00017130;

    /* nop */

loc_00017130: ;
    ecx = MEM32(0x1D3EBC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001713Cu); RECOMP_ABI_CALL(0x000EF850u, sub_000EF850); /* call 0x000EF850 */

loc_0001713C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001714B; /* je: equal / zero */

loc_00017141: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001714B; /* je: equal / zero */

loc_00017146: ;
    MEM32(ebp) = ebx;
    goto loc_00017155;

loc_0001714B: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = 1;

loc_00017155: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00017130; /* jb: below (unsigned <) */

loc_0001715E: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017202; /* je: equal / zero */

loc_00017168: ;
    _fa = (uint32_t)(MEM32(0x1D889C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1D889C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017202; /* jne: not equal / not zero */

loc_00017174: ;
    MEM32(esi + 4) = ebx;
    ebp = ZX8(LO8(eax));
    edi = 1;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00017181: ;
    ecx = MEM32(0x1D3EBC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001718Du); RECOMP_ABI_CALL(0x000EF850u, sub_000EF850); /* call 0x000EF850 */

loc_0001718D: ;
    edx = 1;
    ecx = esi;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000171B7; /* je: equal / zero */

loc_0001719A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000171B7; /* je: equal / zero */

loc_0001719F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000171B7; /* je: equal / zero */

loc_000171A4: ;
    eax = MEM32(0x1D3F18);
    MEM32(eax + 0xB4) = esi;
    MEM32(eax + 0xB0) = ebx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000171B7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00017181; /* jb: below (unsigned <) */

loc_000171BD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    ecx = MEM32(0x1D3F18);
    if (CMP_NE(_fa, _fb)) goto loc_000171D8; /* jne: not equal / not zero */

loc_000171C7: ;
    eax = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x4C)); return; /* indirect tail jmp */

loc_000171D8: ;
    MEM32(ecx + 0xB0) = 1;
    PUSH32(esp, 0x000171E7u); RECOMP_ABI_CALL(0x0009FEF0u, sub_0009FEF0); /* call 0x0009FEF0 */

loc_000171E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017202; /* je: equal / zero */

loc_000171EC: ;
    PUSH32(esp, 0x000171F1u); RECOMP_ABI_CALL(0x0009FEF0u, sub_0009FEF0); /* call 0x0009FEF0 */

loc_000171F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017202; /* je: equal / zero */

loc_000171F6: ;
    ecx = MEM32(0x1D3F18);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00017202u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000171FFu); } /* indirect call */
    }

loc_00017202: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00017205: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00017210
 * Original: 0x00017210 - 0x0001721F (15 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017210: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(eax) = MEM8(eax) | LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00017220
 * Original: 0x00017220 - 0x00017224 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017220(void)
{

loc_00017220: ;
    MEM8(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00017230
 * Original: 0x00017230 - 0x0001723B (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017230(void)
{

loc_00017230: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0xC);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00017240
 * Original: 0x00017240 - 0x0001725D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017240: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x1AEB1C;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00017260
 * Original: 0x00017260 - 0x00017280 (32 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017260: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xC) = 1;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00017280
 * Original: 0x00017280 - 0x00017289 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017280: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00017290
 * Original: 0x00017290 - 0x00017304 (116 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017290(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00017290: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    fp_push(MEMF(edi)); /* fld float */
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB30)); /* fmul dword ptr [0x1aeb30] */
    PUSH32(esp, 0x000172A5u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_000172A5: ;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB2C)); /* fmul dword ptr [0x1aeb2c] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB30)); /* fmul dword ptr [0x1aeb30] */
    PUSH32(esp, 0x000172C3u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_000172C3: ;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB2C)); /* fmul dword ptr [0x1aeb2c] */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB30)); /* fmul dword ptr [0x1aeb30] */
    PUSH32(esp, 0x000172DFu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_000172DF: ;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB2C)); /* fmul dword ptr [0x1aeb2c] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB28)); /* fmul dword ptr [0x1aeb28] */
    PUSH32(esp, 0x000172FBu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_000172FB: ;
    POP32(esp, edi);
    MEM16(esi + 8) = LO16(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00017310
 * Original: 0x00017310 - 0x000173D9 (201 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017310(void)
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

loc_00017310: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00017323u); RECOMP_ABI_CALL(0x00017290u, sub_00017290); /* call 0x00017290 */

loc_00017323: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB38)); /* fmul dword ptr [0x1aeb38] */
    PUSH32(esp, 0x00017331u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00017331: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB38)); /* fmul dword ptr [0x1aeb38] */
    MEM16(esp + 0x14) = LO16(eax);
    PUSH32(esp, 0x00017344u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00017344: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB38)); /* fmul dword ptr [0x1aeb38] */
    MEM16(esp + 0x16) = LO16(eax);
    PUSH32(esp, 0x00017357u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00017357: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB38)); /* fmul dword ptr [0x1aeb38] */
    MEM16(esp + 0x18) = LO16(eax);
    PUSH32(esp, 0x0001736Au); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0001736A: ;
    fp_push(MEMF(esi + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE140)); /* fmul dword ptr [0x1ae140] */
    MEM16(esp + 0x1A) = LO16(eax);
    SET_LO8(eax, MEM8(esi + 0x3C));
    MEM8(esp + 0x1E) = LO8(eax);
    PUSH32(esp, 0x00017384u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00017384: ;
    fp_push(MEMF(esi + 0x44)); /* fld float */
    MEM8(esp + 0x1C) = LO8(eax);
    PUSH32(esp, 0x00017390u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00017390: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x1D) = LO8(eax);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_000173A0: ;
    fp_push(MEMF(esi + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB28)); /* fmul dword ptr [0x1aeb28] */
    PUSH32(esp, 0x000173AEu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_000173AE: ;
    ecx = MEM32(esi);
    MEM16(esp + edi * 2 + 0x20) = LO16(eax);
    MEM32(esp + edi * 4 + 0x28) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000173A0; /* jl: less (signed <) */

loc_000173C2: ;
    eax = MEM32(esp + 0x3C);
    ecx = 0xC;
    esi = esp + 8;
    edi = eax;
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
    POP32(esp, edi);
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
 * sub_000173E0
 * Original: 0x000173E0 - 0x0001745F (127 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000173E0(void)
{

loc_000173E0: ;
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
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ecx + 0x1C;
    edi = MEM32(edx);
    esi = eax + 0x1C;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(esi + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(esi + 0xC) = edx;
    edx = ecx + 0x2C;
    edi = MEM32(edx);
    esi = eax + 0x2C;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(esi + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(esi + 0xC) = edx;
    edx = MEM32(ecx + 0x3C);
    MEM32(eax + 0x3C) = edx;
    edx = MEM32(ecx + 0x40);
    MEM32(eax + 0x40) = edx;
    ecx = MEM32(ecx + 0x44);
    POP32(esp, edi);
    MEM32(eax + 0x44) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00017460
 * Original: 0x00017460 - 0x00017801 (929 bytes, 284 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017460(void)
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

loc_00017460: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x8C);
    PUSH32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = esp + 0x48;
    MEM32(ebp + 0x14) = eax;
    PUSH32(esp, 0x00017481u); RECOMP_ABI_CALL(0x000173E0u, sub_000173E0); /* call 0x000173E0 */

loc_00017481: ;
    eax = esp + 0x44;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0001748Eu); RECOMP_ABI_CALL(0x00017310u, sub_00017310); /* call 0x00017310 */

loc_0001748E: ;
    fp_push(MEMF(0x1D3F78)); /* fld float */
    esi = eax;
    ecx = 0xC;
    edi = esp + 0x1C;
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
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000174BE; /* jnp: not parity */

loc_000174AF: ;
    ecx = MEM32(esp + 0x14);
    MEM32(0x1D3F78) = ecx;
    ebx = 1;

loc_000174BE: ;
    SET_LO16(eax, MEM16(esp + 0x1C));
    _fa = (uint32_t)(MEM16(0x1D3F80)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x1D3F80), LO16(eax) (16-bit) */
    edi = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_000174D9; /* je: equal / zero */

loc_000174D1: ;
    MEM16(0x1D3F80) = LO16(eax);
    ebx = ebx | edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000174D9: ;
    fp_push(MEMF(0x1D3F7C)); /* fld float */
    esi = 4;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000174FB; /* jnp: not parity */

loc_000174EF: ;
    edx = MEM32(esp + 0x18);
    MEM32(0x1D3F7C) = edx;
    ebx = ebx | esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000174FB: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000175C9; /* jne: not equal / not zero */

loc_00017505: ;
    SET_LO16(eax, MEM16(esp + 0x20));
    _fa = (uint32_t)(MEM16(0x1D3F84)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x1D3F84), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001751C; /* je: equal / zero */

loc_00017513: ;
    MEM16(0x1D3F84) = LO16(eax);
    ebx = ebx | 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0001751C: ;
    SET_LO16(eax, MEM16(esp + 0x22));
    _fa = (uint32_t)(MEM16(0x1D3F86)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x1D3F86), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017533; /* je: equal / zero */

loc_0001752A: ;
    MEM16(0x1D3F86) = LO16(eax);
    ebx = ebx | 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00017533: ;
    SET_LO16(eax, MEM16(esp + 0x24));
    _fa = (uint32_t)(MEM16(0x1D3F88)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x1D3F88), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001754A; /* je: equal / zero */

loc_00017541: ;
    MEM16(0x1D3F88) = LO16(eax);
    ebx = ebx | 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0001754A: ;
    SET_LO16(eax, MEM16(esp + 0x26));
    _fa = (uint32_t)(MEM16(0x1D3F8A)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x1D3F8A), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017561; /* je: equal / zero */

loc_00017558: ;
    MEM16(0x1D3F8A) = LO16(eax);
    ebx = ebx | 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00017561: ;
    SET_LO16(eax, MEM16(esp + 0x2C));
    _fa = (uint32_t)(MEM16(0x1D3F90)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x1D3F90), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001757B; /* je: equal / zero */

loc_0001756F: ;
    MEM16(0x1D3F90) = LO16(eax);
    ebx = ebx | 0x400;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0001757B: ;
    SET_LO16(eax, MEM16(esp + 0x2E));
    _fa = (uint32_t)(MEM16(0x1D3F92)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x1D3F92), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017595; /* je: equal / zero */

loc_00017589: ;
    MEM16(0x1D3F92) = LO16(eax);
    ebx = ebx | 0x800;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00017595: ;
    SET_LO16(eax, MEM16(esp + 0x30));
    _fa = (uint32_t)(MEM16(0x1D3F94)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x1D3F94), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000175AF; /* je: equal / zero */

loc_000175A3: ;
    MEM16(0x1D3F94) = LO16(eax);
    ebx = ebx | 0x1000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000175AF: ;
    SET_LO16(eax, MEM16(esp + 0x32));
    _fa = (uint32_t)(MEM16(0x1D3F96)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x1D3F96), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000175C9; /* je: equal / zero */

loc_000175BD: ;
    MEM16(0x1D3F96) = LO16(eax);
    ebx = ebx | 0x2000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000175C9: ;
    eax = MEM32(ebp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001761E; /* jne: not equal / not zero */

loc_000175D9: ;
    SET_LO8(eax, MEM8(esp + 0x2A));
    _fa = (uint32_t)(MEM8(0x1D3F8E)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x1D3F8E), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000175F0; /* je: equal / zero */

loc_000175E5: ;
    MEM8(0x1D3F8E) = LO8(eax);
    ebx = ebx | 0x200;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000175F0: ;
    SET_LO8(eax, MEM8(esp + 0x29));
    _fa = (uint32_t)(MEM8(0x1D3F8D)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x1D3F8D), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017607; /* je: equal / zero */

loc_000175FC: ;
    MEM8(0x1D3F8D) = LO8(eax);
    ebx = ebx | 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00017607: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    _fa = (uint32_t)(MEM8(0x1D3F8C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x1D3F8C), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001761E; /* je: equal / zero */

loc_00017613: ;
    MEM8(0x1D3F8C) = LO8(eax);
    ebx = ebx | 0x100;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0001761E: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0001765B; /* jae: above or equal (unsigned >=) */

loc_00017628: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xFF;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x1D3F78);
    MEM32(edx * 4 + 0x1D3FA8) = ebx;
    eax = MEM32(ebp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = edx + edx * 2;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x1D43A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1D43A8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00017658u); RECOMP_ABI_CALL(0x000F5860u, sub_000F5860); /* call 0x000F5860 */

loc_00017658: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001765B: ;
    ecx = MEM32(ebp + 0x14);
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    MEM32(ebp + 0x18) = ecx;
    ecx = MEM32(ebp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00017684u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017681u); } /* indirect call */
    }

loc_00017684: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001769A; /* je: equal / zero */

loc_00017689: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + esi;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1D3F78);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0001769Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017697u); } /* indirect call */
    }

loc_0001769A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000176B5; /* je: equal / zero */

loc_0001769F: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(ebp + 0x18) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, 0x1D3F80);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000176B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000176B2u); } /* indirect call */
    }

loc_000176B5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000176CB; /* je: equal / zero */

loc_000176BA: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + esi;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1D3F7C);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000176CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000176C8u); } /* indirect call */
    }

loc_000176CB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000176E6; /* je: equal / zero */

loc_000176D0: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(ebp + 0x18) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, 0x1D3F84);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000176E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000176E3u); } /* indirect call */
    }

loc_000176E6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00017701; /* je: equal / zero */

loc_000176EB: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(ebp + 0x18) = eax;
    edx = MEM32(ecx);
    PUSH32(esp, 0x1D3F86);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00017701u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000176FEu); } /* indirect call */
    }

loc_00017701: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001771C; /* je: equal / zero */

loc_00017706: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(ebp + 0x18) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, 0x1D3F88);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0001771Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017719u); } /* indirect call */
    }

loc_0001771C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00017737; /* je: equal / zero */

loc_00017721: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(ebp + 0x18) = eax;
    edx = MEM32(ecx);
    PUSH32(esp, 0x1D3F8A);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00017737u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017734u); } /* indirect call */
    }

loc_00017737: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00017752; /* je: equal / zero */

loc_0001773C: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(ebp + 0x18) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, 0x1D3F90);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00017752u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001774Fu); } /* indirect call */
    }

loc_00017752: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001776D; /* je: equal / zero */

loc_00017757: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(ebp + 0x18) = eax;
    edx = MEM32(ecx);
    PUSH32(esp, 0x1D3F92);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0001776Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001776Au); } /* indirect call */
    }

loc_0001776D: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00017788; /* je: equal / zero */

loc_00017772: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(ebp + 0x18) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, 0x1D3F94);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00017788u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017785u); } /* indirect call */
    }

loc_00017788: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000177A3; /* je: equal / zero */

loc_0001778D: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(ebp + 0x18) = eax;
    edx = MEM32(ecx);
    PUSH32(esp, 0x1D3F96);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000177A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000177A0u); } /* indirect call */
    }

loc_000177A3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_000177BD; /* jns: not sign (positive) */

loc_000177A7: ;
    edi = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM32(ebp + 0x18) = edi;
    eax = MEM32(ecx);
    PUSH32(esp, 0x1D3F8D);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000177BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000177BAu); } /* indirect call */
    }

loc_000177BD: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000177D8; /* je: equal / zero */

loc_000177C2: ;
    edi = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM32(ebp + 0x18) = edi;
    edx = MEM32(ecx);
    PUSH32(esp, 0x1D3F8C);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000177D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000177D5u); } /* indirect call */
    }

loc_000177D8: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000177F2; /* je: equal / zero */

loc_000177DD: ;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = MEM32(ebp + 4);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1D3F8E);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000177F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000177EFu); } /* indirect call */
    }

loc_000177F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00017810
 * Original: 0x00017810 - 0x00017895 (133 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017810(void)
{

loc_00017810: ;
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
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(ecx + 0x38);
    MEM32(eax + 0x38) = edx;
    SET_LO8(edx, MEM8(ecx + 0x3C));
    MEM8(eax + 0x3C) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x3D));
    MEM8(eax + 0x3D) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x3E));
    MEM8(eax + 0x3E) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x3F));
    MEM8(eax + 0x3F) = LO8(edx);
    edx = MEM32(ecx + 0x40);
    MEM32(eax + 0x40) = edx;
    ecx = MEM32(ecx + 0x44);
    MEM32(eax + 0x44) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00017886
 * Original: 0x00017886 - 0x00017895 (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017886(void)
{

loc_00017886: ;
    edx = MEM32(ecx + 0x40);
    MEM32(eax + 0x40) = edx;
    ecx = MEM32(ecx + 0x44);
    MEM32(eax + 0x44) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000178A0
 * Original: 0x000178A0 - 0x000178BF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000178A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000178A0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AEB1C;
    if (TEST_Z(_fa, _fb)) goto loc_000178B9; /* je: equal / zero */

loc_000178B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000178B6u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000178B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000178B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000178C0
 * Original: 0x000178C0 - 0x000179DE (286 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000178C0(void)
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

loc_000178C0: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x60);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    fp_push(MEMF(eax)); /* fld float */
    MEM32(esp + 0x60) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    fp_push((double)SMEM32(esp + 0x60)); /* fild */
    MEM32(esp + 0x60) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB24)); /* fmul dword ptr [0x1aeb24] */
    fp_push(MEMF(eax + 4)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x18) = edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xE);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    fp_push((double)SMEM32(esp + 0x64)); /* fild */
    MEM32(esp + 0x64) = edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x12);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB34)); /* fmul dword ptr [0x1aeb34] */
    fp_push((double)SMEM32(esp + 0x64)); /* fild */
    MEM32(esp + 0x64) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB34)); /* fmul dword ptr [0x1aeb34] */
    fp_push((double)SMEM32(esp + 0x64)); /* fild */
    MEM32(esp + 0x64) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB34)); /* fmul dword ptr [0x1aeb34] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x64)); /* fild */
    ecx = MEM32(esp + 0xC);
    MEM32(esp + 0x28) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x16));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB34)); /* fmul dword ptr [0x1aeb34] */
    MEM8(esp + 0x50) = LO8(ecx);
    MEM8(esp + 0x51) = LO8(ecx);
    MEM8(esp + 0x52) = LO8(ecx);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esp + 0x53) = LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x14);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x64) = ecx;
    MEM32(esp + 0x2C) = edx;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x15);
    fp_push((double)SMEM32(esp + 0x64)); /* fild */
    MEM32(esp + 0x64) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB20)); /* fmul dword ptr [0x1aeb20] */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax + 0x20;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x64)); /* fild */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */

loc_000179A0: ;
    esi = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(esp + 0x64) = esi;
    esi = MEM32(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x64)); /* fild */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AEB24)); /* fmul dword ptr [0x1aeb24] */
    MEMF(esp + ecx * 4 + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + ecx * 4 + 0x3C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000179A0; /* jl: less (signed <) */

loc_000179C7: ;
    esi = MEM32(esp + 0x60);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000179D7u); RECOMP_ABI_CALL(0x000173E0u, sub_000173E0); /* call 0x000173E0 */

loc_000179D7: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000179E0
 * Original: 0x000179E0 - 0x00017B4C (364 bytes, 131 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000179E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000179E0: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000179FD; /* je: equal / zero */

loc_000179ED: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    edx = esp + 8;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000179F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000179F6u); } /* indirect call */
    }

loc_000179F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017A06; /* je: equal / zero */

loc_000179FD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00017A06: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, ebx);
    ebx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00017A20; /* je: equal / zero */

loc_00017A11: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1D7378);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00017A20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017A1Du); } /* indirect call */
    }

loc_00017A20: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00017A34; /* je: equal / zero */

loc_00017A25: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1D7380);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00017A34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017A31u); } /* indirect call */
    }

loc_00017A34: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00017A48; /* je: equal / zero */

loc_00017A39: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1D737C);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00017A48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017A45u); } /* indirect call */
    }

loc_00017A48: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00017A5C; /* je: equal / zero */

loc_00017A4D: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1D7384);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00017A5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017A59u); } /* indirect call */
    }

loc_00017A5C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00017A70; /* je: equal / zero */

loc_00017A61: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1D7386);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00017A70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017A6Du); } /* indirect call */
    }

loc_00017A70: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00017A84; /* je: equal / zero */

loc_00017A75: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1D7388);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00017A84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017A81u); } /* indirect call */
    }

loc_00017A84: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00017A98; /* je: equal / zero */

loc_00017A89: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1D738A);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00017A98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017A95u); } /* indirect call */
    }

loc_00017A98: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00017AAC; /* je: equal / zero */

loc_00017A9D: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1D7390);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00017AACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017AA9u); } /* indirect call */
    }

loc_00017AAC: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00017AC0; /* je: equal / zero */

loc_00017AB1: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1D7392);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00017AC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017ABDu); } /* indirect call */
    }

loc_00017AC0: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00017AD4; /* je: equal / zero */

loc_00017AC5: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1D7394);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00017AD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017AD1u); } /* indirect call */
    }

loc_00017AD4: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00017AE8; /* je: equal / zero */

loc_00017AD9: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1D7396);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00017AE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017AE5u); } /* indirect call */
    }

loc_00017AE8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00017AFB; /* jns: not sign (positive) */

loc_00017AEC: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1D738D);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00017AFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017AF8u); } /* indirect call */
    }

loc_00017AFB: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00017B0F; /* je: equal / zero */

loc_00017B00: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1D738C);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00017B0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017B0Cu); } /* indirect call */
    }

loc_00017B0F: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 2 (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00017B24; /* je: equal / zero */

loc_00017B15: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1D738E);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00017B24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017B21u); } /* indirect call */
    }

loc_00017B24: ;
    eax = esp + 8;
    PUSH32(esp, 0x1D7378);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00017B33u); RECOMP_ABI_CALL(0x000178C0u, sub_000178C0); /* call 0x000178C0 */

loc_00017B33: ;
    ecx = MEM32(esp + 0x5C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00017B40u); RECOMP_ABI_CALL(0x00017810u, sub_00017810); /* call 0x00017810 */

loc_00017B40: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00017B50
 * Original: 0x00017B50 - 0x00017B60 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017B50: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017B5B; /* jne: not equal / not zero */

loc_00017B56: ;
    g_seh_ebp = ebp; sub_00017460(); return; /* tail jmp 0x00017460 */

loc_00017B5B: ;
    g_seh_ebp = ebp; sub_000179E0(); return; /* tail jmp 0x000179E0 */

}

/**
 * sub_00017B60
 * Original: 0x00017B60 - 0x00017BE0 (128 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017B60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x18;
    MEM32(esp + 0x10) = 0x13;
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00017B73: ;
    ebp = 5;
    goto loc_00017B80;

    /* nop */

loc_00017B80: ;
    edi = esi + -16;
    PUSH32(esp, 0x1AE684);
    ecx = edi;
    MEM32(esi + -20) = 0x43340000;
    PUSH32(esp, 0x00017B96u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_00017B96: ;
    MEM8(esi) = 0;
    MEM8(esi + 1) = 0;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x22F);
    PUSH32(esp, 0x00017BADu); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_00017BAD: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00017BB5u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_00017BB5: ;
    MEM32(esi + -20) = 0x4426AA3D;
    MEM8(esi) = LO8(ebx);
    MEM8(esi + 1) = LO8(ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00017B80; /* jne: not equal / not zero */

loc_00017BC7: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00017B73; /* jne: not equal / not zero */

loc_00017BCD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00017BE0(); return; /* fallthrough 0x00017BE0 */

}

/**
 * sub_00017BE0
 * Original: 0x00017BE0 - 0x00017C87 (167 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017BE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    esi = ecx + 0x18;
    edi = edi;

loc_00017BF0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00017BF2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x1AEB48);
    PUSH32(esp, 0x1D3AA0);
    PUSH32(esp, 0x00017C03u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00017C03: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1D3AA0);
    edi = esi + -20;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00017C1Au); RECOMP_ABI_CALL(0x00014AE0u, sub_00014AE0); /* call 0x00014AE0 */

loc_00017C1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017C63; /* jne: not equal / not zero */

loc_00017C1E: ;
    ebp = esi + -16;
    PUSH32(esp, 0x1AE684);
    ecx = ebp;
    MEM32(edi) = 0x43340000;
    PUSH32(esp, 0x00017C33u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_00017C33: ;
    MEM8(esi) = 0;
    MEM8(esi + 1) = 0;
    ecx = MEM32(0x1DB454);
    PUSH32(esp, 0x22F);
    PUSH32(esp, 0x00017C4Au); RECOMP_ABI_CALL(0x000E0830u, sub_000E0830); /* call 0x000E0830 */

loc_00017C4A: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00017C52u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_00017C52: ;
    ebp = MEM32(esp + 0x10);
    MEM32(edi) = 0x4426AA3D;
    MEM8(esi) = 0xFF;
    MEM8(esi + 1) = 0xFF;

loc_00017C63: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00017BF2; /* jl: less (signed <) */

loc_00017C6C: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x13 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00017BF0; /* jl: less (signed <) */

loc_00017C7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00017C90
 * Original: 0x00017C90 - 0x00017CAB (27 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017C90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017C90: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    eax = eax + eax * 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    eax = ecx + eax * 8 + 4;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00017CB0
 * Original: 0x00017CB0 - 0x00017D7E (206 bytes, 73 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017CB0(void)
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

loc_00017CB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebp = ecx;
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0xC) = ebp;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00017CC3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017CE3; /* jne: not equal / not zero */

loc_00017CC8: ;
    edx = ecx + esi * 4;
    eax = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    fp_push(MEMF(ebp + eax * 8 + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00017CE3; /* jne: not equal / not zero */

loc_00017CE1: ;
    edi = ecx;

loc_00017CE3: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00017CC3; /* jl: less (signed <) */

loc_00017CE9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00017D75; /* jl: less (signed <) */

loc_00017CF1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_00017D19; /* jge: greater or equal (signed >=) */

loc_00017CF7: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x78);
    ebx = 4;
    ecx = ecx + ebp + 0x64;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00017D07: ;
    ebp = ecx + -24;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00017D10u); RECOMP_ABI_CALL(0x00014C30u, sub_00014C30); /* call 0x00014C30 */

loc_00017D10: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebp;
    if ((_fa != 0)) goto loc_00017D07; /* jne: not equal / not zero */

loc_00017D15: ;
    ebp = MEM32(esp + 0x10);

loc_00017D19: ;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(ebx + 0x40);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1D3AA0);
    MEM32(esp + 0x28) = 1;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x00017D45u); RECOMP_ABI_CALL(0x000A3F30u, sub_000A3F30); /* call 0x000A3F30 */

loc_00017D45: ;
    edx = edi + esi * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + esi * 2;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebp + eax * 8;
    PUSH32(esp, 0x1D3AA0);
    ecx = esi + 8;
    PUSH32(esp, 0x00017D61u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_00017D61: ;
    SET_LO8(ecx, MEM8(ebx + 0x40));
    edx = MEM32(esp + 0x20);
    MEM8(esi + 0x18) = LO8(ecx);
    MEM32(esi + 4) = edx;
    SET_LO8(eax, MEM8(ebx + 0x38));
    MEM8(esi + 0x19) = LO8(eax);
    POP32(esp, ebx);

loc_00017D75: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00017D80
 * Original: 0x00017D80 - 0x00017DE6 (102 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017D80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 4;
    /* nop */

loc_00017D90: ;
    edi = ebp;
    ebx = 3;

loc_00017D97: ;
    eax = MEM32(0x1DA954);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017DC1; /* jne: not equal / not zero */

loc_00017DA0: ;
    PUSH32(esp, 0x548);
    PUSH32(esp, 0x00017DAAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00017DAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017DBA; /* je: equal / zero */

loc_00017DB1: ;
    ecx = eax;
    PUSH32(esp, 0x00017DB8u); RECOMP_ABI_CALL(0x000B6B10u, sub_000B6B10); /* call 0x000B6B10 */

loc_00017DB8: ;
    goto loc_00017DBC;

loc_00017DBA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00017DBC: ;
    MEM32(0x1DA954) = eax;

loc_00017DC1: ;
    eax = edi + eax + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00017DCDu); RECOMP_ABI_CALL(0x00014C30u, sub_00014C30); /* call 0x00014C30 */

loc_00017DCD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00017D97; /* jne: not equal / not zero */

loc_00017DD6: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x4C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x17C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00017D90; /* jl: less (signed <) */

loc_00017DE1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017DF0
 * Original: 0x00017DF0 - 0x00017E8B (155 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017DF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 1;
    MEM32(esp + 0x10) = 0;
    esi = ecx + 0x18;
    /* nop */

loc_00017E10: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00017E12: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEB54);
    PUSH32(esp, 0x1D3AA0);
    PUSH32(esp, 0x00017E27u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_00017E27: ;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1D3AA0);
    edi = esi + -20;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00017E3Eu); RECOMP_ABI_CALL(0x00014AE0u, sub_00014AE0); /* call 0x00014AE0 */

loc_00017E3E: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017E5E; /* jne: not equal / not zero */

loc_00017E44: ;
    PUSH32(esp, 0x1AE684);
    ecx = esi + -16;
    MEM32(edi) = 0x43340000;
    PUSH32(esp, 0x00017E57u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_00017E57: ;
    MEM8(esi) = 0;
    MEM8(esi + 1) = 0;

loc_00017E5E: ;
    edi = MEM32(esp + 0x14);
    edi = edi & ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00017E12; /* jl: less (signed <) */

loc_00017E71: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00017E10; /* jl: less (signed <) */

loc_00017E7F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00017E90
 * Original: 0x00017E90 - 0x00017EA7 (23 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017E90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017E90: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    edx = edx + eax * 2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    eax = ecx + eax * 8 + 4;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00017EB0
 * Original: 0x00017EB0 - 0x00017EEF (63 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017EB0(void)
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

loc_00017EB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0x178;

loc_00017EC2: ;
    MEM32(edi + -12) = 0xFFFFFFFFu;
    eax = MEM32(ebp + 0x4C);
    ecx = esi + eax * 2;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    fp_push(MEMF(ebx + edx * 8 + 4)); /* fld float */
    PUSH32(esp, 0x00017EDDu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00017EDD: ;
    MEM32(edi) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00017EC2; /* jl: less (signed <) */

loc_00017EE8: ;
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
 * sub_00017EF0
 * Original: 0x00017EF0 - 0x00017F60 (112 bytes, 43 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017EF0(void)
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

loc_00017EF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 0x5C);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x4C);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00017F07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017F04u); } /* indirect call */
    }

loc_00017F07: ;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00017F38; /* jge: greater or equal (signed >=) */

loc_00017F14: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi + esi * 8;
    edi = 2;
    ecx = ebp + ecx * 8 + 0x34;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00017F24: ;
    ebx = ecx + -24;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00017F2Du); RECOMP_ABI_CALL(0x00014C30u, sub_00014C30); /* call 0x00014C30 */

loc_00017F2D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    if ((_fa != 0)) goto loc_00017F24; /* jne: not equal / not zero */

loc_00017F32: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00017F38: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    edx = eax + esi * 2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + esi * 2;
    PUSH32(esp, ecx);
    ecx = ebp + eax * 8 + 4;
    PUSH32(esp, 0x00017F5Bu); RECOMP_ABI_CALL(0x00014EE0u, sub_00014EE0); /* call 0x00014EE0 */

loc_00017F5B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00017F60
 * Original: 0x00017F60 - 0x0001819A (570 bytes, 188 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017F60(void)
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

loc_00017F60: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x68);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x20) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_00017FEE; /* jle: less or equal (signed <=) */

loc_00017F7E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 0x40;
    MEM32(esp + 0x14) = eax;
    /* nop */

loc_00017F90: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0x5C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00017F9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017F9Bu); } /* indirect call */
    }

loc_00017F9E: ;
    MEM32(esi + -8) = eax;
    MEM32(esi) = 0xFFFFFFFFu;
    MEM32(esi + -4) = edi;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebx + 0x178;

loc_00017FB2: ;
    ebx = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00017FCA; /* jg: greater (signed >) */

loc_00017FB8: ;
    if (CMP_NE(_fa, _fb)) goto loc_00017FBF; /* jne: not equal / not zero */

loc_00017FBA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx + -12) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017FD5; /* je: equal / zero */

loc_00017FBF: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00017FB2; /* jb: below (unsigned <) */

loc_00017FC8: ;
    goto loc_00017FD7;

loc_00017FCA: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax + ecx * 4 + 0x16C) = edi;

loc_00017FD5: ;
    MEM32(esi) = ecx;

loc_00017FD7: ;
    edx = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00017F90; /* jl: less (signed <) */

loc_00017FEE: ;
    eax = ebp + -1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000180AB; /* jle: less or equal (signed <=) */

loc_00017FFB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x10;
    eax = esp + 0x34;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edx;
    goto loc_00018016;

loc_00018012: ;
    edx = MEM32(esp + 0x18);

loc_00018016: ;
    eax = ecx + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00018046; /* jge: greater or equal (signed >=) */

loc_00018021: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    edx = esp + edx + 0x34;
    /* nop */

loc_00018030: ;
    ebx = MEM32(esp + edx + 0x38);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + edi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + edi + 0x38) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001803E; /* jle: less or equal (signed <=) */

loc_0001803A: ;
    ecx = eax;
    edi = edx;

loc_0001803E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00018030; /* jl: less (signed <) */

loc_00018046: ;
    eax = esp + esi + 0x34;
    ebx = eax;
    edx = MEM32(ebx);
    esi = MEM32(ebx + 4);
    edi = MEM32(ebx + 8);
    ebx = MEM32(ebx + 0xC);
    MEM32(esp + 0x30) = ebx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esp + ecx + 0x34;
    ebx = ecx;
    ebp = MEM32(ebx);
    MEM32(eax) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(ebx + 8);
    MEM32(eax + 8) = ebp;
    ebx = MEM32(ebx + 0xC);
    ebp = MEM32(esp + 0x20);
    MEM32(eax + 0xC) = ebx;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0x14);
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00018012; /* jl: less (signed <) */

loc_000180A7: ;
    ebx = MEM32(esp + 0x10);

loc_000180AB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    edi = ebx + 0x178;
    MEM32(esp + 0x2C) = eax;

loc_000180C1: ;
    ecx = MEM32(esp + 0x78);
    MEM32(edi + -12) = 0xFFFFFFFFu;
    eax = MEM32(ecx + 0x4C);
    edx = esi + eax * 2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    fp_push(MEMF(ebx + eax * 8 + 4)); /* fld float */
    PUSH32(esp, 0x000180E0u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_000180E0: ;
    MEM32(edi) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000180C1; /* jl: less (signed <) */

loc_000180EB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00018190; /* jle: less or equal (signed <=) */

loc_000180F5: ;
    ecx = esp + 0x40;
    /* nop */

loc_00018100: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001812F; /* je: equal / zero */

loc_00018107: ;
    edi = MEM32(esp + eax * 4 + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edx = esp + eax * 4 + 0x24;
    if (CMP_EQ(_fa, _fb)) goto loc_00018129; /* je: equal / zero */

loc_00018113: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018120; /* jne: not equal / not zero */

loc_00018118: ;
    MEM32(ecx) = 0xFFFFFFFFu;
    goto loc_0001812F;

loc_00018120: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0001812F;

loc_00018129: ;
    MEM32(edx) = 1;

loc_0001812F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00018100; /* jl: less (signed <) */

loc_00018137: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00018190; /* jle: less or equal (signed <=) */

loc_0001813B: ;
    esi = esp + 0x3C;
    MEM32(esp + 0x78) = ebp;

loc_00018143: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018182; /* je: equal / zero */

loc_0001814B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    ecx = MEM32(esi);
    edi = MEM32(esi + -4);
    MEM32(ebx + eax * 4 + 0x16C) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_0001817B; /* jge: greater or equal (signed >=) */

loc_0001815C: ;
    edx = 2;
    ecx = ebx + 0x180;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00018170: ;
    ebp = MEM32(ecx + -4);
    MEM32(ecx) = ebp;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00018170; /* jne: not equal / not zero */

loc_0001817B: ;
    MEM32(ebx + eax * 4 + 0x178) = edi;

loc_00018182: ;
    eax = MEM32(esp + 0x78);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x78) = eax;
    if ((_fa != 0)) goto loc_00018143; /* jne: not equal / not zero */

loc_00018190: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000181A0
 * Original: 0x000181A0 - 0x000181CB (43 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000181A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000181A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x000181AAu); RECOMP_ABI_CALL(0x00014AA0u, sub_00014AA0); /* call 0x00014AA0 */

loc_000181AA: ;
    MEM32(edi) = 0x1AEB64;
    esi = edi + 8;
    ebx = 0x5F;

loc_000181B8: ;
    ecx = esi;
    PUSH32(esp, 0x000181BFu); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_000181BF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000181B8; /* jne: not equal / not zero */

loc_000181C5: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000181D0
 * Original: 0x000181D0 - 0x0001820D (61 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000181D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000181D0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x1AEB64;
    esi = edi + 0x8F0;
    ebp = 0x5F;

loc_000181E6: ;
    eax = MEM32(esi + -24);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00018200; /* je: equal / zero */

loc_000181F7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000181FDu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000181FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00018200: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000181E6; /* jne: not equal / not zero */

loc_00018203: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_00014AB0(); return; /* tail jmp 0x00014AB0 */

}

/**
 * sub_00018210
 * Original: 0x00018210 - 0x00018242 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018210: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0001821Au); RECOMP_ABI_CALL(0x00014AA0u, sub_00014AA0); /* call 0x00014AA0 */

loc_0001821A: ;
    MEM32(edi) = 0x1AEB74;
    esi = edi + 8;
    ebx = 0xF;

loc_00018228: ;
    ecx = esi;
    PUSH32(esp, 0x0001822Fu); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_0001822F: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00018228; /* jne: not equal / not zero */

loc_00018235: ;
    ecx = edi;
    PUSH32(esp, 0x0001823Cu); RECOMP_ABI_CALL(0x00017D80u, sub_00017D80); /* call 0x00017D80 */

loc_0001823C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018250
 * Original: 0x00018250 - 0x0001828D (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00018250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018250: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x1AEB74;
    esi = edi + 0x170;
    ebp = 0xF;

loc_00018266: ;
    eax = MEM32(esi + -24);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00018280; /* je: equal / zero */

loc_00018277: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001827Du); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001827D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00018280: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00018266; /* jne: not equal / not zero */

loc_00018283: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_00014AB0(); return; /* tail jmp 0x00014AB0 */

}

/**
 * sub_00018290
 * Original: 0x00018290 - 0x000182B0 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018290: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00018298u); RECOMP_ABI_CALL(0x000181D0u, sub_000181D0); /* call 0x000181D0 */

loc_00018298: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000182A8; /* je: equal / zero */

loc_0001829F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000182A5u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000182A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000182A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_000182B0(); return; /* fallthrough 0x000182B0 */

}

/**
 * sub_000182B0
 * Original: 0x000182B0 - 0x000182CE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000182B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000182B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000182B8u); RECOMP_ABI_CALL(0x00018250u, sub_00018250); /* call 0x00018250 */

loc_000182B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000182C8; /* je: equal / zero */

loc_000182BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000182C5u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_000182C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000182C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000182D0
 * Original: 0x000182D0 - 0x000182DD (13 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000182D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000182D0: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000182DC; /* je: equal / zero */

loc_000182D7: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

loc_000182DC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000182E0
 * Original: 0x000182E0 - 0x000182ED (13 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000182E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000182E0: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000182EC; /* je: equal / zero */

loc_000182E7: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

loc_000182EC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000182F0
 * Original: 0x000182F0 - 0x000182FD (13 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000182F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000182F0: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000182FC; /* je: equal / zero */

loc_000182F7: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

loc_000182FC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00018300
 * Original: 0x00018300 - 0x0001830D (13 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018300: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001830C; /* je: equal / zero */

loc_00018307: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

loc_0001830C: ;
    esp += 4; return; /* ret */

}
