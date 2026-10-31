#define RECOMP_GENERATED_CODE
#include "recomp/gen/recomp_funcs.h"

/**
 * sub_000AB410
 * Original: 0x000AB410 - 0x000AB8AB (1179 bytes, 291 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB410(void)
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

loc_000AB410: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x40) = 0x3F800000;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x60) = 0x3F800000;
    PUSH32(esp, 0x000AB487u); RECOMP_ABI_CALL(0x000E72E0u, sub_000E72E0); /* call 0x000E72E0 */

loc_000AB487: ;
    PUSH32(esp, 0x000AB48Cu); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_000AB48C: ;
    edx = MEM32(esi + 0x188);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000AB49Au); RECOMP_ABI_CALL(0x000E6A00u, sub_000E6A00); /* call 0x000E6A00 */

loc_000AB49A: ;
    eax = MEM32(0x1DC444);
    edi = 0x203;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB4E3; /* je: equal / zero */

loc_000AB4AB: ;
    edx = edi;
    ecx = 0x40354;
    MEM32(0x1DC444) = edi;
    PUSH32(esp, 0x000AB4BDu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_000AB4BD: ;
    _fa = (uint32_t)(MEM32(0x1DC444)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC444), edi (32-bit) */
    MEM32(0x1A51DC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000AB4E3; /* je: equal / zero */

loc_000AB4CB: ;
    edx = edi;
    ecx = 0x40354;
    MEM32(0x1DC444) = edi;
    PUSH32(esp, 0x000AB4DDu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_000AB4DD: ;
    MEM32(0x1A51DC) = edi;

loc_000AB4E3: ;
    eax = MEM32(0x1DC3CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000AB52A; /* jne: not equal / not zero */

loc_000AB4F1: ;
    edx = ebp;
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = ebp;
    PUSH32(esp, 0x000AB503u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_000AB503: ;
    eax = MEM32(0x1DC3CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x1A51F8) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_000AB52A; /* jne: not equal / not zero */

loc_000AB512: ;
    edx = ebp;
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = ebp;
    PUSH32(esp, 0x000AB524u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_000AB524: ;
    MEM32(0x1A51F8) = ebp;

loc_000AB52A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000AB531u); RECOMP_ABI_CALL(0x0001D270u, sub_0001D270); /* call 0x0001D270 */

loc_000AB531: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000AB539u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_000AB539: ;
    eax = esi + 0x1C4;
    PUSH32(esp, eax);
    ecx = esi + 0x1A0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000AB54Cu); RECOMP_ABI_CALL(0x00019680u, sub_00019680); /* call 0x00019680 */

loc_000AB54C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    eax = 4;
    PUSH32(esp, 0);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x50) = 0x1AF33C;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x54) = eax;
    PUSH32(esp, 0x000AB571u); RECOMP_ABI_CALL(0x000FAF60u, sub_000FAF60); /* call 0x000FAF60 */

loc_000AB571: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(0x1D9FB4);
    fp_push(MEMF(eax + ecx * 4 + 0x10D4)); /* fld float */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(MEMF(0x1AF364) - fp_top()); /* fsubr dword ptr [0x1af364] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1BF450)); /* fmul dword ptr [0x1bf450] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000AB5AB; /* jp: parity */

loc_000AB5A1: ;
    MEM32(esp + 0xC) = 0;
    goto loc_000AB5C4;

loc_000AB5AB: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1BF44C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1bf44c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AB5C4; /* jne: not equal / not zero */

loc_000AB5BC: ;
    MEM32(esp + 0xC) = 0x42FF0000;

loc_000AB5C4: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000AB5D8u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_000AB5D8: ;
    fp_push(MEMF(esi + 0x1D0)); /* fld float */
    eax = MEM32(esi + 0x1D4);
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x1DAEB4);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x000AB60Au); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_000AB60A: ;
    fp_push(MEMF(0x1DAEA8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    ecx = MEM32(esp + 0x38);
    fp_push(MEMF(0x1DAEAC)); /* fld float */
    edi = MEM32(esp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_push(MEMF(0x1DAEB0)); /* fld float */
    PUSH32(esp, 0x1DAEB4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    eax = MEM32(esp + 0x44);
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x20) = 0;
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x34);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    MEM32(esp + 0x24) = 0;
    ecx = MEM32(esp + 0x24);
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x44);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(edx + 0x20) = ecx;
    eax = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = edi;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esi + 0x1D0);
    edx = MEM32(esi + 0x1D4);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x44) = eax;
    eax = esp + 0x20;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0x000AB6AFu); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_000AB6AF: ;
    fp_push(MEMF(0x1DAEA8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    fp_push(MEMF(0x1DAEAC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(0x1DAEB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    eax = MEM32(esp + 0x44);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esp + 0x4C);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x3C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = 0x3F800000;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x2C) = 0;
    MEM32(eax + 8) = edx;
    ecx = MEM32(esp + 0x4C);
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(esp + 0x4C);
    MEM32(ecx + 0x18) = edi;
    fp_push(MEMF(esi + 0x1D0)); /* fld float */
    edx = MEM32(esp + 0x4C);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x34;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esi + 0x1D4)); /* fld float */
    MEM32(esp + 0x4C) = edx;
    PUSH32(esp, 0x1DAEB4);
    fp_top() = -fp_top(); /* fchs */
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    MEM32(esp + 0x38) = 0;
    PUSH32(esp, 0x000AB754u); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_000AB754: ;
    fp_push(MEMF(0x1DAEA8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    edx = MEM32(esp + 0x50);
    fp_push(MEMF(0x1DAEAC)); /* fld float */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    PUSH32(esp, 0x1DAEB4);
    fp_push(MEMF(0x1DAEB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    eax = MEM32(esp + 0x5C);
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x38) = 0;
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x4C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    MEM32(esp + 0x3C) = 0x3F800000;
    ecx = MEM32(esp + 0x3C);
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x5C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x5C);
    MEM32(edx + 0x20) = ecx;
    eax = MEM32(esp + 0x5C);
    MEM32(eax + 0x18) = edi;
    fp_push(MEMF(esi + 0x1D4)); /* fld float */
    ecx = MEM32(esp + 0x5C);
    fp_top() = -fp_top(); /* fchs */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x38;
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esi + 0x1D0);
    PUSH32(esp, edx);
    eax = esp + 0x48;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = 0;
    PUSH32(esp, 0x000AB7F7u); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_000AB7F7: ;
    fp_push(MEMF(0x1DAEA8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    fp_push(MEMF(0x1DAEAC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(0x1DAEB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEM32(esp + 0x40) = 0x3F800000;
    MEM32(esp + 0x44) = 0x3F800000;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x5C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x40);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(esp + 0x64);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x44);
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x64);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x64);
    MEM32(edx + 0x20) = ecx;
    eax = MEM32(esp + 0x64);
    MEM32(eax + 0x18) = edi;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x64) = MEM32(esp + 0x64) + 0x34;
    _fa = (uint32_t)(MEM32(esp + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x1DF760) = 0;
    MEM32(0x1DF438) = 0;
    PUSH32(esp, 0x000AB87Bu); RECOMP_ABI_CALL(0x000F95A0u, sub_000F95A0); /* call 0x000F95A0 */

loc_000AB87B: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x000AB882u); RECOMP_ABI_CALL(0x000FB660u, sub_000FB660); /* call 0x000FB660 */

loc_000AB882: ;
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000AB88Eu); RECOMP_ABI_CALL(0x000FAC60u, sub_000FAC60); /* call 0x000FAC60 */

loc_000AB88E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000AB898u); RECOMP_ABI_CALL(0x000FAD00u, sub_000FAD00); /* call 0x000FAD00 */

loc_000AB898: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000AB8A0u); RECOMP_ABI_CALL(0x000FA850u, sub_000FA850); /* call 0x000FA850 */

loc_000AB8A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0012AF20(); return; /* tail jmp 0x0012AF20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_000AB8B0
 * Original: 0x000AB8B0 - 0x000AB8EA (58 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AB8B0: ;
    eax = MEM32(ecx + 0x18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB8DF; /* je: equal / zero */

loc_000AB8BA: ;
    eax = MEM32(ecx + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB8DF; /* je: equal / zero */

loc_000AB8C4: ;
    eax = MEM32(ecx + 0x190);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000AB8E5; /* je: equal / zero */

loc_000AB8CF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000AB8E0; /* je: equal / zero */

loc_000AB8D2: ;
    PUSH32(esp, 0x1BF454);
    PUSH32(esp, 0x000AB8DCu); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_000AB8DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000AB8DF: ;
    esp += 4; return; /* ret */

loc_000AB8E0: ;
    g_seh_ebp = ebp; sub_000A6880(); return; /* tail jmp 0x000A6880 */

loc_000AB8E5: ;
    g_seh_ebp = ebp; sub_000AB410(); return; /* tail jmp 0x000AB410 */

}



