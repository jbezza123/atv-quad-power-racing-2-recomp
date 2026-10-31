/**
 * ATV: Quad Power Racing 2 - Recompiled code chunk 29
 * Functions: 250 (0x0013C5B0 - 0x0013E215)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0013C5B0
 * Original: 0x0013C5B0 - 0x0013C6E3 (307 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C5B0(void)
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

loc_0013C5B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013C5B8u); RECOMP_ABI_CALL(0x000CDDF0u, sub_000CDDF0); /* call 0x000CDDF0 */

loc_0013C5B8: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013C5C3u); RECOMP_ABI_CALL(0x000CDE00u, sub_000CDE00); /* call 0x000CDE00 */

loc_0013C5C3: ;
    MEMF(0x1DB17C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x3F860A92);
    MEM32(0x1DB178) = 0;
    MEM32(0x1DB180) = eax;
    PUSH32(esp, 0x0013C5E6u); RECOMP_ABI_CALL(0x000CDDF0u, sub_000CDDF0); /* call 0x000CDDF0 */

loc_0013C5E6: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3F860A92);
    PUSH32(esp, 0x0013C5F4u); RECOMP_ABI_CALL(0x000CDE00u, sub_000CDE00); /* call 0x000CDE00 */

loc_0013C5F4: ;
    MEMF(0x1DB188) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x40060A92);
    MEM32(0x1DB184) = 0;
    MEM32(0x1DB18C) = ecx;
    PUSH32(esp, 0x0013C618u); RECOMP_ABI_CALL(0x000CDDF0u, sub_000CDDF0); /* call 0x000CDDF0 */

loc_0013C618: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x40060A92);
    PUSH32(esp, 0x0013C626u); RECOMP_ABI_CALL(0x000CDE00u, sub_000CDE00); /* call 0x000CDE00 */

loc_0013C626: ;
    MEMF(0x1DB194) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0x40490FDB);
    MEM32(0x1DB190) = 0;
    MEM32(0x1DB198) = edx;
    PUSH32(esp, 0x0013C64Au); RECOMP_ABI_CALL(0x000CDDF0u, sub_000CDDF0); /* call 0x000CDDF0 */

loc_0013C64A: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x40490FDB);
    PUSH32(esp, 0x0013C658u); RECOMP_ABI_CALL(0x000CDE00u, sub_000CDE00); /* call 0x000CDE00 */

loc_0013C658: ;
    MEMF(0x1DB1A0) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x40860A92);
    MEM32(0x1DB19C) = 0;
    MEM32(0x1DB1A4) = eax;
    PUSH32(esp, 0x0013C67Bu); RECOMP_ABI_CALL(0x000CDDF0u, sub_000CDDF0); /* call 0x000CDDF0 */

loc_0013C67B: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x40860A92);
    PUSH32(esp, 0x0013C689u); RECOMP_ABI_CALL(0x000CDE00u, sub_000CDE00); /* call 0x000CDE00 */

loc_0013C689: ;
    MEMF(0x1DB1AC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x40A78D36);
    MEM32(0x1DB1A8) = 0;
    MEM32(0x1DB1B0) = ecx;
    PUSH32(esp, 0x0013C6ADu); RECOMP_ABI_CALL(0x000CDDF0u, sub_000CDDF0); /* call 0x000CDDF0 */

loc_0013C6AD: ;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x40A78D36);
    PUSH32(esp, 0x0013C6BBu); RECOMP_ABI_CALL(0x000CDE00u, sub_000CDE00); /* call 0x000CDE00 */

