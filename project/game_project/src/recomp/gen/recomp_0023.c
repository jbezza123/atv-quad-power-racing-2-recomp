/**
 * ATV: Quad Power Racing 2 - Recompiled code chunk 23
 * Functions: 250 (0x00121BC0 - 0x0012B8E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00121BC0
 * Original: 0x00121BC0 - 0x00121BDC (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00121BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121BC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00121BCDu); RECOMP_ABI_CALL(0x00121B80u, sub_00121B80); /* call 0x00121B80 */

loc_00121BCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121BD7; /* je: equal / zero */

loc_00121BD1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00121BD7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121BE0
 * Original: 0x00121BE0 - 0x00121C22 (66 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121BE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00121BEEu); RECOMP_ABI_CALL(0x00121B80u, sub_00121B80); /* call 0x00121B80 */

loc_00121BEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121C10; /* je: equal / zero */

loc_00121BF2: ;
    esi = eax + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121C12; /* je: equal / zero */

loc_00121BF9: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121C01u); RECOMP_ABI_CALL(0x0012B471u, sub_0012B471); /* call 0x0012B471 */

loc_00121C01: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00121C10: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00121C12: ;
    edx = MEM32(esp + 0xC);
    eax = esi;
    MEM32(edx) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121C30
 * Original: 0x00121C30 - 0x00121D3F (271 bytes, 118 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121C30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00121C56; /* jle: less or equal (signed <=) */

loc_00121C42: ;
    esi = ebp;

loc_00121C44: ;
    PUSH32(esp, 0x1C6724);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00121C50u); RECOMP_ABI_CALL(0x00121810u, sub_00121810); /* call 0x00121810 */

loc_00121C50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00121C44; /* jne: not equal / not zero */

loc_00121C56: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C6720);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00121C66u); RECOMP_ABI_CALL(0x00121810u, sub_00121810); /* call 0x00121810 */

loc_00121C66: ;
    esi = MEM32(ebx + 0x58);
    eax = ebx + 0x2C;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121CC1; /* je: equal / zero */

loc_00121C73: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121CC1; /* je: equal / zero */

loc_00121C77: ;
    PUSH32(esp, 0x1C55C4);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00121C83u); RECOMP_ABI_CALL(0x00121810u, sub_00121810); /* call 0x00121810 */

loc_00121C83: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00121C90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121C8Du); } /* indirect call */
    }

loc_00121C90: ;
    esi = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121C9E; /* jne: not equal / not zero */

loc_00121C9A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00121CA3;

loc_00121C9E: ;
    ecx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00121CA3: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121CBD; /* jne: not equal / not zero */

loc_00121CA8: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121CB3; /* jne: not equal / not zero */

loc_00121CAF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00121CB8;

loc_00121CB3: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00121CB8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121CC1; /* je: equal / zero */

loc_00121CBD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121C77; /* jne: not equal / not zero */

loc_00121CC1: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121D29; /* je: equal / zero */

loc_00121CC8: ;
    PUSH32(esp, 0x1C671C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00121CD4u); RECOMP_ABI_CALL(0x00121810u, sub_00121810); /* call 0x00121810 */

loc_00121CD4: ;
    esi = MEM32(ebx + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121D0F; /* je: equal / zero */

loc_00121CDE: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_00121CE0: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00121CFF; /* jne: not equal / not zero */

loc_00121CF0: ;
    PUSH32(esp, 0x1A2444);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00121CFCu); RECOMP_ABI_CALL(0x00121810u, sub_00121810); /* call 0x00121810 */

loc_00121CFC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121CFF: ;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00121D08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121D05u); } /* indirect call */
    }

loc_00121D08: ;
    esi = MEM32(esi + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121CE0; /* jne: not equal / not zero */

loc_00121D0F: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C6714);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00121D1Fu); RECOMP_ABI_CALL(0x00121810u, sub_00121810); /* call 0x00121810 */

loc_00121D1F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00121D29: ;
    PUSH32(esp, 0x1C6710);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00121D35u); RECOMP_ABI_CALL(0x00121810u, sub_00121810); /* call 0x00121810 */

loc_00121D35: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121D40
 * Original: 0x00121D40 - 0x00121D75 (53 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121D40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121D4Fu); RECOMP_ABI_CALL(0x00115AE0u, sub_00115AE0); /* call 0x00115AE0 */

loc_00121D4F: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121D70; /* je: equal / zero */

loc_00121D58: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00121D62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121D5Fu); } /* indirect call */
    }

loc_00121D62: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00121D68u); RECOMP_ABI_CALL(0x00115570u, sub_00115570); /* call 0x00115570 */

loc_00121D68: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00121D70: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121D80
 * Original: 0x00121D80 - 0x00121DB9 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121D80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x24) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00121D9A; /* je: equal / zero */

loc_00121D91: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121D97u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00121D97: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121D9A: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00121DB1; /* je: equal / zero */

loc_00121DA8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121DAEu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00121DAE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121DB1: ;
    MEM32(esi) = 0x1C66DC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121DC0
 * Original: 0x00121DC0 - 0x00121DEF (47 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121DC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121DC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x14;
    MEM32(esi) = 0x1C6730;
    PUSH32(esp, 0x00121DD1u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00121DD1: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 8) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121DF0
 * Original: 0x00121DF0 - 0x00121E30 (64 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121DF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi) = 0x1C6730;
    if (CMP_EQ(_fa, _fb)) goto loc_00121E10; /* je: equal / zero */

loc_00121E01: ;
    ecx = esi;
    eax = MEM32(ecx);
    esi = MEM32(esi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00121E0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121E0Au); } /* indirect call */
    }

loc_00121E0C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121E01; /* jne: not equal / not zero */

loc_00121E10: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x20) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00121E27; /* je: equal / zero */

loc_00121E1E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121E24u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00121E24: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121E27: ;
    MEM32(edi) = 0x1C66DC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121E30
 * Original: 0x00121E30 - 0x00121E7E (78 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121E30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121E30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x14;
    ecx = edi;
    MEM32(esi) = 0x1C6730;
    PUSH32(esp, 0x00121E45u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00121E45: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x34;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi) = 0x1C6744;
    PUSH32(esp, 0x00121E67u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00121E67: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00121E73u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_00121E73: ;
    POP32(esp, edi);
    MEM8(esi + 0x2C) = LO8(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121E80
 * Original: 0x00121E80 - 0x00121F28 (168 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121E80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x44);
    edi = ecx;
    PUSH32(esp, 0x00121E8Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00121E8C: ;
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121F0F; /* je: equal / zero */

loc_00121E97: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x14;
    ecx = ebp;
    MEM32(esi) = 0x1C6730;
    PUSH32(esp, 0x00121EA8u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00121EA8: ;
    ecx = esi + 0x34;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi) = 0x1C6744;
    PUSH32(esp, 0x00121EC8u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00121EC8: ;
    eax = edi + 0x14;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM8(esi + 0x2C) = LO8(ebx);
    PUSH32(esp, 0x00121ED6u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_00121ED6: ;
    SET_LO8(ecx, MEM8(edi + 0x2C));
    edx = edi + 0x34;
    MEM8(esi + 0x2C) = LO8(ecx);
    PUSH32(esp, edx);
    ecx = esi + 0x34;
    PUSH32(esp, 0x00121EE8u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_00121EE8: ;
    edi = MEM32(edi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00121F22; /* je: equal / zero */

loc_00121EF0: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00121EF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121EF4u); } /* indirect call */
    }

loc_00121EF7: ;
    MEM32(eax + 4) = esi;
    ecx = MEM32(esi + 0x10);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ebx;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121F15; /* je: equal / zero */

loc_00121F0A: ;
    MEM32(ecx + 0x28) = eax;
    goto loc_00121F18;

loc_00121F0F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00121F15: ;
    MEM32(esi + 0xC) = eax;

loc_00121F18: ;
    MEM32(esi + 0x10) = eax;
    edi = MEM32(edi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121EF0; /* jne: not equal / not zero */

loc_00121F22: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00121F30
 * Original: 0x00121F30 - 0x00122044 (276 bytes, 87 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121F30: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x1C679C);
    ecx = esp + 8;
    PUSH32(esp, 0x00121F44u); RECOMP_ABI_CALL(0x000E1740u, sub_000E1740); /* call 0x000E1740 */

loc_00121F44: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121F4F; /* jne: not equal / not zero */

loc_00121F4B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00121F54;

loc_00121F4F: ;
    eax = MEM32(esi + 0x30);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00121F54: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121F82; /* je: equal / zero */

loc_00121F59: ;
    PUSH32(esp, 0x1C6790);
    ecx = esp + 8;
    PUSH32(esp, 0x00121F67u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_00121F67: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x00121F74u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_00121F74: ;
    PUSH32(esp, 0x1C678C);
    ecx = esp + 8;
    PUSH32(esp, 0x00121F82u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_00121F82: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121F8D; /* jne: not equal / not zero */

loc_00121F89: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00121F92;

loc_00121F8D: ;
    eax = MEM32(esi + 0x40);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00121F92: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121FC0; /* je: equal / zero */

loc_00121F97: ;
    PUSH32(esp, 0x1C6780);
    ecx = esp + 8;
    PUSH32(esp, 0x00121FA5u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_00121FA5: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, 0x00121FB2u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_00121FB2: ;
    PUSH32(esp, 0x1C678C);
    ecx = esp + 8;
    PUSH32(esp, 0x00121FC0u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_00121FC0: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121FCB; /* jne: not equal / not zero */

loc_00121FC7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00121FD0;

loc_00121FCB: ;
    eax = MEM32(esi + 0x50);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00121FD0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121FFE; /* je: equal / zero */

loc_00121FD5: ;
    PUSH32(esp, 0x1C6770);
    ecx = esp + 8;
    PUSH32(esp, 0x00121FE3u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_00121FE3: ;
    edx = MEM32(esi + 0x4C);
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, 0x00121FF0u); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_00121FF0: ;
    PUSH32(esp, 0x1C678C);
    ecx = esp + 8;
    PUSH32(esp, 0x00121FFEu); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_00121FFE: ;
    PUSH32(esp, 0x1C676C);
    ecx = esp + 8;
    PUSH32(esp, 0x0012200Cu); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_0012200C: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B0638);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122021u); RECOMP_ABI_CALL(0x00121810u, sub_00121810); /* call 0x00121810 */

loc_00122021: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0012203E; /* je: equal / zero */

loc_00122035: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012203Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0012203B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012203E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00122050
 * Original: 0x00122050 - 0x001220C3 (115 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00122050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122050: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012207E; /* jne: not equal / not zero */

loc_0012207A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00122083;

loc_0012207E: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00122083: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012208Bu); RECOMP_ABI_CALL(0x000E1410u, sub_000E1410); /* call 0x000E1410 */

loc_0012208B: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122095; /* jne: not equal / not zero */

loc_00122091: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0012209A;

loc_00122095: ;
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0012209A: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = ecx;
    ecx = MEM32(edi + 4);
    ebp = eax;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001220BB; /* je: equal / zero */

loc_001220AC: ;
    /* nop */

loc_001220B0: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ebp) = LO8(edx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001220B0; /* jne: not equal / not zero */

loc_001220BB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001220D0
 * Original: 0x001220D0 - 0x0012211D (77 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001220D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001220D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x24) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001220EA; /* je: equal / zero */

loc_001220E1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001220E7u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001220E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001220EA: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00122101; /* je: equal / zero */

loc_001220F8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001220FEu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001220FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122101: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x1C66DC;
    if (TEST_Z(_fa, _fb)) goto loc_00122117; /* je: equal / zero */

loc_0012210E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122114u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00122114: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122117: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00122120
 * Original: 0x00122120 - 0x00122153 (51 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122120: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x14;
    MEM32(esi) = 0x1C6730;
    PUSH32(esp, 0x00122131u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00122131: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 8) = 2;
    MEM32(esi) = 0x1C67A4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00122160
 * Original: 0x00122160 - 0x00122184 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122160: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C67A4;
    PUSH32(esp, 0x0012216Eu); RECOMP_ABI_CALL(0x00121DF0u, sub_00121DF0); /* call 0x00121DF0 */

loc_0012216E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012217E; /* je: equal / zero */

loc_00122175: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012217Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0012217B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012217E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00122190
 * Original: 0x00122190 - 0x001221B4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122190: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C67B8;
    PUSH32(esp, 0x0012219Eu); RECOMP_ABI_CALL(0x00121DF0u, sub_00121DF0); /* call 0x00121DF0 */

loc_0012219E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001221AE; /* je: equal / zero */

loc_001221A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001221ABu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001221AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001221AE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001221C0
 * Original: 0x001221C0 - 0x0012220B (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001221C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001221C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x14;
    MEM32(esi) = 0x1C6730;
    PUSH32(esp, 0x001221D1u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_001221D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x2C;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 5;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi) = 0x1C6758;
    PUSH32(esp, 0x001221F7u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_001221F7: ;
    ecx = esi + 0x3C;
    PUSH32(esp, 0x001221FFu); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_001221FF: ;
    ecx = esi + 0x4C;
    PUSH32(esp, 0x00122207u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00122207: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00122210
 * Original: 0x00122210 - 0x0012222E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122210: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00122218u); RECOMP_ABI_CALL(0x00122230u, sub_00122230); /* call 0x00122230 */

loc_00122218: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122228; /* je: equal / zero */

loc_0012221F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122225u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00122225: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122228: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00122230
 * Original: 0x00122230 - 0x00122286 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122230: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C6758;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x58) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00122250; /* je: equal / zero */

loc_00122247: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012224Du); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0012224D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122250: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x48) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00122267; /* je: equal / zero */

loc_0012225E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122264u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00122264: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122267: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x38) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0012227E; /* je: equal / zero */

loc_00122275: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012227Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0012227B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012227E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00121DF0(); return; /* tail jmp 0x00121DF0 */

}

/**
 * sub_00122290
 * Original: 0x00122290 - 0x001222C0 (48 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122290: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C67CC;
    PUSH32(esp, 0x0012229Eu); RECOMP_ABI_CALL(0x00121DF0u, sub_00121DF0); /* call 0x00121DF0 */

loc_0012229E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001222AE; /* je: equal / zero */

loc_001222A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001222ABu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001222AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001222AE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_001222C0(); return; /* fallthrough 0x001222C0 */

}

/**
 * sub_001222C0
 * Original: 0x001222C0 - 0x001222EE (46 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001222C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001222C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x34;
    MEM32(esi) = 0x1C6744;
    PUSH32(esp, 0x001222D1u); RECOMP_ABI_CALL(0x000148B0u, sub_000148B0); /* call 0x000148B0 */

loc_001222D1: ;
    ecx = esi;
    PUSH32(esp, 0x001222D8u); RECOMP_ABI_CALL(0x00121DF0u, sub_00121DF0); /* call 0x00121DF0 */

loc_001222D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001222E8; /* je: equal / zero */

loc_001222DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001222E5u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001222E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001222E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001222F0
 * Original: 0x001222F0 - 0x0012230E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001222F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001222F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001222F8u); RECOMP_ABI_CALL(0x00121DF0u, sub_00121DF0); /* call 0x00121DF0 */

loc_001222F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122308; /* je: equal / zero */

loc_001222FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122305u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00122305: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122308: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00122310
 * Original: 0x00122310 - 0x0012237E (110 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122310: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = esi + 0x14;
    PUSH32(esp, edi);
    ecx = ebp;
    MEM32(esi) = 0x1C6730;
    PUSH32(esp, 0x00122326u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00122326: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x2C;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = 1;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi) = 0x1C67E0;
    ecx = edi + 8;
    MEM32(edi) = 0x1C6728;
    PUSH32(esp, 0x00122355u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00122355: ;
    ecx = edi + 0x18;
    PUSH32(esp, 0x0012235Du); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_0012235D: ;
    eax = MEM32(esp + 0x14);
    MEM32(edi + 0x2C) = edi;
    MEM32(edi + 0x28) = edi;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x00122375u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_00122375: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00122380
 * Original: 0x00122380 - 0x00122418 (152 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122380: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    MEM32(ebx) = 0x1C67E0;
    esi = ebx + 0x2C;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);

loc_00122391: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001223E1; /* je: equal / zero */

loc_00122398: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001223E1; /* je: equal / zero */

loc_0012239C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001223D5; /* je: equal / zero */

loc_001223AA: ;
    /* nop */

loc_001223B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001223BD; /* je: equal / zero */

loc_001223B4: ;
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001223B0; /* jne: not equal / not zero */

loc_001223BB: ;
    goto loc_001223D5;

loc_001223BD: ;
    edx = MEM32(eax + 0x28);
    ebp = MEM32(eax + 0x2C);
    MEM32(edx + 0x2C) = ebp;
    edx = MEM32(eax + 0x2C);
    ebp = MEM32(eax + 0x28);
    MEM32(edx + 0x28) = ebp;
    MEM32(eax + 0x2C) = edi;
    MEM32(eax + 0x28) = edi;

loc_001223D5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122391; /* je: equal / zero */

loc_001223D9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001223DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001223DDu); } /* indirect call */
    }

loc_001223DF: ;
    goto loc_00122391;

loc_001223E1: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x24) = edi;
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_001223F5; /* je: equal / zero */

loc_001223EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001223F2u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001223F2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001223F5: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x14) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00122408; /* je: equal / zero */

loc_001223FF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122405u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00122405: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122408: ;
    POP32(esp, edi);
    MEM32(esi) = 0x1C66DC;
    POP32(esp, esi);
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00121DF0(); return; /* tail jmp 0x00121DF0 */

}

/**
 * sub_00122420
 * Original: 0x00122420 - 0x00122480 (96 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122420: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2C);
    ebp = ecx;
    PUSH32(esp, 0x0012242Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0012242C: ;
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122476; /* je: equal / zero */

loc_00122437: ;
    PUSH32(esp, edi);
    edi = esi + 0x14;
    ecx = edi;
    MEM32(esi) = 0x1C6730;
    PUSH32(esp, 0x00122448u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00122448: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = 2;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi) = 0x1C67A4;
    PUSH32(esp, 0x0012246Fu); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_0012246F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00122476: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00122480(); return; /* fallthrough 0x00122480 */

}

/**
 * sub_00122480
 * Original: 0x00122480 - 0x001224DC (92 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122480: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2C);
    ebp = ecx;
    PUSH32(esp, 0x0012248Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0012248C: ;
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001224D6; /* je: equal / zero */

loc_00122497: ;
    PUSH32(esp, edi);
    edi = esi + 0x14;
    ecx = edi;
    MEM32(esi) = 0x1C6730;
    PUSH32(esp, 0x001224A8u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_001224A8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = 4;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi) = 0x1C67B8;
    PUSH32(esp, 0x001224CFu); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_001224CF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001224D6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001224E0
 * Original: 0x001224E0 - 0x00122539 (89 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001224E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001224E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5C);
    edi = ecx;
    PUSH32(esp, 0x001224EBu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_001224EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001224FF; /* je: equal / zero */

loc_001224F2: ;
    ecx = eax;
    PUSH32(esp, 0x001224F9u); RECOMP_ABI_CALL(0x001221C0u, sub_001221C0); /* call 0x001221C0 */

loc_001224F9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122504; /* jne: not equal / not zero */

loc_001224FF: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00122504: ;
    eax = edi + 0x14;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00122510u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_00122510: ;
    ecx = edi + 0x2C;
    PUSH32(esp, ecx);
    ecx = esi + 0x2C;
    PUSH32(esp, 0x0012251Cu); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_0012251C: ;
    edx = edi + 0x3C;
    PUSH32(esp, edx);
    ecx = esi + 0x3C;
    PUSH32(esp, 0x00122528u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_00122528: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi + 0x4C;
    PUSH32(esp, 0x00122534u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_00122534: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00122540
 * Original: 0x00122540 - 0x0012259C (92 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122540: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2C);
    ebp = ecx;
    PUSH32(esp, 0x0012254Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0012254C: ;
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122596; /* je: equal / zero */

loc_00122557: ;
    PUSH32(esp, edi);
    edi = esi + 0x14;
    ecx = edi;
    MEM32(esi) = 0x1C6730;
    PUSH32(esp, 0x00122568u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_00122568: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = 3;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi) = 0x1C67CC;
    PUSH32(esp, 0x0012258Fu); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_0012258F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00122596: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001225A0
 * Original: 0x001225A0 - 0x001225BE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001225A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001225A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001225A8u); RECOMP_ABI_CALL(0x00122380u, sub_00122380); /* call 0x00122380 */

loc_001225A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001225B8; /* je: equal / zero */

loc_001225AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001225B5u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001225B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001225B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001225C0
 * Original: 0x001225C0 - 0x00122665 (165 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001225C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001225C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = ebx + 0x2C;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x001225D4u); RECOMP_ABI_CALL(0x00121B80u, sub_00121B80); /* call 0x00121B80 */

loc_001225D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001225EB; /* je: equal / zero */

loc_001225D8: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax + 0x18;
    PUSH32(esp, 0x001225E5u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_001225E5: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001225EB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x001225F3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_001225F3: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122639; /* je: equal / zero */

loc_001225FC: ;
    PUSH32(esp, ebp);
    ecx = esi + 8;
    MEM32(esi) = 0x1C6728;
    PUSH32(esp, 0x0012260Bu); RECOMP_ABI_CALL(0x00122050u, sub_00122050); /* call 0x00122050 */

loc_0012260B: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    ecx = esi + 0x18;
    PUSH32(esp, 0x00122618u); RECOMP_ABI_CALL(0x00122050u, sub_00122050); /* call 0x00122050 */

loc_00122618: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x2C) = edi;
    eax = MEM32(edi + 0x28);
    MEM32(esi + 0x28) = eax;
    ecx = MEM32(edi + 0x28);
    MEM32(ecx + 0x2C) = esi;
    MEM32(edi + 0x28) = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00122639: ;
    ecx = ebx;
    PUSH32(esp, 0x00122640u); RECOMP_ABI_CALL(0x00121950u, sub_00121950); /* call 0x00121950 */

loc_00122640: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012265E; /* je: equal / zero */

loc_00122644: ;
    MEM8(eax + 0x2C) = 1;
    MEM32(eax + 0x30) = 2;
    edx = MEM32(0x1CF644);
    PUSH32(esp, edx);
    ecx = eax + 0x34;
    PUSH32(esp, 0x0012265Eu); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_0012265E: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00122670
 * Original: 0x00122670 - 0x0012272E (190 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122670: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5C);
    ebx = ecx;
    PUSH32(esp, 0x0012267Cu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0012267C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122694; /* je: equal / zero */

loc_00122683: ;
    esi = ebx + 0x14;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0012268Eu); RECOMP_ABI_CALL(0x00122310u, sub_00122310); /* call 0x00122310 */

loc_0012268E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012269A; /* jne: not equal / not zero */

loc_00122694: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012269A: ;
    PUSH32(esp, esi);
    ecx = edi + 0x14;
    PUSH32(esp, 0x001226A3u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_001226A3: ;
    esi = MEM32(ebx + 0x58);
    eax = ebx + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001226F1; /* je: equal / zero */

loc_001226AD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001226F1; /* je: equal / zero */

loc_001226B1: ;
    eax = esi + 0x18;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001226C0u); RECOMP_ABI_CALL(0x001225C0u, sub_001225C0); /* call 0x001225C0 */

loc_001226C0: ;
    esi = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001226CE; /* jne: not equal / not zero */

loc_001226CA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001226D3;

loc_001226CE: ;
    ecx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001226D3: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001226ED; /* jne: not equal / not zero */

loc_001226D8: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001226E3; /* jne: not equal / not zero */

loc_001226DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001226E8;

loc_001226E3: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001226E8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001226F1; /* je: equal / zero */

loc_001226ED: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001226B1; /* jne: not equal / not zero */

loc_001226F1: ;
    esi = MEM32(ebx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122728; /* je: equal / zero */

loc_001226F8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001226FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001226FCu); } /* indirect call */
    }

loc_001226FF: ;
    MEM32(eax + 4) = edi;
    ecx = MEM32(edi + 0x10);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = 0;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012271B; /* je: equal / zero */

loc_00122716: ;
    MEM32(ecx + 0x28) = eax;
    goto loc_0012271E;

loc_0012271B: ;
    MEM32(edi + 0xC) = eax;

loc_0012271E: ;
    MEM32(edi + 0x10) = eax;
    esi = MEM32(esi + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001226F8; /* jne: not equal / not zero */

loc_00122728: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00122730
 * Original: 0x00122730 - 0x0012278C (92 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122730: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = esp + 0x18;
    PUSH32(esp, 0x1C1238);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012274Au); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_0012274A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, 0x0012275Bu); RECOMP_ABI_CALL(0x000E1740u, sub_000E1740); /* call 0x000E1740 */

loc_0012275B: ;
    ecx = MEM32(esp + 0x58);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0012276Cu); RECOMP_ABI_CALL(0x001225C0u, sub_001225C0); /* call 0x001225C0 */

loc_0012276C: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00122786; /* je: equal / zero */

loc_0012277D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122783u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00122783: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122786: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00122790
 * Original: 0x00122790 - 0x001227D3 (67 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00122790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122790: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012279Au); RECOMP_ABI_CALL(0x0011B270u, sub_0011B270); /* call 0x0011B270 */

loc_0012279A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001227CA; /* je: equal / zero */

loc_001227A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001227B9; /* je: equal / zero */

loc_001227A5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001227B9; /* je: equal / zero */

loc_001227A9: ;
    ecx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001227B2u); RECOMP_ABI_CALL(0x00129DD0u, sub_00129DD0); /* call 0x00129DD0 */

loc_001227B2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001227D0; /* je: equal / zero */

loc_001227B9: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001227C3u); RECOMP_ABI_CALL(0x0011B270u, sub_0011B270); /* call 0x0011B270 */

loc_001227C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001227A1; /* jne: not equal / not zero */

loc_001227CA: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_001227D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001227E0
 * Original: 0x001227E0 - 0x001227E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001227E0(void)
{

loc_001227E0: ;
    eax = 0x1F25EC;
    esp += 4; return; /* ret */

}

/**
 * sub_001227F0
 * Original: 0x001227F0 - 0x00122849 (89 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001227F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001227F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122847; /* je: equal / zero */

loc_001227FA: ;
    PUSH32(esp, edi);
    goto loc_00122800;

    /* nop */

loc_00122800: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(eax + 4);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00122810; /* je: equal / zero */

loc_0012280B: ;
    MEM32(edx + 4) = ecx;
    goto loc_00122813;

loc_00122810: ;
    MEM32(esi + 4) = ecx;

loc_00122813: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122820; /* je: equal / zero */

loc_0012281A: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    goto loc_00122825;

loc_00122820: ;
    ecx = MEM32(eax);
    MEM32(esi + 8) = ecx;

loc_00122825: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    edx = MEM32(esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(esi) = edx;
    PUSH32(esp, 0x0012283Du); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0012283D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00122800; /* jne: not equal / not zero */

loc_00122846: ;
    POP32(esp, edi);

loc_00122847: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00122850
 * Original: 0x00122850 - 0x00122887 (55 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122850: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00122878; /* je: equal / zero */

loc_00122859: ;
    edi = MEM32(esp + 0xC);
    /* nop */

loc_00122860: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012286Au); RECOMP_ABI_CALL(0x000E12E0u, sub_000E12E0); /* call 0x000E12E0 */

loc_0012286A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012287F; /* je: equal / zero */

loc_00122871: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122860; /* jne: not equal / not zero */

loc_00122878: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0012287F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x00122882u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012287Fu); } /* indirect call */
    }

loc_00122882: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00122890
 * Original: 0x00122890 - 0x001228AD (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122890: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0012289Du); RECOMP_ABI_CALL(0x000F6CC0u, sub_000F6CC0); /* call 0x000F6CC0 */

loc_0012289D: ;
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
 * sub_001228B0
 * Original: 0x001228B0 - 0x001228B8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001228B0(void)
{

loc_001228B0: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001228C0
 * Original: 0x001228C0 - 0x0012295A (154 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001228C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001228C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001228D3; /* je: equal / zero */

loc_001228CA: ;
    eax = 2;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001228D3: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012291F; /* jne: not equal / not zero */

loc_001228DD: ;
    eax = MEM32(0x1CF180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122900; /* jne: not equal / not zero */

loc_001228E6: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001228EFu); RECOMP_ABI_CALL(0x000F67C0u, sub_000F67C0); /* call 0x000F67C0 */

loc_001228EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122900; /* jne: not equal / not zero */

loc_001228F6: ;
    POP32(esp, edi);
    eax = 8;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00122900: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012290Bu); RECOMP_ABI_CALL(0x000F7090u, sub_000F7090); /* call 0x000F7090 */

loc_0012290B: ;
    MEM32(esi + 0x24) = eax;
    eax = MEM32(0x1DEFB8);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = 0;
    goto loc_00122932;

loc_0012291F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122950; /* jne: not equal / not zero */

loc_00122924: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012292Fu); RECOMP_ABI_CALL(0x00115AE0u, sub_00115AE0); /* call 0x00115AE0 */

loc_0012292F: ;
    MEM32(esi + 0x20) = eax;

loc_00122932: ;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122943; /* jne: not equal / not zero */

loc_0012293C: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001228F6; /* je: equal / zero */

loc_00122943: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0012294Bu); RECOMP_ABI_CALL(0x00119DB0u, sub_00119DB0); /* call 0x00119DB0 */

loc_0012294B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00122950: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00122960
 * Original: 0x00122960 - 0x001229D3 (115 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122960: ;
    eax = MEM32(0x1CF180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00122985; /* jne: not equal / not zero */

loc_0012296C: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122975u); RECOMP_ABI_CALL(0x000F67C0u, sub_000F67C0); /* call 0x000F67C0 */

loc_00122975: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122985; /* jne: not equal / not zero */

loc_0012297C: ;
    eax = 8;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00122985: ;
    SET_LO8(eax, MEM8(esp + 8));
    ecx = 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122997; /* je: equal / zero */

loc_00122992: ;
    ecx = 0x11;

loc_00122997: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001229A7; /* je: equal / zero */

loc_0012299B: ;
    _fa = (uint32_t)(MEM32(0x1CF180)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CF180), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001229A7; /* je: equal / zero */

loc_001229A4: ;
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001229A7: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001229B1u); RECOMP_ABI_CALL(0x000F7090u, sub_000F7090); /* call 0x000F7090 */

loc_001229B1: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 4) = eax;
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001229CD; /* je: equal / zero */

loc_001229C5: ;
    edx = MEM32(0x1DEFB8);
    MEM32(eax) = edx;

loc_001229CD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001229E0
 * Original: 0x001229E0 - 0x00122A27 (71 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001229E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001229E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001229F1; /* jne: not equal / not zero */

loc_001229EA: ;
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001229F1: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122A08; /* je: equal / zero */

loc_001229F8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001229FEu); RECOMP_ABI_CALL(0x000F6CC0u, sub_000F6CC0); /* call 0x000F6CC0 */

loc_001229FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = 0;

loc_00122A08: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122A1F; /* je: equal / zero */

loc_00122A0F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122A15u); RECOMP_ABI_CALL(0x00115570u, sub_00115570); /* call 0x00115570 */

loc_00122A15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = 0;

loc_00122A1F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00119DC0(); return; /* tail jmp 0x00119DC0 */

}

/**
 * sub_00122A30
 * Original: 0x00122A30 - 0x00122A60 (48 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122A30: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00122A3E; /* je: equal / zero */

loc_00122A36: ;
    eax = 5;
    esp += 12; return; /* ret 8 */

loc_00122A3E: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122A51u); RECOMP_ABI_CALL(0x00115590u, sub_00115590); /* call 0x00115590 */

loc_00122A51: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

    g_seh_ebp = ebp; sub_00122A60(); return; /* fallthrough 0x00122A60 */

}

/**
 * sub_00122A60
 * Original: 0x00122A60 - 0x00122A9D (61 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122A60: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122A72; /* je: equal / zero */

loc_00122A69: ;
    eax = 4;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00122A72: ;
    eax = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x2C);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00122A8Bu); RECOMP_ABI_CALL(0x000F5860u, sub_000F5860); /* call 0x000F5860 */

loc_00122A8B: ;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = eax;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00122AA0
 * Original: 0x00122AA0 - 0x00122ABE (30 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122AA0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122AA8; /* jne: not equal / not zero */

loc_00122AA7: ;
    esp += 4; return; /* ret */

loc_00122AA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122AB1; /* jne: not equal / not zero */

loc_00122AAD: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

loc_00122AB1: ;
    eax = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122ABAu); RECOMP_ABI_CALL(0x001155F0u, sub_001155F0); /* call 0x001155F0 */

loc_00122ABA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122AC0
 * Original: 0x00122AC0 - 0x00122B67 (167 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122AC0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122AD1; /* jne: not equal / not zero */

loc_00122AC8: ;
    eax = 3;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00122AD1: ;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 1;
    if ((_fa == 0)) goto loc_00122AF7; /* je: equal / zero */

loc_00122ADF: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00122AF0; /* je: equal / zero */

loc_00122AE2: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00122AE9; /* je: equal / zero */

loc_00122AE5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00122AE9: ;
    edx = 2;
    goto loc_00122AF9;

loc_00122AF0: ;
    edx = 1;
    goto loc_00122AF9;

loc_00122AF7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00122AF9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122B47; /* jne: not equal / not zero */

loc_00122AFE: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00122B32; /* je: equal / zero */

loc_00122B03: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00122B1D; /* je: equal / zero */

loc_00122B06: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00122B59; /* jne: not equal / not zero */

loc_00122B09: ;
    edx = MEM32(ecx + 0x28);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x2C) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    eax = edx;
    esp += 12; return; /* ret 8 */

loc_00122B1D: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x2C) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    eax = edx;
    esp += 12; return; /* ret 8 */

loc_00122B32: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ecx + 0x2C) = 0;
    POP32(esp, esi);
    eax = edx;
    esp += 12; return; /* ret 8 */

loc_00122B47: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00122B56u); RECOMP_ABI_CALL(0x001155C0u, sub_001155C0); /* call 0x001155C0 */

loc_00122B56: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122B59: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    eax = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00122B70
 * Original: 0x00122B70 - 0x00122BA8 (56 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122B70: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00122B7Du); RECOMP_ABI_CALL(0x00119D80u, sub_00119D80); /* call 0x00119D80 */

loc_00122B7D: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esi + 0x10;
    MEM32(esi) = 0x1C6804;
    PUSH32(esp, 0x00122B90u); RECOMP_ABI_CALL(0x000E1740u, sub_000E1740); /* call 0x000E1740 */

loc_00122B90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = 0xFFFFFFFFu;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00122BB0
 * Original: 0x00122BB0 - 0x00122BB4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122BB0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122BC0
 * Original: 0x00122BC0 - 0x00122BC3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00122BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122BC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122BD0
 * Original: 0x00122BD0 - 0x00122BF8 (40 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122BD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C6804;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00122BF0; /* je: equal / zero */

loc_00122BE7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122BEDu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00122BED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122BF0: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00119DA0(); return; /* tail jmp 0x00119DA0 */

}

/**
 * sub_00122C00
 * Original: 0x00122C00 - 0x00122C40 (64 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122C00: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C6804;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00122C20; /* je: equal / zero */

loc_00122C17: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122C1Du); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00122C1D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122C20: ;
    ecx = esi;
    PUSH32(esp, 0x00122C27u); RECOMP_ABI_CALL(0x00119DA0u, sub_00119DA0); /* call 0x00119DA0 */

loc_00122C27: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00122C37; /* je: equal / zero */

loc_00122C2E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122C34u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00122C34: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122C37: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00122C40(); return; /* fallthrough 0x00122C40 */

}

/**
 * sub_00122C40
 * Original: 0x00122C40 - 0x00122C4F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122C40(void)
{

loc_00122C40: ;
    eax = MEM32(esp + 4);
    MEM32(0x1F25F8) = eax;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00122C50
 * Original: 0x00122C50 - 0x00122C6F (31 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122C50: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x1F2600);
    _fa = (uint32_t)(MEM32(0x1F25FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1F25FC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122C6E; /* je: equal / zero */

loc_00122C63: ;
    PUSH32(esp, eax);
    MEM32(0x1F25FC) = eax;
    PUSH32(esp, 0x00122C6Eu); RECOMP_ABI_CALL(0x001A0C30u, sub_001A0C30); /* call 0x001A0C30 */

loc_00122C6E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00122C70
 * Original: 0x00122C70 - 0x00122CD2 (98 bytes, 33 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122C70: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x1C6848);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00122C88u); RECOMP_ABI_CALL(0x0012B3E8u, sub_0012B3E8); /* call 0x0012B3E8 */

loc_00122C88: ;
    eax = MEM32(0x1CF180);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = esp + 0x10;
    edx = edx + edx + 1;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122CA4u); RECOMP_ABI_CALL(0x000F7090u, sub_000F7090); /* call 0x000F7090 */

loc_00122CA4: ;
    esi = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122CC8; /* je: equal / zero */

loc_00122CAD: ;
    ecx = MEM32(esp + 0x70);
    edx = ecx * 4 + 0x1F2600;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122CBFu); RECOMP_ABI_CALL(0x001A0BE0u, sub_001A0BE0); /* call 0x001A0BE0 */

loc_00122CBF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00122CC5u); RECOMP_ABI_CALL(0x000F6CC0u, sub_000F6CC0); /* call 0x000F6CC0 */

loc_00122CC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00122CC8: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122CE0
 * Original: 0x00122CE0 - 0x00122EC5 (485 bytes, 68 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122CE0: ;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C6B54);
    MEM32(esp + 0xC) = 0x1C6B48;
    MEM32(esp + 0x10) = 0x1C6B34;
    MEM32(esp + 0x14) = 0x1C6B1C;
    MEM32(esp + 0x18) = 0x1C6B0C;
    MEM32(esp + 0x1C) = 0x1C6B00;
    MEM32(esp + 0x20) = 0x1C6AF4;
    MEM32(esp + 0x24) = 0x1C6AE4;
    MEM32(esp + 0x28) = 0x1C6ACC;
    MEM32(esp + 0x2C) = 0x1C6AB8;
    MEM32(esp + 0x30) = 0x1C6AAC;
    MEM32(esp + 0x34) = 0x1C6AA0;
    MEM32(esp + 0x38) = 0x1C6A94;
    MEM32(esp + 0x3C) = 0x1C6A88;
    MEM32(esp + 0x40) = 0x1C6A78;
    MEM32(esp + 0x44) = 0x1C6A70;
    MEM32(esp + 0x48) = 0x1C6A60;
    MEM32(esp + 0x4C) = 0x1C6A48;
    MEM32(esp + 0x50) = 0x1C6A38;
    MEM32(esp + 0x54) = 0x1C6A28;
    MEM32(esp + 0x58) = 0x1C6A18;
    MEM32(esp + 0x5C) = 0x1C6A10;
    MEM32(esp + 0x60) = 0x1C6A00;
    MEM32(esp + 0x64) = 0x1C69F4;
    MEM32(esp + 0x68) = 0x1C69E4;
    MEM32(esp + 0x6C) = 0x1C69CC;
    MEM32(esp + 0x70) = 0x1C69BC;
    MEM32(esp + 0x74) = 0x1C69AC;
    MEM32(esp + 0x78) = 0x1C699C;
    MEM32(esp + 0x7C) = 0x1C6984;
    MEM32(esp + 0x80) = 0x1C696C;
    MEM32(esp + 0x84) = 0x1C6954;
    MEM32(esp + 0x88) = 0x1C6944;
    MEM32(esp + 0x8C) = 0x1C6934;
    MEM32(esp + 0x90) = 0x1C6924;
    MEM32(esp + 0x94) = 0x1C690C;
    MEM32(esp + 0x98) = 0x1C68FC;
    MEM32(esp + 0x9C) = 0x1C68EC;
    MEM32(esp + 0xA0) = 0x1C68DC;
    MEM32(esp + 0xA4) = 0x1C68CC;
    MEM32(esp + 0xA8) = 0x1C68BC;
    MEM32(esp + 0xAC) = 0x1C68AC;
    MEM32(esp + 0xB0) = 0x1C689C;
    MEM32(esp + 0xB4) = 0x1C688C;
    MEM32(esp + 0xB8) = 0x1C687C;
    MEM32(esp + 0xBC) = 0x1C6864;
    PUSH32(esp, 0x00122E8Bu); RECOMP_ABI_CALL(0x000F7410u, sub_000F7410); /* call 0x000F7410 */

loc_00122E8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00122E90: ;
    eax = MEM32(esp + esi * 4 + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00122E9Bu); RECOMP_ABI_CALL(0x00122C70u, sub_00122C70); /* call 0x00122C70 */

loc_00122E9B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2D (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00122E90; /* jl: less (signed <) */

loc_00122EA4: ;
    PUSH32(esp, 0x1C6B54);
    PUSH32(esp, 0x00122EAEu); RECOMP_ABI_CALL(0x000F6E60u, sub_000F6E60); /* call 0x000F6E60 */

loc_00122EAE: ;
    ecx = MEM32(0x1F2600);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x1F25FC) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122ED0
 * Original: 0x00122ED0 - 0x00122FDB (267 bytes, 93 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122ED0(void)
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

loc_00122ED0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    edx = MEM32(eax + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    PUSH32(esp, esi);
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(eax + 0x34)); /* fld float */
    MEM32(ecx + 0x30) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 0x38) = edx;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    edx = eax + 0xC;
    MEMF(ecx + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(edx);
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEM32(ecx + 0x40) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 0x44) = esi;
    esi = MEM32(edx + 8);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(ecx + 0x48) = esi;
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(eax + 0x24);
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEM32(ecx + 0x50) = esi;
    esi = MEM32(eax + 0x28);
    MEM32(ecx + 0x54) = esi;
    esi = MEM32(eax + 0x2C);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(ecx + 0x58) = esi;
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(ecx + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(ecx + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    esi = MEM32(eax + 4);
    MEM32(ecx + 4) = esi;
    esi = MEM32(eax + 8);
    MEM32(ecx + 8) = esi;
    fp_push(MEMF(eax + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    eax = ecx + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00122FD8; /* je: equal / zero */

loc_00122FA4: ;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(edx + 0x10);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(edx + 0x14);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(edx + 0x18);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(edx + 0x1C);
    MEM32(eax + 0x1C) = ecx;
    edx = MEM32(edx + 0x20);
    MEM32(eax + 0x20) = edx;

loc_00122FD8: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00122FE0
 * Original: 0x00122FE0 - 0x00123077 (151 bytes, 53 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122FE0(void)
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

loc_00122FE0: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x4C)); /* fadd dword ptr [ecx + 0x4c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012300B; /* jp: parity */

loc_00123009: ;
    fp_top() = -fp_top(); /* fchs */

loc_0012300B: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0xC)); /* fsub dword ptr [edx + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x60)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x60] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012304C; /* je: equal / zero */

loc_00123018: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x50)); /* fmul dword ptr [ecx + 0x50] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x5C)); /* fadd dword ptr [ecx + 0x5c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012303F; /* jp: parity */

loc_0012303D: ;
    fp_top() = -fp_top(); /* fchs */

loc_0012303F: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0xC)); /* fsub dword ptr [edx + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x64)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x64] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123051; /* jne: not equal / not zero */

loc_0012304C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_00123051: ;
    fp_push(MEMF(ecx + 0x3C)); /* fld float */
    eax = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 4)); /* fadd dword ptr [edx + 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00123074; /* je: equal / zero */

loc_0012306F: ;
    eax = 2;

loc_00123074: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00123080
 * Original: 0x00123080 - 0x0012308A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123080(void)
{

loc_00123080: ;
    eax = ecx;
    MEM32(eax + 0x68) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00123090
 * Original: 0x00123090 - 0x001230D3 (67 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123090: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001230A4; /* je: equal / zero */

loc_0012309C: ;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;
    goto loc_001230AA;

loc_001230A4: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;

loc_001230AA: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001230B9; /* je: equal / zero */

loc_001230B1: ;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    goto loc_001230BF;

loc_001230B9: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;

loc_001230BF: ;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001230E0
 * Original: 0x001230E0 - 0x00123163 (131 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001230E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001230E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001230FB; /* je: equal / zero */

loc_001230EA: ;
    ecx = MEM32(esp + 8);
    edi = edi;

loc_001230F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123104; /* je: equal / zero */

loc_001230F4: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001230F0; /* jne: not equal / not zero */

loc_001230FB: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00123104: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123112; /* je: equal / zero */

loc_0012310A: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_00123118;

loc_00123112: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x1C) = ecx;

loc_00123118: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123125; /* je: equal / zero */

loc_0012311F: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    goto loc_0012312A;

loc_00123125: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x20) = ecx;

loc_0012312A: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(0x1F26B8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(0x1F26B8) = ecx;
    PUSH32(esp, 0x0012314Du); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0012314D: ;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001230FB; /* jne: not equal / not zero */

loc_00123157: ;
    edx = MEM32(esi + 0x14);
    MEM32(esi + 0x10) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00123170
 * Original: 0x00123170 - 0x001231C3 (83 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123170: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(edi + 0x14);
    esi = MEM32(edi + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi + 0x14) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001231BE; /* je: equal / zero */

loc_0012318A: ;
    eax = MEM32(ecx + 8);
    /* nop */

loc_00123190: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001231A1; /* je: equal / zero */

loc_00123195: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123190; /* jne: not equal / not zero */

loc_0012319C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001231A1: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001231A9u); RECOMP_ABI_CALL(0x001230E0u, sub_001230E0); /* call 0x001230E0 */

loc_001231A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001231BE; /* jne: not equal / not zero */

loc_001231AD: ;
    PUSH32(esp, esi);
    ecx = edi + 4;
    PUSH32(esp, 0x001231B6u); RECOMP_ABI_CALL(0x00123090u, sub_00123090); /* call 0x00123090 */

loc_001231B6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001231BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001231BCu); } /* indirect call */
    }

loc_001231BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001231D0
 * Original: 0x001231D0 - 0x00123225 (85 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001231D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001231D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012321F; /* je: equal / zero */

loc_001231DD: ;
    PUSH32(esp, edi);
    edi = edi;

loc_001231E0: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    eax = MEM32(ecx + 8);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001231F1; /* je: equal / zero */

loc_001231EC: ;
    MEM32(edx + 8) = eax;
    goto loc_001231F4;

loc_001231F1: ;
    MEM32(esi + 8) = eax;

loc_001231F4: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123203; /* je: equal / zero */

loc_001231FB: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    goto loc_00123209;

loc_00123203: ;
    eax = MEM32(ecx + 4);
    MEM32(esi + 0xC) = eax;

loc_00123209: ;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = ebx;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00123218u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123216u); } /* indirect call */
    }

loc_00123218: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001231E0; /* jne: not equal / not zero */

loc_0012321E: ;
    POP32(esp, edi);

loc_0012321F: ;
    MEM32(esi + 0x14) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00123230
 * Original: 0x00123230 - 0x00123293 (99 bytes, 37 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123230: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123288; /* je: equal / zero */

loc_00123238: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00123243u); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_00123243: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012324Eu); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_0012324E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00123259u); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_00123259: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00123264u); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_00123264: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012326Cu); RECOMP_ABI_CALL(0x00197CB0u, sub_00197CB0); /* call 0x00197CB0 */

loc_0012326C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123282; /* je: equal / zero */

loc_00123270: ;
    PUSH32(esp, 0x1C3E94);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012327Bu); RECOMP_ABI_CALL(0x000E36B0u, sub_000E36B0); /* call 0x000E36B0 */

loc_0012327B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00123282: ;
    MEM32(esi) = 0;

loc_00123288: ;
    MEM32(esi + 4) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001232A0
 * Original: 0x001232A0 - 0x00123300 (96 bytes, 35 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001232A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001232A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi) = 0x1C6B7C;
    PUSH32(esp, 0x40);
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = edi;
    PUSH32(esp, 0x001232C2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_001232C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001232D2; /* je: equal / zero */

loc_001232C9: ;
    ecx = eax;
    PUSH32(esp, 0x001232D0u); RECOMP_ABI_CALL(0x001256E0u, sub_001256E0); /* call 0x001256E0 */

loc_001232D0: ;
    goto loc_001232D4;

loc_001232D2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001232D4: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x001232EDu); RECOMP_ABI_CALL(0x001253C0u, sub_001253C0); /* call 0x001253C0 */

loc_001232ED: ;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(0x1F26B4) = MEM32(0x1F26B4) + 1;
    _fa = (uint32_t)(MEM32(0x1F26B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00123300
 * Original: 0x00123300 - 0x00123385 (133 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123300: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00123316; /* jbe: below or equal (unsigned <=) */

loc_0012330F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00123316: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0012331Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0012331D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012334D; /* je: equal / zero */

loc_00123324: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0x10) = edi;
    MEM32(0x1F26B8) = MEM32(0x1F26B8) + 1;
    _fa = (uint32_t)(MEM32(0x1F26B8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012334F;

loc_0012334D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012334F: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0x10) = MEM32(esi + 0x10) - edi;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi + 0x20);
    MEM32(eax) = ecx;
    MEM32(esi + 0x20) = eax;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123376; /* je: equal / zero */

loc_00123367: ;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(esi + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x18) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00123376: ;
    ecx = MEM32(esi + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x18) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00123390
 * Original: 0x00123390 - 0x001233B4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123390: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x1C6B80;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = 0x400;
    PUSH32(esp, 0x001233B0u); RECOMP_ABI_CALL(0x001231D0u, sub_001231D0); /* call 0x001231D0 */

loc_001233B0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001233C0
 * Original: 0x001233C0 - 0x00123466 (166 bytes, 68 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001233C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001233C0: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x14);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x14) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0012340F; /* jne: not equal / not zero */

loc_001233DE: ;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123408; /* je: equal / zero */

loc_001233E5: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123401; /* jne: not equal / not zero */

loc_001233EC: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM32(eax + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3C), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123401; /* jne: not equal / not zero */

loc_001233F5: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001233FDu); RECOMP_ABI_CALL(0x00123300u, sub_00123300); /* call 0x00123300 */

loc_001233FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012345F; /* jne: not equal / not zero */

loc_00123401: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001233E5; /* jne: not equal / not zero */

loc_00123408: ;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00123411; /* jae: above or equal (unsigned >=) */

loc_0012340F: ;
    esi = ebx;

loc_00123411: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x00123418u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00123418: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012342F; /* je: equal / zero */

loc_0012341F: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0012342Du); RECOMP_ABI_CALL(0x001232A0u, sub_001232A0); /* call 0x001232A0 */

loc_0012342D: ;
    goto loc_00123431;

loc_0012342F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00123431: ;
    MEM32(eax + 8) = 0;
    ecx = MEM32(edi + 0xC);
    MEM32(eax + 4) = ecx;
    MEM32(edi + 0xC) = eax;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012344D; /* je: equal / zero */

loc_00123448: ;
    MEM32(ecx + 8) = eax;
    goto loc_00123450;

loc_0012344D: ;
    MEM32(edi + 8) = eax;

loc_00123450: ;
    edx = MEM32(edi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ecx = eax;
    MEM32(edi + 4) = edx;
    PUSH32(esp, 0x0012345Fu); RECOMP_ABI_CALL(0x00123300u, sub_00123300); /* call 0x00123300 */

loc_0012345F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00123470
 * Original: 0x00123470 - 0x001234FF (143 bytes, 50 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00123470: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x0012347Au); RECOMP_ABI_CALL(0x00125600u, sub_00125600); /* call 0x00125600 */

loc_0012347A: ;
    esi = ebx + 0x34;
    ebp = 3;

loc_00123482: ;
    eax = MEM32(esi + -8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001234DA; /* je: equal / zero */

loc_0012348C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00123497u); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_00123497: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001234A2u); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_001234A2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x001234ADu); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_001234AD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x001234B8u); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_001234B8: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001234C0u); RECOMP_ABI_CALL(0x00197CB0u, sub_00197CB0); /* call 0x00197CB0 */

loc_001234C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001234D4; /* je: equal / zero */

loc_001234C4: ;
    PUSH32(esp, 0x1C3E94);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001234CFu); RECOMP_ABI_CALL(0x000E36B0u, sub_000E36B0); /* call 0x000E36B0 */

loc_001234CF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001234E1;

loc_001234D4: ;
    MEM32(esi) = 0;

loc_001234DA: ;
    MEM32(esi + 4) = 0;

loc_001234E1: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00123482; /* jne: not equal / not zero */

loc_001234E4: ;
    ecx = ebx + 0x14;
    PUSH32(esp, 0x001234ECu); RECOMP_ABI_CALL(0x00123230u, sub_00123230); /* call 0x00123230 */

loc_001234EC: ;
    ecx = ebx + 0xC;
    PUSH32(esp, 0x001234F4u); RECOMP_ABI_CALL(0x00123230u, sub_00123230); /* call 0x00123230 */

loc_001234F4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    ecx = ebx + 4;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00123230(); return; /* tail jmp 0x00123230 */

}

/**
 * sub_00123500
 * Original: 0x00123500 - 0x00123530 (48 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00123500: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C6B80;
    PUSH32(esp, 0x0012350Eu); RECOMP_ABI_CALL(0x001231D0u, sub_001231D0); /* call 0x001231D0 */

loc_0012350E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012351E; /* je: equal / zero */

loc_00123515: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012351Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0012351B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012351E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00123530(); return; /* fallthrough 0x00123530 */

}

/**
 * sub_00123530
 * Original: 0x00123530 - 0x001235BE (142 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123530: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x1C6B7C;
    if (CMP_EQ(_fa, _fb)) goto loc_00123592; /* je: equal / zero */

loc_00123541: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(eax + 4);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00123551; /* je: equal / zero */

loc_0012354C: ;
    MEM32(edx + 4) = ecx;
    goto loc_00123554;

loc_00123551: ;
    MEM32(esi + 0x1C) = ecx;

loc_00123554: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123561; /* je: equal / zero */

loc_0012355B: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    goto loc_00123566;

loc_00123561: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x20) = ecx;

loc_00123566: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(0x1F26B8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(0x1F26B8) = edx;
    PUSH32(esp, 0x00123589u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00123589: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00123541; /* jne: not equal / not zero */

loc_00123592: ;
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001235B0; /* je: equal / zero */

loc_00123599: ;
    ecx = edi;
    PUSH32(esp, 0x001235A0u); RECOMP_ABI_CALL(0x00123470u, sub_00123470); /* call 0x00123470 */

loc_001235A0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001235A6u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001235A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_001235B0: ;
    eax = MEM32(0x1F26B4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x1F26B4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001235C0
 * Original: 0x001235C0 - 0x001235DE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001235C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001235C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001235C8u); RECOMP_ABI_CALL(0x00123530u, sub_00123530); /* call 0x00123530 */

loc_001235C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001235D8; /* je: equal / zero */

loc_001235CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001235D5u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001235D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001235D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001235E0
 * Original: 0x001235E0 - 0x00123603 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001235E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001235E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001235E8u); RECOMP_ABI_CALL(0x0011B800u, sub_0011B800); /* call 0x0011B800 */

loc_001235E8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi) = 0x1C6B8C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00123610
 * Original: 0x00123610 - 0x0012363B (43 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123610(void)
{

loc_00123610: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00123627u); RECOMP_ABI_CALL(0x00124AF0u, sub_00124AF0); /* call 0x00124AF0 */

loc_00123627: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(esi + 0x74);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00123636u); RECOMP_ABI_CALL(0x00124B50u, sub_00124B50); /* call 0x00124B50 */

loc_00123636: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00123640
 * Original: 0x00123640 - 0x001236D0 (144 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123640: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = ecx + 4;
    ecx = MEM32(edx);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx + 4);
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx + 4);
    MEM32(eax + 0x10) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx + 4);
    MEM32(eax + 0x14) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx + 4);
    MEM32(eax + 0x18) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx + 4);
    MEM32(eax + 0x1C) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx + 4);
    MEM32(eax + 0x20) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(edx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(edx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(edx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(edx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(edx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x38) = ecx;
    edx = MEM32(edx + 4);
    MEM32(eax + 0x3C) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001236D0
 * Original: 0x001236D0 - 0x00123798 (200 bytes, 56 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001236D0(void)
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

loc_001236D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    MEM32(esp) = eax;
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00123703; /* jns: not sign (positive) */

loc_001236E0: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    SET_LO8(ecx, MEM8(esp));
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(esp + 2) = LO8(eax);
    edx = MEM32(esp);
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) >> 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) >> 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(esp + 1) = LO8(edx);
    MEM8(esp) = LO8(ecx);
    goto loc_00123707;

loc_00123703: ;
    SET_LO8(eax, MEM8(esp + 2));

loc_00123707: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x10), 0x40000 (32-bit) */
    edx = MEM32(esp);
    if (TEST_Z(_fa, _fb)) goto loc_0012378E; /* je: equal / zero */

loc_00123715: ;
    ecx = ZX8(LO8(eax));
    eax = ZX8(MEM8(esp));
    MEM32(esp + 0xC) = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    edx = ZX8(LO8(edx));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    MEM32(esp + 0xC) = edx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esp + 0xC) = eax;
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
    PUSH32(esp, 0x00123774u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00123774: ;
    MEM8(esp) = LO8(eax);
    MEM8(esp + 1) = LO8(eax);
    MEM8(esp + 2) = LO8(eax);
    eax = MEM32(esp + 8);
    ecx = MEM32(esp);
    MEM32(eax) = ecx;
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0012378E: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001237A0
 * Original: 0x001237A0 - 0x00123819 (121 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001237A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001237A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x70);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001237BC; /* je: equal / zero */

loc_001237AD: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001237B6u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001237B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x70) = ebx;

loc_001237BC: ;
    eax = MEM32(edi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001237D2; /* je: equal / zero */

loc_001237C3: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001237CCu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001237CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x74) = ebx;

loc_001237D2: ;
    ecx = MEM32(edi + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123811; /* je: equal / zero */

loc_001237D9: ;
    eax = MEM32(ecx + -4);
    PUSH32(esp, ebp);
    ebp = ecx + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xF0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00123803; /* js: sign (negative) */

loc_001237EE: ;
    ebx = eax + 1;

loc_001237F1: ;
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xF0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x001237FEu); RECOMP_ABI_CALL(0x000F55C0u, sub_000F55C0); /* call 0x000F55C0 */

loc_001237FE: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001237F1; /* jne: not equal / not zero */

loc_00123801: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00123803: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00123809u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00123809: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(edi + 0x6C) = ebx;
    POP32(esp, ebp);

loc_00123811: ;
    MEM32(edi + 0x64) = ebx;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00123820
 * Original: 0x00123820 - 0x00123A0D (493 bytes, 156 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123820(void)
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

loc_00123820: ;
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x50);
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    esi = MEM32(edi + 0x4C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012384Au); RECOMP_ABI_CALL(0x00196890u, sub_00196890); /* call 0x00196890 */

loc_0012384A: ;
    ecx = esi + esi * 2;
    ebx = eax + ecx * 4;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001238D1; /* jbe: below or equal (unsigned <=) */

loc_00123857: ;
    ecx = MEM32(esp + 0x1C4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001238B6; /* je: equal / zero */

loc_00123862: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001238D1; /* jbe: below or equal (unsigned <=) */

loc_00123868: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00123870: ;
    edx = MEM32(edi + 0x74);
    ecx = MEM32(edx + ebp + 0xC);
    eax = edx + ebp;
    edx = MEM32(esp + 0x1BC);
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(edx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123893u); RECOMP_ABI_CALL(0x000CE600u, sub_000CE600); /* call 0x000CE600 */

loc_00123893: ;
    ecx = MEM32(eax);
    MEM32(ebx) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ebx + 8) = eax;
    eax = MEM32(edi + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00123870; /* jb: below (unsigned <) */

loc_001238B4: ;
    goto loc_001238D1;

loc_001238B6: ;
    ecx = eax + eax * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001238C5u); RECOMP_ABI_CALL(0x00100DA0u, sub_00100DA0); /* call 0x00100DA0 */

loc_001238C5: ;
    eax = MEM32(edi + 0x14);
    edx = eax + eax * 2;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + edx * 4;

loc_001238D1: ;
    eax = MEM32(edi + 0x2C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00123A00; /* jbe: below or equal (unsigned <=) */

loc_001238DE: ;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x14) = ebp;
    goto loc_001238F0;

loc_001238EC: ;
    ebp = MEM32(esp + 0x14);

loc_001238F0: ;
    eax = ebp + 0xC0;
    MEM32(esp + 0x10) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00123900: ;
    eax = MEM32(edi + 0x70);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + eax);
    ecx = MEM32(esp + 0x1BC);
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = eax + ebp;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123926u); RECOMP_ABI_CALL(0x000CE600u, sub_000CE600); /* call 0x000CE600 */

loc_00123926: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = MEM32(eax + 8);
    edx = MEM32(esp + 0x1C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x34) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + esi + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + esi + 0x134) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00123900; /* jl: less (signed <) */

loc_00123963: ;
    edx = esp + 0x138;
    PUSH32(esp, edx);
    ecx = esp + 0x7C;
    PUSH32(esp, 0x00123974u); RECOMP_ABI_CALL(0x00123640u, sub_00123640); /* call 0x00123640 */

loc_00123974: ;
    eax = esp + 0xB8;
    PUSH32(esp, eax);
    ecx = esp + 0xFC;
    PUSH32(esp, 0x00123988u); RECOMP_ABI_CALL(0x00123640u, sub_00123640); /* call 0x00123640 */

loc_00123988: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = esp + 0x17C;
    PUSH32(esp, 0x00123999u); RECOMP_ABI_CALL(0x00123640u, sub_00123640); /* call 0x00123640 */

loc_00123999: ;
    esi = MEM32(esp + 0x1C);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    eax = esp + 0xFC;
    PUSH32(esp, eax);
    ecx = esp + 0x180;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x6C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001239BCu); RECOMP_ABI_CALL(0x000F3E00u, sub_000F3E00); /* call 0x000F3E00 */

loc_001239BC: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(edi + 0x6C);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001239CBu); RECOMP_ABI_CALL(0x000F5330u, sub_000F5330); /* call 0x000F5330 */

loc_001239CB: ;
    eax = MEM32(edi + 0x38);
    ebp = MEM32(esp + 0x14);
    ecx = MEM32(edi + 0x2C);
    eax = eax + eax * 2;
    ebx = ebx + eax * 4;
    eax = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x100;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x1C) = esi;
    if (CMP_B(_fa, _fb)) goto loc_001238EC; /* jb: below (unsigned <) */

loc_00123A00: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00123A10
 * Original: 0x00123A10 - 0x00123B3E (302 bytes, 96 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123A10(void)
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

loc_00123A10: ;
    edx = MEM32(ecx + 0x50);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x40);
    ecx = MEM32(ecx + 0x4C);
    PUSH32(esp, esi);
    eax = ecx + ecx * 2;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 0xC);
    esi = MEM32(edx + 4);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | 0x80000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi | 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00123B35; /* jbe: below or equal (unsigned <=) */

loc_00123A49: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x48);
    edi = edi;

loc_00123A50: ;
    fp_push(MEMF(edi)); /* fld float */
    ecx = esp + 0x1C;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp)); /* fadd dword ptr [ebp] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 4)); /* fadd dword ptr [ebp + 4] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 8)); /* fadd dword ptr [ebp + 8] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00123A76u); RECOMP_ABI_CALL(0x000190B0u, sub_000190B0); /* call 0x000190B0 */

loc_00123A76: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax + 8);
    ecx = MEM32(esi);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    edx = MEM32(esi + 4);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esi + 8);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    MEM32(esp + 0x18) = eax;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00123AEBu); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_00123AEB: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C6B84)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c6b84] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123B25; /* jne: not equal / not zero */

loc_00123AFB: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) / fp_top()); /* fdivr dword ptr [0x1c91d0] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 8) = ecx;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_00123B25: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00123A50; /* jne: not equal / not zero */

loc_00123B34: ;
    POP32(esp, ebp);

loc_00123B35: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00123B40
 * Original: 0x00123B40 - 0x00123BC0 (128 bytes, 54 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00123B40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123BBC; /* je: equal / zero */

loc_00123B49: ;
    eax = MEM32(ecx + 0x50);
    eax = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x40);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x4C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123B5Fu); RECOMP_ABI_CALL(0x00196890u, sub_00196890); /* call 0x00196890 */

loc_00123B5F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = eax + edi * 4;
    if (CMP_BE(_fa, _fb)) goto loc_00123BBA; /* jbe: below or equal (unsigned <=) */

loc_00123B66: ;
    ecx = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = ebx;
    ebp = ebp & 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00123B77: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123BA1; /* je: equal / zero */

loc_00123B7B: ;
    SET_LO8(edx, MEM8(eax + 2));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ecx + 2) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123BA1; /* jne: not equal / not zero */

loc_00123B83: ;
    SET_LO8(edx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ecx + 1) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123BA1; /* jne: not equal / not zero */

loc_00123B8B: ;
    SET_LO8(edx, MEM8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123BA1; /* jne: not equal / not zero */

loc_00123B91: ;
    SET_LO8(edx, MEM8(edi + 2));
    MEM8(eax + 2) = LO8(edx);
    SET_LO8(edx, MEM8(edi + 1));
    MEM8(eax + 1) = LO8(edx);
    SET_LO8(edx, MEM8(edi));
    MEM8(eax) = LO8(edx);

loc_00123BA1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123BB3; /* je: equal / zero */

loc_00123BA5: ;
    SET_LO8(edx, MEM8(eax + 3));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ecx + 3) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123BB3; /* jne: not equal / not zero */

loc_00123BAD: ;
    SET_LO8(edx, MEM8(edi + 3));
    MEM8(eax + 3) = LO8(edx);

loc_00123BB3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00123B77; /* jne: not equal / not zero */

loc_00123BB9: ;
    POP32(esp, ebp);

loc_00123BBA: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00123BBC: ;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00123BC0
 * Original: 0x00123BC0 - 0x00123BD6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00123BC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C6B8C;
    PUSH32(esp, 0x00123BCEu); RECOMP_ABI_CALL(0x001237A0u, sub_001237A0); /* call 0x001237A0 */

loc_00123BCE: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0011B860(); return; /* tail jmp 0x0011B860 */

}

/**
 * sub_00123BE0
 * Original: 0x00123BE0 - 0x00124640 (2656 bytes, 801 insns)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00123BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00123BE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1DC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1DC));
    esp = esp - 0x1DC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x64) = eax;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    MEM32(esi + 4) = edx;
    eax = MEM32(edi);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(ebp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_00123C15; /* jne: not equal / not zero */

loc_00123C0E: ;
    eax = 0x1CF5F8;
    goto loc_00123C1A;

loc_00123C15: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00123C1A: ;
    ecx = esi + 0x58;
    MEM32(ecx) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x64), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00123C3B; /* jbe: below or equal (unsigned <=) */

loc_00123C25: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00123C33; /* jne: not equal / not zero */

loc_00123C2F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00123C38;

loc_00123C33: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00123C38: ;
    MEM32(esi + 0x5C) = eax;

loc_00123C3B: ;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x64), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00123C57; /* jbe: below or equal (unsigned <=) */

loc_00123C41: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00123C4F; /* jne: not equal / not zero */

loc_00123C4B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00123C54;

loc_00123C4F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00123C54: ;
    MEM32(esi + 0x60) = eax;

loc_00123C57: ;
    eax = MEM32(esi + 0x64);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00123CE2; /* jbe: below or equal (unsigned <=) */

loc_00123C64: ;
    MEM32(esp + 0xC) = ecx;

loc_00123C68: ;
    edx = MEM32(esp + 0xC);
    eax = 0x3F800000;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + ebx + 0x5C) = eax;
    MEM32(esp + ebx + 0x60) = eax;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + ebx + 0x74) = ecx;
    MEM32(esp + ebx + 0x78) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00123CC4; /* je: equal / zero */

loc_00123C89: ;
    eax = MEM32(eax);
    PUSH32(esp, 0x1C6B94);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123C96u); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_00123C96: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00123CC4; /* jne: not equal / not zero */

loc_00123C9D: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax);
    ecx = 3;
    MEM32(edx + 0x10) = ecx;
    eax = MEM32(eax);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(0x1DC16C);
    edx = MEM32(0x1DC168);
    MEM32(esp + ebx + 0x5C) = ecx;
    MEM32(esp + ebx + 0x60) = edx;

loc_00123CC4: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esi + 0x64);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(8)) >> 32) & 1);
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00123C68; /* jb: below (unsigned <) */

loc_00123CE2: ;
    SET_LO8(ebx, MEM8(ebp + 0x28));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00123D0F; /* jne: not equal / not zero */

loc_00123CE9: ;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123CF4u); RECOMP_ABI_CALL(0x0011B500u, sub_0011B500); /* call 0x0011B500 */

loc_00123CF4: ;
    eax = MEM32(edi);
    ecx = MEM32(ebp + 0x18);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123D0Fu); RECOMP_ABI_CALL(0x0011B9D0u, sub_0011B9D0); /* call 0x0011B9D0 */

loc_00123D0F: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00123D93; /* jbe: below or equal (unsigned <=) */

loc_00123D16: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00123D93; /* jne: not equal / not zero */

loc_00123D1A: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123D26u); RECOMP_ABI_CALL(0x0011B640u, sub_0011B640); /* call 0x0011B640 */

loc_00123D26: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00123D93; /* je: equal / zero */

loc_00123D2A: ;
    edx = MEM32(edi);
    eax = MEM32(edx + 0x14);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00123D8C; /* jle: less or equal (signed <=) */

loc_00123D35: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00123D40;

    /* nop */

loc_00123D40: ;
    edx = MEM32(edi + 4);
    SET_LO16(edx, MEM16(eax + edx));
    ebx = MEM32(esp + 0xC);
    MEM16(ebx) = LO16(edx);
    edx = MEM32(esp + 0xC);
    ebx = MEM32(edi + 4);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = edx;
    SET_LO16(ebx, MEM16(eax + ebx + 4));
    MEM16(edx) = LO16(ebx);
    edx = MEM32(esp + 0xC);
    ebx = MEM32(edi + 4);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = edx;
    SET_LO16(ebx, MEM16(eax + ebx + 8));
    MEM16(edx) = LO16(ebx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0xC)) + (uint64_t)(2)) >> 32) & 1);
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 2;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi);
    ebx = MEM32(edx + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00123D40; /* jl: less (signed <) */

loc_00123D8C: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123D93u); RECOMP_ABI_CALL(0x0011B660u, sub_0011B660); /* call 0x0011B660 */

loc_00123D93: ;
    ebx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00124078; /* jbe: below or equal (unsigned <=) */

loc_00123D9E: ;
    eax = MEM32(ebp + 0x20);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x34) = eax;
    if ((_fa == 0)) goto loc_00123DE8; /* je: equal / zero */

loc_00123DAA: ;
    SET_LO8(eax, MEM8(ebp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00123DE8; /* jne: not equal / not zero */

loc_00123DB1: ;
    eax = ebx;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123DBFu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00123DBF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00123DE3; /* je: equal / zero */

loc_00123DC6: ;
    PUSH32(esp, 0x124AE0);
    PUSH32(esp, ebx);
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123DDDu); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_00123DDD: ;
    eax = MEM32(esp + 0x30);
    goto loc_00123DE5;

loc_00123DE3: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00123DE5: ;
    MEM32(esi + 0x74) = eax;

loc_00123DE8: ;
    ebx = MEM32(esi + 0x14);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123DF9u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00123DF9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00123E07; /* je: equal / zero */

loc_00123E00: ;
    MEM32(eax) = ebx;
    ebx = eax + 4;
    goto loc_00123E09;

loc_00123E07: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00123E09: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_0012405B; /* jbe: below or equal (unsigned <=) */

loc_00123E20: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0xC) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x14)) >> 32) & 1);
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00123E30: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(esp + 0xC);
    fp_push(MEMF(eax + ecx)); /* fld float */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x58);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ebx + -20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebx + -12) = edx;
    MEMF(ebx + -16) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi + 0x10);
    fp_push(MEMF(eax + ecx + 0xC)); /* fld float */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    MEMF(esp + 0xA4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xA4);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ebx + -8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebx) = eax;
    MEMF(ebx + -4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi + 0x10);
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    eax = ecx + edx + 0x18;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x48);
    fp_push(MEMF(esp + 0x78)); /* fld float */
    MEM32(ebx + 8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x4C);
    MEM32(ebx + 0xC) = edx;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(esi + 0x64);
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00123EFD; /* jbe: below or equal (unsigned <=) */

loc_00123EBE: ;
    eax = MEM32(edi + 0x10);
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + eax + 0x20)); /* fmul dword ptr [ecx + eax + 0x20] */
    eax = ecx + eax + 0x20;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x38);
    fp_push(MEMF(esp + 0x80)); /* fld float */
    MEM32(ebx + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x3C);
    fp_pop(); /* fstp st(0) */
    MEM32(ebx + 0x14) = eax;
    fp_pop(); /* fstp st(0) */

loc_00123EFD: ;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x64), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00123F45; /* jbe: below or equal (unsigned <=) */

loc_00123F03: ;
    edx = MEM32(edi + 0x10);
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + edx + 0x28)); /* fmul dword ptr [ecx + edx + 0x28] */
    eax = ecx + edx + 0x28;
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x40);
    fp_push(MEMF(esp + 0x88)); /* fld float */
    MEM32(ebx + 0x18) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x44);
    fp_pop(); /* fstp st(0) */
    MEM32(ebx + 0x1C) = ecx;
    fp_pop(); /* fstp st(0) */

loc_00123F45: ;
    edx = MEM32(ebp + 0x20);
    eax = MEM32(edi + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(ecx + eax + 0x30);
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123F61u); RECOMP_ABI_CALL(0x001236D0u, sub_001236D0); /* call 0x001236D0 */

loc_00123F61: ;
    ecx = MEM32(eax);
    edx = MEM32(esp + 0xC);
    MEM32(ebx + 4) = ecx;
    eax = MEM32(edi + 0x10);
    fp_push(MEMF(eax + edx)); /* fld float */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(eax + 8)); /* fld float */
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123F97u); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_00123F97: ;
    edx = MEM32(ebp + 0x10);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00123FAE; /* jne: not equal / not zero */

loc_00123FA8: ;
    eax = edx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00123FB0;

loc_00123FAE: ;
    fp_pop(); /* fstp st(0) */

loc_00123FB0: ;
    eax = MEM32(edi + 0x10);
    edx = MEM32(esp + 0xC);
    fp_push(MEMF(eax + edx + 4)); /* fld float */
    ecx = MEM32(eax + edx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    edx = esp + 0x24;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(ebp + 0x14);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123FDCu); RECOMP_ABI_CALL(0x000D2550u, sub_000D2550); /* call 0x000D2550 */

loc_00123FDC: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012402A; /* je: equal / zero */

loc_00123FE4: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(esp + 0xC);
    fp_push(MEMF(eax + ecx)); /* fld float */
    edx = MEM32(esp + 0x20);
    fp_push(MEMF(eax + ecx + 4)); /* fld float */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(esi + 0x74);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x94);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi + 0x10);
    eax = MEM32(ecx + eax + 0x34);
    edx = MEM32(esi + 0x74);
    ecx = MEM32(esp + 0x20);
    MEM32(edx + ecx + 0xC) = eax;

loc_0012402A: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x38)) >> 32) & 1);
    ecx = ecx + 0x38;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x10)) >> 32) & 1);
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x34)) >> 32) & 1);
    ebx = ebx + 0x34;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = edx;
    if (CMP_B(_fa, _fb)) goto loc_00123E30; /* jb: below (unsigned <) */

loc_00124057: ;
    ebx = MEM32(esp + 0x18);

loc_0012405B: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124068u); RECOMP_ABI_CALL(0x00125720u, sub_00125720); /* call 0x00125720 */

loc_00124068: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00124078; /* je: equal / zero */

loc_0012406C: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xFFFFFFFCu)) >> 32) & 1);
    ebx = ebx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124075u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00124075: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00124078: ;
    ebx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00124635; /* jbe: below or equal (unsigned <=) */

loc_00124083: ;
    SET_LO8(eax, MEM8(ebp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0012410D; /* jne: not equal / not zero */

loc_0012408E: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012409Fu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0012409F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001240DE; /* je: equal / zero */

loc_001240A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -4) = ebx;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x30) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001240D8; /* jl: less (signed <) */

loc_001240B9: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ebx;
    ebx = eax;

loc_001240C0: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001240C7u); RECOMP_ABI_CALL(0x000F3DD0u, sub_000F3DD0); /* call 0x000F3DD0 */

loc_001240C7: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xF0)) >> 32) & 1);
    ebx = ebx + 0xF0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_001240C0; /* jne: not equal / not zero */

loc_001240D8: ;
    eax = MEM32(esp + 0x1C);
    goto loc_001240E0;

loc_001240DE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001240E0: ;
    MEM32(esi + 0x6C) = eax;
    _fa = (uint32_t)(MEM8(ebp + 0x20)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x20), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0012410D; /* je: equal / zero */

loc_001240E9: ;
    ebx = MEM32(esi + 0x2C);
    ecx = ebx;
    if (8) _cf = (int)(((ecx) >> (32 - (8))) & 1);
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001240FAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_001240FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00124108; /* je: equal / zero */

loc_00124101: ;
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012410A;

loc_00124108: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012410A: ;
    MEM32(esi + 0x70) = eax;

loc_0012410D: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x30) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_00124635; /* jbe: below or equal (unsigned <=) */

loc_00124120: ;
    eax = MEM32(ebp + 0x20);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0xC) = ebx;

loc_00124134: ;
    edx = MEM32(edi + 8);
    eax = edx + ebx + 0x8C;
    PUSH32(esp, eax);
    ecx = esp + 0x12C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012414Bu); RECOMP_ABI_CALL(0x00123640u, sub_00123640); /* call 0x00123640 */

loc_0012414B: ;
    ecx = MEM32(edi + 8);
    edx = ecx + ebx + 0x4C;
    PUSH32(esp, edx);
    ecx = esp + 0x1AC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012415Fu); RECOMP_ABI_CALL(0x00123640u, sub_00123640); /* call 0x00123640 */

loc_0012415F: ;
    eax = MEM32(edi + 8);
    ecx = eax + ebx + 0xC;
    PUSH32(esp, ecx);
    ecx = esp + 0x16C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124173u); RECOMP_ABI_CALL(0x00123640u, sub_00123640); /* call 0x00123640 */

loc_00124173: ;
    edx = esp + 0x128;
    PUSH32(esp, edx);
    eax = esp + 0x1AC;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = esp + 0x170;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x6C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124199u); RECOMP_ABI_CALL(0x000F3E00u, sub_000F3E00); /* call 0x000F3E00 */

loc_00124199: ;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x10) = ebx;
    /* nop */

loc_001241B0: ;
    eax = MEM32(edi + 8);
    edx = MEM32(esp + 0x10);
    ecx = esp + 0xA8;
    eax = edx + eax + 0xD0;
    MEM32(esp + 0x1C) = 0x10;
    /* nop */

loc_001241D0: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -8)); /* fmul dword ptr [eax - 8] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -4)); /* fmul dword ptr [eax - 4] */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x50);
    fp_push(MEMF(esp + 0x78)); /* fld float */
    MEM32(ecx + -8) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x54);
    MEM32(ecx + -4) = edx;
    fp_pop(); /* fstp st(0) */
    edx = MEM32(esp + 0x1C);
    fp_pop(); /* fstp st(0) */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = edx;
    if ((_fa != 0)) goto loc_001241D0; /* jne: not equal / not zero */

loc_00124215: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(edi + 8);
    eax = MEM32(ecx + eax);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = esp + 0xC8;
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    edx = esp + 0xBC;
    PUSH32(esp, edx);
    eax = esp + 0xB8;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x6C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124260u); RECOMP_ABI_CALL(0x000F3E30u, sub_000F3E30); /* call 0x000F3E30 */

loc_00124260: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x80)) >> 32) & 1);
    edx = edx + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x10) = edx;
    if (CMP_B(_fa, _fb)) goto loc_001241B0; /* jb: below (unsigned <) */

loc_0012428B: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(ebp + 0x20);
    eax = edx + ebx;
    edx = MEM32(eax + 0x25C);
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001242AFu); RECOMP_ABI_CALL(0x001236D0u, sub_001236D0); /* call 0x001236D0 */

loc_001242AF: ;
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x258);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001242CBu); RECOMP_ABI_CALL(0x001236D0u, sub_001236D0); /* call 0x001236D0 */

loc_001242CB: ;
    edx = MEM32(ebp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x254);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001242E7u); RECOMP_ABI_CALL(0x001236D0u, sub_001236D0); /* call 0x001236D0 */

loc_001242E7: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x250);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124303u); RECOMP_ABI_CALL(0x001236D0u, sub_001236D0); /* call 0x001236D0 */

loc_00124303: ;
    ecx = MEM32(esi + 0x6C);
    PUSH32(esp, eax);
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(esp + 0x1C))) >> 32) & 1);
    ecx = ecx + MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124310u); RECOMP_ABI_CALL(0x000F3D20u, sub_000F3D20); /* call 0x000F3D20 */

loc_00124310: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0x6C);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(MEM32(esp + 0x10))) >> 32) & 1);
    edx = edx + MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124324u); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_00124324: ;
    MEM32(esp + 0x18) = 0x80;
    /* nop */

loc_00124330: ;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = 4;

loc_00124340: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x6C);
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(esp + 0xC))) >> 32) & 1);
    eax = eax + MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx + eax + -128)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + eax + -64)); /* fld float */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + eax)); /* fld float */
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124383u); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_00124383: ;
    ecx = MEM32(ebp + 0x10);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0012439A; /* jne: not equal / not zero */

loc_00124394: ;
    edx = ecx;
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0012439C;

loc_0012439A: ;
    fp_pop(); /* fstp st(0) */

loc_0012439C: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    ecx = MEM32(ebp + 0x14);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001243B2; /* jp: parity */

loc_001243AC: ;
    eax = MEM32(esp + 0x24);
    MEM32(ecx) = eax;

loc_001243B2: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001243C7; /* jne: not equal / not zero */

loc_001243C0: ;
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 0xC) = edx;

loc_001243C7: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001243DC; /* jp: parity */

loc_001243D5: ;
    eax = MEM32(esp + 0x28);
    MEM32(ecx + 4) = eax;

loc_001243DC: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001243F1; /* jne: not equal / not zero */

loc_001243EA: ;
    edx = MEM32(esp + 0x28);
    MEM32(ecx + 0x10) = edx;

loc_001243F1: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00124406; /* jp: parity */

loc_001243FF: ;
    eax = MEM32(esp + 0x2C);
    MEM32(ecx + 8) = eax;

loc_00124406: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0012441B; /* jne: not equal / not zero */

loc_00124414: ;
    edx = MEM32(esp + 0x2C);
    MEM32(ecx + 0x14) = edx;

loc_0012441B: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_00124340; /* jne: not equal / not zero */

loc_00124435: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x90 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00124330; /* jb: below (unsigned <) */

loc_0012444B: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00124600; /* je: equal / zero */

loc_00124457: ;
    eax = MEM32(edi + 8);
    edx = MEM32(eax + ebx + 0x260);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x70);
    MEM32(ecx + eax + 0xC0) = edx;
    ecx = MEM32(edi + 8);
    ecx = MEM32(ecx + ebx + 0x270);
    edx = MEM32(esi + 0x70);
    MEM32(edx + eax + 0xC4) = ecx;
    edx = MEM32(edi + 8);
    edx = MEM32(edx + ebx + 0x280);
    ecx = MEM32(esi + 0x70);
    MEM32(ecx + eax + 0xC8) = edx;
    ecx = MEM32(edi + 8);
    ecx = MEM32(ecx + ebx + 0x290);
    edx = MEM32(esi + 0x70);
    MEM32(edx + eax + 0xCC) = ecx;
    edx = MEM32(edi + 8);
    edx = MEM32(edx + ebx + 0x264);
    ecx = MEM32(esi + 0x70);
    MEM32(ecx + eax + 0xD0) = edx;
    ecx = MEM32(edi + 8);
    ecx = MEM32(ecx + ebx + 0x274);
    edx = MEM32(esi + 0x70);
    MEM32(edx + eax + 0xD4) = ecx;
    edx = MEM32(edi + 8);
    edx = MEM32(edx + ebx + 0x284);
    ecx = MEM32(esi + 0x70);
    MEM32(ecx + eax + 0xD8) = edx;
    ecx = MEM32(edi + 8);
    ecx = MEM32(ecx + ebx + 0x294);
    edx = MEM32(esi + 0x70);
    MEM32(edx + eax + 0xDC) = ecx;
    edx = MEM32(edi + 8);
    edx = MEM32(edx + ebx + 0x268);
    ecx = MEM32(esi + 0x70);
    MEM32(ecx + eax + 0xE0) = edx;
    ecx = MEM32(edi + 8);
    ecx = MEM32(ecx + ebx + 0x278);
    edx = MEM32(esi + 0x70);
    MEM32(edx + eax + 0xE4) = ecx;
    edx = MEM32(edi + 8);
    edx = MEM32(edx + ebx + 0x288);
    ecx = MEM32(esi + 0x70);
    MEM32(ecx + eax + 0xE8) = edx;
    ecx = MEM32(edi + 8);
    ecx = MEM32(ecx + ebx + 0x298);
    edx = MEM32(esi + 0x70);
    MEM32(edx + eax + 0xEC) = ecx;
    edx = MEM32(edi + 8);
    edx = MEM32(edx + ebx + 0x26C);
    ecx = MEM32(esi + 0x70);
    MEM32(ecx + eax + 0xF0) = edx;
    ecx = MEM32(edi + 8);
    ecx = MEM32(ecx + ebx + 0x27C);
    edx = MEM32(esi + 0x70);
    MEM32(edx + eax + 0xF4) = ecx;
    edx = MEM32(edi + 8);
    edx = MEM32(edx + ebx + 0x28C);
    ecx = MEM32(esi + 0x70);
    MEM32(ecx + eax + 0xF8) = edx;
    ecx = MEM32(edi + 8);
    edx = MEM32(esi + 0x70);
    ecx = MEM32(ecx + ebx + 0x29C);
    MEM32(edx + eax + 0xFC) = ecx;
    edx = ebx + 0x4C;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = 0x10;
    edi = edi;

loc_001245B0: ;
    ecx = MEM32(edi + 8);
    fp_push(MEMF(ecx + edx + -64)); /* fld float */
    fp_push(MEMF(ecx + edx)); /* fld float */
    fp_push(MEMF(ecx + edx + 0x40)); /* fld float */
    ecx = MEM32(esi + 0x70);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(esp + 0x10))) >> 32) & 1);
    ecx = ecx + MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x94);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x1C);
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xC)) >> 32) & 1);
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(4)) >> 32) & 1);
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = ecx;
    if ((_fa != 0)) goto loc_001245B0; /* jne: not equal / not zero */

loc_001245FE: ;
    goto loc_00124604;

loc_00124600: ;
    eax = MEM32(esp + 0x14);

loc_00124604: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x100)) >> 32) & 1);
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xF0)) >> 32) & 1);
    edx = edx + 0xF0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x2A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x2A0)) >> 32) & 1);
    ebx = ebx + 0x2A0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0xC) = edx;
    if (CMP_B(_fa, _fb)) goto loc_00124134; /* jb: below (unsigned <) */

loc_00124635: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00124640
 * Original: 0x00124640 - 0x0012483F (511 bytes, 174 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124640(void)
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

loc_00124640: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    ecx = eax + 0x30;
    MEM32(esi + 4) = ecx;
    edx = MEM32(eax + 0x14);
    edx = edx + edx * 2;
    ecx = ecx + edx * 4;
    MEM32(esi + 8) = ecx;
    edx = MEM32(eax + 0x18);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2A0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(eax + 0x1C);
    ecx = ecx + edx * 4;
    MEM32(esi + 0x10) = ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x40 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00124681; /* je: equal / zero */

loc_0012467A: ;
    MEM32(eax + 8) = 0xFFFFFFFFu;

loc_00124681: ;
    edi = MEM32(esp + 0x18);
    fp_push(MEMF(edi + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_push(MEMF(edi)); /* fld float */
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
    PUSH32(esp, 0x001246ACu); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_001246AC: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001246CC; /* je: equal / zero */

loc_001246C4: ;
    MEM32(esp + 0x14) = 0;

loc_001246CC: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001246E8; /* jnp: not parity */

loc_001246DD: ;
    ebp = 1;
    MEM32(esp + 0x18) = ebp;
    goto loc_001246FA;

loc_001246E8: ;
    eax = MEM32(esp + 0x14);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00124836; /* je: equal / zero */

loc_001246FA: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001247B8; /* jle: less or equal (signed <=) */

loc_00124709: ;
    ecx = 0x13;
    edi = edi;

loc_00124710: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00124712: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124752; /* je: equal / zero */

loc_0012471A: ;
    ebp = MEM32(esi + 8);
    edx = ecx + eax;
    fp_push(MEMF(ebp + edx * 4 + -64)); /* fld float */
    edx = ebp + edx * 4 + -64;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esi + 8);
    edx = ecx + eax;
    fp_push(MEMF(ebp + edx * 4)); /* fld float */
    edx = ebp + edx * 4;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esi + 8);
    edx = ecx + eax;
    fp_push(MEMF(ebp + edx * 4 + 0x40)); /* fld float */
    edx = ebp + edx * 4 + 0x40;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */

loc_00124752: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124796; /* je: equal / zero */

loc_0012475A: ;
    ebp = MEM32(esi + 8);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    edx = ecx + eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + edx * 4 + -64)); /* fmul dword ptr [ebp + edx*4 - 0x40] */
    edx = ebp + edx * 4 + -64;
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esi + 8);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    edx = ecx + eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + edx * 4)); /* fmul dword ptr [ebp + edx*4] */
    edx = ebp + edx * 4;
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esi + 8);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    edx = ecx + eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + edx * 4 + 0x40)); /* fmul dword ptr [ebp + edx*4 + 0x40] */
    edx = ebp + edx * 4 + 0x40;
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */

loc_00124796: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00124712; /* jl: less (signed <) */

loc_001247A0: ;
    eax = MEM32(esi);
    edx = MEM32(eax + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00124710; /* jl: less (signed <) */

loc_001247B4: ;
    ebp = MEM32(esp + 0x18);

loc_001247B8: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 0x20);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00124836; /* jle: less or equal (signed <=) */

loc_001247C3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001247C5: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001247F9; /* je: equal / zero */

loc_001247CD: ;
    ecx = MEM32(esi + 0x10);
    fp_push(MEMF(ecx + eax)); /* fld float */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x10);
    fp_push(MEMF(ecx + eax + 4)); /* fld float */
    ecx = ecx + eax + 4;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x10);
    fp_push(MEMF(ecx + eax + 8)); /* fld float */
    ecx = ecx + eax + 8;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_001247F9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124829; /* je: equal / zero */

loc_001247FD: ;
    ecx = MEM32(esi + 0x10);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + eax)); /* fmul dword ptr [ecx + eax] */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x10);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = ecx + eax + 4;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x10);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = ecx + eax + 8;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_00124829: ;
    ecx = MEM32(esi);
    ebx = MEM32(ecx + 0x20);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001247C5; /* jl: less (signed <) */

loc_00124836: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00124840
 * Original: 0x00124840 - 0x00124A0D (461 bytes, 171 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124840(void)
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

loc_00124840: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    ecx = eax + 0x48;
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(eax + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = ecx;
    edx = MEM32(eax + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x7C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ecx;
    edx = MEM32(eax + 0x14);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(eax + 0x18);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x68);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1C6BF4);
    PUSH32(esp, eax);
    MEM32(esi + 0x10) = edx;
    PUSH32(esp, 0x00124889u); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_00124889: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001248C4; /* je: equal / zero */

loc_00124890: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001248AE; /* je: equal / zero */

loc_00124897: ;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C6BCC);
    PUSH32(esp, 0x001248A5u); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_001248A5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001248AE: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1C6BA8);
    PUSH32(esp, 0x001248BBu); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_001248BB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001248C4: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esi + 0x1C) = 0x3F800000;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C6BA4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c6ba4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00124976; /* jnp: not parity */

loc_001248E0: ;
    eax = MEM32(esi);
    fp_push(MEMF(eax + 0x30)); /* fld float */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    /* nop */

loc_00124900: ;
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0012495A; /* jnp: not parity */

loc_0012490E: ;
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012495A; /* je: equal / zero */

loc_0012491E: ;
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0012495A; /* jnp: not parity */

loc_0012492C: ;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012495A; /* je: equal / zero */

loc_0012493C: ;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0012495A; /* jnp: not parity */

loc_0012494A: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124968; /* jne: not equal / not zero */

loc_0012495A: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00124900;

loc_00124968: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_00124976: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 0x20);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124A06; /* je: equal / zero */

loc_00124986: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1C);
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 4;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012499Eu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0012499E: ;
    ecx = MEM32(esi);
    MEM32(esi + 0x18) = eax;
    edx = MEM32(ecx + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00124A05; /* jle: less or equal (signed <=) */

loc_001249B1: ;
    edx = eax;
    PUSH32(esp, ebp);

loc_001249B4: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = ebx + edx;
    PUSH32(esp, 0x001249C6u); RECOMP_ABI_CALL(0x00124640u, sub_00124640); /* call 0x00124640 */

loc_001249C6: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(ebx + edx);
    ecx = MEM32(eax + 0x18);
    ebp = MEM32(eax + 0x20);
    ecx = ecx + ecx * 2;
    ebp = ebp + ecx * 4;
    ecx = MEM32(eax + 0x14);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0xE);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 2;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi);
    edi = edi + ebp * 4;
    ebp = MEM32(ecx + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001249B4; /* jl: less (signed <) */

loc_00124A04: ;
    POP32(esp, ebp);

loc_00124A05: ;
    POP32(esp, edi);

loc_00124A06: ;
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00124A10
 * Original: 0x00124A10 - 0x00124A49 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124A10: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x00124A17u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00124A17: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124A40; /* je: equal / zero */

loc_00124A20: ;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x1C6C08;
    MEM32(eax + 0x20) = 1;
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

loc_00124A40: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00124A50
 * Original: 0x00124A50 - 0x00124A69 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124A50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124A67; /* je: equal / zero */

loc_00124A5B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00124A61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124A5Fu); } /* indirect call */
    }

loc_00124A61: ;
    MEM32(esi) = 0;

loc_00124A67: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00124A70
 * Original: 0x00124A70 - 0x00124AD6 (102 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124A70: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(ecx + 0x10);
    MEM32(eax + 0x14) = esi;
    esi = MEM32(ecx + 0x14);
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = edx;
    esi = MEM32(ecx + 0x18);
    MEM32(eax + 0x20) = esi;
    esi = MEM32(ecx + 0x1C);
    MEM32(eax + 0x24) = esi;
    ecx = MEM32(ecx + 0x20);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = 0x3F800000;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00124AE0
 * Original: 0x00124AE0 - 0x00124AE3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124AE0(void)
{

loc_00124AE0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00124AF0
 * Original: 0x00124AF0 - 0x00124B4F (95 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00124AF0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00124B4B; /* jle: less or equal (signed <=) */

loc_00124AFB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC0;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    /* nop */

loc_00124B10: ;
    edi = ebp;
    ebx = 0x10;

loc_00124B17: ;
    ecx = MEM32(edi);
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x1C);
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = eax;
    if ((_fa != 0)) goto loc_00124B17; /* jne: not equal / not zero */

loc_00124B37: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x100;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_00124B10; /* jne: not equal / not zero */

loc_00124B48: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00124B4B: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00124B50
 * Original: 0x00124B50 - 0x00124B8A (58 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124B50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00124B85; /* jle: less or equal (signed <=) */

loc_00124B5C: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00124B64: ;
    ecx = MEM32(edi);
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x1C);
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = eax;
    if ((_fa != 0)) goto loc_00124B64; /* jne: not equal / not zero */

loc_00124B84: ;
    POP32(esp, edi);

loc_00124B85: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00124B90
 * Original: 0x00124B90 - 0x0012519B (1547 bytes, 427 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00124B90: ;
    _fb = (uint32_t)(0xAE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAE8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xAF8);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00124BAAu); RECOMP_ABI_CALL(0x000F7090u, sub_000F7090); /* call 0x000F7090 */

loc_00124BAA: ;
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x64) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00124BD3; /* jne: not equal / not zero */

loc_00124BB7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C6C7C);
    PUSH32(esp, 0x00124BC2u); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_00124BC2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xAE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xAE8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00124BD3: ;
    PUSH32(esp, 0x1C6C70);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00124BDEu); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_00124BDE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124C02; /* je: equal / zero */

loc_00124BE5: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C6C44);
    PUSH32(esp, 0x00124BF1u); RECOMP_ABI_CALL(0x000E3680u, sub_000E3680); /* call 0x000E3680 */

loc_00124BF1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xAE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xAE8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00124C02: ;
    edi = MEM32(ebx + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x00124C17u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00124C17: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124C35; /* je: equal / zero */

loc_00124C1E: ;
    PUSH32(esp, 0x124AE0);
    PUSH32(esp, edi);
    ebp = eax + 4;
    PUSH32(esp, 0x54);
    PUSH32(esp, ebp);
    MEM32(eax) = edi;
    PUSH32(esp, 0x00124C31u); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_00124C31: ;
    eax = ebp;
    goto loc_00124C37;

loc_00124C35: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00124C37: ;
    edi = MEM32(esi + 8);
    ecx = edi;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00124C4Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00124C4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124C67; /* je: equal / zero */

loc_00124C52: ;
    PUSH32(esp, 0x124AE0);
    PUSH32(esp, edi);
    ebp = eax + 4;
    PUSH32(esp, 0x40);
    PUSH32(esp, ebp);
    MEM32(eax) = edi;
    PUSH32(esp, 0x00124C65u); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_00124C65: ;
    goto loc_00124C69;

loc_00124C67: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00124C69: ;
    edi = MEM32(esi + 8);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM32(esi + 0x10) = ebp;
    PUSH32(esp, 0x00124C7Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00124C7D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124C9B; /* je: equal / zero */

loc_00124C84: ;
    PUSH32(esp, 0x124AE0);
    PUSH32(esp, edi);
    ebp = eax + 4;
    PUSH32(esp, 0x1C);
    PUSH32(esp, ebp);
    MEM32(eax) = edi;
    PUSH32(esp, 0x00124C97u); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_00124C97: ;
    eax = ebp;
    goto loc_00124C9D;

loc_00124C9B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00124C9D: ;
    ecx = MEM32(esi + 0xC);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esi + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00124CB2u); RECOMP_ABI_CALL(0x00100DA0u, sub_00100DA0); /* call 0x00100DA0 */

loc_00124CB2: ;
    edx = MEM32(esi + 8);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00124CC0u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00124CC0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x124AE0);
    MEM32(esp + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x25);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x40);
    eax = esp + 0x1C4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124CE7u); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_00124CE7: ;
    eax = MEM32(esi + 8);
    edi = ebx + 0x10;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00124EA3; /* jbe: below or equal (unsigned <=) */

loc_00124CFB: ;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x70) = ebx;
    MEM32(esp + 0x74) = ebx;

loc_00124D07: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(edi);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEM32(eax + ecx) = edx;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(edi + 4);
    MEM32(eax + ecx + 4) = edx;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(edi + 8);
    MEM32(eax + ecx + 8) = edx;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(edi + 0xC);
    MEM32(eax + ecx + 0xC) = edx;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(edi + 0x10);
    MEM32(eax + ecx + 0x10) = edx;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(edi + 0x14);
    MEM32(eax + ecx + 0x14) = edx;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(edi + 0x18);
    MEM32(eax + ecx + 0x18) = edx;
    ecx = MEM32(esi + 0x14);
    eax = eax + ecx + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xBC;
    PUSH32(esp, 0x00124D64u); RECOMP_ABI_CALL(0x000CEA20u, sub_000CEA20); /* call 0x000CEA20 */

loc_00124D64: ;
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    eax = esp + 0xBC;
    PUSH32(esp, eax);
    ecx = esp + 0x100;
    PUSH32(esp, 0x00124D7Du); RECOMP_ABI_CALL(0x00124A70u, sub_00124A70); /* call 0x00124A70 */

loc_00124D7D: ;
    ecx = esp + 0xF8;
    PUSH32(esp, ecx);
    edx = esp + 0x13C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00124D92u); RECOMP_ABI_CALL(0x0011C8D0u, sub_0011C8D0); /* call 0x0011C8D0 */

loc_00124D92: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = ebx;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esp + eax + 0x1BC;
    PUSH32(esp, 0x00124DA7u); RECOMP_ABI_CALL(0x00019230u, sub_00019230); /* call 0x00019230 */

loc_00124DA7: ;
    edx = MEM32(esp + 0x10);
    MEM16(edx + ebp * 4) = LO16(ebx);
    SET_LO16(ecx, MEM16(edi + 0x1C));
    MEM16(edx + ebp * 4 + 2) = LO16(ecx);
    eax = MEM32(esi + 0xC);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x24) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_00124DDE; /* jne: not equal / not zero */

loc_00124DC4: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x44) = ebx;
    eax = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00124E3C; /* jbe: below or equal (unsigned <=) */

loc_00124DD8: ;
    MEM32(esp + 0x1C) = eax;
    goto loc_00124E3C;

loc_00124DDE: ;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    _fa = (uint32_t)(MEM16(edx + ebp * 4 + -2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + ebp * 4 + -2), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124E0B; /* jne: not equal / not zero */

loc_00124DEB: ;
    _fa = (uint32_t)(MEM16(edx + ebp * 4 + -6)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + ebp * 4 + -6), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124E01; /* jne: not equal / not zero */

loc_00124DF3: ;
    MEM32(ecx + eax + 0x44) = 2;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00124E3C;

loc_00124E01: ;
    MEM32(ecx + eax + 0x44) = 4;
    goto loc_00124E3C;

loc_00124E0B: ;
    _fa = (uint32_t)(MEM16(edx + ebp * 4 + -6)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + ebp * 4 + -6), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124E1D; /* jne: not equal / not zero */

loc_00124E13: ;
    MEM32(ecx + eax + 0x44) = 3;
    goto loc_00124E3C;

loc_00124E1D: ;
    MEM32(ecx + eax + 0x44) = 1;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00124E3C; /* jbe: below or equal (unsigned <=) */

loc_00124E36: ;
    ecx = eax;
    MEM32(esp + 0x1C) = ecx;

loc_00124E3C: ;
    eax = edx + ebp * 4;
    _fa = (uint32_t)(MEM16(eax + -2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + -2), 0 (16-bit) */
    ecx = eax + -2;
    if (CMP_NE(_fa, _fb)) goto loc_00124E8E; /* jne: not equal / not zero */

loc_00124E49: ;
    /* nop */

loc_00124E50: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00124E8E; /* jle: less or equal (signed <=) */

loc_00124E55: ;
    edx = ZX16(MEM16(eax + -4));
    ebx = MEM32(esi + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x54);
    ebp = MEM32(esp + 0x24);
    MEM32(esp + 0x20) = ecx;
    SET_LO8(ecx, MEM8(ecx + -6));
    MEM8(edx + ebx) = LO8(ecx);
    MEM16(eax + -6) = MEM16(eax + -6) - 1;
    _fa = (uint32_t)(MEM16(eax + -6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0 (16-bit) */
    MEM32(esp + 0x24) = ebp;
    eax = ecx + 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00124E50; /* je: equal / zero */

loc_00124E8E: ;
    eax = MEM32(esi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_00124D07; /* jb: below (unsigned <) */

loc_00124EA1: ;
    goto loc_00124EA7;

loc_00124EA3: ;
    edx = MEM32(esp + 0x10);

loc_00124EA7: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00124EADu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00124EAD: ;
    eax = MEM32(esi + 0xC);
    MEM8(eax) = 0xFF;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00124ECC; /* jbe: below or equal (unsigned <=) */

loc_00124EBF: ;
    PUSH32(esp, 0x1C6C10);
    PUSH32(esp, 0x00124EC9u); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_00124EC9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00124ECC: ;
    edi = MEM32(esi + 8);
    ecx = edi;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x3F800000;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0;
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
    MEM32(esp + 0x7C) = 0x3F800000;
    MEM32(esp + 0x80) = 0;
    MEM32(esp + 0x84) = 0;
    MEM32(esp + 0x88) = 0;
    MEM32(esp + 0x8C) = 0;
    MEM32(esp + 0x90) = 0x3F800000;
    MEM32(esp + 0x94) = 0;
    MEM32(esp + 0x98) = 0;
    MEM32(esp + 0x9C) = 0;
    MEM32(esp + 0xA0) = 0;
    MEM32(esp + 0xA4) = 0x3F800000;
    MEM32(esp + 0xA8) = 0;
    MEM32(esp + 0xAC) = 0;
    MEM32(esp + 0xB0) = 0;
    MEM32(esp + 0xB4) = 0;
    MEM32(esp + 0xB8) = 0x3F800000;
    PUSH32(esp, 0x0012500Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0012500A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012501E; /* je: equal / zero */

loc_00125013: ;
    MEM32(eax) = edi;
    edi = eax + 4;
    MEM32(esp + 0x10) = edi;
    goto loc_00125024;

loc_0012501E: ;
    MEM32(esp + 0x10) = ebx;
    edi = ebx;

loc_00125024: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0012516C; /* jbe: below or equal (unsigned <=) */

loc_00125031: ;
    ecx = esp + 0x1B8;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = ecx;
    goto loc_00125046;

loc_00125042: ;
    ecx = MEM32(esp + 0x20);

loc_00125046: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(eax + ebp);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xA8) = edx;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(esp + 0xB0) = edx;
    eax = MEM32(eax + 8);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    edx = esp + 0x140;
    PUSH32(esp, edx);
    MEM32(esp + 0xBC) = eax;
    PUSH32(esp, 0x0012507Eu); RECOMP_ABI_CALL(0x0011C8D0u, sub_0011C8D0); /* call 0x0011C8D0 */

loc_0012507E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012508Fu); RECOMP_ABI_CALL(0x000CE770u, sub_000CE770); /* call 0x000CE770 */

loc_0012508F: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x34) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x38) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x3C) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x40) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0x44) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esp + 0x48) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(esp + 0x4C) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(esp + 0x50) = edx;
    ecx = MEM32(eax + 0x20);
    MEM32(esp + 0x54) = ecx;
    edx = MEM32(eax + 0x24);
    MEM32(esp + 0x58) = edx;
    ecx = MEM32(eax + 0x28);
    MEM32(esp + 0x5C) = ecx;
    edx = MEM32(eax + 0x2C);
    MEM32(esp + 0x60) = edx;
    ecx = MEM32(eax + 0x30);
    MEM32(esp + 0x64) = ecx;
    edx = MEM32(eax + 0x34);
    MEM32(esp + 0x68) = edx;
    ecx = MEM32(eax + 0x38);
    MEM32(esp + 0x6C) = ecx;
    edx = MEM32(eax + 0x3C);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x70) = edx;
    SET_LO8(ecx, MEM8(eax));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125114; /* jne: not equal / not zero */

loc_0012510D: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    goto loc_00125137;

loc_00125114: ;
    eax = (uint32_t)(int32_t)SMEM8(eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x180;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00125133u); RECOMP_ABI_CALL(0x000CE770u, sub_000CE770); /* call 0x000CE770 */

loc_00125133: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);

loc_00125137: ;
    ecx = edi;
    PUSH32(esp, 0x0012513Eu); RECOMP_ABI_CALL(0x00019230u, sub_00019230); /* call 0x00019230 */

loc_0012513E: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    ecx = ebx + edx + 4;
    PUSH32(esp, 0x0012514Bu); RECOMP_ABI_CALL(0x00019230u, sub_00019230); /* call 0x00019230 */

loc_0012514B: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esi + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x54;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00125042; /* jb: below (unsigned <) */

loc_00125168: ;
    edi = MEM32(esp + 0x10);

loc_0012516C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0012517D; /* je: equal / zero */

loc_00125171: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFFCu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012517Au); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0012517A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012517D: ;
    eax = MEM32(esp + 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125187u); RECOMP_ABI_CALL(0x000F6CC0u, sub_000F6CC0); /* call 0x000F6CC0 */

loc_00125187: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xAE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xAE8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001251A0
 * Original: 0x001251A0 - 0x00125322 (386 bytes, 119 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001251A0(void)
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

loc_001251A0: ;
    _fb = (uint32_t)(0x3D4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3D4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012531A; /* jne: not equal / not zero */

loc_001251B3: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00125312; /* jbe: below or equal (unsigned <=) */

loc_001251C1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x001251CCu); RECOMP_ABI_CALL(0x00019210u, sub_00019210); /* call 0x00019210 */

loc_001251CC: ;
    ecx = esp + 0x1C;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x001251D9u); RECOMP_ABI_CALL(0x00019200u, sub_00019200); /* call 0x00019200 */

loc_001251D9: ;
    ecx = esp + 0x1C;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x001251E6u); RECOMP_ABI_CALL(0x000191F0u, sub_000191F0); /* call 0x000191F0 */

loc_001251E6: ;
    ebp = esp + 0x164;
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x40;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001251F4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012524D; /* je: equal / zero */

loc_001251F8: ;
    ecx = MEM32(esi + 0x14);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    edi = eax + ecx;
    eax = edi + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, 0x00125213u); RECOMP_ABI_CALL(0x000CEA20u, sub_000CEA20); /* call 0x000CEA20 */

loc_00125213: ;
    PUSH32(esp, edi);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    ecx = esp + 0xAC;
    PUSH32(esp, 0x00125228u); RECOMP_ABI_CALL(0x00124A70u, sub_00124A70); /* call 0x00124A70 */

loc_00125228: ;
    PUSH32(esp, ebp);
    eax = esp + 0xA8;
    PUSH32(esp, eax);
    ecx = esp + 0xEC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012523Eu); RECOMP_ABI_CALL(0x000CE770u, sub_000CE770); /* call 0x000CE770 */

loc_0012523E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0012524Bu); RECOMP_ABI_CALL(0x00019230u, sub_00019230); /* call 0x00019230 */

loc_0012524B: ;
    goto loc_0012526C;

loc_0012524D: ;
    edi = MEM32(esi + 0x14);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, 0x0012525Du); RECOMP_ABI_CALL(0x000CEA20u, sub_000CEA20); /* call 0x000CEA20 */

loc_0012525D: ;
    PUSH32(esp, edi);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0012526Cu); RECOMP_ABI_CALL(0x00124A70u, sub_00124A70); /* call 0x00124A70 */

loc_0012526C: ;
    eax = MEM32(esi + 0xC);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x54);
    eax = MEM32(eax + edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001252A8; /* ja: above (unsigned >) */

loc_0012527D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x125324); /* switch: 5 entries, 4 targets */
    if (_jt == 0x00125284u) goto loc_00125284;
    if (_jt == 0x00125295u) goto loc_00125295;
    if (_jt == 0x0012529Au) goto loc_0012529A;
    if (_jt == 0x001252B5u) goto loc_001252B5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00125284: ;
    ecx = esp + 0x1C;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x40;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00125293u); RECOMP_ABI_CALL(0x00019230u, sub_00019230); /* call 0x00019230 */

loc_00125293: ;
    goto loc_001252B5;

loc_00125295: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x40;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_001252B5;

loc_0012529A: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x001252A6u); RECOMP_ABI_CALL(0x00019230u, sub_00019230); /* call 0x00019230 */

loc_001252A6: ;
    goto loc_001252B5;

loc_001252A8: ;
    PUSH32(esp, 0x1C6CA0);
    PUSH32(esp, 0x001252B2u); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_001252B2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001252B5: ;
    ecx = MEM32(esi + 0xC);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    edx = ecx + edi + 4;
    PUSH32(esp, edx);
    eax = esp + 0x12C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001252CFu); RECOMP_ABI_CALL(0x000CE770u, sub_000CE770); /* call 0x000CE770 */

loc_001252CF: ;
    edx = MEM32(esi + 0x10);
    ecx = ebx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001252E2u); RECOMP_ABI_CALL(0x00019230u, sub_00019230); /* call 0x00019230 */

loc_001252E2: ;
    ecx = MEM32(esp + 0x18);
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(esi + 0xC);
    edx = MEM32(esp + 0x10);
    fp_push(MEMF(edx)); /* fld float */
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    MEMF(eax + edi + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = eax + edi + 0x48;
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax) = edx;
    eax = MEM32(esi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001251F4; /* jb: below (unsigned <) */

loc_00125310: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00125312: ;
    MEM32(esi + 0x20) = 2;
    POP32(esp, ebx);

loc_0012531A: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x3D4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3D4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125340
 * Original: 0x00125340 - 0x00125399 (89 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125340: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1C6C08;
    if (CMP_EQ(_fa, _fb)) goto loc_00125363; /* je: equal / zero */

loc_00125350: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125359u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00125359: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_00125363: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012537D; /* je: equal / zero */

loc_0012536A: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125373u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00125373: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = 0;

loc_0012537D: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125397; /* je: equal / zero */

loc_00125384: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012538Du); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0012538D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = 0;

loc_00125397: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001253A0
 * Original: 0x001253A0 - 0x001253BE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001253A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001253A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001253A8u); RECOMP_ABI_CALL(0x00125340u, sub_00125340); /* call 0x00125340 */

loc_001253A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001253B8; /* je: equal / zero */

loc_001253AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001253B5u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001253B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001253B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001253C0
 * Original: 0x001253C0 - 0x001254F8 (312 bytes, 108 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001253C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001253C0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x3C) = eax;
    eax = MEM32(esp + 0x10);
    edx = eax + eax * 2;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x34) = eax;
    MEM32(esi) = ecx;
    PUSH32(esp, edx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x001253EAu); RECOMP_ABI_CALL(0x00196840u, sub_00196840); /* call 0x00196840 */

loc_001253EA: ;
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
    if ((_fa == 0)) goto loc_00125412; /* je: equal / zero */

loc_001253FF: ;
    PUSH32(esp, 0x1C3E74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012540Au); RECOMP_ABI_CALL(0x000E36B0u, sub_000E36B0); /* call 0x000E36B0 */

loc_0012540A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 1;

loc_00125412: ;
    eax = MEM32(esi + 0x34);
    edx = eax + eax * 2;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x00125424u); RECOMP_ABI_CALL(0x00196840u, sub_00196840); /* call 0x00196840 */

loc_00125424: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0xC) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x8007000Eu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    if ((_fa == 0)) goto loc_0012544C; /* je: equal / zero */

loc_00125439: ;
    PUSH32(esp, 0x1C3E74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125444u); RECOMP_ABI_CALL(0x000E36B0u, sub_000E36B0); /* call 0x000E36B0 */

loc_00125444: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 1;

loc_0012544C: ;
    eax = MEM32(esi + 0x34);
    edx = eax * 4;
    PUSH32(esp, edx);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0012545Fu); RECOMP_ABI_CALL(0x00196840u, sub_00196840); /* call 0x00196840 */

loc_0012545F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x14) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x8007000Eu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    if ((_fa == 0)) goto loc_00125487; /* je: equal / zero */

loc_00125474: ;
    PUSH32(esp, 0x1C3E74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012547Fu); RECOMP_ABI_CALL(0x000E36B0u, sub_000E36B0); /* call 0x000E36B0 */

loc_0012547F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 1;

loc_00125487: ;
    eax = MEM32(esi + 0x3C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001254DA; /* jbe: below or equal (unsigned <=) */

loc_00125490: ;
    PUSH32(esp, edi);
    edi = esi + 0x1C;

loc_00125494: ;
    eax = MEM32(esi + 0x34);
    edx = eax * 8;
    PUSH32(esp, edx);
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0x001254A7u); RECOMP_ABI_CALL(0x00196840u, sub_00196840); /* call 0x00196840 */

loc_001254A7: ;
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
    if ((_fa == 0)) goto loc_001254CE; /* je: equal / zero */

loc_001254BB: ;
    PUSH32(esp, 0x1C3E74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001254C6u); RECOMP_ABI_CALL(0x000E36B0u, sub_000E36B0); /* call 0x000E36B0 */

loc_001254C6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 1;

loc_001254CE: ;
    eax = MEM32(esi + 0x3C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00125494; /* jb: below (unsigned <) */

loc_001254D9: ;
    POP32(esp, edi);

loc_001254DA: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001254F3; /* je: equal / zero */

loc_001254E1: ;
    PUSH32(esp, 0x1C6CEC);
    PUSH32(esp, 0x001254EBu); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_001254EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_001254F3: ;
    SET_LO8(eax, 1);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00125500
 * Original: 0x00125500 - 0x00125585 (133 bytes, 46 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125500: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    esi = MEM32(esi + 4);
    esi = esi | 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = edx + edx * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(edi) = esi;
    esi = MEM32(ecx + 0xC);
    esi = MEM32(esi + 4);
    esi = esi | 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = esi;
    eax = MEM32(ecx + 0x14);
    eax = MEM32(eax + 4);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax + edx * 4;
    MEM32(edi + 8) = eax;
    eax = MEM32(ecx + 0x3C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012557E; /* jbe: below or equal (unsigned <=) */

loc_0012554B: ;
    PUSH32(esp, ebx);
    ebx = edx * 8;
    eax = edi + 0xC;
    edx = ecx + 0x1C;
    /* nop */

loc_00125560: ;
    edi = MEM32(edx);
    edi = MEM32(edi + 4);
    edi = edi | 0x80000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    edi = MEM32(ecx + 0x3C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00125560; /* jb: below (unsigned <) */

loc_0012557D: ;
    POP32(esp, ebx);

loc_0012557E: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00125590
 * Original: 0x00125590 - 0x001255F4 (100 bytes, 45 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00125590: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001255A5u); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_001255A5: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0xC);
    PUSH32(esp, ecx);
    edx = ebx + 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001255B4u); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_001255B4: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = ebx + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001255C3u); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_001255C3: ;
    eax = MEM32(esi + 0x3C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001255EC; /* jbe: below or equal (unsigned <=) */

loc_001255CC: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x1C;

loc_001255D0: ;
    edx = MEM32(ebp);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    eax = ebx + edi + 3;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001255E0u); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_001255E0: ;
    eax = MEM32(esi + 0x3C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001255D0; /* jb: below (unsigned <) */

loc_001255EB: ;
    POP32(esp, ebp);

loc_001255EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125600
 * Original: 0x00125600 - 0x001256D2 (210 bytes, 80 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00125600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125600: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x00125610u); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_00125610: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012561Bu); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_0012561B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00125626u); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_00125626: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00125631u); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_00125631: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0012563Cu); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_0012563C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00125647u); RECOMP_ABI_CALL(0x00194C30u, sub_00194C30); /* call 0x00194C30 */

loc_00125647: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00125650u); RECOMP_ABI_CALL(0x00196160u, sub_00196160); /* call 0x00196160 */

loc_00125650: ;
    ecx = esi + 4;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0012565Au); RECOMP_ABI_CALL(0x00123230u, sub_00123230); /* call 0x00123230 */

loc_0012565A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125663; /* jne: not equal / not zero */

loc_0012565E: ;
    ebp = 1;

loc_00125663: ;
    ecx = esi + 0xC;
    PUSH32(esp, 0x0012566Bu); RECOMP_ABI_CALL(0x00123230u, sub_00123230); /* call 0x00123230 */

loc_0012566B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125674; /* jne: not equal / not zero */

loc_0012566F: ;
    ebp = 1;

loc_00125674: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x0012567Cu); RECOMP_ABI_CALL(0x00123230u, sub_00123230); /* call 0x00123230 */

loc_0012567C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125685; /* jne: not equal / not zero */

loc_00125680: ;
    ebp = 1;

loc_00125685: ;
    eax = MEM32(esi + 0x3C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001256AE; /* jbe: below or equal (unsigned <=) */

loc_0012568E: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x1C;

loc_00125692: ;
    ecx = ebx;
    PUSH32(esp, 0x00125699u); RECOMP_ABI_CALL(0x00123230u, sub_00123230); /* call 0x00123230 */

loc_00125699: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001256A2; /* jne: not equal / not zero */

loc_0012569D: ;
    ebp = 1;

loc_001256A2: ;
    eax = MEM32(esi + 0x3C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00125692; /* jb: below (unsigned <) */

loc_001256AD: ;
    POP32(esp, ebx);

loc_001256AE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001256C5; /* je: equal / zero */

loc_001256B2: ;
    PUSH32(esp, 0x1C6D14);
    PUSH32(esp, 0x001256BCu); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_001256BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001256C5: ;
    POP32(esp, edi);
    MEM32(esi + 0x34) = 0;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001256E0
 * Original: 0x001256E0 - 0x00125713 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001256E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001256E0: ;
    eax = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    PUSH32(esp, esi);
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    ecx = eax + 0x1C;
    esi = 3;
    /* nop */

loc_00125700: ;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00125700; /* jne: not equal / not zero */

loc_0012570B: ;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00125720
 * Original: 0x00125720 - 0x00125819 (249 bytes, 90 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00125720: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012580E; /* je: equal / zero */

loc_00125733: ;
    ecx = MEM32(edi + 0x38);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00125744u); RECOMP_ABI_CALL(0x00125500u, sub_00125500); /* call 0x00125500 */

loc_00125744: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125760; /* jne: not equal / not zero */

loc_00125748: ;
    PUSH32(esp, 0x1C6D40);
    PUSH32(esp, 0x00125752u); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_00125752: ;
    eax = MEM32(edi + 0x38);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00125760: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012580B; /* jbe: below or equal (unsigned <=) */

loc_00125768: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    eax = ebx + 0x14;
    MEM32(esp + 0x2C) = esi;

loc_00125775: ;
    edx = MEM32(esp + 0x10);
    ecx = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ebx);
    MEM32(ecx) = edx;
    edx = MEM32(eax + -16);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + -12);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x14);
    ecx = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + -8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + -4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax + 4);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(edi + 0x3C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001257F4; /* jbe: below or equal (unsigned <=) */

loc_001257C8: ;
    esi = eax + 8;
    goto loc_001257D0;

    /* nop */

loc_001257D0: ;
    ecx = MEM32(esp + edx * 4 + 0x1C);
    ebp = MEM32(esi);
    MEM32(ecx) = ebp;
    ebp = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + -4) = ebp;
    MEM32(esp + edx * 4 + 0x1C) = ecx;
    ecx = MEM32(edi + 0x3C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001257D0; /* jb: below (unsigned <) */

loc_001257F0: ;
    esi = MEM32(esp + 0x30);

loc_001257F4: ;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x34;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = ecx;
    if ((_fa != 0)) goto loc_00125775; /* jne: not equal / not zero */

loc_00125809: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0012580B: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 0x38) = MEM32(edi + 0x38) + esi;
    _fa = (uint32_t)(MEM32(edi + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012580E: ;
    eax = MEM32(edi + 0x38);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00125820
 * Original: 0x00125820 - 0x001258C2 (162 bytes, 67 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00125820: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    eax = ebx + 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)eax);
    PUSH32(esp, edi);
    edi = ecx;
    edx = MEM32(edi + 0x38);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x00125846u); RECOMP_ABI_CALL(0x00125500u, sub_00125500); /* call 0x00125500 */

loc_00125846: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125862; /* jne: not equal / not zero */

loc_0012584A: ;
    PUSH32(esp, 0x1C6D78);
    PUSH32(esp, 0x00125854u); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_00125854: ;
    eax = MEM32(edi + 0x38);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00125862: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0012587Cu); RECOMP_ABI_CALL(0x000F5630u, sub_000F5630); /* call 0x000F5630 */

loc_0012587C: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0012588Bu); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_0012588B: ;
    eax = MEM32(edi + 0x3C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001258AC; /* jbe: below or equal (unsigned <=) */

loc_00125894: ;
    eax = MEM32(esp + esi * 4 + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x001258A4u); RECOMP_ABI_CALL(0x000F4110u, sub_000F4110); /* call 0x000F4110 */

loc_001258A4: ;
    eax = MEM32(edi + 0x3C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00125894; /* jb: below (unsigned <) */

loc_001258AC: ;
    eax = MEM32(edi + 0x38);
    ecx = MEM32(esp + 0x30);
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(edi + 0x38) = eax;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001258D0
 * Original: 0x001258D0 - 0x00125970 (160 bytes, 66 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001258D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001258D0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    edi = ecx;
    edx = MEM32(edi + 0x38);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    eax = ebx + ebx + 2;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x001258F4u); RECOMP_ABI_CALL(0x00125500u, sub_00125500); /* call 0x00125500 */

loc_001258F4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125910; /* jne: not equal / not zero */

loc_001258F8: ;
    PUSH32(esp, 0x1C6D78);
    PUSH32(esp, 0x00125902u); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_00125902: ;
    eax = MEM32(edi + 0x38);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00125910: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0012592Au); RECOMP_ABI_CALL(0x000F5630u, sub_000F5630); /* call 0x000F5630 */

loc_0012592A: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00125939u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_00125939: ;
    eax = MEM32(edi + 0x3C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012595A; /* jbe: below or equal (unsigned <=) */

loc_00125942: ;
    eax = MEM32(esp + esi * 4 + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00125952u); RECOMP_ABI_CALL(0x000F4110u, sub_000F4110); /* call 0x000F4110 */

loc_00125952: ;
    eax = MEM32(edi + 0x3C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00125942; /* jb: below (unsigned <) */

loc_0012595A: ;
    eax = MEM32(edi + 0x38);
    ecx = MEM32(esp + 0x30);
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(edi + 0x38) = eax;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00125970
 * Original: 0x00125970 - 0x001259F2 (130 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125970: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C6DE0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00125985u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125982u); } /* indirect call */
    }

loc_00125985: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    eax = edi + 0xF;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C4D3C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0012599Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125999u); } /* indirect call */
    }

loc_0012599F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    eax = edi + 0xE;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C6DDC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x001259B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001259B3u); } /* indirect call */
    }

loc_001259B9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    eax = edi + 0xD;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C6DD4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x001259D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001259CDu); } /* indirect call */
    }

loc_001259D3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C6DCC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x001259EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001259E7u); } /* indirect call */
    }

loc_001259ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125A00
 * Original: 0x00125A00 - 0x00125A0A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125A00(void)
{

loc_00125A00: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125A10
 * Original: 0x00125A10 - 0x00125A1F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125A10(void)
{

loc_00125A10: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125A1Eu); RECOMP_ABI_CALL(0x00125970u, sub_00125970); /* call 0x00125970 */

loc_00125A1E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00125A20
 * Original: 0x00125A20 - 0x00125AEE (206 bytes, 70 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125A20(void)
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

loc_00125A20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    esi = ecx;
    PUSH32(esp, 0x00125A2Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00125A2B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125A3F; /* je: equal / zero */

loc_00125A34: ;
    MEM32(eax) = 8;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00125A41;

loc_00125A3F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00125A41: ;
    MEM32(esi) = eax;
    fp_push(MEMF(0x1C6DB8)); /* fld float */
    ecx = MEM32(0x1C6DB8);
    fp_top() = -fp_top(); /* fchs */
    MEM32(eax + 4) = ecx;
    MEMF(eax) = (float)fp_top(); /* fst */
    edi = MEM32(0x1C6DBC);
    ecx = 0xBF800000u;
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi);
    MEMF(eax + 0xC) = (float)fp_top(); /* fst */
    MEMF(eax + 0x10) = (float)fp_top(); /* fst */
    MEM32(eax + 0x14) = ecx;
    fp_push(MEMF(0x1C6DBC)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    fp_top() = -fp_top(); /* fchs */
    MEM32(eax + 0x1C) = edi;
    MEMF(eax + 0x18) = (float)fp_top(); /* fst */
    MEM32(eax + 0x20) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    MEMF(eax + 0x24) = (float)fp_top(); /* fst */
    MEMF(eax + 0x28) = (float)fp_top(); /* fst */
    MEM32(eax + 0x2C) = ecx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    MEM32(eax + 0x30) = edi;
    MEM32(eax + 0x34) = edi;
    MEM32(eax + 0x38) = ecx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    MEMF(eax + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x3C) = edi;
    edi = MEM32(0x1C6DB8);
    MEM32(eax + 0x44) = ecx;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    MEM32(eax + 0x48) = edi;
    MEM32(eax + 0x4C) = edi;
    MEM32(eax + 0x50) = ecx;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    MEMF(eax + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x54) = edi;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125AF0
 * Original: 0x00125AF0 - 0x00125B0D (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125AF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125B0B; /* je: equal / zero */

loc_00125AF9: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125B02u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00125B02: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_00125B0B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00125B10
 * Original: 0x00125B10 - 0x00125C0A (250 bytes, 73 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125B10(void)
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

loc_00125B10: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00125B34; /* jp: parity */

loc_00125B20: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00125C07; /* jnp: not parity */

loc_00125B34: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x10)); /* fsub dword ptr [ecx + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C6DC8)); /* fmul dword ptr [0x1c6dc8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x10)); /* fadd dword ptr [ecx + 0x10] */
    MEMF(ecx + 0x10) = (float)fp_top(); /* fst */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00125B71; /* jp: parity */

loc_00125B5A: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1B22B0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1b22b0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00125B73; /* jp: parity */

loc_00125B67: ;
    MEM32(ecx + 0x10) = 0;
    esp += 12; return; /* ret 8 */

loc_00125B71: ;
    fp_pop(); /* fstp st(0) */

loc_00125B73: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    fp_push(MEMF(esi + 0x88)); /* fld float */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    edx = ecx + 4;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(MEMF(edx) - fp_top()); /* fsubr dword ptr [edx] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x84)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    fp_push(MEMF(esi + 0x84)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00125BAA; /* jp: parity */

loc_00125BA8: ;
    fp_top() = -fp_top(); /* fchs */

loc_00125BAA: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    esi = ecx + 8;
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0;
    fp_top() = RECOMP_FP_PC(MEMF(esi) - fp_top()); /* fsubr dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00125BE2u); RECOMP_ABI_CALL(0x0003FAA0u, sub_0003FAA0); /* call 0x0003FAA0 */

loc_00125BE2: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x00125C02u); RECOMP_ABI_CALL(0x0003FAA0u, sub_0003FAA0); /* call 0x0003FAA0 */

loc_00125C02: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);

loc_00125C07: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125C10
 * Original: 0x00125C10 - 0x00125C31 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125C10(void)
{

loc_00125C10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x125A10);
    PUSH32(esp, 0x00125C2Bu); RECOMP_ABI_CALL(0x000EBDD0u, sub_000EBDD0); /* call 0x000EBDD0 */

loc_00125C2B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125C40
 * Original: 0x00125C40 - 0x00125EC1 (641 bytes, 190 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00125C40(void)
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

loc_00125C40: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00125EBC; /* jnp: not parity */

loc_00125C5A: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    eax = MEM32(esi + 4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x1C6DC0)); /* fsub dword ptr [0x1c6dc0] */
    edx = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edx + 0xC);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1C91D0)); /* fld float */
    MEM32(esp + 8) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x1C6DC4)); /* fsub dword ptr [0x1c6dc4] */
    ecx = eax;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    PUSH32(esp, 0x00125CA7u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00125CA7: ;
    fp_push(MEMF(0x1C6DC0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEM8(esp + 7) = LO8(eax);
    PUSH32(esp, 0x10);
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x1C6DC0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1C6DC4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x40) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x1C6DC4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEMF(esp + 0x44) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    eax = MEM32(esp + 0xC);
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0x5C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    edx = MEM32(esp + 0x1C);
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x58) = edx;
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x6C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x68) = ecx;
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00125D5Eu); RECOMP_ABI_CALL(0x000E3B60u, sub_000E3B60); /* call 0x000E3B60 */

loc_00125D5E: ;
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00125D76u); RECOMP_ABI_CALL(0x000E4540u, sub_000E4540); /* call 0x000E4540 */

loc_00125D76: ;
    eax = MEM32(esi);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    ecx = MEM32(eax + 0x14);
    edx = MEM32(eax + 0x48);
    fp_push(MEMF(eax + 0x10)); /* fld float */
    MEM32(esp + 0x44) = ecx;
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(eax + 0x4C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(eax + 0x50);
    MEM32(eax + 0x14) = edx;
    MEMF(eax + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x44);
    MEMF(eax + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x50) = ecx;
    eax = MEM32(esi);
    edx = MEM32(eax + 0x2C);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    ecx = MEM32(eax + 0x30);
    fp_push(MEMF(eax + 0x28)); /* fld float */
    MEM32(eax + 0x24) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x44) = edx;
    edx = MEM32(eax + 0x34);
    MEM32(eax + 0x28) = edx;
    ecx = MEM32(eax + 0x38);
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x2C) = ecx;
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x38) = edx;
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x78);
    eax = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x54);
    MEM32(esp + 0x50) = edx;
    edx = MEM32(esp + 0x7C);
    MEM32(esp + 0x54) = edx;
    edx = MEM32(esp + 0x68);
    MEM32(esp + 0x78) = eax;
    eax = MEM32(esp + 0x60);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x84) = ecx;
    ecx = MEM32(esp + 0x6C);
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x68) = edx;
    edx = MEM32(esp + 0x74);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEM32(esp + 0x78) = ecx;
    PUSH32(esp, 4);
    ecx = esp + 0x58;
    MEM32(esp + 0x74) = edx;
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00125E31u); RECOMP_ABI_CALL(0x000E4540u, sub_000E4540); /* call 0x000E4540 */

loc_00125E31: ;
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00125E4Fu); RECOMP_ABI_CALL(0x000E4540u, sub_000E4540); /* call 0x000E4540 */

loc_00125E4F: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x00125E59u); RECOMP_ABI_CALL(0x000E4700u, sub_000E4700); /* call 0x000E4700 */

loc_00125E59: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x14);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    edx = MEM32(eax + 0x48);
    fp_push(MEMF(eax + 0x10)); /* fld float */
    MEM32(eax + 0xC) = edx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(eax + 0x4C);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(eax + 0x50);
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 0x14) = edx;
    MEMF(eax + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x50) = ecx;
    eax = MEM32(esi);
    edx = MEM32(eax + 0x2C);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    ecx = MEM32(eax + 0x30);
    fp_push(MEMF(eax + 0x28)); /* fld float */
    MEM32(eax + 0x24) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0x34);
    MEM32(eax + 0x28) = edx;
    ecx = MEM32(eax + 0x38);
    edx = MEM32(esp + 0x28);
    MEM32(eax + 0x2C) = ecx;
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x38) = edx;
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */

loc_00125EBC: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125ED0
 * Original: 0x00125ED0 - 0x00125FF1 (289 bytes, 85 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125ED0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7F7FFFFF);
    edi = ecx;
    PUSH32(esp, 0xFF7FFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1AFB64);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00125EF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125EECu); } /* indirect call */
    }

loc_00125EF2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C6E30);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00125F0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125F09u); } /* indirect call */
    }

loc_00125F0F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C4D3C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00125F2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125F26u); } /* indirect call */
    }

loc_00125F2C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C6E24);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00125F49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125F43u); } /* indirect call */
    }

loc_00125F49: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C6E1C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00125F66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125F60u); } /* indirect call */
    }

loc_00125F66: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C6E10);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00125F83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125F7Du); } /* indirect call */
    }

loc_00125F83: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C6E04);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00125FA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125F9Au); } /* indirect call */
    }

loc_00125FA0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C6DF8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00125FBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125FB7u); } /* indirect call */
    }

loc_00125FBD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C6DEC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00125FDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125FD4u); } /* indirect call */
    }

loc_00125FDA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x1AFB6C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00125FECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125FE9u); } /* indirect call */
    }

loc_00125FEC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00126000
 * Original: 0x00126000 - 0x0012600A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126000(void)
{

loc_00126000: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00126010
 * Original: 0x00126010 - 0x0012601F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126010(void)
{

loc_00126010: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012601Eu); RECOMP_ABI_CALL(0x00125ED0u, sub_00125ED0); /* call 0x00125ED0 */

loc_0012601E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00126020
 * Original: 0x00126020 - 0x001261FA (474 bytes, 134 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00126020(void)
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

loc_00126020: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x3C) = eax;
    ecx = ZX8(MEM8(esi + 0x3F));
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, edi);
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    PUSH32(esp, 0x3F800000);
    ecx = 0x1CEFD8;
    MEM32(esi + 0x48) = 1;
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00126053u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_00126053: ;
    PUSH32(esp, 0x3F800000);
    ecx = 0x1CEFD8;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00126066u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_00126066: ;
    edx = MEM32(esp + 0x40);
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    edi = esi + 0x30;
    MEM32(edi) = edx;
    MEM32(edi + 8) = 0;
    fp_push(MEMF(edi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001260A1; /* jp: parity */

loc_00126088: ;
    fp_push(MEMF(esi + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001260A1; /* jp: parity */

loc_00126098: ;
    MEM32(esi + 0x34) = 0x3F800000;
    goto loc_001260A8;

loc_001260A1: ;
    ecx = edi;
    PUSH32(esp, 0x001260A8u); RECOMP_ABI_CALL(0x000190B0u, sub_000190B0); /* call 0x000190B0 */

loc_001260A8: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91E0)); /* fmul dword ptr [0x1c91e0] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEMF(esp + 0x3C) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 4) & 7]); /* fsub st(4) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x28);
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 8) = eax;
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    MEMF(esp + 0x38) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x44) = (float)fp_top(); /* fst */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x28);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x14) = ecx;
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    eax = MEM32(esp + 0x44);
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 0x24) = eax;
    POP32(esp, edi);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = ecx;
    MEM32(esi + 0x20) = edx;
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x2C) = edx;
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00126200
 * Original: 0x00126200 - 0x00126251 (81 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126200(void)
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

loc_00126200: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    eax = MEM32(ecx + 0x30);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 4);
    PUSH32(esp, 0);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = edx;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = eax;
    eax = ecx + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x1CF674);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012624Du); RECOMP_ABI_CALL(0x000E4540u, sub_000E4540); /* call 0x000E4540 */

loc_0012624D: ;
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
 * sub_00126260
 * Original: 0x00126260 - 0x001262E8 (136 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126260(void)
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

loc_00126260: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012627A; /* jne: not equal / not zero */

loc_0012626A: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001262E6; /* jnp: not parity */

loc_0012627A: ;
    eax = ecx * 4;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126288u); RECOMP_ABI_CALL(0x000E3B60u, sub_000E3B60); /* call 0x000E3B60 */

loc_00126288: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x64;

loc_00126293: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001262A1; /* je: equal / zero */

loc_0012629A: ;
    ecx = esi;
    PUSH32(esp, 0x001262A1u); RECOMP_ABI_CALL(0x00126200u, sub_00126200); /* call 0x00126200 */

loc_001262A1: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00126293; /* jne: not equal / not zero */

loc_001262A7: ;
    MEM32(0x1DF438) = 1;
    MEM32(0x1DF760) = 8;
    PUSH32(esp, 0x001262C0u); RECOMP_ABI_CALL(0x000F95A0u, sub_000F95A0); /* call 0x000F95A0 */

loc_001262C0: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x001262C7u); RECOMP_ABI_CALL(0x000FB660u, sub_000FB660); /* call 0x000FB660 */

loc_001262C7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001262CEu); RECOMP_ABI_CALL(0x000E4700u, sub_000E4700); /* call 0x000E4700 */

loc_001262CE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x1DF438) = 0;
    MEM32(0x1DF760) = 0;
    POP32(esp, edi);

loc_001262E6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001262F0
 * Original: 0x001262F0 - 0x00126311 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001262F0(void)
{

loc_001262F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x126010);
    PUSH32(esp, 0x0012630Bu); RECOMP_ABI_CALL(0x000EBDD0u, sub_000EBDD0); /* call 0x000EBDD0 */

loc_0012630B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00126320
 * Original: 0x00126320 - 0x0012635B (59 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126320: ;
    eax = ecx;
    edx = eax + 0x64;
    ecx = 0x64;
    /* nop */

loc_00126330: ;
    MEM32(edx) = 0;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x4C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00126330; /* jne: not equal / not zero */

loc_0012633C: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x18) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00126360
 * Original: 0x00126360 - 0x00126772 (1042 bytes, 287 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126360(void)
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

loc_00126360: ;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00126387; /* jne: not equal / not zero */

loc_00126373: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00126767; /* jnp: not parity */

loc_00126387: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00126390u); RECOMP_ABI_CALL(0x00105770u, sub_00105770); /* call 0x00105770 */

loc_00126390: ;
    eax = MEM32(esp + 0xBC);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001263A4u); RECOMP_ABI_CALL(0x000E9C80u, sub_000E9C80); /* call 0x000E9C80 */

loc_001263A4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001263AAu); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_001263AA: ;
    eax = MEM32(0x1DC3CC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001263CE; /* je: equal / zero */

loc_001263B6: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = ebp;
    PUSH32(esp, 0x001263C8u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_001263C8: ;
    MEM32(0x1A51F8) = ebp;

loc_001263CE: ;
    eax = MEM32(0x1DC444);
    PUSH32(esp, ebx);
    ebx = 0x207;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001263F6; /* je: equal / zero */

loc_001263DE: ;
    edx = ebx;
    ecx = 0x40354;
    MEM32(0x1DC444) = ebx;
    PUSH32(esp, 0x001263F0u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_001263F0: ;
    MEM32(0x1A51DC) = ebx;

loc_001263F6: ;
    edx = MEM32(0x1DC428);
    eax = 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ecx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00126422; /* je: equal / zero */

loc_0012640A: ;
    edx = MEM32(0x1A50F0);
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1DC428) = eax;
    MEM32(0x1A50F0) = edx;
    MEM32(0x1A2EA0) = eax;

loc_00126422: ;
    _fa = (uint32_t)(MEM32(0x1DC368)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC368), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126442; /* je: equal / zero */

loc_0012642A: ;
    edx = MEM32(0x1A50F0);
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1DC368) = eax;
    MEM32(0x1A50F0) = edx;
    MEM32(0x1A2EA4) = eax;

loc_00126442: ;
    PUSH32(esp, 0x1DE580);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012644Du); RECOMP_ABI_CALL(0x000E6A00u, sub_000E6A00); /* call 0x000E6A00 */

loc_0012644D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0012646Du); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0012646D: ;
    fp_push((double)SMEM32(0x1DE5B0)); /* fild */
    edi = MEM32(esp + 0xC0);
    fp_push((double)SMEM32(0x1DE5AC)); /* fild */
    fp_push(MEMF(edi + 0x48)); /* fld float */
    edx = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x40)); /* fadd dword ptr [edi + 0x40] */
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x3C)); /* fadd dword ptr [edi + 0x3c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x40)); /* fmul dword ptr [edi + 0x40] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x3C)); /* fmul dword ptr [edi + 0x3c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xC0000000u);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x001264CDu); RECOMP_ABI_CALL(0x000E5710u, sub_000E5710); /* call 0x000E5710 */

loc_001264CD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x1DE580);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001264DAu); RECOMP_ABI_CALL(0x000E9C80u, sub_000E9C80); /* call 0x000E9C80 */

loc_001264DA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001264E0u); RECOMP_ABI_CALL(0x0001D270u, sub_0001D270); /* call 0x0001D270 */

loc_001264E0: ;
    eax = MEM32(0x1DC3CC);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126504; /* je: equal / zero */

loc_001264EC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = ebp;
    PUSH32(esp, 0x001264FEu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_001264FE: ;
    MEM32(0x1A51F8) = ebp;

loc_00126504: ;
    _fa = (uint32_t)(MEM32(0x1DC444)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC444), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126524; /* je: equal / zero */

loc_0012650C: ;
    edx = ebx;
    ecx = 0x40354;
    MEM32(0x1DC444) = ebx;
    PUSH32(esp, 0x0012651Eu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0012651E: ;
    MEM32(0x1A51DC) = ebx;

loc_00126524: ;
    ebx = esi + 0x5C;
    ebp = 0x64;
    /* nop */

loc_00126530: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126572; /* je: equal / zero */

loc_00126537: ;
    fp_push(MEMF(esp + 0xBC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C6E38)); /* fmul dword ptr [0x1c6e38] */
    fp_top() = RECOMP_FP_PC(MEMF(ebx) - fp_top()); /* fsubr dword ptr [ebx] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00126566; /* jp: parity */

loc_0012655D: ;
    MEM32(ebx + 8) = 0;
    goto loc_00126572;

loc_00126566: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, 0x0012656Fu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0012656F: ;
    MEM8(ebx + -1) = LO8(eax);

loc_00126572: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x4C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00126530; /* jne: not equal / not zero */

loc_00126578: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0012673B; /* jnp: not parity */

loc_0012658C: ;
    fp_push(MEMF(edi + 0x88)); /* fld float */
    MEM32(esp + 0x10) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_push(MEMF(edi + 0x84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edi + 0x80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = esp + 0x10;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001265CD; /* jnp: not parity */

loc_001265C9: ;
    eax = esp + 0x14;

loc_001265CD: ;
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, 0x3F800000);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    ecx = 0x1CEFD8;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001265E5u); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_001265E5: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012673B; /* jp: parity */

loc_001265F4: ;
    eax = MEM32(esi + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    ecx = MEM32(eax + esi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012673B; /* jne: not equal / not zero */

loc_00126606: ;
    ebx = MEM32(esi + 0x18);
    ecx = MEM32(ebx + 0x24);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x3F800000);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x0012661Fu); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_0012661F: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebx + 0x20] */
    edx = MEM32(esi + 0x18);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00126671; /* jp: parity */

loc_0012662C: ;
    eax = MEM32(edx + 0x1C);
    ecx = eax;
    PUSH32(esp, ecx);
    ecx = 0x1CEFD8;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x00126640u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_00126640: ;
    ebx = MEM32(esi + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 0x18)); /* fadd dword ptr [ebx + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE830)); /* fmul dword ptr [0x1ae830] */
    PUSH32(esp, 0x00126651u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00126651: ;
    edx = MEM32(ebx + 0x14);
    MEM8(esp + 0x17) = LO8(eax);
    eax = edx;
    PUSH32(esp, eax);
    ecx = 0x1CEFD8;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x00126669u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_00126669: ;
    ecx = MEM32(esi + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x10)); /* fadd dword ptr [ecx + 0x10] */
    goto loc_001266B3;

loc_00126671: ;
    eax = MEM32(edx + 0xC);
    ecx = eax;
    PUSH32(esp, ecx);
    ecx = 0x1CEFD8;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x00126685u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_00126685: ;
    ebx = MEM32(esi + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 8)); /* fadd dword ptr [ebx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE830)); /* fmul dword ptr [0x1ae830] */
    PUSH32(esp, 0x00126696u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00126696: ;
    edx = MEM32(ebx + 4);
    MEM8(esp + 0x17) = LO8(eax);
    eax = edx;
    PUSH32(esp, eax);
    ecx = 0x1CEFD8;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x001266AEu); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_001266AE: ;
    ecx = MEM32(esi + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */

loc_001266B3: ;
    PUSH32(esp, 0x3E4CCCCD);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x001266C6u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_001266C6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D0)); /* fadd dword ptr [0x1c91d0] */
    PUSH32(esp, 0x3F800000);
    ecx = 0x1CEFD8;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001266E3u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_001266E3: ;
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x001266F6u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_001266F6: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0xC)); /* fld float */
    edx = MEM32(esp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(edi + 0x10)); /* fdiv dword ptr [edi + 0x10] */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + esi + 0x1C;
    PUSH32(esp, 0x0012672Cu); RECOMP_ABI_CALL(0x00126020u, sub_00126020); /* call 0x00126020 */

loc_0012672C: ;
    eax = MEM32(esi + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esi + 0x14) = edx;

loc_0012673B: ;
    POP32(esp, edi);
    MEM32(esi + 0x10) = 0;
    eax = esi + 0x64;
    ecx = 0x64;
    POP32(esp, ebx);
    /* nop */

loc_00126750: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126758; /* je: equal / zero */

loc_00126755: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00126758: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00126750; /* jne: not equal / not zero */

loc_0012675E: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00126767u); RECOMP_ABI_CALL(0x00105830u, sub_00105830); /* call 0x00105830 */

loc_00126767: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00126780
 * Original: 0x00126780 - 0x00126812 (146 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126780: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7F7FFFFF);
    edi = ecx;
    PUSH32(esp, 0xFF7FFFFFu);
    ecx = edi + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1BD014);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x001267A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012679Fu); } /* indirect call */
    }

loc_001267A5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    eax = edi + 0x33;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C4D3C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x001267BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001267B9u); } /* indirect call */
    }

loc_001267BF: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    eax = edi + 0x32;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C6DDC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x001267D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001267D3u); } /* indirect call */
    }

loc_001267D9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    eax = edi + 0x31;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C6DD4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x001267F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001267EDu); } /* indirect call */
    }

loc_001267F3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C6DCC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0012680Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00126807u); } /* indirect call */
    }

loc_0012680D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00126820
 * Original: 0x00126820 - 0x0012683D (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126820(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00126820: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push((double)SMEM32(esi + 0x34)); /* fild */
    MEM32(esi + 0x38) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    PUSH32(esp, 0x00126836u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00126836: ;
    MEM32(esi + 0x2C) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00126840
 * Original: 0x00126840 - 0x0012684D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126840(void)
{

loc_00126840: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x1DE810);
    PUSH32(esp, 0x0012684Cu); RECOMP_ABI_CALL(0x000EBB10u, sub_000EBB10); /* call 0x000EBB10 */

loc_0012684C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00126850
 * Original: 0x00126850 - 0x0012685F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126850(void)
{

loc_00126850: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012685Eu); RECOMP_ABI_CALL(0x00126780u, sub_00126780); /* call 0x00126780 */

loc_0012685E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00126860
 * Original: 0x00126860 - 0x00126A75 (533 bytes, 150 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126860(void)
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

loc_00126860: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00126879u); RECOMP_ABI_CALL(0x000E3FC0u, sub_000E3FC0); /* call 0x000E3FC0 */

loc_00126879: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF32C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af32c] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00126A70; /* jnp: not parity */

loc_00126891: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126A70; /* je: equal / zero */

loc_001268A6: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = esp + 4;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x2C)); /* fmul dword ptr [esi + 0x2c] */
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001268C1u); RECOMP_ABI_CALL(0x000E3FC0u, sub_000E3FC0); /* call 0x000E3FC0 */

loc_001268C1: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF32C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af32c] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00126A70; /* jnp: not parity */

loc_001268D9: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126A70; /* je: equal / zero */

loc_001268EE: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x2C)); /* fmul dword ptr [esi + 0x2c] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00126918; /* jp: parity */

loc_00126916: ;
    fp_top() = -fp_top(); /* fchs */

loc_00126918: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012692F; /* jp: parity */

loc_0012692D: ;
    fp_top() = -fp_top(); /* fchs */

loc_0012692F: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012695A; /* jne: not equal / not zero */

loc_0012693C: ;
    edx = MEM32(esp + 0xC);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x34) = 0;
    goto loc_00126976;

loc_0012695A: ;
    eax = MEM32(esp + 0xC);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x38) = 0;

loc_00126976: ;
    PUSH32(esp, 0x124AE0);
    PUSH32(esp, 4);
    PUSH32(esp, 0xC);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126989u); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_00126989: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    PUSH32(esp, 0);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x50);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x5C) = edx;
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x50);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x68) = eax;
    eax = MEM32(esi + 0x24);
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x50);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x74) = ecx;
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x50);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x80) = edx;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + -4);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0x00126A5Au); RECOMP_ABI_CALL(0x000E4540u, sub_000E4540); /* call 0x000E4540 */

loc_00126A5A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x12AF20);
    PUSH32(esp, 4);
    PUSH32(esp, 0xC);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126A70u); RECOMP_ABI_CALL(0x00011030u, sub_00011030); /* call 0x00011030 */

loc_00126A70: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00126A80
 * Original: 0x00126A80 - 0x00126D66 (742 bytes, 228 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126A80(void)
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

loc_00126A80: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x80);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x1C6E44;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x2C) = edi;
    eax = MEM32(ebx + 0x18);
    MEM32(esi + 0x34) = eax;
    ebp = MEM32(ebx + 0x18);
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126AB5u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00126AB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126AF6; /* je: equal / zero */

loc_00126ABC: ;
    MEM32(eax) = ebp;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    edx = eax + 4;
    ecx = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00126AF2; /* jl: less (signed <) */

loc_00126AC8: ;
    eax = ecx + 0x10;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_00126AD0: ;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = edi;
    MEM32(eax + -8) = edi;
    MEM32(eax + -12) = edi;
    MEM32(ecx) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax) = edi;
    MEM32(eax + -4) = edi;
    MEM32(eax + 0x14) = edi;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00126AD0; /* jne: not equal / not zero */

loc_00126AF2: ;
    eax = edx;
    goto loc_00126AF8;

loc_00126AF6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00126AF8: ;
    MEM32(esi + 0x10) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), edi (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00126D27; /* jle: less or equal (signed <=) */

loc_00126B08: ;
    goto loc_00126B10;

    /* nop */

loc_00126B10: ;
    PUSH32(esp, 8);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x00126B1Cu); RECOMP_ABI_CALL(0x000CE0A0u, sub_000CE0A0); /* call 0x000CE0A0 */

loc_00126B1C: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(esp + 0x10);
    ebp = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00126B34; /* jle: less or equal (signed <=) */

loc_00126B32: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00126B34: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126D27; /* je: equal / zero */

loc_00126B3C: ;
    edx = MEM32(ebx + 0x2C);
    ecx = edx;
    eax = edx;
    PUSH32(esp, ecx);
    ecx = 0x1CEFD8;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00126B56u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_00126B56: ;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebx + 0x2C);
    eax = edx;
    PUSH32(esp, eax);
    ecx = 0x1CEFD8;
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0x00126B6Eu); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_00126B6E: ;
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x00126B81u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_00126B81: ;
    eax = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x14);
    ecx = eax;
    PUSH32(esp, ecx);
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = 0x1CEFD8;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x00126BA0u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_00126BA0: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebx + 0xC);
    eax = edx;
    PUSH32(esp, eax);
    ecx = 0x1CEFD8;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0x00126BB8u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_00126BB8: ;
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x00126BCBu); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_00126BCB: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx)); /* fadd dword ptr [ebx] */
    eax = MEM32(ebx + 0x20);
    edx = MEM32(ebx + 0x1C);
    ecx = eax;
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = 0x1CEFD8;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 4)); /* fadd dword ptr [ebx + 4] */
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x38) = eax;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 8)); /* fadd dword ptr [ebx + 8] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00126C02u); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_00126C02: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    edx = MEM32(ebx + 0x24);
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x40) = edx;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x58)); /* fmul dword ptr [esp + 0x58] */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00126C36u); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_00126C36: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_00126D12; /* jle: less or equal (signed <=) */

loc_00126C4D: ;
    edi = MEM32(esp + 0x10);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x34);
    MEM32(esp + 0x18) = ebp;
    goto loc_00126C60;

    /* nop */

loc_00126C60: ;
    PUSH32(esp, 0x3F800000);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x00126C6Fu); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_00126C6F: ;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3F800000);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x00126C82u); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_00126C82: ;
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3F800000);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x00126C95u); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_00126C95: ;
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x58)); /* fadd dword ptr [esp + 0x58] */
    eax = MEM32(esi + 0x10);
    fp_push(MEMF(esp + 0x40)); /* fld float */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x60)); /* fadd dword ptr [esp + 0x60] */
    MEMF(esp + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x84);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x10);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = edi + edx + 0xC;
    edx = MEM32(esp + 0x50);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0x10);
    MEMF(edi + edx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x10);
    fp_push(MEMF(esp + 0x48)); /* fld float */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi + eax + -4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x10);
    eax = MEM32(esp + 0x18);
    MEM32(edi + ecx + -16) = ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_00126C60; /* jne: not equal / not zero */

loc_00126D10: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00126D12: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x34);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00126B10; /* jl: less (signed <) */

loc_00126D27: ;
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    eax = esi;
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00126D70
 * Original: 0x00126D70 - 0x00126DCB (91 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126D70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00126D81; /* jne: not equal / not zero */

loc_00126D7A: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126DC9; /* je: equal / zero */

loc_00126D81: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126D8Bu); RECOMP_ABI_CALL(0x000E3B60u, sub_000E3B60); /* call 0x000E3B60 */

loc_00126D8B: ;
    eax = MEM32(esi + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00126DBE; /* jle: less or equal (signed <=) */

loc_00126D97: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00126DA0: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx + edi + 0x28);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126DB2; /* je: equal / zero */

loc_00126DAD: ;
    PUSH32(esp, 0x00126DB2u); RECOMP_ABI_CALL(0x00126860u, sub_00126860); /* call 0x00126860 */

loc_00126DB2: ;
    eax = MEM32(esi + 0x34);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00126DA0; /* jl: less (signed <) */

loc_00126DBD: ;
    POP32(esp, edi);

loc_00126DBE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00126DC5u); RECOMP_ABI_CALL(0x000E4700u, sub_000E4700); /* call 0x000E4700 */

loc_00126DC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_00126DC9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00126DD0
 * Original: 0x00126DD0 - 0x00126F08 (312 bytes, 112 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00126DD0(void)
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

loc_00126DD0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, esi);
    fp_push(MEMF(eax + 4)); /* fld float */
    esi = ecx;
    fp_push(MEMF(eax + 8)); /* fld float */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00126E0D; /* jne: not equal / not zero */

loc_00126DED: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x14)); /* fsub dword ptr [esi + 0x14] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x14)); /* fsub dword ptr [esi + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    PUSH32(esp, 0x00126DFFu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00126DFF: ;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] - fp_top()); fp_pop(); /* fsubp st(4) */
    goto loc_00126E37;

loc_00126E0D: ;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00126E3E; /* jp: parity */

loc_00126E19: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x14)); /* fsub dword ptr [esi + 0x14] */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 4) & 7]); /* fsub st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    PUSH32(esp, 0x00126E2Bu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00126E2B: ;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */

loc_00126E37: ;
    fp_pop(); /* fstp st(0) */
    ecx = 1;

loc_00126E3E: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00126E6A; /* jne: not equal / not zero */

loc_00126E4A: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18)); /* fsub dword ptr [esi + 0x18] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18)); /* fsub dword ptr [esi + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    PUSH32(esp, 0x00126E5Cu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00126E5C: ;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] - fp_top()); fp_pop(); /* fsubp st(3) */
    goto loc_00126E94;

loc_00126E6A: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00126E9B; /* jp: parity */

loc_00126E76: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18)); /* fsub dword ptr [esi + 0x18] */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    PUSH32(esp, 0x00126E88u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00126E88: ;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */

loc_00126E94: ;
    fp_pop(); /* fstp st(0) */
    ecx = 1;

loc_00126E9B: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00126EC5; /* jne: not equal / not zero */

loc_00126EA5: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x1C)); /* fsub dword ptr [esi + 0x1c] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x1C)); /* fsub dword ptr [esi + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    PUSH32(esp, 0x00126EB7u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00126EB7: ;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); fp_pop(); /* fsubp st(2) */
    goto loc_00126EED;

loc_00126EC5: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00126EF4; /* jp: parity */

loc_00126ECF: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x1C)); /* fsub dword ptr [esi + 0x1c] */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    PUSH32(esp, 0x00126EE1u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00126EE1: ;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */

loc_00126EED: ;
    fp_pop(); /* fstp st(0) */
    ecx = 1;

loc_00126EF4: ;
    eax = MEM32(esp + 0xC);
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ecx;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00126F10
 * Original: 0x00126F10 - 0x00126F31 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126F10(void)
{

loc_00126F10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(0x1DE810);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x126850);
    PUSH32(esp, 0x00126F2Bu); RECOMP_ABI_CALL(0x000EBDD0u, sub_000EBDD0); /* call 0x000EBDD0 */

loc_00126F2B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00126F40
 * Original: 0x00126F40 - 0x00126F79 (57 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126F40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1C6E44;
    if (CMP_EQ(_fa, _fb)) goto loc_00126F63; /* je: equal / zero */

loc_00126F50: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126F59u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00126F59: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = 0;

loc_00126F63: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126F73; /* je: equal / zero */

loc_00126F6A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00126F70u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00126F70: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00126F73: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00126F80
 * Original: 0x00126F80 - 0x0012724A (714 bytes, 225 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126F80(void)
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

loc_00126F80: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00126F99; /* jne: not equal / not zero */

loc_00126F90: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127242; /* je: equal / zero */

loc_00126F99: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x24);
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    eax = MEM32(esp + 0x68);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    PUSH32(esp, ebp);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x80)); /* fmul dword ptr [eax + 0x80] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x84)); /* fmul dword ptr [eax + 0x84] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x88)); /* fmul dword ptr [eax + 0x88] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x5C)); /* fadd dword ptr [eax + 0x5c] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x60)); /* fadd dword ptr [eax + 0x60] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x64)); /* fadd dword ptr [eax + 0x64] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x14)); /* fadd dword ptr [esi + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18)); /* fadd dword ptr [esi + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1C)); /* fadd dword ptr [esi + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x14)); /* fadd dword ptr [esi + 0x14] */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x20)); /* fadd dword ptr [esi + 0x20] */
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18)); /* fadd dword ptr [esi + 0x18] */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1C)); /* fadd dword ptr [esi + 0x1c] */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x28)); /* fadd dword ptr [esi + 0x28] */
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx + 0x24);
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x48);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xC) = ecx;
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x30);
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xC)); /* fsub dword ptr [esi + 0xc] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_001270B6; /* jle: less or equal (signed <=) */

loc_001270A8: ;
    edx = MEM32(0x1DC340);
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x18), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001270B6; /* je: equal / zero */

loc_001270B4: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001270B6: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), edi (32-bit) */
    MEM32(esp + 0x6C) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00127241; /* jle: less or equal (signed <=) */

loc_001270C3: ;
    PUSH32(esp, ebx);

loc_001270C4: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + edi + 0x28);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001270EA; /* jne: not equal / not zero */

loc_001270D1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00127229; /* jle: less or equal (signed <=) */

loc_001270D9: ;
    MEM32(eax + 0x28) = 1;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00127229;

loc_001270EA: ;
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    edx = esp + 0x44;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xC)); /* fadd dword ptr [esi + 0xc] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x5C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    ecx = esi;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012715Cu); RECOMP_ABI_CALL(0x00126DD0u, sub_00126DD0); /* call 0x00126DD0 */

loc_0012715C: ;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x48);
    ebx = eax;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0x10);
    fp_push(MEMF(edi + edx + 0x30)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001271C7u); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_001271C7: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x14) / fp_top()); /* fdivr dword ptr [esp + 0x14] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(esi + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x64);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x20) = ecx;
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127229; /* je: equal / zero */

loc_00127216: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00127229; /* jge: greater or equal (signed >=) */

loc_0012721A: ;
    edx = MEM32(esi + 0x10);
    MEM32(edi + edx + 0x28) = 0;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00127229: ;
    eax = MEM32(esp + 0x70);
    ecx = MEM32(esi + 0x34);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x70) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001270C4; /* jl: less (signed <) */

loc_00127240: ;
    POP32(esp, ebx);

loc_00127241: ;
    POP32(esp, ebp);

loc_00127242: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00127250
 * Original: 0x00127250 - 0x0012725B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00127250: ;
    MEM32(ecx) = 0x1C6E50;
    g_seh_ebp = ebp; sub_0011B860(); return; /* tail jmp 0x0011B860 */

}

/**
 * sub_00127260
 * Original: 0x00127260 - 0x00127270 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00127260: ;
    g_seh_ebp = ebp; sub_0011B510(); return; /* tail jmp 0x0011B510 */

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

    g_seh_ebp = ebp; sub_00127270(); return; /* fallthrough 0x00127270 */

}

/**
 * sub_00127270
 * Original: 0x00127270 - 0x00127430 (448 bytes, 144 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00127270: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    eax = MEM32(ebp + 0x74);
    PUSH32(esp, 4);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = ebp + 0x64;
    PUSH32(esp, ecx);
    ecx = MEM32(0x1DE45C);
    PUSH32(esp, 0x0012728Du); RECOMP_ABI_CALL(0x000EF4B0u, sub_000EF4B0); /* call 0x000EF4B0 */

loc_0012728D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001272AE; /* je: equal / zero */

loc_00127291: ;
    eax = MEM32(0x1DE45C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    edx = eax + 0x28;
    eax = MEM32(eax + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001272A9u); RECOMP_ABI_CALL(0x000E5430u, sub_000E5430); /* call 0x000E5430 */

loc_001272A9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001272C4;

loc_001272AE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001272BFu); RECOMP_ABI_CALL(0x000E5430u, sub_000E5430); /* call 0x000E5430 */

loc_001272BF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001272C4: ;
    _fa = (uint32_t)(MEM8(ebp + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001272DB; /* je: equal / zero */

loc_001272CA: ;
    _fa = (uint32_t)(MEM32(0x1DE3E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DE3E8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127303; /* je: equal / zero */

loc_001272D2: ;
    MEM32(0x1DE3E8) = esi;
    PUSH32(esp, esi);
    goto loc_001272FE;

loc_001272DB: ;
    eax = MEM32(0x1DC3C4);
    ecx = MEM32(0x1DE3E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    eax = 0x900;
    if (CMP_NE(_fa, _fb)) goto loc_001272F4; /* jne: not equal / not zero */

loc_001272EF: ;
    eax = 0x901;

loc_001272F4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127303; /* je: equal / zero */

loc_001272F8: ;
    MEM32(0x1DE3E8) = eax;
    PUSH32(esp, eax);

loc_001272FE: ;
    PUSH32(esp, 0x00127303u); RECOMP_ABI_CALL(0x001931B0u, sub_001931B0); /* call 0x001931B0 */

loc_00127303: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 8 (8-bit) */
    eax = MEM32(0x1DC3B4);
    if (TEST_Z(_fa, _fb)) goto loc_0012732E; /* je: equal / zero */

loc_00127310: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012734F; /* je: equal / zero */

loc_00127314: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40300;
    MEM32(0x1DC3B4) = esi;
    PUSH32(esp, 0x00127326u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00127326: ;
    MEM32(0x1A51E8) = esi;
    goto loc_0012734F;

loc_0012732E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012734F; /* jne: not equal / not zero */

loc_00127332: ;
    edi = 1;
    edx = edi;
    ecx = 0x40300;
    MEM32(0x1DC3B4) = edi;
    PUSH32(esp, 0x00127349u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00127349: ;
    MEM32(0x1A51E8) = edi;

loc_0012734F: ;
    edi = 0x1A2EA4;
    ebx = ebp + 0x58;

loc_00127357: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001273C9; /* je: equal / zero */

loc_0012735D: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00127367u); RECOMP_ABI_CALL(0x000E6A00u, sub_000E6A00); /* call 0x000E6A00 */

loc_00127367: ;
    edx = MEM32(ebx);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(esi * 4 + 0x1DC428);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012739B; /* je: equal / zero */

loc_0012737A: ;
    ecx = esi;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(0x1A50F0);
    MEM32(esi * 4 + 0x1DC428) = eax;
    MEM32(edi + -4) = eax;
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1A50F0) = ecx;

loc_0012739B: ;
    eax = MEM32(ebx);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(MEM32(esi * 4 + 0x1DC368)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi * 4 + 0x1DC368), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001273C9; /* je: equal / zero */

loc_001273A9: ;
    ecx = esi;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(0x1A50F0);
    MEM32(esi * 4 + 0x1DC368) = eax;
    MEM32(edi) = eax;
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1A50F0) = ecx;

loc_001273C9: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A3024) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1A3024 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00127357; /* jl: less (signed <) */

loc_001273DF: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebp + 0x144); PUSH32(esp, 0x001273E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001273DFu); } /* indirect call */
    }

loc_001273E5: ;
    eax = MEM32(ebp + 0x7C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001273EEu); RECOMP_ABI_CALL(0x000FB660u, sub_000FB660); /* call 0x000FB660 */

loc_001273EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp;
    PUSH32(esp, 0x001273F8u); RECOMP_ABI_CALL(0x0011B510u, sub_0011B510); /* call 0x0011B510 */

loc_001273F8: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebp + 0x140); PUSH32(esp, 0x001273FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001273F8u); } /* indirect call */
    }

loc_001273FE: ;
    eax = MEM32(0x1DC3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00127424; /* jne: not equal / not zero */

loc_00127407: ;
    esi = 1;
    edx = esi;
    ecx = 0x40300;
    MEM32(0x1DC3B4) = esi;
    PUSH32(esp, 0x0012741Eu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0012741E: ;
    MEM32(0x1A51E8) = esi;

loc_00127424: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00127430(); return; /* fallthrough 0x00127430 */

}

/**
 * sub_00127430
 * Original: 0x00127430 - 0x0012743B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127430(void)
{

loc_00127430: ;
    MEM32(0x1DC418) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00127440
 * Original: 0x00127440 - 0x001274B6 (118 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127440(void)
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

loc_00127440: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(esi + 4)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C921C)); /* fmul dword ptr [0x1c921c] */
    PUSH32(esp, 0x00127454u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00127454: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C921C)); /* fmul dword ptr [0x1c921c] */
    edi = eax;
    edi = edi & 7;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x00127466u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00127466: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C921C)); /* fmul dword ptr [0x1c921c] */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0012747Cu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0012747C: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE830)); /* fmul dword ptr [0x1ae830] */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 7;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00127492u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00127492: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x001274A3u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_001274A3: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x001274B1u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_001274B1: ;
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001274C0
 * Original: 0x001274C0 - 0x001274F4 (52 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001274C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001274C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001274C8u); RECOMP_ABI_CALL(0x0011B800u, sub_0011B800); /* call 0x0011B800 */

loc_001274C8: ;
    MEM32(esi) = 0x1C6E50;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xAC) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x58) = ecx;
    MEM32(esi + 0x5C) = ecx;
    MEM32(esi + 0x60) = ecx;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x84) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00127500
 * Original: 0x00127500 - 0x00127535 (53 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127500: ;
    eax = MEM32(0x1DC3CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012752C; /* jne: not equal / not zero */

loc_00127509: ;
    edx = 1;
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = 1;
    PUSH32(esp, 0x00127522u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00127522: ;
    MEM32(0x1A51F8) = 1;

loc_0012752C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00127533u); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_00127533: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00127540
 * Original: 0x00127540 - 0x00127572 (50 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127540: ;
    eax = MEM32(0x1DC3CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127569; /* je: equal / zero */

loc_00127549: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = 0;
    PUSH32(esp, 0x0012755Fu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0012755F: ;
    MEM32(0x1A51F8) = 0;

loc_00127569: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00127570u); RECOMP_ABI_CALL(0x0001D270u, sub_0001D270); /* call 0x0001D270 */

loc_00127570: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00127580
 * Original: 0x00127580 - 0x001275B2 (50 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127580: ;
    eax = MEM32(0x1DC3CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001275A9; /* je: equal / zero */

loc_00127589: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = 0;
    PUSH32(esp, 0x0012759Fu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0012759F: ;
    MEM32(0x1A51F8) = 0;

loc_001275A9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001275B0u); RECOMP_ABI_CALL(0x000E73E0u, sub_000E73E0); /* call 0x000E73E0 */

loc_001275B0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001275C0
 * Original: 0x001275C0 - 0x001275F2 (50 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001275C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001275C0: ;
    eax = MEM32(0x1DC3CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001275E9; /* je: equal / zero */

loc_001275C9: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = 0;
    PUSH32(esp, 0x001275DFu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_001275DF: ;
    MEM32(0x1A51F8) = 0;

loc_001275E9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001275F0u); RECOMP_ABI_CALL(0x0002CC40u, sub_0002CC40); /* call 0x0002CC40 */

loc_001275F0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00127600
 * Original: 0x00127600 - 0x0012763C (60 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127600: ;
    eax = MEM32(0x1DC3CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x1DC418) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00127633; /* je: equal / zero */

loc_00127613: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = 0;
    PUSH32(esp, 0x00127629u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00127629: ;
    MEM32(0x1A51F8) = 0;

loc_00127633: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012763Au); RECOMP_ABI_CALL(0x000E75D0u, sub_000E75D0); /* call 0x000E75D0 */

loc_0012763A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00127640
 * Original: 0x00127640 - 0x00127879 (569 bytes, 162 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127640(void)
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

loc_00127640: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127874; /* je: equal / zero */

loc_00127651: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001276DF; /* jle: less or equal (signed <=) */

loc_0012765D: ;
    PUSH32(esp, ebp);
    ebx = 0x1A2EA4;
    ebp = edi + 0x2C;

loc_00127666: ;
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00127670u); RECOMP_ABI_CALL(0x000E6A00u, sub_000E6A00); /* call 0x000E6A00 */

loc_00127670: ;
    ecx = MEM32(esi * 4 + 0x1DC428);
    eax = 3;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001276A4; /* je: equal / zero */

loc_00127683: ;
    ecx = esi;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(0x1A50F0);
    MEM32(esi * 4 + 0x1DC428) = eax;
    MEM32(ebx + -4) = eax;
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1A50F0) = ecx;

loc_001276A4: ;
    _fa = (uint32_t)(MEM32(esi * 4 + 0x1DC368)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi * 4 + 0x1DC368), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001276CD; /* je: equal / zero */

loc_001276AD: ;
    ecx = esi;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(0x1A50F0);
    MEM32(esi * 4 + 0x1DC368) = eax;
    MEM32(ebx) = eax;
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1A50F0) = ecx;

loc_001276CD: ;
    eax = MEM32(edi + 0x28);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00127666; /* jl: less (signed <) */

loc_001276DE: ;
    POP32(esp, ebp);

loc_001276DF: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = 0x1DE768;
    PUSH32(esp, 0x001276EEu); RECOMP_ABI_CALL(0x000192E0u, sub_000192E0); /* call 0x000192E0 */

loc_001276EE: ;
    edx = esp + 0x1C;
    ecx = 0x60;
    PUSH32(esp, 0x001276FCu); RECOMP_ABI_CALL(0x00195820u, sub_00195820); /* call 0x00195820 */

loc_001276FC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00127709u); RECOMP_ABI_CALL(0x000E5430u, sub_000E5430); /* call 0x000E5430 */

loc_00127709: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012770Fu); RECOMP_ABI_CALL(0x0001D270u, sub_0001D270); /* call 0x0001D270 */

loc_0012770F: ;
    eax = MEM32(0x1DC3CC);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127733; /* je: equal / zero */

loc_0012771B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = esi;
    PUSH32(esp, 0x0012772Du); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0012772D: ;
    MEM32(0x1A51F8) = esi;

loc_00127733: ;
    _fa = (uint32_t)(MEM32(0x1DE3E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DE3E8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127747; /* je: equal / zero */

loc_0012773B: ;
    PUSH32(esp, esi);
    MEM32(0x1DE3E8) = esi;
    PUSH32(esp, 0x00127747u); RECOMP_ABI_CALL(0x001931B0u, sub_001931B0); /* call 0x001931B0 */

loc_00127747: ;
    eax = MEM32(edi + 0x28);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edx = edi + 0x3C;
    if (CMP_NE(_fa, _fb)) goto loc_00127764; /* jne: not equal / not zero */

loc_00127758: ;
    ecx = 0x7A;
    PUSH32(esp, 0x00127762u); RECOMP_ABI_CALL(0x001957C0u, sub_001957C0); /* call 0x001957C0 */

loc_00127762: ;
    goto loc_00127787;

loc_00127764: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00127775; /* jne: not equal / not zero */

loc_00127769: ;
    ecx = 0x7A;
    PUSH32(esp, 0x00127773u); RECOMP_ABI_CALL(0x00195820u, sub_00195820); /* call 0x00195820 */

loc_00127773: ;
    goto loc_00127787;

loc_00127775: ;
    ecx = eax * 4;
    PUSH32(esp, ecx);
    ecx = 0x7A;
    PUSH32(esp, 0x00127787u); RECOMP_ABI_CALL(0x001959B0u, sub_001959B0); /* call 0x001959B0 */

loc_00127787: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    edx = MEM32(edi + 0xC);
    eax = MEM32(edi + 4);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    MEM32(esp + 0xC) = edx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0xC;
    ecx = 0x82;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x001277B1u); RECOMP_ABI_CALL(0x001957C0u, sub_001957C0); /* call 0x001957C0 */

loc_001277B1: ;
    edx = edi + 0x14;
    ecx = 0x83;
    PUSH32(esp, 0x001277BEu); RECOMP_ABI_CALL(0x001957C0u, sub_001957C0); /* call 0x001957C0 */

loc_001277BE: ;
    fp_push(MEMF(0x1CF1D4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    edx = 0x1DFA9C;
    fp_push(MEMF(0x1CF1D8)); /* fld float */
    MEM32(0x1DF760) = 9;
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(0x1CF1DC)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(0x1DFA9C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x1DFAA4) = ecx;
    ecx = 0x67;
    MEMF(0x1DFAA0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0012780Bu); RECOMP_ABI_CALL(0x001957C0u, sub_001957C0); /* call 0x001957C0 */

loc_0012780B: ;
    PUSH32(esp, 0x00127810u); RECOMP_ABI_CALL(0x000FE4C0u, sub_000FE4C0); /* call 0x000FE4C0 */

loc_00127810: ;
    PUSH32(esp, 0x00127815u); RECOMP_ABI_CALL(0x000F9540u, sub_000F9540); /* call 0x000F9540 */

loc_00127815: ;
    edx = MEM32(edi + 0x28);
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1B;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00127821u); RECOMP_ABI_CALL(0x000FB660u, sub_000FB660); /* call 0x000FB660 */

loc_00127821: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x50);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012782Fu); RECOMP_ABI_CALL(0x00125590u, sub_00125590); /* call 0x00125590 */

loc_0012782F: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00127836u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00127833u); } /* indirect call */
    }

loc_00127836: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012783Cu); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_0012783C: ;
    eax = MEM32(0x1DC3CC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00127860; /* jne: not equal / not zero */

loc_00127848: ;
    edx = ebx;
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = ebx;
    PUSH32(esp, 0x0012785Au); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0012785A: ;
    MEM32(0x1A51F8) = ebx;

loc_00127860: ;
    PUSH32(esp, esi);
    MEM32(0x1DF760) = esi;
    PUSH32(esp, 0x0012786Cu); RECOMP_ABI_CALL(0x000FB660u, sub_000FB660); /* call 0x000FB660 */

loc_0012786C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x28) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00127874: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00127880
 * Original: 0x00127880 - 0x00128111 (2193 bytes, 664 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00127880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00127880: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x294) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x294));
    esp = esp - 0x294;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(ebx + 0x78) = eax;
    eax = MEM32(edx + 0x10);
    ecx = eax + eax * 2;
    eax = MEM32(edx + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = edx + 0x2C;
    ecx = edi + ecx * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(edx + 0x18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x25C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(edx);
    MEM32(ebx + 4) = eax;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x20) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001278DC; /* jne: not equal / not zero */

loc_001278D5: ;
    eax = 0x1CF5F8;
    goto loc_001278E1;

loc_001278DC: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001278E1: ;
    ecx = ebx + 0x58;
    MEM32(ecx) = eax;
    _fa = (uint32_t)(MEM32(ebx + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x78), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00127900; /* jbe: below or equal (unsigned <=) */

loc_001278EC: ;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001278F8; /* jne: not equal / not zero */

loc_001278F4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001278FD;

loc_001278F8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001278FD: ;
    MEM32(ebx + 0x5C) = eax;

loc_00127900: ;
    _fa = (uint32_t)(MEM32(ebx + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x78), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0012791A; /* jbe: below or equal (unsigned <=) */

loc_00127906: ;
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00127912; /* jne: not equal / not zero */

loc_0012790E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00127917;

loc_00127912: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00127917: ;
    MEM32(ebx + 0x60) = eax;

loc_0012791A: ;
    eax = MEM32(ebx + 0x78);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_001279AC; /* jbe: below or equal (unsigned <=) */

loc_0012792B: ;
    MEM32(esp + 0x10) = ecx;

loc_0012792F: ;
    eax = 0x3F800000;
    MEM32(esp + esi + 0x4C) = eax;
    MEM32(esp + esi + 0x50) = eax;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + esi + 0x64) = ecx;
    MEM32(esp + esi + 0x68) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012798E; /* je: equal / zero */

loc_00127950: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0x1C6B94);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012795Du); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_0012795D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0012798B; /* jne: not equal / not zero */

loc_00127964: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax);
    ecx = 3;
    MEM32(edx + 0x10) = ecx;
    eax = MEM32(eax);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(0x1DC16C);
    edx = MEM32(0x1DC168);
    MEM32(esp + esi + 0x4C) = ecx;
    MEM32(esp + esi + 0x50) = edx;

loc_0012798B: ;
    edx = MEM32(ebp + 8);

loc_0012798E: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(ebx + 0x78);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0012792F; /* jb: below (unsigned <) */

loc_001279AC: ;
    eax = MEM32(edx + 8);
    ecx = MEM32(edx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    SET_LO8(eax, MEM8(ebx + 4));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x1C (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91E8)); /* fmul dword ptr [0x1c91e8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebx + 0x70) = (float)fp_top(); /* fst */
    if (TEST_Z(_fa, _fb)) goto loc_001279E1; /* je: equal / zero */

loc_001279D6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C1EA4)); /* fadd dword ptr [0x1c1ea4] */
    MEMF(ebx + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001279E3;

loc_001279E1: ;
    fp_pop(); /* fstp st(0) */

loc_001279E3: ;
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001279EEu); RECOMP_ABI_CALL(0x0011B500u, sub_0011B500); /* call 0x0011B500 */

loc_001279EE: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127A0Cu); RECOMP_ABI_CALL(0x0011B9D0u, sub_0011B9D0); /* call 0x0011B9D0 */

loc_00127A0C: ;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00127A7F; /* jbe: below or equal (unsigned <=) */

loc_00127A13: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127A1Fu); RECOMP_ABI_CALL(0x0011B640u, sub_0011B640); /* call 0x0011B640 */

loc_00127A1F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00127A7F; /* je: equal / zero */

loc_00127A23: ;
    eax = 0xAAAAAAABu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(ebx + 0x10);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    if (1) _cf = (int)(((edx) >> ((1) - 1)) & 1);
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00127A78; /* jbe: below or equal (unsigned <=) */

loc_00127A33: ;
    edx = MEM32(esp + 0x10);
    SET_LO16(eax, MEM16(edi));
    MEM16(edx) = LO16(eax);
    eax = MEM32(esp + 0x10);
    SET_LO16(edx, MEM16(edi + 4));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    MEM16(eax) = LO16(edx);
    eax = MEM32(esp + 0x10);
    SET_LO16(edx, MEM16(edi + 8));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    MEM16(eax) = LO16(edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x10)) + (uint64_t)(2)) >> 32) & 1);
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 2;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xAAAAAAABu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(ebx + 0x10);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (1) _cf = (int)(((edx) >> ((1) - 1)) & 1);
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00127A33; /* jb: below (unsigned <) */

loc_00127A78: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127A7Fu); RECOMP_ABI_CALL(0x0011B660u, sub_0011B660); /* call 0x0011B660 */

loc_00127A7F: ;
    edi = MEM32(ebx + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00127BCD; /* jbe: below or equal (unsigned <=) */

loc_00127A8A: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127A98u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00127A98: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00127AA6; /* je: equal / zero */

loc_00127A9F: ;
    MEM32(eax) = edi;
    esi = eax + 4;
    goto loc_00127AA8;

loc_00127AA6: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00127AA8: ;
    eax = MEM32(ebx + 0x14);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_00127BAD; /* jbe: below or equal (unsigned <=) */

loc_00127AB9: ;
    edx = MEM32(esp + 0x24);
    ecx = edx + 0x1C;
    eax = esi + 0x10;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00127AC5: ;
    esi = MEM32(ecx + -28);
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    MEM32(eax + -16) = esi;
    esi = MEM32(ecx + -24);
    MEM32(eax + -12) = esi;
    esi = MEM32(ecx + -20);
    MEM32(eax + -8) = esi;
    esi = MEM32(ecx + -16);
    MEM32(eax + -4) = esi;
    esi = MEM32(edx + eax);
    MEM32(eax) = esi;
    esi = MEM32(ecx + -8);
    MEM32(eax + 4) = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + -4)); /* fmul dword ptr [ecx - 4] */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 0x34);
    fp_push(MEMF(esp + 0x68)); /* fld float */
    MEM32(eax + 0xC) = esi;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 0x38);
    MEM32(eax + 0x10) = esi;
    fp_pop(); /* fstp st(0) */
    esi = MEM32(ebx + 0x78);
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00127B57; /* jbe: below or equal (unsigned <=) */

loc_00127B23: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 0x24);
    fp_push(MEMF(esp + 0x70)); /* fld float */
    MEM32(eax + 0x14) = esi;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 0x28);
    fp_pop(); /* fstp st(0) */
    MEM32(eax + 0x18) = esi;
    fp_pop(); /* fstp st(0) */

loc_00127B57: ;
    _fa = (uint32_t)(MEM32(ebx + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x78), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00127B91; /* jbe: below or equal (unsigned <=) */

loc_00127B5D: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0x78)); /* fld float */
    MEM32(eax + 0x1C) = esi;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 0x18);
    fp_pop(); /* fstp st(0) */
    MEM32(eax + 0x20) = esi;
    fp_pop(); /* fstp st(0) */

loc_00127B91: ;
    esi = MEM32(ecx + 0x14);
    MEM32(eax + 8) = esi;
    esi = MEM32(ebx + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x34)) >> 32) & 1);
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x34)) >> 32) & 1);
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00127AC5; /* jb: below (unsigned <) */

loc_00127BA9: ;
    esi = MEM32(esp + 0x10);

loc_00127BAD: ;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x50);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127BBAu); RECOMP_ABI_CALL(0x00125720u, sub_00125720); /* call 0x00125720 */

loc_00127BBA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00127BCA; /* je: equal / zero */

loc_00127BBE: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xFFFFFFFCu)) >> 32) & 1);
    esi = esi + 0xFFFFFFFCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127BC7u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00127BC7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00127BCA: ;
    esi = MEM32(ebp + 8);

loc_00127BCD: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00127D63; /* jbe: below or equal (unsigned <=) */

loc_00127BD8: ;
    ecx = esp + 0x1B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127BE4u); RECOMP_ABI_CALL(0x000F3DD0u, sub_000F3DD0); /* call 0x000F3DD0 */

loc_00127BE4: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_00127D54; /* jbe: below or equal (unsigned <=) */

loc_00127BF7: ;
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x4C)) >> 32) & 1);
    edx = edx + 0x4C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edx;

loc_00127C02: ;
    edi = MEM32(esp + 0x10);
    eax = edi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = edi + -64;
    PUSH32(esp, ecx);
    ecx = esp + 0x1BC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127C1Bu); RECOMP_ABI_CALL(0x000F3E00u, sub_000F3E00); /* call 0x000F3E00 */

loc_00127C1B: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x80)) >> 32) & 1);
    edi = edi + 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00127C23: ;
    edx = MEM32(esp + esi * 8 + 0x4C);
    eax = MEM32(esp + esi * 8 + 0x50);
    ecx = MEM32(esp + esi * 8 + 0x64);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + esi * 8 + 0x68);
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    eax = esp + 0x88;
    ecx = 0x10;
    /* nop */

loc_00127C50: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(8)) >> 32) & 1);
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + -8)); /* fmul dword ptr [edi - 8] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + -4)); /* fmul dword ptr [edi - 4] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x44);
    MEM32(eax + -8) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x48);
    MEM32(eax + -4) = edx;
    fp_pop(); /* fstp st(0) */
    if ((_fa != 0)) goto loc_00127C50; /* jne: not equal / not zero */

loc_00127C89: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + esi * 4 + -76);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = esp + 0xA8;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    ecx = esp + 0x9C;
    PUSH32(esp, ecx);
    edx = esp + 0x98;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = esp + 0x1C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127CCCu); RECOMP_ABI_CALL(0x000F3E30u, sub_000F3E30); /* call 0x000F3E30 */

loc_00127CCC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00127C23; /* jl: less (signed <) */

loc_00127CD6: ;
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x208);
    eax = MEM32(esi + 0x20C);
    edx = MEM32(esi + 0x204);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0x200);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = edx;
    edx = esp + 0x28;
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127D22u); RECOMP_ABI_CALL(0x000F3D20u, sub_000F3D20); /* call 0x000F3D20 */

loc_00127D22: ;
    edx = MEM32(ebx + 8);
    ecx = MEM32(ebx + 0x50);
    PUSH32(esp, edx);
    eax = esp + 0x1B4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127D36u); RECOMP_ABI_CALL(0x001258D0u, sub_001258D0); /* call 0x001258D0 */

loc_00127D36: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebx + 0x18);
    _fb = (uint32_t)(0x25C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x25C)) >> 32) & 1);
    esi = esi + 0x25C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00127C02; /* jb: below (unsigned <) */

loc_00127D54: ;
    ecx = esp + 0x1B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127D60u); RECOMP_ABI_CALL(0x000F55C0u, sub_000F55C0); /* call 0x000F55C0 */

loc_00127D60: ;
    esi = MEM32(ebp + 8);

loc_00127D63: ;
    eax = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00127F03; /* jbe: below or equal (unsigned <=) */

loc_00127D6E: ;
    ecx = esp + 0x1B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127D7Au); RECOMP_ABI_CALL(0x000F3DD0u, sub_000F3DD0); /* call 0x000F3DD0 */

loc_00127D7A: ;
    eax = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_00127EF4; /* jbe: below or equal (unsigned <=) */

loc_00127D8D: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x4C)) >> 32) & 1);
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;

loc_00127D98: ;
    edi = MEM32(esp + 0x10);
    edx = edi + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = edi + -64;
    PUSH32(esp, eax);
    ecx = esp + 0x1BC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127DB1u); RECOMP_ABI_CALL(0x000F3E00u, sub_000F3E00); /* call 0x000F3E00 */

loc_00127DB1: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x80)) >> 32) & 1);
    edi = edi + 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00127DC0: ;
    ecx = MEM32(esp + esi * 8 + 0x4C);
    eax = MEM32(esp + esi * 8 + 0x64);
    edx = MEM32(esp + esi * 8 + 0x50);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + esi * 8 + 0x68);
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x48) = edx;
    eax = esp + 0x88;
    ecx = 0x10;
    /* nop */

loc_00127DF0: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(8)) >> 32) & 1);
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + -8)); /* fmul dword ptr [edi - 8] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + -4)); /* fmul dword ptr [edi - 4] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x3C);
    MEM32(eax + -8) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x40);
    MEM32(eax + -4) = edx;
    fp_pop(); /* fstp st(0) */
    if ((_fa != 0)) goto loc_00127DF0; /* jne: not equal / not zero */

loc_00127E29: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + esi * 4 + -76);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = esp + 0xA8;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    ecx = esp + 0x9C;
    PUSH32(esp, ecx);
    edx = esp + 0x98;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = esp + 0x1C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127E6Cu); RECOMP_ABI_CALL(0x000F3E30u, sub_000F3E30); /* call 0x000F3E30 */

loc_00127E6C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00127DC0; /* jl: less (signed <) */

loc_00127E76: ;
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x208);
    eax = MEM32(esi + 0x20C);
    edx = MEM32(esi + 0x204);
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 0x200);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = edx;
    edx = esp + 0x38;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127EC2u); RECOMP_ABI_CALL(0x000F3D20u, sub_000F3D20); /* call 0x000F3D20 */

loc_00127EC2: ;
    edx = MEM32(ebx + 8);
    ecx = MEM32(ebx + 0x50);
    PUSH32(esp, edx);
    eax = esp + 0x1B4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127ED6u); RECOMP_ABI_CALL(0x00125820u, sub_00125820); /* call 0x00125820 */

loc_00127ED6: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebx + 0x2C);
    _fb = (uint32_t)(0x25C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x25C)) >> 32) & 1);
    esi = esi + 0x25C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00127D98; /* jb: below (unsigned <) */

loc_00127EF4: ;
    ecx = esp + 0x1B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127F00u); RECOMP_ABI_CALL(0x000F55C0u, sub_000F55C0); /* call 0x000F55C0 */

loc_00127F00: ;
    esi = MEM32(ebp + 8);

loc_00127F03: ;
    edi = MEM32(ebp + 0x1C);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 0x20;
    MEM32(esp + 0x14) = ecx;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00127F11: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + ecx * 4 + 0x7C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00127F2F; /* je: equal / zero */

loc_00127F1C: ;
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + ecx * 4 + 0x7C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00127F2F; /* je: equal / zero */

loc_00127F27: ;
    MEM32(esp + 0x14) = 1;

loc_00127F2F: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(4)) >> 32) & 1);
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00127F11; /* jl: less (signed <) */

loc_00127F38: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00127F4A; /* je: equal / zero */

loc_00127F3E: ;
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127F4Au); RECOMP_ABI_CALL(0x0011B670u, sub_0011B670); /* call 0x0011B670 */

loc_00127F4A: ;
    edx = MEM32(ebx + 0x50);
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebx + 0x4C);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax + eax * 2;
    edi = ecx + edx * 4;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0x108;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x108) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127F7Bu); RECOMP_ABI_CALL(0x0012AA20u, sub_0012AA20); /* call 0x0012AA20 */

loc_00127F7B: ;
    _fa = (uint32_t)(MEM32(ebx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x40), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00127F9C; /* jbe: below or equal (unsigned <=) */

loc_00127F80: ;
    PUSH32(esp, edi);
    ecx = esp + 0x10C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127F8Du); RECOMP_ABI_CALL(0x0012AAC0u, sub_0012AAC0); /* call 0x0012AAC0 */

loc_00127F8D: ;
    eax = MEM32(ebx + 0x40);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00127F80; /* jb: below (unsigned <) */

loc_00127F98: ;
    edi = MEM32(esp + 0x1C);

loc_00127F9C: ;
    ecx = esp + 0x108;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127FA8u); RECOMP_ABI_CALL(0x0012ABD0u, sub_0012ABD0); /* call 0x0012ABD0 */

loc_00127FA8: ;
    eax = MEM32(ebx + 0x40);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00127FC9; /* jbe: below or equal (unsigned <=) */

loc_00127FB1: ;
    PUSH32(esp, edi);
    ecx = esp + 0x10C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127FBEu); RECOMP_ABI_CALL(0x0012AD20u, sub_0012AD20); /* call 0x0012AD20 */

loc_00127FBE: ;
    eax = MEM32(ebx + 0x40);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00127FB1; /* jb: below (unsigned <) */

loc_00127FC9: ;
    PUSH32(esp, 0);
    ecx = esp + 0x10C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00127FD7u); RECOMP_ABI_CALL(0x0012AE60u, sub_0012AE60); /* call 0x0012AE60 */

loc_00127FD7: ;
    eax = MEM32(esp + 0x10C);
    ecx = MEM32(esp + 0x110);
    edx = MEM32(esp + 0x114);
    MEM32(ebx + 0x64) = eax;
    eax = MEM32(esp + 0x118);
    MEM32(ebx + 0x68) = ecx;
    MEM32(ebx + 0x6C) = edx;
    MEM32(ebx + 0x74) = eax;
    eax = MEM32(ebx + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00128013; /* je: equal / zero */

loc_00128006: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00128013; /* jne: not equal / not zero */

loc_0012800C: ;
    eax = 9;
    goto loc_0012802E;

loc_00128013: ;
    eax = MEM32(ebx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00128029; /* je: equal / zero */

loc_0012801A: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012802E; /* jne: not equal / not zero */

loc_00128022: ;
    eax = 8;
    goto loc_0012802E;

loc_00128029: ;
    eax = 7;

loc_0012802E: ;
    edx = MEM32(ebx + 4);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00128043; /* je: equal / zero */

loc_00128036: ;
    esi = MEM32(ebx + 0x5C);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA)) >> 32) & 1);
    eax = eax + 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00128043: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00128052; /* je: equal / zero */

loc_00128048: ;
    eax = MEM32(ebx + 0x5C);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xD)) >> 32) & 1);
    eax = eax + 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00128052: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00128063; /* je: equal / zero */

loc_00128057: ;
    ecx = MEM32(ebx + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00128063; /* je: equal / zero */

loc_0012805E: ;
    eax = 0xE;

loc_00128063: ;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00128072; /* je: equal / zero */

loc_0012806D: ;
    eax = 0xF;

loc_00128072: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(eax * 4 + 0x1CF698);
    MEM32(ebx + 0x7C) = eax;
    MEM32(ebx + 0x140) = 0x12AF20;
    if (CMP_EQ(_fa, _fb)) goto loc_001280AA; /* je: equal / zero */

loc_0012808A: ;
    eax = MEM32(ebx + 0x40);
    MEM32(ebx + 0x144) = 0x127600;
    MEM32(ebx + 0x140) = 0x127430;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

loc_001280AA: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001280C5; /* je: equal / zero */

loc_001280AF: ;
    MEM32(ebx + 0x144) = 0x127540;
    eax = MEM32(ebx + 0x40);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

loc_001280C5: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001280E0; /* je: equal / zero */

loc_001280CA: ;
    MEM32(ebx + 0x144) = 0x127580;
    eax = MEM32(ebx + 0x40);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

loc_001280E0: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001280FB; /* je: equal / zero */

loc_001280E5: ;
    MEM32(ebx + 0x144) = 0x1275C0;
    eax = MEM32(ebx + 0x40);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

loc_001280FB: ;
    eax = MEM32(ebx + 0x40);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x144) = 0x127500;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00128120
 * Original: 0x00128120 - 0x001281ED (205 bytes, 73 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128120: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (CMP_EQ(_fa, _fb)) goto loc_00128140; /* je: equal / zero */

loc_0012812F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128139; /* je: equal / zero */

loc_00128134: ;
    PUSH32(esp, 0x00128139u); RECOMP_ABI_CALL(0x00127640u, sub_00127640); /* call 0x00127640 */

loc_00128139: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012817B; /* jne: not equal / not zero */

loc_00128140: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    eax = esi + 4;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(esp + 0x18);
    edx = MEM32(eax);
    MEM32(esi + 0x14) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = edi;

loc_0012817B: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(esp + 0xC);
    MEM32(esi + ecx * 4 + 0x2C) = edx;
    eax = MEM32(esi + 0x28);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + esi + 0x3C;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(eax + 0x10);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + esi + 0x4C;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0x1C);
    MEM32(ecx + 0xC) = eax;
    edx = MEM32(esi + 0x28);
    ecx = MEM32(esp + 0x20);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x28) = edx;
    eax = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001281E1; /* jne: not equal / not zero */

loc_001281DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001281E8; /* jne: not equal / not zero */

loc_001281E1: ;
    ecx = esi;
    PUSH32(esp, 0x001281E8u); RECOMP_ABI_CALL(0x00127640u, sub_00127640); /* call 0x00127640 */

loc_001281E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001281F0
 * Original: 0x001281F0 - 0x001281F9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001281F0(void)
{

loc_001281F0: ;
    eax = ecx;
    MEM32(eax) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00128200
 * Original: 0x00128200 - 0x00128226 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128200: ;
    eax = MEM32(esp + 4);
    edx = ZX8(MEM8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = 1;
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00128225; /* jns: not sign (positive) */

loc_00128210: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00128225; /* je: equal / zero */

loc_00128215: ;
    PUSH32(esp, esi);

loc_00128216: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = 0x80;
    ecx = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00128216; /* jne: not equal / not zero */

loc_00128224: ;
    POP32(esp, esi);

loc_00128225: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00128230
 * Original: 0x00128230 - 0x0012826F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128230: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00128241; /* jge: greater or equal (signed >=) */

loc_0012823B: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00128241: ;
    ecx = 7;

loc_00128246: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00128246; /* jge: greater or equal (signed >=) */

loc_00128252: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xB (32-bit) */
    eax = 2;
    if (CMP_LE(_fas, _fbs)) goto loc_0012826E; /* jle: less or equal (signed <=) */

loc_0012825C: ;
    _fb = (uint32_t)(0xFFFFFFF4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012826E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00128270
 * Original: 0x00128270 - 0x001282CF (95 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128270: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00128282u); RECOMP_ABI_CALL(0x0012AED0u, sub_0012AED0); /* call 0x0012AED0 */

loc_00128282: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012828Au); RECOMP_ABI_CALL(0x00128200u, sub_00128200); /* call 0x00128200 */

loc_0012828A: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    edi = eax;
    PUSH32(esp, 0x00128296u); RECOMP_ABI_CALL(0x00128230u, sub_00128230); /* call 0x00128230 */

loc_00128296: ;
    ebx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001282B9; /* je: equal / zero */

loc_0012829F: ;
    PUSH32(esp, ebp);
    ebp = edi + esi;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001282A9u); RECOMP_ABI_CALL(0x00128830u, sub_00128830); /* call 0x00128830 */

loc_001282A9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    edx = ebx + esi;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001282B5u); RECOMP_ABI_CALL(0x00129C80u, sub_00129C80); /* call 0x00129C80 */

loc_001282B5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);

loc_001282B9: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001282C4u); RECOMP_ABI_CALL(0x00129C70u, sub_00129C70); /* call 0x00129C70 */

loc_001282C4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001282D0
 * Original: 0x001282D0 - 0x001282ED (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001282D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001282D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001282D8u); RECOMP_ABI_CALL(0x00128A20u, sub_00128A20); /* call 0x00128A20 */

loc_001282D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x1C6E64;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x3C) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001282F0
 * Original: 0x001282F0 - 0x001282F8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001282F0(void)
{

loc_001282F0: ;
    MEM32(ecx + 0x4C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00128300
 * Original: 0x00128300 - 0x0012836B (107 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128300: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128354; /* jne: not equal / not zero */

loc_0012830C: ;
    edx = MEM32(ecx + 8);
    esi = MEM32(ecx);
    eax = edx + edx * 8;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = esi + eax * 4;
    MEM32(ecx + 8) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00128331; /* jge: greater or equal (signed >=) */

loc_0012831F: ;
    /* nop */

loc_00128320: ;
    edx = MEM32(ecx + 4);
    esi = MEM32(ecx + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ecx + 8) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00128320; /* jl: less (signed <) */

loc_00128331: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00128368; /* jl: less (signed <) */

loc_00128339: ;
    /* nop */

loc_00128340: ;
    edi = MEM32(ecx + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 8) = edi;
    edx = MEM32(ecx + 4);
    esi = edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00128340; /* jge: greater or equal (signed >=) */

loc_00128351: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00128354: ;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = esi;
    eax = edx + edx * 8;
    edx = MEM32(ecx);
    eax = edx + eax * 4;

loc_00128368: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00128370
 * Original: 0x00128370 - 0x001283D7 (103 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128370: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00128395; /* je: equal / zero */

loc_00128382: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012838Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0012838B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3C) = 0;

loc_00128395: ;
    edi = MEM32(esi + 4);
    ecx = edi + edi * 8;
    edx = ecx * 4 + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001283A8u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_001283A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001283B6; /* je: equal / zero */

loc_001283AF: ;
    MEM32(eax) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001283B8;

loc_001283B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001283B8: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 0x3C) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = ecx;
    MEM32(esi + 0x48) = 0;
    MEM32(esi + 0x4C) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001283E0
 * Original: 0x001283E0 - 0x001284E2 (258 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001283E0(void)
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

loc_001283E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00128461; /* jle: less or equal (signed <=) */

loc_001283EC: ;
    /* nop */

loc_001283F0: ;
    eax = MEM32(ecx + 0x48);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 0x44)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 0x44))); }
    eax = edx + edx * 8;
    edx = MEM32(ecx + 0x40);
    esi = edx + eax * 4;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    edx = esi + 0x18;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00128440; /* jnp: not parity */

loc_00128415: ;
    fp_push(MEMF(edx)); /* fld float */
    MEM32(esp + 8) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = esp + 8;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0012843A; /* jnp: not parity */

loc_00128438: ;
    eax = edx;

loc_0012843A: ;
    eax = MEM32(eax);
    MEM32(edx) = eax;
    goto loc_00128457;

loc_00128440: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x10)); /* fadd dword ptr [esi + 0x10] */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1C)); /* fadd dword ptr [esi + 0x1c] */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */

loc_00128457: ;
    eax = MEM32(ecx + 0x4C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001283F0; /* jl: less (signed <) */

loc_0012845F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */

loc_00128461: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001284DC; /* je: equal / zero */

loc_00128463: ;
    eax = MEM32(ecx + 0x48);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 0x44)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 0x44))); }
    eax = MEM32(ecx + 0x48);
    edi = MEM32(ecx + 0x40);
    esi = edx + edx * 8;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    fp_push(MEMF(edi + esi * 4 + 0x10)); /* fld float */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 0x44)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 0x44))); }
    eax = edi;
    edx = edx + edx * 8;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + edx * 4 + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + edx*4 + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001284DC; /* jne: not equal / not zero */

loc_0012848B: ;
    eax = MEM32(ecx + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001284DC; /* je: equal / zero */

loc_00128492: ;
    edx = MEM32(ecx + 0x48);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x48) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001284B1; /* jge: greater or equal (signed >=) */

loc_0012849F: ;
    /* nop */

loc_001284A0: ;
    edx = MEM32(ecx + 0x44);
    esi = MEM32(ecx + 0x48);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x48) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_001284A0; /* jl: less (signed <) */

loc_001284B1: ;
    eax = MEM32(ecx + 0x44);
    _fa = (uint32_t)(MEM32(ecx + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x48), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001284D1; /* jl: less (signed <) */

loc_001284B9: ;
    /* nop */

loc_001284C0: ;
    esi = MEM32(ecx + 0x48);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 0x48) = esi;
    eax = MEM32(ecx + 0x44);
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001284C0; /* jge: greater or equal (signed >=) */

loc_001284D1: ;
    eax = MEM32(ecx + 0x4C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00128463; /* jne: not equal / not zero */

loc_001284DC: ;
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
 * sub_001284F0
 * Original: 0x001284F0 - 0x00128798 (680 bytes, 201 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001284F0(void)
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

loc_001284F0: ;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x4C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 8) = 0x1AF33C;
    MEM32(esp + 0xC) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0012878C; /* jle: less or equal (signed <=) */

loc_00128513: ;
    eax = esp + 0x90;
    PUSH32(esp, eax);
    ecx = 0x1DE768;
    PUSH32(esp, 0x00128525u); RECOMP_ABI_CALL(0x000192E0u, sub_000192E0); /* call 0x000192E0 */

loc_00128525: ;
    edx = esp + 0x90;
    ecx = 0x60;
    PUSH32(esp, 0x00128536u); RECOMP_ABI_CALL(0x00195820u, sub_00195820); /* call 0x00195820 */

loc_00128536: ;
    PUSH32(esp, 0x0012853Bu); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_0012853B: ;
    ecx = MEM32(edi + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00128547u); RECOMP_ABI_CALL(0x00128A60u, sub_00128A60); /* call 0x00128A60 */

loc_00128547: ;
    _fa = (uint32_t)(MEM32(edi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x4C), ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00128780; /* jle: less or equal (signed <=) */

loc_00128550: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 4;

loc_00128557: ;
    eax = MEM32(edi + 0x48);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(edi + 0x44)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(edi + 0x44))); }
    eax = MEM32(edi + 0x40);
    edx = edx + edx * 8;
    fp_push(MEMF(eax + edx * 4 + 0x18)); /* fld float */
    esi = eax + edx * 4;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00128772; /* jp: parity */

loc_0012857E: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00128772; /* je: equal / zero */

loc_0012858F: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    edx = ZX8(MEM8(esi + 0xF));
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x14)); /* fdiv dword ptr [esi + 0x14] */
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x20) = ecx;
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) - fp_top()); /* fsubr dword ptr [0x1c91d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x34)); /* fimul dword ptr [esp + 0x34] */
    PUSH32(esp, 0x001285B3u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_001285B3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    MEM8(esp + 0x2B) = LO8(eax);
    PUSH32(esp, 0);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0x001285D0u); RECOMP_ABI_CALL(0x000FAF60u, sub_000FAF60); /* call 0x000FAF60 */

loc_001285D0: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    eax = MEM32(esp + 0x28);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x88) = (float)fp_top(); /* fst */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    fp_push(MEMF(esi + 4)); /* fld float */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x1C);
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x88);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x1C);
    edx = MEM32(edi + 0x2C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(edi + 0x30);
    eax = MEM32(esp + 0x20);
    MEM32(edx + 0x20) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx + 0x18) = eax;
    fp_push(MEMF(edi + 0x30)); /* fld float */
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(edi + 0x34);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    MEM32(esp + 0x24) = edx;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    edx = MEM32(esp + 0x14);
    fp_top() = -fp_top(); /* fchs */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x64);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 8) = edx;
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x1C);
    MEM32(edx + 0x1C) = ecx;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x1C);
    MEM32(edx + 0x20) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx + 0x18) = eax;
    fp_push(MEMF(edi + 0x38)); /* fld float */
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(edi + 0x2C);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esi + 0x1C);
    MEM32(esp + 0x94) = edx;
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_push(MEMF(esp + 0x94)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x4C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 8) = edx;
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x2C);
    MEM32(edx + 0x1C) = ecx;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x30);
    MEM32(edx + 0x20) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ecx;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    edx = MEM32(esi + 0x1C);
    fp_push(MEMF(esi + 4)); /* fld float */
    MEM32(esp + 0x58) = edx;
    edx = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x70);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 8) = edx;
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(edi + 0x34);
    MEM32(edx + 0x1C) = ecx;
    ecx = MEM32(edi + 0x38);
    edx = MEM32(esp + 0x1C);
    MEM32(edx + 0x20) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x00128772u); RECOMP_ABI_CALL(0x00019D40u, sub_00019D40); /* call 0x00019D40 */

loc_00128772: ;
    eax = MEM32(edi + 0x4C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00128557; /* jl: less (signed <) */

loc_0012877E: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00128780: ;
    ecx = edi;
    PUSH32(esp, 0x00128787u); RECOMP_ABI_CALL(0x00128AF0u, sub_00128AF0); /* call 0x00128AF0 */

loc_00128787: ;
    PUSH32(esp, 0x0012878Cu); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_0012878C: ;
    eax = MEM32(edi + 0x4C);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001287A0
 * Original: 0x001287A0 - 0x001287E9 (73 bytes, 21 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001287A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001287A0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001287A8u); RECOMP_ABI_CALL(0x00128300u, sub_00128300); /* call 0x00128300 */

loc_001287A8: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0xC) = edx;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001287F0
 * Original: 0x001287F0 - 0x00128830 (64 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001287F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001287F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1C6E64;
    if (CMP_EQ(_fa, _fb)) goto loc_00128813; /* je: equal / zero */

loc_00128800: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00128809u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00128809: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3C) = 0;

loc_00128813: ;
    ecx = esi;
    PUSH32(esp, 0x0012881Au); RECOMP_ABI_CALL(0x00128A10u, sub_00128A10); /* call 0x00128A10 */

loc_0012881A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012882A; /* je: equal / zero */

loc_00128821: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00128827u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00128827: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012882A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128804
 * Original: 0x00128804 - 0x00128830 (44 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128804(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128804: ;
    PUSH32(esp, 0x00128809u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00128809: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3C) = 0;
    ecx = esi;
    PUSH32(esp, 0x0012881Au); RECOMP_ABI_CALL(0x00128A10u, sub_00128A10); /* call 0x00128A10 */

loc_0012881A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012882A; /* je: equal / zero */

loc_00128821: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00128827u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00128827: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012882A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128830
 * Original: 0x00128830 - 0x0012884A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128830: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128849; /* je: equal / zero */

loc_0012883C: ;
    /* nop */

loc_00128840: ;
    SET_LO8(edx, MEM8(eax + ecx + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128840; /* jne: not equal / not zero */

loc_00128849: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00128850
 * Original: 0x00128850 - 0x00128872 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128850: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1C6E84;
    if (CMP_EQ(_fa, _fb)) goto loc_00128870; /* je: equal / zero */

loc_00128860: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00128866u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00128866: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00128870: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00128880
 * Original: 0x00128880 - 0x0012888E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128880(void)
{

loc_00128880: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);

loc_00128885: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0012888Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128889u); } /* indirect call */
    }

loc_0012888C: ;
    goto loc_00128885;

}

/**
 * sub_00128890
 * Original: 0x00128890 - 0x001288CF (63 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128890: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = 0x1C6E84;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0x10) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001288C9; /* jne: not equal / not zero */

loc_001288B9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001288C9; /* je: equal / zero */

loc_001288BD: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001288C3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_001288C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;

loc_001288C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001288D0
 * Original: 0x001288D0 - 0x00128906 (54 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001288D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001288D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1C6E84;
    if (CMP_EQ(_fa, _fb)) goto loc_001288F0; /* je: equal / zero */

loc_001288E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001288E6u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001288E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_001288F0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00128900; /* je: equal / zero */

loc_001288F7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001288FDu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_001288FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00128900: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128910
 * Original: 0x00128910 - 0x0012892A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128910: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x1C6EA4;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00128930
 * Original: 0x00128930 - 0x001289EA (186 bytes, 77 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128930(void)
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

loc_00128930: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 1;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebp;
    eax = ebx;

loc_00128943: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    esi = MEM32(eax + 0x44);
    if (CMP_EQ(_fa, _fb)) goto loc_0012894E; /* je: equal / zero */

loc_0012894A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00128957;

loc_0012894E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012896B; /* je: equal / zero */

loc_00128952: ;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x40), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128973; /* jne: not equal / not zero */

loc_00128957: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(eax + 0x6C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00128978; /* jne: not equal / not zero */

loc_0012895E: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax;
    eax = MEM32(eax + 0x5C);
    eax = MEM32(eax + 4);
    goto loc_00128943;

loc_0012896B: ;
    MEM32(ecx + 0x10) = edi;
    MEM32(ecx + 8) = ebp;
    goto loc_0012897E;

loc_00128973: ;
    MEM32(ecx + 0x10) = edi;
    goto loc_0012897E;

loc_00128978: ;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012897E: ;
    edx = ebp;
    eax = ebx;

loc_00128982: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    esi = MEM32(eax + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_0012898D; /* je: equal / zero */

loc_00128989: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00128996;

loc_0012898D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001289A9; /* je: equal / zero */

loc_00128991: ;
    _fa = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x44), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001289B1; /* jne: not equal / not zero */

loc_00128996: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(eax + 0x6C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001289B6; /* jne: not equal / not zero */

loc_0012899D: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax;
    eax = MEM32(eax + 0x4C);
    eax = MEM32(eax);
    goto loc_00128982;

loc_001289A9: ;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 8) = ebp;
    goto loc_001289BC;

loc_001289B1: ;
    MEM32(ecx + 0xC) = edi;
    goto loc_001289BC;

loc_001289B6: ;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001289BC: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001289E7; /* je: equal / zero */

loc_001289C8: ;
    goto loc_001289D0;

    /* nop */

loc_001289D0: ;
    edx = MEM32(eax + 0x5C);
    fp_push(MEMF(edx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x14)); /* fadd dword ptr [ecx + 0x14] */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(eax + 0x5C);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001289D0; /* jne: not equal / not zero */

loc_001289E7: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001289F0
 * Original: 0x001289F0 - 0x00128A0F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001289F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001289F0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C6EA4;
    if (TEST_Z(_fa, _fb)) goto loc_00128A09; /* je: equal / zero */

loc_00128A00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00128A06u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00128A06: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00128A09: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128A10
 * Original: 0x00128A10 - 0x00128A17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128A10(void)
{

loc_00128A10: ;
    MEM32(ecx) = 0x1C6EB0;
    esp += 4; return; /* ret */

}

/**
 * sub_00128A20
 * Original: 0x00128A20 - 0x00128A34 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128A20: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x1C6EB0;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00128A40
 * Original: 0x00128A40 - 0x00128A5F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128A40: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C6EB0;
    if (TEST_Z(_fa, _fb)) goto loc_00128A59; /* je: equal / zero */

loc_00128A50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00128A56u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00128A56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00128A59: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128A60
 * Original: 0x00128A60 - 0x00128ADA (122 bytes, 31 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128A60: ;
    eax = MEM32(0x1DC3CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128A89; /* je: equal / zero */

loc_00128A69: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = 0;
    PUSH32(esp, 0x00128A7Fu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00128A7F: ;
    MEM32(0x1A51F8) = 0;

loc_00128A89: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(0x1DC418) = 8;
    if (CMP_A(_fa, _fb)) goto loc_00128AC8; /* ja: above (unsigned >) */

loc_00128A9C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x128ADC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00128AA3u) goto loc_00128AA3;
    if (_jt == 0x00128AACu) goto loc_00128AAC;
    if (_jt == 0x00128AB5u) goto loc_00128AB5;
    if (_jt == 0x00128ABEu) goto loc_00128ABE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00128AA3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00128AAAu); RECOMP_ABI_CALL(0x0001D270u, sub_0001D270); /* call 0x0001D270 */

loc_00128AAA: ;
    goto loc_00128AC5;

loc_00128AAC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00128AB3u); RECOMP_ABI_CALL(0x000E73E0u, sub_000E73E0); /* call 0x000E73E0 */

loc_00128AB3: ;
    goto loc_00128AC5;

loc_00128AB5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00128ABCu); RECOMP_ABI_CALL(0x0002CC40u, sub_0002CC40); /* call 0x0002CC40 */

loc_00128ABC: ;
    goto loc_00128AC5;

loc_00128ABE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00128AC5u); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_00128AC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00128AC8: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00128AD4u); RECOMP_ABI_CALL(0x000E6A00u, sub_000E6A00); /* call 0x000E6A00 */

loc_00128AD4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00128AF0
 * Original: 0x00128AF0 - 0x00128B31 (65 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128AF0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00128AF7u); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_00128AF7: ;
    eax = MEM32(0x1DC3CC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128B26; /* jne: not equal / not zero */

loc_00128B03: ;
    edx = 1;
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = 1;
    PUSH32(esp, 0x00128B1Cu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00128B1C: ;
    MEM32(0x1A51F8) = 1;

loc_00128B26: ;
    MEM32(0x1DC418) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00128B40
 * Original: 0x00128B40 - 0x00128B9A (90 bytes, 24 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128B40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x2210);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esi + 0x2210) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00128B61; /* jne: not equal / not zero */

loc_00128B57: ;
    MEM32(esi + 0x2210) = 0;

loc_00128B61: ;
    eax = MEM32(esi + 0x2220);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2210);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x110);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ecx + esi + 0xC;
    PUSH32(esp, 0x00128B8Cu); RECOMP_ABI_CALL(0x0012AF30u, sub_0012AF30); /* call 0x0012AF30 */

loc_00128B8C: ;
    MEM32(esi + 0x221C) = 1;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00128BA0
 * Original: 0x00128BA0 - 0x00128BBF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128BA0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C6EE4;
    if (TEST_Z(_fa, _fb)) goto loc_00128BB9; /* je: equal / zero */

loc_00128BB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00128BB6u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00128BB6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00128BB9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128BC0
 * Original: 0x00128BC0 - 0x00128C18 (88 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128BC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x1C6EE8;
    edi = esi + 0xC;
    ebx = 0x20;

loc_00128BD3: ;
    ecx = edi;
    PUSH32(esp, 0x00128BDAu); RECOMP_ABI_CALL(0x0012B200u, sub_0012B200); /* call 0x0012B200 */

loc_00128BDA: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x110;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00128BD3; /* jne: not equal / not zero */

loc_00128BE3: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x2214) = ecx;
    MEM32(esi + 0x2210) = ecx;
    ecx = MEM32(0x1C6ED4);
    MEM32(esi + 0x221C) = eax;
    MEM32(esi + 0x220C) = eax;
    MEM32(esi + 0x2224) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x2220) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00128C20
 * Original: 0x00128C20 - 0x00128C5A (58 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128C20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(ebx) = 0x1C6EE8;
    esi = ebx + 0x220C;
    edi = 0x20;
    goto loc_00128C40;

    /* nop */
    /* nop */

loc_00128C40: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x110;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x00128C4Du); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00128C4D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00128C40; /* jne: not equal / not zero */

loc_00128C50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = 0x1C6EE4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00128C60
 * Original: 0x00128C60 - 0x00128CC6 (102 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128C60: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 0x220C) = 0;
    edi = esi + 0xC;
    ebp = 0x20;
    /* nop */

loc_00128C80: ;
    eax = MEM32(edi + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128CA3; /* je: equal / zero */

loc_00128C8A: ;
    eax = MEM32(0x1C6EDC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1CF6D8);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00128C9Du); RECOMP_ABI_CALL(0x0012B030u, sub_0012B030); /* call 0x0012B030 */

loc_00128C9D: ;
    MEM32(esi + 0x220C) = MEM32(esi + 0x220C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x220C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00128CA3: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x110;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00128C80; /* jne: not equal / not zero */

loc_00128CAC: ;
    eax = MEM32(esi + 0x220C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, edi);
    MEM32(esi + 0x221C) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128CD0
 * Original: 0x00128CD0 - 0x00128DAE (222 bytes, 86 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128CD0(void)
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

loc_00128CD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    fp_push(MEMF(edi + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(edi + 4)); /* fld float */
    esi = ecx;
    fp_push(MEMF(edi)); /* fld float */
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
    PUSH32(esp, 0x00128CFFu); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_00128CFF: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C6EE0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c6ee0] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00128D16; /* jp: parity */

loc_00128D0F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00128D16: ;
    eax = MEM32(esi + 0x220C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128D39; /* jne: not equal / not zero */

loc_00128D20: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00128D32u); RECOMP_ABI_CALL(0x00128B40u, sub_00128B40); /* call 0x00128B40 */

loc_00128D32: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00128D39: ;
    edx = MEM32(esi + 0x2210);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x110);
    ecx = edx + esi;
    edx = MEM32(esp + 0xC);
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xEC)); /* fsub dword ptr [ecx + 0xec] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xF0)); /* fsub dword ptr [ecx + 0xf0] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xF4)); /* fsub dword ptr [ecx + 0xf4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C6ED8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c6ed8] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_00128D9E; /* jne: not equal / not zero */

loc_00128D89: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00128D97u); RECOMP_ABI_CALL(0x00128B40u, sub_00128B40); /* call 0x00128B40 */

loc_00128D97: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00128D9E: ;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00128DA7u); RECOMP_ABI_CALL(0x0012B000u, sub_0012B000); /* call 0x0012B000 */

loc_00128DA7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00128DB0
 * Original: 0x00128DB0 - 0x00128E94 (228 bytes, 55 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128DB0(void)
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

loc_00128DB0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    esi = ecx;
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00128DD3u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00128DD3: ;
    SET_LO16(eax, MEM16(esp + 6));
    ecx = ZX8(HI8(eax));
    MEM32(esp + 8) = ecx;
    edx = ZX8(LO8(eax));
    fp_push((double)SMEM32(esp + 8)); /* fild */
    eax = MEM32(esp + 4);
    MEM32(esp + 8) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91E4)); /* fmul dword ptr [0x1c91e4] */
    ecx = ZX8(HI8(eax));
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = ecx;
    edx = ZX8(LO8(eax));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = edx;
    edx = esp + 0xC;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    ecx = 0x65;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AFF08)); /* fmul dword ptr [0x1aff08] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x1C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00128E48u); RECOMP_ABI_CALL(0x001957C0u, sub_001957C0); /* call 0x001957C0 */

loc_00128E48: ;
    MEM32(0x1DF760) = 0;
    MEM32(0x1DF438) = 0;
    MEM32(0x1DF764) = 0;
    PUSH32(esp, 0x00128E6Bu); RECOMP_ABI_CALL(0x000F95A0u, sub_000F95A0); /* call 0x000F95A0 */

loc_00128E6B: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x00128E72u); RECOMP_ABI_CALL(0x000FB660u, sub_000FB660); /* call 0x000FB660 */

loc_00128E72: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00128E7Du); RECOMP_ABI_CALL(0x000FAC60u, sub_000FAC60); /* call 0x000FAC60 */

loc_00128E7D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00128E88u); RECOMP_ABI_CALL(0x000FAD00u, sub_000FAD00); /* call 0x000FAD00 */

loc_00128E88: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000FA850(); return; /* tail jmp 0x000FA850 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00128EA0
 * Original: 0x00128EA0 - 0x00129246 (934 bytes, 272 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128EA0(void)
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

loc_00128EA0: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = ZX8(MEM8(ebx + 0x221B));
    MEM32(esp + 0x28) = eax;
    eax = MEM32(0x1DE3E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x2210);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91E4)); /* fmul dword ptr [0x1c91e4] */
    MEM32(esp + 0x50) = ebx;
    ebp = edi + 1;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00128EE8; /* je: equal / zero */

loc_00128ED7: ;
    PUSH32(esp, 0);
    MEM32(0x1DE3E8) = 0;
    PUSH32(esp, 0x00128EE8u); RECOMP_ABI_CALL(0x001931B0u, sub_001931B0); /* call 0x001931B0 */

loc_00128EE8: ;
    edx = MEM32(ebx + 0x220C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x30) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0012923F; /* jle: less or equal (signed <=) */

loc_00128EFD: ;
    PUSH32(esp, esi);
    MEM32(esp + 0x38) = 0x3F800000;
    MEM32(esp + 0x3C) = 0x3F800000;
    esi = ebx + 4;
    goto loc_00128F20;

loc_00128F13: ;
    edi = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x10);
    goto loc_00128F20;

    /* nop */

loc_00128F20: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebp;
    if ((_fas >= 0)) goto loc_00128F3C; /* jns: not sign (positive) */

loc_00128F27: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + ebp + 0x20;
    MEM32(esp + 0x10) = edx;
    ebp = edx;

loc_00128F3C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00128F51; /* jl: less (signed <) */

loc_00128F41: ;
    eax = ebp;
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ebp;

loc_00128F51: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = edi;
    if ((_fas >= 0)) goto loc_00128F6D; /* jns: not sign (positive) */

loc_00128F58: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx >> 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edi + edx + 0x20;
    MEM32(esp + 0x14) = eax;
    edi = eax;

loc_00128F6D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00128F82; /* jl: less (signed <) */

loc_00128F72: ;
    edx = edi;
    edx = edx >> 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = edi;

loc_00128F82: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x110);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x110);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebx + 0x2220)); /* fdiv dword ptr [ebx + 0x2220] */
    eax = ebx + ebp + 0xC;
    MEM32(esp + 0x20) = eax;
    ebp = edi + ebx + 0xC;
    MEM32(esp + 0x50) = ebp;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1C91D0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = esp + 0x24;
    if (TEST_Z(_fa, _fb)) goto loc_00128FD2; /* je: equal / zero */

loc_00128FCE: ;
    eax = esp + 0x38;

loc_00128FD2: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1C91D0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = esp + 0x24;
    if (TEST_Z(_fa, _fb)) goto loc_00128FF8; /* je: equal / zero */

loc_00128FF4: ;
    eax = esp + 0x3C;

loc_00128FF8: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    edi = MEM32(ebp + 0x104);
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    edi = edi << 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    MEM32(ebx + 8) = edi;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1C91D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    eax = MEM32(ebx + 0x220C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x44) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x44)); /* fild */
    fp_push((double)SMEM32(esp + 0x48)); /* fild */
    MEM32(esp + 0x48) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) - fp_top()); /* fsubr dword ptr [0x1c91d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF318)); /* fmul dword ptr [0x1af318] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x48)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) - fp_top()); /* fsubr dword ptr [0x1c91d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF318)); /* fmul dword ptr [0x1af318] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00129074u); RECOMP_ABI_CALL(0x000FAF60u, sub_000FAF60); /* call 0x000FAF60 */

loc_00129074: ;
    ecx = MEM32(0x1DC394);
    edx = ecx + edi + -2;
    MEM32(0x1DC394) = edx;
    eax = MEM32(ebx + 0x2218);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ebp + 0x104);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00129220; /* jle: less or equal (signed <=) */

loc_001290A9: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ecx = MEM32(esp + 0x30);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE830)); /* fmul dword ptr [0x1ae830] */
    ebx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x44);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x48) = 0x437F0000;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    MEM32(esp + 0x58) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE830)); /* fmul dword ptr [0x1ae830] */
    MEM32(esp + 0x4C) = 0x437F0000;
    MEM32(esp + 0x60) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    /* nop */

loc_001290F0: ;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x44)); /* fidiv dword ptr [esp + 0x44] */
    ecx = MEM32(eax + 0x104);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x44) = ecx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x44)); /* fidiv dword ptr [esp + 0x44] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AE830)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1ae830] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = esp + 0x48;
    if (TEST_Z(_fa, _fb)) goto loc_00129131; /* je: equal / zero */

loc_0012912D: ;
    eax = esp + 0x2C;

loc_00129131: ;
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, 0x00129138u); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_00129138: ;
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    edx = MEM32(ebp);
    fp_push(MEMF(ebp + -4)); /* fld float */
    MEM8(esp + 0x1B) = LO8(eax);
    eax = MEM32(esi);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edx;
    MEM32(eax + 8) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEM32(esp + 0x70) = edx;
    edx = MEM32(esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AE830)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1ae830] */
    MEM32(edx + 0x18) = eax;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x5C);
    MEM32(ecx + 0x1C) = edx;
    MEM32(ecx + 0x20) = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    edi = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = esp + 0x4C;
    if (TEST_Z(_fa, _fb)) goto loc_00129196; /* je: equal / zero */

loc_00129192: ;
    eax = esp + 0x30;

loc_00129196: ;
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, 0x0012919Du); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0012919D: ;
    fp_push(MEMF(ebx + -8)); /* fld float */
    fp_push(MEMF(ebx + -4)); /* fld float */
    edx = MEM32(ebx);
    ecx = MEM32(esp + 0x44);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esp + 0x1B) = LO8(eax);
    eax = edx;
    MEM32(edi + 8) = eax;
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x64) = ecx;
    ecx = MEM32(esi);
    MEM32(esp + 0x7C) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 0x18) = edx;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x64);
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = edx;
    edi = MEM32(esi);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edi;
    ecx = MEM32(eax + 0x104);
    eax = MEM32(esp + 0x1C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001291FE; /* jge: greater or equal (signed >=) */

loc_001291F4: ;
    ecx = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001291FE: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x50);
    eax = MEM32(edx + 0x104);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001290F0; /* jl: less (signed <) */

loc_0012921C: ;
    ebx = MEM32(esp + 0x54);

loc_00129220: ;
    ecx = ebx;
    PUSH32(esp, 0x00129227u); RECOMP_ABI_CALL(0x00128DB0u, sub_00128DB0); /* call 0x00128DB0 */

loc_00129227: ;
    eax = MEM32(ebx + 0x220C);
    ecx = MEM32(esp + 0x34);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x34) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00128F13; /* jl: less (signed <) */

loc_0012923E: ;
    POP32(esp, esi);

loc_0012923F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00129250
 * Original: 0x00129250 - 0x00129261 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129250(void)
{

loc_00129250: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00129270
 * Original: 0x00129270 - 0x00129284 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129270(void)
{

loc_00129270: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x1F26CC) = eax;
    MEM32(0x1F26D0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00129290
 * Original: 0x00129290 - 0x00129298 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129290(void)
{

loc_00129290: ;
    MEM32(ecx + 0x48) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001292A0
 * Original: 0x001292A0 - 0x001292B7 (23 bytes, 7 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001292A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001292A0: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x58)); /* fadd dword ptr [ecx + 0x58] */
    MEM32(ecx + 0x54) = eax;
    eax = MEM32(ecx + 4);
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001292C0
 * Original: 0x001292C0 - 0x00129310 (80 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001292C0(void)
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

loc_001292C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    ecx = esp;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001292F3; /* jnp: not parity */

loc_001292EF: ;
    ecx = esp + 8;

loc_001292F3: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00129306; /* jp: parity */

loc_00129300: ;
    fp_push(MEMF(ecx)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00129306: ;
    eax = esp + 4;
    fp_push(MEMF(eax)); /* fld float */
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
 * sub_00129310
 * Original: 0x00129310 - 0x00129346 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129310(void)
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

loc_00129310: ;
    fp_push(MEMF(0x1C6EF0)); /* fld float */
    edx = MEM32(0x1C6EF0);
    eax = ecx;
    fp_top() = -fp_top(); /* fchs */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0x2C) = (float)fp_top(); /* fst */
    MEMF(eax + 0x30) = (float)fp_top(); /* fst */
    MEM32(eax + 0x20) = edx;
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00129350
 * Original: 0x00129350 - 0x001293C2 (114 bytes, 41 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129350: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012935C; /* jne: not equal / not zero */

loc_00129357: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 24; return; /* ret 20 */

loc_0012935C: ;
    eax = edx;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x50);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 8);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0xC);
    esi = MEM32(edx);
    MEM32(eax + 0xC) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 0x10) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x14);
    edx = MEM32(edx);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x34) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x38) = edx;
    eax = MEM32(esp + 0x10);
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0xC) = eax;
    eax = 1;
    MEM32(ecx + 0x48) = eax;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001293D0
 * Original: 0x001293D0 - 0x001294AC (220 bytes, 71 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001293D0(void)
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

loc_001293D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x001293E7u); RECOMP_ABI_CALL(0x00117E90u, sub_00117E90); /* call 0x00117E90 */

loc_001293E7: ;
    ecx = MEM32(esp + 0x10);
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x20)); /* fmul dword ptr [ecx + 0x20] */
    fp_top() = RECOMP_FP_PC(MEMF(ecx + 8) - fp_top()); /* fsubr dword ptr [ecx + 8] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x1C)); /* fmul dword ptr [ecx + 0x1c] */
    fp_top() = RECOMP_FP_PC(MEMF(ecx + 4) - fp_top()); /* fsubr dword ptr [ecx + 4] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(ecx) - fp_top()); /* fsubr dword ptr [ecx] */
    MEMF(eax + -52) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + -48) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + -44) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x30);
    MEM32(eax + -28) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + -40) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + -36) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + -32) = edx;
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    edi = MEM32(0x1F26CC);
    edx = MEM32(esp + 0x14);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(edx + edi + 8)); /* fld float */
    MEMF(eax + -24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + -20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x20)); /* fmul dword ptr [ecx + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x1C)); /* fmul dword ptr [ecx + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(ecx + 0x30);
    MEM32(eax + 0x18) = edi;
    edi = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edi;
    edi = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edi;
    edi = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edi;
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    ecx = MEM32(0x1F26CC);
    fp_push(MEMF(edx + ecx + 0xC)); /* fld float */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x001294A7u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_001294A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001294B0
 * Original: 0x001294B0 - 0x001298F9 (1097 bytes, 356 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001294B0(void)
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

loc_001294B0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x3C);
    if (CMP_LE(_fas, _fbs)) goto loc_0012958D; /* jle: less or equal (signed <=) */

loc_001294CD: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x24);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esi + 0x28);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 0x30);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esi + 0x34);
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, ebp);
    ecx = esp + 0x20;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x00129501u); RECOMP_ABI_CALL(0x000D2550u, sub_000D2550); /* call 0x000D2550 */

loc_00129501: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0012950Au); RECOMP_ABI_CALL(0x001292C0u, sub_001292C0); /* call 0x001292C0 */

loc_0012950A: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C6EFC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c6efc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129526; /* jne: not equal / not zero */

loc_00129517: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00129526: ;
    ecx = MEM32(esi + 0x50);
    eax = ebx;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(eax + ecx + -108)); /* fld float */
    eax = eax + ecx + -116;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00129556; /* jp: parity */

loc_00129554: ;
    fp_top() = -fp_top(); /* fchs */

loc_00129556: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C6EF8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c6ef8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00129572; /* jp: parity */

loc_00129563: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00129572: ;
    eax = MEM32(esp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012958D; /* je: equal / zero */

loc_0012957B: ;
    POP32(esp, edi);
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 3;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_0012958D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x3C) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_0012969C; /* jl: less (signed <) */

loc_001295B6: ;
    edx = MEM32(esi + 0x50);
    fp_push(MEMF(ebp)); /* fld float */
    eax = ebx + -2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + edx)); /* fsub dword ptr [eax + edx] */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    fp_push(MEMF(ebp + 4)); /* fld float */
    MEM32(esp + 0x1C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = MEM32(esp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x28) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0012961Cu); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_0012961C: ;
    MEMF(esp + 0x40) = (float)fp_top(); /* fst */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C6F00)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c6f00] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012969C; /* je: equal / zero */

loc_00129630: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012970F; /* jle: less or equal (signed <=) */

loc_0012963C: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C6F04)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c6f04] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012970F; /* jne: not equal / not zero */

loc_00129651: ;
    edx = MEM32(esi + 0x50);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + edx + -148)); /* fmul dword ptr [ecx + edx - 0x94] */
    eax = ecx + edx + -156;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    eax = esp + 0x38;
    PUSH32(esp, eax);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x40)); /* fdiv dword ptr [esp + 0x40] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0012968Cu); RECOMP_ABI_CALL(0x0001AFF0u, sub_0001AFF0); /* call 0x0001AFF0 */

loc_0012968C: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C6EF4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c6ef4] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012970F; /* jp: parity */

loc_0012969C: ;
    ecx = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001296B4u); RECOMP_ABI_CALL(0x00129350u, sub_00129350); /* call 0x00129350 */

loc_001296B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001296C7; /* jne: not equal / not zero */

loc_001296B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 4;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_001296C7: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012970F; /* jle: less or equal (signed <=) */

loc_001296CF: ;
    ecx = MEM32(esi + 0x50);
    fp_push(MEMF(ebp)); /* fld float */
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + ecx)); /* fsub dword ptr [eax + ecx] */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ebp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = ecx;
    ecx = esp + 0x1C;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0012970Bu); RECOMP_ABI_CALL(0x00019080u, sub_00019080); /* call 0x00019080 */

loc_0012970B: ;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0012970F: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi + 0x50);
    ecx = MEM32(ebp);
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = edx + eax + -64;
    MEM32(ebx) = ecx;
    edx = MEM32(ebp + 4);
    MEM32(ebx + 4) = edx;
    eax = MEM32(ebp + 8);
    MEM32(ebx + 8) = eax;
    ecx = MEM32(edi);
    MEM32(ebx + 0xC) = ecx;
    edx = MEM32(edi + 4);
    MEM32(ebx + 0x10) = edx;
    eax = MEM32(edi + 8);
    MEM32(ebx + 0x14) = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00129862; /* jle: less or equal (signed <=) */

loc_0012974A: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    edi = eax + -2;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C6EEC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c6eec] */
    eax = MEM32(esi + 0x50);
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129799; /* jne: not equal / not zero */

loc_00129766: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x3C)); /* fdiv dword ptr [esp + 0x3c] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x24);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(edi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + 0x2C) = ecx;
    MEMF(edi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_001297A8;

loc_00129799: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x24) = eax;
    MEM32(edi + 0x28) = eax;
    MEM32(edi + 0x2C) = 0x3F800000;

loc_001297A8: ;
    edx = MEM32(esp + 0x3C);
    MEM32(edi + 0x3C) = edx;
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    PUSH32(esp, ecx);
    fp_push(MEMF(edi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x14)); /* fmul dword ptr [edi + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(edi + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x14)); /* fmul dword ptr [edi + 0x14] */
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0xC)); /* fmul dword ptr [edi + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(edi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0xC)); /* fmul dword ptr [edi + 0xc] */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x24)); /* fmul dword ptr [edi + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x28);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(edi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + 0x20) = eax;
    MEMF(edi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x20)); /* fld float */
    fp_push(MEMF(edi + 0x1C)); /* fld float */
    fp_push(MEMF(edi + 0x18)); /* fld float */
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
    PUSH32(esp, 0x00129814u); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_00129814: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C6EEC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c6eec] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129842; /* jne: not equal / not zero */

loc_00129824: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) / fp_top()); /* fdivr dword ptr [0x1c91d0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x18)); /* fmul dword ptr [edi + 0x18] */
    MEMF(edi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1C)); /* fmul dword ptr [edi + 0x1c] */
    MEMF(edi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x20)); /* fmul dword ptr [edi + 0x20] */
    MEMF(edi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00129844;

loc_00129842: ;
    fp_pop(); /* fstp st(0) */

loc_00129844: ;
    ecx = MEM32(edi + 0x18);
    MEM32(ebx + 0x18) = ecx;
    edx = MEM32(edi + 0x1C);
    MEM32(ebx + 0x1C) = edx;
    eax = MEM32(edi + 0x20);
    MEM32(ebx + 0x20) = eax;
    fp_push(MEMF(edi + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x14)); /* fdiv dword ptr [esi + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x38)); /* fadd dword ptr [edi + 0x38] */
    MEMF(ebx + 0x38) = (float)fp_top(); fp_pop(); /* fstp */

loc_00129862: ;
    edi = esi + 0x20;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0012986Du); RECOMP_ABI_CALL(0x000D2550u, sub_000D2550); /* call 0x000D2550 */

loc_0012986D: ;
    fp_push(MEMF(edi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    fp_push(MEMF(edi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C9210)); /* fmul dword ptr [0x1c9210] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x001298D2u); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_001298D2: ;
    eax = MEM32(esp + 0x28);
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x38) = ecx;
    MEM32(esi + 0x3C) = edx;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00129900
 * Original: 0x00129900 - 0x0012996B (107 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00129900(void)
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

loc_00129900: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x1C);
    PUSH32(esp, 0x00129916u); RECOMP_ABI_CALL(0x00117E90u, sub_00117E90); /* call 0x00117E90 */

loc_00129916: ;
    edx = MEM32(edi + 8);
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012995B; /* jle: less or equal (signed <=) */

loc_00129921: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + 0x1B;

loc_00129926: ;
    SET_LO8(ebx, MEM8(esi));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012994C; /* jbe: below or equal (unsigned <=) */

loc_0012992D: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AE830)); /* fmul dword ptr [0x1ae830] */
    PUSH32(esp, 0x0012993Cu); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0012993C: ;
    ecx = ZX8(LO8(ebx));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi) = LO8(eax);

loc_0012994C: ;
    ecx = MEM32(edi + 8);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x34;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00129926; /* jl: less (signed <) */

loc_00129959: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0012995B: ;
    ecx = MEM32(edi + 0x1C);
    PUSH32(esp, 0x00129963u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00129963: ;
    eax = MEM32(edi + 4);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00129970
 * Original: 0x00129970 - 0x001299A8 (56 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129970: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00129986u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00129986: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012999C; /* je: equal / zero */

loc_0012998D: ;
    MEM32(eax) = edi;
    MEM32(esi) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x50) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0012999C: ;
    MEM32(esi) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x50) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001299B0
 * Original: 0x001299B0 - 0x00129B02 (338 bytes, 117 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001299B0(void)
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

loc_001299B0: ;
    fp_push(MEMF(0x1C6EF0)); /* fld float */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    fp_top() = -fp_top(); /* fchs */
    esi = ecx;
    ecx = MEM32(0x1C6EF0);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEMF(esi + 0x2C) = (float)fp_top(); /* fst */
    MEMF(esi + 0x30) = (float)fp_top(); /* fst */
    MEM32(esi + 0x20) = ecx;
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x28) = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    edx = ecx;
    MEM32(esi + 0x24) = edx;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x14) = 0x40400000;
    if (CMP_EQ(_fa, _fb)) goto loc_00129AFB; /* je: equal / zero */

loc_00129A03: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00129AFB; /* jle: less or equal (signed <=) */

loc_00129A0F: ;
    ecx = MEM32(edi + 0x50);
    edx = eax;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + ecx + -64;
    PUSH32(esp, ebx);
    ebx = MEM32(0x1F26CC);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(edi + 0xC);
    PUSH32(esp, ebp);
    ebp = edx;
    ebp = ebp << 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebx + ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + ebp), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129A41; /* jne: not equal / not zero */

loc_00129A35: ;
    ebp = MEM32(edi + 0x10);
    ebp = ebp << 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebx + ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129A9A; /* je: equal / zero */

loc_00129A41: ;
    ebx = MEM32(edi + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129A9A; /* je: equal / zero */

loc_00129A48: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = eax + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00129A67u); RECOMP_ABI_CALL(0x001294B0u, sub_001294B0); /* call 0x001294B0 */

loc_00129A67: ;
    edx = MEM32(edi + 0xC);
    ecx = MEM32(0x1F26CC);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(edx + ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129A83; /* je: equal / zero */

loc_00129A7C: ;
    edx = MEM32(esp + 0x14);
    MEM8(edx + 0x33) = LO8(eax);

loc_00129A83: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(0x1F26CC);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ecx + edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129A9A; /* je: equal / zero */

loc_00129A94: ;
    ecx = MEM32(esi + 0x50);
    MEM8(ecx + 0x33) = LO8(eax);

loc_00129A9A: ;
    eax = MEM32(edi + 0x10);
    edx = MEM32(edi + 0xC);
    POP32(esp, ebp);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00129AB3; /* jne: not equal / not zero */

loc_00129AAA: ;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(eax + 0x38);
    MEM32(ecx + 0x38) = edx;

loc_00129AB3: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = eax + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00129ACDu); RECOMP_ABI_CALL(0x001294B0u, sub_001294B0); /* call 0x001294B0 */

loc_00129ACD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129AFB; /* je: equal / zero */

loc_00129AD1: ;
    eax = MEM32(0x1C6EF0);
    fp_push(MEMF(0x1C6EF0)); /* fld float */
    MEM32(esi + 4) = 0;
    fp_top() = -fp_top(); /* fchs */
    ecx = eax;
    MEMF(esi + 0x2C) = (float)fp_top(); /* fst */
    edx = eax;
    MEMF(esi + 0x30) = (float)fp_top(); /* fst */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x28) = edx;

loc_00129AFB: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00129B10
 * Original: 0x00129B10 - 0x00129BC0 (176 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00129B6D; /* jle: less or equal (signed <=) */

loc_00129B1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00129B39; /* jle: less or equal (signed <=) */

loc_00129B1F: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x50);
    edx = eax;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + ecx + -64;
    PUSH32(esp, edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00129B39u); RECOMP_ABI_CALL(0x001293D0u, sub_001293D0); /* call 0x001293D0 */

loc_00129B39: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00129B8B; /* jle: less or equal (signed <=) */

loc_00129B41: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x50);
    edx = eax;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00129B5Bu); RECOMP_ABI_CALL(0x001293D0u, sub_001293D0); /* call 0x001293D0 */

loc_00129B5B: ;
    edx = MEM32(esi + 8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = edx;
    eax = MEM32(esi + 4);
    ecx = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00129B41; /* jg: greater (signed >) */

loc_00129B6B: ;
    goto loc_00129B8B;

loc_00129B6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00129B8B; /* jle: less or equal (signed <=) */

loc_00129B71: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x50);
    edx = eax;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + ecx + -64;
    PUSH32(esp, edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00129B8Bu); RECOMP_ABI_CALL(0x001293D0u, sub_001293D0); /* call 0x001293D0 */

loc_00129B8B: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00129BBE; /* jle: less or equal (signed <=) */

loc_00129B92: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(0x1F26CC);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ecx + edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129BBE; /* je: equal / zero */

loc_00129BA4: ;
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00129BB0u); RECOMP_ABI_CALL(0x00129900u, sub_00129900); /* call 0x00129900 */

loc_00129BB0: ;
    MEM32(esi + 0x54) = 0;
    MEM32(esi + 0x58) = 0;

loc_00129BBE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129BC0
 * Original: 0x00129BC0 - 0x00129BEC (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129BC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129BDD; /* je: equal / zero */

loc_00129BCA: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00129BD3u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00129BD3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x50) = 0;

loc_00129BDD: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129BF0
 * Original: 0x00129BF0 - 0x00129C67 (119 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129BF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(0x1F26CC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00129C0Bu); RECOMP_ABI_CALL(0x000E3BB0u, sub_000E3BB0); /* call 0x000E3BB0 */

loc_00129C0B: ;
    eax = MEM32(0x1DE418);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129C44; /* jne: not equal / not zero */

loc_00129C17: ;
    ecx = MEM32(0x1DE434);
    eax = 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129C3A; /* je: equal / zero */

loc_00129C26: ;
    MEM32(0x1A50F0) = MEM32(0x1A50F0) | 0x800;
    _fa = (uint32_t)(MEM32(0x1A50F0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1A2EE0) = eax;
    MEM32(0x1DE434) = eax;

loc_00129C3A: ;
    MEM32(0x1DE418) = 1;

loc_00129C44: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00129C4Bu); RECOMP_ABI_CALL(0x0001D270u, sub_0001D270); /* call 0x0001D270 */

loc_00129C4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00129C55u); RECOMP_ABI_CALL(0x00129B10u, sub_00129B10); /* call 0x00129B10 */

loc_00129C55: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x00129C65u); RECOMP_ABI_CALL(0x00117E60u, sub_00117E60); /* call 0x00117E60 */

loc_00129C65: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129C70
 * Original: 0x00129C70 - 0x00129C80 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129C70(void)
{

loc_00129C70: ;
    SET_LO8(eax, MEM8(esp + 8));
    ecx = MEM32(esp + 4);
    MEM8(ecx) = LO8(eax);
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00129C80
 * Original: 0x00129C80 - 0x00129D25 (165 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129C80: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    ecx = ebp;
    if (CMP_BE(_fa, _fb)) goto loc_00129CB6; /* jbe: below or equal (unsigned <=) */

loc_00129C95: ;
    edi = edx + esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00129CB6; /* jae: above or equal (unsigned >=) */

loc_00129C9C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = esi + ebp + -1;
    edx = edi + -1;
    if (CMP_LE(_fas, _fbs)) goto loc_00129D1F; /* jle: less or equal (signed <=) */

loc_00129CA7: ;
    SET_LO8(eax, MEM8(edx));
    MEM8(ecx) = LO8(eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00129CA7; /* jne: not equal / not zero */

loc_00129CB0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00129CB6: ;
    edi = ebp;
    eax = edx;
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129D10; /* jne: not equal / not zero */

loc_00129CC4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129CDA; /* je: equal / zero */

loc_00129CC8: ;
    eax = esi;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00129CDA; /* jle: less or equal (signed <=) */

loc_00129CCF: ;
    SET_LO8(eax, MEM8(edx));
    MEM8(ecx) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129CC8; /* jne: not equal / not zero */

loc_00129CDA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00129CFD; /* jl: less (signed <) */

loc_00129CDF: ;
    edi = esi;
    edi = edi >> 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edi;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = esi + eax * 4;
    goto loc_00129CF0;

    /* nop */

loc_00129CF0: ;
    eax = MEM32(edx);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00129CF0; /* jne: not equal / not zero */

loc_00129CFD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00129D1F; /* jle: less or equal (signed <=) */

loc_00129D01: ;
    SET_LO8(eax, MEM8(edx));
    MEM8(ecx) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00129D01; /* jne: not equal / not zero */

loc_00129D0A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00129D10: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00129D1F; /* jle: less or equal (signed <=) */

loc_00129D14: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00129D16: ;
    SET_LO8(eax, MEM8(edx + ecx));
    MEM8(ecx) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00129D16; /* jne: not equal / not zero */

loc_00129D1F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00129D30
 * Original: 0x00129D30 - 0x00129D72 (66 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129D30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00129D3Cu); RECOMP_ABI_CALL(0x0011B200u, sub_0011B200); /* call 0x0011B200 */

loc_00129D3C: ;
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129D60; /* je: equal / zero */

loc_00129D47: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129D6D; /* je: equal / zero */

loc_00129D4B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00129D51u); RECOMP_ABI_CALL(0x00128200u, sub_00128200); /* call 0x00128200 */

loc_00129D51: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00129D59u); RECOMP_ABI_CALL(0x0011B200u, sub_0011B200); /* call 0x0011B200 */

loc_00129D59: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129D47; /* jne: not equal / not zero */

loc_00129D60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00129D6D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129D80
 * Original: 0x00129D80 - 0x00129DC2 (66 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129D80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00129D8Cu); RECOMP_ABI_CALL(0x0011B190u, sub_0011B190); /* call 0x0011B190 */

loc_00129D8C: ;
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129DB0; /* je: equal / zero */

loc_00129D97: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129DBD; /* je: equal / zero */

loc_00129D9B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00129DA1u); RECOMP_ABI_CALL(0x00128200u, sub_00128200); /* call 0x00128200 */

loc_00129DA1: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00129DA9u); RECOMP_ABI_CALL(0x0011B190u, sub_0011B190); /* call 0x0011B190 */

loc_00129DA9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129D97; /* jne: not equal / not zero */

loc_00129DB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00129DBD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129DD0
 * Original: 0x00129DD0 - 0x00129DE7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00129DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129DD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00129DE4; /* jl: less (signed <) */

loc_00129DD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x39 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00129DE4; /* jg: greater (signed >) */

loc_00129DDE: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00129DE4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00129DF0
 * Original: 0x00129DF0 - 0x00129E2C (60 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129DF0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    SET_LO16(eax, MEM16(edi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129E23; /* je: equal / zero */

loc_00129DFD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);

loc_00129E02: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00129E0Cu); RECOMP_ABI_CALL(0x00129C70u, sub_00129C70); /* call 0x00129C70 */

loc_00129E0C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129E02; /* jne: not equal / not zero */

loc_00129E1E: ;
    MEM8(esi) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00129E23: ;
    eax = MEM32(esp + 0xC);
    MEM8(eax) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129E30
 * Original: 0x00129E30 - 0x00129E4E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129E30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);

loc_00129E35: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00129E3Fu); RECOMP_ABI_CALL(0x0011B270u, sub_0011B270); /* call 0x0011B270 */

loc_00129E3F: ;
    MEM16(esi) = LO16(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129E35; /* jne: not equal / not zero */

loc_00129E4C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129E50
 * Original: 0x00129E50 - 0x00129E87 (55 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129E50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129E83; /* je: equal / zero */

loc_00129E59: ;
    /* nop */

loc_00129E60: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129E83; /* je: equal / zero */

loc_00129E66: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00129E6Fu); RECOMP_ABI_CALL(0x0012C372u, sub_0012C372); /* call 0x0012C372 */

loc_00129E6F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129E80; /* jne: not equal / not zero */

loc_00129E76: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129E80; /* je: equal / zero */

loc_00129E7C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129E83; /* jne: not equal / not zero */

loc_00129E80: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00129E60; /* jne: not equal / not zero */

loc_00129E83: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129E90
 * Original: 0x00129E90 - 0x00129F05 (117 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129E90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1A27B8);
    ecx = ebx;
    PUSH32(esp, 0x00129EA3u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_00129EA3: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00129EFF; /* je: equal / zero */

loc_00129EAD: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00129EB6u); RECOMP_ABI_CALL(0x0012C31Bu, sub_0012C31B); /* call 0x0012C31B */

loc_00129EB6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129EC2; /* jne: not equal / not zero */

loc_00129EBD: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x5F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x5F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129EFF; /* jne: not equal / not zero */

loc_00129EC2: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00129EEC; /* je: equal / zero */

loc_00129EC5: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129EEC; /* je: equal / zero */

loc_00129ECB: ;
    ecx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00129ED4u); RECOMP_ABI_CALL(0x0012C39Bu, sub_0012C39B); /* call 0x0012C39B */

loc_00129ED4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129EE9; /* jne: not equal / not zero */

loc_00129EDB: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129EE9; /* je: equal / zero */

loc_00129EE1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129EE9; /* je: equal / zero */

loc_00129EE5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129EEC; /* jne: not equal / not zero */

loc_00129EE9: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00129EC5; /* jne: not equal / not zero */

loc_00129EEC: ;
    edx = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00129EF9u); RECOMP_ABI_CALL(0x000E1980u, sub_000E1980); /* call 0x000E1980 */

loc_00129EF9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00129EFF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00129F10
 * Original: 0x00129F10 - 0x00129F98 (136 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129F10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 0x14;
    PUSH32(esp, 0x1A27B8);
    ecx = edi;
    PUSH32(esp, 0x00129F22u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_00129F22: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x00129F2Eu); RECOMP_ABI_CALL(0x00129E50u, sub_00129E50); /* call 0x00129E50 */

loc_00129F2E: ;
    esi = eax;
    SET_LO8(eax, MEM8(esi));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129F90; /* je: equal / zero */

loc_00129F39: ;
    /* nop */

loc_00129F40: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129F83; /* je: equal / zero */

loc_00129F44: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129F79; /* je: equal / zero */

loc_00129F48: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129F79; /* je: equal / zero */

loc_00129F4C: ;
    ecx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00129F55u); RECOMP_ABI_CALL(0x0012C372u, sub_0012C372); /* call 0x0012C372 */

loc_00129F55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129F79; /* jne: not equal / not zero */

loc_00129F5C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129F6B; /* je: equal / zero */

loc_00129F60: ;
    PUSH32(esp, 0x20);
    ecx = edi;
    PUSH32(esp, 0x00129F69u); RECOMP_ABI_CALL(0x000E1900u, sub_000E1900); /* call 0x000E1900 */

loc_00129F69: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00129F6B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi));
    ecx = edi;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00129F77u); RECOMP_ABI_CALL(0x000E1900u, sub_000E1900); /* call 0x000E1900 */

loc_00129F77: ;
    goto loc_00129F7B;

loc_00129F79: ;
    SET_LO8(ebx, 1);

loc_00129F7B: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129F40; /* jne: not equal / not zero */

loc_00129F83: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129F90; /* je: equal / zero */

loc_00129F87: ;
    PUSH32(esp, 0x20);
    ecx = edi;
    PUSH32(esp, 0x00129F90u); RECOMP_ABI_CALL(0x000E1900u, sub_000E1900); /* call 0x000E1900 */

loc_00129F90: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00129FA0
 * Original: 0x00129FA0 - 0x0012A034 (148 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129FA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C6F10);
    PUSH32(esp, eax);
    edi = ecx;
    esi = eax + 3;
    PUSH32(esp, 0x00129FB7u); RECOMP_ABI_CALL(0x001058B0u, sub_001058B0); /* call 0x001058B0 */

loc_00129FB7: ;
    ebp = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129FED; /* jne: not equal / not zero */

loc_00129FC0: ;
    ecx = edi;
    PUSH32(esp, 0x00129FC7u); RECOMP_ABI_CALL(0x00121950u, sub_00121950); /* call 0x00121950 */

loc_00129FC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129FE5; /* je: equal / zero */

loc_00129FCB: ;
    MEM8(eax + 0x2C) = 1;
    MEM32(eax + 0x30) = 0xA;
    ecx = MEM32(0x1CF664);
    PUSH32(esp, ecx);
    ecx = eax + 0x34;
    PUSH32(esp, 0x00129FE5u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_00129FE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00129FED: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012A02A; /* jae: above or equal (unsigned >=) */

loc_00129FF4: ;
    edx = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00129FFDu); RECOMP_ABI_CALL(0x0012C372u, sub_0012C372); /* call 0x0012C372 */

loc_00129FFD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A016; /* je: equal / zero */

loc_0012A004: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A025; /* jne: not equal / not zero */

loc_0012A008: ;
    PUSH32(esp, 0x20);
    ecx = edi + 0x14;
    PUSH32(esp, 0x0012A012u); RECOMP_ABI_CALL(0x000E1900u, sub_000E1900); /* call 0x000E1900 */

loc_0012A012: ;
    SET_LO8(ebx, 1);
    goto loc_0012A025;

loc_0012A016: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi));
    ecx = edi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A023u); RECOMP_ABI_CALL(0x000E1900u, sub_000E1900); /* call 0x000E1900 */

loc_0012A023: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0012A025: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00129FF4; /* jb: below (unsigned <) */

loc_0012A02A: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp + 3;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A040
 * Original: 0x0012A040 - 0x0012A07C (60 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A040: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012A046: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A051; /* jne: not equal / not zero */

loc_0012A04D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0012A056;

loc_0012A051: ;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0012A056: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012A077; /* jae: above or equal (unsigned >=) */

loc_0012A05B: ;
    eax = MEM32(esi + 0x14);
    eax = (uint32_t)(int32_t)SMEM8(eax + edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A068u); RECOMP_ABI_CALL(0x0012C372u, sub_0012C372); /* call 0x0012C372 */

loc_0012A068: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A072; /* je: equal / zero */

loc_0012A06F: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012A046;

loc_0012A072: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012A077: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A080
 * Original: 0x0012A080 - 0x0012A22A (426 bytes, 148 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A080: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ebp = ecx;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x0012A09Au); RECOMP_ABI_CALL(0x00121950u, sub_00121950); /* call 0x00121950 */

loc_0012A09A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0012A0A5u); RECOMP_ABI_CALL(0x00129E50u, sub_00129E50); /* call 0x00129E50 */

loc_0012A0A5: ;
    edi = eax;
    ecx = (uint32_t)(int32_t)SMEM8(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012A0B0u); RECOMP_ABI_CALL(0x0012B440u, sub_0012B440); /* call 0x0012B440 */

loc_0012A0B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A10A; /* jne: not equal / not zero */

loc_0012A0B8: ;
    edx = (uint32_t)(int32_t)SMEM8(edi + 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012A0C2u); RECOMP_ABI_CALL(0x0012B440u, sub_0012B440); /* call 0x0012B440 */

loc_0012A0C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x78 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A10A; /* jne: not equal / not zero */

loc_0012A0CA: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A0D4u); RECOMP_ABI_CALL(0x0012B440u, sub_0012B440); /* call 0x0012B440 */

loc_0012A0D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A10A; /* jne: not equal / not zero */

loc_0012A0DC: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 3);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012A0E6u); RECOMP_ABI_CALL(0x0012B440u, sub_0012B440); /* call 0x0012B440 */

loc_0012A0E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A10A; /* jne: not equal / not zero */

loc_0012A0EE: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x0012A0F5u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0012A0F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A17A; /* je: equal / zero */

loc_0012A0FC: ;
    ecx = eax;
    PUSH32(esp, 0x0012A103u); RECOMP_ABI_CALL(0x001221C0u, sub_001221C0); /* call 0x001221C0 */

loc_0012A103: ;
    esi = eax;
    goto loc_0012A205;

loc_0012A10A: ;
    edx = (uint32_t)(int32_t)SMEM8(edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012A113u); RECOMP_ABI_CALL(0x0012C31Bu, sub_0012C31B); /* call 0x0012C31B */

loc_0012A113: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A1B2; /* jne: not equal / not zero */

loc_0012A11E: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A1B2; /* je: equal / zero */

loc_0012A128: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x21) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x21 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A156; /* jne: not equal / not zero */

loc_0012A12C: ;
    SET_LO8(ecx, MEM8(edi + 1));
    SET_LO8(eax, 0x2D);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A156; /* jne: not equal / not zero */

loc_0012A135: ;
    _fa = (uint32_t)(MEM8(edi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 2), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A156; /* jne: not equal / not zero */

loc_0012A13A: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x0012A141u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0012A141: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A17A; /* je: equal / zero */

loc_0012A148: ;
    ecx = eax;
    PUSH32(esp, 0x0012A14Fu); RECOMP_ABI_CALL(0x00122120u, sub_00122120); /* call 0x00122120 */

loc_0012A14F: ;
    esi = eax;
    goto loc_0012A205;

loc_0012A156: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x0012A15Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0012A15D: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A17A; /* je: equal / zero */

loc_0012A166: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x0012A16Fu); RECOMP_ABI_CALL(0x00121DC0u, sub_00121DC0); /* call 0x00121DC0 */

loc_0012A16F: ;
    MEM32(esi) = 0x1C67CC;
    goto loc_0012A205;

loc_0012A17A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012A17C: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A19E; /* je: equal / zero */

loc_0012A184: ;
    MEM8(eax + 0x2C) = 1;
    MEM32(eax + 0x30) = 2;
    edx = MEM32(0x1CF644);
    PUSH32(esp, edx);
    ecx = eax + 0x34;
    PUSH32(esp, 0x0012A19Eu); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_0012A19E: ;
    ecx = MEM32(esp + 0x28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0012A1B2: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x0012A1B9u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0012A1B9: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A1E5; /* je: equal / zero */

loc_0012A1C2: ;
    PUSH32(esp, 0x1A27B8);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0012A1D0u); RECOMP_ABI_CALL(0x000E1740u, sub_000E1740); /* call 0x000E1740 */

loc_0012A1D0: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    ebx = 1;
    PUSH32(esp, 0x0012A1E1u); RECOMP_ABI_CALL(0x00122310u, sub_00122310); /* call 0x00122310 */

loc_0012A1E1: ;
    esi = eax;
    goto loc_0012A1E7;

loc_0012A1E5: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012A1E7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012A205; /* je: equal / zero */

loc_0012A1EC: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x20) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0012A205; /* je: equal / zero */

loc_0012A1FC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A202u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0012A202: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012A205: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A17C; /* je: equal / zero */

loc_0012A20D: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 4) = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0012A218u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012A215u); } /* indirect call */
    }

loc_0012A218: ;
    ecx = MEM32(esp + 0x28);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A230
 * Original: 0x0012A230 - 0x0012A358 (296 bytes, 114 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A230: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0012A23Cu); RECOMP_ABI_CALL(0x00121950u, sub_00121950); /* call 0x00121950 */

loc_0012A23C: ;
    esi = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x0012A24Cu); RECOMP_ABI_CALL(0x00129E50u, sub_00129E50); /* call 0x00129E50 */

loc_0012A24C: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0012A296; /* je: equal / zero */

loc_0012A259: ;
    /* nop */

loc_0012A260: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A296; /* je: equal / zero */

loc_0012A266: ;
    ebp = edi;

loc_0012A268: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A2A0; /* je: equal / zero */

loc_0012A26C: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0012A268; /* jne: not equal / not zero */

loc_0012A278: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A296; /* je: equal / zero */

loc_0012A27C: ;
    MEM8(esi + 0x2C) = 1;
    MEM32(esi + 0x30) = 5;
    edx = MEM32(0x1CF650);
    PUSH32(esp, edx);
    ecx = esi + 0x34;
    PUSH32(esp, 0x0012A296u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_0012A296: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0012A2A0: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A278; /* je: equal / zero */

loc_0012A2A5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A2EF; /* je: equal / zero */

loc_0012A2A9: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x0012A2B0u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0012A2B0: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A31E; /* je: equal / zero */

loc_0012A2B9: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x0012A2C2u); RECOMP_ABI_CALL(0x00121DC0u, sub_00121DC0); /* call 0x00121DC0 */

loc_0012A2C2: ;
    MEM32(esi) = 0x1C67B8;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0012A2D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012A2CDu); } /* indirect call */
    }

loc_0012A2D0: ;
    ecx = esi;
    PUSH32(esp, 0x0012A2D7u); RECOMP_ABI_CALL(0x0012A040u, sub_0012A040); /* call 0x0012A040 */

loc_0012A2D7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A2E5; /* jne: not equal / not zero */

loc_0012A2DB: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0012A2E3u); RECOMP_ABI_CALL(0x00121750u, sub_00121750); /* call 0x00121750 */

loc_0012A2E3: ;
    goto loc_0012A311;

loc_0012A2E5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0012A2EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012A2EBu); } /* indirect call */
    }

loc_0012A2ED: ;
    goto loc_0012A311;

loc_0012A2EF: ;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 1), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A34E; /* je: equal / zero */

loc_0012A2F5: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0012A301u); RECOMP_ABI_CALL(0x0012A080u, sub_0012A080); /* call 0x0012A080 */

loc_0012A301: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A296; /* je: equal / zero */

loc_0012A305: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0012A30Du); RECOMP_ABI_CALL(0x00121750u, sub_00121750); /* call 0x00121750 */

loc_0012A30D: ;
    edi = MEM32(esp + 0x18);

loc_0012A311: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A296; /* je: equal / zero */

loc_0012A315: ;
    esi = MEM32(esp + 0x10);
    goto loc_0012A260;

loc_0012A31E: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A296; /* je: equal / zero */

loc_0012A32A: ;
    MEM8(eax + 0x2C) = 1;
    MEM32(eax + 0x30) = 2;
    ecx = MEM32(0x1CF644);
    PUSH32(esp, ecx);
    ecx = eax + 0x34;
    PUSH32(esp, 0x0012A344u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_0012A344: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0012A34E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A360
 * Original: 0x0012A360 - 0x0012A3EA (138 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A360: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x0012A374u); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012A374: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A3AD; /* jne: not equal / not zero */

loc_0012A37D: ;
    ecx = ebx;
    PUSH32(esp, 0x0012A384u); RECOMP_ABI_CALL(0x00121950u, sub_00121950); /* call 0x00121950 */

loc_0012A384: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A3A2; /* je: equal / zero */

loc_0012A388: ;
    MEM8(eax + 0x2C) = 1;
    MEM32(eax + 0x30) = 9;
    ecx = MEM32(0x1CF660);
    PUSH32(esp, ecx);
    ecx = eax + 0x34;
    PUSH32(esp, 0x0012A3A2u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_0012A3A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0012A3AD: ;
    edx = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0012A3BCu); RECOMP_ABI_CALL(0x000E17E0u, sub_000E17E0); /* call 0x000E17E0 */

loc_0012A3BC: ;
    PUSH32(esp, eax);
    ecx = ebx + 0x14;
    PUSH32(esp, 0x0012A3C5u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_0012A3C5: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0012A3DE; /* je: equal / zero */

loc_0012A3D5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A3DBu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0012A3DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012A3DE: ;
    eax = edi + 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A3F0
 * Original: 0x0012A3F0 - 0x0012A550 (352 bytes, 128 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A3F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A3F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(esp + 0x18);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012A404u); RECOMP_ABI_CALL(0x00129E90u, sub_00129E90); /* call 0x00129E90 */

loc_0012A404: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A439; /* jne: not equal / not zero */

loc_0012A40B: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A547; /* je: equal / zero */

loc_0012A416: ;
    MEM8(eax + 0x2C) = 1;
    MEM32(eax + 0x30) = 6;
    edx = MEM32(0x1CF654);
    PUSH32(esp, edx);
    ecx = eax + 0x34;
    PUSH32(esp, 0x0012A430u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_0012A430: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0012A439: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A43Fu); RECOMP_ABI_CALL(0x00129E50u, sub_00129E50); /* call 0x00129E50 */

loc_0012A43F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A526; /* je: equal / zero */

loc_0012A44A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x3D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x3D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A526; /* jne: not equal / not zero */

loc_0012A453: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A45Au); RECOMP_ABI_CALL(0x00129E50u, sub_00129E50); /* call 0x00129E50 */

loc_0012A45A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A50F; /* je: equal / zero */

loc_0012A465: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A50F; /* je: equal / zero */

loc_0012A46F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x27) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x27 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 1;
    if (CMP_NE(_fa, _fb)) goto loc_0012A48C; /* jne: not equal / not zero */

loc_0012A47A: ;
    PUSH32(esp, 0x27);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A482u); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012A482: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi + 1;
    goto loc_0012A4D4;

loc_0012A48C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x22) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x22 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A4A3; /* jne: not equal / not zero */

loc_0012A491: ;
    PUSH32(esp, 0x22);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A499u); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012A499: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi + 1;
    goto loc_0012A4D4;

loc_0012A4A3: ;
    SET_LO8(eax, MEM8(edi + -1));
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0012A4D2; /* je: equal / zero */

loc_0012A4AD: ;
    /* nop */

loc_0012A4B0: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A4B9u); RECOMP_ABI_CALL(0x0012C372u, sub_0012C372); /* call 0x0012C372 */

loc_0012A4B9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A4D2; /* jne: not equal / not zero */

loc_0012A4C0: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A4D2; /* je: equal / zero */

loc_0012A4C6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A4D2; /* je: equal / zero */

loc_0012A4CA: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A4B0; /* jne: not equal / not zero */

loc_0012A4D2: ;
    ebx = esi;

loc_0012A4D4: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0012A4E1u); RECOMP_ABI_CALL(0x000E17E0u, sub_000E17E0); /* call 0x000E17E0 */

loc_0012A4E1: ;
    PUSH32(esp, eax);
    ecx = ebp + 0x18;
    PUSH32(esp, 0x0012A4EAu); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_0012A4EA: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0012A503; /* je: equal / zero */

loc_0012A4FA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A500u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0012A500: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012A503: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0012A50F: ;
    ecx = MEM32(ebp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A547; /* je: equal / zero */

loc_0012A516: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x0012A51Du); RECOMP_ABI_CALL(0x001218B0u, sub_001218B0); /* call 0x001218B0 */

loc_0012A51D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0012A526: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A547; /* je: equal / zero */

loc_0012A52D: ;
    MEM8(eax + 0x2C) = 1;
    MEM32(eax + 0x30) = 6;
    ecx = MEM32(0x1CF654);
    PUSH32(esp, ecx);
    ecx = eax + 0x34;
    PUSH32(esp, 0x0012A547u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_0012A547: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A550
 * Original: 0x0012A550 - 0x0012A5BD (109 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A550: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1C676C);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x0012A56Au); RECOMP_ABI_CALL(0x001058B0u, sub_001058B0); /* call 0x001058B0 */

loc_0012A56A: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A586; /* jne: not equal / not zero */

loc_0012A573: ;
    PUSH32(esp, 0x1C671C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A57Eu); RECOMP_ABI_CALL(0x001058B0u, sub_001058B0); /* call 0x001058B0 */

loc_0012A57E: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012A589;

loc_0012A586: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012A589: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0012A5BD(); return; } /* jne: not equal / not zero */

loc_0012A58D: ;
    ecx = ebp;
    PUSH32(esp, 0x0012A594u); RECOMP_ABI_CALL(0x00121950u, sub_00121950); /* call 0x00121950 */

loc_0012A594: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A5B2; /* je: equal / zero */

loc_0012A598: ;
    MEM8(eax + 0x2C) = 1;
    MEM32(eax + 0x30) = 0xB;
    ecx = MEM32(0x1CF668);
    PUSH32(esp, ecx);
    ecx = eax + 0x34;
    PUSH32(esp, 0x0012A5B2u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_0012A5B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A5BD
 * Original: 0x0012A5BD - 0x0012A6DE (289 bytes, 86 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A5BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A5BD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C6F2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A5C9u); RECOMP_ABI_CALL(0x001058B0u, sub_001058B0); /* call 0x001058B0 */

loc_0012A5C9: ;
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A61A; /* je: equal / zero */

loc_0012A5D2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012A61A; /* jae: above or equal (unsigned >=) */

loc_0012A5D6: ;
    ecx = esp + 0x18;
    MEM32(esp + 0x10) = 0x1C6728;
    PUSH32(esp, 0x0012A5E7u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_0012A5E7: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x0012A5F0u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_0012A5F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x0012A604u); RECOMP_ABI_CALL(0x0012A3F0u, sub_0012A3F0); /* call 0x0012A3F0 */

loc_0012A604: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = ebp + 0x2C;
    PUSH32(esp, 0x0012A611u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_0012A611: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0012A61Au); RECOMP_ABI_CALL(0x00121D80u, sub_00121D80); /* call 0x00121D80 */

loc_0012A61A: ;
    PUSH32(esp, 0x1C6F20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A625u); RECOMP_ABI_CALL(0x001058B0u, sub_001058B0); /* call 0x001058B0 */

loc_0012A625: ;
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A676; /* je: equal / zero */

loc_0012A62E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012A676; /* jae: above or equal (unsigned >=) */

loc_0012A632: ;
    ecx = esp + 0x18;
    MEM32(esp + 0x10) = 0x1C6728;
    PUSH32(esp, 0x0012A643u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_0012A643: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x0012A64Cu); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_0012A64C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x0012A660u); RECOMP_ABI_CALL(0x0012A3F0u, sub_0012A3F0); /* call 0x0012A3F0 */

loc_0012A660: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = ebp + 0x3C;
    PUSH32(esp, 0x0012A66Du); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_0012A66D: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0012A676u); RECOMP_ABI_CALL(0x00121D80u, sub_00121D80); /* call 0x00121D80 */

loc_0012A676: ;
    PUSH32(esp, 0x1C6F14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A681u); RECOMP_ABI_CALL(0x001058B0u, sub_001058B0); /* call 0x001058B0 */

loc_0012A681: ;
    edi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A6D2; /* je: equal / zero */

loc_0012A68C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012A6D2; /* jae: above or equal (unsigned >=) */

loc_0012A690: ;
    ecx = esp + 0x18;
    MEM32(esp + 0x10) = 0x1C6728;
    PUSH32(esp, 0x0012A6A1u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_0012A6A1: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x0012A6AAu); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_0012A6AA: ;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ebx;
    PUSH32(esp, 0x0012A6BCu); RECOMP_ABI_CALL(0x0012A3F0u, sub_0012A3F0); /* call 0x0012A3F0 */

loc_0012A6BC: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = ebp + 0x4C;
    PUSH32(esp, 0x0012A6C9u); RECOMP_ABI_CALL(0x000E1850u, sub_000E1850); /* call 0x000E1850 */

loc_0012A6C9: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0012A6D2u); RECOMP_ABI_CALL(0x00121D80u, sub_00121D80); /* call 0x00121D80 */

loc_0012A6D2: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A6E0
 * Original: 0x0012A6E0 - 0x0012A78F (175 bytes, 70 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A6E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x0012A6EEu); RECOMP_ABI_CALL(0x00129E50u, sub_00129E50); /* call 0x00129E50 */

loc_0012A6EE: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0012A700; /* je: equal / zero */

loc_0012A6FB: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A711; /* jne: not equal / not zero */

loc_0012A700: ;
    PUSH32(esp, 0x1C6F64);
    ecx = edi + 0x34;
    MEM8(edi + 0x2C) = 1;
    PUSH32(esp, 0x0012A711u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_0012A711: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A788; /* je: equal / zero */

loc_0012A715: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A788; /* je: equal / zero */

loc_0012A71B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A777; /* jne: not equal / not zero */

loc_0012A71F: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0012A72Bu); RECOMP_ABI_CALL(0x0012A080u, sub_0012A080); /* call 0x0012A080 */

loc_0012A72B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A737; /* je: equal / zero */

loc_0012A72F: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0012A737u); RECOMP_ABI_CALL(0x00121750u, sub_00121750); /* call 0x00121750 */

loc_0012A737: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A788; /* je: equal / zero */

loc_0012A73F: ;
    /* nop */

loc_0012A740: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A715; /* je: equal / zero */

loc_0012A745: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A768; /* je: equal / zero */

loc_0012A74B: ;
    edx = SX8(LO8(eax));
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012A754u); RECOMP_ABI_CALL(0x0012C372u, sub_0012C372); /* call 0x0012C372 */

loc_0012A754: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A765; /* jne: not equal / not zero */

loc_0012A75B: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A765; /* je: equal / zero */

loc_0012A761: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A768; /* jne: not equal / not zero */

loc_0012A765: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012A745; /* jne: not equal / not zero */

loc_0012A768: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0012A740; /* jne: not equal / not zero */

loc_0012A770: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0012A777: ;
    PUSH32(esp, 0x1C6F34);
    ecx = edi + 0x34;
    MEM8(edi + 0x2C) = 1;
    PUSH32(esp, 0x0012A788u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_0012A788: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A790
 * Original: 0x0012A790 - 0x0012AA12 (642 bytes, 216 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A790: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x0012A7A2u); RECOMP_ABI_CALL(0x00121950u, sub_00121950); /* call 0x00121950 */

loc_0012A7A2: ;
    ebp = eax;
    eax = MEM32(esp + 0x68);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A7AEu); RECOMP_ABI_CALL(0x00129E50u, sub_00129E50); /* call 0x00129E50 */

loc_0012A7AE: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A9E8; /* je: equal / zero */

loc_0012A7BB: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A9E8; /* je: equal / zero */

loc_0012A7C3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A7CDu); RECOMP_ABI_CALL(0x00129E90u, sub_00129E90); /* call 0x00129E90 */

loc_0012A7CD: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A7F4; /* jne: not equal / not zero */

loc_0012A7D6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AA06; /* je: equal / zero */

loc_0012A7DE: ;
    MEM8(ebp + 0x2C) = 1;
    MEM32(ebp + 0x30) = 4;
    ecx = MEM32(0x1CF64C);
    goto loc_0012A9FD;

loc_0012A7F4: ;
    PUSH32(esp, 0x1C6F74);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0012A802u); RECOMP_ABI_CALL(0x000E1740u, sub_000E1740); /* call 0x000E1740 */

loc_0012A802: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0012A80Eu); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_0012A80E: ;
    PUSH32(esp, 0x1C671C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0012A81Cu); RECOMP_ABI_CALL(0x000E1920u, sub_000E1920); /* call 0x000E1920 */

loc_0012A81C: ;
    edi = 0x1C6728;

loc_0012A821: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A9C7; /* je: equal / zero */

loc_0012A829: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A82Fu); RECOMP_ABI_CALL(0x00129E50u, sub_00129E50); /* call 0x00129E50 */

loc_0012A82F: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A9BA; /* je: equal / zero */

loc_0012A83C: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A9BA; /* je: equal / zero */

loc_0012A846: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A8DA; /* je: equal / zero */

loc_0012A84E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A918; /* je: equal / zero */

loc_0012A856: ;
    ecx = esp + 0x3C;
    MEM32(esp + 0x34) = edi;
    PUSH32(esp, 0x0012A863u); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_0012A863: ;
    ecx = esp + 0x4C;
    PUSH32(esp, 0x0012A86Cu); RECOMP_ABI_CALL(0x000E16A0u, sub_000E16A0); /* call 0x000E16A0 */

loc_0012A86C: ;
    PUSH32(esp, esi);
    ecx = esp + 0x38;
    MEM32(esp + 0x60) = ebx;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x3C) = ebp;
    PUSH32(esp, 0x0012A882u); RECOMP_ABI_CALL(0x0012A3F0u, sub_0012A3F0); /* call 0x0012A3F0 */

loc_0012A882: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A89B; /* je: equal / zero */

loc_0012A888: ;
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x0012A89Bu); RECOMP_ABI_CALL(0x001225C0u, sub_001225C0); /* call 0x001225C0 */

loc_0012A89B: ;
    eax = MEM32(esp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x58) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012A8B0; /* je: equal / zero */

loc_0012A8A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A8ADu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0012A8AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012A8B0: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x48) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012A8C5; /* je: equal / zero */

loc_0012A8BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A8C2u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0012A8C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012A8C5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x34) = 0x1C66DC;
    if (CMP_NE(_fa, _fb)) goto loc_0012A821; /* jne: not equal / not zero */

loc_0012A8D5: ;
    goto loc_0012A9C7;

loc_0012A8DA: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x3E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A902; /* je: equal / zero */

loc_0012A8E0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A8ED; /* je: equal / zero */

loc_0012A8E4: ;
    PUSH32(esp, 7);
    ecx = ebp;
    PUSH32(esp, 0x0012A8EDu); RECOMP_ABI_CALL(0x001218B0u, sub_001218B0); /* call 0x001218B0 */

loc_0012A8ED: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0012A8F6u); RECOMP_ABI_CALL(0x000148B0u, sub_000148B0); /* call 0x000148B0 */

loc_0012A8F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0012A902: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0012A90Bu); RECOMP_ABI_CALL(0x000148B0u, sub_000148B0); /* call 0x000148B0 */

loc_0012A90B: ;
    POP32(esp, edi);
    eax = esi + 2;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0012A918: ;
    ecx = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A923u); RECOMP_ABI_CALL(0x0012A230u, sub_0012A230); /* call 0x0012A230 */

loc_0012A923: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A9A5; /* je: equal / zero */

loc_0012A929: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A935; /* jne: not equal / not zero */

loc_0012A931: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0012A93B;

loc_0012A935: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0012A93B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0012A947u); RECOMP_ABI_CALL(0x000E17E0u, sub_000E17E0); /* call 0x000E17E0 */

loc_0012A947: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A956u); RECOMP_ABI_CALL(0x000E1390u, sub_000E1390); /* call 0x000E1390 */

loc_0012A956: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A98F; /* je: equal / zero */

loc_0012A95D: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A969; /* jne: not equal / not zero */

loc_0012A965: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0012A96F;

loc_0012A969: ;
    esi = MEM32(esp + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0012A96F: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x0012A978u); RECOMP_ABI_CALL(0x000148B0u, sub_000148B0); /* call 0x000148B0 */

loc_0012A978: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0012A981u); RECOMP_ABI_CALL(0x000148B0u, sub_000148B0); /* call 0x000148B0 */

loc_0012A981: ;
    eax = esi + edi + -1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0012A98F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A99C; /* je: equal / zero */

loc_0012A993: ;
    PUSH32(esp, 8);
    ecx = ebp;
    PUSH32(esp, 0x0012A99Cu); RECOMP_ABI_CALL(0x001218B0u, sub_001218B0); /* call 0x001218B0 */

loc_0012A99C: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x0012A9A5u); RECOMP_ABI_CALL(0x000148B0u, sub_000148B0); /* call 0x000148B0 */

loc_0012A9A5: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0012A9AEu); RECOMP_ABI_CALL(0x000148B0u, sub_000148B0); /* call 0x000148B0 */

loc_0012A9AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0012A9BA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A9C7; /* je: equal / zero */

loc_0012A9BE: ;
    PUSH32(esp, 6);
    ecx = ebp;
    PUSH32(esp, 0x0012A9C7u); RECOMP_ABI_CALL(0x001218B0u, sub_001218B0); /* call 0x001218B0 */

loc_0012A9C7: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x20) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012AA06; /* je: equal / zero */

loc_0012A9D3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A9D9u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0012A9D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0012A9E8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AA06; /* je: equal / zero */

loc_0012A9EC: ;
    MEM8(ebp + 0x2C) = 1;
    MEM32(ebp + 0x30) = 3;
    ecx = MEM32(0x1CF648);

loc_0012A9FD: ;
    PUSH32(esp, ecx);
    ecx = ebp + 0x34;
    PUSH32(esp, 0x0012AA06u); RECOMP_ABI_CALL(0x000E18A0u, sub_000E18A0); /* call 0x000E18A0 */

loc_0012AA06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012AA20
 * Original: 0x0012AA20 - 0x0012AABB (155 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AA20(void)
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

loc_0012AA20: ;
    eax = MEM32(0x1C6F7C);
    fp_push(MEMF(0x1C6F7C)); /* fld float */
    MEM32(ecx + 0x24) = eax;
    fp_top() = -fp_top(); /* fchs */
    MEM32(ecx + 0x2C) = eax;
    MEMF(ecx + 0x30) = (float)fp_top(); /* fst */
    MEMF(ecx + 0x34) = (float)fp_top(); /* fst */
    edx = eax;
    MEM32(ecx + 0x28) = edx;
    MEMF(ecx + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0x4C) = eax;
    MEM32(ecx + 0x60) = 0x7F7FFFFF;
    MEM32(ecx + 0x64) = eax;
    MEM32(ecx + 0x68) = eax;
    MEM32(ecx + 0x70) = eax;
    MEM32(ecx + 0x74) = eax;
    edx = 0xFF7FFFFFu;
    MEM32(ecx + 0x6C) = edx;
    MEM32(ecx + 0x78) = eax;
    MEM32(ecx + 0x7C) = 0x7F7FFFFF;
    MEM32(ecx + 0x80) = eax;
    MEM32(ecx + 0x84) = eax;
    MEM32(ecx + 0x88) = edx;
    MEM32(ecx + 0x8C) = eax;
    MEM32(ecx + 0x90) = eax;
    MEM32(ecx + 0x94) = eax;
    MEM32(ecx + 0x98) = 0x7F7FFFFF;
    MEM32(ecx + 0x9C) = eax;
    MEM32(ecx + 0xA0) = eax;
    MEM32(ecx + 0xA4) = edx;
    MEM32(ecx) = 1;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012AAC0
 * Original: 0x0012AAC0 - 0x0012ABD0 (272 bytes, 88 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AAC0(void)
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

loc_0012AAC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x24;
    PUSH32(esp, 0x0012AAD1u); RECOMP_ABI_CALL(0x000D2550u, sub_000D2550); /* call 0x000D2550 */

loc_0012AAD1: ;
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(esi + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x44)); /* fadd dword ptr [esi + 0x44] */
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x4C) = eax;
    fp_push(MEMF(edi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x60)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x60] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012AB0F; /* jp: parity */

loc_0012AAFE: ;
    eax = MEM32(edi);
    MEM32(esi + 0x60) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esi + 0x64) = ecx;
    edx = MEM32(edi + 8);
    MEM32(esi + 0x68) = edx;

loc_0012AB0F: ;
    fp_push(MEMF(edi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x6C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x6c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012AB2C; /* jne: not equal / not zero */

loc_0012AB1B: ;
    eax = MEM32(edi);
    MEM32(esi + 0x6C) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esi + 0x70) = ecx;
    edx = MEM32(edi + 8);
    MEM32(esi + 0x74) = edx;

loc_0012AB2C: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x7C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x7c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012AB4D; /* jp: parity */

loc_0012AB39: ;
    eax = MEM32(edi);
    MEM32(esi + 0x78) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esi + 0x7C) = ecx;
    edx = MEM32(edi + 8);
    MEM32(esi + 0x80) = edx;

loc_0012AB4D: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x88)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x88] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012AB77; /* jne: not equal / not zero */

loc_0012AB5D: ;
    eax = MEM32(edi);
    MEM32(esi + 0x84) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esi + 0x88) = ecx;
    edx = MEM32(edi + 8);
    MEM32(esi + 0x8C) = edx;

loc_0012AB77: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x98)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x98] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012ABA1; /* jp: parity */

loc_0012AB87: ;
    eax = MEM32(edi);
    MEM32(esi + 0x90) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esi + 0x94) = ecx;
    edx = MEM32(edi + 8);
    MEM32(esi + 0x98) = edx;

loc_0012ABA1: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0xA4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0xa4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012ABCB; /* jne: not equal / not zero */

loc_0012ABB1: ;
    eax = MEM32(edi);
    MEM32(esi + 0x9C) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esi + 0xA0) = ecx;
    edx = MEM32(edi + 8);
    MEM32(esi + 0xA4) = edx;

loc_0012ABCB: ;
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
 * sub_0012ABD0
 * Original: 0x0012ABD0 - 0x0012AD11 (321 bytes, 101 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0012ABD0(void)
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

loc_0012ABD0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    edx = esi + 0x6C;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    ecx = esi + 0x60;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x28)); /* fadd dword ptr [esi + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x2C)); /* fadd dword ptr [esi + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x1C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x20) = eax;
    fp_push((double)SMEM32(esi + 0x4C)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) / fp_top()); /* fdivr dword ptr [0x1c91d0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3C)); /* fmul dword ptr [esi + 0x3c] */
    MEMF(esi + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x48) = eax;
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_push(MEMF(esi + 0x88)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x7C)); /* fsub dword ptr [esi + 0x7c] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012AC63; /* jne: not equal / not zero */

loc_0012AC54: ;
    fp_pop(); /* fstp st(0) */
    ecx = esi + 0x78;
    fp_push(MEMF(esp + 4)); /* fld float */
    edx = esi + 0x84;

loc_0012AC63: ;
    fp_push(MEMF(esi + 0xA4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x98)); /* fsub dword ptr [esi + 0x98] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012AC86; /* jne: not equal / not zero */

loc_0012AC7A: ;
    ecx = esi + 0x90;
    edx = esi + 0x9C;

loc_0012AC86: ;
    fp_push(MEMF(edx)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x58) = eax;
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
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
    PUSH32(esp, 0x0012ACFAu); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_0012ACFA: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 2;
    MEMF(esi + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
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
 * sub_0012AD20
 * Original: 0x0012AD20 - 0x0012AE59 (313 bytes, 114 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AD20(void)
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

loc_0012AD20: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    fp_push(MEMF(edi)); /* fld float */
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x14)); /* fsub dword ptr [esi + 0x14] */
    PUSH32(esp, ecx);
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x18)); /* fsub dword ptr [esi + 0x18] */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x1C)); /* fsub dword ptr [esi + 0x1c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0012AD5Bu); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_0012AD5B: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x20] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012AD6D; /* jne: not equal / not zero */

loc_0012AD68: ;
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0012AD6F;

loc_0012AD6D: ;
    fp_pop(); /* fstp st(0) */

loc_0012AD6F: ;
    fp_push(MEMF(edi)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x3C)); /* fsub dword ptr [esi + 0x3c] */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x40)); /* fsub dword ptr [esi + 0x40] */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x44)); /* fsub dword ptr [esi + 0x44] */
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
    PUSH32(esp, 0x0012AD9Fu); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_0012AD9F: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x48)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x48] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012ADB1; /* jne: not equal / not zero */

loc_0012ADAC: ;
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0012ADB3;

loc_0012ADB1: ;
    fp_pop(); /* fstp st(0) */

loc_0012ADB3: ;
    fp_push(MEMF(edi)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x50)); /* fsub dword ptr [esi + 0x50] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x54)); /* fsub dword ptr [esi + 0x54] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x58)); /* fsub dword ptr [esi + 0x58] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0012ADF1u); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_0012ADF1: ;
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x5C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x5c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012AE51; /* jne: not equal / not zero */

loc_0012AE02: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x5C)); /* fsub dword ptr [esi + 0x5c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x50)); /* fadd dword ptr [esi + 0x50] */
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x54)); /* fadd dword ptr [esi + 0x54] */
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x58)); /* fadd dword ptr [esi + 0x58] */
    MEMF(esi + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x5C)); /* fadd dword ptr [esi + 0x5c] */
    MEMF(esi + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0012AE51: ;
    POP32(esp, edi);
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
 * sub_0012AE60
 * Original: 0x0012AE60 - 0x0012AECB (107 bytes, 36 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0012AE60(void)
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

loc_0012AE60: ;
    eax = MEM32(ecx + 0x14);
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    MEM32(ecx + 4) = eax;
    edx = MEM32(ecx + 0x18);
    MEM32(ecx + 8) = edx;
    eax = MEM32(ecx + 0x1C);
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xC) = eax;
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012AE9D; /* jp: parity */

loc_0012AE85: ;
    edx = MEM32(ecx + 0x3C);
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    MEM32(ecx + 4) = edx;
    eax = MEM32(ecx + 0x40);
    MEM32(ecx + 8) = eax;
    edx = MEM32(ecx + 0x44);
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xC) = edx;

loc_0012AE9D: ;
    fp_push(MEMF(ecx + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012AEC2; /* jp: parity */

loc_0012AEAA: ;
    eax = MEM32(ecx + 0x50);
    fp_push(MEMF(ecx + 0x5C)); /* fld float */
    MEM32(ecx + 4) = eax;
    edx = MEM32(ecx + 0x54);
    MEM32(ecx + 8) = edx;
    eax = MEM32(ecx + 0x58);
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xC) = eax;

loc_0012AEC2: ;
    MEM32(ecx) = 0;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012AED0
 * Original: 0x0012AED0 - 0x0012AF1E (78 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AED0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0012AEF1; /* jge: greater or equal (signed >=) */

loc_0012AEE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012AEE6u); RECOMP_ABI_CALL(0x001025F0u, sub_001025F0); /* call 0x001025F0 */

loc_0012AEE6: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */

loc_0012AEF1: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0012AF19; /* jle: less or equal (signed <=) */

loc_0012AEF3: ;
    PUSH32(esp, edi);

loc_0012AEF4: ;
    edi = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0012AF01u); RECOMP_ABI_CALL(0x0011B270u, sub_0011B270); /* call 0x0011B270 */

loc_0012AF01: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AF16; /* je: equal / zero */

loc_0012AF08: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(esp + 0x10);
    if (CMP_G(_fas, _fbs)) goto loc_0012AEF4; /* jg: greater (signed >) */

loc_0012AF10: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012AF16: ;
    eax = edi;
    POP32(esp, edi);

loc_0012AF19: ;
    POP32(esp, esi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012AF20
 * Original: 0x0012AF20 - 0x0012AF21 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AF20(void)
{

loc_0012AF20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012AF30
 * Original: 0x0012AF30 - 0x0012B000 (208 bytes, 58 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AF30(void)
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

loc_0012AF30: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF390)); /* fmul dword ptr [0x1af390] */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(ecx + 0xC) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 0x10) = esi;
    esi = MEM32(edx + 8);
    MEM32(ecx + 0x14) = esi;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x18) = esi;
    edi = MEM32(eax);
    MEM32(ecx + 0x1C) = edi;
    edi = MEM32(eax + 4);
    MEM32(ecx + 0x20) = edi;
    edi = MEM32(eax + 8);
    MEM32(ecx + 0x24) = edi;
    edi = MEM32(edx);
    MEM32(ecx + 0x28) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 0x2C) = edi;
    edi = MEM32(edx + 8);
    MEM32(ecx + 0x30) = edi;
    MEM32(ecx + 0x34) = esi;
    esi = MEM32(eax);
    MEM32(ecx + 0xE0) = esi;
    esi = MEM32(eax + 4);
    MEM32(ecx + 0xE4) = esi;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0xE8) = eax;
    eax = MEM32(edx);
    MEM32(ecx + 0xEC) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 0xF0) = eax;
    edx = MEM32(edx + 8);
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 0xF4) = edx;
    edx = MEM32(eax);
    MEM32(ecx + 0xF8) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0xFC) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x100) = eax;
    MEMF(ecx + 0x108) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    MEM32(ecx + 0x104) = 2;
    MEM32(ecx + 0x10C) = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012B000
 * Original: 0x0012B000 - 0x0012B024 (36 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B000(void)
{

loc_0012B000: ;
    eax = MEM32(ecx + 0x104);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = eax + ecx + -28;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012B030
 * Original: 0x0012B030 - 0x0012B1F2 (450 bytes, 125 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0012B030(void)
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

loc_0012B030: ;
    edx = MEM32(ecx + 0x104);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    fp_push(MEMF(eax + ecx + -32)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x108)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x108] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012B0C3; /* jne: not equal / not zero */

loc_0012B050: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012B0B9; /* jge: greater or equal (signed >=) */

loc_0012B055: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x104) = edx;
    eax = edx + -2;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    esi = MEM32(eax + ecx);
    MEM32(edx + ecx + -28) = esi;
    esi = MEM32(eax + ecx + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx + ecx + -28;
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    edx = MEM32(ecx + 0x104);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    eax = edx + ecx + -16;
    edx = MEM32(ecx + 0xEC);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0xF0);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0xF4);
    MEM32(eax + 8) = edx;
    eax = MEM32(ecx + 0x104);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEM32(eax + ecx + -4) = 0;
    goto loc_0012B0C3;

loc_0012B0B9: ;
    MEM32(ecx + 0x10C) = 0;

loc_0012B0C3: ;
    esi = MEM32(ecx + 0x104);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012B1A6; /* jle: less or equal (signed <=) */

loc_0012B0D2: ;
    edx = MEM32(esp + 0x48);
    eax = ecx + 0x14;
    /* nop */

loc_0012B0E0: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -24)); /* fadd dword ptr [eax - 0x18] */
    MEMF(eax + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + -36)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xF8)); /* fadd dword ptr [ecx + 0xf8] */
    fp_push(MEMF(eax + -32)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xFC)); /* fadd dword ptr [ecx + 0xfc] */
    fp_push(MEMF(eax + -28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x100)); /* fadd dword ptr [ecx + 0x100] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -48)); /* fadd dword ptr [eax - 0x30] */
    MEMF(eax + -48) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -44)); /* fadd dword ptr [eax - 0x2c] */
    MEMF(eax + -44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -40)); /* fadd dword ptr [eax - 0x28] */
    MEMF(eax + -40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -36)); /* fmul dword ptr [eax - 0x24] */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -32)); /* fmul dword ptr [eax - 0x20] */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -28)); /* fmul dword ptr [eax - 0x1c] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -36)); /* fadd dword ptr [eax - 0x24] */
    MEMF(eax + -36) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -32)); /* fadd dword ptr [eax - 0x20] */
    MEMF(eax + -32) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -28)); /* fadd dword ptr [eax - 0x1c] */
    MEMF(eax + -28) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_0012B0E0; /* jne: not equal / not zero */

loc_0012B1A6: ;
    edx = MEM32(ecx + 0x104);
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xF8)); /* fmul dword ptr [ecx + 0xf8] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xFC)); /* fmul dword ptr [ecx + 0xfc] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x100)); /* fmul dword ptr [ecx + 0x100] */
    eax = edx + ecx + -28;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012B200
 * Original: 0x0012B200 - 0x0012B20D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B200(void)
{

loc_0012B200: ;
    eax = ecx;
    MEM32(eax + 0x10C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B210
 * Original: 0x0012B210 - 0x0012B216 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B210: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x1ADDA0)); return; /* indirect tail jmp */

}

/**
 * sub_0012B216
 * Original: 0x0012B216 - 0x0012B21C (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B216(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B216: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x1ADEE4)); return; /* indirect tail jmp */

}

/**
 * sub_0012B21C
 * Original: 0x0012B21C - 0x0012B221 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B21C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B21C: ;
    g_seh_ebp = ebp; sub_0012C777(); return; /* tail jmp 0x0012C777 */

}

/**
 * sub_0012B221
 * Original: 0x0012B221 - 0x0012B222 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B221(void)
{

loc_0012B221: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B222
 * Original: 0x0012B222 - 0x0012B25A (56 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B222(void)
{

loc_0012B222: ;
    eax = 0x12CB7C;
    MEM32(0x1CF790) = eax;
    MEM32(0x1CF794) = 0x12C827;
    MEM32(0x1CF798) = 0x12C88C;
    MEM32(0x1CF79C) = 0x12C7CF;
    MEM32(0x1CF7A0) = 0x12C872;
    MEM32(0x1CF7A4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B25A
 * Original: 0x0012B25A - 0x0012B267 (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B25A(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0012B25A: ;
    PUSH32(esp, 0x0012B25Fu); RECOMP_ABI_CALL(0x0012B222u, sub_0012B222); /* call 0x0012B222 */

loc_0012B25F: ;
    PUSH32(esp, 0x0012B264u); RECOMP_ABI_CALL(0x0012CBCDu, sub_0012CBCD); /* call 0x0012CBCD */

loc_0012B264: ;
    /* FPU: fnclex  */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012B267
 * Original: 0x0012B267 - 0x0012B275 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B267(void)
{

loc_0012B267: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0012B272u); RECOMP_ABI_CALL(0x0012CC06u, sub_0012CC06); /* call 0x0012CC06 */

loc_0012B272: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B278
 * Original: 0x0012B278 - 0x0012B2ED (117 bytes, 37 insns)
 * Category: crt
 * CC: cdecl, 0 params, returns float_sse
 * Frame: standard_frame
 */
void sub_0012B278(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0012B278: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    SMEM64(esp + 0x10) = (int64_t)recomp_fist(fp_top(), g_fp_control_word, 64); fp_pop(); /* fistp */
    fp_push((double)SMEM64(esp + 0x10)); /* fild */
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B2D7; /* je: equal / zero */

loc_0012B29B: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0012B2BF; /* jns: not sign (positive) */

loc_0012B2A1: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp);
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x7FFFFFFF)) >> 32) & 1);
    ecx = ecx + 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    edx = MEM32(esp + 0x14);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_0012B2EB;

loc_0012B2BF: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp);
    _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x7FFFFFFF)) >> 32) & 1);
    ecx = ecx + 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = MEM32(esp + 0x14);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    goto loc_0012B2EB;

loc_0012B2D7: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFFFF (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0012B29B; /* jne: not equal / not zero */

loc_0012B2E3: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_0012B2EB: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012B2ED
 * Original: 0x0012B2ED - 0x0012B2F6 (9 bytes, 4 insns)
 * Category: crt
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B2ED(void)
{

loc_0012B2ED: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x0012B2F4u); RECOMP_ABI_CALL(0x0012CC44u, sub_0012CC44); /* call 0x0012CC44 */

loc_0012B2F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B2F6
 * Original: 0x0012B2F6 - 0x0012B376 (128 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B2F6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B2F6: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x1F6034));
    PUSH32(esp, 0x0012B302u); RECOMP_ABI_CALL(0x0012CE2Du, sub_0012CE2D); /* call 0x0012CE2D */

loc_0012B302: ;
    POP32(esp, ecx);
    ecx = MEM32(0x1F6030);
    esi = eax;
    eax = MEM32(0x1F6034);
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012B369; /* jae: above or equal (unsigned >=) */

loc_0012B31B: ;
    ecx = 0x800;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012B326; /* jae: above or equal (unsigned >=) */

loc_0012B324: ;
    ecx = esi;

loc_0012B326: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012B32Fu); RECOMP_ABI_CALL(0x0012CC60u, sub_0012CC60); /* call 0x0012CC60 */

loc_0012B32F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0012B34C; /* jne: not equal / not zero */

loc_0012B335: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x1F6034));
    PUSH32(esp, 0x0012B344u); RECOMP_ABI_CALL(0x0012CC60u, sub_0012CC60); /* call 0x0012CC60 */

loc_0012B344: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0012B34C; /* jne: not equal / not zero */

loc_0012B34A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012B34C: ;
    ecx = MEM32(0x1F6030);
    _fb = (uint32_t)(MEM32(0x1F6034)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(0x1F6034);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x1F6034) = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = eax + ecx * 4;
    MEM32(0x1F6030) = ecx;

loc_0012B369: ;
    MEM32(ecx) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x1F6030) = MEM32(0x1F6030) + 4;
    _fa = (uint32_t)(MEM32(0x1F6030)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B376
 * Original: 0x0012B376 - 0x0012B39E (40 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0012B376(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B376: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x0012B380u); RECOMP_ABI_CALL(0x0012CC32u, sub_0012CC32); /* call 0x0012CC32 */

loc_0012B380: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(0x1F6034) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0012B38E; /* jne: not equal / not zero */

loc_0012B38A: ;
    PUSH32(esp, 0x18);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_0012B38E: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x1F6034);
    MEM32(0x1F6030) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B39E
 * Original: 0x0012B39E - 0x0012B3D0 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B39E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B39E: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x1C6F88);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012B3AAu); RECOMP_ABI_CALL(0x0012B4F0u, sub_0012B4F0); /* call 0x0012B4F0 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0012B3AA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012B3AFu); RECOMP_ABI_CALL(0x0012CD4Du, sub_0012CD4D); /* call 0x0012CD4D */

loc_0012B3AF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012B3BBu); RECOMP_ABI_CALL(0x0012B2F6u, sub_0012B2F6); /* call 0x0012B2F6 */

loc_0012B3BB: ;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012B3C7u); RECOMP_ABI_CALL(0x0012B3D0u, sub_0012B3D0); /* call 0x0012B3D0 */

loc_0012B3C7: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012B3CFu); RECOMP_ABI_CALL(0x0012B52Bu, sub_0012B52B); /* call 0x0012B52B */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0012B3CF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B3D0
 * Original: 0x0012B3D0 - 0x0012B3D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B3D0(void)
{

loc_0012B3D0: ;
    PUSH32(esp, 0x0012B3D5u); RECOMP_ABI_CALL(0x0012CD56u, sub_0012CD56); /* call 0x0012CD56 */

loc_0012B3D5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B3D6
 * Original: 0x0012B3D6 - 0x0012B3E8 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B3D6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0012B3D6: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x0012B3DFu); RECOMP_ABI_CALL(0x0012B39Eu, sub_0012B39E); /* call 0x0012B39E */

loc_0012B3DF: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B3E8
 * Original: 0x0012B3E8 - 0x0012B440 (88 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0012B3E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B3E8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0x7FFFFFFF;
    MEM32(ebp + -20) = 0x42;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -32) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012B417u); RECOMP_ABI_CALL(0x0012D02Du, sub_0012D02D); /* call 0x0012D02D */

loc_0012B417: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0012B43A; /* je: equal / zero */

loc_0012B420: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0012B42D; /* js: sign (negative) */

loc_0012B425: ;
    eax = MEM32(ebp + -32);
    MEM8(eax) = MEM8(eax) & 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_0012B43A;

loc_0012B42D: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012B438u); RECOMP_ABI_CALL(0x0012CE86u, sub_0012CE86); /* call 0x0012CE86 */

loc_0012B438: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0012B43A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B440
 * Original: 0x0012B440 - 0x0012B471 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B440: ;
    _fa = (uint32_t)(MEM32(0x1CF7B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CF7B4), 1 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_0012B45A; /* jle: less or equal (signed <=) */

loc_0012B44E: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012B456u); RECOMP_ABI_CALL(0x0012D7B4u, sub_0012D7B4); /* call 0x0012D7B4 */

loc_0012B456: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0012B466;

loc_0012B45A: ;
    eax = MEM32(0x1CF7AC);
    eax = ZX8(MEM8(eax + esi * 2));
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0012B466: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esi + 0x20;
    if (CMP_NE(_fa, _fb)) goto loc_0012B46F; /* jne: not equal / not zero */

loc_0012B46D: ;
    eax = esi;

loc_0012B46F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B471
 * Original: 0x0012B471 - 0x0012B4C9 (88 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B471(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B471: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    goto loc_0012B479;

loc_0012B478: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012B479: ;
    eax = ZX8(MEM8(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012B482u); RECOMP_ABI_CALL(0x0012D7D5u, sub_0012D7D5); /* call 0x0012D7D5 */

loc_0012B482: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0012B478; /* jne: not equal / not zero */

loc_0012B487: ;
    ecx = ZX8(MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2D (32-bit) */
    edx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012B497; /* je: equal / zero */

loc_0012B492: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012B49B; /* jne: not equal / not zero */

loc_0012B497: ;
    ecx = ZX8(MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012B49B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012B49D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012B4AC; /* jl: less (signed <) */

loc_0012B4A2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012B4AC; /* jg: greater (signed >) */

loc_0012B4A7: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0012B4AF;

loc_0012B4AC: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012B4AF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B4C0; /* je: equal / zero */

loc_0012B4B4: ;
    eax = eax + eax * 4;
    eax = ecx + eax * 2;
    ecx = ZX8(MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012B49D;

loc_0012B4C0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2D (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0012B4C8; /* jne: not equal / not zero */

loc_0012B4C6: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0012B4C8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B4C9
 * Original: 0x0012B4C9 - 0x0012B4CE (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B4C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B4C9: ;
    g_seh_ebp = ebp; sub_0012B471(); return; /* tail jmp 0x0012B471 */

}

/**
 * sub_0012B4CE
 * Original: 0x0012B4CE - 0x0012B4F0 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B4CE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B4CE: ;
    PUSH32(esp, 0x0012B4D3u); RECOMP_ABI_CALL(0x0012D805u, sub_0012D805); /* call 0x0012D805 */

loc_0012B4D3: ;
    ecx = MEM32(eax + 0x14);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x14) = ecx;
    eax = ecx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B4F0
 * Original: 0x0012B4F0 - 0x0012B52B (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B4F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B4F0: ;
    PUSH32(esp, 0x12DA18);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x10) = ebp;
    ebp = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - eax;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(ebp + -8);
    MEM32(ebp + -24) = esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    MEM32(ebp + -8) = eax;
    eax = ebp + -16;
    MEM32(XBOX_FS_BASE) = eax;
    g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0012B52B
 * Original: 0x0012B52B - 0x0012B53C (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B52B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B52B: ;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    PUSH32(esp, ecx);
    g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0012B540
 * Original: 0x0012B540 - 0x0012B574 (52 bytes, 19 insns)
 * Category: crt
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B540: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x10);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0xC);
    if ((_fa != 0)) goto loc_0012B559; /* jne: not equal / not zero */

loc_0012B550: ;
    eax = MEM32(esp + 4);
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esp += 20; return; /* ret 16 */

loc_0012B559: ;
    PUSH32(esp, ebx);
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = eax;
    eax = MEM32(esp + 8);
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x14);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0012B580
 * Original: 0x0012B580 - 0x0012B6EF (367 bytes, 97 insns)
 * Category: crt
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0012B580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0012B580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    eax = ecx;
    edx = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0012B5A0; /* jbe: below or equal (unsigned <=) */

loc_0012B598: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0012B71C(); return; } /* jb: below (unsigned <) */

loc_0012B5A0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 3 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0012B5BC; /* jne: not equal / not zero */

loc_0012B5A8: ;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0012B5DC; /* jb: below (unsigned <) */

loc_0012B5B3: ;
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
    { uint32_t _jt = MEM32(edx * 4 + 0x12B6CC); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0012B6DCu) goto loc_0012B6DC;
    if (_jt == 0x0012B6E4u) goto loc_0012B6E4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012B5BC: ;
    eax = edi;
    edx = 3;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(4));
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (_cf) goto loc_0012B5D4; /* jb: below (unsigned <) */

loc_0012B5C8: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _jt = MEM32(eax * 4 + 0x12B5E0); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0012B5F0u) goto loc_0012B5F0;
    if (_jt == 0x0012B61Cu) goto loc_0012B61C;
    if (_jt == 0x0012B640u) goto loc_0012B640;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012B5D4: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x12B6DC)); return; /* indirect tail jmp */

loc_0012B5DC: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x12B660); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0012B680u) goto loc_0012B680;
    if (_jt == 0x0012B688u) goto loc_0012B688;
    if (_jt == 0x0012B690u) goto loc_0012B690;
    if (_jt == 0x0012B698u) goto loc_0012B698;
    if (_jt == 0x0012B6A0u) goto loc_0012B6A0;
    if (_jt == 0x0012B6A8u) goto loc_0012B6A8;
    if (_jt == 0x0012B6B0u) goto loc_0012B6B0;
    if (_jt == 0x0012B6C3u) goto loc_0012B6C3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012B5F0: ;
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    MEM8(edi + 1) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(edi + 2) = LO8(eax);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(3)) >> 32) & 1);
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(3)) >> 32) & 1);
    edi = edi + 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0012B5DC; /* jb: below (unsigned <) */

loc_0012B610: ;
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
    { uint32_t _jt = MEM32(edx * 4 + 0x12B6CC); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0012B6DCu) goto loc_0012B6DC;
    if (_jt == 0x0012B6E4u) goto loc_0012B6E4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012B61C: ;
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(edi + 1) = LO8(eax);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(2)) >> 32) & 1);
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0012B5DC; /* jb: below (unsigned <) */

loc_0012B636: ;
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
    { uint32_t _jt = MEM32(edx * 4 + 0x12B6CC); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0012B6DCu) goto loc_0012B6DC;
    if (_jt == 0x0012B6E4u) goto loc_0012B6E4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012B640: ;
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(1)) >> 32) & 1);
    esi = esi + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(1)) >> 32) & 1);
    edi = edi + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0012B5DC; /* jb: below (unsigned <) */

loc_0012B654: ;
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
    { uint32_t _jt = MEM32(edx * 4 + 0x12B6CC); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0012B6DCu) goto loc_0012B6DC;
    if (_jt == 0x0012B6E4u) goto loc_0012B6E4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012B680: ;
    eax = MEM32(esi + ecx * 4 + -28);
    MEM32(edi + ecx * 4 + -28) = eax;

loc_0012B688: ;
    eax = MEM32(esi + ecx * 4 + -24);
    MEM32(edi + ecx * 4 + -24) = eax;

loc_0012B690: ;
    eax = MEM32(esi + ecx * 4 + -20);
    MEM32(edi + ecx * 4 + -20) = eax;

loc_0012B698: ;
    eax = MEM32(esi + ecx * 4 + -16);
    MEM32(edi + ecx * 4 + -16) = eax;

loc_0012B6A0: ;
    eax = MEM32(esi + ecx * 4 + -12);
    MEM32(edi + ecx * 4 + -12) = eax;

loc_0012B6A8: ;
    eax = MEM32(esi + ecx * 4 + -8);
    MEM32(edi + ecx * 4 + -8) = eax;

loc_0012B6B0: ;
    eax = MEM32(esi + ecx * 4 + -4);
    MEM32(edi + ecx * 4 + -4) = eax;
    eax = ecx * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012B6C3: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x12B6CC); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0012B6DCu) goto loc_0012B6DC;
    if (_jt == 0x0012B6E4u) goto loc_0012B6E4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012B6DC: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0012B6E4: ;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B6F0
 * Original: 0x0012B6F0 - 0x0012B701 (17 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B6F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B6F0: ;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    MEM8(edi + 1) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B71C
 * Original: 0x0012B71C - 0x0012B8C0 (420 bytes, 148 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B71C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B71C: ;
    esi = ecx + esi + -4;
    edi = ecx + edi + -4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 3 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0012B750; /* jne: not equal / not zero */

loc_0012B72C: ;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0012B744; /* jb: below (unsigned <) */

loc_0012B737: ;
    g_df = 1; /* std */
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
    g_df = 0; /* cld */
    { uint32_t _jt = MEM32(edx * 4 + 0x12B868); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0012B878u) goto loc_0012B878;
    if (_jt == 0x0012B880u) goto loc_0012B880;
    if (_jt == 0x0012B890u) goto loc_0012B890;
    if (_jt == 0x0012B8A4u) goto loc_0012B8A4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    edi = edi;

loc_0012B744: ;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint32_t _jt = MEM32(ecx * 4 + 0x12B818); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0012B81Cu) goto loc_0012B81C;
    if (_jt == 0x0012B824u) goto loc_0012B824;
    if (_jt == 0x0012B82Cu) goto loc_0012B82C;
    if (_jt == 0x0012B834u) goto loc_0012B834;
    if (_jt == 0x0012B83Cu) goto loc_0012B83C;
    if (_jt == 0x0012B844u) goto loc_0012B844;
    if (_jt == 0x0012B84Cu) goto loc_0012B84C;
    if (_jt == 0x0012B85Fu) goto loc_0012B85F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */

loc_0012B750: ;
    eax = edi;
    edx = 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0012B768; /* jb: below (unsigned <) */

loc_0012B75C: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _jt = MEM32(eax * 4 + 0x12B76C); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0012B77Cu) goto loc_0012B77C;
    if (_jt == 0x0012B7A0u) goto loc_0012B7A0;
    if (_jt == 0x0012B7C8u) goto loc_0012B7C8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012B768: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x12B868); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0012B878u) goto loc_0012B878;
    if (_jt == 0x0012B880u) goto loc_0012B880;
    if (_jt == 0x0012B890u) goto loc_0012B890;
    if (_jt == 0x0012B8A4u) goto loc_0012B8A4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    if (_flags /* jl: less (signed <) */) (void)0; /* goto loc_0012B729 - dead code, label not in function */

loc_0012B772: ;
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    SET_LO8(eax, MEM8(0xC80012B7u));
    SET_HI8(ebx, 0x12);

loc_0012B77C: ;
    SET_LO8(eax, MEM8(esi + 3));
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(edi + 3) = LO8(eax);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(1));
    esi = esi - 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(1));
    edi = edi - 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0012B744; /* jb: below (unsigned <) */

loc_0012B792: ;
    g_df = 1; /* std */
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
    g_df = 0; /* cld */
    { uint32_t _jt = MEM32(edx * 4 + 0x12B868); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0012B878u) goto loc_0012B878;
    if (_jt == 0x0012B880u) goto loc_0012B880;
    if (_jt == 0x0012B890u) goto loc_0012B890;
    if (_jt == 0x0012B8A4u) goto loc_0012B8A4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */

loc_0012B7A0: ;
    SET_LO8(eax, MEM8(esi + 3));
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(edi + 3) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(edi + 2) = LO8(eax);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(2));
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(2));
    edi = edi - 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0012B744; /* jb: below (unsigned <) */

loc_0012B7BC: ;
    g_df = 1; /* std */
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
    g_df = 0; /* cld */
    { uint32_t _jt = MEM32(edx * 4 + 0x12B868); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0012B878u) goto loc_0012B878;
    if (_jt == 0x0012B880u) goto loc_0012B880;
    if (_jt == 0x0012B890u) goto loc_0012B890;
    if (_jt == 0x0012B8A4u) goto loc_0012B8A4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */

loc_0012B7C8: ;
    SET_LO8(eax, MEM8(esi + 3));
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(edi + 3) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    MEM8(edi + 2) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(edi + 1) = LO8(eax);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(3));
    esi = esi - 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(3));
    edi = edi - 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0012B744; /* jb: below (unsigned <) */

loc_0012B7EE: ;
    g_df = 1; /* std */
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
    g_df = 0; /* cld */
    { uint32_t _jt = MEM32(edx * 4 + 0x12B868); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0012B878u) goto loc_0012B878;
    if (_jt == 0x0012B880u) goto loc_0012B880;
    if (_jt == 0x0012B890u) goto loc_0012B890;
    if (_jt == 0x0012B8A4u) goto loc_0012B8A4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0xB8) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xB8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(0xB8) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0xB8));
    SET_LO8(eax, LO8(eax) - 0xB8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0xB8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB8 (8-bit) */
    _cf = (int)(_fa < _fb);
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0xB84C0012u;
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    POP32(esp, edi);

loc_0012B81C: ;
    eax = MEM32(esi + ecx * 4 + 0x1C);
    MEM32(edi + ecx * 4 + 0x1C) = eax;

loc_0012B824: ;
    eax = MEM32(esi + ecx * 4 + 0x18);
    MEM32(edi + ecx * 4 + 0x18) = eax;

loc_0012B82C: ;
    eax = MEM32(esi + ecx * 4 + 0x14);
    MEM32(edi + ecx * 4 + 0x14) = eax;

loc_0012B834: ;
    eax = MEM32(esi + ecx * 4 + 0x10);
    MEM32(edi + ecx * 4 + 0x10) = eax;

loc_0012B83C: ;
    eax = MEM32(esi + ecx * 4 + 0xC);
    MEM32(edi + ecx * 4 + 0xC) = eax;

loc_0012B844: ;
    eax = MEM32(esi + ecx * 4 + 8);
    MEM32(edi + ecx * 4 + 8) = eax;

loc_0012B84C: ;
    eax = MEM32(esi + ecx * 4 + 4);
    MEM32(edi + ecx * 4 + 4) = eax;
    eax = ecx * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012B85F: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x12B868); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0012B878u) goto loc_0012B878;
    if (_jt == 0x0012B880u) goto loc_0012B880;
    if (_jt == 0x0012B890u) goto loc_0012B890;
    if (_jt == 0x0012B8A4u) goto loc_0012B8A4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    edi = edi;
    if (_flags /* js: sign (negative) */) (void)0; /* goto loc_0012B822 - dead code, label not in function */

loc_0012B86A: ;
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fa = (uint32_t)(MEM8(eax + -1198522350)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -1198522350), 0x12 (8-bit) */
    _cf = (int)(_fa < _fb);

loc_0012B878: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0012B880: ;
    SET_LO8(eax, MEM8(esi + 3));
    MEM8(edi + 3) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0012B890: ;
    SET_LO8(eax, MEM8(esi + 3));
    MEM8(edi + 3) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    MEM8(edi + 2) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0012B8A4: ;
    SET_LO8(eax, MEM8(esi + 3));
    MEM8(edi + 3) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    MEM8(edi + 2) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    MEM8(edi + 1) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B880
 * Original: 0x0012B880 - 0x0012B88D (13 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B880: ;
    SET_LO8(eax, MEM8(esi + 3));
    MEM8(edi + 3) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B890
 * Original: 0x0012B890 - 0x0012B8A3 (19 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B890: ;
    SET_LO8(eax, MEM8(esi + 3));
    MEM8(edi + 3) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    MEM8(edi + 2) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B8C0
 * Original: 0x0012B8C0 - 0x0012B8E0 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0012B8C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0012B8C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12B8D8);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012B8D8u); RECOMP_ABI_CALL(0x00136146u, sub_00136146); /* call 0x00136146 */

loc_0012B8D8: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B8E0
 * Original: 0x0012B8E0 - 0x0012B902 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B8E0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 4), 6 (32-bit) */
    eax = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0012B901; /* je: equal / zero */

loc_0012B8F2: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    MEM32(edx) = eax;
    eax = 3;

loc_0012B901: ;
    esp += 4; return; /* ret */

}
