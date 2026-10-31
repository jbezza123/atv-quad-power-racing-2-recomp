/**
 * ATV: Quad Power Racing 2 - Recompiled code chunk 27
 * Functions: 250 (0x00138EA0 - 0x0013AA90)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00138EA0
 * Original: 0x00138EA0 - 0x00138EAB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138EA0(void)
{

loc_00138EA0: ;
    eax = MEM32(0x1BC630);
    MEM32(0x1D8B54) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00138EB0
 * Original: 0x00138EB0 - 0x00138EBC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138EB0(void)
{

loc_00138EB0: ;
    PUSH32(esp, 0x13CDB0);
    PUSH32(esp, 0x00138EBAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_00138EBA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00138EC0
 * Original: 0x00138EC0 - 0x00138ECB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138EC0(void)
{

loc_00138EC0: ;
    eax = MEM32(0x1BC698);
    MEM32(0x1D8B60) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00138ED0
 * Original: 0x00138ED0 - 0x00138EDC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138ED0(void)
{

loc_00138ED0: ;
    PUSH32(esp, 0x13CDC0);
    PUSH32(esp, 0x00138EDAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_00138EDA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00138EE0
 * Original: 0x00138EE0 - 0x00138EEC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138EE0(void)
{

loc_00138EE0: ;
    PUSH32(esp, 0x13CDD0);
    PUSH32(esp, 0x00138EEAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_00138EEA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00138EF0
 * Original: 0x00138EF0 - 0x00138EFB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138EF0(void)
{

loc_00138EF0: ;
    eax = MEM32(0x1BC8FC);
    MEM32(0x1D9884) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00138F00
 * Original: 0x00138F00 - 0x00138F0B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138F00(void)
{

loc_00138F00: ;
    eax = MEM32(0x1BCA14);
    MEM32(0x1D9898) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00138F10
 * Original: 0x00138F10 - 0x00138F2C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138F10(void)
{

loc_00138F10: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0);
    ecx = 0x1D98A4;
    PUSH32(esp, 0x00138F2Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00138F2B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00138F30
 * Original: 0x00138F30 - 0x00138F4F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138F30(void)
{

loc_00138F30: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    ecx = 0x1D98A0;
    PUSH32(esp, 0x00138F4Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00138F4E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00138F50
 * Original: 0x00138F50 - 0x00138F6F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138F50(void)
{

loc_00138F50: ;
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D989C;
    PUSH32(esp, 0x00138F6Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00138F6E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00138F70
 * Original: 0x00138F70 - 0x00138F7B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138F70(void)
{

loc_00138F70: ;
    eax = MEM32(0x1BCA48);
    MEM32(0x1D98A8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00138F80
 * Original: 0x00138F80 - 0x00138F9C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138F80(void)
{

loc_00138F80: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0);
    ecx = 0x1D98B8;
    PUSH32(esp, 0x00138F9Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00138F9B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00138FA0
 * Original: 0x00138FA0 - 0x00138FBF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138FA0(void)
{

loc_00138FA0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    ecx = 0x1D98B4;
    PUSH32(esp, 0x00138FBEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00138FBE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00138FC0
 * Original: 0x00138FC0 - 0x00138FDF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138FC0(void)
{

loc_00138FC0: ;
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D98B0;
    PUSH32(esp, 0x00138FDEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00138FDE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00138FE0
 * Original: 0x00138FE0 - 0x00138FEB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138FE0(void)
{

loc_00138FE0: ;
    eax = MEM32(0x1BCBC8);
    MEM32(0x1D98BC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00138FF0
 * Original: 0x00138FF0 - 0x00138FFB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138FF0(void)
{

loc_00138FF0: ;
    eax = MEM32(0x1BCBDC);
    MEM32(0x1D98C8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00139000
 * Original: 0x00139000 - 0x00139013 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00139000(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00139000: ;
    fp_push(MEMF(0x1BCBEC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x1BCBE0)); /* fdiv dword ptr [0x1bcbe0] */
    MEMF(0x1D98CC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00139020
 * Original: 0x00139020 - 0x00139039 (25 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00139020(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00139020: ;
    fp_push(MEMF(0x1BCBE0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x1BCBF0)); /* fsub dword ptr [0x1bcbf0] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x1BCBE0)); /* fdiv dword ptr [0x1bcbe0] */
    MEMF(0x1D98D0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00139040
 * Original: 0x00139040 - 0x0013904B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139040(void)
{

loc_00139040: ;
    eax = MEM32(0x1BCE8C);
    MEM32(0x1D98D8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00139050
 * Original: 0x00139050 - 0x0013905C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139050(void)
{

loc_00139050: ;
    PUSH32(esp, 0x13CDE0);
    PUSH32(esp, 0x0013905Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013905A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00139060
 * Original: 0x00139060 - 0x0013906B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139060(void)
{

loc_00139060: ;
    eax = MEM32(0x1BD1D4);
    MEM32(0x1D98E0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00139070
 * Original: 0x00139070 - 0x0013907B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139070(void)
{

loc_00139070: ;
    eax = MEM32(0x1BD224);
    MEM32(0x1D98EC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00139080
 * Original: 0x00139080 - 0x0013909F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139080(void)
{

loc_00139080: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D98F0;
    PUSH32(esp, 0x0013909Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013909E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001390A0
 * Original: 0x001390A0 - 0x001390AB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001390A0(void)
{

loc_001390A0: ;
    eax = MEM32(0x1BD258);
    MEM32(0x1D9900) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001390B0
 * Original: 0x001390B0 - 0x001390C6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001390B0(void)
{

loc_001390B0: ;
    ecx = 0x1D9A58;
    PUSH32(esp, 0x001390BAu); RECOMP_ABI_CALL(0x00093930u, sub_00093930); /* call 0x00093930 */

loc_001390BA: ;
    PUSH32(esp, 0x13CE40);
    PUSH32(esp, 0x001390C4u); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_001390C4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001390D0
 * Original: 0x001390D0 - 0x001390E6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001390D0(void)
{

loc_001390D0: ;
    ecx = 0x1D9908;
    PUSH32(esp, 0x001390DAu); RECOMP_ABI_CALL(0x00093930u, sub_00093930); /* call 0x00093930 */

loc_001390DA: ;
    PUSH32(esp, 0x13CDF0);
    PUSH32(esp, 0x001390E4u); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_001390E4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001390F0
 * Original: 0x001390F0 - 0x00139106 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001390F0(void)
{

loc_001390F0: ;
    ecx = 0x1D9B38;
    PUSH32(esp, 0x001390FAu); RECOMP_ABI_CALL(0x000931C0u, sub_000931C0); /* call 0x000931C0 */

loc_001390FA: ;
    PUSH32(esp, 0x13CE00);
    PUSH32(esp, 0x00139104u); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_00139104: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00139110
 * Original: 0x00139110 - 0x00139126 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139110(void)
{

loc_00139110: ;
    ecx = 0x1D9978;
    PUSH32(esp, 0x0013911Au); RECOMP_ABI_CALL(0x000932D0u, sub_000932D0); /* call 0x000932D0 */

loc_0013911A: ;
    PUSH32(esp, 0x13CE10);
    PUSH32(esp, 0x00139124u); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_00139124: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00139130
 * Original: 0x00139130 - 0x00139146 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139130(void)
{

loc_00139130: ;
    ecx = 0x1D9AC8;
    PUSH32(esp, 0x0013913Au); RECOMP_ABI_CALL(0x000933E0u, sub_000933E0); /* call 0x000933E0 */

loc_0013913A: ;
    PUSH32(esp, 0x13CE20);
    PUSH32(esp, 0x00139144u); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_00139144: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00139150
 * Original: 0x00139150 - 0x00139166 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139150(void)
{

loc_00139150: ;
    ecx = 0x1D99E8;
    PUSH32(esp, 0x0013915Au); RECOMP_ABI_CALL(0x000934E0u, sub_000934E0); /* call 0x000934E0 */

loc_0013915A: ;
    PUSH32(esp, 0x13CE30);
    PUSH32(esp, 0x00139164u); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_00139164: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00139170
 * Original: 0x00139170 - 0x00139197 (39 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139170(void)
{

loc_00139170: ;
    eax = MEM32(0x1BD25C);
    ecx = eax;
    MEM32(0x1CCAD8) = eax;
    MEM32(0x1CCADC) = ecx;
    MEM32(0x1CCAE0) = 0x3F800000;
    MEM32(0x1CCAE4) = 0x41F00000;
    esp += 4; return; /* ret */

}

/**
 * sub_001391A0
 * Original: 0x001391A0 - 0x001391C7 (39 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001391A0(void)
{

loc_001391A0: ;
    eax = MEM32(0x1BD25C);
    ecx = eax;
    MEM32(0x1CCAC4) = eax;
    MEM32(0x1CCAC8) = ecx;
    MEM32(0x1CCACC) = 0x3F800000;
    MEM32(0x1CCAD0) = 0x41F00000;
    esp += 4; return; /* ret */

}

/**
 * sub_001391D0
 * Original: 0x001391D0 - 0x001391F7 (39 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001391D0(void)
{

loc_001391D0: ;
    eax = MEM32(0x1BD25C);
    ecx = eax;
    MEM32(0x1CCA9C) = eax;
    MEM32(0x1CCAA0) = ecx;
    MEM32(0x1CCAA4) = 0x3F800000;
    MEM32(0x1CCAA8) = 0x40C00000;
    esp += 4; return; /* ret */

}

/**
 * sub_00139200
 * Original: 0x00139200 - 0x00139227 (39 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139200(void)
{

loc_00139200: ;
    eax = MEM32(0x1BD25C);
    ecx = eax;
    MEM32(0x1CCAEC) = eax;
    MEM32(0x1CCAF0) = ecx;
    MEM32(0x1CCAF4) = 0x3F800000;
    MEM32(0x1CCAF8) = 0x40C00000;
    esp += 4; return; /* ret */

}

/**
 * sub_00139230
 * Original: 0x00139230 - 0x00139257 (39 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139230(void)
{

loc_00139230: ;
    eax = MEM32(0x1BD25C);
    ecx = eax;
    MEM32(0x1CCAB0) = eax;
    MEM32(0x1CCAB4) = ecx;
    MEM32(0x1CCAB8) = 0x3F800000;
    MEM32(0x1CCABC) = 0x40C00000;
    esp += 4; return; /* ret */

}

/**
 * sub_00139260
 * Original: 0x00139260 - 0x00139287 (39 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139260(void)
{

loc_00139260: ;
    eax = MEM32(0x1BD25C);
    ecx = eax;
    MEM32(0x1CCB00) = eax;
    MEM32(0x1CCB04) = ecx;
    MEM32(0x1CCB08) = 0x3F800000;
    MEM32(0x1CCB0C) = 0x40C00000;
    esp += 4; return; /* ret */

}

/**
 * sub_00139290
 * Original: 0x00139290 - 0x0013929C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139290(void)
{

loc_00139290: ;
    PUSH32(esp, 0x13CE50);
    PUSH32(esp, 0x0013929Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013929A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001392A0
 * Original: 0x001392A0 - 0x001392AB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001392A0(void)
{

loc_001392A0: ;
    eax = MEM32(0x1BD458);
    MEM32(0x1D9BAC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001392B0
 * Original: 0x001392B0 - 0x001392BB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001392B0(void)
{

loc_001392B0: ;
    eax = MEM32(0x1BD93C);
    MEM32(0x1D9BB8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001392C0
 * Original: 0x001392C0 - 0x001392CB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001392C0(void)
{

loc_001392C0: ;
    eax = MEM32(0x1BD968);
    MEM32(0x1D9C30) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001392D0
 * Original: 0x001392D0 - 0x001392E6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001392D0(void)
{

loc_001392D0: ;
    ecx = 0x1D9C38;
    PUSH32(esp, 0x001392DAu); RECOMP_ABI_CALL(0x00095D20u, sub_00095D20); /* call 0x00095D20 */

loc_001392DA: ;
    PUSH32(esp, 0x13CE60);
    PUSH32(esp, 0x001392E4u); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_001392E4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001392F0
 * Original: 0x001392F0 - 0x00139306 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001392F0(void)
{

loc_001392F0: ;
    ecx = 0x1D9BC0;
    PUSH32(esp, 0x001392FAu); RECOMP_ABI_CALL(0x00095DC0u, sub_00095DC0); /* call 0x00095DC0 */

loc_001392FA: ;
    PUSH32(esp, 0x13CE70);
    PUSH32(esp, 0x00139304u); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_00139304: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00139310
 * Original: 0x00139310 - 0x0013931B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139310(void)
{

loc_00139310: ;
    eax = MEM32(0x1BD9C8);
    MEM32(0x1D9CA8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00139320
 * Original: 0x00139320 - 0x0013932B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139320(void)
{

loc_00139320: ;
    eax = MEM32(0x1BDA18);
    MEM32(0x1D9CB0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00139330
 * Original: 0x00139330 - 0x0013933B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139330(void)
{

loc_00139330: ;
    eax = MEM32(0x1BDA78);
    MEM32(0x1D9CB8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00139340
 * Original: 0x00139340 - 0x0013935F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139340(void)
{

loc_00139340: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9CD4;
    PUSH32(esp, 0x0013935Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013935E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139360
 * Original: 0x00139360 - 0x0013937F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139360(void)
{

loc_00139360: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9CD8;
    PUSH32(esp, 0x0013937Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013937E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139380
 * Original: 0x00139380 - 0x0013939F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139380(void)
{

loc_00139380: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9CC0;
    PUSH32(esp, 0x0013939Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013939E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001393A0
 * Original: 0x001393A0 - 0x001393BC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001393A0(void)
{

loc_001393A0: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9CE8;
    PUSH32(esp, 0x001393BBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001393BB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001393C0
 * Original: 0x001393C0 - 0x001393DC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001393C0(void)
{

loc_001393C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9CD0;
    PUSH32(esp, 0x001393DBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001393DB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001393E0
 * Original: 0x001393E0 - 0x001393F9 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001393E0(void)
{

loc_001393E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9CBC;
    PUSH32(esp, 0x001393F8u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001393F8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139400
 * Original: 0x00139400 - 0x0013941F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139400(void)
{

loc_00139400: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9CE0;
    PUSH32(esp, 0x0013941Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013941E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139420
 * Original: 0x00139420 - 0x0013943C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139420(void)
{

loc_00139420: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9CC4;
    PUSH32(esp, 0x0013943Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013943B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139440
 * Original: 0x00139440 - 0x0013945F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139440(void)
{

loc_00139440: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9CEC;
    PUSH32(esp, 0x0013945Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013945E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139460
 * Original: 0x00139460 - 0x0013947F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139460(void)
{

loc_00139460: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9CCC;
    PUSH32(esp, 0x0013947Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013947E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139480
 * Original: 0x00139480 - 0x0013949C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139480(void)
{

loc_00139480: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0);
    ecx = 0x1D9CE4;
    PUSH32(esp, 0x0013949Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013949B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001394A0
 * Original: 0x001394A0 - 0x001394BF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001394A0(void)
{

loc_001394A0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    ecx = 0x1D9CB4;
    PUSH32(esp, 0x001394BEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001394BE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001394C0
 * Original: 0x001394C0 - 0x001394DF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001394C0(void)
{

loc_001394C0: ;
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9CDC;
    PUSH32(esp, 0x001394DEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001394DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001394E0
 * Original: 0x001394E0 - 0x001394EB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001394E0(void)
{

loc_001394E0: ;
    eax = MEM32(0x1BDC88);
    MEM32(0x1D9CF4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001394F0
 * Original: 0x001394F0 - 0x0013950F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001394F0(void)
{

loc_001394F0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D10;
    PUSH32(esp, 0x0013950Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013950E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139510
 * Original: 0x00139510 - 0x0013952F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139510(void)
{

loc_00139510: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D14;
    PUSH32(esp, 0x0013952Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013952E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139530
 * Original: 0x00139530 - 0x0013954F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139530(void)
{

loc_00139530: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9CFC;
    PUSH32(esp, 0x0013954Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013954E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139550
 * Original: 0x00139550 - 0x0013956C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139550(void)
{

loc_00139550: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D24;
    PUSH32(esp, 0x0013956Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013956B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139570
 * Original: 0x00139570 - 0x0013958C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139570(void)
{

loc_00139570: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D0C;
    PUSH32(esp, 0x0013958Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013958B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139590
 * Original: 0x00139590 - 0x001395A9 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139590(void)
{

loc_00139590: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9CF8;
    PUSH32(esp, 0x001395A8u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001395A8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001395B0
 * Original: 0x001395B0 - 0x001395CF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001395B0(void)
{

loc_001395B0: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D1C;
    PUSH32(esp, 0x001395CEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001395CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001395D0
 * Original: 0x001395D0 - 0x001395EC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001395D0(void)
{

loc_001395D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D00;
    PUSH32(esp, 0x001395EBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001395EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001395F0
 * Original: 0x001395F0 - 0x0013960F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001395F0(void)
{

loc_001395F0: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D28;
    PUSH32(esp, 0x0013960Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013960E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139610
 * Original: 0x00139610 - 0x0013962F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139610(void)
{

loc_00139610: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D08;
    PUSH32(esp, 0x0013962Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013962E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139630
 * Original: 0x00139630 - 0x0013964C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139630(void)
{

loc_00139630: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0);
    ecx = 0x1D9D20;
    PUSH32(esp, 0x0013964Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013964B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139650
 * Original: 0x00139650 - 0x0013966F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139650(void)
{

loc_00139650: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    ecx = 0x1D9CF0;
    PUSH32(esp, 0x0013966Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013966E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139670
 * Original: 0x00139670 - 0x0013968F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139670(void)
{

loc_00139670: ;
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D18;
    PUSH32(esp, 0x0013968Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013968E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139690
 * Original: 0x00139690 - 0x0013969B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139690(void)
{

loc_00139690: ;
    eax = MEM32(0x1BDE2C);
    MEM32(0x1D9D34) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001396A0
 * Original: 0x001396A0 - 0x001396BF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001396A0(void)
{

loc_001396A0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D50;
    PUSH32(esp, 0x001396BEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001396BE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001396C0
 * Original: 0x001396C0 - 0x001396DF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001396C0(void)
{

loc_001396C0: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D54;
    PUSH32(esp, 0x001396DEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001396DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001396E0
 * Original: 0x001396E0 - 0x001396FF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001396E0(void)
{

loc_001396E0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D3C;
    PUSH32(esp, 0x001396FEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001396FE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139700
 * Original: 0x00139700 - 0x0013971C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139700(void)
{

loc_00139700: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D64;
    PUSH32(esp, 0x0013971Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013971B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139720
 * Original: 0x00139720 - 0x0013973C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139720(void)
{

loc_00139720: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D4C;
    PUSH32(esp, 0x0013973Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013973B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139740
 * Original: 0x00139740 - 0x00139759 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139740(void)
{

loc_00139740: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D38;
    PUSH32(esp, 0x00139758u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139758: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139760
 * Original: 0x00139760 - 0x0013977F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139760(void)
{

loc_00139760: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D5C;
    PUSH32(esp, 0x0013977Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013977E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139780
 * Original: 0x00139780 - 0x0013979C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139780(void)
{

loc_00139780: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D40;
    PUSH32(esp, 0x0013979Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013979B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001397A0
 * Original: 0x001397A0 - 0x001397BF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001397A0(void)
{

loc_001397A0: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D68;
    PUSH32(esp, 0x001397BEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001397BE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001397C0
 * Original: 0x001397C0 - 0x001397DF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001397C0(void)
{

loc_001397C0: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D48;
    PUSH32(esp, 0x001397DEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001397DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001397E0
 * Original: 0x001397E0 - 0x001397FC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001397E0(void)
{

loc_001397E0: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0);
    ecx = 0x1D9D60;
    PUSH32(esp, 0x001397FBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001397FB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139800
 * Original: 0x00139800 - 0x0013981F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139800(void)
{

loc_00139800: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    ecx = 0x1D9D30;
    PUSH32(esp, 0x0013981Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013981E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139820
 * Original: 0x00139820 - 0x0013983F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139820(void)
{

loc_00139820: ;
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D58;
    PUSH32(esp, 0x0013983Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013983E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139840
 * Original: 0x00139840 - 0x0013984B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139840(void)
{

loc_00139840: ;
    eax = MEM32(0x1BDFE8);
    MEM32(0x1D9D74) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00139850
 * Original: 0x00139850 - 0x0013986F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139850(void)
{

loc_00139850: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D90;
    PUSH32(esp, 0x0013986Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013986E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139870
 * Original: 0x00139870 - 0x0013988F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139870(void)
{

loc_00139870: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D94;
    PUSH32(esp, 0x0013988Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013988E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139890
 * Original: 0x00139890 - 0x001398AF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139890(void)
{

loc_00139890: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D7C;
    PUSH32(esp, 0x001398AEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001398AE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001398B0
 * Original: 0x001398B0 - 0x001398CC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001398B0(void)
{

loc_001398B0: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9DA4;
    PUSH32(esp, 0x001398CBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001398CB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001398D0
 * Original: 0x001398D0 - 0x001398EC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001398D0(void)
{

loc_001398D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D8C;
    PUSH32(esp, 0x001398EBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001398EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001398F0
 * Original: 0x001398F0 - 0x00139909 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001398F0(void)
{

loc_001398F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D78;
    PUSH32(esp, 0x00139908u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139908: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139910
 * Original: 0x00139910 - 0x0013992F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139910(void)
{

loc_00139910: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D9C;
    PUSH32(esp, 0x0013992Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013992E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139930
 * Original: 0x00139930 - 0x0013994C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139930(void)
{

loc_00139930: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D80;
    PUSH32(esp, 0x0013994Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013994B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139950
 * Original: 0x00139950 - 0x0013996F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139950(void)
{

loc_00139950: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9DA8;
    PUSH32(esp, 0x0013996Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013996E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139970
 * Original: 0x00139970 - 0x0013998F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139970(void)
{

loc_00139970: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D88;
    PUSH32(esp, 0x0013998Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013998E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139990
 * Original: 0x00139990 - 0x001399AC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139990(void)
{

loc_00139990: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0);
    ecx = 0x1D9DA0;
    PUSH32(esp, 0x001399ABu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001399AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001399B0
 * Original: 0x001399B0 - 0x001399CF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001399B0(void)
{

loc_001399B0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    ecx = 0x1D9D70;
    PUSH32(esp, 0x001399CEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001399CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001399D0
 * Original: 0x001399D0 - 0x001399EF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001399D0(void)
{

loc_001399D0: ;
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9D98;
    PUSH32(esp, 0x001399EEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_001399EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001399F0
 * Original: 0x001399F0 - 0x001399FB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001399F0(void)
{

loc_001399F0: ;
    eax = MEM32(0x1BE074);
    MEM32(0x1D9DAC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00139A00
 * Original: 0x00139A00 - 0x00139A0B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139A00(void)
{

loc_00139A00: ;
    eax = MEM32(0x1BE318);
    MEM32(0x1D9DB4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00139A10
 * Original: 0x00139A10 - 0x00139A2F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139A10(void)
{

loc_00139A10: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9DD0;
    PUSH32(esp, 0x00139A2Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139A2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139A30
 * Original: 0x00139A30 - 0x00139A4F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139A30(void)
{

loc_00139A30: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9DD4;
    PUSH32(esp, 0x00139A4Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139A4E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139A50
 * Original: 0x00139A50 - 0x00139A6F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139A50(void)
{

loc_00139A50: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9DBC;
    PUSH32(esp, 0x00139A6Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139A6E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139A70
 * Original: 0x00139A70 - 0x00139A8C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139A70(void)
{

loc_00139A70: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9DDC;
    PUSH32(esp, 0x00139A8Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139A8B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139A90
 * Original: 0x00139A90 - 0x00139AAC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139A90(void)
{

loc_00139A90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9DCC;
    PUSH32(esp, 0x00139AABu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139AAB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139AB0
 * Original: 0x00139AB0 - 0x00139AC9 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139AB0(void)
{

loc_00139AB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9DB8;
    PUSH32(esp, 0x00139AC8u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139AC8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139AD0
 * Original: 0x00139AD0 - 0x00139AEF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139AD0(void)
{

loc_00139AD0: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9DD8;
    PUSH32(esp, 0x00139AEEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139AEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139AF0
 * Original: 0x00139AF0 - 0x00139B0C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139AF0(void)
{

loc_00139AF0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9DC0;
    PUSH32(esp, 0x00139B0Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139B0B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139B10
 * Original: 0x00139B10 - 0x00139B2F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139B10(void)
{

loc_00139B10: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9DE0;
    PUSH32(esp, 0x00139B2Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139B2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139B30
 * Original: 0x00139B30 - 0x00139B4F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139B30(void)
{

loc_00139B30: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9DC8;
    PUSH32(esp, 0x00139B4Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139B4E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139B50
 * Original: 0x00139B50 - 0x00139B5B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139B50(void)
{

loc_00139B50: ;
    eax = MEM32(0x1BE324);
    MEM32(0x1D9DE8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00139B60
 * Original: 0x00139B60 - 0x00139B7F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139B60(void)
{

loc_00139B60: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9E04;
    PUSH32(esp, 0x00139B7Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139B7E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139B80
 * Original: 0x00139B80 - 0x00139B9F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139B80(void)
{

loc_00139B80: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9E08;
    PUSH32(esp, 0x00139B9Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139B9E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139BA0
 * Original: 0x00139BA0 - 0x00139BBF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139BA0(void)
{

loc_00139BA0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9DF0;
    PUSH32(esp, 0x00139BBEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139BBE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139BC0
 * Original: 0x00139BC0 - 0x00139BDC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139BC0(void)
{

loc_00139BC0: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9E18;
    PUSH32(esp, 0x00139BDBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139BDB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139BE0
 * Original: 0x00139BE0 - 0x00139BFC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139BE0(void)
{

loc_00139BE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9E00;
    PUSH32(esp, 0x00139BFBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139BFB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139C00
 * Original: 0x00139C00 - 0x00139C19 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139C00(void)
{

loc_00139C00: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9DEC;
    PUSH32(esp, 0x00139C18u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139C18: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139C20
 * Original: 0x00139C20 - 0x00139C3F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139C20(void)
{

loc_00139C20: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9E10;
    PUSH32(esp, 0x00139C3Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139C3E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139C40
 * Original: 0x00139C40 - 0x00139C5C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139C40(void)
{

loc_00139C40: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9DF4;
    PUSH32(esp, 0x00139C5Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139C5B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139C60
 * Original: 0x00139C60 - 0x00139C7F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139C60(void)
{

loc_00139C60: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9E1C;
    PUSH32(esp, 0x00139C7Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139C7E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139C80
 * Original: 0x00139C80 - 0x00139C9F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139C80(void)
{

loc_00139C80: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9DFC;
    PUSH32(esp, 0x00139C9Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139C9E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139CA0
 * Original: 0x00139CA0 - 0x00139CBC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139CA0(void)
{

loc_00139CA0: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0);
    ecx = 0x1D9E14;
    PUSH32(esp, 0x00139CBBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139CBB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139CC0
 * Original: 0x00139CC0 - 0x00139CDF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139CC0(void)
{

loc_00139CC0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    ecx = 0x1D9DE4;
    PUSH32(esp, 0x00139CDEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139CDE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139CE0
 * Original: 0x00139CE0 - 0x00139CFF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139CE0(void)
{

loc_00139CE0: ;
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9E0C;
    PUSH32(esp, 0x00139CFEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139CFE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139D00
 * Original: 0x00139D00 - 0x00139D0B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139D00(void)
{

loc_00139D00: ;
    eax = MEM32(0x1BE4A4);
    MEM32(0x1D9E24) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00139D10
 * Original: 0x00139D10 - 0x00139D2F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139D10(void)
{

loc_00139D10: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9E40;
    PUSH32(esp, 0x00139D2Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139D2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139D30
 * Original: 0x00139D30 - 0x00139D4F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139D30(void)
{

loc_00139D30: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9E44;
    PUSH32(esp, 0x00139D4Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139D4E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139D50
 * Original: 0x00139D50 - 0x00139D6F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139D50(void)
{

loc_00139D50: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9E2C;
    PUSH32(esp, 0x00139D6Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139D6E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139D70
 * Original: 0x00139D70 - 0x00139D8C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139D70(void)
{

loc_00139D70: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9E54;
    PUSH32(esp, 0x00139D8Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139D8B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139D90
 * Original: 0x00139D90 - 0x00139DAC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139D90(void)
{

loc_00139D90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9E3C;
    PUSH32(esp, 0x00139DABu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139DAB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139DB0
 * Original: 0x00139DB0 - 0x00139DC9 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139DB0(void)
{

loc_00139DB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9E28;
    PUSH32(esp, 0x00139DC8u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139DC8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139DD0
 * Original: 0x00139DD0 - 0x00139DEF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139DD0(void)
{

loc_00139DD0: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9E4C;
    PUSH32(esp, 0x00139DEEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139DEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139DF0
 * Original: 0x00139DF0 - 0x00139E0C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139DF0(void)
{

loc_00139DF0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9E30;
    PUSH32(esp, 0x00139E0Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139E0B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139E10
 * Original: 0x00139E10 - 0x00139E2F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139E10(void)
{

loc_00139E10: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9E58;
    PUSH32(esp, 0x00139E2Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139E2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139E30
 * Original: 0x00139E30 - 0x00139E4F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139E30(void)
{

loc_00139E30: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9E38;
    PUSH32(esp, 0x00139E4Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139E4E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139E50
 * Original: 0x00139E50 - 0x00139E6C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139E50(void)
{

loc_00139E50: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0);
    ecx = 0x1D9E50;
    PUSH32(esp, 0x00139E6Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139E6B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139E70
 * Original: 0x00139E70 - 0x00139E8F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139E70(void)
{

loc_00139E70: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    ecx = 0x1D9E20;
    PUSH32(esp, 0x00139E8Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139E8E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139E90
 * Original: 0x00139E90 - 0x00139EAF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139E90(void)
{

loc_00139E90: ;
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9E48;
    PUSH32(esp, 0x00139EAEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139EAE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139EB0
 * Original: 0x00139EB0 - 0x00139EBB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139EB0(void)
{

loc_00139EB0: ;
    eax = MEM32(0x1BE5B8);
    MEM32(0x1D9E5C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00139EC0
 * Original: 0x00139EC0 - 0x00139ECB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139EC0(void)
{

loc_00139EC0: ;
    eax = MEM32(0x1BE7C0);
    MEM32(0x1D9E64) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00139ED0
 * Original: 0x00139ED0 - 0x00139EEF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139ED0(void)
{

loc_00139ED0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9EDC;
    PUSH32(esp, 0x00139EEEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139EEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139EF0
 * Original: 0x00139EF0 - 0x00139F0F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139EF0(void)
{

loc_00139EF0: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9EC8;
    PUSH32(esp, 0x00139F0Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139F0E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139F10
 * Original: 0x00139F10 - 0x00139F2F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139F10(void)
{

loc_00139F10: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9EE0;
    PUSH32(esp, 0x00139F2Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139F2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139F30
 * Original: 0x00139F30 - 0x00139F4C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139F30(void)
{

loc_00139F30: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9F10;
    PUSH32(esp, 0x00139F4Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139F4B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139F50
 * Original: 0x00139F50 - 0x00139F6C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139F50(void)
{

loc_00139F50: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9F14;
    PUSH32(esp, 0x00139F6Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139F6B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139F70
 * Original: 0x00139F70 - 0x00139F89 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139F70(void)
{

loc_00139F70: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9EC0;
    PUSH32(esp, 0x00139F88u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139F88: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139F90
 * Original: 0x00139F90 - 0x00139FAF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139F90(void)
{

loc_00139F90: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9F00;
    PUSH32(esp, 0x00139FAEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139FAE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139FB0
 * Original: 0x00139FB0 - 0x00139FCC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139FB0(void)
{

loc_00139FB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9EF4;
    PUSH32(esp, 0x00139FCBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139FCB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139FD0
 * Original: 0x00139FD0 - 0x00139FEF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139FD0(void)
{

loc_00139FD0: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9F18;
    PUSH32(esp, 0x00139FEEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00139FEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139FF0
 * Original: 0x00139FF0 - 0x0013A00F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139FF0(void)
{

loc_00139FF0: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9ED0;
    PUSH32(esp, 0x0013A00Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A00E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A010
 * Original: 0x0013A010 - 0x0013A01B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A010(void)
{

loc_0013A010: ;
    eax = MEM32(0x1BE840);
    MEM32(0x1D9EC4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A020
 * Original: 0x0013A020 - 0x0013A03C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A020(void)
{

loc_0013A020: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0);
    ecx = 0x1D9F08;
    PUSH32(esp, 0x0013A03Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A03B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A040
 * Original: 0x0013A040 - 0x0013A05F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A040(void)
{

loc_0013A040: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    ecx = 0x1D9EB8;
    PUSH32(esp, 0x0013A05Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A05E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A060
 * Original: 0x0013A060 - 0x0013A07F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A060(void)
{

loc_0013A060: ;
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9EE8;
    PUSH32(esp, 0x0013A07Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A07E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A080
 * Original: 0x0013A080 - 0x0013A099 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A080(void)
{

loc_0013A080: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9EF0;
    PUSH32(esp, 0x0013A098u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A098: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A0A0
 * Original: 0x0013A0A0 - 0x0013A0B9 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A0A0(void)
{

loc_0013A0A0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9F04;
    PUSH32(esp, 0x0013A0B8u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A0B8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A0C0
 * Original: 0x0013A0C0 - 0x0013A0DC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A0C0(void)
{

loc_0013A0C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9EE4;
    PUSH32(esp, 0x0013A0DBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A0DB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A0E0
 * Original: 0x0013A0E0 - 0x0013A0F9 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A0E0(void)
{

loc_0013A0E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9ED4;
    PUSH32(esp, 0x0013A0F8u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A0F8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A100
 * Original: 0x0013A100 - 0x0013A134 (52 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A100(void)
{

loc_0013A100: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9EF8;
    PUSH32(esp, 0x0013A118u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A118: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9EFC;
    PUSH32(esp, 0x0013A133u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A133: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A140
 * Original: 0x0013A140 - 0x0013A15F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A140(void)
{

loc_0013A140: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9EEC;
    PUSH32(esp, 0x0013A15Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A15E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A160
 * Original: 0x0013A160 - 0x0013A179 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A160(void)
{

loc_0013A160: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9EBC;
    PUSH32(esp, 0x0013A178u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A178: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A180
 * Original: 0x0013A180 - 0x0013A199 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A180(void)
{

loc_0013A180: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9F0C;
    PUSH32(esp, 0x0013A198u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A198: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A1A0
 * Original: 0x0013A1A0 - 0x0013A1BC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A1A0(void)
{

loc_0013A1A0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9ED8;
    PUSH32(esp, 0x0013A1BBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A1BB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A1C0
 * Original: 0x0013A1C0 - 0x0013A1CB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A1C0(void)
{

loc_0013A1C0: ;
    eax = MEM32(0x1BE8E8);
    MEM32(0x1D9F38) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A1D0
 * Original: 0x0013A1D0 - 0x0013A1EF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A1D0(void)
{

loc_0013A1D0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9F44;
    PUSH32(esp, 0x0013A1EEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A1EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A1F0
 * Original: 0x0013A1F0 - 0x0013A20F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A1F0(void)
{

loc_0013A1F0: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9F48;
    PUSH32(esp, 0x0013A20Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A20E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A210
 * Original: 0x0013A210 - 0x0013A22F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A210(void)
{

loc_0013A210: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9F2C;
    PUSH32(esp, 0x0013A22Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A22E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A230
 * Original: 0x0013A230 - 0x0013A24C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A230(void)
{

loc_0013A230: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9F50;
    PUSH32(esp, 0x0013A24Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A24B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A250
 * Original: 0x0013A250 - 0x0013A26C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A250(void)
{

loc_0013A250: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9F40;
    PUSH32(esp, 0x0013A26Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A26B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A270
 * Original: 0x0013A270 - 0x0013A289 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A270(void)
{

loc_0013A270: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9F28;
    PUSH32(esp, 0x0013A288u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A288: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A290
 * Original: 0x0013A290 - 0x0013A2AF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A290(void)
{

loc_0013A290: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9F4C;
    PUSH32(esp, 0x0013A2AEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A2AE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A2B0
 * Original: 0x0013A2B0 - 0x0013A2CC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A2B0(void)
{

loc_0013A2B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9F34;
    PUSH32(esp, 0x0013A2CBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A2CB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A2D0
 * Original: 0x0013A2D0 - 0x0013A2EF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A2D0(void)
{

loc_0013A2D0: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9F54;
    PUSH32(esp, 0x0013A2EEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A2EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A2F0
 * Original: 0x0013A2F0 - 0x0013A30F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A2F0(void)
{

loc_0013A2F0: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1D9F3C;
    PUSH32(esp, 0x0013A30Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A30E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A310
 * Original: 0x0013A310 - 0x0013A32C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A310(void)
{

loc_0013A310: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    ecx = 0x1D9F30;
    PUSH32(esp, 0x0013A32Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A32B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A330
 * Original: 0x0013A330 - 0x0013A33B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A330(void)
{

loc_0013A330: ;
    eax = MEM32(0x1BEAC4);
    MEM32(0x1DA074) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A340
 * Original: 0x0013A340 - 0x0013A34C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A340(void)
{

loc_0013A340: ;
    PUSH32(esp, 0x13CED0);
    PUSH32(esp, 0x0013A34Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013A34A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013A350
 * Original: 0x0013A350 - 0x0013A36F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A350(void)
{

loc_0013A350: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA08C;
    PUSH32(esp, 0x0013A36Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A36E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A370
 * Original: 0x0013A370 - 0x0013A38F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A370(void)
{

loc_0013A370: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA088;
    PUSH32(esp, 0x0013A38Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A38E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A390
 * Original: 0x0013A390 - 0x0013A3AF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A390(void)
{

loc_0013A390: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA094;
    PUSH32(esp, 0x0013A3AEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A3AE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A3B0
 * Original: 0x0013A3B0 - 0x0013A3CC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A3B0(void)
{

loc_0013A3B0: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA0B0;
    PUSH32(esp, 0x0013A3CBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A3CB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A3D0
 * Original: 0x0013A3D0 - 0x0013A3EC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A3D0(void)
{

loc_0013A3D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA084;
    PUSH32(esp, 0x0013A3EBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A3EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A3F0
 * Original: 0x0013A3F0 - 0x0013A409 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A3F0(void)
{

loc_0013A3F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA098;
    PUSH32(esp, 0x0013A408u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A408: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A410
 * Original: 0x0013A410 - 0x0013A42F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A410(void)
{

loc_0013A410: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA0A4;
    PUSH32(esp, 0x0013A42Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A42E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A430
 * Original: 0x0013A430 - 0x0013A44C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A430(void)
{

loc_0013A430: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA064;
    PUSH32(esp, 0x0013A44Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A44B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A450
 * Original: 0x0013A450 - 0x0013A46F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A450(void)
{

loc_0013A450: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA0B4;
    PUSH32(esp, 0x0013A46Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A46E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A470
 * Original: 0x0013A470 - 0x0013A48F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A470(void)
{

loc_0013A470: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA080;
    PUSH32(esp, 0x0013A48Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A48E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A490
 * Original: 0x0013A490 - 0x0013A4A9 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A490(void)
{

loc_0013A490: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    ecx = 0x1DA07C;
    PUSH32(esp, 0x0013A4A8u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A4A8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A4B0
 * Original: 0x0013A4B0 - 0x0013A4C9 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A4B0(void)
{

loc_0013A4B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    ecx = 0x1DA068;
    PUSH32(esp, 0x0013A4C8u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A4C8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A4D0
 * Original: 0x0013A4D0 - 0x0013A4E9 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A4D0(void)
{

loc_0013A4D0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    ecx = 0x1DA090;
    PUSH32(esp, 0x0013A4E8u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A4E8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A4F0
 * Original: 0x0013A4F0 - 0x0013A50C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A4F0(void)
{

loc_0013A4F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    ecx = 0x1DA078;
    PUSH32(esp, 0x0013A50Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A50B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A510
 * Original: 0x0013A510 - 0x0013A529 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A510(void)
{

loc_0013A510: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    ecx = 0x1DA09C;
    PUSH32(esp, 0x0013A528u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A528: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A530
 * Original: 0x0013A530 - 0x0013A549 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A530(void)
{

loc_0013A530: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    ecx = 0x1DA0AC;
    PUSH32(esp, 0x0013A548u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A548: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A550
 * Original: 0x0013A550 - 0x0013A569 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A550(void)
{

loc_0013A550: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    ecx = 0x1DA070;
    PUSH32(esp, 0x0013A568u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A568: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A570
 * Original: 0x0013A570 - 0x0013A58C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A570(void)
{

loc_0013A570: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    ecx = 0x1DA0A0;
    PUSH32(esp, 0x0013A58Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A58B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A590
 * Original: 0x0013A590 - 0x0013A59C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A590(void)
{

loc_0013A590: ;
    PUSH32(esp, 0x13CEE0);
    PUSH32(esp, 0x0013A59Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013A59A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013A5A0
 * Original: 0x0013A5A0 - 0x0013A5AB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A5A0(void)
{

loc_0013A5A0: ;
    eax = MEM32(0x1BEBEC);
    MEM32(0x1DA0CC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A5B0
 * Original: 0x0013A5B0 - 0x0013A5CF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A5B0(void)
{

loc_0013A5B0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA0D8;
    PUSH32(esp, 0x0013A5CEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A5CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A5D0
 * Original: 0x0013A5D0 - 0x0013A5EF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A5D0(void)
{

loc_0013A5D0: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA0DC;
    PUSH32(esp, 0x0013A5EEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A5EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A5F0
 * Original: 0x0013A5F0 - 0x0013A60F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A5F0(void)
{

loc_0013A5F0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA0C4;
    PUSH32(esp, 0x0013A60Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A60E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A610
 * Original: 0x0013A610 - 0x0013A62C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A610(void)
{

loc_0013A610: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA0E4;
    PUSH32(esp, 0x0013A62Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A62B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A630
 * Original: 0x0013A630 - 0x0013A64C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A630(void)
{

loc_0013A630: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA0D4;
    PUSH32(esp, 0x0013A64Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A64B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A650
 * Original: 0x0013A650 - 0x0013A669 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A650(void)
{

loc_0013A650: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA0C0;
    PUSH32(esp, 0x0013A668u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A668: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A670
 * Original: 0x0013A670 - 0x0013A68F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A670(void)
{

loc_0013A670: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA0E0;
    PUSH32(esp, 0x0013A68Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A68E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A690
 * Original: 0x0013A690 - 0x0013A6AC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A690(void)
{

loc_0013A690: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA0C8;
    PUSH32(esp, 0x0013A6ABu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A6AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A6B0
 * Original: 0x0013A6B0 - 0x0013A6CF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A6B0(void)
{

loc_0013A6B0: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA0E8;
    PUSH32(esp, 0x0013A6CEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A6CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A6D0
 * Original: 0x0013A6D0 - 0x0013A6EF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A6D0(void)
{

loc_0013A6D0: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA0D0;
    PUSH32(esp, 0x0013A6EEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A6EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A6F0
 * Original: 0x0013A6F0 - 0x0013A6FB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A6F0(void)
{

loc_0013A6F0: ;
    eax = MEM32(0x1BED70);
    MEM32(0x1DA0F0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A700
 * Original: 0x0013A700 - 0x0013A70B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A700(void)
{

loc_0013A700: ;
    eax = MEM32(0x1BED90);
    MEM32(0x1DA0F8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A710
 * Original: 0x0013A710 - 0x0013A72C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A710(void)
{

loc_0013A710: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0);
    ecx = 0x1DA104;
    PUSH32(esp, 0x0013A72Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A72B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A730
 * Original: 0x0013A730 - 0x0013A74F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A730(void)
{

loc_0013A730: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    ecx = 0x1DA100;
    PUSH32(esp, 0x0013A74Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A74E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A750
 * Original: 0x0013A750 - 0x0013A76F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A750(void)
{

loc_0013A750: ;
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA0FC;
    PUSH32(esp, 0x0013A76Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A76E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A770
 * Original: 0x0013A770 - 0x0013A77B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A770(void)
{

loc_0013A770: ;
    eax = MEM32(0x1BED9C);
    MEM32(0x1DA108) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A780
 * Original: 0x0013A780 - 0x0013A78B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A780(void)
{

loc_0013A780: ;
    eax = MEM32(0x1BEDB4);
    MEM32(0x1DA110) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A790
 * Original: 0x0013A790 - 0x0013A79B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A790(void)
{

loc_0013A790: ;
    eax = MEM32(0x1BEDD8);
    MEM32(0x1DA118) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A7A0
 * Original: 0x0013A7A0 - 0x0013A7AB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A7A0(void)
{

loc_0013A7A0: ;
    eax = MEM32(0x1BEF14);
    MEM32(0x1DA124) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A7B0
 * Original: 0x0013A7B0 - 0x0013A7BB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A7B0(void)
{

loc_0013A7B0: ;
    eax = MEM32(0x1BF03C);
    MEM32(0x1DA130) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A7C0
 * Original: 0x0013A7C0 - 0x0013A7CB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A7C0(void)
{

loc_0013A7C0: ;
    eax = MEM32(0x1BF14C);
    MEM32(0x1DA140) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A7D0
 * Original: 0x0013A7D0 - 0x0013A7DC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A7D0(void)
{

loc_0013A7D0: ;
    PUSH32(esp, 0x13CF10);
    PUSH32(esp, 0x0013A7DAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013A7DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013A7E0
 * Original: 0x0013A7E0 - 0x0013A7EB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A7E0(void)
{

loc_0013A7E0: ;
    eax = MEM32(0x1BF1C8);
    MEM32(0x1DA79C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A7F0
 * Original: 0x0013A7F0 - 0x0013A7FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A7F0(void)
{

loc_0013A7F0: ;
    PUSH32(esp, 0x13CF20);
    PUSH32(esp, 0x0013A7FAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013A7FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013A800
 * Original: 0x0013A800 - 0x0013A80C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A800(void)
{

loc_0013A800: ;
    PUSH32(esp, 0x13CF30);
    PUSH32(esp, 0x0013A80Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013A80A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013A810
 * Original: 0x0013A810 - 0x0013A81C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A810(void)
{

loc_0013A810: ;
    PUSH32(esp, 0x13CF40);
    PUSH32(esp, 0x0013A81Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013A81A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013A820
 * Original: 0x0013A820 - 0x0013A82C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A820(void)
{

loc_0013A820: ;
    PUSH32(esp, 0x13CF50);
    PUSH32(esp, 0x0013A82Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013A82A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013A830
 * Original: 0x0013A830 - 0x0013A83C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A830(void)
{

loc_0013A830: ;
    PUSH32(esp, 0x13CF60);
    PUSH32(esp, 0x0013A83Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013A83A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013A840
 * Original: 0x0013A840 - 0x0013A853 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0013A840(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013A840: ;
    fp_push(MEMF(0x1BF314)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(0x1DA7A4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013A860
 * Original: 0x0013A860 - 0x0013A86C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A860(void)
{

loc_0013A860: ;
    PUSH32(esp, 0x13CF70);
    PUSH32(esp, 0x0013A86Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013A86A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013A870
 * Original: 0x0013A870 - 0x0013A87C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A870(void)
{

loc_0013A870: ;
    PUSH32(esp, 0x13CF80);
    PUSH32(esp, 0x0013A87Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013A87A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013A880
 * Original: 0x0013A880 - 0x0013A893 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0013A880(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013A880: ;
    fp_push(MEMF(0x1BF328)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1BF328)); /* fmul dword ptr [0x1bf328] */
    MEMF(0x1DA798) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013A8A0
 * Original: 0x0013A8A0 - 0x0013A8B3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0013A8A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013A8A0: ;
    fp_push(MEMF(0x1BF2C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1BF2C0)); /* fmul dword ptr [0x1bf2c0] */
    MEMF(0x1DA790) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013A8C0
 * Original: 0x0013A8C0 - 0x0013A8D3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0013A8C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013A8C0: ;
    fp_push(MEMF(0x1BF2C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1BF2C4)); /* fmul dword ptr [0x1bf2c4] */
    MEMF(0x1DA7A0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013A8E0
 * Original: 0x0013A8E0 - 0x0013A8EB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A8E0(void)
{

loc_0013A8E0: ;
    eax = MEM32(0x1BF49C);
    MEM32(0x1DA7AC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A8F0
 * Original: 0x0013A8F0 - 0x0013A8FB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A8F0(void)
{

loc_0013A8F0: ;
    eax = MEM32(0x1BF4C8);
    MEM32(0x1DA7B8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A900
 * Original: 0x0013A900 - 0x0013A90B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A900(void)
{

loc_0013A900: ;
    eax = MEM32(0x1BF4D4);
    MEM32(0x1DA7EC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A910
 * Original: 0x0013A910 - 0x0013A92F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A910(void)
{

loc_0013A910: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA7F8;
    PUSH32(esp, 0x0013A92Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A92E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A930
 * Original: 0x0013A930 - 0x0013A94F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A930(void)
{

loc_0013A930: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA7FC;
    PUSH32(esp, 0x0013A94Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A94E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A950
 * Original: 0x0013A950 - 0x0013A96F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A950(void)
{

loc_0013A950: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA7E4;
    PUSH32(esp, 0x0013A96Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A96E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A970
 * Original: 0x0013A970 - 0x0013A98C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A970(void)
{

loc_0013A970: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA808;
    PUSH32(esp, 0x0013A98Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A98B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A990
 * Original: 0x0013A990 - 0x0013A9AC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A990(void)
{

loc_0013A990: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA7F4;
    PUSH32(esp, 0x0013A9ABu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A9AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A9B0
 * Original: 0x0013A9B0 - 0x0013A9C9 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A9B0(void)
{

loc_0013A9B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA7E0;
    PUSH32(esp, 0x0013A9C8u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A9C8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A9D0
 * Original: 0x0013A9D0 - 0x0013A9EF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A9D0(void)
{

loc_0013A9D0: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA800;
    PUSH32(esp, 0x0013A9EEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013A9EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013A9F0
 * Original: 0x0013A9F0 - 0x0013AA0C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A9F0(void)
{

loc_0013A9F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA7E8;
    PUSH32(esp, 0x0013AA0Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AA0B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AA10
 * Original: 0x0013AA10 - 0x0013AA2F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AA10(void)
{

loc_0013AA10: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA80C;
    PUSH32(esp, 0x0013AA2Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AA2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AA30
 * Original: 0x0013AA30 - 0x0013AA4F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AA30(void)
{

loc_0013AA30: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA7F0;
    PUSH32(esp, 0x0013AA4Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AA4E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AA50
 * Original: 0x0013AA50 - 0x0013AA64 (20 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0013AA50(void)
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

loc_0013AA50: ;
    PUSH32(esp, 0x3F860A92);
    PUSH32(esp, 0x0013AA5Au); RECOMP_ABI_CALL(0x000CDE00u, sub_000CDE00); /* call 0x000CDE00 */

loc_0013AA5A: ;
    MEMF(0x1DA804) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013AA70
 * Original: 0x0013AA70 - 0x0013AA7B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AA70(void)
{

loc_0013AA70: ;
    eax = MEM32(0x1BF580);
    MEM32(0x1DA838) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AA80
 * Original: 0x0013AA80 - 0x0013AA8B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AA80(void)
{

loc_0013AA80: ;
    eax = MEM32(0x1BF590);
    MEM32(0x1DA844) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AA90
 * Original: 0x0013AA90 - 0x0013AA9B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AA90(void)
{

loc_0013AA90: ;
    eax = MEM32(0x1BF5A0);
    MEM32(0x1DA848) = eax;
    esp += 4; return; /* ret */

}