loc_0013C6BB: ;
    MEMF(0x1DB1B8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x30);
    PUSH32(esp, 0x13D100);
    MEM32(0x1DB1B4) = 0;
    MEM32(0x1DB1BC) = edx;
    PUSH32(esp, 0x0013C6DFu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C6DF: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013C6F0
 * Original: 0x0013C6F0 - 0x0013C6FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C6F0(void)
{

loc_0013C6F0: ;
    PUSH32(esp, 0x13D110);
    PUSH32(esp, 0x0013C6FAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C6FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C700
 * Original: 0x0013C700 - 0x0013C70C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C700(void)
{

loc_0013C700: ;
    PUSH32(esp, 0x13D120);
    PUSH32(esp, 0x0013C70Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C70A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C710
 * Original: 0x0013C710 - 0x0013C71C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C710(void)
{

loc_0013C710: ;
    PUSH32(esp, 0x13D130);
    PUSH32(esp, 0x0013C71Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C71A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C720
 * Original: 0x0013C720 - 0x0013C72B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C720(void)
{

loc_0013C720: ;
    eax = MEM32(0x1C21C8);
    MEM32(0x1DB450) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C730
 * Original: 0x0013C730 - 0x0013C73C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C730(void)
{

loc_0013C730: ;
    PUSH32(esp, 0x13D150);
    PUSH32(esp, 0x0013C73Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C73A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C740
 * Original: 0x0013C740 - 0x0013C74C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C740(void)
{

loc_0013C740: ;
    PUSH32(esp, 0x13D170);
    PUSH32(esp, 0x0013C74Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C74A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C750
 * Original: 0x0013C750 - 0x0013C75C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C750(void)
{

loc_0013C750: ;
    PUSH32(esp, 0x13D190);
    PUSH32(esp, 0x0013C75Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C75A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C760
 * Original: 0x0013C760 - 0x0013C76C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C760(void)
{

loc_0013C760: ;
    PUSH32(esp, 0x13D1B0);
    PUSH32(esp, 0x0013C76Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C76A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C770
 * Original: 0x0013C770 - 0x0013C77C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C770(void)
{

loc_0013C770: ;
    PUSH32(esp, 0x13D1D0);
    PUSH32(esp, 0x0013C77Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C77A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C780
 * Original: 0x0013C780 - 0x0013C78C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C780(void)
{

loc_0013C780: ;
    PUSH32(esp, 0x13D1F0);
    PUSH32(esp, 0x0013C78Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C78A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C790
 * Original: 0x0013C790 - 0x0013C7A6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C790(void)
{

loc_0013C790: ;
    ecx = 0x1DE6B0;
    PUSH32(esp, 0x0013C79Au); RECOMP_ABI_CALL(0x00105770u, sub_00105770); /* call 0x00105770 */

loc_0013C79A: ;
    PUSH32(esp, 0x13D210);
    PUSH32(esp, 0x0013C7A4u); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C7A4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C7B0
 * Original: 0x0013C7B0 - 0x0013C7C6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C7B0(void)
{

loc_0013C7B0: ;
    ecx = 0x1DE580;
    PUSH32(esp, 0x0013C7BAu); RECOMP_ABI_CALL(0x00107DD0u, sub_00107DD0); /* call 0x00107DD0 */

loc_0013C7BA: ;
    PUSH32(esp, 0x13D220);
    PUSH32(esp, 0x0013C7C4u); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C7C4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C7D0
 * Original: 0x0013C7D0 - 0x0013C7E6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C7D0(void)
{

loc_0013C7D0: ;
    ecx = 0x1DE5D0;
    PUSH32(esp, 0x0013C7DAu); RECOMP_ABI_CALL(0x00107DD0u, sub_00107DD0); /* call 0x00107DD0 */

loc_0013C7DA: ;
    PUSH32(esp, 0x13D230);
    PUSH32(esp, 0x0013C7E4u); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C7E4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C7F0
 * Original: 0x0013C7F0 - 0x0013C806 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C7F0(void)
{

loc_0013C7F0: ;
    ecx = 0x1DE7B8;
    PUSH32(esp, 0x0013C7FAu); RECOMP_ABI_CALL(0x00107DD0u, sub_00107DD0); /* call 0x00107DD0 */

loc_0013C7FA: ;
    PUSH32(esp, 0x13D240);
    PUSH32(esp, 0x0013C804u); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C804: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C810
 * Original: 0x0013C810 - 0x0013C81C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C810(void)
{

loc_0013C810: ;
    PUSH32(esp, 0x13D280);
    PUSH32(esp, 0x0013C81Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C81A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C820
 * Original: 0x0013C820 - 0x0013C82C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C820(void)
{

loc_0013C820: ;
    PUSH32(esp, 0x13D270);
    PUSH32(esp, 0x0013C82Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C82A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C830
 * Original: 0x0013C830 - 0x0013C83C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C830(void)
{

loc_0013C830: ;
    PUSH32(esp, 0x13D260);
    PUSH32(esp, 0x0013C83Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C83A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C840
 * Original: 0x0013C840 - 0x0013C84C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C840(void)
{

loc_0013C840: ;
    PUSH32(esp, 0x13D320);
    PUSH32(esp, 0x0013C84Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C84A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C850
 * Original: 0x0013C850 - 0x0013C85C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C850(void)
{

loc_0013C850: ;
    PUSH32(esp, 0x13D310);
    PUSH32(esp, 0x0013C85Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C85A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C860
 * Original: 0x0013C860 - 0x0013C86C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C860(void)
{

loc_0013C860: ;
    PUSH32(esp, 0x13D300);
    PUSH32(esp, 0x0013C86Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C86A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C870
 * Original: 0x0013C870 - 0x0013C87C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C870(void)
{

loc_0013C870: ;
    PUSH32(esp, 0x13D290);
    PUSH32(esp, 0x0013C87Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C87A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C880
 * Original: 0x0013C880 - 0x0013C896 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C880(void)
{

loc_0013C880: ;
    ecx = 0x1DE620;
    PUSH32(esp, 0x0013C88Au); RECOMP_ABI_CALL(0x00107DD0u, sub_00107DD0); /* call 0x00107DD0 */

loc_0013C88A: ;
    PUSH32(esp, 0x13D250);
    PUSH32(esp, 0x0013C894u); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C894: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C8A0
 * Original: 0x0013C8A0 - 0x0013C8AC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C8A0(void)
{

loc_0013C8A0: ;
    PUSH32(esp, 0x13D2A0);
    PUSH32(esp, 0x0013C8AAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C8AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C8B0
 * Original: 0x0013C8B0 - 0x0013C8BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C8B0(void)
{

loc_0013C8B0: ;
    PUSH32(esp, 0x13D2B0);
    PUSH32(esp, 0x0013C8BAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C8BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C8C0
 * Original: 0x0013C8C0 - 0x0013C8CC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C8C0(void)
{

loc_0013C8C0: ;
    PUSH32(esp, 0x13D2C0);
    PUSH32(esp, 0x0013C8CAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C8CA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C8D0
 * Original: 0x0013C8D0 - 0x0013C8DC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C8D0(void)
{

loc_0013C8D0: ;
    PUSH32(esp, 0x13D2D0);
    PUSH32(esp, 0x0013C8DAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C8DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C8E0
 * Original: 0x0013C8E0 - 0x0013C8EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C8E0(void)
{

loc_0013C8E0: ;
    PUSH32(esp, 0x13D2E0);
    PUSH32(esp, 0x0013C8EAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C8EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C8F0
 * Original: 0x0013C8F0 - 0x0013C8FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C8F0(void)
{

loc_0013C8F0: ;
    PUSH32(esp, 0x13D2F0);
    PUSH32(esp, 0x0013C8FAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C8FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C900
 * Original: 0x0013C900 - 0x0013C90C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C900(void)
{

loc_0013C900: ;
    PUSH32(esp, 0x13D330);
    PUSH32(esp, 0x0013C90Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C90A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C910
 * Original: 0x0013C910 - 0x0013C91C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C910(void)
{

loc_0013C910: ;
    PUSH32(esp, 0x13D340);
    PUSH32(esp, 0x0013C91Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C91A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C920
 * Original: 0x0013C920 - 0x0013C92C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C920(void)
{

loc_0013C920: ;
    PUSH32(esp, 0x13D360);
    PUSH32(esp, 0x0013C92Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C92A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C930
 * Original: 0x0013C930 - 0x0013C93C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C930(void)
{

loc_0013C930: ;
    PUSH32(esp, 0x13D350);
    PUSH32(esp, 0x0013C93Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C93A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C940
 * Original: 0x0013C940 - 0x0013C94B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C940(void)
{

loc_0013C940: ;
    eax = MEM32(0x1C4370);
    MEM32(0x1DFBA0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C950
 * Original: 0x0013C950 - 0x0013C95B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C950(void)
{

loc_0013C950: ;
    eax = MEM32(0x1C4370);
    MEM32(0x1DFB9C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C960
 * Original: 0x0013C960 - 0x0013C96C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C960(void)
{

loc_0013C960: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0x0013C96Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C96A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C970
 * Original: 0x0013C970 - 0x0013C97C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C970(void)
{

loc_0013C970: ;
    PUSH32(esp, 0x13D380);
    PUSH32(esp, 0x0013C97Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C97A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C980
 * Original: 0x0013C980 - 0x0013C99F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C980(void)
{

loc_0013C980: ;
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3F2147AE);
    ecx = 0x1DFBA8;
    PUSH32(esp, 0x0013C99Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C99E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C9A0
 * Original: 0x0013C9A0 - 0x0013C9AC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C9A0(void)
{

loc_0013C9A0: ;
    PUSH32(esp, 0x13D390);
    PUSH32(esp, 0x0013C9AAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C9AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C9B0
 * Original: 0x0013C9B0 - 0x0013C9BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C9B0(void)
{

loc_0013C9B0: ;
    PUSH32(esp, 0x13D3A0);
    PUSH32(esp, 0x0013C9BAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C9BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C9C0
 * Original: 0x0013C9C0 - 0x0013C9DF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C9C0(void)
{

loc_0013C9C0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F59999A);
    PUSH32(esp, 0x3F59999A);
    PUSH32(esp, 0x3E800000);
    ecx = 0x1DFBB4;
    PUSH32(esp, 0x0013C9DEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C9DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C9E0
 * Original: 0x0013C9E0 - 0x0013C9EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C9E0(void)
{

loc_0013C9E0: ;
    PUSH32(esp, 0x13D3B0);
    PUSH32(esp, 0x0013C9EAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C9EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C9F0
 * Original: 0x0013C9F0 - 0x0013CA0F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C9F0(void)
{

loc_0013C9F0: ;
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0x3F0CCCCD);
    PUSH32(esp, 0x3F0CCCCD);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DFBAC;
    PUSH32(esp, 0x0013CA0Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013CA0E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CA10
 * Original: 0x0013CA10 - 0x0013CA2C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CA10(void)
{

loc_0013CA10: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    ecx = 0x1DFBB0;
    PUSH32(esp, 0x0013CA2Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013CA2B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CA30
 * Original: 0x0013CA30 - 0x0013CA4C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CA30(void)
{

loc_0013CA30: ;
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    ecx = 0x1DFBB8;
    PUSH32(esp, 0x0013CA4Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013CA4B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CA50
 * Original: 0x0013CA50 - 0x0013CA5C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CA50(void)
{

loc_0013CA50: ;
    PUSH32(esp, 0x13D3C0);
    PUSH32(esp, 0x0013CA5Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013CA5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013CA60
 * Original: 0x0013CA60 - 0x0013CA6C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CA60(void)
{

loc_0013CA60: ;
    PUSH32(esp, 0x13D3D0);
    PUSH32(esp, 0x0013CA6Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013CA6A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013CA70
 * Original: 0x0013CA70 - 0x0013CA84 (20 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0013CA70(void)
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

loc_0013CA70: ;
    PUSH32(esp, 0x3EAAAAAB);
    PUSH32(esp, 0x0013CA7Au); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_0013CA7A: ;
    MEMF(0x1DFC10) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_0013CA90
 * Original: 0x0013CA90 - 0x0013CAAF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CA90(void)
{

loc_0013CA90: ;
    PUSH32(esp, 0x3F428F5C);
    PUSH32(esp, 0x3F59999A);
    PUSH32(esp, 0x3F5A9FBE);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1E3DD0;
    PUSH32(esp, 0x0013CAAEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013CAAE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CAB0
 * Original: 0x0013CAB0 - 0x0013CABC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CAB0(void)
{

loc_0013CAB0: ;
    PUSH32(esp, 0x13D3E0);
    PUSH32(esp, 0x0013CABAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013CABA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013CAC0
 * Original: 0x0013CAC0 - 0x0013CACC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CAC0(void)
{

loc_0013CAC0: ;
    PUSH32(esp, 0x13D3F0);
    PUSH32(esp, 0x0013CACAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013CACA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013CAD0
 * Original: 0x0013CAD0 - 0x0013CAD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CAD0(void)
{

loc_0013CAD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CAE0
 * Original: 0x0013CAE0 - 0x0013CB07 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013CAE0: ;
    ecx = 0x1CA2D0;
    PUSH32(esp, 0x0013CAEAu); RECOMP_ABI_CALL(0x00015C70u, sub_00015C70); /* call 0x00015C70 */

loc_0013CAEA: ;
    eax = MEM32(0x1CA2D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CB06; /* je: equal / zero */

loc_0013CAF3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013CAF9u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0013CAF9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x1CA2D0) = 0;

loc_0013CB06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CB10
 * Original: 0x0013CB10 - 0x0013CB1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CB10: ;
    ecx = 0x1D7440;
    g_seh_ebp = ebp; sub_000A1D10(); return; /* tail jmp 0x000A1D10 */

}

/**
 * sub_0013CB20
 * Original: 0x0013CB20 - 0x0013CB21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CB20(void)
{

loc_0013CB20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CB30
 * Original: 0x0013CB30 - 0x0013CB3A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CB30: ;
    ecx = 0x1D7528;
    g_seh_ebp = ebp; sub_00071E40(); return; /* tail jmp 0x00071E40 */

}

/**
 * sub_0013CB40
 * Original: 0x0013CB40 - 0x0013CB41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CB40(void)
{

loc_0013CB40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CB50
 * Original: 0x0013CB50 - 0x0013CB51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CB50(void)
{

loc_0013CB50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CB60
 * Original: 0x0013CB60 - 0x0013CB61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CB60(void)
{

loc_0013CB60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CB70
 * Original: 0x0013CB70 - 0x0013CB7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CB70: ;
    ecx = 0x1CA5A4;
    g_seh_ebp = ebp; sub_00025190(); return; /* tail jmp 0x00025190 */

}

/**
 * sub_0013CB80
 * Original: 0x0013CB80 - 0x0013CB8A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CB80: ;
    ecx = 0x1CA5B8;
    g_seh_ebp = ebp; sub_00025200(); return; /* tail jmp 0x00025200 */

}

/**
 * sub_0013CB90
 * Original: 0x0013CB90 - 0x0013CB9A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CB90: ;
    ecx = 0x1CA5CC;
    g_seh_ebp = ebp; sub_00025200(); return; /* tail jmp 0x00025200 */

}

/**
 * sub_0013CBA0
 * Original: 0x0013CBA0 - 0x0013CBAA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CBA0: ;
    ecx = 0x1CA5E0;
    g_seh_ebp = ebp; sub_00025200(); return; /* tail jmp 0x00025200 */

}

/**
 * sub_0013CBB0
 * Original: 0x0013CBB0 - 0x0013CBBA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CBB0: ;
    ecx = 0x1CA5F4;
    g_seh_ebp = ebp; sub_00025270(); return; /* tail jmp 0x00025270 */

}

/**
 * sub_0013CBC0
 * Original: 0x0013CBC0 - 0x0013CBCA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CBC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CBC0: ;
    ecx = 0x1CA608;
    g_seh_ebp = ebp; sub_00025190(); return; /* tail jmp 0x00025190 */

}

/**
 * sub_0013CBD0
 * Original: 0x0013CBD0 - 0x0013CBDA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CBD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CBD0: ;
    ecx = 0x1CA61C;
    g_seh_ebp = ebp; sub_00025190(); return; /* tail jmp 0x00025190 */

}

/**
 * sub_0013CBE0
 * Original: 0x0013CBE0 - 0x0013CBEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CBE0: ;
    ecx = 0x1CA630;
    g_seh_ebp = ebp; sub_00025190(); return; /* tail jmp 0x00025190 */

}

/**
 * sub_0013CBF0
 * Original: 0x0013CBF0 - 0x0013CBF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CBF0(void)
{

loc_0013CBF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CC00
 * Original: 0x0013CC00 - 0x0013CC01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CC00(void)
{

loc_0013CC00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CC10
 * Original: 0x0013CC10 - 0x0013CC11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CC10(void)
{

loc_0013CC10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CC20
 * Original: 0x0013CC20 - 0x0013CC21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CC20(void)
{

loc_0013CC20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CC30
 * Original: 0x0013CC30 - 0x0013CC31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CC30(void)
{

loc_0013CC30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CC40
 * Original: 0x0013CC40 - 0x0013CC41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CC40(void)
{

loc_0013CC40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CC50
 * Original: 0x0013CC50 - 0x0013CC51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CC50(void)
{

loc_0013CC50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CC60
 * Original: 0x0013CC60 - 0x0013CC61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CC60(void)
{

loc_0013CC60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CC70
 * Original: 0x0013CC70 - 0x0013CC71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CC70(void)
{

loc_0013CC70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CC80
 * Original: 0x0013CC80 - 0x0013CC81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CC80(void)
{

loc_0013CC80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CC90
 * Original: 0x0013CC90 - 0x0013CC91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CC90(void)
{

loc_0013CC90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CCA0
 * Original: 0x0013CCA0 - 0x0013CCA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CCA0(void)
{

loc_0013CCA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CCB0
 * Original: 0x0013CCB0 - 0x0013CCB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CCB0(void)
{

loc_0013CCB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CCC0
 * Original: 0x0013CCC0 - 0x0013CCC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CCC0(void)
{

loc_0013CCC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CCD0
 * Original: 0x0013CCD0 - 0x0013CCD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CCD0(void)
{

loc_0013CCD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CCE0
 * Original: 0x0013CCE0 - 0x0013CCE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CCE0(void)
{

loc_0013CCE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CCF0
 * Original: 0x0013CCF0 - 0x0013CCF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CCF0(void)
{

loc_0013CCF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CD00
 * Original: 0x0013CD00 - 0x0013CD01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CD00(void)
{

loc_0013CD00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CD10
 * Original: 0x0013CD10 - 0x0013CD11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CD10(void)
{

loc_0013CD10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CD20
 * Original: 0x0013CD20 - 0x0013CD21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CD20(void)
{

loc_0013CD20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CD30
 * Original: 0x0013CD30 - 0x0013CD3A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CD30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CD30: ;
    ecx = 0x1D8620;
    g_seh_ebp = ebp; sub_000A1D10(); return; /* tail jmp 0x000A1D10 */

}

/**
 * sub_0013CD40
 * Original: 0x0013CD40 - 0x0013CD41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CD40(void)
{

loc_0013CD40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CD50
 * Original: 0x0013CD50 - 0x0013CD51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CD50(void)
{

loc_0013CD50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CD60
 * Original: 0x0013CD60 - 0x0013CD61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CD60(void)
{

loc_0013CD60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CD70
 * Original: 0x0013CD70 - 0x0013CD71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CD70(void)
{

loc_0013CD70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CD80
 * Original: 0x0013CD80 - 0x0013CD81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CD80(void)
{

loc_0013CD80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CD90
 * Original: 0x0013CD90 - 0x0013CD91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CD90(void)
{

loc_0013CD90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CDA0
 * Original: 0x0013CDA0 - 0x0013CDA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CDA0(void)
{

loc_0013CDA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CDB0
 * Original: 0x0013CDB0 - 0x0013CDB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CDB0(void)
{

loc_0013CDB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CDC0
 * Original: 0x0013CDC0 - 0x0013CDC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CDC0(void)
{

loc_0013CDC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CDD0
 * Original: 0x0013CDD0 - 0x0013CDD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CDD0(void)
{

loc_0013CDD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CDE0
 * Original: 0x0013CDE0 - 0x0013CDE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CDE0(void)
{

loc_0013CDE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CDF0
 * Original: 0x0013CDF0 - 0x0013CDF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CDF0(void)
{

loc_0013CDF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CE00
 * Original: 0x0013CE00 - 0x0013CE01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CE00(void)
{

loc_0013CE00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CE10
 * Original: 0x0013CE10 - 0x0013CE11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CE10(void)
{

loc_0013CE10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CE20
 * Original: 0x0013CE20 - 0x0013CE21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CE20(void)
{

loc_0013CE20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CE30
 * Original: 0x0013CE30 - 0x0013CE31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CE30(void)
{

loc_0013CE30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CE40
 * Original: 0x0013CE40 - 0x0013CE41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CE40(void)
{

loc_0013CE40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CE50
 * Original: 0x0013CE50 - 0x0013CE5A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CE50: ;
    ecx = 0x1CCA84;
    g_seh_ebp = ebp; sub_00016CF0(); return; /* tail jmp 0x00016CF0 */

}

/**
 * sub_0013CE60
 * Original: 0x0013CE60 - 0x0013CE61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CE60(void)
{

loc_0013CE60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CE70
 * Original: 0x0013CE70 - 0x0013CE71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CE70(void)
{

loc_0013CE70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CE80
 * Original: 0x0013CE80 - 0x0013CE81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CE80(void)
{

loc_0013CE80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CE90
 * Original: 0x0013CE90 - 0x0013CE91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CE90(void)
{

loc_0013CE90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CEA0
 * Original: 0x0013CEA0 - 0x0013CEA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CEA0(void)
{

loc_0013CEA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CEB0
 * Original: 0x0013CEB0 - 0x0013CEB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CEB0(void)
{

loc_0013CEB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CEC0
 * Original: 0x0013CEC0 - 0x0013CEC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CEC0(void)
{

loc_0013CEC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CED0
 * Original: 0x0013CED0 - 0x0013CED1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CED0(void)
{

loc_0013CED0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CEE0
 * Original: 0x0013CEE0 - 0x0013CF09 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013CEE0: ;
    eax = MEM32(0x1DA0A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CF08; /* je: equal / zero */

loc_0013CEE9: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0013CEFE; /* jne: not equal / not zero */

loc_0013CEF8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0013CEFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013CEFCu); } /* indirect call */
    }

loc_0013CEFE: ;
    MEM32(0x1DA0A8) = 0;

loc_0013CF08: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CF10
 * Original: 0x0013CF10 - 0x0013CF11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CF10(void)
{

loc_0013CF10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CF20
 * Original: 0x0013CF20 - 0x0013CF21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CF20(void)
{

loc_0013CF20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CF30
 * Original: 0x0013CF30 - 0x0013CF31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CF30(void)
{

loc_0013CF30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CF40
 * Original: 0x0013CF40 - 0x0013CF41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CF40(void)
{

loc_0013CF40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CF50
 * Original: 0x0013CF50 - 0x0013CF51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CF50(void)
{

loc_0013CF50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CF60
 * Original: 0x0013CF60 - 0x0013CF61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CF60(void)
{

loc_0013CF60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CF70
 * Original: 0x0013CF70 - 0x0013CF71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CF70(void)
{

loc_0013CF70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CF80
 * Original: 0x0013CF80 - 0x0013CF81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CF80(void)
{

loc_0013CF80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CF90
 * Original: 0x0013CF90 - 0x0013CF9A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CF90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CF90: ;
    ecx = 0x1DA8C8;
    g_seh_ebp = ebp; sub_000A1D10(); return; /* tail jmp 0x000A1D10 */

}

/**
 * sub_0013CFA0
 * Original: 0x0013CFA0 - 0x0013CFAA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CFA0: ;
    ecx = 0x1DAA98;
    g_seh_ebp = ebp; sub_000A1D10(); return; /* tail jmp 0x000A1D10 */

}

/**
 * sub_0013CFB0
 * Original: 0x0013CFB0 - 0x0013CFB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CFB0(void)
{

loc_0013CFB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CFC0
 * Original: 0x0013CFC0 - 0x0013CFC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CFC0(void)
{

loc_0013CFC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CFD0
 * Original: 0x0013CFD0 - 0x0013CFD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CFD0(void)
{

loc_0013CFD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CFE0
 * Original: 0x0013CFE0 - 0x0013CFE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CFE0(void)
{

loc_0013CFE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013CFF0
 * Original: 0x0013CFF0 - 0x0013CFF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CFF0(void)
{

loc_0013CFF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D000
 * Original: 0x0013D000 - 0x0013D001 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D000(void)
{

loc_0013D000: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D010
 * Original: 0x0013D010 - 0x0013D011 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D010(void)
{

loc_0013D010: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D020
 * Original: 0x0013D020 - 0x0013D021 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D020(void)
{

loc_0013D020: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D030
 * Original: 0x0013D030 - 0x0013D031 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D030(void)
{

loc_0013D030: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D040
 * Original: 0x0013D040 - 0x0013D041 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D040(void)
{

loc_0013D040: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D050
 * Original: 0x0013D050 - 0x0013D051 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D050(void)
{

loc_0013D050: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D060
 * Original: 0x0013D060 - 0x0013D061 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D060(void)
{

loc_0013D060: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D070
 * Original: 0x0013D070 - 0x0013D071 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D070(void)
{

loc_0013D070: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D080
 * Original: 0x0013D080 - 0x0013D081 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D080(void)
{

loc_0013D080: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D090
 * Original: 0x0013D090 - 0x0013D091 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D090(void)
{

loc_0013D090: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D0A0
 * Original: 0x0013D0A0 - 0x0013D0A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D0A0(void)
{

loc_0013D0A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D0B0
 * Original: 0x0013D0B0 - 0x0013D0B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D0B0(void)
{

loc_0013D0B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D0C0
 * Original: 0x0013D0C0 - 0x0013D0DE (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D0C0: ;
    eax = MEM32(0x1CF0B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x1CF0AC) = 0x1C1F70;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D0DD; /* je: equal / zero */

loc_0013D0D3: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D0DCu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0013D0DC: ;
    POP32(esp, ecx);

loc_0013D0DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D0E0
 * Original: 0x0013D0E0 - 0x0013D0E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D0E0(void)
{

loc_0013D0E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D0F0
 * Original: 0x0013D0F0 - 0x0013D0F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D0F0(void)
{

loc_0013D0F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D100
 * Original: 0x0013D100 - 0x0013D101 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D100(void)
{

loc_0013D100: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D110
 * Original: 0x0013D110 - 0x0013D111 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D110(void)
{

loc_0013D110: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D120
 * Original: 0x0013D120 - 0x0013D121 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D120(void)
{

loc_0013D120: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D130
 * Original: 0x0013D130 - 0x0013D14E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D130: ;
    eax = MEM32(0x1CF104);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x1CF100) = 0x1C20B8;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D14D; /* je: equal / zero */

loc_0013D143: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D14Cu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0013D14C: ;
    POP32(esp, ecx);

loc_0013D14D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D150
 * Original: 0x0013D150 - 0x0013D16B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D150: ;
    eax = MEM32(0x1CF124);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x1CF114) = 0x1C2A7C;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D16A; /* je: equal / zero */

loc_0013D163: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D169u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0013D169: ;
    POP32(esp, ecx);

loc_0013D16A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D170
 * Original: 0x0013D170 - 0x0013D18B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D170: ;
    eax = MEM32(0x1CF134);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x1CF128) = 0x1C2A80;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D18A; /* je: equal / zero */

loc_0013D183: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D189u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0013D189: ;
    POP32(esp, ecx);

loc_0013D18A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D190
 * Original: 0x0013D190 - 0x0013D1AB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D190: ;
    eax = MEM32(0x1CF144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x1CF138) = 0x1C2A80;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D1AA; /* je: equal / zero */

loc_0013D1A3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D1A9u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0013D1A9: ;
    POP32(esp, ecx);

loc_0013D1AA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D1B0
 * Original: 0x0013D1B0 - 0x0013D1CB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D1B0: ;
    eax = MEM32(0x1CF154);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x1CF148) = 0x1C2A80;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D1CA; /* je: equal / zero */

loc_0013D1C3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D1C9u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0013D1C9: ;
    POP32(esp, ecx);

loc_0013D1CA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D1D0
 * Original: 0x0013D1D0 - 0x0013D1EB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D1D0: ;
    eax = MEM32(0x1CF164);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x1CF158) = 0x1C2A84;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D1EA; /* je: equal / zero */

loc_0013D1E3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D1E9u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0013D1E9: ;
    POP32(esp, ecx);

loc_0013D1EA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D1F0
 * Original: 0x0013D1F0 - 0x0013D20B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D1F0: ;
    eax = MEM32(0x1CF174);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x1CF168) = 0x1C2A84;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D20A; /* je: equal / zero */

loc_0013D203: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013D209u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0013D209: ;
    POP32(esp, ecx);

loc_0013D20A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D210
 * Original: 0x0013D210 - 0x0013D21A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013D210: ;
    ecx = 0x1DE6B0;
    g_seh_ebp = ebp; sub_00105830(); return; /* tail jmp 0x00105830 */

}

/**
 * sub_0013D220
 * Original: 0x0013D220 - 0x0013D22A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013D220: ;
    ecx = 0x1DE580;
    g_seh_ebp = ebp; sub_0010B740(); return; /* tail jmp 0x0010B740 */

}

/**
 * sub_0013D230
 * Original: 0x0013D230 - 0x0013D23A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013D230: ;
    ecx = 0x1DE5D0;
    g_seh_ebp = ebp; sub_0010B740(); return; /* tail jmp 0x0010B740 */

}

/**
 * sub_0013D240
 * Original: 0x0013D240 - 0x0013D24A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013D240: ;
    ecx = 0x1DE7B8;
    g_seh_ebp = ebp; sub_0010B740(); return; /* tail jmp 0x0010B740 */

}

/**
 * sub_0013D250
 * Original: 0x0013D250 - 0x0013D25A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013D250: ;
    ecx = 0x1DE620;
    g_seh_ebp = ebp; sub_0010B740(); return; /* tail jmp 0x0010B740 */

}

/**
 * sub_0013D260
 * Original: 0x0013D260 - 0x0013D261 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D260(void)
{

loc_0013D260: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D270
 * Original: 0x0013D270 - 0x0013D271 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D270(void)
{

loc_0013D270: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D280
 * Original: 0x0013D280 - 0x0013D281 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D280(void)
{

loc_0013D280: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D290
 * Original: 0x0013D290 - 0x0013D291 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D290(void)
{

loc_0013D290: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D2A0
 * Original: 0x0013D2A0 - 0x0013D2A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D2A0(void)
{

loc_0013D2A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D2B0
 * Original: 0x0013D2B0 - 0x0013D2B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D2B0(void)
{

loc_0013D2B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D2C0
 * Original: 0x0013D2C0 - 0x0013D2C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D2C0(void)
{

loc_0013D2C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D2D0
 * Original: 0x0013D2D0 - 0x0013D2D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D2D0(void)
{

loc_0013D2D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D2E0
 * Original: 0x0013D2E0 - 0x0013D2E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D2E0(void)
{

loc_0013D2E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D2F0
 * Original: 0x0013D2F0 - 0x0013D2F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D2F0(void)
{

loc_0013D2F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D300
 * Original: 0x0013D300 - 0x0013D301 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D300(void)
{

loc_0013D300: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D310
 * Original: 0x0013D310 - 0x0013D311 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D310(void)
{

loc_0013D310: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D320
 * Original: 0x0013D320 - 0x0013D321 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D320(void)
{

loc_0013D320: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D330
 * Original: 0x0013D330 - 0x0013D331 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D330(void)
{

loc_0013D330: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D340
 * Original: 0x0013D340 - 0x0013D341 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D340(void)
{

loc_0013D340: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D350
 * Original: 0x0013D350 - 0x0013D351 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D350(void)
{

loc_0013D350: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D360
 * Original: 0x0013D360 - 0x0013D361 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D360(void)
{

loc_0013D360: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D370
 * Original: 0x0013D370 - 0x0013D371 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D370(void)
{

loc_0013D370: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D380
 * Original: 0x0013D380 - 0x0013D381 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D380(void)
{

loc_0013D380: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D390
 * Original: 0x0013D390 - 0x0013D391 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D390(void)
{

loc_0013D390: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D3A0
 * Original: 0x0013D3A0 - 0x0013D3A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D3A0(void)
{

loc_0013D3A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D3B0
 * Original: 0x0013D3B0 - 0x0013D3B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D3B0(void)
{

loc_0013D3B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D3C0
 * Original: 0x0013D3C0 - 0x0013D3C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D3C0(void)
{

loc_0013D3C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D3D0
 * Original: 0x0013D3D0 - 0x0013D3D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D3D0(void)
{

loc_0013D3D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D3E0
 * Original: 0x0013D3E0 - 0x0013D3EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013D3E0: ;
    ecx = 0x1F25EC;
    g_seh_ebp = ebp; sub_001227F0(); return; /* tail jmp 0x001227F0 */

}

/**
 * sub_0013D3F0
 * Original: 0x0013D3F0 - 0x0013D3F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D3F0(void)
{

loc_0013D3F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D400
 * Original: 0x0013D400 - 0x0013D41F (31 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D400: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D41C; /* je: equal / zero */

loc_0013D40A: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;

loc_0013D41C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D41F
 * Original: 0x0013D41F - 0x0013D430 (17 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D41F(void)
{

loc_0013D41F: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x626F5344);
    PUSH32(esp, 0x0013D42Fu); RECOMP_ABI_CALL(0x0013FC1Cu, sub_0013FC1C); /* call 0x0013FC1C */

loc_0013D42F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D430
 * Original: 0x0013D430 - 0x0013D463 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013D430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0013D430: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = ecx;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    edx = MEM32(ebp + -4);
    SET_LO8(ecx, 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(edx + 4) = eax;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D461; /* je: equal / zero */

loc_0013D456: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x1ADEE8); PUSH32(esp, 0x0013D45Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D456u); } /* indirect call */
    }

loc_0013D45C: ;
    ecx = MEM32(ebp + -4);
    MEM8(ecx) = LO8(eax);

loc_0013D461: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0013D463
 * Original: 0x0013D463 - 0x0013D47A (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D463(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D463: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D478; /* je: equal / zero */

loc_0013D46C: ;
    SET_LO8(ecx, MEM8(esi));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x1ADE94); PUSH32(esp, 0x0013D474u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D46Eu); } /* indirect call */
    }

loc_0013D474: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0013D478: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013D47A
 * Original: 0x0013D47A - 0x0013D49F (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D47A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D47A: ;
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D49E; /* je: equal / zero */

loc_0013D484: ;
    eax = MEM32(0x1497C0);
    MEM32(0x1497C0) = MEM32(0x1497C0) + 1;
    _fa = (uint32_t)(MEM32(0x1497C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D49E; /* jne: not equal / not zero */

loc_0013D493: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149E94);
    { uint32_t _icall_target = MEM32(0x1ADEEC); PUSH32(esp, 0x0013D49Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D498u); } /* indirect call */
    }

loc_0013D49E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D49F
 * Original: 0x0013D49F - 0x0013D4BD (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D49F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D49F: ;
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D4BC; /* je: equal / zero */

loc_0013D4A9: ;
    MEM32(0x1497C0) = MEM32(0x1497C0) - 1;
    _fa = (uint32_t)(MEM32(0x1497C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013D4BC; /* jne: not equal / not zero */

loc_0013D4B1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149E94);
    { uint32_t _icall_target = MEM32(0x1ADEF0); PUSH32(esp, 0x0013D4BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D4B6u); } /* indirect call */
    }

loc_0013D4BC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D4BD
 * Original: 0x0013D4BD - 0x0013D4CA (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D4BD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D4BD: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(eax + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D4CA
 * Original: 0x0013D4CA - 0x0013D4ED (35 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D4CA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D4CA: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0013D4E7; /* jbe: below or equal (unsigned <=) */

loc_0013D4D5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0013D4E7; /* jne: not equal / not zero */

loc_0013D4DD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0013D4E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D4E1u); } /* indirect call */
    }

loc_0013D4E3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0013D4EA;

loc_0013D4E7: ;
    eax = MEM32(ecx + 4);

loc_0013D4EA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D4ED
 * Original: 0x0013D4ED - 0x0013D4F1 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D4ED(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D4ED: ;
    { uint32_t _bs_v = (uint32_t)(ecx); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsf: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 0; _bs_i < 32; _bs_i++)
          if (_bs_v & (1u << _bs_i)) break;
        eax = (uint32_t)_bs_i;;
      } else { (void)(eax); } }
    esp += 4; return; /* ret */

}

/**
 * sub_0013D4F1
 * Original: 0x0013D4F1 - 0x0013D510 (31 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D4F1(void)
{

loc_0013D4F1: ;
    MEM32(0x1497CC) = 1;
    MEM32(0x1497C4) = 0x140FFF;
    MEM32(0x1497C8) = 0x140E76;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D510
 * Original: 0x0013D510 - 0x0013D52E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D510: ;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D51F; /* je: equal / zero */

loc_0013D51C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0013D51F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDDC); PUSH32(esp, 0x0013D52Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D524u); } /* indirect call */
    }

loc_0013D52A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0013D52E
 * Original: 0x0013D52E - 0x0013D55D (47 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D52E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D52E: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0013D545u); RECOMP_ABI_CALL(0x00141350u, sub_00141350); /* call 0x00141350 */

loc_0013D545: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013D552; /* jl: less (signed <) */

loc_0013D549: ;
    MEM32(esi + 0x2B8) = MEM32(esi + 0x2B8) | 1;
    _fa = (uint32_t)(MEM32(esi + 0x2B8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0013D559;

loc_0013D552: ;
    MEM32(esi + 0x2B8) = MEM32(esi + 0x2B8) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esi + 0x2B8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0013D559: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0013D55D
 * Original: 0x0013D55D - 0x0013D580 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D55D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D55D: ;
    ecx = MEM32(ecx + 0x88);
    eax = ZX8(MEM8(ecx + 0xF));
    edx = ZX8(MEM8(ecx + 0xE));
    ecx = MEM32(ecx + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0013D57D; /* ja: above (unsigned >) */

loc_0013D57B: ;
    eax = ecx;

loc_0013D57D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013D580
 * Original: 0x0013D580 - 0x0013D595 (21 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D580: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0013D592u); RECOMP_ABI_CALL(0x0014066Cu, sub_0014066C); /* call 0x0014066C */

loc_0013D592: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013D595
 * Original: 0x0013D595 - 0x0013D5AB (22 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D595(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0013D595: ;
    eax = MEM32(esp + 4);
    ecx = eax + -8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0013D5A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D5A5u); } /* indirect call */
    }

loc_0013D5A8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D5AB
 * Original: 0x0013D5AB - 0x0013D5C1 (22 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D5AB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0013D5AB: ;
    eax = MEM32(esp + 4);
    ecx = eax + -28;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0013D5BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D5BBu); } /* indirect call */
    }

loc_0013D5BE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D5C1
 * Original: 0x0013D5C1 - 0x0013D5E9 (40 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D5C1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D5C1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013D5C7u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013D5C7: ;
    _fa = (uint32_t)(MEM32(0x1497CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1497CC), 2 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_BE(_fa, _fb)) goto loc_0013D5D8; /* jbe: below or equal (unsigned <=) */

loc_0013D5D3: ;
    PUSH32(esp, 0x0013D5D8u); RECOMP_ABI_CALL(0x0013D4F1u, sub_0013D4F1); /* call 0x0013D4F1 */

loc_0013D5D8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0013D5E8; /* je: equal / zero */

loc_0013D5DD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013D5E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D5E2u); } /* indirect call */
    }

loc_0013D5E8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D5E9
 * Original: 0x0013D5E9 - 0x0013D634 (75 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013D5E9(void)
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

loc_0013D5E9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D5F6u); RECOMP_ABI_CALL(0x0013D47Au, sub_0013D47A); /* call 0x0013D47A */

loc_0013D5F6: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBB80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D604; /* jne: not equal / not zero */

loc_0013D600: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0013D625;

loc_0013D604: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0013D614; /* jge: greater or equal (signed >=) */

loc_0013D60E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D8)); /* fadd dword ptr [0x1c91d8] */

loc_0013D614: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1BC77C)); /* fmul dword ptr [0x1bc77c] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D623u); RECOMP_ABI_CALL(0x00143005u, sub_00143005); /* call 0x00143005 */

loc_0013D623: ;
    esi = eax;

loc_0013D625: ;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D62Du); RECOMP_ABI_CALL(0x0013D49Fu, sub_0013D49F); /* call 0x0013D49F */

loc_0013D62D: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013D634
 * Original: 0x0013D634 - 0x0013D639 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D634(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013D634: ;
    g_seh_ebp = ebp; sub_0013FCB8(); return; /* tail jmp 0x0013FCB8 */

}

/**
 * sub_0013D639
 * Original: 0x0013D639 - 0x0013D65B (34 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D639(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D639: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D64E; /* je: equal / zero */

loc_0013D641: ;
    edx = MEM32(eax);
    MEM32(ecx + 0xC) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 0x10) = eax;
    goto loc_0013D658;

loc_0013D64E: ;
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ecx + 0xC;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    POP32(esp, edi);

loc_0013D658: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D65B
 * Original: 0x0013D65B - 0x0013D678 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D65B(void)
{

loc_0013D65B: ;
    eax = ecx;
    ecx = eax + 0x10;
    MEM32(eax + 4) = 2;
    MEM32(eax) = 0x1C1D90;
    MEM32(0x149E90) = eax;
    MEM32(eax + 0x14) = ecx;
    MEM32(ecx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D678
 * Original: 0x0013D678 - 0x0013D6BF (71 bytes, 21 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D678(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D678: ;
    PUSH32(esp, 0x0013D67Du); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013D67D: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    ecx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013D69F; /* je: equal / zero */

loc_0013D689: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D698; /* je: equal / zero */

loc_0013D68D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013D698u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D692u); } /* indirect call */
    }

loc_0013D698: ;
    eax = 0x80004005u;
    goto loc_0013D6BC;

loc_0013D69F: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0013D6B9; /* je: equal / zero */

loc_0013D6AE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013D6B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D6B3u); } /* indirect call */
    }

loc_0013D6B9: ;
    eax = esi;
    POP32(esp, esi);

loc_0013D6BC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D6BF
 * Original: 0x0013D6BF - 0x0013D6F9 (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D6BF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D6BF: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C1D90;
    MEM32(0x149E90) = MEM32(0x149E90) & 0;
    _fa = (uint32_t)(MEM32(0x149E90)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D6E0; /* je: equal / zero */

loc_0013D6D6: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0013D6DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D6D9u); } /* indirect call */
    }

loc_0013D6DC: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0013D6E0: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D6F1; /* je: equal / zero */

loc_0013D6E7: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0013D6EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D6EAu); } /* indirect call */
    }

loc_0013D6ED: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0013D6F1: ;
    MEM32(esi) = 0x1C1D6C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013D6F9
 * Original: 0x0013D6F9 - 0x0013D75D (100 bytes, 33 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013D6F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D6F9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D702u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013D702: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    edi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013D724; /* je: equal / zero */

loc_0013D70E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D71D; /* je: equal / zero */

loc_0013D712: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013D71Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D717u); } /* indirect call */
    }

loc_0013D71D: ;
    eax = 0x80004005u;
    goto loc_0013D758;

loc_0013D724: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(esi + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D733u); RECOMP_ABI_CALL(0x0013D639u, sub_0013D639); /* call 0x0013D639 */

loc_0013D733: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D744u); RECOMP_ABI_CALL(0x0013D52Eu, sub_0013D52E); /* call 0x0013D52E */

loc_0013D744: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D755; /* je: equal / zero */

loc_0013D74A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013D755u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D74Fu); } /* indirect call */
    }

loc_0013D755: ;
    eax = esi;
    POP32(esp, esi);

loc_0013D758: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0013D75D
 * Original: 0x0013D75D - 0x0013D76C (15 bytes, 4 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D75D(void)
{

loc_0013D75D: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x0013D769u); RECOMP_ABI_CALL(0x00141BE4u, sub_00141BE4); /* call 0x00141BE4 */

loc_0013D769: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D76C
 * Original: 0x0013D76C - 0x0013D79D (49 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D76C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D76C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013D772u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013D772: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_NE(_fa, _fb)) goto loc_0013D78A; /* jne: not equal / not zero */

loc_0013D77E: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x0013D78Au); RECOMP_ABI_CALL(0x00141A9Bu, sub_00141A9B); /* call 0x00141A9B */

loc_0013D78A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D799; /* je: equal / zero */

loc_0013D78E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013D799u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D793u); } /* indirect call */
    }

loc_0013D799: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D79D
 * Original: 0x0013D79D - 0x0013D852 (181 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D79D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D79D: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013D7BF; /* jne: not equal / not zero */

loc_0013D7A5: ;
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013D7B2; /* je: equal / zero */

loc_0013D7AB: ;
    eax = 0x14957C;
    goto loc_0013D7BF;

loc_0013D7B2: ;
    eax = ZX8(MEM8(ecx + 0xE));
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax * 4 + 0x1480FC);

loc_0013D7BF: ;
    MEM32(ecx + 0x24) = MEM32(ecx + 0x24) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_0013D7F5; /* jbe: below or equal (unsigned <=) */

loc_0013D7CA: ;
    esi = MEM32(ecx + 0x24);
    edx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(edx + esi * 8));
    MEM8(esi + ecx + 0x28) = LO8(edx);
    edx = MEM32(ecx + 0x24);
    edi = ZX8(MEM8(edx + ecx + 0x28));
    esi = MEM32(eax + 4);
    edx = MEM32(esi + edx * 8 + 4);
    MEM32(ecx + edi * 4 + 0x30) = edx;
    MEM32(ecx + 0x24) = MEM32(ecx + 0x24) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(MEM8(eax));
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013D7CA; /* jb: below (unsigned <) */

loc_0013D7F5: ;
    esi = MEM32(ecx + 0xB0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D84D; /* je: equal / zero */

loc_0013D7FF: ;
    edi = MEM32(ecx + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0013D81D; /* jbe: below or equal (unsigned <=) */

loc_0013D808: ;
    edx = MEM32(esi + 0x1C);
    SET_LO8(edx, MEM8(edx + 0xD0));

loc_0013D811: ;
    _fa = (uint32_t)(MEM8(ecx + eax + 0x28)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + eax + 0x28), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D81D; /* je: equal / zero */

loc_0013D817: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x24) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013D811; /* jb: below (unsigned <) */

loc_0013D81D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013D84D; /* jb: below (unsigned <) */

loc_0013D821: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013D82D; /* jb: below (unsigned <) */

loc_0013D826: ;
    MEM32(ecx + 0x24) = 7;

loc_0013D82D: ;
    eax = MEM32(esi + 0x1C);
    SET_LO8(eax, MEM8(eax + 0xD0));
    edx = MEM32(ecx + 0x24);
    MEM8(edx + ecx + 0x28) = LO8(eax);
    eax = MEM32(ecx + 0x24);
    eax = ZX8(MEM8(eax + ecx + 0x28));
    MEM32(ecx + eax * 4 + 0x30) = MEM32(ecx + eax * 4 + 0x30) & 0;
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x24) = MEM32(ecx + 0x24) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013D84D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D852
 * Original: 0x0013D852 - 0x0013D89F (77 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D852(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D852: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    MEM32(esi) = 0x1C1DA8;
    PUSH32(esp, 0x0013D864u); RECOMP_ABI_CALL(0x0013D400u, sub_0013D400); /* call 0x0013D400 */

loc_0013D864: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D875; /* je: equal / zero */

loc_0013D86B: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0013D871u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D86Eu); } /* indirect call */
    }

loc_0013D871: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0013D875: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D886; /* je: equal / zero */

loc_0013D87C: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0013D882u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D87Fu); } /* indirect call */
    }

loc_0013D882: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0013D886: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D897; /* je: equal / zero */

loc_0013D88D: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0013D893u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013D890u); } /* indirect call */
    }

loc_0013D893: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0013D897: ;
    MEM32(esi) = 0x1C1D6C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013D89F
 * Original: 0x0013D89F - 0x0013D8B8 (25 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D89F(void)
{

loc_0013D89F: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x18) = edx;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x0013D8B5u); RECOMP_ABI_CALL(0x00144098u, sub_00144098); /* call 0x00144098 */

loc_0013D8B5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013D8B8
 * Original: 0x0013D8B8 - 0x0013D8D4 (28 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D8B8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D8B8: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x0013D8D1u); RECOMP_ABI_CALL(0x00144000u, sub_00144000); /* call 0x00144000 */

loc_0013D8D1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013D8D4
 * Original: 0x0013D8D4 - 0x0013D8F7 (35 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D8D4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D8D4: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) + ecx;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x20) = esi;
    ecx = MEM32(edx + 0xC);
    PUSH32(esp, 0x0013D8F3u); RECOMP_ABI_CALL(0x00144000u, sub_00144000); /* call 0x00144000 */

loc_0013D8F3: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013D8F7
 * Original: 0x0013D8F7 - 0x0013D930 (57 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D8F7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D8F7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + 8);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(ecx + 0xA4);
    eax = MEM32(eax + 0xB4);
    MEM32(eax + 0x78) = MEM32(eax + 0x78) | ecx;
    _fa = (uint32_t)(MEM32(eax + 0x78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x0013D91Cu); RECOMP_ABI_CALL(0x00144325u, sub_00144325); /* call 0x00144325 */

loc_0013D91C: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + 0xB4);
    eax = ~eax;
    MEM32(ecx + 0x78) = MEM32(ecx + 0x78) & eax;
    _fa = (uint32_t)(MEM32(ecx + 0x78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013D930
 * Original: 0x0013D930 - 0x0013DA05 (213 bytes, 75 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013D930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0013D930: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0xD4);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D957; /* je: equal / zero */

loc_0013D94B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D951u); RECOMP_ABI_CALL(0x0013FC84u, sub_0013FC84); /* call 0x0013FC84 */

loc_0013D951: ;
    MEM32(ebx + 0xD4) = edi;

loc_0013D957: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebx + 0xD8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013D9FC; /* je: equal / zero */

loc_0013D968: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    if (3) _cf = (int)(((esi) >> (32 - (3))) & 1);
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x61645344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013D97Au); RECOMP_ABI_CALL(0x0013FC1Cu, sub_0013FC1C); /* call 0x0013FC1C */

loc_0013D97A: ;
    ecx = eax;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FF8FFF2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    ecx = ecx + 0x8007000Eu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xD4) = eax;
    MEM32(ebp + -8) = ecx;
    if ((_fas < 0)) goto loc_0013D9FB; /* js: sign (negative) */

loc_0013D997: ;
    ecx = esi;
    esi = MEM32(ebp + 0xC);
    edi = eax;
    eax = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
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
    _cf = 0; /* logical op clears CF */
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
    eax = MEM32(ebx + 0xD8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0013D9FB; /* je: equal / zero */

loc_0013D9B5: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebx + 0xD4);
    if (3) _cf = (int)(((ecx) >> (32 - (3))) & 1);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0013D9EC; /* jbe: below or equal (unsigned <=) */

loc_0013D9CA: ;
    edi = MEM32(eax + 8);
    esi = MEM32(eax + 4);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = edi;
    edi = MEM32(eax + 0xC);
    MEM32(eax + 4) = edi;
    eax = MEM32(ebx + 0xD4);
    MEM32(ecx + eax + 8) = edx;
    MEM32(ecx + eax + 0xC) = esi;
    goto loc_0013D9EF;

loc_0013D9EC: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013D9EF: ;
    eax = MEM32(ebx + 0xD8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0013D9B5; /* jb: below (unsigned <) */

loc_0013D9FB: ;
    POP32(esp, esi);

loc_0013D9FC: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013DA05
 * Original: 0x0013DA05 - 0x0013DA38 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DA05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013DA05: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x1C1DB4;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DA1F; /* je: equal / zero */

loc_0013DA15: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0013DA1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DA18u); } /* indirect call */
    }

loc_0013DA1B: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0013DA1F: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DA30; /* je: equal / zero */

loc_0013DA26: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0013DA2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DA29u); } /* indirect call */
    }

loc_0013DA2C: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0013DA30: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D852(); return; /* tail jmp 0x0013D852 */

}

/**
 * sub_0013DA38
 * Original: 0x0013DA38 - 0x0013DA82 (74 bytes, 23 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DA38(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DA38: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013DA3Eu); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013DA3E: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013DA60; /* je: equal / zero */

loc_0013DA4A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DA59; /* je: equal / zero */

loc_0013DA4E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DA59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DA53u); } /* indirect call */
    }

loc_0013DA59: ;
    eax = 0x80004005u;
    goto loc_0013DA7E;

loc_0013DA60: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0013DA6Au); RECOMP_ABI_CALL(0x0013D4CAu, sub_0013D4CA); /* call 0x0013D4CA */

loc_0013DA6A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DA7B; /* je: equal / zero */

loc_0013DA70: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DA7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DA75u); } /* indirect call */
    }

loc_0013DA7B: ;
    eax = edi;
    POP32(esp, edi);

loc_0013DA7E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013DA82
 * Original: 0x0013DA82 - 0x0013DAD3 (81 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DA82(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DA82: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013DA88u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013DA88: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013DAAA; /* je: equal / zero */

loc_0013DA94: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DAA3; /* je: equal / zero */

loc_0013DA98: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DAA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DA9Du); } /* indirect call */
    }

loc_0013DAA3: ;
    eax = 0x80004005u;
    goto loc_0013DACF;

loc_0013DAAA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x0013DABBu); RECOMP_ABI_CALL(0x00144F5Bu, sub_00144F5B); /* call 0x00144F5B */

loc_0013DABB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DACC; /* je: equal / zero */

loc_0013DAC1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DACCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DAC6u); } /* indirect call */
    }

loc_0013DACC: ;
    eax = edi;
    POP32(esp, edi);

loc_0013DACF: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0013DAD3
 * Original: 0x0013DAD3 - 0x0013DB22 (79 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DAD3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DAD3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013DAD9u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013DAD9: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013DAFB; /* je: equal / zero */

loc_0013DAE5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DAF4; /* je: equal / zero */

loc_0013DAE9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DAF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DAEEu); } /* indirect call */
    }

loc_0013DAF4: ;
    eax = 0x80004005u;
    goto loc_0013DB1E;

loc_0013DAFB: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013DB0Au); RECOMP_ABI_CALL(0x00145074u, sub_00145074); /* call 0x00145074 */

loc_0013DB0A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DB1B; /* je: equal / zero */

loc_0013DB10: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DB1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DB15u); } /* indirect call */
    }

loc_0013DB1B: ;
    eax = edi;
    POP32(esp, edi);

loc_0013DB1E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013DB22
 * Original: 0x0013DB22 - 0x0013DB7B (89 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DB22(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DB22: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013DB28u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013DB28: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013DB4A; /* je: equal / zero */

loc_0013DB34: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DB43; /* je: equal / zero */

loc_0013DB38: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DB43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DB3Du); } /* indirect call */
    }

loc_0013DB43: ;
    eax = 0x80004005u;
    goto loc_0013DB77;

loc_0013DB4A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x0013DB63u); RECOMP_ABI_CALL(0x001451E7u, sub_001451E7); /* call 0x001451E7 */

loc_0013DB63: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DB74; /* je: equal / zero */

loc_0013DB69: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DB74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DB6Eu); } /* indirect call */
    }

loc_0013DB74: ;
    eax = edi;
    POP32(esp, edi);

loc_0013DB77: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0013DB7B
 * Original: 0x0013DB7B - 0x0013DBCC (81 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DB7B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DB7B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013DB81u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013DB81: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013DBA3; /* je: equal / zero */

loc_0013DB8D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DB9C; /* je: equal / zero */

loc_0013DB91: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DB9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DB96u); } /* indirect call */
    }

loc_0013DB9C: ;
    eax = 0x80004005u;
    goto loc_0013DBC8;

loc_0013DBA3: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0013DBB4u); RECOMP_ABI_CALL(0x00144A9Fu, sub_00144A9F); /* call 0x00144A9F */

loc_0013DBB4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DBC5; /* je: equal / zero */

loc_0013DBBA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DBC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DBBFu); } /* indirect call */
    }

loc_0013DBC5: ;
    eax = edi;
    POP32(esp, edi);

loc_0013DBC8: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013DBCC
 * Original: 0x0013DBCC - 0x0013DC1D (81 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DBCC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DBCC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013DBD2u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013DBD2: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013DBF4; /* je: equal / zero */

loc_0013DBDE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DBED; /* je: equal / zero */

loc_0013DBE2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DBEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DBE7u); } /* indirect call */
    }

