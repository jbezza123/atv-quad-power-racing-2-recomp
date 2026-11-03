/**
 * ATV: Quad Power Racing 2 - Recompiled code chunk 28
 * Functions: 250 (0x0013AAA0 - 0x0013C5A0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0013AAA0
 * Original: 0x0013AAA0 - 0x0013AAAB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AAA0(void)
{

loc_0013AAA0: ;
    eax = MEM32(0x1BF5BC);
    MEM32(0x1DA858) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AAB0
 * Original: 0x0013AAB0 - 0x0013AABB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AAB0(void)
{

loc_0013AAB0: ;
    eax = MEM32(0x1BF630);
    MEM32(0x1DA85C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AAC0
 * Original: 0x0013AAC0 - 0x0013AACB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AAC0(void)
{

loc_0013AAC0: ;
    eax = MEM32(0x1BF644);
    MEM32(0x1DA868) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AAD0
 * Original: 0x0013AAD0 - 0x0013AADB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AAD0(void)
{

loc_0013AAD0: ;
    eax = MEM32(0x1BF6CC);
    MEM32(0x1DA874) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AAE0
 * Original: 0x0013AAE0 - 0x0013AAEB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AAE0(void)
{

loc_0013AAE0: ;
    eax = MEM32(0x1BF894);
    MEM32(0x1DA880) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AAF0
 * Original: 0x0013AAF0 - 0x0013AAFB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AAF0(void)
{

loc_0013AAF0: ;
    eax = MEM32(0x1BF8D4);
    MEM32(0x1DA884) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AB00
 * Original: 0x0013AB00 - 0x0013AB0B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AB00(void)
{

loc_0013AB00: ;
    eax = MEM32(0x1BF980);
    MEM32(0x1DA890) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AB10
 * Original: 0x0013AB10 - 0x0013AB1B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AB10(void)
{

loc_0013AB10: ;
    eax = MEM32(0x1BF9DC);
    MEM32(0x1DA894) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AB20
 * Original: 0x0013AB20 - 0x0013AB2B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AB20(void)
{

loc_0013AB20: ;
    eax = MEM32(0x1BFC88);
    MEM32(0x1DA8A0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AB30
 * Original: 0x0013AB30 - 0x0013AB3B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AB30(void)
{

loc_0013AB30: ;
    eax = MEM32(0x1BFE54);
    MEM32(0x1DA8A8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AB40
 * Original: 0x0013AB40 - 0x0013AB4B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AB40(void)
{

loc_0013AB40: ;
    eax = MEM32(0x1C0038);
    MEM32(0x1DA8B8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AB50
 * Original: 0x0013AB50 - 0x0013AB6C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AB50(void)
{

loc_0013AB50: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0);
    ecx = 0x1DA944;
    PUSH32(esp, 0x0013AB6Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AB6B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AB70
 * Original: 0x0013AB70 - 0x0013AB8F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AB70(void)
{

loc_0013AB70: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    ecx = 0x1DA8C4;
    PUSH32(esp, 0x0013AB8Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AB8E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AB90
 * Original: 0x0013AB90 - 0x0013ABAF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AB90(void)
{

loc_0013AB90: ;
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA8C0;
    PUSH32(esp, 0x0013ABAEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013ABAE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013ABB0
 * Original: 0x0013ABB0 - 0x0013ABC6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ABB0(void)
{

loc_0013ABB0: ;
    ecx = 0x1DA8C8;
    PUSH32(esp, 0x0013ABBAu); RECOMP_ABI_CALL(0x000A1520u, sub_000A1520); /* call 0x000A1520 */