loc_0013DBED: ;
    eax = 0x80004005u;
    goto loc_0013DC19;

loc_0013DBF4: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0013DC05u); RECOMP_ABI_CALL(0x00144B12u, sub_00144B12); /* call 0x00144B12 */

loc_0013DC05: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DC16; /* je: equal / zero */

loc_0013DC0B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DC16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DC10u); } /* indirect call */
    }

loc_0013DC16: ;
    eax = edi;
    POP32(esp, edi);

loc_0013DC19: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013DC1D
 * Original: 0x0013DC1D - 0x0013DCA2 (133 bytes, 43 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013DC1D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DC1D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DC26u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013DC26: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    edi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013DC48; /* je: equal / zero */

loc_0013DC32: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DC41; /* je: equal / zero */

loc_0013DC36: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DC41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DC3Bu); } /* indirect call */
    }

loc_0013DC41: ;
    eax = 0x80004005u;
    goto loc_0013DC9D;

loc_0013DC48: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0013DC6D; /* je: equal / zero */

loc_0013DC59: ;
    PUSH32(esp, ebx);
    ebx = esi + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0xC4) (32-bit) */
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_0013DC75; /* jbe: below or equal (unsigned <=) */

loc_0013DC66: ;
    esi = 0x88780032u;
    goto loc_0013DC8B;

loc_0013DC6D: ;
    ecx = MEM32(eax + 0xC4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0013DC75: ;
    MEM32(eax + 0xC8) = esi;
    MEM32(eax + 0xCC) = ecx;
    ecx = MEM32(edx + 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DC89u); RECOMP_ABI_CALL(0x00145056u, sub_00145056); /* call 0x00145056 */

loc_0013DC89: ;
    esi = eax;

loc_0013DC8B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DC9A; /* je: equal / zero */

loc_0013DC8F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DC9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DC94u); } /* indirect call */
    }

loc_0013DC9A: ;
    eax = esi;
    POP32(esp, esi);

loc_0013DC9D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0013DCA2
 * Original: 0x0013DCA2 - 0x0013DCE3 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DCA2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013DCA2: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + -4) = 0x1C1DCC;
    MEM32(esi) = 0x1C1DC0;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DCC3; /* je: equal / zero */

loc_0013DCB9: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0013DCBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DCBCu); } /* indirect call */
    }

loc_0013DCBF: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0013DCC3: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DCD4; /* je: equal / zero */

loc_0013DCCA: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0013DCD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DCCDu); } /* indirect call */
    }

loc_0013DCD0: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0013DCD4: ;
    ecx = esi + -4;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D852(); return; /* tail jmp 0x0013D852 */

}