loc_0013ABBA: ;
    PUSH32(esp, 0x13CF90);
    PUSH32(esp, 0x0013ABC4u); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013ABC4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013ABD0
 * Original: 0x0013ABD0 - 0x0013ABDB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ABD0(void)
{

loc_0013ABD0: ;
    eax = MEM32(0x1C00A0);
    MEM32(0x1DA94C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013ABE0
 * Original: 0x0013ABE0 - 0x0013ABEB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ABE0(void)
{

loc_0013ABE0: ;
    eax = MEM32(0x1C02BC);
    MEM32(0x1DA95C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013ABF0
 * Original: 0x0013ABF0 - 0x0013ABFB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ABF0(void)
{

loc_0013ABF0: ;
    eax = MEM32(0x1C0340);
    MEM32(0x1DA960) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AC00
 * Original: 0x0013AC00 - 0x0013AC0B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AC00(void)
{

loc_0013AC00: ;
    eax = MEM32(0x1C0530);
    MEM32(0x1DA96C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AC10
 * Original: 0x0013AC10 - 0x0013AC1B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AC10(void)
{

loc_0013AC10: ;
    eax = MEM32(0x1C0644);
    MEM32(0x1DA978) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AC20
 * Original: 0x0013AC20 - 0x0013AC2B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AC20(void)
{

loc_0013AC20: ;
    eax = MEM32(0x1C0668);
    MEM32(0x1DA97C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AC30
 * Original: 0x0013AC30 - 0x0013AC4C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AC30(void)
{

loc_0013AC30: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0);
    ecx = 0x1DA98C;
    PUSH32(esp, 0x0013AC4Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AC4B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AC50
 * Original: 0x0013AC50 - 0x0013AC6F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AC50(void)
{

loc_0013AC50: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    ecx = 0x1DA988;
    PUSH32(esp, 0x0013AC6Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AC6E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AC70
 * Original: 0x0013AC70 - 0x0013AC8F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AC70(void)
{

loc_0013AC70: ;
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA984;
    PUSH32(esp, 0x0013AC8Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AC8E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AC90
 * Original: 0x0013AC90 - 0x0013ACAC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AC90(void)
{

loc_0013AC90: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0);
    ecx = 0x1DA99C;
    PUSH32(esp, 0x0013ACABu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013ACAB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013ACB0
 * Original: 0x0013ACB0 - 0x0013ACCF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ACB0(void)
{

loc_0013ACB0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    ecx = 0x1DA990;
    PUSH32(esp, 0x0013ACCEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013ACCE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013ACD0
 * Original: 0x0013ACD0 - 0x0013ACEF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ACD0(void)
{

loc_0013ACD0: ;
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA998;
    PUSH32(esp, 0x0013ACEEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013ACEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013ACF0
 * Original: 0x0013ACF0 - 0x0013ACFB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ACF0(void)
{

loc_0013ACF0: ;
    eax = MEM32(0x1C0690);
    MEM32(0x1DA9A0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AD00
 * Original: 0x0013AD00 - 0x0013AD1C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AD00(void)
{

loc_0013AD00: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0);
    ecx = 0x1DA9B0;
    PUSH32(esp, 0x0013AD1Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AD1B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AD20
 * Original: 0x0013AD20 - 0x0013AD3F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AD20(void)
{

loc_0013AD20: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    ecx = 0x1DA9AC;
    PUSH32(esp, 0x0013AD3Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AD3E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AD40
 * Original: 0x0013AD40 - 0x0013AD5F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AD40(void)
{

loc_0013AD40: ;
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DA9A8;
    PUSH32(esp, 0x0013AD5Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AD5E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AD60
 * Original: 0x0013AD60 - 0x0013AD6B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AD60(void)
{

loc_0013AD60: ;
    eax = MEM32(0x1C0844);
    MEM32(0x1DA9B4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AD70
 * Original: 0x0013AD70 - 0x0013AD7B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AD70(void)
{

loc_0013AD70: ;
    eax = MEM32(0x1C08E0);
    MEM32(0x1DAA84) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AD80
 * Original: 0x0013AD80 - 0x0013AD8B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AD80(void)
{

loc_0013AD80: ;
    eax = MEM32(0x1C0938);
    MEM32(0x1DAA88) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AD90
 * Original: 0x0013AD90 - 0x0013ADAC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AD90(void)
{

loc_0013AD90: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0);
    ecx = 0x1DAB14;
    PUSH32(esp, 0x0013ADABu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013ADAB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013ADB0
 * Original: 0x0013ADB0 - 0x0013ADCF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ADB0(void)
{

loc_0013ADB0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    ecx = 0x1DAA94;
    PUSH32(esp, 0x0013ADCEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013ADCE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013ADD0
 * Original: 0x0013ADD0 - 0x0013ADEF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ADD0(void)
{

loc_0013ADD0: ;
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAA90;
    PUSH32(esp, 0x0013ADEEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013ADEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013ADF0
 * Original: 0x0013ADF0 - 0x0013AE06 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ADF0(void)
{

loc_0013ADF0: ;
    ecx = 0x1DAA98;
    PUSH32(esp, 0x0013ADFAu); RECOMP_ABI_CALL(0x000A1520u, sub_000A1520); /* call 0x000A1520 */

loc_0013ADFA: ;
    PUSH32(esp, 0x13CFA0);
    PUSH32(esp, 0x0013AE04u); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013AE04: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013AE10
 * Original: 0x0013AE10 - 0x0013AE1B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AE10(void)
{

loc_0013AE10: ;
    eax = MEM32(0x1C09D4);
    MEM32(0x1DAB1C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AE20
 * Original: 0x0013AE20 - 0x0013AE2B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AE20(void)
{

loc_0013AE20: ;
    eax = MEM32(0x1C0A20);
    MEM32(0x1DAB28) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AE30
 * Original: 0x0013AE30 - 0x0013AE4C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AE30(void)
{

loc_0013AE30: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0);
    ecx = 0x1DAB38;
    PUSH32(esp, 0x0013AE4Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AE4B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AE50
 * Original: 0x0013AE50 - 0x0013AE6F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AE50(void)
{

loc_0013AE50: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    ecx = 0x1DAB34;
    PUSH32(esp, 0x0013AE6Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AE6E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AE70
 * Original: 0x0013AE70 - 0x0013AE8F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AE70(void)
{

loc_0013AE70: ;
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAB30;
    PUSH32(esp, 0x0013AE8Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AE8E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AE90
 * Original: 0x0013AE90 - 0x0013AE9B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AE90(void)
{

loc_0013AE90: ;
    eax = MEM32(0x1C0BFC);
    MEM32(0x1DAB40) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AEA0
 * Original: 0x0013AEA0 - 0x0013AEAB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AEA0(void)
{

loc_0013AEA0: ;
    eax = MEM32(0x1C0D20);
    MEM32(0x1DAB48) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AEB0
 * Original: 0x0013AEB0 - 0x0013AEBB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AEB0(void)
{

loc_0013AEB0: ;
    eax = MEM32(0x1C0DC4);
    MEM32(0x1DAB54) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AEC0
 * Original: 0x0013AEC0 - 0x0013AECC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AEC0(void)
{

loc_0013AEC0: ;
    PUSH32(esp, 0x13CFB0);
    PUSH32(esp, 0x0013AECAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013AECA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013AED0
 * Original: 0x0013AED0 - 0x0013AEEF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AED0(void)
{

loc_0013AED0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAB68;
    PUSH32(esp, 0x0013AEEEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AEEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AEF0
 * Original: 0x0013AEF0 - 0x0013AF0F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AEF0(void)
{

loc_0013AEF0: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAB64;
    PUSH32(esp, 0x0013AF0Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AF0E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AF10
 * Original: 0x0013AF10 - 0x0013AF2F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AF10(void)
{

loc_0013AF10: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAB6C;
    PUSH32(esp, 0x0013AF2Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AF2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AF30
 * Original: 0x0013AF30 - 0x0013AF4C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AF30(void)
{

loc_0013AF30: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAB78;
    PUSH32(esp, 0x0013AF4Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AF4B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AF50
 * Original: 0x0013AF50 - 0x0013AF6C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AF50(void)
{

loc_0013AF50: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAB60;
    PUSH32(esp, 0x0013AF6Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AF6B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AF70
 * Original: 0x0013AF70 - 0x0013AF89 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AF70(void)
{

loc_0013AF70: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAB70;
    PUSH32(esp, 0x0013AF88u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AF88: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AF90
 * Original: 0x0013AF90 - 0x0013AFAF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AF90(void)
{

loc_0013AF90: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAB74;
    PUSH32(esp, 0x0013AFAEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AFAE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AFB0
 * Original: 0x0013AFB0 - 0x0013AFCC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AFB0(void)
{

loc_0013AFB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAB50;
    PUSH32(esp, 0x0013AFCBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AFCB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AFD0
 * Original: 0x0013AFD0 - 0x0013AFEF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AFD0(void)
{

loc_0013AFD0: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAB7C;
    PUSH32(esp, 0x0013AFEEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013AFEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AFF0
 * Original: 0x0013AFF0 - 0x0013B00F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AFF0(void)
{

loc_0013AFF0: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAB5C;
    PUSH32(esp, 0x0013B00Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B00E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B010
 * Original: 0x0013B010 - 0x0013B01B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B010(void)
{

loc_0013B010: ;
    eax = MEM32(0x1C0ECC);
    MEM32(0x1DAB80) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B020
 * Original: 0x0013B020 - 0x0013B02B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B020(void)
{

loc_0013B020: ;
    eax = MEM32(0x1C1054);
    MEM32(0x1DAB8C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B030
 * Original: 0x0013B030 - 0x0013B03B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B030(void)
{

loc_0013B030: ;
    eax = MEM32(0x1C1068);
    MEM32(0x1DAB90) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B040
 * Original: 0x0013B040 - 0x0013B05F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B040(void)
{

loc_0013B040: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABAC;
    PUSH32(esp, 0x0013B05Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B05E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B060
 * Original: 0x0013B060 - 0x0013B07F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B060(void)
{

loc_0013B060: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABA0;
    PUSH32(esp, 0x0013B07Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B07E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B080
 * Original: 0x0013B080 - 0x0013B09F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B080(void)
{

loc_0013B080: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABB0;
    PUSH32(esp, 0x0013B09Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B09E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B0A0
 * Original: 0x0013B0A0 - 0x0013B0BC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B0A0(void)
{

loc_0013B0A0: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABBC;
    PUSH32(esp, 0x0013B0BBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B0BB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B0C0
 * Original: 0x0013B0C0 - 0x0013B0DC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B0C0(void)
{

loc_0013B0C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABC0;
    PUSH32(esp, 0x0013B0DBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B0DB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B0E0
 * Original: 0x0013B0E0 - 0x0013B0F9 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B0E0(void)
{

loc_0013B0E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAB98;
    PUSH32(esp, 0x0013B0F8u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B0F8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B100
 * Original: 0x0013B100 - 0x0013B11F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B100(void)
{

loc_0013B100: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABB8;
    PUSH32(esp, 0x0013B11Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B11E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B120
 * Original: 0x0013B120 - 0x0013B13C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B120(void)
{

loc_0013B120: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABB4;
    PUSH32(esp, 0x0013B13Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B13B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B140
 * Original: 0x0013B140 - 0x0013B15F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B140(void)
{

loc_0013B140: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABC4;
    PUSH32(esp, 0x0013B15Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B15E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B160
 * Original: 0x0013B160 - 0x0013B17F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B160(void)
{

loc_0013B160: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABA8;
    PUSH32(esp, 0x0013B17Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B17E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B180
 * Original: 0x0013B180 - 0x0013B18B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B180(void)
{

loc_0013B180: ;
    eax = MEM32(0x1C109C);
    MEM32(0x1DAB9C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B190
 * Original: 0x0013B190 - 0x0013B1AF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B190(void)
{

loc_0013B190: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABDC;
    PUSH32(esp, 0x0013B1AEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B1AE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B1B0
 * Original: 0x0013B1B0 - 0x0013B1CF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B1B0(void)
{

loc_0013B1B0: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABD0;
    PUSH32(esp, 0x0013B1CEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B1CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B1D0
 * Original: 0x0013B1D0 - 0x0013B1EF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B1D0(void)
{

loc_0013B1D0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABE0;
    PUSH32(esp, 0x0013B1EEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B1EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B1F0
 * Original: 0x0013B1F0 - 0x0013B20C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B1F0(void)
{

loc_0013B1F0: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABEC;
    PUSH32(esp, 0x0013B20Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B20B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B210
 * Original: 0x0013B210 - 0x0013B22C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B210(void)
{

loc_0013B210: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABF0;
    PUSH32(esp, 0x0013B22Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B22B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B230
 * Original: 0x0013B230 - 0x0013B249 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B230(void)
{

loc_0013B230: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABC8;
    PUSH32(esp, 0x0013B248u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B248: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B250
 * Original: 0x0013B250 - 0x0013B26F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B250(void)
{

loc_0013B250: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABE8;
    PUSH32(esp, 0x0013B26Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B26E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B270
 * Original: 0x0013B270 - 0x0013B28C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B270(void)
{

loc_0013B270: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABE4;
    PUSH32(esp, 0x0013B28Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B28B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B290
 * Original: 0x0013B290 - 0x0013B2AF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B290(void)
{

loc_0013B290: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABF4;
    PUSH32(esp, 0x0013B2AEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B2AE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B2B0
 * Original: 0x0013B2B0 - 0x0013B2CF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B2B0(void)
{

loc_0013B2B0: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABD8;
    PUSH32(esp, 0x0013B2CEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B2CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B2D0
 * Original: 0x0013B2D0 - 0x0013B2DB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B2D0(void)
{

loc_0013B2D0: ;
    eax = MEM32(0x1C1130);
    MEM32(0x1DABCC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B2E0
 * Original: 0x0013B2E0 - 0x0013B2FF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B2E0(void)
{

loc_0013B2E0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC0C;
    PUSH32(esp, 0x0013B2FEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B2FE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B300
 * Original: 0x0013B300 - 0x0013B31F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B300(void)
{

loc_0013B300: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC00;
    PUSH32(esp, 0x0013B31Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B31E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B320
 * Original: 0x0013B320 - 0x0013B33F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B320(void)
{

loc_0013B320: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC10;
    PUSH32(esp, 0x0013B33Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B33E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B340
 * Original: 0x0013B340 - 0x0013B35C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B340(void)
{

loc_0013B340: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC1C;
    PUSH32(esp, 0x0013B35Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B35B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B360
 * Original: 0x0013B360 - 0x0013B37C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B360(void)
{

loc_0013B360: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC20;
    PUSH32(esp, 0x0013B37Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B37B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B380
 * Original: 0x0013B380 - 0x0013B399 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B380(void)
{

loc_0013B380: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DABF8;
    PUSH32(esp, 0x0013B398u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B398: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B3A0
 * Original: 0x0013B3A0 - 0x0013B3BF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B3A0(void)
{

loc_0013B3A0: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC18;
    PUSH32(esp, 0x0013B3BEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B3BE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B3C0
 * Original: 0x0013B3C0 - 0x0013B3DC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B3C0(void)
{

loc_0013B3C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC14;
    PUSH32(esp, 0x0013B3DBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B3DB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B3E0
 * Original: 0x0013B3E0 - 0x0013B3FF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B3E0(void)
{

loc_0013B3E0: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC24;
    PUSH32(esp, 0x0013B3FEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B3FE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B400
 * Original: 0x0013B400 - 0x0013B41F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B400(void)
{

loc_0013B400: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC08;
    PUSH32(esp, 0x0013B41Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B41E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B420
 * Original: 0x0013B420 - 0x0013B42B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B420(void)
{

loc_0013B420: ;
    eax = MEM32(0x1C11B8);
    MEM32(0x1DABFC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B430
 * Original: 0x0013B430 - 0x0013B44F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B430(void)
{

loc_0013B430: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC3C;
    PUSH32(esp, 0x0013B44Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B44E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B450
 * Original: 0x0013B450 - 0x0013B46F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B450(void)
{

loc_0013B450: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC30;
    PUSH32(esp, 0x0013B46Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B46E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B470
 * Original: 0x0013B470 - 0x0013B48F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B470(void)
{

loc_0013B470: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC40;
    PUSH32(esp, 0x0013B48Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B48E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B490
 * Original: 0x0013B490 - 0x0013B4AC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B490(void)
{

loc_0013B490: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC4C;
    PUSH32(esp, 0x0013B4ABu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B4AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B4B0
 * Original: 0x0013B4B0 - 0x0013B4CC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B4B0(void)
{

loc_0013B4B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC50;
    PUSH32(esp, 0x0013B4CBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B4CB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B4D0
 * Original: 0x0013B4D0 - 0x0013B4E9 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B4D0(void)
{

loc_0013B4D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC28;
    PUSH32(esp, 0x0013B4E8u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B4E8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B4F0
 * Original: 0x0013B4F0 - 0x0013B50F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B4F0(void)
{

loc_0013B4F0: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC48;
    PUSH32(esp, 0x0013B50Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B50E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B510
 * Original: 0x0013B510 - 0x0013B52C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B510(void)
{

loc_0013B510: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC44;
    PUSH32(esp, 0x0013B52Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B52B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B530
 * Original: 0x0013B530 - 0x0013B54F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B530(void)
{

loc_0013B530: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC54;
    PUSH32(esp, 0x0013B54Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B54E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B550
 * Original: 0x0013B550 - 0x0013B56F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B550(void)
{

loc_0013B550: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC38;
    PUSH32(esp, 0x0013B56Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B56E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B570
 * Original: 0x0013B570 - 0x0013B57B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B570(void)
{

loc_0013B570: ;
    eax = MEM32(0x1C1244);
    MEM32(0x1DAC2C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B580
 * Original: 0x0013B580 - 0x0013B58B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B580(void)
{

loc_0013B580: ;
    eax = MEM32(0x1C12C8);
    MEM32(0x1DAC5C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B590
 * Original: 0x0013B590 - 0x0013B5AF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B590(void)
{

loc_0013B590: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC74;
    PUSH32(esp, 0x0013B5AEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B5AE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B5B0
 * Original: 0x0013B5B0 - 0x0013B5CF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B5B0(void)
{

loc_0013B5B0: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC68;
    PUSH32(esp, 0x0013B5CEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B5CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B5D0
 * Original: 0x0013B5D0 - 0x0013B5EF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B5D0(void)
{

loc_0013B5D0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC78;
    PUSH32(esp, 0x0013B5EEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B5EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B5F0
 * Original: 0x0013B5F0 - 0x0013B60C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B5F0(void)
{

loc_0013B5F0: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC84;
    PUSH32(esp, 0x0013B60Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B60B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B610
 * Original: 0x0013B610 - 0x0013B62C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B610(void)
{

loc_0013B610: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC88;
    PUSH32(esp, 0x0013B62Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B62B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B630
 * Original: 0x0013B630 - 0x0013B649 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B630(void)
{

loc_0013B630: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC60;
    PUSH32(esp, 0x0013B648u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B648: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B650
 * Original: 0x0013B650 - 0x0013B66F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B650(void)
{

loc_0013B650: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC80;
    PUSH32(esp, 0x0013B66Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B66E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B670
 * Original: 0x0013B670 - 0x0013B68C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B670(void)
{

loc_0013B670: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC7C;
    PUSH32(esp, 0x0013B68Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B68B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B690
 * Original: 0x0013B690 - 0x0013B6AF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B690(void)
{

loc_0013B690: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC8C;
    PUSH32(esp, 0x0013B6AEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B6AE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B6B0
 * Original: 0x0013B6B0 - 0x0013B6CF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B6B0(void)
{

loc_0013B6B0: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC70;
    PUSH32(esp, 0x0013B6CEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B6CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B6D0
 * Original: 0x0013B6D0 - 0x0013B6DB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B6D0(void)
{

loc_0013B6D0: ;
    eax = MEM32(0x1C1314);
    MEM32(0x1DAC64) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B6E0
 * Original: 0x0013B6E0 - 0x0013B6EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B6E0(void)
{

loc_0013B6E0: ;
    PUSH32(esp, 0x13CFC0);
    PUSH32(esp, 0x0013B6EAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013B6EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B6F0
 * Original: 0x0013B6F0 - 0x0013B6FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B6F0(void)
{

loc_0013B6F0: ;
    PUSH32(esp, 0x13CFD0);
    PUSH32(esp, 0x0013B6FAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013B6FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B700
 * Original: 0x0013B700 - 0x0013B70B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B700(void)
{

loc_0013B700: ;
    eax = MEM32(0x1C13A8);
    MEM32(0x1DAC98) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B710
 * Original: 0x0013B710 - 0x0013B72F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B710(void)
{

loc_0013B710: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACB4;
    PUSH32(esp, 0x0013B72Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B72E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B730
 * Original: 0x0013B730 - 0x0013B74F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B730(void)
{

loc_0013B730: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACB8;
    PUSH32(esp, 0x0013B74Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B74E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B750
 * Original: 0x0013B750 - 0x0013B76F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B750(void)
{

loc_0013B750: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACA0;
    PUSH32(esp, 0x0013B76Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B76E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B770
 * Original: 0x0013B770 - 0x0013B78C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B770(void)
{

loc_0013B770: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACC0;
    PUSH32(esp, 0x0013B78Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B78B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B790
 * Original: 0x0013B790 - 0x0013B7AC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B790(void)
{

loc_0013B790: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACB0;
    PUSH32(esp, 0x0013B7ABu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B7AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B7B0
 * Original: 0x0013B7B0 - 0x0013B7C9 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B7B0(void)
{

loc_0013B7B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAC9C;
    PUSH32(esp, 0x0013B7C8u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B7C8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B7D0
 * Original: 0x0013B7D0 - 0x0013B7EF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B7D0(void)
{

loc_0013B7D0: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACBC;
    PUSH32(esp, 0x0013B7EEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B7EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B7F0
 * Original: 0x0013B7F0 - 0x0013B80C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B7F0(void)
{

loc_0013B7F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACA4;
    PUSH32(esp, 0x0013B80Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B80B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B810
 * Original: 0x0013B810 - 0x0013B82F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B810(void)
{

loc_0013B810: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACC4;
    PUSH32(esp, 0x0013B82Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B82E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B830
 * Original: 0x0013B830 - 0x0013B84F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B830(void)
{

loc_0013B830: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACAC;
    PUSH32(esp, 0x0013B84Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B84E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B850
 * Original: 0x0013B850 - 0x0013B86F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B850(void)
{

loc_0013B850: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACE0;
    PUSH32(esp, 0x0013B86Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B86E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B870
 * Original: 0x0013B870 - 0x0013B88F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B870(void)
{

loc_0013B870: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACD4;
    PUSH32(esp, 0x0013B88Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B88E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B890
 * Original: 0x0013B890 - 0x0013B8AF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B890(void)
{

loc_0013B890: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACE4;
    PUSH32(esp, 0x0013B8AEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B8AE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B8B0
 * Original: 0x0013B8B0 - 0x0013B8CC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B8B0(void)
{

loc_0013B8B0: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACF8;
    PUSH32(esp, 0x0013B8CBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B8CB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B8D0
 * Original: 0x0013B8D0 - 0x0013B8EC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B8D0(void)
{

loc_0013B8D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACFC;
    PUSH32(esp, 0x0013B8EBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B8EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B8F0
 * Original: 0x0013B8F0 - 0x0013B909 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B8F0(void)
{

loc_0013B8F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACC8;
    PUSH32(esp, 0x0013B908u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B908: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B910
 * Original: 0x0013B910 - 0x0013B92F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B910(void)
{

loc_0013B910: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACF0;
    PUSH32(esp, 0x0013B92Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B92E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B930
 * Original: 0x0013B930 - 0x0013B94C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B930(void)
{

loc_0013B930: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACEC;
    PUSH32(esp, 0x0013B94Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B94B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B950
 * Original: 0x0013B950 - 0x0013B96F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B950(void)
{

loc_0013B950: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD00;
    PUSH32(esp, 0x0013B96Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B96E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B970
 * Original: 0x0013B970 - 0x0013B98F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B970(void)
{

loc_0013B970: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACDC;
    PUSH32(esp, 0x0013B98Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B98E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B990
 * Original: 0x0013B990 - 0x0013B99B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B990(void)
{

loc_0013B990: ;
    eax = MEM32(0x1C1480);
    MEM32(0x1DACCC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B9A0
 * Original: 0x0013B9A0 - 0x0013B9BF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B9A0(void)
{

loc_0013B9A0: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACF4;
    PUSH32(esp, 0x0013B9BEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B9BE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B9C0
 * Original: 0x0013B9C0 - 0x0013B9DF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B9C0(void)
{

loc_0013B9C0: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACD0;
    PUSH32(esp, 0x0013B9DEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B9DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B9E0
 * Original: 0x0013B9E0 - 0x0013B9FF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B9E0(void)
{

loc_0013B9E0: ;
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DACE8;
    PUSH32(esp, 0x0013B9FEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013B9FE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BA00
 * Original: 0x0013BA00 - 0x0013BA0B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BA00(void)
{

loc_0013BA00: ;
    eax = MEM32(0x1C1540);
    MEM32(0x1DAD04) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BA10
 * Original: 0x0013BA10 - 0x0013BA2F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BA10(void)
{

loc_0013BA10: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD20;
    PUSH32(esp, 0x0013BA2Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BA2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BA30
 * Original: 0x0013BA30 - 0x0013BA4F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BA30(void)
{

loc_0013BA30: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD24;
    PUSH32(esp, 0x0013BA4Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BA4E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BA50
 * Original: 0x0013BA50 - 0x0013BA6F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BA50(void)
{

loc_0013BA50: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD0C;
    PUSH32(esp, 0x0013BA6Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BA6E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BA70
 * Original: 0x0013BA70 - 0x0013BA8C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BA70(void)
{

loc_0013BA70: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD2C;
    PUSH32(esp, 0x0013BA8Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BA8B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BA90
 * Original: 0x0013BA90 - 0x0013BAAC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BA90(void)
{

loc_0013BA90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD1C;
    PUSH32(esp, 0x0013BAABu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BAAB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BAB0
 * Original: 0x0013BAB0 - 0x0013BAC9 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BAB0(void)
{

loc_0013BAB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD08;
    PUSH32(esp, 0x0013BAC8u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BAC8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BAD0
 * Original: 0x0013BAD0 - 0x0013BAEF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BAD0(void)
{

loc_0013BAD0: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD28;
    PUSH32(esp, 0x0013BAEEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BAEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BAF0
 * Original: 0x0013BAF0 - 0x0013BB0C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BAF0(void)
{

loc_0013BAF0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD10;
    PUSH32(esp, 0x0013BB0Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BB0B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BB10
 * Original: 0x0013BB10 - 0x0013BB2F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BB10(void)
{

loc_0013BB10: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD30;
    PUSH32(esp, 0x0013BB2Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BB2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BB30
 * Original: 0x0013BB30 - 0x0013BB4F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BB30(void)
{

loc_0013BB30: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD18;
    PUSH32(esp, 0x0013BB4Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BB4E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BB50
 * Original: 0x0013BB50 - 0x0013BB5B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BB50(void)
{

loc_0013BB50: ;
    eax = MEM32(0x1C154C);
    MEM32(0x1DAD34) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BB60
 * Original: 0x0013BB60 - 0x0013BB7F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BB60(void)
{

loc_0013BB60: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD50;
    PUSH32(esp, 0x0013BB7Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BB7E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BB80
 * Original: 0x0013BB80 - 0x0013BB9F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BB80(void)
{

loc_0013BB80: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD54;
    PUSH32(esp, 0x0013BB9Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BB9E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BBA0
 * Original: 0x0013BBA0 - 0x0013BBBF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BBA0(void)
{

loc_0013BBA0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD3C;
    PUSH32(esp, 0x0013BBBEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BBBE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BBC0
 * Original: 0x0013BBC0 - 0x0013BBDC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BBC0(void)
{

loc_0013BBC0: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD5C;
    PUSH32(esp, 0x0013BBDBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BBDB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BBE0
 * Original: 0x0013BBE0 - 0x0013BBFC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BBE0(void)
{

loc_0013BBE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD4C;
    PUSH32(esp, 0x0013BBFBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BBFB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BC00
 * Original: 0x0013BC00 - 0x0013BC19 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BC00(void)
{

loc_0013BC00: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD38;
    PUSH32(esp, 0x0013BC18u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BC18: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BC20
 * Original: 0x0013BC20 - 0x0013BC3F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BC20(void)
{

loc_0013BC20: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD58;
    PUSH32(esp, 0x0013BC3Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BC3E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BC40
 * Original: 0x0013BC40 - 0x0013BC5C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BC40(void)
{

loc_0013BC40: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD40;
    PUSH32(esp, 0x0013BC5Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BC5B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BC60
 * Original: 0x0013BC60 - 0x0013BC7F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BC60(void)
{

loc_0013BC60: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD60;
    PUSH32(esp, 0x0013BC7Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BC7E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BC80
 * Original: 0x0013BC80 - 0x0013BC9F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BC80(void)
{

loc_0013BC80: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD48;
    PUSH32(esp, 0x0013BC9Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BC9E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BCA0
 * Original: 0x0013BCA0 - 0x0013BCAB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BCA0(void)
{

loc_0013BCA0: ;
    eax = MEM32(0x1C1618);
    MEM32(0x1DAD64) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BCB0
 * Original: 0x0013BCB0 - 0x0013BCCF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BCB0(void)
{

loc_0013BCB0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD80;
    PUSH32(esp, 0x0013BCCEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BCCE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BCD0
 * Original: 0x0013BCD0 - 0x0013BCEF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BCD0(void)
{

loc_0013BCD0: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD84;
    PUSH32(esp, 0x0013BCEEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BCEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BCF0
 * Original: 0x0013BCF0 - 0x0013BD0F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BCF0(void)
{

loc_0013BCF0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD6C;
    PUSH32(esp, 0x0013BD0Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BD0E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BD10
 * Original: 0x0013BD10 - 0x0013BD2C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BD10(void)
{

loc_0013BD10: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD8C;
    PUSH32(esp, 0x0013BD2Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BD2B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BD30
 * Original: 0x0013BD30 - 0x0013BD4C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BD30(void)
{

loc_0013BD30: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD7C;
    PUSH32(esp, 0x0013BD4Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BD4B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BD50
 * Original: 0x0013BD50 - 0x0013BD69 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BD50(void)
{

loc_0013BD50: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD68;
    PUSH32(esp, 0x0013BD68u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BD68: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BD70
 * Original: 0x0013BD70 - 0x0013BD8F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BD70(void)
{

loc_0013BD70: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD88;
    PUSH32(esp, 0x0013BD8Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BD8E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BD90
 * Original: 0x0013BD90 - 0x0013BDAC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BD90(void)
{

loc_0013BD90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD70;
    PUSH32(esp, 0x0013BDABu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BDAB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BDB0
 * Original: 0x0013BDB0 - 0x0013BDCF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BDB0(void)
{

loc_0013BDB0: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD90;
    PUSH32(esp, 0x0013BDCEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BDCE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BDD0
 * Original: 0x0013BDD0 - 0x0013BDEF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BDD0(void)
{

loc_0013BDD0: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAD78;
    PUSH32(esp, 0x0013BDEEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BDEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BDF0
 * Original: 0x0013BDF0 - 0x0013BDFB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BDF0(void)
{

loc_0013BDF0: ;
    eax = MEM32(0x1C16A8);
    MEM32(0x1DAD9C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BE00
 * Original: 0x0013BE00 - 0x0013BE1F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BE00(void)
{

loc_0013BE00: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DADB8;
    PUSH32(esp, 0x0013BE1Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BE1E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BE20
 * Original: 0x0013BE20 - 0x0013BE3F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BE20(void)
{

loc_0013BE20: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DADBC;
    PUSH32(esp, 0x0013BE3Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BE3E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BE40
 * Original: 0x0013BE40 - 0x0013BE5F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BE40(void)
{

loc_0013BE40: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DADA4;
    PUSH32(esp, 0x0013BE5Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BE5E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BE60
 * Original: 0x0013BE60 - 0x0013BE7C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BE60(void)
{

loc_0013BE60: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DADC4;
    PUSH32(esp, 0x0013BE7Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BE7B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BE80
 * Original: 0x0013BE80 - 0x0013BE9C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BE80(void)
{

loc_0013BE80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DADB4;
    PUSH32(esp, 0x0013BE9Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BE9B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BEA0
 * Original: 0x0013BEA0 - 0x0013BEB9 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BEA0(void)
{

loc_0013BEA0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DADA0;
    PUSH32(esp, 0x0013BEB8u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BEB8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BEC0
 * Original: 0x0013BEC0 - 0x0013BEDF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BEC0(void)
{

loc_0013BEC0: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DADC0;
    PUSH32(esp, 0x0013BEDEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BEDE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BEE0
 * Original: 0x0013BEE0 - 0x0013BEFC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BEE0(void)
{

loc_0013BEE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DADA8;
    PUSH32(esp, 0x0013BEFBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BEFB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BF00
 * Original: 0x0013BF00 - 0x0013BF1F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BF00(void)
{

loc_0013BF00: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DADC8;
    PUSH32(esp, 0x0013BF1Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BF1E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BF20
 * Original: 0x0013BF20 - 0x0013BF3F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BF20(void)
{

loc_0013BF20: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DADB0;
    PUSH32(esp, 0x0013BF3Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BF3E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BF40
 * Original: 0x0013BF40 - 0x0013BF4B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BF40(void)
{

loc_0013BF40: ;
    eax = MEM32(0x1C1738);
    MEM32(0x1DADDC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BF50
 * Original: 0x0013BF50 - 0x0013BF6F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BF50(void)
{

loc_0013BF50: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DADFC;
    PUSH32(esp, 0x0013BF6Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BF6E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BF70
 * Original: 0x0013BF70 - 0x0013BF8F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BF70(void)
{

loc_0013BF70: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE00;
    PUSH32(esp, 0x0013BF8Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BF8E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BF90
 * Original: 0x0013BF90 - 0x0013BFAF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BF90(void)
{

loc_0013BF90: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DADE4;
    PUSH32(esp, 0x0013BFAEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BFAE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BFB0
 * Original: 0x0013BFB0 - 0x0013BFCC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BFB0(void)
{

loc_0013BFB0: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE08;
    PUSH32(esp, 0x0013BFCBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BFCB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BFD0
 * Original: 0x0013BFD0 - 0x0013BFEC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BFD0(void)
{

loc_0013BFD0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DADF8;
    PUSH32(esp, 0x0013BFEBu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013BFEB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013BFF0
 * Original: 0x0013BFF0 - 0x0013C009 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BFF0(void)
{

loc_0013BFF0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DADE0;
    PUSH32(esp, 0x0013C008u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C008: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C010
 * Original: 0x0013C010 - 0x0013C02F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C010(void)
{

loc_0013C010: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE04;
    PUSH32(esp, 0x0013C02Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C02E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C030
 * Original: 0x0013C030 - 0x0013C04C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C030(void)
{

loc_0013C030: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DADEC;
    PUSH32(esp, 0x0013C04Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C04B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C050
 * Original: 0x0013C050 - 0x0013C06F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C050(void)
{

loc_0013C050: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE0C;
    PUSH32(esp, 0x0013C06Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C06E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C070
 * Original: 0x0013C070 - 0x0013C08F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C070(void)
{

loc_0013C070: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DADF4;
    PUSH32(esp, 0x0013C08Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C08E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C090
 * Original: 0x0013C090 - 0x0013C0A9 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C090(void)
{

loc_0013C090: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DADE8;
    PUSH32(esp, 0x0013C0A8u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C0A8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C0B0
 * Original: 0x0013C0B0 - 0x0013C0CF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C0B0(void)
{

loc_0013C0B0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE24;
    PUSH32(esp, 0x0013C0CEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C0CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C0D0
 * Original: 0x0013C0D0 - 0x0013C0EF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C0D0(void)
{

loc_0013C0D0: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE18;
    PUSH32(esp, 0x0013C0EEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C0EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C0F0
 * Original: 0x0013C0F0 - 0x0013C10F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C0F0(void)
{

loc_0013C0F0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE38;
    PUSH32(esp, 0x0013C10Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C10E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C110
 * Original: 0x0013C110 - 0x0013C12C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C110(void)
{

loc_0013C110: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE50;
    PUSH32(esp, 0x0013C12Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C12B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C130
 * Original: 0x0013C130 - 0x0013C14C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C130(void)
{

loc_0013C130: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE54;
    PUSH32(esp, 0x0013C14Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C14B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C150
 * Original: 0x0013C150 - 0x0013C169 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C150(void)
{

loc_0013C150: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE10;
    PUSH32(esp, 0x0013C168u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C168: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C170
 * Original: 0x0013C170 - 0x0013C18F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C170(void)
{

loc_0013C170: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE48;
    PUSH32(esp, 0x0013C18Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C18E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C190
 * Original: 0x0013C190 - 0x0013C1AC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C190(void)
{

loc_0013C190: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE44;
    PUSH32(esp, 0x0013C1ABu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C1AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C1B0
 * Original: 0x0013C1B0 - 0x0013C1CF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C1B0(void)
{

loc_0013C1B0: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE58;
    PUSH32(esp, 0x0013C1CEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C1CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C1D0
 * Original: 0x0013C1D0 - 0x0013C1EF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C1D0(void)
{

loc_0013C1D0: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE20;
    PUSH32(esp, 0x0013C1EEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C1EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C1F0
 * Original: 0x0013C1F0 - 0x0013C1FB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C1F0(void)
{

loc_0013C1F0: ;
    eax = MEM32(0x1C1838);
    MEM32(0x1DAE14) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C200
 * Original: 0x0013C200 - 0x0013C21F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C200(void)
{

loc_0013C200: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE28;
    PUSH32(esp, 0x0013C21Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C21E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C220
 * Original: 0x0013C220 - 0x0013C23F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C220(void)
{

loc_0013C220: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE30;
    PUSH32(esp, 0x0013C23Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C23E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C240
 * Original: 0x0013C240 - 0x0013C25F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C240(void)
{

loc_0013C240: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE40;
    PUSH32(esp, 0x0013C25Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C25E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C260
 * Original: 0x0013C260 - 0x0013C27F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C260(void)
{

loc_0013C260: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE34;
    PUSH32(esp, 0x0013C27Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C27E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C280
 * Original: 0x0013C280 - 0x0013C29F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C280(void)
{

loc_0013C280: ;
    PUSH32(esp, 0x3F4A3D71);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3E051EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE4C;
    PUSH32(esp, 0x0013C29Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C29E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C2A0
 * Original: 0x0013C2A0 - 0x0013C2BF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C2A0(void)
{

loc_0013C2A0: ;
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F59999A);
    ecx = 0x1DAE3C;
    PUSH32(esp, 0x0013C2BEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C2BE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C2C0
 * Original: 0x0013C2C0 - 0x0013C2DF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C2C0(void)
{

loc_0013C2C0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE2C;
    PUSH32(esp, 0x0013C2DEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C2DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C2E0
 * Original: 0x0013C2E0 - 0x0013C2EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C2E0(void)
{

loc_0013C2E0: ;
    PUSH32(esp, 0x13CFE0);
    PUSH32(esp, 0x0013C2EAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C2EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C2F0
 * Original: 0x0013C2F0 - 0x0013C2FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C2F0(void)
{

loc_0013C2F0: ;
    PUSH32(esp, 0x13CFF0);
    PUSH32(esp, 0x0013C2FAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C2FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C300
 * Original: 0x0013C300 - 0x0013C30C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C300(void)
{

loc_0013C300: ;
    PUSH32(esp, 0x13D000);
    PUSH32(esp, 0x0013C30Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C30A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C310
 * Original: 0x0013C310 - 0x0013C32F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C310(void)
{

loc_0013C310: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4F5C29);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE74;
    PUSH32(esp, 0x0013C32Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C32E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C330
 * Original: 0x0013C330 - 0x0013C34F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C330(void)
{

loc_0013C330: ;
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3F2E147B);
    PUSH32(esp, 0x3EF0A3D7);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE68;
    PUSH32(esp, 0x0013C34Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C34E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C350
 * Original: 0x0013C350 - 0x0013C36F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C350(void)
{

loc_0013C350: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE78;
    PUSH32(esp, 0x0013C36Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C36E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C370
 * Original: 0x0013C370 - 0x0013C38C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C370(void)
{

loc_0013C370: ;
    PUSH32(esp, 0x3F6147AE);
    PUSH32(esp, 0x3F2B851F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE88;
    PUSH32(esp, 0x0013C38Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C38B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C390
 * Original: 0x0013C390 - 0x0013C3AC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C390(void)
{

loc_0013C390: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E428F5C);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE8C;
    PUSH32(esp, 0x0013C3ABu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C3AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C3B0
 * Original: 0x0013C3B0 - 0x0013C3C9 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C3B0(void)
{

loc_0013C3B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3EDC28F6);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE60;
    PUSH32(esp, 0x0013C3C8u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C3C8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C3D0
 * Original: 0x0013C3D0 - 0x0013C3EF (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C3D0(void)
{

loc_0013C3D0: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x3ED1EB85);
    PUSH32(esp, 0x3F7851EC);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE84;
    PUSH32(esp, 0x0013C3EEu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C3EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C3F0
 * Original: 0x0013C3F0 - 0x0013C40C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C3F0(void)
{

loc_0013C3F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E570A3D);
    PUSH32(esp, 0x3F451EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE7C;
    PUSH32(esp, 0x0013C40Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C40B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C410
 * Original: 0x0013C410 - 0x0013C42F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C410(void)
{

loc_0013C410: ;
    PUSH32(esp, 0x3F733333);
    PUSH32(esp, 0x3F07AE14);
    PUSH32(esp, 0x3E851EB8);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE90;
    PUSH32(esp, 0x0013C42Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C42E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C430
 * Original: 0x0013C430 - 0x0013C44F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C430(void)
{

loc_0013C430: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3EA8F5C3);
    PUSH32(esp, 0x3D75C28F);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE70;
    PUSH32(esp, 0x0013C44Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C44E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C450
 * Original: 0x0013C450 - 0x0013C45B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C450(void)
{

loc_0013C450: ;
    eax = MEM32(0x1C18E0);
    MEM32(0x1DAE64) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C460
 * Original: 0x0013C460 - 0x0013C47F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C460(void)
{

loc_0013C460: ;
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3F800000);
    ecx = 0x1DAE80;
    PUSH32(esp, 0x0013C47Eu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C47E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C480
 * Original: 0x0013C480 - 0x0013C49C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C480(void)
{

loc_0013C480: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    ecx = 0x1DAE5C;
    PUSH32(esp, 0x0013C49Bu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0013C49B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C4A0
 * Original: 0x0013C4A0 - 0x0013C4AC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C4A0(void)
{

loc_0013C4A0: ;
    PUSH32(esp, 0x13D010);
    PUSH32(esp, 0x0013C4AAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C4AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C4B0
 * Original: 0x0013C4B0 - 0x0013C4BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C4B0(void)
{

loc_0013C4B0: ;
    MEM32(0x1DAEA4) = 0x4422F983;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C4C0
 * Original: 0x0013C4C0 - 0x0013C4CC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C4C0(void)
{

loc_0013C4C0: ;
    PUSH32(esp, 0x13D030);
    PUSH32(esp, 0x0013C4CAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C4CA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C4D0
 * Original: 0x0013C4D0 - 0x0013C4DC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C4D0(void)
{

loc_0013C4D0: ;
    PUSH32(esp, 0x13D020);
    PUSH32(esp, 0x0013C4DAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C4DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C4E0
 * Original: 0x0013C4E0 - 0x0013C4EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C4E0(void)
{

loc_0013C4E0: ;
    PUSH32(esp, 0x13D0B0);
    PUSH32(esp, 0x0013C4EAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C4EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C4F0
 * Original: 0x0013C4F0 - 0x0013C4FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C4F0(void)
{

loc_0013C4F0: ;
    PUSH32(esp, 0x13D040);
    PUSH32(esp, 0x0013C4FAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C4FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C500
 * Original: 0x0013C500 - 0x0013C50C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C500(void)
{

loc_0013C500: ;
    PUSH32(esp, 0x13D050);
    PUSH32(esp, 0x0013C50Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C50A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C510
 * Original: 0x0013C510 - 0x0013C51C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C510(void)
{

loc_0013C510: ;
    PUSH32(esp, 0x13D060);
    PUSH32(esp, 0x0013C51Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C51A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C520
 * Original: 0x0013C520 - 0x0013C52C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C520(void)
{

loc_0013C520: ;
    PUSH32(esp, 0x13D070);
    PUSH32(esp, 0x0013C52Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C52A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C530
 * Original: 0x0013C530 - 0x0013C53C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C530(void)
{

loc_0013C530: ;
    PUSH32(esp, 0x13D080);
    PUSH32(esp, 0x0013C53Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C53A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C540
 * Original: 0x0013C540 - 0x0013C54C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C540(void)
{

loc_0013C540: ;
    PUSH32(esp, 0x13D090);
    PUSH32(esp, 0x0013C54Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C54A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C550
 * Original: 0x0013C550 - 0x0013C55C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C550(void)
{

loc_0013C550: ;
    PUSH32(esp, 0x13D0A0);
    PUSH32(esp, 0x0013C55Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C55A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C560
 * Original: 0x0013C560 - 0x0013C56C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C560(void)
{

loc_0013C560: ;
    PUSH32(esp, 0x13D0C0);
    PUSH32(esp, 0x0013C56Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C56A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C570
 * Original: 0x0013C570 - 0x0013C57C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C570(void)
{

loc_0013C570: ;
    PUSH32(esp, 0x13D0E0);
    PUSH32(esp, 0x0013C57Au); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C57A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013C580
 * Original: 0x0013C580 - 0x0013C58B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C580(void)
{

loc_0013C580: ;
    eax = MEM32(0x1C207C);
    MEM32(0x1DB170) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C590
 * Original: 0x0013C590 - 0x0013C59B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C590(void)
{

loc_0013C590: ;
    eax = MEM32(0x1C2074);
    MEM32(0x1DB1C0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C5A0
 * Original: 0x0013C5A0 - 0x0013C5AC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C5A0(void)
{

loc_0013C5A0: ;
    PUSH32(esp, 0x13D0F0);
    PUSH32(esp, 0x0013C5AAu); RECOMP_ABI_CALL(0x0012B3D6u, sub_0012B3D6); /* call 0x0012B3D6 */

loc_0013C5AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