/**
 * sub_0013DCE3
 * Original: 0x0013DCE3 - 0x0013DD2A (71 bytes, 21 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DCE3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DCE3: ;
    PUSH32(esp, 0x0013DCE8u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013DCE8: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    ecx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013DD0A; /* je: equal / zero */

loc_0013DCF4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DD03; /* je: equal / zero */

loc_0013DCF8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DD03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DCFDu); } /* indirect call */
    }

loc_0013DD03: ;
    eax = 0x80004005u;
    goto loc_0013DD27;

loc_0013DD0A: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0013DD24; /* je: equal / zero */

loc_0013DD19: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DD24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DD1Eu); } /* indirect call */
    }

loc_0013DD24: ;
    eax = esi;
    POP32(esp, esi);

loc_0013DD27: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013DD2A
 * Original: 0x0013DD2A - 0x0013DD78 (78 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DD2A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DD2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013DD30u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013DD30: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013DD52; /* je: equal / zero */

loc_0013DD3C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DD4B; /* je: equal / zero */

loc_0013DD40: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DD4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DD45u); } /* indirect call */
    }

loc_0013DD4B: ;
    eax = 0x80004005u;
    goto loc_0013DD74;

loc_0013DD52: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013DD60u); RECOMP_ABI_CALL(0x0013D4CAu, sub_0013D4CA); /* call 0x0013D4CA */

loc_0013DD60: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DD71; /* je: equal / zero */

loc_0013DD66: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DD71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DD6Bu); } /* indirect call */
    }

loc_0013DD71: ;
    eax = edi;
    POP32(esp, edi);

loc_0013DD74: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013DD78
 * Original: 0x0013DD78 - 0x0013DDDF (103 bytes, 32 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DD78(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DD78: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0013DD7Eu); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013DD7E: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013DDA0; /* je: equal / zero */

loc_0013DD8A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DD99; /* je: equal / zero */

loc_0013DD8E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DD99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DD93u); } /* indirect call */
    }

loc_0013DD99: ;
    eax = 0x80004005u;
    goto loc_0013DDDB;

loc_0013DDA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(esi) = 5;
    ecx = MEM32(edi + 0x24);
    PUSH32(esp, 0x0013DDB8u); RECOMP_ABI_CALL(0x0013D55Du, sub_0013D55D); /* call 0x0013D55D */

loc_0013DDB8: ;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(edi + 0x20);
    eax = MEM32(eax + 0x14);
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0013DDD9; /* je: equal / zero */

loc_0013DDCE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DDD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DDD3u); } /* indirect call */
    }

loc_0013DDD9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013DDDB: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013DDDF
 * Original: 0x0013DDDF - 0x0013DE2C (77 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DDDF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DDDF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013DDE5u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013DDE5: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013DE07; /* je: equal / zero */

loc_0013DDF1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DE00; /* je: equal / zero */

loc_0013DDF5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DE00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DDFAu); } /* indirect call */
    }

loc_0013DE00: ;
    eax = 0x80004005u;
    goto loc_0013DE28;

loc_0013DE07: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013DE14u); RECOMP_ABI_CALL(0x0014293Fu, sub_0014293F); /* call 0x0014293F */

loc_0013DE14: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DE25; /* je: equal / zero */

loc_0013DE1A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DE25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DE1Fu); } /* indirect call */
    }

loc_0013DE25: ;
    eax = edi;
    POP32(esp, edi);

loc_0013DE28: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013DE2C
 * Original: 0x0013DE2C - 0x0013DE77 (75 bytes, 22 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DE2C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DE2C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013DE32u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013DE32: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013DE54; /* je: equal / zero */

loc_0013DE3E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DE4D; /* je: equal / zero */

loc_0013DE42: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DE4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DE47u); } /* indirect call */
    }

loc_0013DE4D: ;
    eax = 0x80004005u;
    goto loc_0013DE73;

loc_0013DE54: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013DE62u); RECOMP_ABI_CALL(0x00142A33u, sub_00142A33); /* call 0x00142A33 */

loc_0013DE62: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DE71; /* je: equal / zero */

loc_0013DE66: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DE71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DE6Bu); } /* indirect call */
    }

loc_0013DE71: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013DE73: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013DE77
 * Original: 0x0013DE77 - 0x0013DEC8 (81 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DE77(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DE77: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013DE7Du); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013DE7D: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013DE9F; /* je: equal / zero */

loc_0013DE89: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DE98; /* je: equal / zero */

loc_0013DE8D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DE98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DE92u); } /* indirect call */
    }

loc_0013DE98: ;
    eax = 0x80004005u;
    goto loc_0013DEC4;

loc_0013DE9F: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0013DEB0u); RECOMP_ABI_CALL(0x001423BBu, sub_001423BB); /* call 0x001423BB */

loc_0013DEB0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DEC1; /* je: equal / zero */

loc_0013DEB6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DEC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DEBBu); } /* indirect call */
    }

loc_0013DEC1: ;
    eax = edi;
    POP32(esp, edi);

loc_0013DEC4: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013DEC8
 * Original: 0x0013DEC8 - 0x0013DF3F (119 bytes, 43 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013DEC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DEC8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DED2u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013DED2: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013DEF4; /* je: equal / zero */

loc_0013DEDE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DEED; /* je: equal / zero */

loc_0013DEE2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DEEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DEE7u); } /* indirect call */
    }

loc_0013DEED: ;
    eax = 0x80004005u;
    goto loc_0013DF3A;

loc_0013DEF4: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DF05u); RECOMP_ABI_CALL(0x001423BBu, sub_001423BB); /* call 0x001423BB */

loc_0013DF05: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013DF27; /* jl: less (signed <) */

loc_0013DF0B: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013DF16; /* jne: not equal / not zero */

loc_0013DF11: ;
    edi = 0x88780032u;

loc_0013DF16: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013DF27; /* jl: less (signed <) */

loc_0013DF1A: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DF25u); RECOMP_ABI_CALL(0x00142DDCu, sub_00142DDC); /* call 0x00142DDC */

loc_0013DF25: ;
    edi = eax;

loc_0013DF27: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DF36; /* je: equal / zero */

loc_0013DF2B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DF36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DF30u); } /* indirect call */
    }

loc_0013DF36: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0013DF3A: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0013DF3F
 * Original: 0x0013DF3F - 0x0013DF90 (81 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DF3F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DF3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013DF45u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013DF45: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013DF67; /* je: equal / zero */

loc_0013DF51: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DF60; /* je: equal / zero */

loc_0013DF55: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DF60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DF5Au); } /* indirect call */
    }

loc_0013DF60: ;
    eax = 0x80004005u;
    goto loc_0013DF8C;

loc_0013DF67: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0013DF78u); RECOMP_ABI_CALL(0x00142EAAu, sub_00142EAA); /* call 0x00142EAA */

loc_0013DF78: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013DF89; /* je: equal / zero */

loc_0013DF7E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DF89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DF83u); } /* indirect call */
    }

loc_0013DF89: ;
    eax = edi;
    POP32(esp, edi);

loc_0013DF8C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013DF90
 * Original: 0x0013DF90 - 0x0013DFFA (106 bytes, 36 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0013DF90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DF90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DF99u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013DF99: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013DFBB; /* je: equal / zero */

loc_0013DFA5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DFB4; /* je: equal / zero */

loc_0013DFA9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DFB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DFAEu); } /* indirect call */
    }

loc_0013DFB4: ;
    eax = 0x80004005u;
    goto loc_0013DFF5;

loc_0013DFBB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0013DFDA; /* je: equal / zero */

loc_0013DFC8: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DFD6u); RECOMP_ABI_CALL(0x001427FCu, sub_001427FC); /* call 0x001427FC */

loc_0013DFD6: ;
    edi = eax;
    goto loc_0013DFE3;

loc_0013DFDA: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013DFE1u); RECOMP_ABI_CALL(0x00142A33u, sub_00142A33); /* call 0x00142A33 */

loc_0013DFE1: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013DFE3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013DFF2; /* je: equal / zero */

loc_0013DFE7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013DFF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013DFECu); } /* indirect call */
    }

loc_0013DFF2: ;
    eax = edi;
    POP32(esp, edi);

loc_0013DFF5: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0013DFFA
 * Original: 0x0013DFFA - 0x0013E00E (20 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DFFA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DFFA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E008; /* je: equal / zero */

loc_0013E003: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0013E008u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E006u); } /* indirect call */
    }

loc_0013E008: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013E00E
 * Original: 0x0013E00E - 0x0013E023 (21 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E00E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E00E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E01D; /* je: equal / zero */

loc_0013E017: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013E01Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E01Au); } /* indirect call */
    }

loc_0013E01D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013E023
 * Original: 0x0013E023 - 0x0013E02D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E023(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013E023: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0013DCE3(); return; /* tail jmp 0x0013DCE3 */

}

/**
 * sub_0013E02D
 * Original: 0x0013E02D - 0x0013E037 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E02D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013E02D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0013DD2A(); return; /* tail jmp 0x0013DD2A */

}

/**
 * sub_0013E037
 * Original: 0x0013E037 - 0x0013E053 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E037(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E037: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1C1D6C;
    if (TEST_Z(_fa, _fb)) goto loc_0013E04D; /* je: equal / zero */

loc_0013E047: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013E04Du); RECOMP_ABI_CALL(0x0013FC84u, sub_0013FC84); /* call 0x0013FC84 */

loc_0013E04D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013E053
 * Original: 0x0013E053 - 0x0013E0A1 (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E053(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E053: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013E059u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013E059: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013E07B; /* je: equal / zero */

loc_0013E065: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E074; /* je: equal / zero */

loc_0013E069: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013E074u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E06Eu); } /* indirect call */
    }

loc_0013E074: ;
    eax = 0x80004005u;
    goto loc_0013E09D;

loc_0013E07B: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0013E089u); RECOMP_ABI_CALL(0x0013D8B8u, sub_0013D8B8); /* call 0x0013D8B8 */

loc_0013E089: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013E09A; /* je: equal / zero */

loc_0013E08F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013E09Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E094u); } /* indirect call */
    }

loc_0013E09A: ;
    eax = edi;
    POP32(esp, edi);

loc_0013E09D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E0A1
 * Original: 0x0013E0A1 - 0x0013E0EF (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E0A1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E0A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013E0A7u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013E0A7: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013E0C9; /* je: equal / zero */

loc_0013E0B3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E0C2; /* je: equal / zero */

loc_0013E0B7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013E0C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E0BCu); } /* indirect call */
    }

loc_0013E0C2: ;
    eax = 0x80004005u;
    goto loc_0013E0EB;

loc_0013E0C9: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0013E0D7u); RECOMP_ABI_CALL(0x0013D89Fu, sub_0013D89F); /* call 0x0013D89F */

loc_0013E0D7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013E0E8; /* je: equal / zero */

loc_0013E0DD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013E0E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E0E2u); } /* indirect call */
    }

loc_0013E0E8: ;
    eax = edi;
    POP32(esp, edi);

loc_0013E0EB: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E0EF
 * Original: 0x0013E0EF - 0x0013E13D (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E0EF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E0EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013E0F5u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013E0F5: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013E117; /* je: equal / zero */

loc_0013E101: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E110; /* je: equal / zero */

loc_0013E105: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013E110u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E10Au); } /* indirect call */
    }

loc_0013E110: ;
    eax = 0x80004005u;
    goto loc_0013E139;

loc_0013E117: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0013E125u); RECOMP_ABI_CALL(0x0013D8D4u, sub_0013D8D4); /* call 0x0013D8D4 */

loc_0013E125: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013E136; /* je: equal / zero */

loc_0013E12B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013E136u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E130u); } /* indirect call */
    }

loc_0013E136: ;
    eax = edi;
    POP32(esp, edi);

loc_0013E139: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E13D
 * Original: 0x0013E13D - 0x0013E18F (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E13D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E13D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013E143u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013E143: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013E165; /* je: equal / zero */

loc_0013E14F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E15E; /* je: equal / zero */

loc_0013E153: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013E15Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E158u); } /* indirect call */
    }

loc_0013E15E: ;
    eax = 0x80004005u;
    goto loc_0013E18B;

loc_0013E165: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013E177u); RECOMP_ABI_CALL(0x0013D89Fu, sub_0013D89F); /* call 0x0013D89F */

loc_0013E177: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013E188; /* je: equal / zero */

loc_0013E17D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013E188u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E182u); } /* indirect call */
    }

loc_0013E188: ;
    eax = edi;
    POP32(esp, edi);

loc_0013E18B: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E18F
 * Original: 0x0013E18F - 0x0013E1E1 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E18F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E18F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013E195u); RECOMP_ABI_CALL(0x0013D510u, sub_0013D510); /* call 0x0013D510 */

loc_0013E195: ;
    _fa = (uint32_t)(MEM32(0x149804)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x149804), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_0013E1B7; /* je: equal / zero */

loc_0013E1A1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013E1B0; /* je: equal / zero */

loc_0013E1A5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013E1B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E1AAu); } /* indirect call */
    }

loc_0013E1B0: ;
    eax = 0x80004005u;
    goto loc_0013E1DD;

loc_0013E1B7: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013E1C9u); RECOMP_ABI_CALL(0x0013D8B8u, sub_0013D8B8); /* call 0x0013D8B8 */

loc_0013E1C9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013E1DA; /* je: equal / zero */

loc_0013E1CF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x149810);
    { uint32_t _icall_target = MEM32(0x1ADDD8); PUSH32(esp, 0x0013E1DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013E1D4u); } /* indirect call */
    }

loc_0013E1DA: ;
    eax = edi;
    POP32(esp, edi);

loc_0013E1DD: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E1E1
 * Original: 0x0013E1E1 - 0x0013E1F9 (24 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E1E1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0013E1E1: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013E1F6u); RECOMP_ABI_CALL(0x0013D75Du, sub_0013D75D); /* call 0x0013D75D */

loc_0013E1F6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013E1F9
 * Original: 0x0013E1F9 - 0x0013E215 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E1F9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0013E1F9: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013E212u); RECOMP_ABI_CALL(0x0013E053u, sub_0013E053); /* call 0x0013E053 */

loc_0013E212: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0013E215
 * Original: 0x0013E215 - 0x0013E231 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E215(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0013E215: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013E22Eu); RECOMP_ABI_CALL(0x0013E0A1u, sub_0013E0A1); /* call 0x0013E0A1 */

loc_0013E22E: ;
    esp += 12; return; /* ret 8 */

}
