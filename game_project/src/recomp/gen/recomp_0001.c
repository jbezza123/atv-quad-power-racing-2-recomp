/**
 * ATV: Quad Power Racing 2 - Recompiled code chunk 1
 * Functions: 250 (0x00018310 - 0x00021D40)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00018310
 * Original: 0x00018310 - 0x0001831F (15 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018310: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001831C; /* je: equal / zero */

loc_00018317: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

loc_0001831C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018320
 * Original: 0x00018320 - 0x00018326 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018320(void)
{

loc_00018320: ;
    eax = 0x1AEC7C;
    esp += 4; return; /* ret */

}

/**
 * sub_00018330
 * Original: 0x00018330 - 0x000183DA (170 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018330: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x80;
    PUSH32(esp, 0x0001833Eu); RECOMP_ABI_CALL(0x000A1520u, sub_000A1520); /* call 0x000A1520 */

loc_0001833E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 1;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0xFC) = eax;
    MEM32(esi + 0x100) = eax;
    MEM32(esi + 0x104) = eax;
    MEM32(esi + 0x108) = eax;
    MEM32(esi + 0x10C) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x78) = eax;
    MEM32(esi) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = 0x41F00000;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x3C) = 0x42B40000;
    MEM32(esi + 0x4C) = 2;
    MEM32(esi + 0x44) = 0x4AB71B00;
    MEM32(esi + 0x60) = ecx;
    MEM32(esi + 0x6C) = 3;
    MEM32(esi + 0x7C) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000183E0
 * Original: 0x000183E0 - 0x000187DE (1022 bytes, 283 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000183E0(void)
{

loc_000183E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7FFFFFFF);
    edi = ecx;
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1AEE8C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x00018402u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000183FCu); } /* indirect call */
    }

loc_00018402: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEE80);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0001841Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018419u); } /* indirect call */
    }

loc_0001841F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEE70);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0001843Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018436u); } /* indirect call */
    }

loc_0001843C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEE64);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00018459u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018453u); } /* indirect call */
    }

loc_00018459: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEE50);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00018476u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018470u); } /* indirect call */
    }

loc_00018476: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEE3C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00018493u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001848Du); } /* indirect call */
    }

loc_00018493: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEE30);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x000184B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000184AAu); } /* indirect call */
    }

loc_000184B0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEE20);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x000184CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000184C7u); } /* indirect call */
    }

loc_000184CD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEE14);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x000184EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000184E4u); } /* indirect call */
    }

loc_000184EA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEE00);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00018507u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018501u); } /* indirect call */
    }

loc_00018507: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEDF4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00018524u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001851Eu); } /* indirect call */
    }

loc_00018524: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEDE0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00018541u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001853Bu); } /* indirect call */
    }

loc_00018541: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEDD0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0001855Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018558u); } /* indirect call */
    }

loc_0001855E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEDBC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0001857Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018575u); } /* indirect call */
    }

loc_0001857B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEDAC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00018598u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018592u); } /* indirect call */
    }

loc_00018598: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AED98);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x000185B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000185AFu); } /* indirect call */
    }

loc_000185B5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0xFF7FFFFFu);
    eax = edi + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AED84);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x000185D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000185CCu); } /* indirect call */
    }

loc_000185D2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AED78);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x000185EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000185E9u); } /* indirect call */
    }

loc_000185EF: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AED6C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0001860Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018606u); } /* indirect call */
    }

loc_0001860C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AED5C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00018629u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018623u); } /* indirect call */
    }

loc_00018629: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AED48);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00018646u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018640u); } /* indirect call */
    }

loc_00018646: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AED3C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00018663u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001865Du); } /* indirect call */
    }

loc_00018663: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AED28);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00018680u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001867Au); } /* indirect call */
    }

loc_00018680: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AED14);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0001869Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018697u); } /* indirect call */
    }

loc_0001869D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x6C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AED04);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x000186BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000186B4u); } /* indirect call */
    }

loc_000186BA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AECF4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x000186D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000186D1u); } /* indirect call */
    }

loc_000186D7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AECE8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x000186F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000186EEu); } /* indirect call */
    }

loc_000186F4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AECD8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00018711u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001870Bu); } /* indirect call */
    }

loc_00018711: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0x80000000u);
    eax = edi + 0x7C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AECCC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0001872Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018728u); } /* indirect call */
    }

loc_0001872E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CA384);
    eax = edi + 0xFC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AECC0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x00018749u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018743u); } /* indirect call */
    }

loc_00018749: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CA384);
    eax = edi + 0x100;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AECB4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x00018764u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001875Eu); } /* indirect call */
    }

loc_00018764: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CA384);
    eax = edi + 0x104;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AECA8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0001877Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018779u); } /* indirect call */
    }

loc_0001877F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CA384);
    eax = edi + 0x108;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEC9C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0001879Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018794u); } /* indirect call */
    }

loc_0001879A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CA384);
    eax = edi + 0x10C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEC90);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x000187B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000187AFu); } /* indirect call */
    }

loc_000187B5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CA38C);
    eax = edi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEC84);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x000187CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000187C7u); } /* indirect call */
    }

loc_000187CD: ;
    PUSH32(esp, esi);
    ecx = edi + 0x80;
    PUSH32(esp, 0x000187D9u); RECOMP_ABI_CALL(0x000A17A0u, sub_000A17A0); /* call 0x000A17A0 */

loc_000187D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000187E0
 * Original: 0x000187E0 - 0x00018867 (135 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000187E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000187E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0xFC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xFC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018803; /* jne: not equal / not zero */

loc_000187EC: ;
    ecx = 0x100;
    PUSH32(esp, ecx);
    ecx = MEM32(0x1DC344);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018800u); RECOMP_ABI_CALL(0x000EFF20u, sub_000EFF20); /* call 0x000EFF20 */

loc_00018800: ;
    esp += 8; return; /* ret 4 */

loc_00018803: ;
    _fa = (uint32_t)(MEM32(ecx + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x100), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018822; /* jne: not equal / not zero */

loc_0001880B: ;
    ecx = 0x200;
    PUSH32(esp, ecx);
    ecx = MEM32(0x1DC344);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001881Fu); RECOMP_ABI_CALL(0x000EFF20u, sub_000EFF20); /* call 0x000EFF20 */

loc_0001881F: ;
    esp += 8; return; /* ret 4 */

loc_00018822: ;
    _fa = (uint32_t)(MEM32(ecx + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x104), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018831; /* jne: not equal / not zero */

loc_0001882A: ;
    ecx = 0x100;
    goto loc_0001884D;

loc_00018831: ;
    _fa = (uint32_t)(MEM32(ecx + 0x108)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x108), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018840; /* jne: not equal / not zero */

loc_00018839: ;
    ecx = 0x200;
    goto loc_0001884D;

loc_00018840: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018862; /* jne: not equal / not zero */

loc_00018848: ;
    ecx = 2;

loc_0001884D: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x1DC344);
    eax = 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001885Fu); RECOMP_ABI_CALL(0x000EFF20u, sub_000EFF20); /* call 0x000EFF20 */

loc_0001885F: ;
    esp += 8; return; /* ret 4 */

loc_00018862: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018870
 * Original: 0x00018870 - 0x000188A9 (57 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018870: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0xFC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xFC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000188A1; /* je: equal / zero */

loc_0001887C: ;
    _fa = (uint32_t)(MEM32(ecx + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x100), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000188A1; /* je: equal / zero */

loc_00018884: ;
    _fa = (uint32_t)(MEM32(ecx + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x104), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000188A1; /* je: equal / zero */

loc_0001888C: ;
    _fa = (uint32_t)(MEM32(ecx + 0x108)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x108), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000188A1; /* je: equal / zero */

loc_00018894: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000188A1; /* je: equal / zero */

loc_0001889C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000188A1: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018884
 * Original: 0x00018884 - 0x000188A9 (37 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018884(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018884: ;
    _fa = (uint32_t)(MEM32(ecx + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x104), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000188A1; /* je: equal / zero */

loc_0001888C: ;
    _fa = (uint32_t)(MEM32(ecx + 0x108)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x108), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000188A1; /* je: equal / zero */

loc_00018894: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000188A1; /* je: equal / zero */

loc_0001889C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000188A1: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001889E
 * Original: 0x0001889E - 0x000188A9 (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001889E(void)
{

loc_0001889E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000188B0
 * Original: 0x000188B0 - 0x0001890B (91 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000188B0(void)
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

loc_000188B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x1DC340);
    MEM32(esp) = 0;

loc_000188C1: ;
    PUSH32(esp, 0x000188C6u); RECOMP_ABI_CALL(0x000F5980u, sub_000F5980); /* call 0x000F5980 */

loc_000188C6: ;
    ecx = MEM32(0x1DC340);
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp)); /* fadd dword ptr [esp] */
    MEMF(esp) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AEEBC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1aeebc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000188C1; /* jnp: not parity */

loc_000188E4: ;
    fp_push(MEMF(esp)); /* fld float */
    MEM32(esp + 4) = 0x3DCCCCCD;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AEB20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1aeb20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = esp + 4;
    if (TEST_Z(_fa, _fb)) goto loc_00018905; /* je: equal / zero */

loc_00018901: ;
    eax = esp;

loc_00018905: ;
    fp_push(MEMF(eax)); /* fld float */
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
 * sub_00018910
 * Original: 0x00018910 - 0x00018CAA (922 bytes, 252 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018910(void)
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

loc_00018910: ;
    eax = MEM32(0x1CF180);
    _fb = (uint32_t)(0x268) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x268;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(0x1CF178) = 0x20;
    if (CMP_NE(_fa, _fb)) goto loc_00018931; /* jne: not equal / not zero */

loc_0001892A: ;
    PUSH32(esp, 0x1A27B8);
    goto loc_00018937;

loc_00018931: ;
    eax = MEM32(0x1AEF6C);
    PUSH32(esp, eax);

loc_00018937: ;
    PUSH32(esp, 0x0001893Cu); RECOMP_ABI_CALL(0x000F6ED0u, sub_000F6ED0); /* call 0x000F6ED0 */

loc_0001893C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x0001896Cu); RECOMP_ABI_CALL(0x00025340u, sub_00025340); /* call 0x00025340 */

loc_0001896C: ;
    eax = MEM32(0x1CF180);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018989; /* jne: not equal / not zero */

loc_00018978: ;
    PUSH32(esp, 0x1AEEE8);
    PUSH32(esp, 0x00018982u); RECOMP_ABI_CALL(0x000F67C0u, sub_000F67C0); /* call 0x000F67C0 */

loc_00018982: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000189C8; /* je: equal / zero */

loc_00018989: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x1AEEE8);
    ecx = esp + 0x30;
    PUSH32(esp, 0x0001899Eu); RECOMP_ABI_CALL(0x000F8F90u, sub_000F8F90); /* call 0x000F8F90 */

loc_0001899E: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x000189A7u); RECOMP_ABI_CALL(0x000F9280u, sub_000F9280); /* call 0x000F9280 */

loc_000189A7: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = 0x1D73C0;
    PUSH32(esp, 0x000189B6u); RECOMP_ABI_CALL(0x000183E0u, sub_000183E0); /* call 0x000183E0 */

loc_000189B6: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x000189BFu); RECOMP_ABI_CALL(0x000F7550u, sub_000F7550); /* call 0x000F7550 */

loc_000189BF: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x000189C8u); RECOMP_ABI_CALL(0x000F7480u, sub_000F7480); /* call 0x000F7480 */

loc_000189C8: ;
    eax = MEM32(0x1D7418);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000189DE; /* je: equal / zero */

loc_000189D1: ;
    PUSH32(esp, 0x1AEEE0);
    PUSH32(esp, 0x000189DBu); RECOMP_ABI_CALL(0x000E3480u, sub_000E3480); /* call 0x000E3480 */

loc_000189DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000189DE: ;
    edx = MEM32(0x1AEF5C);
    eax = MEM32(0x1AEF58);
    ecx = MEM32(0x1AEF54);
    PUSH32(esp, edx);
    edx = MEM32(0x1AEF50);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1AEEDC);
    PUSH32(esp, 0x00018A03u); RECOMP_ABI_CALL(0x000E3930u, sub_000E3930); /* call 0x000E3930 */

loc_00018A03: ;
    ecx = MEM32(0x1D73C0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEEDC);
    PUSH32(esp, 0x00018A1Bu); RECOMP_ABI_CALL(0x000F7370u, sub_000F7370); /* call 0x000F7370 */

loc_00018A1B: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00018A23u); RECOMP_ABI_CALL(0x000E9D30u, sub_000E9D30); /* call 0x000E9D30 */

loc_00018A23: ;
    PUSH32(esp, 0x00018A28u); RECOMP_ABI_CALL(0x000F54F0u, sub_000F54F0); /* call 0x000F54F0 */

loc_00018A28: ;
    ecx = MEM32(0x1DC340);
    PUSH32(esp, 0x00018A33u); RECOMP_ABI_CALL(0x000F58E0u, sub_000F58E0); /* call 0x000F58E0 */

loc_00018A33: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018A3Du); RECOMP_ABI_CALL(0x000C98F9u, sub_000C98F9); /* call 0x000C98F9 */

loc_00018A3D: ;
    PUSH32(esp, 0x00018A42u); RECOMP_ABI_CALL(0x00015780u, sub_00015780); /* call 0x00015780 */

loc_00018A42: ;
    PUSH32(esp, 0x00018A47u); RECOMP_ABI_CALL(0x00015DB0u, sub_00015DB0); /* call 0x00015DB0 */

loc_00018A47: ;
    eax = MEM32(0x1D86C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018A71; /* jne: not equal / not zero */

loc_00018A50: ;
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x00018A5Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00018A5A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018A6A; /* je: equal / zero */

loc_00018A61: ;
    ecx = eax;
    PUSH32(esp, 0x00018A68u); RECOMP_ABI_CALL(0x00068B80u, sub_00068B80); /* call 0x00068B80 */

loc_00018A68: ;
    goto loc_00018A6C;

loc_00018A6A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00018A6C: ;
    MEM32(0x1D86C8) = eax;

loc_00018A71: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1AEEC0);
    esi = eax;
    PUSH32(esp, 0x00018A7Eu); RECOMP_ABI_CALL(0x00036A50u, sub_00036A50); /* call 0x00036A50 */

loc_00018A7E: ;
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0xC4) = 1;
    eax = MEM32(0x1D86C8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018ABB; /* jne: not equal / not zero */

loc_00018A9A: ;
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x00018AA4u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00018AA4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018AB4; /* je: equal / zero */

loc_00018AAB: ;
    ecx = eax;
    PUSH32(esp, 0x00018AB2u); RECOMP_ABI_CALL(0x00068B80u, sub_00068B80); /* call 0x00068B80 */

loc_00018AB2: ;
    goto loc_00018AB6;

loc_00018AB4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00018AB6: ;
    MEM32(0x1D86C8) = eax;

loc_00018ABB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00018AC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018ABFu); } /* indirect call */
    }

loc_00018AC2: ;
    PUSH32(esp, 0x00018AC7u); RECOMP_ABI_CALL(0x00015E90u, sub_00015E90); /* call 0x00015E90 */

loc_00018AC7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018AD1u); RECOMP_ABI_CALL(0x000C98F9u, sub_000C98F9); /* call 0x000C98F9 */

loc_00018AD1: ;
    PUSH32(esp, 0x00018AD6u); RECOMP_ABI_CALL(0x0009FBC0u, sub_0009FBC0); /* call 0x0009FBC0 */

loc_00018AD6: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018AE0u); RECOMP_ABI_CALL(0x000C98F9u, sub_000C98F9); /* call 0x000C98F9 */

loc_00018AE0: ;
    eax = MEM32(0x1D86C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018B0A; /* jne: not equal / not zero */

loc_00018AE9: ;
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x00018AF3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00018AF3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018B03; /* je: equal / zero */

loc_00018AFA: ;
    ecx = eax;
    PUSH32(esp, 0x00018B01u); RECOMP_ABI_CALL(0x00068B80u, sub_00068B80); /* call 0x00068B80 */

loc_00018B01: ;
    goto loc_00018B05;

loc_00018B03: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00018B05: ;
    MEM32(0x1D86C8) = eax;

loc_00018B0A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00018B11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018B0Eu); } /* indirect call */
    }

loc_00018B11: ;
    eax = MEM32(0x1D73C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018BD8; /* je: equal / zero */

loc_00018B1E: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00018B2Du); RECOMP_ABI_CALL(0x00013790u, sub_00013790); /* call 0x00013790 */

loc_00018B2D: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, 0x1D7440);
    PUSH32(esp, 0x1D8620);
    PUSH32(esp, 0x00018B3Eu); RECOMP_ABI_CALL(0x000F5860u, sub_000F5860); /* call 0x000F5860 */

loc_00018B3E: ;
    ecx = MEM32(0x1D8628);
    PUSH32(esp, 0x1D8620);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018B4Fu); RECOMP_ABI_CALL(0x000BB4B0u, sub_000BB4B0); /* call 0x000BB4B0 */

loc_00018B4F: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x1D8620);
    PUSH32(esp, 0x00018B63u); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_00018B63: ;
    PUSH32(esp, 0x1D8620);
    PUSH32(esp, 0x00018B6Du); RECOMP_ABI_CALL(0x000BB6E0u, sub_000BB6E0); /* call 0x000BB6E0 */

loc_00018B6D: ;
    eax = MEM32(0x1D8630);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00018BA3; /* jbe: below or equal (unsigned <=) */

loc_00018B7D: ;
    esi = 0x1D8634;

loc_00018B82: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00018B89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018B86u); } /* indirect call */
    }

loc_00018B89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018B96; /* je: equal / zero */

loc_00018B8D: ;
    eax = MEM32(esi);
    MEM32(eax + 0x158) = ebx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00018B96: ;
    eax = MEM32(0x1D8630);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00018B82; /* jb: below (unsigned <) */

loc_00018BA3: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00018BAAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00018BAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00018BD3; /* je: equal / zero */

loc_00018BB5: ;
    ecx = esi;
    PUSH32(esp, 0x00018BBCu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00018BBC: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1AEE98;
    MEM32(esi + 0x10) = 0x1D8620;
    PUSH32(esp, esi);
    goto loc_00018BF2;

loc_00018BD3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    goto loc_00018BF2;

loc_00018BD8: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, 0x00018BDFu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00018BDF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018BEF; /* je: equal / zero */

loc_00018BE6: ;
    ecx = eax;
    PUSH32(esp, 0x00018BEDu); RECOMP_ABI_CALL(0x0006AF90u, sub_0006AF90); /* call 0x0006AF90 */

loc_00018BED: ;
    goto loc_00018BF1;

loc_00018BEF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00018BF1: ;
    PUSH32(esp, eax);

loc_00018BF2: ;
    ecx = MEM32(0x1D3EA0);
    PUSH32(esp, 0x00018BFDu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00018BFD: ;
    POP32(esp, esi);
    edi = edi;

loc_00018C00: ;
    PUSH32(esp, 0x00018C05u); RECOMP_ABI_CALL(0x000188B0u, sub_000188B0); /* call 0x000188B0 */

loc_00018C05: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1D3F10)); /* fld float */
    ecx = MEM32(0x1D3EA0);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp)); /* fadd dword ptr [esp] */
    eax = MEM32(esp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(0x1D3F10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00018C29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018C26u); } /* indirect call */
    }

loc_00018C29: ;
    eax = MEM32(0x1D3EA0);
    ecx = MEM32(eax + 0x58);
    edx = MEM32(eax + ecx * 8 + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018C00; /* jne: not equal / not zero */

loc_00018C39: ;
    eax = MEM32(0x1D73C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018C8A; /* je: equal / zero */

loc_00018C42: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00018C49u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00018C49: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018C59; /* je: equal / zero */

loc_00018C50: ;
    ecx = eax;
    PUSH32(esp, 0x00018C57u); RECOMP_ABI_CALL(0x00064BD0u, sub_00064BD0); /* call 0x00064BD0 */

loc_00018C57: ;
    goto loc_00018C5B;

loc_00018C59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00018C5B: ;
    ecx = MEM32(0x1D3EA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018C67u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00018C67: ;
    MEM32(0x1D73C4) = 0;
    MEM32(0x1D73D0) = 0x41F00000;
    MEM32(0x1D73FC) = 0x42B40000;
    goto loc_00018C00;

loc_00018C8A: ;
    PUSH32(esp, 0x00018C8Fu); RECOMP_ABI_CALL(0x000A0100u, sub_000A0100); /* call 0x000A0100 */

loc_00018C8F: ;
    PUSH32(esp, 0x00018C94u); RECOMP_ABI_CALL(0x00016EA0u, sub_00016EA0); /* call 0x00016EA0 */

loc_00018C94: ;
    PUSH32(esp, 0x00018C99u); RECOMP_ABI_CALL(0x000F7010u, sub_000F7010); /* call 0x000F7010 */

loc_00018C99: ;
    PUSH32(esp, 0x00018C9Eu); RECOMP_ABI_CALL(0x000E3A80u, sub_000E3A80); /* call 0x000E3A80 */

loc_00018C9E: ;
    eax = 1;
    _fb = (uint32_t)(0x268) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x268;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00018985
 * Original: 0x00018985 - 0x00018CAA (805 bytes, 225 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018985(void)
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

loc_00018985: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000189C8; /* je: equal / zero */

loc_00018989: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x1AEEE8);
    ecx = esp + 0x30;
    PUSH32(esp, 0x0001899Eu); RECOMP_ABI_CALL(0x000F8F90u, sub_000F8F90); /* call 0x000F8F90 */

loc_0001899E: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x000189A7u); RECOMP_ABI_CALL(0x000F9280u, sub_000F9280); /* call 0x000F9280 */

loc_000189A7: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = 0x1D73C0;
    PUSH32(esp, 0x000189B6u); RECOMP_ABI_CALL(0x000183E0u, sub_000183E0); /* call 0x000183E0 */

loc_000189B6: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x000189BFu); RECOMP_ABI_CALL(0x000F7550u, sub_000F7550); /* call 0x000F7550 */

loc_000189BF: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x000189C8u); RECOMP_ABI_CALL(0x000F7480u, sub_000F7480); /* call 0x000F7480 */

loc_000189C8: ;
    eax = MEM32(0x1D7418);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000189DE; /* je: equal / zero */

loc_000189D1: ;
    PUSH32(esp, 0x1AEEE0);
    PUSH32(esp, 0x000189DBu); RECOMP_ABI_CALL(0x000E3480u, sub_000E3480); /* call 0x000E3480 */

loc_000189DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000189DE: ;
    edx = MEM32(0x1AEF5C);
    eax = MEM32(0x1AEF58);
    ecx = MEM32(0x1AEF54);
    PUSH32(esp, edx);
    edx = MEM32(0x1AEF50);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1AEEDC);
    PUSH32(esp, 0x00018A03u); RECOMP_ABI_CALL(0x000E3930u, sub_000E3930); /* call 0x000E3930 */

loc_00018A03: ;
    ecx = MEM32(0x1D73C0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    PUSH32(esp, 0x1AEEDC);
    PUSH32(esp, 0x00018A1Bu); RECOMP_ABI_CALL(0x000F7370u, sub_000F7370); /* call 0x000F7370 */

loc_00018A1B: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00018A23u); RECOMP_ABI_CALL(0x000E9D30u, sub_000E9D30); /* call 0x000E9D30 */

loc_00018A23: ;
    PUSH32(esp, 0x00018A28u); RECOMP_ABI_CALL(0x000F54F0u, sub_000F54F0); /* call 0x000F54F0 */

loc_00018A28: ;
    ecx = MEM32(0x1DC340);
    PUSH32(esp, 0x00018A33u); RECOMP_ABI_CALL(0x000F58E0u, sub_000F58E0); /* call 0x000F58E0 */

loc_00018A33: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018A3Du); RECOMP_ABI_CALL(0x000C98F9u, sub_000C98F9); /* call 0x000C98F9 */

loc_00018A3D: ;
    PUSH32(esp, 0x00018A42u); RECOMP_ABI_CALL(0x00015780u, sub_00015780); /* call 0x00015780 */

loc_00018A42: ;
    PUSH32(esp, 0x00018A47u); RECOMP_ABI_CALL(0x00015DB0u, sub_00015DB0); /* call 0x00015DB0 */

loc_00018A47: ;
    eax = MEM32(0x1D86C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018A71; /* jne: not equal / not zero */

loc_00018A50: ;
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x00018A5Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00018A5A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018A6A; /* je: equal / zero */

loc_00018A61: ;
    ecx = eax;
    PUSH32(esp, 0x00018A68u); RECOMP_ABI_CALL(0x00068B80u, sub_00068B80); /* call 0x00068B80 */

loc_00018A68: ;
    goto loc_00018A6C;

loc_00018A6A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00018A6C: ;
    MEM32(0x1D86C8) = eax;

loc_00018A71: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1AEEC0);
    esi = eax;
    PUSH32(esp, 0x00018A7Eu); RECOMP_ABI_CALL(0x00036A50u, sub_00036A50); /* call 0x00036A50 */

loc_00018A7E: ;
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0xC4) = 1;
    eax = MEM32(0x1D86C8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018ABB; /* jne: not equal / not zero */

loc_00018A9A: ;
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x00018AA4u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00018AA4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018AB4; /* je: equal / zero */

loc_00018AAB: ;
    ecx = eax;
    PUSH32(esp, 0x00018AB2u); RECOMP_ABI_CALL(0x00068B80u, sub_00068B80); /* call 0x00068B80 */

loc_00018AB2: ;
    goto loc_00018AB6;

loc_00018AB4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00018AB6: ;
    MEM32(0x1D86C8) = eax;

loc_00018ABB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00018AC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018ABFu); } /* indirect call */
    }

loc_00018AC2: ;
    PUSH32(esp, 0x00018AC7u); RECOMP_ABI_CALL(0x00015E90u, sub_00015E90); /* call 0x00015E90 */

loc_00018AC7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018AD1u); RECOMP_ABI_CALL(0x000C98F9u, sub_000C98F9); /* call 0x000C98F9 */

loc_00018AD1: ;
    PUSH32(esp, 0x00018AD6u); RECOMP_ABI_CALL(0x0009FBC0u, sub_0009FBC0); /* call 0x0009FBC0 */

loc_00018AD6: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018AE0u); RECOMP_ABI_CALL(0x000C98F9u, sub_000C98F9); /* call 0x000C98F9 */

loc_00018AE0: ;
    eax = MEM32(0x1D86C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018B0A; /* jne: not equal / not zero */

loc_00018AE9: ;
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x00018AF3u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00018AF3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018B03; /* je: equal / zero */

loc_00018AFA: ;
    ecx = eax;
    PUSH32(esp, 0x00018B01u); RECOMP_ABI_CALL(0x00068B80u, sub_00068B80); /* call 0x00068B80 */

loc_00018B01: ;
    goto loc_00018B05;

loc_00018B03: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00018B05: ;
    MEM32(0x1D86C8) = eax;

loc_00018B0A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00018B11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018B0Eu); } /* indirect call */
    }

loc_00018B11: ;
    eax = MEM32(0x1D73C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018BD8; /* je: equal / zero */

loc_00018B1E: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00018B2Du); RECOMP_ABI_CALL(0x00013790u, sub_00013790); /* call 0x00013790 */

loc_00018B2D: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, 0x1D7440);
    PUSH32(esp, 0x1D8620);
    PUSH32(esp, 0x00018B3Eu); RECOMP_ABI_CALL(0x000F5860u, sub_000F5860); /* call 0x000F5860 */

loc_00018B3E: ;
    ecx = MEM32(0x1D8628);
    PUSH32(esp, 0x1D8620);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018B4Fu); RECOMP_ABI_CALL(0x000BB4B0u, sub_000BB4B0); /* call 0x000BB4B0 */

loc_00018B4F: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x1D8620);
    PUSH32(esp, 0x00018B63u); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_00018B63: ;
    PUSH32(esp, 0x1D8620);
    PUSH32(esp, 0x00018B6Du); RECOMP_ABI_CALL(0x000BB6E0u, sub_000BB6E0); /* call 0x000BB6E0 */

loc_00018B6D: ;
    eax = MEM32(0x1D8630);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00018BA3; /* jbe: below or equal (unsigned <=) */

loc_00018B7D: ;
    esi = 0x1D8634;

loc_00018B82: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00018B89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018B86u); } /* indirect call */
    }

loc_00018B89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018B96; /* je: equal / zero */

loc_00018B8D: ;
    eax = MEM32(esi);
    MEM32(eax + 0x158) = ebx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00018B96: ;
    eax = MEM32(0x1D8630);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00018B82; /* jb: below (unsigned <) */

loc_00018BA3: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00018BAAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00018BAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00018BD3; /* je: equal / zero */

loc_00018BB5: ;
    ecx = esi;
    PUSH32(esp, 0x00018BBCu); RECOMP_ABI_CALL(0x000BC720u, sub_000BC720); /* call 0x000BC720 */

loc_00018BBC: ;
    MEM32(esi + 8) = 1;
    MEM32(esi) = 0x1AEE98;
    MEM32(esi + 0x10) = 0x1D8620;
    PUSH32(esp, esi);
    goto loc_00018BF2;

loc_00018BD3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    goto loc_00018BF2;

loc_00018BD8: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, 0x00018BDFu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00018BDF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018BEF; /* je: equal / zero */

loc_00018BE6: ;
    ecx = eax;
    PUSH32(esp, 0x00018BEDu); RECOMP_ABI_CALL(0x0006AF90u, sub_0006AF90); /* call 0x0006AF90 */

loc_00018BED: ;
    goto loc_00018BF1;

loc_00018BEF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00018BF1: ;
    PUSH32(esp, eax);

loc_00018BF2: ;
    ecx = MEM32(0x1D3EA0);
    PUSH32(esp, 0x00018BFDu); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00018BFD: ;
    POP32(esp, esi);
    edi = edi;

loc_00018C00: ;
    PUSH32(esp, 0x00018C05u); RECOMP_ABI_CALL(0x000188B0u, sub_000188B0); /* call 0x000188B0 */

loc_00018C05: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1D3F10)); /* fld float */
    ecx = MEM32(0x1D3EA0);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp)); /* fadd dword ptr [esp] */
    eax = MEM32(esp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(0x1D3F10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00018C29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018C26u); } /* indirect call */
    }

loc_00018C29: ;
    eax = MEM32(0x1D3EA0);
    ecx = MEM32(eax + 0x58);
    edx = MEM32(eax + ecx * 8 + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018C00; /* jne: not equal / not zero */

loc_00018C39: ;
    eax = MEM32(0x1D73C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018C8A; /* je: equal / zero */

loc_00018C42: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00018C49u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00018C49: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018C59; /* je: equal / zero */

loc_00018C50: ;
    ecx = eax;
    PUSH32(esp, 0x00018C57u); RECOMP_ABI_CALL(0x00064BD0u, sub_00064BD0); /* call 0x00064BD0 */

loc_00018C57: ;
    goto loc_00018C5B;

loc_00018C59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00018C5B: ;
    ecx = MEM32(0x1D3EA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018C67u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00018C67: ;
    MEM32(0x1D73C4) = 0;
    MEM32(0x1D73D0) = 0x41F00000;
    MEM32(0x1D73FC) = 0x42B40000;
    goto loc_00018C00;

loc_00018C8A: ;
    PUSH32(esp, 0x00018C8Fu); RECOMP_ABI_CALL(0x000A0100u, sub_000A0100); /* call 0x000A0100 */

loc_00018C8F: ;
    PUSH32(esp, 0x00018C94u); RECOMP_ABI_CALL(0x00016EA0u, sub_00016EA0); /* call 0x00016EA0 */

loc_00018C94: ;
    PUSH32(esp, 0x00018C99u); RECOMP_ABI_CALL(0x000F7010u, sub_000F7010); /* call 0x000F7010 */

loc_00018C99: ;
    PUSH32(esp, 0x00018C9Eu); RECOMP_ABI_CALL(0x000E3A80u, sub_000E3A80); /* call 0x000E3A80 */

loc_00018C9E: ;
    eax = 1;
    _fb = (uint32_t)(0x268) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x268;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00018C00
 * Original: 0x00018C00 - 0x00018CAA (170 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018C00(void)
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

loc_00018C00: ;
    PUSH32(esp, 0x00018C05u); RECOMP_ABI_CALL(0x000188B0u, sub_000188B0); /* call 0x000188B0 */

loc_00018C05: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1D3F10)); /* fld float */
    ecx = MEM32(0x1D3EA0);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp)); /* fadd dword ptr [esp] */
    eax = MEM32(esp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(0x1D3F10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00018C29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018C26u); } /* indirect call */
    }

loc_00018C29: ;
    eax = MEM32(0x1D3EA0);
    ecx = MEM32(eax + 0x58);
    edx = MEM32(eax + ecx * 8 + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018C00; /* jne: not equal / not zero */

loc_00018C39: ;
    eax = MEM32(0x1D73C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018C8A; /* je: equal / zero */

loc_00018C42: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00018C49u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00018C49: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018C59; /* je: equal / zero */

loc_00018C50: ;
    ecx = eax;
    PUSH32(esp, 0x00018C57u); RECOMP_ABI_CALL(0x00064BD0u, sub_00064BD0); /* call 0x00064BD0 */

loc_00018C57: ;
    goto loc_00018C5B;

loc_00018C59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00018C5B: ;
    ecx = MEM32(0x1D3EA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018C67u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00018C67: ;
    MEM32(0x1D73C4) = 0;
    MEM32(0x1D73D0) = 0x41F00000;
    MEM32(0x1D73FC) = 0x42B40000;
    goto loc_00018C00;

loc_00018C8A: ;
    PUSH32(esp, 0x00018C8Fu); RECOMP_ABI_CALL(0x000A0100u, sub_000A0100); /* call 0x000A0100 */

loc_00018C8F: ;
    PUSH32(esp, 0x00018C94u); RECOMP_ABI_CALL(0x00016EA0u, sub_00016EA0); /* call 0x00016EA0 */

loc_00018C94: ;
    PUSH32(esp, 0x00018C99u); RECOMP_ABI_CALL(0x000F7010u, sub_000F7010); /* call 0x000F7010 */

loc_00018C99: ;
    PUSH32(esp, 0x00018C9Eu); RECOMP_ABI_CALL(0x000E3A80u, sub_000E3A80); /* call 0x000E3A80 */

loc_00018C9E: ;
    eax = 1;
    _fb = (uint32_t)(0x268) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x268;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00018C19
 * Original: 0x00018C19 - 0x00018CAA (145 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018C19(void)
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

loc_00018C19: ;
    eax = MEM32(esp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(0x1D3F10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00018C29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018C26u); } /* indirect call */
    }

loc_00018C29: ;
    eax = MEM32(0x1D3EA0);
    ecx = MEM32(eax + 0x58);
    edx = MEM32(eax + ecx * 8 + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00018C00(); return; } /* jne: not equal / not zero */

loc_00018C39: ;
    eax = MEM32(0x1D73C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018C8A; /* je: equal / zero */

loc_00018C42: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00018C49u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00018C49: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018C59; /* je: equal / zero */

loc_00018C50: ;
    ecx = eax;
    PUSH32(esp, 0x00018C57u); RECOMP_ABI_CALL(0x00064BD0u, sub_00064BD0); /* call 0x00064BD0 */

loc_00018C57: ;
    goto loc_00018C5B;

loc_00018C59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00018C5B: ;
    ecx = MEM32(0x1D3EA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018C67u); RECOMP_ABI_CALL(0x000BCA10u, sub_000BCA10); /* call 0x000BCA10 */

loc_00018C67: ;
    MEM32(0x1D73C4) = 0;
    MEM32(0x1D73D0) = 0x41F00000;
    MEM32(0x1D73FC) = 0x42B40000;
    g_seh_ebp = ebp; sub_00018C00(); return; /* tail jmp 0x00018C00 */

loc_00018C8A: ;
    PUSH32(esp, 0x00018C8Fu); RECOMP_ABI_CALL(0x000A0100u, sub_000A0100); /* call 0x000A0100 */

loc_00018C8F: ;
    PUSH32(esp, 0x00018C94u); RECOMP_ABI_CALL(0x00016EA0u, sub_00016EA0); /* call 0x00016EA0 */

loc_00018C94: ;
    PUSH32(esp, 0x00018C99u); RECOMP_ABI_CALL(0x000F7010u, sub_000F7010); /* call 0x000F7010 */

loc_00018C99: ;
    PUSH32(esp, 0x00018C9Eu); RECOMP_ABI_CALL(0x000E3A80u, sub_000E3A80); /* call 0x000E3A80 */

loc_00018C9E: ;
    eax = 1;
    _fb = (uint32_t)(0x268) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x268;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00018CB0
 * Original: 0x00018CB0 - 0x00018CB6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018CB0(void)
{

loc_00018CB0: ;
    eax = 0x1A27B8;
    esp += 4; return; /* ret */

}

/**
 * sub_00018CC0
 * Original: 0x00018CC0 - 0x00018D6E (174 bytes, 72 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018CC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018CC6u); RECOMP_ABI_CALL(0x000C9948u, sub_000C9948); /* call 0x000C9948 */

loc_00018CC6: ;
    ecx = MEM32(0x1D740C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018CD6; /* jne: not equal / not zero */

loc_00018CD1: ;
    eax = 1;

loc_00018CD6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_00018D5C; /* ja: above (unsigned >) */

loc_00018CDD: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x18D70); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00018CE4u) goto loc_00018CE4;
    if (_jt == 0x00018D00u) goto loc_00018D00;
    if (_jt == 0x00018D10u) goto loc_00018D10;
    if (_jt == 0x00018D23u) goto loc_00018D23;
    if (_jt == 0x00018D36u) goto loc_00018D36;
    if (_jt == 0x00018D49u) goto loc_00018D49;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00018CE4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00018CF8u); RECOMP_ABI_CALL(0x00015BA0u, sub_00015BA0); /* call 0x00015BA0 */

loc_00018CF8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018D00: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00018D08u); RECOMP_ABI_CALL(0x00015BA0u, sub_00015BA0); /* call 0x00015BA0 */

loc_00018D08: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018D10: ;
    esi = 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00018D1Bu); RECOMP_ABI_CALL(0x00015BA0u, sub_00015BA0); /* call 0x00015BA0 */

loc_00018D1B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018D23: ;
    esi = 1;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00018D2Eu); RECOMP_ABI_CALL(0x00015BA0u, sub_00015BA0); /* call 0x00015BA0 */

loc_00018D2E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018D36: ;
    esi = 2;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00018D41u); RECOMP_ABI_CALL(0x00015BA0u, sub_00015BA0); /* call 0x00015BA0 */

loc_00018D41: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018D49: ;
    esi = 3;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00018D54u); RECOMP_ABI_CALL(0x00015BA0u, sub_00015BA0); /* call 0x00015BA0 */

loc_00018D54: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00018D5C: ;
    esi = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00018D66u); RECOMP_ABI_CALL(0x00015BA0u, sub_00015BA0); /* call 0x00015BA0 */

loc_00018D66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018D90
 * Original: 0x00018D90 - 0x00018E0E (126 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00018D90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x1CA3A0) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00018DD6; /* jne: not equal / not zero */

loc_00018D9E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x1D74D8) = 5;
    MEM32(0x1CA39C) = eax;
    MEM32(0x1CA398) = eax;
    MEM32(0x1D74E0) = 1;
    MEM32(0x1D74DC) = eax;
    PUSH32(esp, 0x00018DC8u); RECOMP_ABI_CALL(0x000C9982u, sub_000C9982); /* call 0x000C9982 */

loc_00018DC8: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x11);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(0x1D74E4) = eax;
    esp += 4; return; /* ret */

loc_00018DD6: ;
    eax = 1;
    MEM32(0x1CA39C) = eax;
    MEM32(0x1CA398) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x1D74E0) = eax;
    MEM32(0x1D74DC) = eax;
    PUSH32(esp, 0x00018DF6u); RECOMP_ABI_CALL(0x000C9982u, sub_000C9982); /* call 0x000C9982 */

loc_00018DF6: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x11);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(0x1D74E4) = eax;
    PUSH32(esp, 0x00018E08u); RECOMP_ABI_CALL(0x00018CC0u, sub_00018CC0); /* call 0x00018CC0 */

loc_00018E08: ;
    MEM32(0x1D74D8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00018E10
 * Original: 0x00018E10 - 0x00018E41 (49 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018E10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(esi) = 0x1AEFA0;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = 1;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x00018E38u); RECOMP_ABI_CALL(0x00024AB0u, sub_00024AB0); /* call 0x00024AB0 */

loc_00018E38: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018E50
 * Original: 0x00018E50 - 0x00018E58 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018E50(void)
{

loc_00018E50: ;
    MEM32(ecx + 8) = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_00018E60
 * Original: 0x00018E60 - 0x00018E68 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018E60(void)
{

loc_00018E60: ;
    MEM32(ecx + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00018E70
 * Original: 0x00018E70 - 0x00018E7D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018E70(void)
{

loc_00018E70: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00018E75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018E72u); } /* indirect call */
    }

loc_00018E75: ;
    eax = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00018E80
 * Original: 0x00018E80 - 0x00018E88 (8 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018E80(void)
{

loc_00018E80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018E86u); RECOMP_ABI_CALL(0x00025120u, sub_00025120); /* call 0x00025120 */

loc_00018E86: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018E90
 * Original: 0x00018E90 - 0x00018E98 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018E90(void)
{

loc_00018E90: ;
    MEM32(ecx + 8) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00018EA0
 * Original: 0x00018EA0 - 0x00018EB0 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018EA0: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018EAD; /* jne: not equal / not zero */

loc_00018EA6: ;
    MEM32(ecx + 8) = 1;

loc_00018EAD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018EB0
 * Original: 0x00018EB0 - 0x00018ED9 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018EB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x1AEFA0;
    PUSH32(esp, 0x00018EBFu); RECOMP_ABI_CALL(0x00025120u, sub_00025120); /* call 0x00025120 */

loc_00018EBF: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00018ED3; /* je: equal / zero */

loc_00018ECA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00018ED0u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00018ED0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00018ED3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018EE0
 * Original: 0x00018EE0 - 0x00018F03 (35 bytes, 12 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00018EE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00018EE0: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    eax = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 4)); /* fdiv dword ptr [esp + 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00018F10
 * Original: 0x00018F10 - 0x00018F35 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00018F10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00018F10: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax + 8)); /* fld float */
    ecx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00018F40
 * Original: 0x00018F40 - 0x00018F65 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00018F40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00018F40: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax + 8)); /* fld float */
    ecx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00018F70
 * Original: 0x00018F70 - 0x00018F95 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00018F70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00018F70: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    eax = MEM32(esp + 4);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00018FA0
 * Original: 0x00018FA0 - 0x00018FC5 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00018FA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00018FA0: ;
    eax = MEM32(esp + 0xC);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    eax = MEM32(esp + 4);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00018FD0
 * Original: 0x00018FD0 - 0x00018FFF (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00018FD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00018FD0: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0xC)); /* fdiv dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    eax = MEM32(esp + 4);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019000
 * Original: 0x00019000 - 0x0001903B (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00019000(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00019000: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    eax = MEM32(esp + 4);
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019040
 * Original: 0x00019040 - 0x0001905D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019040(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00019040: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019060
 * Original: 0x00019060 - 0x0001907F (31 bytes, 15 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00019060(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00019060: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
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
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019080
 * Original: 0x00019080 - 0x000190A9 (41 bytes, 19 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00019080(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00019080: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
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
    PUSH32(esp, 0x000190A7u); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_000190A7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000190B0
 * Original: 0x000190B0 - 0x000190FB (75 bytes, 32 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000190B0(void)
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

loc_000190B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
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
    PUSH32(esp, 0x000190DAu); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_000190DA: ;
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
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019100
 * Original: 0x00019100 - 0x00019141 (65 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019100: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001913E; /* je: equal / zero */

loc_0001910A: ;
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

loc_0001913E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00019150
 * Original: 0x00019150 - 0x00019154 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019150(void)
{

loc_00019150: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00019160
 * Original: 0x00019160 - 0x00019164 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019160(void)
{

loc_00019160: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00019170
 * Original: 0x00019170 - 0x00019174 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019170(void)
{

loc_00019170: ;
    eax = ecx + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00019180
 * Original: 0x00019180 - 0x00019184 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019180(void)
{

loc_00019180: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00019190
 * Original: 0x00019190 - 0x00019194 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019190(void)
{

loc_00019190: ;
    eax = ecx + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000191A0
 * Original: 0x000191A0 - 0x000191A4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000191A0(void)
{

loc_000191A0: ;
    eax = ecx + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000191B0
 * Original: 0x000191B0 - 0x000191B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000191B0(void)
{

loc_000191B0: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_000191C0
 * Original: 0x000191C0 - 0x000191C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000191C0(void)
{

loc_000191C0: ;
    eax = ecx + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_000191D0
 * Original: 0x000191D0 - 0x000191D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000191D0(void)
{

loc_000191D0: ;
    eax = ecx + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_000191E0
 * Original: 0x000191E0 - 0x000191E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000191E0(void)
{

loc_000191E0: ;
    eax = ecx + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_000191F0
 * Original: 0x000191F0 - 0x000191F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000191F0(void)
{

loc_000191F0: ;
    eax = ecx + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_00019200
 * Original: 0x00019200 - 0x00019204 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019200(void)
{

loc_00019200: ;
    eax = ecx + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_00019210
 * Original: 0x00019210 - 0x00019214 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019210(void)
{

loc_00019210: ;
    eax = ecx + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_00019220
 * Original: 0x00019220 - 0x00019224 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019220(void)
{

loc_00019220: ;
    eax = ecx + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_00019230
 * Original: 0x00019230 - 0x00019297 (103 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019230(void)
{

loc_00019230: ;
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
    ecx = MEM32(ecx + 0x3C);
    MEM32(eax + 0x3C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000192A0
 * Original: 0x000192A0 - 0x000192D9 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000192A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000192A0: ;
    eax = ecx;
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
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000192E0
 * Original: 0x000192E0 - 0x0001936C (140 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000192E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000192E0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x10);
    MEM32(esp) = eax;
    eax = MEM32(ecx + 0x20);
    MEM32(esp + 4) = edx;
    edx = MEM32(ecx + 0x30);
    MEM32(esp + 8) = eax;
    eax = MEM32(ecx + 4);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 0x24);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 0x34);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ecx + 8);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ecx + 0x28);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx + 0x38);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(ecx + 0x2C);
    ecx = MEM32(ecx + 0x3C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x48);
    MEM32(esp + 0x38) = edx;
    edx = esp + 4;
    MEM32(esp + 0x40) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x00019363u); RECOMP_ABI_CALL(0x00019230u, sub_00019230); /* call 0x00019230 */

loc_00019363: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00019370
 * Original: 0x00019370 - 0x00019444 (212 bytes, 71 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00019370(void)
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

loc_00019370: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x38);
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
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp)); /* fadd dword ptr [esp] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(esp + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x38);
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xC) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_00019450
 * Original: 0x00019450 - 0x00019471 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00019450(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00019450: ;
    eax = MEM32(0x1AEFE4);
    fp_push(MEMF(0x1AEFE4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    edx = eax;
    MEMF(ecx + 0xC) = (float)fp_top(); /* fst */
    MEM32(ecx) = eax;
    MEMF(ecx + 0x10) = (float)fp_top(); /* fst */
    MEM32(ecx + 4) = edx;
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019480
 * Original: 0x00019480 - 0x000194F5 (117 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019480(void)
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

loc_00019480: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00019493; /* jp: parity */

loc_0001948F: ;
    eax = MEM32(edx);
    MEM32(ecx) = eax;

loc_00019493: ;
    fp_push(MEMF(edx + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000194A6; /* jne: not equal / not zero */

loc_000194A0: ;
    eax = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = eax;

loc_000194A6: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000194B9; /* jp: parity */

loc_000194B3: ;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;

loc_000194B9: ;
    fp_push(MEMF(edx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000194CC; /* jne: not equal / not zero */

loc_000194C6: ;
    eax = MEM32(edx + 0x10);
    MEM32(ecx + 0x10) = eax;

loc_000194CC: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000194DF; /* jp: parity */

loc_000194D9: ;
    eax = MEM32(edx + 8);
    MEM32(ecx + 8) = eax;

loc_000194DF: ;
    fp_push(MEMF(edx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000194F2; /* jne: not equal / not zero */

loc_000194EC: ;
    edx = MEM32(edx + 0x14);
    MEM32(ecx + 0x14) = edx;

loc_000194F2: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019486
 * Original: 0x00019486 - 0x000194F5 (111 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019486(void)
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

loc_00019486: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00019493; /* jp: parity */

loc_0001948F: ;
    eax = MEM32(edx);
    MEM32(ecx) = eax;

loc_00019493: ;
    fp_push(MEMF(edx + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000194A6; /* jne: not equal / not zero */

loc_000194A0: ;
    eax = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = eax;

loc_000194A6: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000194B9; /* jp: parity */

loc_000194B3: ;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;

loc_000194B9: ;
    fp_push(MEMF(edx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000194CC; /* jne: not equal / not zero */

loc_000194C6: ;
    eax = MEM32(edx + 0x10);
    MEM32(ecx + 0x10) = eax;

loc_000194CC: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000194DF; /* jp: parity */

loc_000194D9: ;
    eax = MEM32(edx + 8);
    MEM32(ecx + 8) = eax;

loc_000194DF: ;
    fp_push(MEMF(edx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000194F2; /* jne: not equal / not zero */

loc_000194EC: ;
    edx = MEM32(edx + 0x14);
    MEM32(ecx + 0x14) = edx;

loc_000194F2: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019500
 * Original: 0x00019500 - 0x0001957F (127 bytes, 43 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019500(void)
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

loc_00019500: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00019513; /* jp: parity */

loc_0001950D: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;

loc_00019513: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00019528; /* jne: not equal / not zero */

loc_00019521: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + 0xC) = edx;

loc_00019528: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001953D; /* jp: parity */

loc_00019536: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;

loc_0001953D: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00019552; /* jne: not equal / not zero */

loc_0001954B: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x10) = edx;

loc_00019552: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00019567; /* jp: parity */

loc_00019560: ;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 8) = eax;

loc_00019567: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001957C; /* jne: not equal / not zero */

loc_00019575: ;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x14) = edx;

loc_0001957C: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019580
 * Original: 0x00019580 - 0x00019614 (148 bytes, 56 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00019580(void)
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

loc_00019580: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00019597; /* jp: parity */

loc_00019593: ;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00019599;

loc_00019597: ;
    fp_pop(); /* fstp st(0) */

loc_00019599: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx)); /* fadd dword ptr [edx] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000195AE; /* jne: not equal / not zero */

loc_000195A9: ;
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000195B0;

loc_000195AE: ;
    fp_pop(); /* fstp st(0) */

loc_000195B0: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000195C6; /* jp: parity */

loc_000195C1: ;
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000195C8;

loc_000195C6: ;
    fp_pop(); /* fstp st(0) */

loc_000195C8: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 4)); /* fadd dword ptr [edx + 4] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000195DE; /* jne: not equal / not zero */

loc_000195D9: ;
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000195E0;

loc_000195DE: ;
    fp_pop(); /* fstp st(0) */

loc_000195E0: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000195F6; /* jp: parity */

loc_000195F1: ;
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000195F8;

loc_000195F6: ;
    fp_pop(); /* fstp st(0) */

loc_000195F8: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 8)); /* fadd dword ptr [edx + 8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001960F; /* jne: not equal / not zero */

loc_00019609: ;
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

loc_0001960F: ;
    fp_pop(); /* fstp st(0) */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019620
 * Original: 0x00019620 - 0x0001967B (91 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019620: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1DAEB4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1DAEB4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001967A; /* je: equal / zero */

loc_0001962B: ;
    ecx = MEM32(eax);
    MEM32(0x1DAEB4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x1DAEB8) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x1DAEBC) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x1DAEC0) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(0x1DAEC4) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(0x1DAEC8) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(0x1DAECC) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(0x1DAED0) = edx;
    eax = MEM32(eax + 0x20);
    MEM32(0x1DAED4) = eax;

loc_0001967A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00019680
 * Original: 0x00019680 - 0x000196F8 (120 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019680: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1DAEB4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1DAEB4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000196DA; /* je: equal / zero */

loc_0001968B: ;
    ecx = MEM32(eax);
    MEM32(0x1DAEB4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x1DAEB8) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x1DAEBC) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x1DAEC0) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(0x1DAEC4) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(0x1DAEC8) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(0x1DAECC) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(0x1DAED0) = edx;
    eax = MEM32(eax + 0x20);
    MEM32(0x1DAED4) = eax;

loc_000196DA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    MEM32(0x1DAEA8) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x1DAEAC) = edx;
    eax = MEM32(eax + 8);
    MEM32(0x1DAEB0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00019700
 * Original: 0x00019700 - 0x00019743 (67 bytes, 20 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00019700(void)
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

loc_00019700: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x1DAEB4);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00019717u); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_00019717: ;
    fp_push(MEMF(0x1DAEA8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    fp_push(MEMF(0x1DAEAC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(0x1DAEB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    eax = MEM32(esp + 0x20);
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_00019750
 * Original: 0x00019750 - 0x0001976F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019750: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AF200;
    if (TEST_Z(_fa, _fb)) goto loc_00019769; /* je: equal / zero */

loc_00019760: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00019766u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00019766: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00019769: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00019770
 * Original: 0x00019770 - 0x00019794 (36 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00019770(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00019770: ;
    eax = MEM32(0x1AEFE4);
    fp_push(MEMF(0x1AEFE4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    edx = eax;
    MEMF(ecx + 0x14) = (float)fp_top(); /* fst */
    MEM32(ecx + 8) = eax;
    MEMF(ecx + 0x18) = (float)fp_top(); /* fst */
    MEM32(ecx + 0xC) = edx;
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x10) = eax;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000197A0
 * Original: 0x000197A0 - 0x000197B6 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000197A0(void)
{

loc_000197A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AF218;
    PUSH32(esp, 0x000197AEu); RECOMP_ABI_CALL(0x000D0730u, sub_000D0730); /* call 0x000D0730 */

loc_000197AE: ;
    MEM32(esi) = 0x1AF200;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000197C0
 * Original: 0x000197C0 - 0x000197C7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000197C0(void)
{

loc_000197C0: ;
    eax = MEM32(ecx + 0x80);
    esp += 4; return; /* ret */

}

/**
 * sub_000197D0
 * Original: 0x000197D0 - 0x000197D7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000197D0(void)
{

loc_000197D0: ;
    eax = MEM32(ecx + 0x110);
    esp += 4; return; /* ret */

}

/**
 * sub_000197E0
 * Original: 0x000197E0 - 0x00019836 (86 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000197E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000197E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xA8;
    MEM32(esi) = 0x1AF248;
    ecx = edi;
    MEM32(edi) = 0x1AF218;
    PUSH32(esp, 0x000197FDu); RECOMP_ABI_CALL(0x000D0730u, sub_000D0730); /* call 0x000D0730 */

loc_000197FD: ;
    MEM32(edi) = 0x1AF200;
    edi = esi + 0x24;
    ecx = edi;
    MEM32(edi) = 0x1AF230;
    PUSH32(esp, 0x00019813u); RECOMP_ABI_CALL(0x000D0730u, sub_000D0730); /* call 0x000D0730 */

loc_00019813: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(edi) = 0x1AF200;
    MEM32(esi) = 0x1AF200;
    if (TEST_Z(_fa, _fb)) goto loc_0001982F; /* je: equal / zero */

loc_00019826: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001982Cu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001982C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001982F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00019840
 * Original: 0x00019840 - 0x0001990B (203 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019840(void)
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

loc_00019840: ;
    eax = ecx;
    fp_push(MEMF(0x1AEFE4)); /* fld float */
    ecx = MEM32(0x1AEFE4);
    fp_top() = -fp_top(); /* fchs */
    MEM32(eax + 4) = 9;
    MEMF(eax + 0x14) = (float)fp_top(); /* fst */
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0x18) = (float)fp_top(); /* fst */
    MEM32(eax + 0x10) = ecx;
    MEMF(eax + 0x1C) = (float)fp_top(); /* fst */
    edx = ecx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax) = 0x1AF248;
    MEM32(eax + 0x28) = 8;
    MEMF(eax + 0x38) = (float)fp_top(); /* fst */
    MEM32(eax + 0x30) = ecx;
    MEMF(eax + 0x3C) = (float)fp_top(); /* fst */
    MEMF(eax + 0x40) = (float)fp_top(); /* fst */
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x24) = 0x1AF230;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0xAC) = 3;
    MEMF(eax + 0xBC) = (float)fp_top(); /* fst */
    MEMF(eax + 0xC0) = (float)fp_top(); /* fst */
    MEM32(eax + 0xB0) = edx;
    MEMF(eax + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xB4) = edx;
    MEM32(eax + 0xB8) = edx;
    MEM32(eax + 0xA8) = 0x1AF218;
    MEM32(eax + 0xC8) = ecx;
    MEM32(eax + 0xCC) = ecx;
    MEM32(eax + 0xD0) = ecx;
    MEM32(eax + 0xD4) = ecx;
    MEM32(eax + 0xD8) = ecx;
    MEM32(eax + 0xDC) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x110) = ecx;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019887
 * Original: 0x00019887 - 0x0001990B (132 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019887(void)
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

loc_00019887: ;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x24) = 0x1AF230;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0xAC) = 3;
    MEMF(eax + 0xBC) = (float)fp_top(); /* fst */
    MEMF(eax + 0xC0) = (float)fp_top(); /* fst */
    MEM32(eax + 0xB0) = edx;
    MEMF(eax + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xB4) = edx;
    MEM32(eax + 0xB8) = edx;
    MEM32(eax + 0xA8) = 0x1AF218;
    MEM32(eax + 0xC8) = ecx;
    MEM32(eax + 0xCC) = ecx;
    MEM32(eax + 0xD0) = ecx;
    MEM32(eax + 0xD4) = ecx;
    MEM32(eax + 0xD8) = ecx;
    MEM32(eax + 0xDC) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x110) = ecx;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019896
 * Original: 0x00019896 - 0x0001990B (117 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019896(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00019896: ;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0xAC) = 3;
    MEMF(eax + 0xBC) = (float)fp_top(); /* fst */
    MEMF(eax + 0xC0) = (float)fp_top(); /* fst */
    MEM32(eax + 0xB0) = edx;
    MEMF(eax + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xB4) = edx;
    MEM32(eax + 0xB8) = edx;
    MEM32(eax + 0xA8) = 0x1AF218;
    MEM32(eax + 0xC8) = ecx;
    MEM32(eax + 0xCC) = ecx;
    MEM32(eax + 0xD0) = ecx;
    MEM32(eax + 0xD4) = ecx;
    MEM32(eax + 0xD8) = ecx;
    MEM32(eax + 0xDC) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x110) = ecx;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019910
 * Original: 0x00019910 - 0x00019917 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019910: ;
    eax = MEM32(ecx + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00019920
 * Original: 0x00019920 - 0x00019927 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019920: ;
    eax = MEM32(ecx + 0x18);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00019930
 * Original: 0x00019930 - 0x00019954 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019930: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AF260;
    PUSH32(esp, 0x0001993Eu); RECOMP_ABI_CALL(0x000256A0u, sub_000256A0); /* call 0x000256A0 */

loc_0001993E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001994E; /* je: equal / zero */

loc_00019945: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001994Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001994B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001994E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00019960
 * Original: 0x00019960 - 0x00019999 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019960: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ecx * 4 + 0x1DC428)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx * 4 + 0x1DC428), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019998; /* je: equal / zero */

loc_00019971: ;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = MEM32(0x1A50F0);
    MEM32(ecx * 4 + 0x1DC428) = eax;
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x1A50F0) = esi;
    MEM32(ecx + 0x1A2EA0) = eax;
    POP32(esp, esi);

loc_00019998: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000199A0
 * Original: 0x000199A0 - 0x000199D9 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000199A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000199A0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ecx * 4 + 0x1DC368)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx * 4 + 0x1DC368), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000199D8; /* je: equal / zero */

loc_000199B1: ;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = MEM32(0x1A50F0);
    MEM32(ecx * 4 + 0x1DC368) = eax;
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x1A50F0) = esi;
    MEM32(ecx + 0x1A2EA4) = eax;
    POP32(esp, esi);

loc_000199D8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000199E0
 * Original: 0x000199E0 - 0x000199FB (27 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000199E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000199E0: ;
    eax = MEM32(0x1DE3E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000199FA; /* je: equal / zero */

loc_000199E9: ;
    PUSH32(esp, 0);
    MEM32(0x1DE3E8) = 0;
    PUSH32(esp, 0x000199FAu); RECOMP_ABI_CALL(0x001931B0u, sub_001931B0); /* call 0x001931B0 */

loc_000199FA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00019A00
 * Original: 0x00019A00 - 0x00019A2E (46 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019A00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x1DE434)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x1DE434), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019A2D; /* je: equal / zero */

loc_00019A11: ;
    MEM32(0x1A50F0) = MEM32(0x1A50F0) | 0x800;
    _fa = (uint32_t)(MEM32(0x1A50F0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax;
    edx = edx << 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 0x1A2EE0) = ecx;
    MEM32(eax * 4 + 0x1DE434) = ecx;

loc_00019A2D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00019A30
 * Original: 0x00019A30 - 0x00019AAB (123 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019A30(void)
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

loc_00019A30: ;
    eax = MEM32(0x1AEFE4);
    fp_push(MEMF(0x1AEFE4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = 1;
    MEMF(esi + 0x14) = (float)fp_top(); /* fst */
    MEMF(esi + 0x18) = (float)fp_top(); /* fst */
    MEM32(esi + 8) = eax;
    MEMF(esi + 0x1C) = (float)fp_top(); /* fst */
    ecx = eax;
    MEM32(esi + 0xC) = ecx;
    edx = eax;
    MEM32(esi + 0x10) = edx;
    MEM32(esi) = 0x1AF2C8;
    MEM32(esi + 0x28) = 3;
    MEMF(esi + 0x38) = (float)fp_top(); /* fst */
    MEMF(esi + 0x3C) = (float)fp_top(); /* fst */
    MEM32(esi + 0x30) = ecx;
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x34) = edx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x8C;
    MEM32(esi + 0x24) = 0x1AF218;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0x54) = edi;
    MEM32(esi + 0x58) = edi;
    PUSH32(esp, 0x00019AA3u); RECOMP_ABI_CALL(0x00019840u, sub_00019840); /* call 0x00019840 */

loc_00019AA3: ;
    MEM32(esi + 0x20) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019AB0
 * Original: 0x00019AB0 - 0x00019B1F (111 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019AB0(void)
{

loc_00019AB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x1AF2C8;
    edi = esi + 0x134;
    MEM32(esi + 0x8C) = 0x1AF248;
    ecx = edi;
    MEM32(edi) = 0x1AF218;
    PUSH32(esp, 0x00019AD7u); RECOMP_ABI_CALL(0x000D0730u, sub_000D0730); /* call 0x000D0730 */

loc_00019AD7: ;
    MEM32(edi) = 0x1AF200;
    edi = esi + 0xB0;
    ecx = edi;
    MEM32(edi) = 0x1AF230;
    PUSH32(esp, 0x00019AF0u); RECOMP_ABI_CALL(0x000D0730u, sub_000D0730); /* call 0x000D0730 */

loc_00019AF0: ;
    MEM32(edi) = 0x1AF200;
    edi = esi + 0x24;
    MEM32(esi + 0x8C) = 0x1AF200;
    ecx = edi;
    MEM32(edi) = 0x1AF218;
    PUSH32(esp, 0x00019B10u); RECOMP_ABI_CALL(0x000D0730u, sub_000D0730); /* call 0x000D0730 */

loc_00019B10: ;
    MEM32(edi) = 0x1AF200;
    POP32(esp, edi);
    MEM32(esi) = 0x1AF200;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00019B20
 * Original: 0x00019B20 - 0x00019B8A (106 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019B20(void)
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

loc_00019B20: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x100C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x100C), 0xFF (8-bit) */
    MEM32(esp + 4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00019B68; /* je: equal / zero */

loc_00019B37: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00019B3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00019B39u); } /* indirect call */
    }

loc_00019B3C: ;
    fp_push(MEMF(esi + 0x1058)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x105C)); /* fadd dword ptr [esi + 0x105c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = esp + 8;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1060)); /* fadd dword ptr [esi + 0x1060] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00019B6D;

loc_00019B68: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00019B6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00019B6Au); } /* indirect call */
    }

loc_00019B6D: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x18);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    eax = ecx;
    POP32(esp, esi);
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
 * sub_00019B90
 * Original: 0x00019B90 - 0x00019BDE (78 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019B90: ;
    eax = MEM32(0x1D9FB8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x34);
    eax = MEM32(0x1D9BA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019BD2; /* jne: not equal / not zero */

loc_00019BA2: ;
    PUSH32(esp, 0x33F8);
    PUSH32(esp, 0x00019BACu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00019BAC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019BCB; /* je: equal / zero */

loc_00019BB3: ;
    ecx = eax;
    PUSH32(esp, 0x00019BBAu); RECOMP_ABI_CALL(0x00095660u, sub_00095660); /* call 0x00095660 */

loc_00019BBA: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2BC);
    MEM32(0x1D9BA8) = eax;
    eax = esi + eax + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00019BCB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x1D9BA8) = eax;

loc_00019BD2: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2BC);
    eax = esi + eax + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00019BE0
 * Original: 0x00019BE0 - 0x00019BFF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019BE0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AF2E0;
    if (TEST_Z(_fa, _fb)) goto loc_00019BF9; /* je: equal / zero */

loc_00019BF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00019BF6u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00019BF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00019BF9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00019C00
 * Original: 0x00019C00 - 0x00019CB9 (185 bytes, 67 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019C00: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(edx + eax + 0x1A));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x10));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(edx + 0x25));
    PUSH32(esp, edi);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019C2C; /* jne: not equal / not zero */

loc_00019C23: ;
    eax = MEM32(edx + 0x14);
    ecx = ZX8(MEM8(eax + esi));
    goto loc_00019C47;

loc_00019C2C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x10 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019C39; /* jne: not equal / not zero */

loc_00019C30: ;
    eax = MEM32(edx + 0x14);
    ecx = ZX16(MEM16(eax + esi * 2));
    goto loc_00019C47;

loc_00019C39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019C45; /* jne: not equal / not zero */

loc_00019C3D: ;
    eax = MEM32(edx + 0x14);
    ecx = MEM32(eax + esi * 4);
    goto loc_00019C47;

loc_00019C45: ;
    ecx = esi;

loc_00019C47: ;
    eax = MEM32(edx + 0x10);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(ecx + eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x18);
    MEM32(eax + 0xC) = edi;
    edi = MEM32(ecx + 4);
    MEM32(eax + 0x10) = edi;
    edi = MEM32(ecx + 8);
    MEM32(eax + 0x14) = edi;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0x18) = ecx;
    SET_LO8(ecx, MEM8(edx + 0x24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019C7F; /* jne: not equal / not zero */

loc_00019C73: ;
    ecx = MEM32(edx + 0xC);
    ecx = ZX8(MEM8(ecx + esi));
    ecx = ecx + ecx * 2;
    goto loc_00019C9E;

loc_00019C7F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x10 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019C90; /* jne: not equal / not zero */

loc_00019C84: ;
    ecx = MEM32(edx + 0xC);
    ecx = ZX16(MEM16(ecx + esi * 2));
    ecx = ecx + ecx * 2;
    goto loc_00019C9E;

loc_00019C90: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019C9B; /* jne: not equal / not zero */

loc_00019C95: ;
    ecx = MEM32(edx + 0xC);
    esi = MEM32(ecx + esi * 4);

loc_00019C9B: ;
    ecx = esi + esi * 2;

loc_00019C9E: ;
    edx = MEM32(edx + 8);
    ecx = edx + ecx * 4;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    POP32(esp, edi);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00019CC0
 * Original: 0x00019CC0 - 0x00019CE5 (37 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019CC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00019CDAu); RECOMP_ABI_CALL(0x000FAF60u, sub_000FAF60); /* call 0x000FAF60 */

loc_00019CDA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00019CF0
 * Original: 0x00019CF0 - 0x00019D35 (69 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019CF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019CF0: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(ecx + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    eax = MEM32(esp + 0xC);
    esi = MEM32(eax);
    MEM32(edx + 0x1C) = esi;
    eax = MEM32(eax + 4);
    MEM32(edx + 0x20) = eax;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax);
    edx = MEM32(ecx + 0xC);
    MEM32(edx + 0x18) = eax;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 0x34;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00019D40
 * Original: 0x00019D40 - 0x00019D82 (66 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00019D40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(0x1DF760) = 0;
    MEM32(0x1DF438) = 0;
    PUSH32(esp, 0x00019D5Cu); RECOMP_ABI_CALL(0x000F95A0u, sub_000F95A0); /* call 0x000F95A0 */

loc_00019D5C: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x00019D63u); RECOMP_ABI_CALL(0x000FB660u, sub_000FB660); /* call 0x000FB660 */

loc_00019D63: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00019D6Eu); RECOMP_ABI_CALL(0x000FAC60u, sub_000FAC60); /* call 0x000FAC60 */

loc_00019D6E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00019D79u); RECOMP_ABI_CALL(0x000FAD00u, sub_000FAD00); /* call 0x000FAD00 */

loc_00019D79: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000FA850(); return; /* tail jmp 0x000FA850 */

}

/**
 * sub_00019D90
 * Original: 0x00019D90 - 0x00019DA0 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00019D90: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0x48);
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00019DA0(); return; /* fallthrough 0x00019DA0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019DA0
 * Original: 0x00019DA0 - 0x00019DAE (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019DA0(void)
{

loc_00019DA0: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0x48);
    PUSH32(esp, 0x00019DABu); RECOMP_ABI_CALL(0x000ABA20u, sub_000ABA20); /* call 0x000ABA20 */

loc_00019DAB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00019DB0
 * Original: 0x00019DB0 - 0x00019DD8 (40 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019DB0(void)
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

loc_00019DB0: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0x3C);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x28)); /* fmul dword ptr [edx + 0x28] */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x24)); /* fmul dword ptr [edx + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x20)); /* fmul dword ptr [edx + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00019DE0
 * Original: 0x00019DE0 - 0x00019E04 (36 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019DE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ecx;
    PUSH32(esp, edi);
    ecx = 0xA;
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
    esi = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x68) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00019E10
 * Original: 0x00019E10 - 0x00019E56 (70 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019E10: ;
    SET_LO8(eax, MEM8(0x1C3E5C));
    MEM8(ecx) = LO8(eax);
    MEM8(ecx + 1) = 0xFF;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x68) = eax;
    MEM32(ecx + 0x54) = eax;
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x4C) = eax;
    MEM32(ecx + 0x58) = eax;
    MEM32(ecx + 0x5C) = eax;
    MEM32(ecx + 0x60) = eax;
    edx = 0x3F800000;
    MEM32(ecx + 0x64) = edx;
    MEM32(ecx + 0x28) = edx;
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x38) = edx;
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x48) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00019E60
 * Original: 0x00019E60 - 0x00019E67 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019E60(void)
{

loc_00019E60: ;
    eax = MEM32(ecx + 0x48);
    eax = MEM32(eax + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_00019E70
 * Original: 0x00019E70 - 0x00019EC6 (86 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00019E70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00019E80;

    /* nop */
    /* nop */

loc_00019E80: ;
    eax = MEM32(edi + 0xAB0);
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00019E8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00019E8Cu); } /* indirect call */
    }

loc_00019E8F: ;
    _fb = (uint32_t)(0x4E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4E8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1D70 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00019E80; /* jl: less (signed <) */

loc_00019E9D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00019EA0: ;
    eax = MEM32(edi + 0xEC4);
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00019EAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00019EACu); } /* indirect call */
    }

loc_00019EAF: ;
    _fb = (uint32_t)(0x45C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x45C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1170) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1170 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00019EA0; /* jl: less (signed <) */

loc_00019EBD: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00018E90(); return; /* tail jmp 0x00018E90 */

}

/**
 * sub_00019ED0
 * Original: 0x00019ED0 - 0x00019F03 (51 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019ED0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    esi = ecx;
    PUSH32(esp, 0x00019EDAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00019EDA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019EF7; /* je: equal / zero */

loc_00019EE1: ;
    ecx = MEM32(esi + 0x48);
    MEM32(eax) = 0x1AF2FC;
    MEM32(eax + 4) = ecx;
    MEM32(esi + 0xEE4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00019EF7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xEE4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00019F10
 * Original: 0x00019F10 - 0x00019F2F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019F10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xEE4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019F2D; /* je: equal / zero */

loc_00019F1D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00019F23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00019F21u); } /* indirect call */
    }

loc_00019F23: ;
    MEM32(esi + 0xEE4) = 0;

loc_00019F2D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00019F30
 * Original: 0x00019F30 - 0x00019F69 (57 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019F30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 8) = 3;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00019F40: ;
    eax = MEM32(edi + 0xAB0);
    ecx = eax + esi;
    eax = MEM32(ecx + 0x190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019F58; /* je: equal / zero */

loc_00019F53: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00019F58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00019F55u); } /* indirect call */
    }

loc_00019F58: ;
    _fb = (uint32_t)(0x4E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4E8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1D70 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00019F40; /* jl: less (signed <) */

loc_00019F66: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00019F70
 * Original: 0x00019F70 - 0x00019FE3 (115 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00019F70: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00019FC7; /* je: equal / zero */

loc_00019F7D: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, ebp);
    ebp = edi + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x45C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00019FB0; /* js: sign (negative) */

loc_00019F92: ;
    edi = eax + 1;
    goto loc_00019FA0;

    /* nop */
    edi = edi;

loc_00019FA0: ;
    _fb = (uint32_t)(0x45C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x45C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x00019FADu); RECOMP_ABI_CALL(0x00035B70u, sub_00035B70); /* call 0x00035B70 */

loc_00019FAD: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00019FA0; /* jne: not equal / not zero */

loc_00019FB0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00019FBE; /* je: equal / zero */

loc_00019FB5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00019FBBu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00019FBB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00019FBE: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00019FC7: ;
    ecx = edi;
    PUSH32(esp, 0x00019FCEu); RECOMP_ABI_CALL(0x00035B70u, sub_00035B70); /* call 0x00035B70 */

loc_00019FCE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00019FDC; /* je: equal / zero */

loc_00019FD3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00019FD9u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00019FD9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00019FDC: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00019FF0
 * Original: 0x00019FF0 - 0x0001A063 (115 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00019FF0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0001A047; /* je: equal / zero */

loc_00019FFD: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, ebp);
    ebp = edi + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x4E8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0001A030; /* js: sign (negative) */

loc_0001A012: ;
    edi = eax + 1;
    goto loc_0001A020;

    /* nop */
    edi = edi;

loc_0001A020: ;
    _fb = (uint32_t)(0x4E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x4E8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0001A02Du); RECOMP_ABI_CALL(0x000347F0u, sub_000347F0); /* call 0x000347F0 */

loc_0001A02D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0001A020; /* jne: not equal / not zero */

loc_0001A030: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001A03E; /* je: equal / zero */

loc_0001A035: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0001A03Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001A03B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001A03E: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0001A047: ;
    ecx = edi;
    PUSH32(esp, 0x0001A04Eu); RECOMP_ABI_CALL(0x000347F0u, sub_000347F0); /* call 0x000347F0 */

loc_0001A04E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001A05C; /* je: equal / zero */

loc_0001A053: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001A059u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001A059: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001A05C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001A070
 * Original: 0x0001A070 - 0x0001A077 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A070(void)
{

loc_0001A070: ;
    eax = MEM32(ecx + 0xEE4);
    esp += 4; return; /* ret */

}

/**
 * sub_0001A080
 * Original: 0x0001A080 - 0x0001A228 (424 bytes, 115 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A080(void)
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

loc_0001A080: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx + 0x44);
    edx = MEM32(eax + 0x278);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A221; /* jne: not equal / not zero */

loc_0001A09A: ;
    fp_push(MEMF(esi + 0x798)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xA8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x7A4)); /* fmul dword ptr [esi + 0x7a4] */
    fp_push(MEMF(esi + 0xA4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x7A0)); /* fmul dword ptr [esi + 0x7a0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi + 0xA0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x79C)); /* fmul dword ptr [esi + 0x79c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x9C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x7A4)); /* fmul dword ptr [esi + 0x7a4] */
    fp_push(MEMF(esi + 0x98)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x7A0)); /* fmul dword ptr [esi + 0x7a0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi + 0x79C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x94)); /* fmul dword ptr [esi + 0x94] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001A111; /* jp: parity */

loc_0001A109: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    goto loc_0001A11B;

loc_0001A111: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF328)); /* fmul dword ptr [0x1af328] */

loc_0001A11B: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001A140; /* jp: parity */

loc_0001A12A: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91DC)); /* fmul dword ptr [0x1c91dc] */
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) - fp_top()); /* fsubr dword ptr [0x1c91d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0001A150;

loc_0001A140: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_0001A150: ;
    edx = MEM32(ecx);
    fp_pop(); /* fstp st(0) */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0001A157u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001A154u); } /* indirect call */
    }

loc_0001A157: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A163; /* je: equal / zero */

loc_0001A15B: ;
    fp_push(MEMF(0x1AF324)); /* fld float */
    goto loc_0001A169;

loc_0001A163: ;
    fp_push(MEMF(0x1AF320)); /* fld float */

loc_0001A169: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(esi + 0xFCC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001A193; /* jne: not equal / not zero */

loc_0001A182: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0001A18Cu); RECOMP_ABI_CALL(0x00026CB0u, sub_00026CB0); /* call 0x00026CB0 */

loc_0001A18C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0001A193: ;
    fp_push(MEMF(esi + 0x98)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF31C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af31c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001A217; /* jp: parity */

loc_0001A1AA: ;
    eax = MEM32(esi + 0x794);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001A1BC; /* jle: less or equal (signed <=) */

loc_0001A1B4: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    goto loc_0001A1EB;

loc_0001A1BC: ;
    eax = MEM32(esi + 0x4C);
    ecx = esi + 0x4C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0001A1C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001A1C2u); } /* indirect call */
    }

loc_0001A1C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0001A217; /* jg: greater (signed >) */

loc_0001A1CA: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91CC) - fp_top()); /* fsubr dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001A215; /* jne: not equal / not zero */

loc_0001A1EB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xEC8)); /* fadd dword ptr [esi + 0xec8] */
    MEMF(esi + 0xEC8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF318)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af318] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001A221; /* jne: not equal / not zero */

loc_0001A204: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0001A20Eu); RECOMP_ABI_CALL(0x00026CB0u, sub_00026CB0); /* call 0x00026CB0 */

loc_0001A20E: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0001A215: ;
    fp_pop(); /* fstp st(0) */

loc_0001A217: ;
    MEM32(esi + 0xEC8) = 0;

loc_0001A221: ;
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
 * sub_0001A230
 * Original: 0x0001A230 - 0x0001A253 (35 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001A230: ;
    eax = MEM32(ecx + 0x208);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A252; /* je: equal / zero */

loc_0001A23A: ;
    edx = MEM32(ecx + 0x8E0);
    eax = ecx + 0x8E0;
    _fb = (uint32_t)(0x1F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1F8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0001A252u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001A24Fu); } /* indirect call */
    }

loc_0001A252: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001A260
 * Original: 0x0001A260 - 0x0001A2AB (75 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001A260: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x8E0);
    edx = edi + 0x88;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = edi + 0x8E0;
    edx = edi + 0x54;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0001A27Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001A27Bu); } /* indirect call */
    }

loc_0001A27E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001A280: ;
    eax = MEM32(edi + 0xAB0);
    ecx = eax + esi;
    eax = MEM32(ecx + 0x190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A298; /* je: equal / zero */

loc_0001A293: ;
    PUSH32(esp, 0x0001A298u); RECOMP_ABI_CALL(0x00034760u, sub_00034760); /* call 0x00034760 */

loc_0001A298: ;
    _fb = (uint32_t)(0x4E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4E8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1D70 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001A280; /* jl: less (signed <) */

loc_0001A2A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001A2B0
 * Original: 0x0001A2B0 - 0x0001A2E6 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001A2B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A2C5; /* je: equal / zero */

loc_0001A2BD: ;
    PUSH32(esp, 0x0001A2C2u); RECOMP_ABI_CALL(0x00028B70u, sub_00028B70); /* call 0x00028B70 */

loc_0001A2C2: ;
    PUSH32(esp, eax);
    goto loc_0001A2C7;

loc_0001A2C5: ;
    PUSH32(esp, 0);

loc_0001A2C7: ;
    ecx = esi + 0xFD4;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1008);
    edx = esi + 0x88;
    eax = esi + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001A2E4u); RECOMP_ABI_CALL(0x000FC9D0u, sub_000FC9D0); /* call 0x000FC9D0 */

loc_0001A2E4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001A2F0
 * Original: 0x0001A2F0 - 0x0001A2FC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A2F0(void)
{

loc_0001A2F0: ;
    ecx = MEM32(ecx + 0xEF4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0001A2FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001A2F8u); } /* indirect call */
    }

loc_0001A2FB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001A300
 * Original: 0x0001A300 - 0x0001A31D (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001A300: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x0001A30Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001A308u); } /* indirect call */
    }

loc_0001A30B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A31B; /* jne: not equal / not zero */

loc_0001A30F: ;
    ecx = MEM32(esi + 0xEF4);
    edx = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x18)); return; /* indirect tail jmp */

loc_0001A31B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001A320
 * Original: 0x0001A320 - 0x0001A33D (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001A320: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x0001A32Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001A328u); } /* indirect call */
    }

loc_0001A32B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A33B; /* jne: not equal / not zero */

loc_0001A32F: ;
    ecx = MEM32(esi + 0xEF4);
    edx = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x20)); return; /* indirect tail jmp */

loc_0001A33B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001A340
 * Original: 0x0001A340 - 0x0001A3EE (174 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001A340: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x4C;
    MEM32(esi + 0x1DC) = ebx;
    MEM32(esi + 0x1E0) = ebx;
    MEM32(esi + 0x1E4) = ebx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0001A365u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001A362u); } /* indirect call */
    }

loc_0001A365: ;
    _fa = (uint32_t)(MEM32(esi + 0x654)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x654), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001A3E9; /* jle: less or equal (signed <=) */

loc_0001A36D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001A371: ;
    eax = MEM32(esi + 0x650);
    ecx = MEM32(eax + ebp + 0xBC);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A3C9; /* je: equal / zero */

loc_0001A384: ;
    edi = MEM32(eax + 0xE4);
    eax = MEM32(0x1D98D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A3B4; /* jne: not equal / not zero */

loc_0001A393: ;
    PUSH32(esp, 0xB64);
    PUSH32(esp, 0x0001A39Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001A39D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A3AD; /* je: equal / zero */

loc_0001A3A4: ;
    ecx = eax;
    PUSH32(esp, 0x0001A3ABu); RECOMP_ABI_CALL(0x0008FB90u, sub_0008FB90); /* call 0x0008FB90 */

loc_0001A3AB: ;
    goto loc_0001A3AF;

loc_0001A3AD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001A3AF: ;
    MEM32(0x1D98D4) = eax;

loc_0001A3B4: ;
    edx = MEM32(esi + 0xF14);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x5C);
    ecx = edi + eax + 0x154;
    MEM32(edx + ebx * 4) = ecx;
    goto loc_0001A3D6;

loc_0001A3C9: ;
    eax = MEM32(esi + 0xF14);
    MEM32(eax + ebx * 4) = 0;

loc_0001A3D6: ;
    eax = MEM32(esi + 0x654);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x114;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001A371; /* jl: less (signed <) */

loc_0001A3E7: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0001A3E9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001A3F0
 * Original: 0x0001A3F0 - 0x0001A4CA (218 bytes, 74 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A3F0(void)
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

loc_0001A3F0: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = edi + 0x4C;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x748) = ebp;
    MEM32(ecx + 0x74C) = ebp;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0001A412u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001A40Fu); } /* indirect call */
    }

loc_0001A412: ;
    eax = MEM32(edi + 0x48);
    esi = MEM32(edi + 0x208);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    ebx = MEM32(eax + 0x44);
    MEM32(edi + 0xF74) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0001A464; /* je: equal / zero */

loc_0001A428: ;
    goto loc_0001A430;

    /* nop */

loc_0001A430: ;
    ecx = MEM32(edi + 0xEE8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001A43Cu); RECOMP_ABI_CALL(0x000A4850u, sub_000A4850); /* call 0x000A4850 */

loc_0001A43C: ;
    ecx = MEM32(esi + 0x5C);
    edx = MEM32(esi + 0x78);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0001A44Fu); RECOMP_ABI_CALL(0x0002AA10u, sub_0002AA10); /* call 0x0002AA10 */

loc_0001A44F: ;
    fp_push(MEMF(edi + 0xF74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(edi + 0xF74) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A430; /* jne: not equal / not zero */

loc_0001A464: ;
    _fa = (uint32_t)(MEM32(edi + 0x654)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x654), ebp (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0001A4B6; /* jle: less or equal (signed <=) */

loc_0001A470: ;
    ecx = MEM32(edi + 0x650);
    esi = MEM32(ecx + ebp + 0xB0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A49D; /* je: equal / zero */

loc_0001A481: ;
    edx = MEM32(esi + 0x64);
    eax = MEM32(esi + 0x80);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi + 0x3C;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0001A497u); RECOMP_ABI_CALL(0x0002AA10u, sub_0002AA10); /* call 0x0002AA10 */

loc_0001A497: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001A481; /* jne: not equal / not zero */

loc_0001A49D: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(edi + 0x654);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x114;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0001A470; /* jl: less (signed <) */

loc_0001A4B6: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0001A4C2u); RECOMP_ABI_CALL(0x0001A080u, sub_0001A080); /* call 0x0001A080 */

loc_0001A4C2: ;
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
 * sub_0001A4D0
 * Original: 0x0001A4D0 - 0x0001A509 (57 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001A4D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x4C);
    ecx = edi + 0x4C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0001A4DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001A4DAu); } /* indirect call */
    }

loc_0001A4DD: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0001A4E0: ;
    ecx = MEM32(edi + 0xAB0);
    eax = MEM32(ecx + esi + 0x190);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A4F8; /* je: equal / zero */

loc_0001A4F3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0001A4F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001A4F5u); } /* indirect call */
    }

loc_0001A4F8: ;
    _fb = (uint32_t)(0x4E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4E8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1D70 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001A4E0; /* jl: less (signed <) */

loc_0001A506: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001A510
 * Original: 0x0001A510 - 0x0001A58E (126 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001A510: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x74);
    esi = ecx;
    PUSH32(esp, 0x0001A51Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001A51A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A52A; /* je: equal / zero */

loc_0001A521: ;
    ecx = eax;
    PUSH32(esp, 0x0001A528u); RECOMP_ABI_CALL(0x00100B70u, sub_00100B70); /* call 0x00100B70 */

loc_0001A528: ;
    goto loc_0001A52C;

loc_0001A52A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001A52C: ;
    MEM32(esi + 0xF00) = eax;
    MEM32(eax) = 1;
    eax = MEM32(esi + 0xF00);
    MEM32(eax + 4) = 1;
    ecx = MEM32(esi + 0xF00);
    eax = 0x3E99999A;
    MEM32(ecx + 0x2C) = eax;
    edx = MEM32(esi + 0xF00);
    MEM32(edx + 0x30) = eax;
    ecx = MEM32(esi + 0xF00);
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0xF00);
    MEM32(edx + 0x28) = 0x3F800000;
    eax = MEM32(esi + 0xF00);
    MEM32(eax + 0x20) = 0x41A00000;
    ecx = MEM32(esi + 0xF00);
    MEM32(ecx + 0x24) = 0x40C90FDB;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001A590
 * Original: 0x0001A590 - 0x0001A5AE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001A590: ;
    eax = MEM32(ecx + 0xAB0);
    edx = MEM32(eax + 0x1A18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(ecx + 0xEE0);
    if (CMP_EQ(_fa, _fb)) goto loc_0001A5AA; /* je: equal / zero */

loc_0001A5A6: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0001A5AA: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001A5B0
 * Original: 0x0001A5B0 - 0x0001A716 (358 bytes, 92 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A5B0(void)
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

loc_0001A5B0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x100C));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A6A8; /* je: equal / zero */

loc_0001A5C7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0001A5CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001A5C9u); } /* indirect call */
    }

loc_0001A5CC: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0001A5D6u); RECOMP_ABI_CALL(0x000CE7E0u, sub_000CE7E0); /* call 0x000CE7E0 */

loc_0001A5D6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0001A5DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001A5DAu); } /* indirect call */
    }

loc_0001A5DD: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1060)); /* fadd dword ptr [esi + 0x1060] */
    ecx = esp + 0x14;
    fp_push(MEMF(eax + 4)); /* fld float */
    edx = esp + 0x24;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x105C)); /* fadd dword ptr [esi + 0x105c] */
    fp_push(MEMF(esi + 0x1058)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    eax = esi + 0x1064;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001A619u); RECOMP_ABI_CALL(0x00019370u, sub_00019370); /* call 0x00019370 */

loc_0001A619: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x4C;
    PUSH32(esp, 0x0001A62Au); RECOMP_ABI_CALL(0x000D18F0u, sub_000D18F0); /* call 0x000D18F0 */

loc_0001A62A: ;
    SET_LO8(ecx, MEM8(0x1C3E5C));
    MEM8(esi + 0x100C) = LO8(ecx);
    MEM8(esi + 0x100D) = 0xFF;
    MEM32(esi + 0x1074) = edi;
    MEM32(esi + 0x1060) = edi;
    MEM32(esi + 0x105C) = edi;
    MEM32(esi + 0x1058) = edi;
    MEM32(esi + 0x1064) = edi;
    MEM32(esi + 0x1068) = edi;
    MEM32(esi + 0x106C) = edi;
    eax = 0x3F800000;
    MEM32(esi + 0x1070) = eax;
    MEM32(esi + 0x1034) = eax;
    MEM32(esi + 0x1038) = edi;
    MEM32(esi + 0x103C) = edi;
    MEM32(esi + 0x1040) = edi;
    MEM32(esi + 0x1044) = eax;
    MEM32(esi + 0x1048) = edi;
    MEM32(esi + 0x104C) = edi;
    MEM32(esi + 0x1050) = edi;
    MEM32(esi + 0x1054) = eax;

loc_0001A6A8: ;
    MEM32(esi + 0xFC8) = 1;
    eax = MEM32(esi + 0xA38);
    edx = MEM32(esi + 0xA44);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + eax + -16;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 8) = eax;
    ecx = MEM32(esi + 0xA38);
    eax = MEM32(esi + 0xA44);
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    edx = MEM32(ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001A70Eu); RECOMP_ABI_CALL(0x00026F20u, sub_00026F20); /* call 0x00026F20 */

loc_0001A70E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001A720
 * Original: 0x0001A720 - 0x0001A799 (121 bytes, 30 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0001A720(void)
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

loc_0001A720: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x48);
    MEM32(ecx + 0xEC8) = 0;
    edx = MEM32(eax + 0x44);
    eax = MEM32(edx + 0x2E0);
    eax = MEM32(eax + 0x108);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xA44);
    ecx = MEM32(ecx + 0xA38);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi + ecx + -16;
    esi = MEM32(0x1AF04C);
    MEM32(ecx + 0xC) = esi;
    fp_push(MEMF(edx + 0x280)); /* fld float */
    eax = MEM32(eax + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xF0)); /* fadd dword ptr [eax + 0xf0] */
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(edx + 0x284)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(edx + 0x288)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 8) = edx;
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_0001A7A0
 * Original: 0x0001A7A0 - 0x0001A879 (217 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A7A0(void)
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

loc_0001A7A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x1DC340);
    eax = MEM32(eax + 0x18);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10BC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10BC), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001A7C6; /* jne: not equal / not zero */

loc_0001A7B4: ;
    ecx = MEM32(esi + 0x10C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x1D9FB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x1D9FB4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001A876; /* je: equal / zero */

loc_0001A7C6: ;
    MEM32(esi + 0x10BC) = eax;
    edx = MEM32(0x1D9FB4);
    MEM32(esi + 0x10C0) = edx;
    eax = MEM32(0x1D9FB8);
    edx = MEM32(eax + 0x50);
    ecx = MEM32(0x1D9FB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(esi + 0x1008);
    if (CMP_GE(_fas, _fbs)) goto loc_0001A835; /* jge: greater or equal (signed >=) */

loc_0001A7F0: ;
    edx = MEM32(eax + 0x70);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(edx + ecx * 4);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    MEM32(esi + 0x10C4) = ebx;
    ecx = MEM32(eax + 0x68);
    edx = MEM32(0x1D9FB4);
    fp_push(MEMF(ecx + edx * 4)); /* fld float */
    POP32(esp, ebx);
    MEMF(esi + 0x10D0) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(eax + 0x74);
    ecx = MEM32(0x1D9FB4);
    _fa = (uint32_t)(MEM32(eax + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001A862; /* jne: not equal / not zero */

loc_0001A829: ;
    MEM32(esi + 0x10C4) = 0;
    goto loc_0001A862;

loc_0001A835: ;
    edx = MEM32(eax + 0x84);
    ecx = esi + 0x10D0;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x4C)) >> 32) & 1);
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x1DE498;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x0001A855u); RECOMP_ABI_CALL(0x000F9C40u, sub_000F9C40); /* call 0x000F9C40 */

loc_0001A855: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esi + 0x10C4) = eax;

loc_0001A862: ;
    eax = MEM32(esi + 0x10C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001A876; /* je: equal / zero */

loc_0001A86C: ;
    MEM32(esi + 0x10C8) = 1;

loc_0001A876: ;
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
 * sub_0001A880
 * Original: 0x0001A880 - 0x0001A957 (215 bytes, 50 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0001A880(void)
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

loc_0001A880: ;
    eax = MEM32(ecx + 0x1104);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F7FFFFF (32-bit) */
    eax = MEM32(ecx + 0x1008);
    if (CMP_EQ(_fa, _fb)) goto loc_0001A923; /* je: equal / zero */

loc_0001A89A: ;
    fp_push(MEMF(ecx + 0x1104)); /* fld float */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x1CF1D8)); /* fdiv dword ptr [0x1cf1d8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91D4)); /* fmul dword ptr [0x1c91d4] */
    fp_push(MEMF(0x1CF1D4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(0x1CF1D8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1CF1DC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx + 0x10F4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x10FC) = eax;
    MEMF(ecx + 0x10F8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x1008);
    fp_push(MEMF(edx + 0x84)); /* fld float */
    fp_push(MEMF(0x1AF32C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x1CF1D8)); /* fdiv dword ptr [0x1cf1d8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ecx + 0x1100) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0001A923: ;
    edx = MEM32(eax + 0x4C);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x10F4) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x10F8) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x10FC) = eax;
    edx = MEM32(ecx + 0x1008);
    fp_push(MEMF(edx + 0x84)); /* fld float */
    MEMF(ecx + 0x1100) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_0001A960
 * Original: 0x0001A960 - 0x0001A9E2 (130 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A960(void)
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

loc_0001A960: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x1D9FB8);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0xC2480000u;
    MEM32(esp + 0x10) = 0;
    ecx = MEM32(eax + 0x38);
    eax = MEM32(esi + 0x1008);
    ecx = MEM32(ecx + 0x24);
    PUSH32(esp, 0);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001A9A1u); RECOMP_ABI_CALL(0x000D37D0u, sub_000D37D0); /* call 0x000D37D0 */

loc_0001A9A1: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AEFE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1aefe4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0001A9BC; /* jnp: not parity */

loc_0001A9AE: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF334)); /* fmul dword ptr [0x1af334] */
    MEMF(esi + 0x1104) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0001A9C8;

loc_0001A9BC: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x1104) = 0x7F7FFFFF;

loc_0001A9C8: ;
    ecx = MEM32(0x1D9FB8);
    edx = MEM32(ecx + 0x38);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 0x34);
    MEM32(esi + 0x1108) = ecx;
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
 * sub_0001A9F0
 * Original: 0x0001A9F0 - 0x0001AAC6 (214 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A9F0(void)
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

loc_0001A9F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x110C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001AA90; /* je: equal / zero */

loc_0001AA01: ;
    eax = MEM32(0x1D8930);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001AA2B; /* jne: not equal / not zero */

loc_0001AA0A: ;
    PUSH32(esp, 0x560);
    PUSH32(esp, 0x0001AA14u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001AA14: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001AA24; /* je: equal / zero */

loc_0001AA1B: ;
    ecx = eax;
    PUSH32(esp, 0x0001AA22u); RECOMP_ABI_CALL(0x000735D0u, sub_000735D0); /* call 0x000735D0 */

loc_0001AA22: ;
    goto loc_0001AA26;

loc_0001AA24: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001AA26: ;
    MEM32(0x1D8930) = eax;

loc_0001AA2B: ;
    fp_push(MEMF(eax + 0x54C)); /* fld float */
    MEMF(esi + 0x834) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x1D8930);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001AA61; /* jne: not equal / not zero */

loc_0001AA40: ;
    PUSH32(esp, 0x560);
    PUSH32(esp, 0x0001AA4Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001AA4A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001AA5A; /* je: equal / zero */

loc_0001AA51: ;
    ecx = eax;
    PUSH32(esp, 0x0001AA58u); RECOMP_ABI_CALL(0x000735D0u, sub_000735D0); /* call 0x000735D0 */

loc_0001AA58: ;
    goto loc_0001AA5C;

loc_0001AA5A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001AA5C: ;
    MEM32(0x1D8930) = eax;

loc_0001AA61: ;
    fp_push(MEMF(eax + 0x550)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x1114) - fp_top()); /* fsubr dword ptr [esi + 0x1114] */
    MEMF(esi + 0x1114) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001AA9A; /* jp: parity */

loc_0001AA84: ;
    MEM32(esi + 0x1114) = 0;
    goto loc_0001AA9A;

loc_0001AA90: ;
    MEM32(esi + 0x834) = 0x3F800000;

loc_0001AA9A: ;
    eax = MEM32(esi + 0x1110);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001AAB8; /* je: equal / zero */

loc_0001AAA4: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1118)); /* fadd dword ptr [esi + 0x1118] */
    MEMF(esi + 0x1118) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0001AAB8: ;
    MEM32(esi + 0x1118) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001AAD0
 * Original: 0x0001AAD0 - 0x0001AB49 (121 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001AAD0: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0001AAE1; /* jne: not equal / not zero */

loc_0001AADB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_0001AAE1: ;
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 0x1C0);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001AB15; /* je: equal / zero */

loc_0001AAF9: ;
    /* nop */

loc_0001AB00: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001AB15; /* jne: not equal / not zero */

loc_0001AB05: ;
    MEM32(eax + 0x5C) = MEM32(eax + 0x5C) | 1;
    _fa = (uint32_t)(MEM32(eax + 0x5C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001AB1D; /* je: equal / zero */

loc_0001AB0E: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001AB00; /* jne: not equal / not zero */

loc_0001AB15: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_0001AB1D: ;
    ecx = MEM32(ebx + 0x48);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x48);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001AB2Fu); RECOMP_ABI_CALL(0x00025B20u, sub_00025B20); /* call 0x00025B20 */

loc_0001AB2F: ;
    edx = MEM32(edi + 0x48);
    ecx = MEM32(ebx + 0x48);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001AB41u); RECOMP_ABI_CALL(0x00025B20u, sub_00025B20); /* call 0x00025B20 */

loc_0001AB41: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0001AB50
 * Original: 0x0001AB50 - 0x0001AB5A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AB50(void)
{

loc_0001AB50: ;
    eax = MEM32(ecx + 0x1120);
    eax = MEM32(eax + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_0001AB60
 * Original: 0x0001AB60 - 0x0001AB6A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AB60(void)
{

loc_0001AB60: ;
    eax = MEM32(ecx + 0x1120);
    eax = MEM32(eax + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_0001AB70
 * Original: 0x0001AB70 - 0x0001AB7D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AB70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0001AB70: ;
    eax = MEM32(ecx + 0x1120);
    fp_push(MEMF(eax + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(MEMF(ecx + 0x58) - fp_top()); /* fsubr dword ptr [ecx + 0x58] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001AB80
 * Original: 0x0001AB80 - 0x0001ABA5 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0001AB80(void)
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

loc_0001AB80: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2BC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2BC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001ABA2; /* jne: not equal / not zero */

loc_0001AB89: ;
    fp_push(MEMF(ecx + 0x688)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF338)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af338] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001ABA2; /* jp: parity */

loc_0001AB9C: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0001ABA2: ;
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
 * sub_0001ABB0
 * Original: 0x0001ABB0 - 0x0001AFB1 (1025 bytes, 275 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001ABB0(void)
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

loc_0001ABB0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x48);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x44);
    eax = MEM32(ebp + 0x278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0001ACF6; /* jne: not equal / not zero */

loc_0001ABCD: ;
    ecx = MEM32(ebp + 0x2E0);
    edx = MEM32(ebx + 0xA44);
    esi = MEM32(ecx + 0x108);
    eax = MEM32(ebx + 0xA38);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + eax + -16;
    edx = MEM32(0x1AF04C);
    MEM32(ecx + 0xC) = edx;
    fp_push(MEMF(ebp + 0x280)); /* fld float */
    eax = MEM32(esi + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xF0)); /* fadd dword ptr [eax + 0xf0] */
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ebp + 0x284)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(ebp + 0x288)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 8) = eax;
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebp;
    PUSH32(esp, 0x0001AC34u); RECOMP_ABI_CALL(0x00028A40u, sub_00028A40); /* call 0x00028A40 */

loc_0001AC34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebx + 0xA44);
    if (CMP_EQ(_fa, _fb)) goto loc_0001ACD2; /* je: equal / zero */

loc_0001AC42: ;
    ecx = MEM32(ebx + 0xA38);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x1AF050);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esi + 0xC);
    fp_push(MEMF(ecx + 0x9CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x87C)); /* fadd dword ptr [ecx + 0x87c] */
    fp_push(MEMF(ecx + 0x880)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x9D0)); /* fadd dword ptr [ecx + 0x9d0] */
    fp_push(MEMF(ecx + 0x884)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x9D4)); /* fadd dword ptr [ecx + 0x9d4] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x280)); /* fadd dword ptr [ebp + 0x280] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x284)); /* fadd dword ptr [ebp + 0x284] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x288)); /* fadd dword ptr [ebp + 0x288] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0001ACF6;

loc_0001ACD2: ;
    ecx = MEM32(ebx + 0xA38);
    edx = MEM32(ecx);
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;

loc_0001ACF6: ;
    edi = ebx + 0xFD4;
    esi = ebx + 0xFF0;
    ecx = 6;
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
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0xFEC) = edi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0001AD20;

    /* nop */
    /* nop */

loc_0001AD20: ;
    edx = MEM32(ebx + 0xEC4);
    eax = MEM32(edx + edi + 0x458);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001AE27; /* je: equal / zero */

loc_0001AD35: ;
    eax = MEM32(ebx + 0x650);
    edx = MEM32(eax + esi + 0x38);
    ecx = MEM32(eax + esi + 0x34);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 0x3C);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x50);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, eax);
    ecx = ebx + 0xFD4;
    PUSH32(esp, 0x0001AD68u); RECOMP_ABI_CALL(0x00019580u, sub_00019580); /* call 0x00019580 */

loc_0001AD68: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001AD8Du); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_0001AD8D: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) / fp_top()); /* fdivr dword ptr [0x1c91d0] */
    ecx = MEM32(ebx + 0x650);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + esi + 0x50)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
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
    PUSH32(esp, 0x0001AE0Du); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_0001AE0D: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0xFEC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebx + 0xfec] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001AE25; /* jne: not equal / not zero */

loc_0001AE1D: ;
    MEMF(ebx + 0xFEC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0001AE27;

loc_0001AE25: ;
    fp_pop(); /* fstp st(0) */

loc_0001AE27: ;
    _fb = (uint32_t)(0x45C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x45C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x114;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1170) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1170 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001AD20; /* jl: less (signed <) */

loc_0001AE3F: ;
    eax = MEM32(ebp + 0x278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001AEDF; /* jne: not equal / not zero */

loc_0001AE4D: ;
    fp_push(MEMF(ebp + 0x504)); /* fld float */
    edx = MEM32(ebp + 0x508);
    fp_push(MEMF(ebp + 0x510)); /* fld float */
    eax = MEM32(ebp + 0x514);
    ecx = MEM32(ebp + 0x50C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x280)); /* fadd dword ptr [ebp + 0x280] */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ebp + 0x518);
    MEM32(esp + 0x2C) = eax;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x30) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x280)); /* fadd dword ptr [ebp + 0x280] */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = ebx + 0xFD4;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x284)); /* fadd dword ptr [ebp + 0x284] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x284)); /* fadd dword ptr [ebp + 0x284] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x288)); /* fadd dword ptr [ebp + 0x288] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x288)); /* fadd dword ptr [ebp + 0x288] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001AEDFu); RECOMP_ABI_CALL(0x00019480u, sub_00019480); /* call 0x00019480 */

loc_0001AEDF: ;
    eax = MEM32(ebx + 0x1120);
    fp_push(MEMF(ebx + 0x54)); /* fld float */
    ecx = MEM32(ebx + 0x5C);
    fp_push(MEMF(ebx + 0x58)); /* fld float */
    edx = MEM32(ebx + 0xFEC);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax);
    MEM32(eax + 0x10) = ecx;
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 4);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(eax + 8);
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(eax + 0x18) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xC) = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0001AF30: ;
    eax = MEM32(ebx + 0xEC4);
    eax = MEM32(eax + ecx + 0x18);
    fp_push(MEMF(eax + 8)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax + 8);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ebx + 0x650);
    fp_push(MEMF(eax + edx + 0x50)); /* fld float */
    eax = MEM32(ebx + 0x1120);
    eax = MEM32(eax + 0x20);
    edi = MEM32(eax + esi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    MEM32(eax + 0x10) = edi;
    edi = MEM32(eax + 4);
    MEM32(eax + 0x14) = edi;
    edi = MEM32(eax + 8);
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x18) = edi;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edi = MEM32(esp + 0x24);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edi;
    edi = MEM32(esp + 0x28);
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x45C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x45C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x114;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1170) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1170 (32-bit) */
    MEM32(eax + 0xC) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0001AF30; /* jl: less (signed <) */

loc_0001AFA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001AFC0
 * Original: 0x0001AFC0 - 0x0001AFE1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AFC0(void)
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

loc_0001AFC0: ;
    ecx = MEM32(ecx + 0x48);
    eax = MEM32(ecx + 0x44);
    fp_push(MEMF(eax + 0x4E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001AFE0; /* jne: not equal / not zero */

loc_0001AFD9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0001AFE0u); RECOMP_ABI_CALL(0x000264C0u, sub_000264C0); /* call 0x000264C0 */

loc_0001AFE0: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001AFF0
 * Original: 0x0001AFF0 - 0x0001B008 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AFF0(void)
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

loc_0001AFF0: ;
    ecx = MEM32(esp + 4);
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    fp_push(MEMF(ecx)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001B007; /* jp: parity */

loc_0001B005: ;
    fp_top() = -fp_top(); /* fchs */

loc_0001B007: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001B010
 * Original: 0x0001B010 - 0x0001B06A (90 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001B010: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001B026u); RECOMP_ABI_CALL(0x000CE660u, sub_000CE660); /* call 0x000CE660 */

loc_0001B026: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001B061; /* je: equal / zero */

loc_0001B02D: ;
    edx = MEM32(eax);
    MEM32(esi) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 8) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = edx;
    ecx = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = ecx;
    edx = MEM32(eax + 0x20);
    MEM32(esi + 0x20) = edx;

loc_0001B061: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001B070
 * Original: 0x0001B070 - 0x0001B124 (180 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B070(void)
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

loc_0001B070: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x48);
    fp_push(MEMF(esi + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
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
    PUSH32(esp, 0x0001B09Fu); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_0001B09F: ;
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x1C91D0)); /* fld float */
    ecx = MEM32(esp + 0x48);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x48)); /* fdiv dword ptr [esp + 0x48] */
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001B0E5u); RECOMP_ABI_CALL(0x000CEB00u, sub_000CEB00); /* call 0x000CEB00 */

loc_0001B0E5: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x44);
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
    eax = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001B130
 * Original: 0x0001B130 - 0x0001B18A (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001B130: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x1DAEB4);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001B147u); RECOMP_ABI_CALL(0x000CE660u, sub_000CE660); /* call 0x000CE660 */

loc_0001B147: ;
    ecx = MEM32(esp + 0x38);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001B186; /* je: equal / zero */

loc_0001B152: ;
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

loc_0001B186: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001B190
 * Original: 0x0001B190 - 0x0001B1BA (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001B190: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AF218;
    PUSH32(esp, 0x0001B19Eu); RECOMP_ABI_CALL(0x000D0730u, sub_000D0730); /* call 0x000D0730 */

loc_0001B19E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x1AF200;
    if (TEST_Z(_fa, _fb)) goto loc_0001B1B4; /* je: equal / zero */

loc_0001B1AB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001B1B1u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001B1B1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001B1B4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001B1C0
 * Original: 0x0001B1C0 - 0x0001B1EA (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001B1C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AF230;
    PUSH32(esp, 0x0001B1CEu); RECOMP_ABI_CALL(0x000D0730u, sub_000D0730); /* call 0x000D0730 */

loc_0001B1CE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x1AF200;
    if (TEST_Z(_fa, _fb)) goto loc_0001B1E4; /* je: equal / zero */

loc_0001B1DB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001B1E1u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001B1E1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001B1E4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001B1F0
 * Original: 0x0001B1F0 - 0x0001B227 (55 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001B1F0: ;
    eax = MEM32(0x1DE418);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001B226; /* jne: not equal / not zero */

loc_0001B1F9: ;
    ecx = MEM32(0x1DE434);
    eax = 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001B21C; /* je: equal / zero */

loc_0001B208: ;
    MEM32(0x1A50F0) = MEM32(0x1A50F0) | 0x800;
    _fa = (uint32_t)(MEM32(0x1A50F0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1A2EE0) = eax;
    MEM32(0x1DE434) = eax;

loc_0001B21C: ;
    MEM32(0x1DE418) = 1;

loc_0001B226: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001B230
 * Original: 0x0001B230 - 0x0001B24E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001B230: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0001B238u); RECOMP_ABI_CALL(0x00019AB0u, sub_00019AB0); /* call 0x00019AB0 */

loc_0001B238: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001B248; /* je: equal / zero */

loc_0001B23F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001B245u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001B245: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001B248: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001B250
 * Original: 0x0001B250 - 0x0001B315 (197 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B250(void)
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

loc_0001B250: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0x3C);
    fp_push(MEMF(ecx + 0xA98)); /* fld float */
    eax = MEM32(ecx + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xA8C)); /* fsub dword ptr [ecx + 0xa8c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x54)); /* fmul dword ptr [eax + 0x54] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x58)); /* fmul dword ptr [eax + 0x58] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x5C)); /* fmul dword ptr [eax + 0x5c] */
    fp_push(MEMF(ecx + 0xA90)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xA84)); /* fsub dword ptr [ecx + 0xa84] */
    ecx = MEM32(esp + 0x20);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x3C)); /* fmul dword ptr [eax + 0x3c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x40)); /* fmul dword ptr [eax + 0x40] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x44)); /* fmul dword ptr [eax + 0x44] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001B2CA; /* jp: parity */

loc_0001B2C8: ;
    fp_top() = -fp_top(); /* fchs */

loc_0001B2CA: ;
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001B2F6; /* jp: parity */

loc_0001B2F4: ;
    fp_top() = -fp_top(); /* fchs */

loc_0001B2F6: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = esp + 0x20;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0001B30D; /* jnp: not parity */

loc_0001B309: ;
    eax = esp;

loc_0001B30D: ;
    fp_push(MEMF(eax)); /* fld float */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001B320
 * Original: 0x0001B320 - 0x0001B3E5 (197 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B320(void)
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

loc_0001B320: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0x3C);
    fp_push(MEMF(ecx + 0xA98)); /* fld float */
    eax = MEM32(ecx + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xA8C)); /* fsub dword ptr [ecx + 0xa8c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x54)); /* fmul dword ptr [eax + 0x54] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x58)); /* fmul dword ptr [eax + 0x58] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x5C)); /* fmul dword ptr [eax + 0x5c] */
    fp_push(MEMF(ecx + 0xA90)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xA84)); /* fsub dword ptr [ecx + 0xa84] */
    ecx = MEM32(esp + 0x20);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x3C)); /* fmul dword ptr [eax + 0x3c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x40)); /* fmul dword ptr [eax + 0x40] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x44)); /* fmul dword ptr [eax + 0x44] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x28)); /* fmul dword ptr [ecx + 0x28] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x24)); /* fmul dword ptr [ecx + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x20)); /* fmul dword ptr [ecx + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001B39A; /* jp: parity */

loc_0001B398: ;
    fp_top() = -fp_top(); /* fchs */

loc_0001B39A: ;
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x28)); /* fmul dword ptr [ecx + 0x28] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x24)); /* fmul dword ptr [ecx + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x20)); /* fmul dword ptr [ecx + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001B3C6; /* jp: parity */

loc_0001B3C4: ;
    fp_top() = -fp_top(); /* fchs */

loc_0001B3C6: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = esp + 0x20;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0001B3DD; /* jnp: not parity */

loc_0001B3D9: ;
    eax = esp;

loc_0001B3DD: ;
    fp_push(MEMF(eax)); /* fld float */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001B3F0
 * Original: 0x0001B3F0 - 0x0001B605 (533 bytes, 169 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B3F0(void)
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

loc_0001B3F0: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001B5FE; /* je: equal / zero */

loc_0001B3FF: ;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x68), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001B5FE; /* je: equal / zero */

loc_0001B409: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    PUSH32(esp, ebp);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x20)); /* fadd dword ptr [esi + 0x20] */
    PUSH32(esp, edi);
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x20) / fp_top()); /* fdivr dword ptr [esi + 0x20] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    if (TEST_Z(_fa, _fb)) goto loc_0001B474; /* je: equal / zero */

loc_0001B424: ;
    edi = ZX16(MEM16(esi + 4));
    PUSH32(esp, 0x0001B42Du); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0001B42D: ;
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX16(MEM16(esi + 2));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x60) = edi;
    ebp = ecx + -1;
    fp_push((double)SMEM32(esp + 0x60)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_G(_fas, _fbs)) goto loc_0001B4A0; /* jg: greater (signed >) */

loc_0001B44E: ;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x68), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001B464; /* jne: not equal / not zero */

loc_0001B454: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 0x68) = 2;
    POP32(esp, esi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0001B464: ;
    ecx = esi;
    PUSH32(esp, 0x0001B46Bu); RECOMP_ABI_CALL(0x00019E10u, sub_00019E10); /* call 0x00019E10 */

loc_0001B46B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0001B474: ;
    edi = ZX16(MEM16(esi + 2));
    PUSH32(esp, 0x0001B47Du); RECOMP_ABI_CALL(0x0012B278u, sub_0012B278); /* call 0x0012B278 */

loc_0001B47D: ;
    ecx = eax;
    eax = ZX16(MEM16(esi + 4));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x60) = edx;
    ebp = ecx + 1;
    fp_push((double)SMEM32(esp + 0x60)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001B44E; /* jge: greater or equal (signed >=) */

loc_0001B4A0: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x1D3ED0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001B4B7u); RECOMP_ABI_CALL(0x00019C00u, sub_00019C00); /* call 0x00019C00 */

loc_0001B4B7: ;
    edx = (uint32_t)(int32_t)SMEM8(esi);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(0x1D3ED0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001B4CEu); RECOMP_ABI_CALL(0x00019C00u, sub_00019C00); /* call 0x00019C00 */

loc_0001B4CE: ;
    _fa = (uint32_t)(MEM8(esi + 6)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 6), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001B50A; /* je: equal / zero */

loc_0001B4D4: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    goto loc_0001B512;

loc_0001B50A: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_push(MEMF(esp + 0x3C)); /* fld float */

loc_0001B512: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x48)); /* fsub dword ptr [esp + 0x48] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x60)); /* fmul dword ptr [esp + 0x60] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x60)); /* fmul dword ptr [esp + 0x60] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x60)); /* fmul dword ptr [esp + 0x60] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x40)); /* fadd dword ptr [esp + 0x40] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x48)); /* fadd dword ptr [esp + 0x48] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    MEMF(esi + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x54) = eax;
    eax = esi + 0x58;
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x50)); /* fsub dword ptr [esp + 0x50] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x54)); /* fsub dword ptr [esp + 0x54] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x58)); /* fsub dword ptr [esp + 0x58] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x64)); /* fmul dword ptr [esp + 0x64] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x64)); /* fmul dword ptr [esp + 0x64] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x64)); /* fmul dword ptr [esp + 0x64] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x64)); /* fmul dword ptr [esp + 0x64] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x50)); /* fadd dword ptr [esp + 0x50] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x54)); /* fadd dword ptr [esp + 0x54] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x58)); /* fadd dword ptr [esp + 0x58] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    ecx = MEM32(esp + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    MEM32(eax + 8) = ecx;
    ecx = esi + 0x28;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x34);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0001B5FCu); RECOMP_ABI_CALL(0x000CEA20u, sub_000CEA20); /* call 0x000CEA20 */

loc_0001B5FC: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0001B5FE: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001B610
 * Original: 0x0001B610 - 0x0001B6C3 (179 bytes, 45 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001B610: ;
    eax = MEM32(0x1DC420);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0001B643; /* jne: not equal / not zero */

loc_0001B620: ;
    eax = MEM32(0x1A50F0);
    eax = eax | 0x3000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1DC420) = 1;
    MEM32(0x1A50F0) = eax;
    MEM32(0x1A5294) = 1;

loc_0001B643: ;
    edx = esp + 8;
    ecx = 0xBF;
    MEM32(esp + 8) = 0x3F800000;
    MEM32(esp + 0xC) = 0x40000000;
    MEM32(esp + 0x10) = 0x41800000;
    MEM32(esp + 0x14) = 0x3F000000;
    PUSH32(esp, 0x0001B671u); RECOMP_ABI_CALL(0x001957C0u, sub_001957C0); /* call 0x001957C0 */

loc_0001B671: ;
    eax = MEM32(0x1D9FB4);
    ecx = MEM32(0x1D9FB8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001B682u); RECOMP_ABI_CALL(0x000A1780u, sub_000A1780); /* call 0x000A1780 */

loc_0001B682: ;
    ecx = MEM32(edi + 0x48);
    edx = MEM32(ecx + 0x44);
    esi = eax;
    eax = MEM32(edx + 0x278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001B6BB; /* jne: not equal / not zero */

loc_0001B694: ;
    SET_LO8(edx, MEM8(ecx + 0x54));
    SET_LO8(ecx, MEM8(0x1D9FB4));
    SET_LO8(edx, LO8(edx) >> LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001B6AF; /* je: equal / zero */

loc_0001B6A8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0001B6AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001B6ACu); } /* indirect call */
    }

loc_0001B6AF: ;
    ecx = MEM32(edi + 0x48);
    edx = MEM32(ecx + 0x44);
    MEM32(edx + 0x28C) = eax;

loc_0001B6BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001B6D0
 * Original: 0x0001B6D0 - 0x0001B7B0 (224 bytes, 59 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B6D0(void)
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

loc_0001B6D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0001B6DDu); RECOMP_ABI_CALL(0x00019B90u, sub_00019B90); /* call 0x00019B90 */

loc_0001B6DD: ;
    ecx = MEM32(edi + 0xEF0);
    fp_push(MEMF(ecx + 0x410)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xE4)); /* fadd dword ptr [eax + 0xe4] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AEB20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1aeb20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001B706; /* jp: parity */

loc_0001B6FC: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1AEB20)); /* fld float */
    goto loc_0001B71B;

loc_0001B706: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001B71B; /* jne: not equal / not zero */

loc_0001B713: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1C91D0)); /* fld float */

loc_0001B71B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    edx = esp + 0xC;
    ecx = 0xBF;
    MEM32(esp + 0x10) = 0x40000000;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x14) = 0x43000000;
    MEM32(esp + 0x18) = 0x3F000000;
    PUSH32(esp, 0x0001B74Bu); RECOMP_ABI_CALL(0x001957C0u, sub_001957C0); /* call 0x001957C0 */

loc_0001B74B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0001B750: ;
    edx = MEM32(edi + 0x48);
    _fa = (uint32_t)(MEM32(edx + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x38), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001B761; /* jne: not equal / not zero */

loc_0001B759: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x45C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x45C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001B798; /* je: equal / zero */

loc_0001B761: ;
    eax = MEM32(edi + 0xEC4);
    ecx = MEM32(eax + esi + 0x364);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001B798; /* je: equal / zero */

loc_0001B772: ;
    ecx = MEM32(edi + 0xEF0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0001B77Eu); RECOMP_ABI_CALL(0x000A5C80u, sub_000A5C80); /* call 0x000A5C80 */

loc_0001B77E: ;
    ecx = MEM32(edi + 0xEC4);
    edx = MEM32(ecx + esi + 0x368);
    ecx = ecx + esi + 0x364;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001B798u); RECOMP_ABI_CALL(0x000F9EA0u, sub_000F9EA0); /* call 0x000F9EA0 */

loc_0001B798: ;
    _fb = (uint32_t)(0x45C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x45C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1170) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1170 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001B750; /* jl: less (signed <) */

loc_0001B7A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0001B7B0
 * Original: 0x0001B7B0 - 0x0001BA05 (597 bytes, 148 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B7B0(void)
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

loc_0001B7B0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    esi = ecx;
    eax = MEM32(esi + 0x4C);
    ecx = esi + 0x4C;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0001B7C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001B7C6u); } /* indirect call */
    }

loc_0001B7C9: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0x3F800000;
    eax = esi + 0xF3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0xF18) = ebp;
    MEM32(esi + 0xF1C) = ebx;
    MEM32(esi + 0xF20) = ebx;
    MEM32(esi + 0xF24) = ebx;
    MEM32(esi + 0xF28) = ebp;
    MEM32(esi + 0xF2C) = ebx;
    MEM32(esi + 0xF30) = ebx;
    MEM32(esi + 0xF34) = ebx;
    MEM32(esi + 0xF38) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0001B844; /* je: equal / zero */

loc_0001B810: ;
    ecx = MEM32(edi);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(edi + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edi + 0xC);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(edi + 0x10);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(edi + 0x14);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(edi + 0x18);
    MEM32(eax + 0x18) = ecx;
    edx = MEM32(edi + 0x1C);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(edi + 0x20);
    MEM32(eax + 0x20) = ecx;

loc_0001B844: ;
    MEM32(esi + 0xAA0) = ebx;
    MEM32(esi + 0xAA8) = ebx;
    MEM32(esi + 0xAA4) = ebx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0001B860;

    /* nop */

loc_0001B860: ;
    edx = MEM32(esi + 0xAB0);
    eax = MEM32(edi + edx + 0x190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = edi + edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0001B879; /* je: equal / zero */

loc_0001B874: ;
    PUSH32(esp, 0x0001B879u); RECOMP_ABI_CALL(0x000345C0u, sub_000345C0); /* call 0x000345C0 */

loc_0001B879: ;
    _fb = (uint32_t)(0x4E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4E8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1D70 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001B860; /* jl: less (signed <) */

loc_0001B887: ;
    eax = MEM32(esi + 0x654);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001B900; /* jle: less or equal (signed <=) */

loc_0001B893: ;
    eax = esi + 0xF60;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = eax;

loc_0001B8A1: ;
    ecx = MEM32(esi + 0xEC4);
    edx = MEM32(esp + 0x18);
    eax = MEM32(ecx + edx + 0x458);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001B8DC; /* je: equal / zero */

loc_0001B8B8: ;
    eax = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    ebp = eax + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0001B8C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001B8C5u); } /* indirect call */
    }

loc_0001B8C8: ;
    eax = MEM32(esi + 0xF14);
    ecx = MEM32(esp + 0x14);
    MEM32(eax + edi * 4) = ebx;
    MEM32(ecx) = ebx;
    ebp = 0x3F800000;

loc_0001B8DC: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x654);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x45C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x45C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0001B8A1; /* jl: less (signed <) */

loc_0001B900: ;
    ecx = MEM32(esi + 0xF10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001B90F; /* je: equal / zero */

loc_0001B90A: ;
    PUSH32(esp, 0x0001B90Fu); RECOMP_ABI_CALL(0x000A2E80u, sub_000A2E80); /* call 0x000A2E80 */

loc_0001B90F: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0x0001B917u); RECOMP_ABI_CALL(0x00025F60u, sub_00025F60); /* call 0x00025F60 */

loc_0001B917: ;
    edx = MEM32(esi + 0x8E0);
    eax = esi + 0x88;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi + 0x8E0;
    eax = esi + 0x54;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0001B931u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001B92Eu); } /* indirect call */
    }

loc_0001B931: ;
    ecx = esi;
    PUSH32(esp, 0x0001B938u); RECOMP_ABI_CALL(0x0001A960u, sub_0001A960); /* call 0x0001A960 */

loc_0001B938: ;
    _fa = (uint32_t)(MEM32(esi + 0x1104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1104), 0x7F7FFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001B959; /* je: equal / zero */

loc_0001B944: ;
    ecx = MEM32(esi + 0x1008);
    fp_push(MEMF(ecx + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x1104)); /* fsub dword ptr [esi + 0x1104] */
    MEMF(esi + 0xF0C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001B959: ;
    fp_push(MEMF(esi + 0xF0C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xF08)); /* fsub dword ptr [esi + 0xf08] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xF08)); /* fadd dword ptr [esi + 0xf08] */
    MEMF(esi + 0xF08) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(edx, MEM8(0x1C3E5C));
    MEM8(esi + 0x100C) = LO8(edx);
    MEM8(esi + 0x100D) = 0xFF;
    MEM32(esi + 0x1074) = ebx;
    MEM32(esi + 0x1060) = ebx;
    MEM32(esi + 0x105C) = ebx;
    MEM32(esi + 0x1058) = ebx;
    MEM32(esi + 0x1064) = ebx;
    MEM32(esi + 0x1068) = ebx;
    MEM32(esi + 0x106C) = ebx;
    MEM32(esi + 0x1070) = ebp;
    MEM32(esi + 0x1034) = ebp;
    MEM32(esi + 0x1038) = ebx;
    MEM32(esi + 0x103C) = ebx;
    MEM32(esi + 0x1040) = ebx;
    MEM32(esi + 0x1044) = ebp;
    MEM32(esi + 0x1048) = ebx;
    MEM32(esi + 0x104C) = ebx;
    MEM32(esi + 0x1050) = ebx;
    MEM32(esi + 0x1054) = ebp;
    ecx = MEM32(esi + 0x1120);
    PUSH32(esp, 0x0001B9F5u); RECOMP_ABI_CALL(0x000FC4C0u, sub_000FC4C0); /* call 0x000FC4C0 */

loc_0001B9F5: ;
    eax = MEM32(esi + 0x1120);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 0x3C) = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001BA10
 * Original: 0x0001BA10 - 0x0001BC06 (502 bytes, 142 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BA10(void)
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

loc_0001BA10: ;
    SET_LO8(eax, MEM8(0x1D74F4));
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0001BA49; /* jne: not equal / not zero */

loc_0001BA22: ;
    ebx = MEM32(0x1D74F4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3F000000);
    ecx = 0x1D74F0;
    MEM32(0x1D74F4) = ebx;
    PUSH32(esp, 0x0001BA49u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0001BA49: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + 0x48);
    eax = MEM32(ecx + 0x254);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001BAAA; /* jne: not equal / not zero */

loc_0001BA59: ;
    edx = MEM32(esi + 0x4C);
    edi = esi + 0x4C;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0001BA64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001BA61u); } /* indirect call */
    }

loc_0001BA64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001BAAA; /* jne: not equal / not zero */

loc_0001BA69: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x0001BAAAu); RECOMP_ABI_CALL(0x000D0FC0u, sub_000D0FC0); /* call 0x000D0FC0 */

loc_0001BAAA: ;
    ebp = MEM32(esp + 0x50);
    edx = MEM32(esi + 0x4C);
    ecx = esi + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0001BAB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001BAB5u); } /* indirect call */
    }

loc_0001BAB8: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0001BAC0: ;
    eax = MEM32(esi + 0xAB0);
    ecx = edi + eax;
    eax = MEM32(ecx + 0x190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BAEA; /* je: equal / zero */

loc_0001BAD3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0001BAD9u); RECOMP_ABI_CALL(0x00035020u, sub_00035020); /* call 0x00035020 */

loc_0001BAD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001BAEA; /* jne: not equal / not zero */

loc_0001BADE: ;
    ecx = MEM32(esi + 0xEE8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0001BAEAu); RECOMP_ABI_CALL(0x0011E860u, sub_0011E860); /* call 0x0011E860 */

loc_0001BAEA: ;
    _fb = (uint32_t)(0x4E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4E8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1D70 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001BAC0; /* jl: less (signed <) */

loc_0001BAF9: ;
    eax = MEM32(esi + 0xAA8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BB34; /* je: equal / zero */

loc_0001BB05: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xAA4)); /* fadd dword ptr [esi + 0xaa4] */
    MEMF(esi + 0xAA4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF02C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af02c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001BB34; /* jne: not equal / not zero */

loc_0001BB22: ;
    MEM32(esi + 0xAA0) = ecx;
    MEM32(esi + 0xAA8) = ecx;
    MEM32(esi + 0xAA4) = ecx;

loc_0001BB34: ;
    PUSH32(esp, ebp);
    ecx = esi + 0x100C;
    PUSH32(esp, 0x0001BB40u); RECOMP_ABI_CALL(0x0001B3F0u, sub_0001B3F0); /* call 0x0001B3F0 */

loc_0001BB40: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0001BB47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001BB44u); } /* indirect call */
    }

loc_0001BB47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1DAEB4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1DAEB4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BB9D; /* je: equal / zero */

loc_0001BB4E: ;
    ecx = MEM32(eax);
    MEM32(0x1DAEB4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x1DAEB8) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x1DAEBC) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x1DAEC0) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(0x1DAEC4) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(0x1DAEC8) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(0x1DAECC) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(0x1DAED0) = edx;
    eax = MEM32(eax + 0x20);
    MEM32(0x1DAED4) = eax;

loc_0001BB9D: ;
    PUSH32(esp, 0x1DAEB4);
    ecx = esi + 0x1034;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    edi = esi + 0x1078;
    PUSH32(esp, 0x0001BBB9u); RECOMP_ABI_CALL(0x000CE660u, sub_000CE660); /* call 0x000CE660 */

loc_0001BBB9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BBF4; /* je: equal / zero */

loc_0001BBC0: ;
    ecx = MEM32(eax);
    MEM32(edi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(edi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = edx;
    eax = MEM32(eax + 0x20);
    MEM32(edi + 0x20) = eax;

loc_0001BBF4: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0001BBFCu); RECOMP_ABI_CALL(0x0001A9F0u, sub_0001A9F0); /* call 0x0001A9F0 */

loc_0001BBFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001BA18
 * Original: 0x0001BA18 - 0x0001BC10 (504 bytes, 150 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BA18(void)
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

loc_0001BA18: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0001BA49; /* jne: not equal / not zero */

loc_0001BA22: ;
    ebx = MEM32(0x1D74F4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3F000000);
    ecx = 0x1D74F0;
    MEM32(0x1D74F4) = ebx;
    PUSH32(esp, 0x0001BA49u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0001BA49: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + 0x48);
    eax = MEM32(ecx + 0x254);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001BAAA; /* jne: not equal / not zero */

loc_0001BA59: ;
    edx = MEM32(esi + 0x4C);
    edi = esi + 0x4C;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0001BA64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001BA61u); } /* indirect call */
    }

loc_0001BA64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001BAAA; /* jne: not equal / not zero */

loc_0001BA69: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x0001BAAAu); RECOMP_ABI_CALL(0x000D0FC0u, sub_000D0FC0); /* call 0x000D0FC0 */

loc_0001BAAA: ;
    ebp = MEM32(esp + 0x50);
    edx = MEM32(esi + 0x4C);
    ecx = esi + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0001BAB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001BAB5u); } /* indirect call */
    }

loc_0001BAB8: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0001BAC0: ;
    eax = MEM32(esi + 0xAB0);
    ecx = edi + eax;
    eax = MEM32(ecx + 0x190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BAEA; /* je: equal / zero */

loc_0001BAD3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0001BAD9u); RECOMP_ABI_CALL(0x00035020u, sub_00035020); /* call 0x00035020 */

loc_0001BAD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001BAEA; /* jne: not equal / not zero */

loc_0001BADE: ;
    ecx = MEM32(esi + 0xEE8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0001BAEAu); RECOMP_ABI_CALL(0x0011E860u, sub_0011E860); /* call 0x0011E860 */

loc_0001BAEA: ;
    _fb = (uint32_t)(0x4E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4E8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1D70 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001BAC0; /* jl: less (signed <) */

loc_0001BAF9: ;
    eax = MEM32(esi + 0xAA8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BB34; /* je: equal / zero */

loc_0001BB05: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xAA4)); /* fadd dword ptr [esi + 0xaa4] */
    MEMF(esi + 0xAA4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF02C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af02c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001BB34; /* jne: not equal / not zero */

loc_0001BB22: ;
    MEM32(esi + 0xAA0) = ecx;
    MEM32(esi + 0xAA8) = ecx;
    MEM32(esi + 0xAA4) = ecx;

loc_0001BB34: ;
    PUSH32(esp, ebp);
    ecx = esi + 0x100C;
    PUSH32(esp, 0x0001BB40u); RECOMP_ABI_CALL(0x0001B3F0u, sub_0001B3F0); /* call 0x0001B3F0 */

loc_0001BB40: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0001BB47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001BB44u); } /* indirect call */
    }

loc_0001BB47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1DAEB4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1DAEB4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BB9D; /* je: equal / zero */

loc_0001BB4E: ;
    ecx = MEM32(eax);
    MEM32(0x1DAEB4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x1DAEB8) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x1DAEBC) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x1DAEC0) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(0x1DAEC4) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(0x1DAEC8) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(0x1DAECC) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(0x1DAED0) = edx;
    eax = MEM32(eax + 0x20);
    MEM32(0x1DAED4) = eax;

loc_0001BB9D: ;
    PUSH32(esp, 0x1DAEB4);
    ecx = esi + 0x1034;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    edi = esi + 0x1078;
    PUSH32(esp, 0x0001BBB9u); RECOMP_ABI_CALL(0x000CE660u, sub_000CE660); /* call 0x000CE660 */

loc_0001BBB9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BBF4; /* je: equal / zero */

loc_0001BBC0: ;
    ecx = MEM32(eax);
    MEM32(edi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(edi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = edx;
    eax = MEM32(eax + 0x20);
    MEM32(edi + 0x20) = eax;

loc_0001BBF4: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0001BBFCu); RECOMP_ABI_CALL(0x0001A9F0u, sub_0001A9F0); /* call 0x0001A9F0 */

loc_0001BBFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_0001BC10(); return; /* fallthrough 0x0001BC10 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001BC10
 * Original: 0x0001BC10 - 0x0001BF90 (896 bytes, 238 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BC10(void)
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

loc_0001BC10: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esi + 0xF70) = eax;
    MEM32(esi + 0xFC4) = eax;
    edi = esi + 0xF60;
    ecx = edi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0001BC3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001BC3Cu); } /* indirect call */
    }

loc_0001BC3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001BF88; /* jne: not equal / not zero */

loc_0001BC47: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x48);
    PUSH32(esp, ebp);
    ebp = 0xFFFFF0A0u;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x78;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = 3;
    edi = edi;

loc_0001BC60: ;
    ecx = MEM32(esi + 0xF14);
    eax = edi + ebp;
    eax = MEM32(eax + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BCB3; /* je: equal / zero */

loc_0001BC70: ;
    fp_push(MEMF(eax + 0x44)); /* fld float */
    edx = MEM32(0x1AEFF4);
    MEMF(edi) = (float)fp_top(); /* fst */
    PUSH32(esp, edx);
    fp_push(MEMF(esi + 0x68C)); /* fld float */
    ecx = ebx;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x1AEFF0)); /* fdiv dword ptr [0x1aeff0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(edi) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xF70)); /* fadd dword ptr [esi + 0xf70] */
    MEMF(esi + 0xF70) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001BC9Fu); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_0001BC9F: ;
    fp_push(MEMF(0x1AEFF4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0001BCB9;

loc_0001BCB3: ;
    MEM32(edi) = 0;

loc_0001BCB9: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0001BC60; /* jne: not equal / not zero */

loc_0001BCC7: ;
    fp_push(MEMF(0x1AEFEC)); /* fld float */
    eax = MEM32(esi + 0xF68);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xF70)); /* fmul dword ptr [esi + 0xf70] */
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esi + 0xF6C) = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001BCEAu); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_0001BCEA: ;
    fp_push(MEMF(0x1AEFEC)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    ecx = ebx;
    MEM32(esp + 0x20) = 0;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1AEFEC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xF70)); /* fmul dword ptr [esi + 0xf70] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001BD1Bu); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_0001BD1B: ;
    fp_push(MEMF(0x1AEFEC)); /* fld float */
    ecx = esp + 0x18;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001BD3Cu); RECOMP_ABI_CALL(0x0001B070u, sub_0001B070); /* call 0x0001B070 */

loc_0001BD3C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi + 0xF18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0001BD7F; /* je: equal / zero */

loc_0001BD4B: ;
    ecx = MEM32(eax);
    MEM32(edi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(edi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = edx;
    eax = MEM32(eax + 0x20);
    MEM32(edi + 0x20) = eax;

loc_0001BD7F: ;
    edx = MEM32(esi + 0x688);
    eax = MEM32(esi + 0x4C);
    ecx = esi + 0x4C;
    MEM32(esp + 0xC) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0001BD92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001BD8Fu); } /* indirect call */
    }

loc_0001BD92: ;
    ecx = MEM32(esi + 0x48);
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF000)); /* fmul dword ptr [0x1af000] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esi + 0xFC4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0001BDB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001BDAFu); } /* indirect call */
    }

loc_0001BDB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BDD3; /* je: equal / zero */

loc_0001BDB6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xAA0) = eax;
    MEM32(esi + 0xAA4) = eax;
    MEM32(esi + 0xAA8) = 1;
    goto loc_0001BE5B;

loc_0001BDD3: ;
    eax = MEM32(esi + 0x48);
    eax = MEM32(eax + 0x44);
    edx = MEM32(eax + 0x278);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BDF3; /* je: equal / zero */

loc_0001BDE5: ;
    fp_push(MEMF(eax + 0x4EC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF01C)); /* fmul dword ptr [0x1af01c] */
    goto loc_0001BE05;

loc_0001BDF3: ;
    fp_push(MEMF(esi + 0xFCC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xF74)); /* fadd dword ptr [esi + 0xf74] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF020)); /* fmul dword ptr [0x1af020] */

loc_0001BE05: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF018)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1af018] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001BE1A; /* jp: parity */

loc_0001BE12: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1C91E0)); /* fld float */

loc_0001BE1A: ;
    _fa = (uint32_t)(MEM32(esi + 0xFC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xFC8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BE2E; /* je: equal / zero */

loc_0001BE22: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1AF044)); /* fadd dword ptr [0x1af044] */
    MEM32(esi + 0xFC8) = ecx;

loc_0001BE2E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF028)); /* fmul dword ptr [0x1af028] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0xAA0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0xaa0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001BE59; /* jne: not equal / not zero */

loc_0001BE41: ;
    MEMF(esi + 0xAA0) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xAA4) = ecx;
    MEM32(esi + 0xAA8) = 1;
    goto loc_0001BE5B;

loc_0001BE59: ;
    fp_pop(); /* fstp st(0) */

loc_0001BE5B: ;
    fp_push(MEMF(esi + 0x688)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF348)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af348] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001BE9F; /* jne: not equal / not zero */

loc_0001BE6E: ;
    fp_push(MEMF(0x1AEFFC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xF74)); /* fmul dword ptr [esi + 0xf74] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xFC0)); /* fadd dword ptr [esi + 0xfc0] */
    MEMF(esi + 0xFC0) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF004)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af004] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001BE9F; /* jne: not equal / not zero */

loc_0001BE93: ;
    ecx = MEM32(0x1AF004);
    MEM32(esi + 0xFC0) = ecx;

loc_0001BE9F: ;
    fp_push(MEMF(esi + 0xFC0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001BED0; /* jne: not equal / not zero */

loc_0001BEB2: ;
    fp_push(MEMF(0x1AEFF8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF004)); /* fmul dword ptr [0x1af004] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0xFC0) - fp_top()); /* fsubr dword ptr [esi + 0xfc0] */
    MEMF(esi + 0xFC0) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0001BEDA;

loc_0001BED0: ;
    MEM32(esi + 0xFC0) = 0;

loc_0001BEDA: ;
    eax = esi + 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1DAEB4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1DAEB4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BF37; /* je: equal / zero */

loc_0001BEE7: ;
    edx = MEM32(eax);
    MEM32(0x1DAEB4) = edx;
    ecx = MEM32(eax + 4);
    MEM32(0x1DAEB8) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x1DAEBC) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(0x1DAEC0) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(0x1DAEC4) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(0x1DAEC8) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(0x1DAECC) = edx;
    ecx = MEM32(eax + 0x1C);
    MEM32(0x1DAED0) = ecx;
    edx = MEM32(eax + 0x20);
    MEM32(0x1DAED4) = edx;

loc_0001BF37: ;
    PUSH32(esp, 0x1DAEB4);
    eax = esp + 0x20;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xF3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001BF4Du); RECOMP_ABI_CALL(0x000CE660u, sub_000CE660); /* call 0x000CE660 */

loc_0001BF4D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001BF88; /* je: equal / zero */

loc_0001BF54: ;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(eax + 0x20);
    MEM32(esi + 0x20) = eax;

loc_0001BF88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_0001BF90
 * Original: 0x0001BF90 - 0x0001C14C (444 bytes, 119 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001BF90(void)
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

loc_0001BF90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0001C113; /* jne: not equal / not zero */

loc_0001BFAA: ;
    eax = MEM32(esi + 0x2E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0x4C;
    if (CMP_NE(_fa, _fb)) goto loc_0001BFD7; /* jne: not equal / not zero */

loc_0001BFB7: ;
    PUSH32(esp, 0x0001BFBCu); RECOMP_ABI_CALL(0x0006D570u, sub_0006D570); /* call 0x0006D570 */

loc_0001BFBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C141; /* je: equal / zero */

loc_0001BFC4: ;
    fp_push(MEMF(0x1AF028)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF024)); /* fmul dword ptr [0x1af024] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0001BFD7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0001BFDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001BFD9u); } /* indirect call */
    }

loc_0001BFDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C141; /* je: equal / zero */

loc_0001BFE4: ;
    edx = MEM32(esi + 0x654);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001C017; /* jle: less or equal (signed <=) */

loc_0001BFF3: ;
    ecx = MEM32(esi + 0x650);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_0001C000: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C012; /* jne: not equal / not zero */

loc_0001C005: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x114;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001C000; /* jl: less (signed <) */

loc_0001C010: ;
    goto loc_0001C017;

loc_0001C012: ;
    edi = 1;

loc_0001C017: ;
    fp_push(MEMF(esi + 0xC4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF350)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af350] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001C049; /* jp: parity */

loc_0001C02A: ;
    fp_push(MEMF(esi + 0x59C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AEB20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1aeb20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001C049; /* jne: not equal / not zero */

loc_0001C03D: ;
    ecx = MEM32(0x1AF038);
    MEM32(esp + 8) = ecx;
    goto loc_0001C051;

loc_0001C049: ;
    MEM32(esp + 8) = 0;

loc_0001C051: ;
    fp_push(MEMF(esi + 0x680)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    fp_push(MEMF(esi + 0x680)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001C06C; /* jp: parity */

loc_0001C06A: ;
    fp_top() = -fp_top(); /* fchs */

loc_0001C06C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF030)); /* fmul dword ptr [0x1af030] */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, edi);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C093; /* je: equal / zero */

loc_0001C07B: ;
    fp_push(MEMF(0x1AF034)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC4)); /* fmul dword ptr [esi + 0xc4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF34C)); /* fmul dword ptr [0x1af34c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0001C09B;

loc_0001C093: ;
    MEM32(esp + 0x10) = 0;

loc_0001C09B: ;
    PUSH32(esp, 0x3ECCCCCD);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x0001C0AAu); RECOMP_ABI_CALL(0x000CE160u, sub_000CE160); /* call 0x000CE160 */

loc_0001C0AA: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91CC)); /* fadd dword ptr [0x1c91cc] */
    eax = MEM32(esi + 0x110C);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    ecx = 0x1CEFD8;
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    edx = edx * 8 + 2;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001C0E1u); RECOMP_ABI_CALL(0x000CE0A0u, sub_000CE0A0); /* call 0x000CE0A0 */

loc_0001C0E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C102; /* jne: not equal / not zero */

loc_0001C0E5: ;
    fp_push(MEMF(0x1AF03C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC4)); /* fmul dword ptr [esi + 0xc4] */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp)); /* fadd dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF028)); /* fmul dword ptr [0x1af028] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0001C102: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF028)); /* fmul dword ptr [0x1af028] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0001C113: ;
    fp_push(MEMF(0x1AF040)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xF70)); /* fmul dword ptr [esi + 0xf70] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xAA0)); /* fadd dword ptr [esi + 0xaa0] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001C145; /* jne: not equal / not zero */

loc_0001C132: ;
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    fp_push(MEMF(0x1C91D0)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0001C141: ;
    fp_push(MEMF(esp + 4)); /* fld float */

loc_0001C145: ;
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
 * sub_0001C150
 * Original: 0x0001C150 - 0x0001C596 (1094 bytes, 310 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C150(void)
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

loc_0001C150: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    eax = MEM32(ebx + 0x2C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x688)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF358)); /* fmul dword ptr [0x1af358] */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C17E; /* je: equal / zero */

loc_0001C176: ;
    fp_push(MEMF(0x1C91D0)); /* fld float */
    goto loc_0001C181;

loc_0001C17E: ;
    fp_push(MEMF(ebx + 4)); /* fld float */

loc_0001C181: ;
    eax = MEM32(ebx);
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    ebp = MEM32(esi + 0x2BC);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x18);
    fp_push(MEMF(eax + 0x68)); /* fld float */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xA8)); /* fmul dword ptr [esi + 0xa8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xA4)); /* fmul dword ptr [esi + 0xa4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(esi + 0x2E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xA0)); /* fmul dword ptr [esi + 0xa0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C37A; /* je: equal / zero */

loc_0001C1C8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C27F; /* jne: not equal / not zero */

loc_0001C1D0: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF354)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af354] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001C257; /* jne: not equal / not zero */

loc_0001C1E1: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001C223; /* jp: parity */

loc_0001C1F2: ;
    fp_push(MEMF(esi + 0x1124)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esi + 0x1124) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001C32E; /* jp: parity */

loc_0001C213: ;
    MEM32(esi + 0x1124) = edi;
    ebp = 1;
    goto loc_0001C31E;

loc_0001C223: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ecx = esi + 0x1124;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEM32(esp + 0x1C) = 0x3F800000;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = esp + 0x1C;
    if (TEST_Z(_fa, _fb)) goto loc_0001C24E; /* je: equal / zero */

loc_0001C24C: ;
    eax = ecx;

loc_0001C24E: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    goto loc_0001C32E;

loc_0001C257: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esi + 0x1124) = edi;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF32C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af32c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001C32E; /* jp: parity */

loc_0001C272: ;
    MEM32(esp + 0x10) = 0x3F800000;
    goto loc_0001C32E;

loc_0001C27F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C32E; /* jne: not equal / not zero */

loc_0001C288: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF354)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1af354] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001C2FF; /* jne: not equal / not zero */

loc_0001C295: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF32C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af32c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001C2CD; /* jne: not equal / not zero */

loc_0001C2A6: ;
    fp_push(MEMF(esi + 0x1124)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esi + 0x1124) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001C31E; /* jp: parity */

loc_0001C2C3: ;
    MEM32(esi + 0x1124) = edi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0001C32E;

loc_0001C2CD: ;
    fp_pop(); /* fstp st(0) */
    edi = esi + 0x1124;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    eax = esp + 0x1C;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = 0x3F800000;
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001C2F0u); RECOMP_ABI_CALL(0x00015CB0u, sub_00015CB0); /* call 0x00015CB0 */

loc_0001C2F0: ;
    ecx = MEM32(eax);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0001C31E;

loc_0001C2FF: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esi + 0x1124) = edi;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001C31E; /* jne: not equal / not zero */

loc_0001C316: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x1C91D0)); /* fld float */

loc_0001C31E: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esp + 0x10) = edx;

loc_0001C32E: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF354)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1af354] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001C37A; /* jp: parity */

loc_0001C33B: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF354)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af354] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001C37A; /* jp: parity */

loc_0001C34C: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001C363; /* jp: parity */

loc_0001C361: ;
    fp_top() = -fp_top(); /* fchs */

loc_0001C363: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AEB20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1aeb20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001C37A; /* jp: parity */

loc_0001C370: ;
    MEM32(esp + 0x10) = 0x3F800000;
    goto loc_0001C38B;

loc_0001C37A: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0001C3B2; /* jnp: not parity */

loc_0001C38B: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    MEM32(esp + 0x1C) = 0;
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = esp + 0x1C;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0001C3B0; /* jnp: not parity */

loc_0001C3AC: ;
    eax = esp + 0x18;

loc_0001C3B0: ;
    fp_push(MEMF(eax)); /* fld float */

loc_0001C3B2: ;
    eax = MEM32(esp + 0x10);
    MEMF(esi + 0x2C8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    ecx = esi + 0x28C;
    MEM32(esi + 0x2D0) = eax;
    PUSH32(esp, 0x0001C3CEu); RECOMP_ABI_CALL(0x000D8540u, sub_000D8540); /* call 0x000D8540 */

loc_0001C3CE: ;
    ecx = MEM32(ebx + 8);
    MEM32(esi + 0x2CC) = ecx;
    edx = MEM32(ebx + 0xC);
    MEM32(esi + 0x7EC) = edx;
    eax = MEM32(ebx + 0x18);
    edx = MEM32(esp + 0x30);
    MEM32(esi + 0x80C) = eax;
    ecx = MEM32(ebx + 0x1C);
    MEM32(esi + 0x820) = ecx;
    MEM32(esi + 0x82C) = edx;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C40A; /* jne: not equal / not zero */

loc_0001C402: ;
    ecx = esi + 0x4C;
    PUSH32(esp, 0x0001C40Au); RECOMP_ABI_CALL(0x000D1210u, sub_000D1210); /* call 0x000D1210 */

loc_0001C40A: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + 0x44);
    ebp = MEM32(ecx + 0x278);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x7B4) = edx;
    eax = MEM32(eax + 0x48);
    _fa = (uint32_t)(MEM32(eax + 0x254)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x254), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C476; /* jne: not equal / not zero */

loc_0001C42F: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0001C437u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001C434u); } /* indirect call */
    }

loc_0001C437: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C47C; /* je: equal / zero */

loc_0001C43B: ;
    _fa = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x2C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C466; /* je: equal / zero */

loc_0001C440: ;
    fp_push(MEMF(esi + 0x1114)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0001C466; /* jnp: not parity */

loc_0001C453: ;
    eax = 1;
    MEM32(esi + 0x1110) = eax;
    MEM32(esi + 0x110C) = eax;
    goto loc_0001C482;

loc_0001C466: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1110) = eax;
    MEM32(esi + 0x110C) = eax;
    goto loc_0001C482;

loc_0001C476: ;
    MEM32(esi + 0x1110) = edi;

loc_0001C47C: ;
    MEM32(esi + 0x110C) = edi;

loc_0001C482: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx + 0x54);
    edx = MEM32(ecx + 0x58);
    SET_LO8(ecx, MEM8(ebx + 0x30));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0001C57E; /* jne: not equal / not zero */

loc_0001C49E: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0001C57E; /* jbe: below or equal (unsigned <=) */

loc_0001C4A6: ;
    ecx = MEM32(0x1D9FB8);
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0001C4BAu); RECOMP_ABI_CALL(0x000A1780u, sub_000A1780); /* call 0x000A1780 */

loc_0001C4BA: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edx = MEM32(0x1D9FB8);
    edi = MEM32(edx + 0x44);
    ebp = 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_0001C4EB; /* je: equal / zero */

loc_0001C4D3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C507; /* je: equal / zero */

loc_0001C4D8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C507; /* je: equal / zero */

loc_0001C4DD: ;
    _fa = (uint32_t)(MEM32(edx + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x5C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C507; /* je: equal / zero */

loc_0001C4E2: ;
    ecx = eax;
    PUSH32(esp, 0x0001C4E9u); RECOMP_ABI_CALL(0x0007DCC0u, sub_0007DCC0); /* call 0x0007DCC0 */

loc_0001C4E9: ;
    goto loc_0001C501;

loc_0001C4EB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C507; /* je: equal / zero */

loc_0001C4F0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C507; /* je: equal / zero */

loc_0001C4F5: ;
    _fa = (uint32_t)(MEM32(edx + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x5C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C507; /* je: equal / zero */

loc_0001C4FA: ;
    ecx = eax;
    PUSH32(esp, 0x0001C501u); RECOMP_ABI_CALL(0x0007DC50u, sub_0007DC50); /* call 0x0007DC50 */

loc_0001C501: ;
    edx = MEM32(0x1D9FB8);

loc_0001C507: ;
    _fa = (uint32_t)(MEM32(edx + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x5C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C57E; /* je: equal / zero */

loc_0001C50C: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + 0x48);
    _fa = (uint32_t)(MEM32(ecx + 0x254)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x254), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C57E; /* je: equal / zero */

loc_0001C51B: ;
    PUSH32(esp, ebx);
    ecx = edx;
    PUSH32(esp, 0x0001C523u); RECOMP_ABI_CALL(0x000A1780u, sub_000A1780); /* call 0x000A1780 */

loc_0001C523: ;
    edi = MEM32(eax + 0xCC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0001C530u); RECOMP_ABI_CALL(0x00013080u, sub_00013080); /* call 0x00013080 */

loc_0001C530: ;
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    ecx = MEM32(edx + eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C552; /* je: equal / zero */

loc_0001C53D: ;
    eax = MEM32(0x1D3F08);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx + edi * 4 + 0x48);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ebp = edx;

loc_0001C552: ;
    ecx = MEM32(0x1D9FB8);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0001C560; /* jbe: below or equal (unsigned <=) */

loc_0001C55E: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001C560: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(eax + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C56F; /* jne: not equal / not zero */

loc_0001C56B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C57E; /* je: equal / zero */

loc_0001C56F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0001C575u); RECOMP_ABI_CALL(0x000A1780u, sub_000A1780); /* call 0x000A1780 */

loc_0001C575: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0001C57Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001C57Bu); } /* indirect call */
    }

loc_0001C57E: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esi + 0x4C);
    ecx = esi + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0001C58Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001C589u); } /* indirect call */
    }

loc_0001C58C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001C5A0
 * Original: 0x0001C5A0 - 0x0001C646 (166 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C5A0(void)
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

loc_0001C5A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x1D9FB4);
    esi = ecx;
    eax = MEM32(esi + 0x1100);
    _fb = (uint32_t)(0x435) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x435;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + edi * 4;
    PUSH32(esp, ecx);
    edx = eax;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edx);
    eax = esi + 0x10F4;
    PUSH32(esp, eax);
    ecx = 0x1DE498;
    PUSH32(esp, 0x0001C5D3u); RECOMP_ABI_CALL(0x000F9C40u, sub_000F9C40); /* call 0x000F9C40 */

loc_0001C5D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C5E1; /* jne: not equal / not zero */

loc_0001C5D8: ;
    MEM32(esi + edi * 4) = 0x7F7FFFFF;
    goto loc_0001C5ED;

loc_0001C5E1: ;
    fp_push(MEMF(0x1DC3F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + edi * 4)); /* fmul dword ptr [esi + edi*4] */
    MEMF(esi + edi * 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001C5ED: ;
    ecx = esi;
    PUSH32(esp, 0x0001C5F4u); RECOMP_ABI_CALL(0x0001A7A0u, sub_0001A7A0); /* call 0x0001A7A0 */

loc_0001C5F4: ;
    eax = MEM32(esi + 0x10C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0x1120);
    MEM32(ecx + 0x34) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0001C60E; /* je: equal / zero */

loc_0001C607: ;
    MEM32(ecx + 0x38) = 1;

loc_0001C60E: ;
    ecx = MEM32(esi + 0x48);
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx + 0x278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C623; /* jne: not equal / not zero */

loc_0001C61E: ;
    PUSH32(esp, 0x0001C623u); RECOMP_ABI_CALL(0x00028DA0u, sub_00028DA0); /* call 0x00028DA0 */

loc_0001C623: ;
    edx = MEM32(esi + 0x48);
    SET_LO8(eax, MEM8(edx + 0x54));
    SET_LO8(ecx, MEM8(0x1D9FB4));
    SET_LO8(eax, LO8(eax) >> LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001C640; /* jne: not equal / not zero */

loc_0001C635: ;
    ecx = MEM32(esi + 0xEF4);
    PUSH32(esp, 0x0001C640u); RECOMP_ABI_CALL(0x000AB0F0u, sub_000AB0F0); /* call 0x000AB0F0 */

loc_0001C640: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_0001C650
 * Original: 0x0001C650 - 0x0001C93C (748 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C650(void)
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

loc_0001C650: ;
    eax = MEM32(0x1AEF00);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0001C67B; /* je: equal / zero */

loc_0001C665: ;
    ecx = MEM32(ebx + 0x48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x0001C66Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001C66Au); } /* indirect call */
    }

loc_0001C66D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C67B; /* jne: not equal / not zero */

loc_0001C671: ;
    MEM32(esp + 0x18) = 0x98899889u;
    goto loc_0001C686;

loc_0001C67B: ;
    ecx = ebx;
    PUSH32(esp, 0x0001C682u); RECOMP_ABI_CALL(0x00013780u, sub_00013780); /* call 0x00013780 */

loc_0001C682: ;
    MEM32(esp + 0x18) = eax;

loc_0001C686: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_0001C690: ;
    ecx = MEM32(ebx + 0xEE0);
    edx = MEM32(ecx + 0x474);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C6C2; /* jne: not equal / not zero */

loc_0001C6A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C6AA; /* je: equal / zero */

loc_0001C6A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C6C2; /* jne: not equal / not zero */

loc_0001C6AA: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD0);
    MEM32(edx + ebx + 0xB80) = 0;
    goto loc_0001C923;

loc_0001C6C2: ;
    ebp = eax + eax * 2;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    edi = eax + ebx;
    ebp = ebp << 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ebp + 0x1CA3B8);
    MEM32(edi + 0xB80) = eax;
    ecx = MEM32(ebp + 0x1CA3B4);
    edx = MEM32(ebx + 0xEE0);
    eax = MEM32(edx + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(0x1CA3A8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    esi = edi + 0xAB4;
    PUSH32(esp, 0x0001C705u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_0001C705: ;
    eax = MEM32(edi + 0xB80);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x14) = 0x82;
    if (CMP_NE(_fa, _fb)) goto loc_0001C723; /* jne: not equal / not zero */

loc_0001C71B: ;
    MEM32(esp + 0x14) = 0x92;

loc_0001C723: ;
    ecx = MEM32(ebx + 0x48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x0001C72Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001C728u); } /* indirect call */
    }

loc_0001C72B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C737; /* jne: not equal / not zero */

loc_0001C72F: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) | 0x10000;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0001C737: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0001C740u); RECOMP_ABI_CALL(0x000F9DF0u, sub_000F9DF0); /* call 0x000F9DF0 */

loc_0001C740: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0;
    PUSH32(esp, 0x0001C775u); RECOMP_ABI_CALL(0x000F9E30u, sub_000F9E30); /* call 0x000F9E30 */

loc_0001C775: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C91F; /* je: equal / zero */

loc_0001C77D: ;
    edx = MEM32(esi + 0x54);
    MEM32(edx + 0x4C) = 2;
    eax = MEM32(esi + 0x54);
    MEM32(eax + 0x84) = 0x3E4CCCCD;
    ecx = MEM32(esi + 0x54);
    edx = MEM32(ecx + 0xA4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001C7B4; /* jl: less (signed <) */

loc_0001C7A3: ;
    ecx = MEM32(ecx + 0xD8);
    SET_LO16(edx, MEM16(0x1AEF24));
    MEM16(ecx + 6) = LO16(edx);

loc_0001C7B4: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM32(ecx + 0xA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xA4), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001C7D1; /* jl: less (signed <) */

loc_0001C7C0: ;
    ecx = MEM32(ecx + 0xD8);
    SET_LO16(edx, MEM16(0x1AEF20));
    MEM16(ecx + 0xA) = LO16(edx);

loc_0001C7D1: ;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x10) = eax;
    ecx = 0x3F800000;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = ecx;
    ecx = MEM32(ebx + 0x1008);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001C806u); RECOMP_ABI_CALL(0x000FC9C0u, sub_000FC9C0); /* call 0x000FC9C0 */

loc_0001C806: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001C81A; /* jne: not equal / not zero */

loc_0001C80E: ;
    ecx = MEM32(ebx + 0x1120);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001C81Au); RECOMP_ABI_CALL(0x000FC4E0u, sub_000FC4E0); /* call 0x000FC4E0 */

loc_0001C81A: ;
    eax = MEM32(ebx + 0xEE0);
    edx = MEM32(ebp + 0x1CA3B0);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001C82Fu); RECOMP_ABI_CALL(0x00100BE0u, sub_00100BE0); /* call 0x00100BE0 */

loc_0001C82F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001C866; /* je: equal / zero */

loc_0001C833: ;
    ecx = MEM32(ebx + 0xEE0);
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x54;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x20)); /* fadd dword ptr [eax + 0x20] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x24)); /* fadd dword ptr [eax + 0x24] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x28)); /* fadd dword ptr [eax + 0x28] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x48);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(edi + 0xB74) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 0xB78) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0001C884;

loc_0001C866: ;
    eax = MEM32(ebx + 0xEE0);
    ecx = MEM32(eax + 0x54);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xB74) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + 0xB78) = edx;
    eax = MEM32(eax + 8);

loc_0001C884: ;
    MEM32(edi + 0xB7C) = eax;
    esi = MEM32(esi + 0x54);
    fp_push(MEMF(esi + 0xAC)); /* fld float */
    ecx = MEM32(esi + 0xB0);
    fp_push(MEMF(esi + 0xB8)); /* fld float */
    edx = MEM32(esi + 0xBC);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xAC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xB74)); /* fadd dword ptr [edi + 0xb74] */
    eax = MEM32(esi + 8);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esi + 0x14);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x24) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xB74)); /* fadd dword ptr [edi + 0xb74] */
    MEM32(esp + 0x30) = ecx;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebx + 0xFF0;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xB78)); /* fadd dword ptr [edi + 0xb78] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xB78)); /* fadd dword ptr [edi + 0xb78] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xB7C)); /* fadd dword ptr [edi + 0xb7c] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xB7C)); /* fadd dword ptr [edi + 0xb7c] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001C91Fu); RECOMP_ABI_CALL(0x00019480u, sub_00019480); /* call 0x00019480 */

loc_0001C91F: ;
    eax = MEM32(esp + 0x10);

loc_0001C923: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0001C690; /* jl: less (signed <) */

loc_0001C931: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001C940
 * Original: 0x0001C940 - 0x0001C9B2 (114 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C940(void)
{

loc_0001C940: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    ecx = 0x10;
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
    ecx = MEM32(edx + 0x40);
    MEM32(eax + 0x40) = ecx;
    ecx = MEM32(edx + 0x44);
    MEM32(eax + 0x44) = ecx;
    ecx = MEM32(edx + 0x48);
    MEM32(eax + 0x48) = ecx;
    ecx = MEM32(edx + 0x4C);
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(edx + 0x50);
    MEM32(eax + 0x50) = ecx;
    ecx = MEM32(edx + 0x54);
    MEM32(eax + 0x54) = ecx;
    ecx = MEM32(edx + 0x58);
    MEM32(eax + 0x58) = ecx;
    ecx = MEM32(edx + 0x5C);
    MEM32(eax + 0x5C) = ecx;
    ecx = MEM32(edx + 0x60);
    MEM32(eax + 0x60) = ecx;
    ecx = MEM32(edx + 0x64);
    MEM32(eax + 0x64) = ecx;
    ecx = MEM32(edx + 0x68);
    MEM32(eax + 0x68) = ecx;
    ecx = MEM32(edx + 0x6C);
    MEM32(eax + 0x6C) = ecx;
    ecx = MEM32(edx + 0x70);
    MEM32(eax + 0x70) = ecx;
    ecx = MEM32(edx + 0x74);
    MEM32(eax + 0x74) = ecx;
    edx = MEM32(edx + 0x78);
    POP32(esp, edi);
    MEM32(eax + 0x78) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001C9C0
 * Original: 0x0001C9C0 - 0x0001D0B1 (1777 bytes, 450 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001C9C0(void)
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

loc_0001C9C0: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0xEE0);
    eax = MEM32(esi + 0x48);
    fp_push(MEMF(edx + 0x9C)); /* fld float */
    ecx = MEM32(eax + 0x44);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001C9E5u); RECOMP_ABI_CALL(0x000289B0u, sub_000289B0); /* call 0x000289B0 */

loc_0001C9E5: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF330)); /* fmul dword ptr [0x1af330] */
    PUSH32(esp, 0x1DAEB4);
    eax = esi + 0xB74;
    PUSH32(esp, eax);
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001CA0Bu); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_0001CA0B: ;
    fp_push(MEMF(0x1DAEA8)); /* fld float */
    ecx = MEM32(esp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x1DAEAC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(0x1DAEB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    eax = esi + 0xAD0;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xACC) = edx;
    MEMF(esi + 0xAC4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEMF(esi + 0xAC8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001CA5Au); RECOMP_ABI_CALL(0x000CF300u, sub_000CF300); /* call 0x000CF300 */

loc_0001CA5A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001CA63u); RECOMP_ABI_CALL(0x0001B130u, sub_0001B130); /* call 0x0001B130 */

loc_0001CA63: ;
    edi = esi + 0x10AC;
    ecx = edi;
    edx = MEM32(ecx);
    eax = esi + 0xAF4;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx + 0x38);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001CD31; /* jne: not equal / not zero */

loc_0001CA99: ;
    eax = MEM32(esi + 0x650);
    fp_push(MEMF(esi + 0xF60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x38)); /* fadd dword ptr [eax + 0x38] */
    edx = MEM32(esi + 0xEE0);
    ecx = MEM32(ecx + 0x44);
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x9C)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001CAC8u); RECOMP_ABI_CALL(0x000289B0u, sub_000289B0); /* call 0x000289B0 */

loc_0001CAC8: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF330)); /* fmul dword ptr [0x1af330] */
    eax = MEM32(esi + 0x650);
    MEM32(esp + 0x30) = 0x3F800000;
    MEM32(esp + 0x40) = 0x3F800000;
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x2C) = 0;
    fp_push(MEMF(0x1AF088)); /* fld float */
    ebx = MEM32(esp + 0xC);
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x20) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    ecx = esp + 0x74;
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) - fp_top()); /* fsubr dword ptr [0x1c91d0] */
    PUSH32(esp, ecx);
    MEM32(esp + 0x48) = 0x3F800000;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001CB50u); RECOMP_ABI_CALL(0x000CF300u, sub_000CF300); /* call 0x000CF300 */

loc_0001CB50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0001CB5Du); RECOMP_ABI_CALL(0x0001B010u, sub_0001B010); /* call 0x0001B010 */

loc_0001CB5D: ;
    edx = MEM32(0x1AF08C);
    PUSH32(esp, edx);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001CB6Eu); RECOMP_ABI_CALL(0x000CF2B0u, sub_000CF2B0); /* call 0x000CF2B0 */

loc_0001CB6E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0001CB7Bu); RECOMP_ABI_CALL(0x0001B010u, sub_0001B010); /* call 0x0001B010 */

loc_0001CB7B: ;
    PUSH32(esp, 0x1DAEB4);
    ecx = esi + 0xC44;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001CB91u); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_0001CB91: ;
    fp_push(MEMF(0x1DAEA8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    ecx = esi + 0xBA0;
    fp_push(MEMF(0x1DAEAC)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    edx = esp + 0x30;
    fp_push(MEMF(0x1DAEB0)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x2C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0xB94) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xB9C) = eax;
    MEMF(esi + 0xB98) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001CBD8u); RECOMP_ABI_CALL(0x0001B130u, sub_0001B130); /* call 0x0001B130 */

loc_0001CBD8: ;
    ecx = edi;
    edx = MEM32(ecx);
    eax = esi + 0xBC4;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    edx = esp + 0x88;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(eax + 0xC) = ecx;
    PUSH32(esp, 0x0001CC04u); RECOMP_ABI_CALL(0x000CF300u, sub_000CF300); /* call 0x000CF300 */

loc_0001CC04: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0001CC4E; /* je: equal / zero */

loc_0001CC10: ;
    edx = MEM32(eax);
    MEM32(esp + 0x1C) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(esp + 0x2C) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 0x30) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(esp + 0x34) = edx;
    ecx = MEM32(eax + 0x1C);
    MEM32(esp + 0x38) = ecx;
    edx = MEM32(eax + 0x20);
    MEM32(esp + 0x3C) = edx;

loc_0001CC4E: ;
    eax = MEM32(0x1AF08C);
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001CC5Eu); RECOMP_ABI_CALL(0x000CF2B0u, sub_000CF2B0); /* call 0x000CF2B0 */

loc_0001CC5E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0001CC6Bu); RECOMP_ABI_CALL(0x0001B010u, sub_0001B010); /* call 0x0001B010 */

loc_0001CC6B: ;
    fp_push(MEMF(0x1AF094)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    edx = MEM32(esi + 0x650);
    fp_push(MEMF(0x1AF098)); /* fld float */
    PUSH32(esp, 0x1DAEB4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1AF09C)); /* fadd dword ptr [0x1af09c] */
    PUSH32(esp, ecx);
    fp_push(MEMF(0x1AF090)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xD14)); /* fadd dword ptr [esi + 0xd14] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xD18)); /* fadd dword ptr [esi + 0xd18] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xD1C)); /* fadd dword ptr [esi + 0xd1c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001CCC4u); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_0001CCC4: ;
    fp_push(MEMF(0x1DAEA8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    ecx = esp + 0x28;
    fp_push(MEMF(0x1DAEAC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(0x1DAEB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    eax = esi + 0xC70;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0xC64) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xC6C) = edx;
    MEMF(esi + 0xC68) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001CD0Bu); RECOMP_ABI_CALL(0x0001B130u, sub_0001B130); /* call 0x0001B130 */

loc_0001CD0B: ;
    eax = edi;
    ecx = MEM32(eax);
    edx = esi + 0xC94;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0xC) = eax;
    goto loc_0001CECA;

loc_0001CD31: ;
    eax = MEM32(esi + 0xEE0);
    fp_push(MEMF(eax + 0xA4)); /* fld float */
    PUSH32(esp, 0x1DAEB4);
    fp_push(MEMF(eax + 0xA0)); /* fld float */
    eax = MEM32(esi + 0x650);
    fp_push(MEMF(esi + 0xF60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x38)); /* fadd dword ptr [eax + 0x38] */
    ecx = esi + 0xC44;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0001CD77u); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_0001CD77: ;
    fp_push(MEMF(0x1DAEA8)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    ecx = esi + 0xBA0;
    fp_push(MEMF(0x1DAEAC)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    PUSH32(esp, ecx);
    fp_push(MEMF(0x1DAEB0)); /* fld float */
    edx = esp + 0x78;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x1C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0xB94) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xB9C) = eax;
    MEMF(esi + 0xB98) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF32C)); /* fmul dword ptr [0x1af32c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF330)); /* fmul dword ptr [0x1af330] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001CDD5u); RECOMP_ABI_CALL(0x000CF440u, sub_000CF440); /* call 0x000CF440 */

loc_0001CDD5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001CDDEu); RECOMP_ABI_CALL(0x0001B130u, sub_0001B130); /* call 0x0001B130 */

loc_0001CDDE: ;
    ecx = edi;
    edx = MEM32(ecx);
    eax = esi + 0xBC4;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(esi + 0xEE0);
    fp_push(MEMF(eax + 0xA4)); /* fld float */
    PUSH32(esp, 0x1DAEB4);
    fp_push(MEMF(eax + 0xA0)); /* fld float */
    eax = MEM32(esi + 0x650);
    fp_push(MEMF(esi + 0xF64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x14C)); /* fadd dword ptr [eax + 0x14c] */
    edx = esi + 0xD14;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x11C)); /* fadd dword ptr [eax + 0x11c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001CE48u); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_0001CE48: ;
    fp_push(MEMF(0x1DAEA8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x1DAEAC)); /* fld float */
    edx = esi + 0xC70;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    PUSH32(esp, edx);
    fp_push(MEMF(0x1DAEB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    eax = esp + 0x74;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0xC64) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    MEM32(esi + 0xC6C) = ecx;
    MEMF(esi + 0xC68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF330)); /* fmul dword ptr [0x1af330] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001CEA0u); RECOMP_ABI_CALL(0x000CF440u, sub_000CF440); /* call 0x000CF440 */

loc_0001CEA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001CEA9u); RECOMP_ABI_CALL(0x0001B130u, sub_0001B130); /* call 0x0001B130 */

loc_0001CEA9: ;
    edx = edi;
    eax = MEM32(edx);
    ecx = esi + 0xC94;
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    eax = MEM32(edx + 8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(edx + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0xC) = edx;

loc_0001CECA: ;
    eax = MEM32(esi + 0xEE0);
    fp_push(MEMF(eax + 0xAC)); /* fld float */
    PUSH32(esp, 0x1DAEB4);
    fp_push(MEMF(eax + 0xA8)); /* fld float */
    eax = MEM32(esi + 0x650);
    fp_push(MEMF(esi + 0xF6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x374)); /* fadd dword ptr [eax + 0x374] */
    ecx = esp + 0x44;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x344)); /* fadd dword ptr [eax + 0x344] */
    eax = esi + 0xDE4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF330)); /* fmul dword ptr [0x1af330] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001CF1Au); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_0001CF1A: ;
    fp_push(MEMF(0x1DAEA8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    ecx = MEM32(esp + 0x14);
    fp_push(MEMF(0x1DAEAC)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(0x1DAEB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    eax = esi + 0xD40;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xD3C) = edx;
    MEMF(esi + 0xD34) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x78;
    PUSH32(esp, edx);
    MEMF(esi + 0xD38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001CF69u); RECOMP_ABI_CALL(0x000CF2B0u, sub_000CF2B0); /* call 0x000CF2B0 */

loc_0001CF69: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001CF72u); RECOMP_ABI_CALL(0x0001B130u, sub_0001B130); /* call 0x0001B130 */

loc_0001CF72: ;
    ecx = edi;
    edx = MEM32(ecx);
    eax = esi + 0xD64;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(esi + 0xEE0);
    MEM32(esp + 0x64) = 0x3F800000;
    MEM32(esp + 0x74) = 0x3F800000;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0;
    MEM32(esp + 0x54) = 0x3F800000;
    fp_push(MEMF(eax + 0xB4)); /* fld float */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x10) - fp_top()); /* fsubr dword ptr [esp + 0x10] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xB0)); /* fmul dword ptr [eax + 0xb0] */
    MEM32(esp + 0x70) = 0x3F800000;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xB8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001D010u); RECOMP_ABI_CALL(0x000CF2B0u, sub_000CF2B0); /* call 0x000CF2B0 */

loc_0001D010: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, 0x0001D01Du); RECOMP_ABI_CALL(0x0001B010u, sub_0001B010); /* call 0x0001B010 */

loc_0001D01D: ;
    PUSH32(esp, 0x1DAEB4);
    eax = esi + 0xEB4;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001D033u); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_0001D033: ;
    fp_push(MEMF(0x1DAEA8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    ecx = esp + 0x58;
    fp_push(MEMF(0x1DAEAC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(0x1DAEB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    eax = esi + 0xE10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0xE04) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xE0C) = edx;
    MEMF(esi + 0xE08) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001D07Au); RECOMP_ABI_CALL(0x0001B130u, sub_0001B130); /* call 0x0001B130 */

loc_0001D07A: ;
    eax = MEM32(edi);
    edx = esi + 0xE34;
    MEM32(edx) = eax;
    ecx = MEM32(edi + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(edi + 8);
    MEM32(edx + 8) = eax;
    ecx = MEM32(edi + 0xC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esi + 0xF10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0001D0AA; /* je: equal / zero */

loc_0001D0A5: ;
    PUSH32(esp, 0x0001D0AAu); RECOMP_ABI_CALL(0x000A3230u, sub_000A3230); /* call 0x000A3230 */

loc_0001D0AA: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001D0C0
 * Original: 0x0001D0C0 - 0x0001D122 (98 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D0C0(void)
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

loc_0001D0C0: ;
    eax = MEM32(0x1D9FB8);
    eax = MEM32(eax + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D11F; /* je: equal / zero */

loc_0001D0CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D11F; /* je: equal / zero */

loc_0001D0D2: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x1114)); /* fadd dword ptr [ecx + 0x1114] */
    MEMF(ecx + 0x1114) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x1114)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001D102; /* jp: parity */

loc_0001D0F5: ;
    MEM32(ecx + 0x1114) = 0;
    esp += 8; return; /* ret 4 */

loc_0001D102: ;
    fp_push(MEMF(ecx + 0x1114)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001D11F; /* jne: not equal / not zero */

loc_0001D115: ;
    MEM32(ecx + 0x1114) = 0x3F800000;

loc_0001D11F: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001D130
 * Original: 0x0001D130 - 0x0001D180 (80 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D130(void)
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

loc_0001D130: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x1114)); /* fadd dword ptr [ecx + 0x1114] */
    MEMF(ecx + 0x1114) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x1114)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001D160; /* jp: parity */

loc_0001D153: ;
    MEM32(ecx + 0x1114) = 0;
    esp += 8; return; /* ret 4 */

loc_0001D160: ;
    fp_push(MEMF(ecx + 0x1114)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001D17D; /* jne: not equal / not zero */

loc_0001D173: ;
    MEM32(ecx + 0x1114) = 0x3F800000;

loc_0001D17D: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001D180
 * Original: 0x0001D180 - 0x0001D267 (231 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D180(void)
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

loc_0001D180: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x1110);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D21B; /* je: equal / zero */

loc_0001D18F: ;
    fp_push(MEMF(ecx + 0x688)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF358)); /* fmul dword ptr [0x1af358] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x1AF364)); /* fsub dword ptr [0x1af364] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF360)); /* fmul dword ptr [0x1af360] */
    MEMF(esp) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001D1C2; /* jp: parity */

loc_0001D1B8: ;
    MEM32(esp) = 0;
    goto loc_0001D1DB;

loc_0001D1C2: ;
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF35C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af35c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001D1DB; /* jne: not equal / not zero */

loc_0001D1D3: ;
    MEM32(esp) = 0x3F866666;

loc_0001D1DB: ;
    fp_push(MEMF(ecx + 0x111C)); /* fld float */
    _fb = (uint32_t)(0x111C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x111C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001D263; /* jp: parity */

loc_0001D1F2: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF328)); /* fmul dword ptr [0x1af328] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = esp;
    if (TEST_Z(_fa, _fb)) goto loc_0001D213; /* je: equal / zero */

loc_0001D211: ;
    eax = ecx;

loc_0001D213: ;
    eax = MEM32(eax);
    MEM32(ecx) = eax;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0001D21B: ;
    fp_push(MEMF(ecx + 0x111C)); /* fld float */
    _fb = (uint32_t)(0x111C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x111C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0001D263; /* jnp: not parity */

loc_0001D234: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    MEM32(esp + 8) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF328)); /* fmul dword ptr [0x1af328] */
    fp_top() = RECOMP_FP_PC(MEMF(ecx) - fp_top()); /* fsubr dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = esp + 8;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0001D25F; /* jnp: not parity */

loc_0001D25D: ;
    eax = ecx;

loc_0001D25F: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;

loc_0001D263: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001D270
 * Original: 0x0001D270 - 0x0001D363 (243 bytes, 58 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001D270: ;
    edx = MEM32(0x1DC418);
    _fa = (uint32_t)(MEM32(0x1DC41C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC41C), edx (32-bit) */
    PUSH32(esp, esi);
    esi = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0001D297; /* je: equal / zero */

loc_0001D281: ;
    ecx = 0x40340;
    PUSH32(esp, 0x0001D28Bu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0001D28B: ;
    MEM32(0x1A51EC) = esi;
    MEM32(0x1DC41C) = esi;

loc_0001D297: ;
    eax = MEM32(0x1DC364);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001D2EF; /* jne: not equal / not zero */

loc_0001D2A0: ;
    esi = 1;
    edx = esi;
    ecx = 0x40304;
    MEM32(0x1DC364) = esi;
    PUSH32(esp, 0x0001D2B7u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0001D2B7: ;
    eax = MEM32(0x1DE418);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x1A51E4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0001D2EF; /* jne: not equal / not zero */

loc_0001D2C6: ;
    ecx = MEM32(0x1DE434);
    eax = 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D2E9; /* je: equal / zero */

loc_0001D2D5: ;
    MEM32(0x1A50F0) = MEM32(0x1A50F0) | 0x800;
    _fa = (uint32_t)(MEM32(0x1A50F0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1A2EE0) = eax;
    MEM32(0x1DE434) = eax;

loc_0001D2E9: ;
    MEM32(0x1DE418) = esi;

loc_0001D2EF: ;
    eax = MEM32(0x1DC440);
    esi = 0x302;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D315; /* je: equal / zero */

loc_0001D2FD: ;
    edx = esi;
    ecx = 0x40344;
    MEM32(0x1DC440) = esi;
    PUSH32(esp, 0x0001D30Fu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0001D30F: ;
    MEM32(0x1A51F0) = esi;

loc_0001D315: ;
    eax = MEM32(0x1DE444);
    esi = 0x303;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D33B; /* je: equal / zero */

loc_0001D323: ;
    edx = esi;
    ecx = 0x40348;
    MEM32(0x1DE444) = esi;
    PUSH32(esp, 0x0001D335u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0001D335: ;
    MEM32(0x1A51F4) = esi;

loc_0001D33B: ;
    eax = MEM32(0x1DC3AC);
    esi = 0x8006;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D361; /* je: equal / zero */

loc_0001D349: ;
    edx = esi;
    ecx = 0x40350;
    MEM32(0x1DC3AC) = esi;
    PUSH32(esp, 0x0001D35Bu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0001D35B: ;
    MEM32(0x1A5220) = esi;

loc_0001D361: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001D370
 * Original: 0x0001D370 - 0x0001D3ED (125 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001D370: ;
    edx = MEM32(0x1DE3E0);
    _fa = (uint32_t)(MEM32(0x1DC41C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC41C), edx (32-bit) */
    PUSH32(esp, esi);
    esi = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0001D397; /* je: equal / zero */

loc_0001D381: ;
    ecx = 0x40340;
    PUSH32(esp, 0x0001D38Bu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0001D38B: ;
    MEM32(0x1A51EC) = esi;
    MEM32(0x1DC41C) = esi;

loc_0001D397: ;
    eax = MEM32(0x1DC364);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D3EB; /* je: equal / zero */

loc_0001D3A2: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    MEM32(0x1DC364) = esi;
    PUSH32(esp, 0x0001D3B4u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0001D3B4: ;
    _fa = (uint32_t)(MEM32(0x1DE418)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DE418), esi (32-bit) */
    MEM32(0x1A51E4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0001D3EB; /* je: equal / zero */

loc_0001D3C2: ;
    ecx = MEM32(0x1DE434);
    eax = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D3E5; /* je: equal / zero */

loc_0001D3D1: ;
    MEM32(0x1A50F0) = MEM32(0x1A50F0) | 0x800;
    _fa = (uint32_t)(MEM32(0x1A50F0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1A2EE0) = eax;
    MEM32(0x1DE434) = eax;

loc_0001D3E5: ;
    MEM32(0x1DE418) = esi;

loc_0001D3EB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001D3F0
 * Original: 0x0001D3F0 - 0x0001D4B0 (192 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D3F0(void)
{

loc_0001D3F0: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 0x2AC);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 0x2B0);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0x598);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x59C);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 0x440);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x444);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(eax + 0x3F0);
    MEM32(ecx + 0x1C) = edx;
    edx = MEM32(eax + 0x3F4);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 0x58C);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(eax + 0x224);
    MEM32(ecx + 0x2C) = edx;
    edx = MEM32(eax + 0x824);
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(eax + 0x830);
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(eax + 0x834);
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(eax + 0x83C);
    MEM32(ecx + 0x40) = edx;
    edx = MEM32(eax + 0x470);
    MEM32(ecx + 0x38) = edx;
    edx = MEM32(eax + 0x474);
    MEM32(ecx + 0x3C) = edx;
    edx = MEM32(eax + 0x224);
    MEM32(ecx + 0x2C) = edx;
    edx = MEM32(eax + 0x36C);
    MEM32(ecx + 0x44) = edx;
    edx = MEM32(eax + 0x370);
    MEM32(ecx + 0x48) = edx;
    edx = MEM32(eax + 0x378);
    MEM32(ecx + 0x4C) = edx;
    eax = MEM32(eax + 0x37C);
    MEM32(ecx + 0x50) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0001D4B0
 * Original: 0x0001D4B0 - 0x0001D598 (232 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D4B0(void)
{

loc_0001D4B0: ;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x2AC) = edx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x2B0) = edx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x598) = edx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x59C) = edx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x440) = edx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x444) = edx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x3F0) = edx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x3F4) = edx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x58C) = edx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x224) = edx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x824) = edx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 0x830) = edx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 0x834) = edx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x40);
    MEM32(eax + 0x83C) = edx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x38);
    MEM32(eax + 0x470) = edx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x3C);
    MEM32(eax + 0x474) = edx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x224) = edx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x44);
    MEM32(eax + 0x36C) = edx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x48);
    MEM32(eax + 0x370) = edx;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x4C);
    MEM32(eax + 0x378) = edx;
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 0x50);
    MEM32(eax + 0x37C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0001D5A0
 * Original: 0x0001D5A0 - 0x0001D7F1 (593 bytes, 178 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001D5A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1120);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D5C7; /* je: equal / zero */

loc_0001D5B1: ;
    ecx = edi;
    PUSH32(esp, 0x0001D5B8u); RECOMP_ABI_CALL(0x000FC980u, sub_000FC980); /* call 0x000FC980 */

loc_0001D5B8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001D5BEu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001D5BE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1120) = ebx;

loc_0001D5C7: ;
    eax = MEM32(esi + 0x1008);
    ecx = MEM32(0x1D3EC8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001D5D9u); RECOMP_ABI_CALL(0x000F0BE0u, sub_000F0BE0); /* call 0x000F0BE0 */

loc_0001D5D9: ;
    ecx = MEM32(esi + 0x1008);
    PUSH32(esp, 0x0001D5E4u); RECOMP_ABI_CALL(0x000FCF90u, sub_000FCF90); /* call 0x000FCF90 */

loc_0001D5E4: ;
    edi = MEM32(esi + 0x1008);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D604; /* je: equal / zero */

loc_0001D5EE: ;
    ecx = edi;
    PUSH32(esp, 0x0001D5F5u); RECOMP_ABI_CALL(0x000FE060u, sub_000FE060); /* call 0x000FE060 */

loc_0001D5F5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001D5FBu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001D5FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1008) = ebx;

loc_0001D604: ;
    eax = MEM32(esi + 0x1128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D61D; /* je: equal / zero */

loc_0001D60E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001D614u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001D614: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1128) = ebx;

loc_0001D61D: ;
    eax = MEM32(esi + 0x112C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D636; /* je: equal / zero */

loc_0001D627: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001D62Du); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001D62D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x112C) = ebx;

loc_0001D636: ;
    edi = MEM32(esi + 0xF10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D656; /* je: equal / zero */

loc_0001D640: ;
    ecx = edi;
    PUSH32(esp, 0x0001D647u); RECOMP_ABI_CALL(0x000A3380u, sub_000A3380); /* call 0x000A3380 */

loc_0001D647: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001D64Du); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001D64D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xF10) = ebx;

loc_0001D656: ;
    edi = 0x1AF06C;
    goto loc_0001D660;

    /* nop */

loc_0001D660: ;
    ecx = MEM32(edi);
    edx = MEM32(esi + 0xAB0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4E8);
    eax = ecx + edx;
    _fa = (uint32_t)(MEM32(eax + 0x18C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D688; /* je: equal / zero */

loc_0001D679: ;
    ecx = MEM32(0x1D3ECC);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001D688u); RECOMP_ABI_CALL(0x000F2E00u, sub_000F2E00); /* call 0x000F2E00 */

loc_0001D688: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001D660; /* jne: not equal / not zero */

loc_0001D693: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001D699u); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_0001D699: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001D69Fu); RECOMP_ABI_CALL(0x00024DD0u, sub_00024DD0); /* call 0x00024DD0 */

loc_0001D69F: ;
    eax = MEM32(esi + 0xEE4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D6B4; /* je: equal / zero */

loc_0001D6AC: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x0001D6B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001D6B1u); } /* indirect call */
    }

loc_0001D6B4: ;
    _fa = (uint32_t)(MEM32(esi + 0xEFC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xEFC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D6CE; /* je: equal / zero */

loc_0001D6BC: ;
    ecx = MEM32(esi + 0xF00);
    PUSH32(esp, ecx);
    ecx = MEM32(0x1DE45C);
    PUSH32(esp, 0x0001D6CEu); RECOMP_ABI_CALL(0x000EF270u, sub_000EF270); /* call 0x000EF270 */

loc_0001D6CE: ;
    eax = MEM32(esi + 0xF00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D6E7; /* je: equal / zero */

loc_0001D6D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001D6DEu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001D6DE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xF00) = ebx;

loc_0001D6E7: ;
    edi = MEM32(esi + 0xEE8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D707; /* je: equal / zero */

loc_0001D6F1: ;
    ecx = edi;
    PUSH32(esp, 0x0001D6F8u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_0001D6F8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001D6FEu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001D6FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xEE8) = ebx;

loc_0001D707: ;
    eax = MEM32(esi + 0xEEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D720; /* je: equal / zero */

loc_0001D711: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001D717u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001D717: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xEEC) = ebx;

loc_0001D720: ;
    ecx = MEM32(esi + 0xEF4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D736; /* je: equal / zero */

loc_0001D72A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0001D730u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001D72Eu); } /* indirect call */
    }

loc_0001D730: ;
    MEM32(esi + 0xEF4) = ebx;

loc_0001D736: ;
    ecx = MEM32(esi + 0xEF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D74C; /* je: equal / zero */

loc_0001D740: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0001D746u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001D744u); } /* indirect call */
    }

loc_0001D746: ;
    MEM32(esi + 0xEF8) = ebx;

loc_0001D74C: ;
    ecx = MEM32(esi + 0xEF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D762; /* je: equal / zero */

loc_0001D756: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0001D75Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001D75Au); } /* indirect call */
    }

loc_0001D75C: ;
    MEM32(esi + 0xEF0) = ebx;

loc_0001D762: ;
    eax = MEM32(esi + 0xF14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D77B; /* je: equal / zero */

loc_0001D76C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001D772u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001D772: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xF14) = ebx;

loc_0001D77B: ;
    ecx = MEM32(esi + 0xAB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D7A6; /* je: equal / zero */

loc_0001D785: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_0001D797; /* je: equal / zero */

loc_0001D78F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0001D795u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001D793u); } /* indirect call */
    }

loc_0001D795: ;
    goto loc_0001D7A0;

loc_0001D797: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001D79Du); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001D79D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001D7A0: ;
    MEM32(esi + 0xAB0) = ebx;

loc_0001D7A6: ;
    ecx = MEM32(esi + 0xEC4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D7D1; /* je: equal / zero */

loc_0001D7B0: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_0001D7C2; /* je: equal / zero */

loc_0001D7BA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0001D7C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001D7BEu); } /* indirect call */
    }

loc_0001D7C0: ;
    goto loc_0001D7CB;

loc_0001D7C2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001D7C8u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001D7C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001D7CB: ;
    MEM32(esi + 0xEC4) = ebx;

loc_0001D7D1: ;
    eax = MEM32(esi + 0xEDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D7ED; /* je: equal / zero */

loc_0001D7DB: ;
    ecx = MEM32(0x1DE460);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001D7E7u); RECOMP_ABI_CALL(0x000ECFB0u, sub_000ECFB0); /* call 0x000ECFB0 */

loc_0001D7E7: ;
    MEM32(esi + 0xEDC) = ebx;

loc_0001D7ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0001D800
 * Original: 0x0001D800 - 0x0001D835 (53 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001D800: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001D80Au); RECOMP_ABI_CALL(0x0001B6D0u, sub_0001B6D0); /* call 0x0001B6D0 */

loc_0001D80A: ;
    ecx = MEM32(0x1DC420);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001D832; /* je: equal / zero */

loc_0001D816: ;
    ecx = MEM32(0x1A50F0);
    ecx = ecx | 0x3000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1DC420) = eax;
    MEM32(0x1A50F0) = ecx;
    MEM32(0x1A5294) = eax;

loc_0001D832: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001D840
 * Original: 0x0001D840 - 0x0001D9BF (383 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D840(void)
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

loc_0001D840: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xEE0);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi + 0x4C;
    PUSH32(esp, 0x0001D857u); RECOMP_ABI_CALL(0x0006E540u, sub_0006E540); /* call 0x0006E540 */

loc_0001D857: ;
    eax = MEM32(esi + 0x654);
    edx = eax * 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001D86Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001D86A: ;
    ecx = MEM32(esi + 0x654);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 0xF14) = eax;
    PUSH32(esp, 0x0001D883u); RECOMP_ABI_CALL(0x00100DA0u, sub_00100DA0); /* call 0x00100DA0 */

loc_0001D883: ;
    edx = MEM32(esi + 0x654);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi + 0x904;
    PUSH32(esp, 0x0001D898u); RECOMP_ABI_CALL(0x000D0A40u, sub_000D0A40); /* call 0x000D0A40 */

loc_0001D898: ;
    eax = MEM32(esi + 0x654);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001D8FF; /* jle: less or equal (signed <=) */

loc_0001D8A4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    goto loc_0001D8B0;

    /* nop */

loc_0001D8B0: ;
    eax = MEM32(esi + 0x650);
    ebp = MEM32(edx + eax + 0x34);
    ecx = edx + eax + 0x34;
    eax = MEM32(esi + 0x928);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebp;
    ebp = MEM32(ecx + 4);
    MEM32(eax + 4) = ebp;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi + 0x650);
    eax = MEM32(edx + eax + 0x50);
    ecx = MEM32(esi + 0x928);
    MEM32(ecx + edi + 0xC) = eax;
    eax = MEM32(esi + 0x654);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x114;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001D8B0; /* jl: less (signed <) */

loc_0001D8FC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);

loc_0001D8FF: ;
    ecx = MEM32(esi + 0xEEC);
    PUSH32(esp, 0x0001D90Au); RECOMP_ABI_CALL(0x0001D3F0u, sub_0001D3F0); /* call 0x0001D3F0 */

loc_0001D90A: ;
    MEM32(esi + 0xF7C) = edi;
    MEM32(esi + 0xF80) = edi;
    MEM32(esi + 0xF84) = edi;
    MEM32(esi + 0xF8C) = edi;
    MEM32(esi + 0xF90) = edi;
    MEM32(esi + 0xF94) = edi;
    eax = 0x3F800000;
    MEM32(esi + 0xF78) = eax;
    MEM32(esi + 0xF88) = eax;
    MEM32(esi + 0xF98) = eax;
    fp_push(MEMF(esi + 0x8CC)); /* fld float */
    ecx = MEM32(esi + 0x8D0);
    MEM32(esi + 0xF88) = ecx;
    edx = ecx;
    MEM32(esi + 0xF98) = edx;
    MEMF(esi + 0xF78) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xFA0) = edi;
    MEM32(esi + 0xFA4) = edi;
    MEM32(esi + 0xFA8) = edi;
    MEM32(esi + 0xFB0) = edi;
    MEM32(esi + 0xFB4) = edi;
    MEM32(esi + 0xFB8) = edi;
    MEM32(esi + 0xF9C) = eax;
    MEM32(esi + 0xFAC) = eax;
    MEM32(esi + 0xFBC) = eax;
    fp_push(MEMF(esi + 0x8D4)); /* fld float */
    eax = MEM32(esi + 0x8D8);
    ecx = eax;
    POP32(esp, edi);
    MEMF(esi + 0xF9C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xFAC) = eax;
    MEM32(esi + 0xFBC) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001D9C0
 * Original: 0x0001D9C0 - 0x0001DB7A (442 bytes, 101 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001D9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001D9C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + 0x44);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    ebp = 0x3F800000;
    if (CMP_EQ(_fa, _fb)) goto loc_0001D9E3; /* je: equal / zero */

loc_0001D9D7: ;
    ecx = MEM32(esi + 0xEF0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0001D9E3u); RECOMP_ABI_CALL(0x000A58B0u, sub_000A58B0); /* call 0x000A58B0 */

loc_0001D9E3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0001D9F0;

    /* nop */
    edi = edi;

loc_0001D9F0: ;
    ecx = MEM32(esi + 0xAB0);
    eax = MEM32(ecx + ebx + 0x18C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001DA1E; /* je: equal / zero */

loc_0001DA03: ;
    _fa = (uint32_t)(MEM32(ecx + 0x190)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x190), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001DA11; /* jne: not equal / not zero */

loc_0001DA0B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001DA11u); RECOMP_ABI_CALL(0x000342C0u, sub_000342C0); /* call 0x000342C0 */

loc_0001DA11: ;
    ecx = MEM32(esi + 0xAB0);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001DA1Eu); RECOMP_ABI_CALL(0x00034FA0u, sub_00034FA0); /* call 0x00034FA0 */

loc_0001DA1E: ;
    _fb = (uint32_t)(0x4E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x4E8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x1D70 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001D9F0; /* jl: less (signed <) */

loc_0001DA2C: ;
    ecx = MEM32(esi + 0xEEC);
    MEM32(esi + 0xFC8) = edi;
    MEM32(esi + 0xFC4) = edi;
    MEM32(esi + 0xFCC) = edi;
    PUSH32(esp, 0x0001DA49u); RECOMP_ABI_CALL(0x0001D4B0u, sub_0001D4B0); /* call 0x0001D4B0 */

loc_0001DA49: ;
    SET_LO8(edx, MEM8(0x1C3E5C));
    MEM8(esi + 0x100C) = LO8(edx);
    edx = MEM32(esp + 0x18);
    MEM8(esi + 0x100D) = 0xFF;
    MEM32(esi + 0x1074) = edi;
    MEM32(esi + 0x1060) = edi;
    MEM32(esi + 0x105C) = edi;
    MEM32(esi + 0x1058) = edi;
    MEM32(esi + 0x1064) = edi;
    MEM32(esi + 0x1068) = edi;
    MEM32(esi + 0x106C) = edi;
    MEM32(esi + 0x1070) = ebp;
    MEM32(esi + 0x1034) = ebp;
    MEM32(esi + 0x1038) = edi;
    MEM32(esi + 0x103C) = edi;
    MEM32(esi + 0x1040) = edi;
    MEM32(esi + 0x1044) = ebp;
    MEM32(esi + 0x1048) = edi;
    MEM32(esi + 0x104C) = edi;
    MEM32(esi + 0x1050) = edi;
    MEM32(esi + 0x1054) = ebp;
    MEM32(esi + 0x1078) = ebp;
    MEM32(esi + 0x107C) = edi;
    MEM32(esi + 0x1080) = edi;
    MEM32(esi + 0x1084) = edi;
    MEM32(esi + 0x1088) = ebp;
    MEM32(esi + 0x108C) = edi;
    MEM32(esi + 0x1090) = edi;
    MEM32(esi + 0x1094) = edi;
    MEM32(esi + 0x1098) = ebp;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0001DB0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001DB07u); } /* indirect call */
    }

loc_0001DB0A: ;
    ecx = MEM32(esi + 0xEE8);
    MEM32(esi + 0xEC8) = edi;
    PUSH32(esp, 0x0001DB1Bu); RECOMP_ABI_CALL(0x000A43F0u, sub_000A43F0); /* call 0x000A43F0 */

loc_0001DB1B: ;
    ecx = MEM32(esi + 0xEF4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0001DB26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001DB23u); } /* indirect call */
    }

loc_0001DB26: ;
    ecx = esi + 0x28C;
    PUSH32(esp, edi);
    MEM32(ecx) = 1;
    PUSH32(esp, 0x0001DB38u); RECOMP_ABI_CALL(0x000D83C0u, sub_000D83C0); /* call 0x000D83C0 */

loc_0001DB38: ;
    ecx = MEM32(esi + 0x1120);
    MEM32(esi + 0x1114) = edi;
    MEM32(esi + 0x110C) = edi;
    MEM32(esi + 0x1110) = edi;
    MEM32(esi + 0x1118) = edi;
    MEM32(esi + 0x111C) = edi;
    MEM32(esi + 0x1124) = edi;
    PUSH32(esp, 0x0001DB67u); RECOMP_ABI_CALL(0x000FC4C0u, sub_000FC4C0); /* call 0x000FC4C0 */

loc_0001DB67: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0001DB6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001DB6Bu); } /* indirect call */
    }

loc_0001DB6E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0001DB80
 * Original: 0x0001DB80 - 0x0001DC61 (225 bytes, 72 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001DB80(void)
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

loc_0001DB80: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(0x1D74FC));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0001DBBC; /* jne: not equal / not zero */

loc_0001DB93: ;
    ecx = MEM32(0x1D74FC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3F800000);
    MEM32(0x1D74FC) = ecx;
    PUSH32(esp, 0x3F000000);
    ecx = 0x1D74F8;
    PUSH32(esp, 0x0001DBBCu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0001DBBC: ;
    ecx = esi;
    MEM32(esi + 8) = 3;
    PUSH32(esp, 0x0001DBCAu); RECOMP_ABI_CALL(0x0001A960u, sub_0001A960); /* call 0x0001A960 */

loc_0001DBCA: ;
    eax = MEM32(esi + 0x4C);
    ecx = esi + 0x4C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0001DBD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001DBD0u); } /* indirect call */
    }

loc_0001DBD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001DC2B; /* jle: less or equal (signed <=) */

loc_0001DBD7: ;
    fp_push(MEMF(esi + 0x54)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xC8)); /* fsub dword ptr [esi + 0xc8] */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xCC)); /* fsub dword ptr [esi + 0xcc] */
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xD0)); /* fsub dword ptr [esi + 0xd0] */
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
    PUSH32(esp, 0x0001DC11u); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_0001DC11: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AEFE0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1aefe0] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001DC29; /* jne: not equal / not zero */

loc_0001DC21: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x44)); /* fadd dword ptr [esi + 0x44] */
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0001DC2B;

loc_0001DC29: ;
    fp_pop(); /* fstp st(0) */

loc_0001DC2B: ;
    ecx = MEM32(esi + 0xF10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0001DC3F; /* je: equal / zero */

loc_0001DC39: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001DC3Fu); RECOMP_ABI_CALL(0x000A2F20u, sub_000A2F20); /* call 0x000A2F20 */

loc_0001DC3F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0001DC47u); RECOMP_ABI_CALL(0x0001BC10u, sub_0001BC10); /* call 0x0001BC10 */

loc_0001DC47: ;
    ecx = MEM32(esi + 0xEF4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0001DC53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001DC50u); } /* indirect call */
    }

loc_0001DC53: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001DC5Cu); RECOMP_ABI_CALL(0x00027AF0u, sub_00027AF0); /* call 0x00027AF0 */

loc_0001DC5C: ;
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
 * sub_0001DC70
 * Original: 0x0001DC70 - 0x0001EBAA (3898 bytes, 1004 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001DC70(void)
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

loc_0001DC70: ;
    eax = MEM32(0x1D9FE4);
    _fb = (uint32_t)(0x384) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x384));
    esp = esp - 0x384;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0001DC8F; /* je: equal / zero */

loc_0001DC87: ;
    fp_push(MEMF(0x1C91E0)); /* fld float */
    goto loc_0001DC97;

loc_0001DC8F: ;
    eax = MEM32(0x1DC340);
    fp_push(MEMF(eax + 8)); /* fld float */

loc_0001DC97: ;
    SET_LO8(eax, MEM8(esi + 0x100C));
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001DCAD; /* je: equal / zero */

loc_0001DCA5: ;
    edi = esi + 0x1078;
    goto loc_0001DCB6;

loc_0001DCAD: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0001DCB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001DCB1u); } /* indirect call */
    }

loc_0001DCB4: ;
    edi = eax;

loc_0001DCB6: ;
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0001DCC5u); RECOMP_ABI_CALL(0x00019B20u, sub_00019B20); /* call 0x00019B20 */

loc_0001DCC5: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001DCCCu); RECOMP_ABI_CALL(0x00019680u, sub_00019680); /* call 0x00019680 */

loc_0001DCCC: ;
    ecx = MEM32(0x1DA00C);
    ecx = MEM32(ecx + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001DCF1; /* je: equal / zero */

loc_0001DCDC: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    eax = esi + 0x109C;
    PUSH32(esp, eax);
    edx = esi + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001DCF1u); RECOMP_ABI_CALL(0x00101080u, sub_00101080); /* call 0x00101080 */

loc_0001DCF1: ;
    ecx = esi + 0x109C;
    edx = MEM32(ecx);
    eax = esi + 0x10AC;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    ecx = esi;
    PUSH32(esp, 0x0001DD1Au); RECOMP_ABI_CALL(0x0001C9C0u, sub_0001C9C0); /* call 0x0001C9C0 */

loc_0001DD1A: ;
    edx = MEM32(esi + 0x1008);
    fp_push(MEMF(edx + 0x98)); /* fld float */
    MEM32(esp + 0x28) = 1;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF048)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af048] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0001DD3F; /* je: equal / zero */

loc_0001DD3B: ;
    MEM32(esp + 0x28) = ebx;

loc_0001DD3F: ;
    _fa = (uint32_t)(MEM32(esi + 0x654)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x654), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x2C) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0001E521; /* jle: less or equal (signed <=) */

loc_0001DD4F: ;
    /* nop */

loc_0001DD50: ;
    edx = MEM32(esi + 0x650);
    eax = MEM32(esi);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x114);
    ecx = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(edx)) >> 32) & 1);
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0001DD6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001DD6Cu); } /* indirect call */
    }

loc_0001DD6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001DD7F; /* je: equal / zero */

loc_0001DD73: ;
    ecx = MEM32(esi + 0x2DC);
    MEM32(esp + 0x18) = ecx;
    goto loc_0001DD8E;

loc_0001DD7F: ;
    edx = MEM32(esi + 0x48);
    ecx = MEM32(edx + 0x44);
    PUSH32(esp, 0x0001DD8Au); RECOMP_ABI_CALL(0x000289B0u, sub_000289B0); /* call 0x000289B0 */

loc_0001DD8A: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001DD8E: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001DE67; /* je: equal / zero */

loc_0001DD9A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0001E028; /* ja: above (unsigned >) */

loc_0001DDA3: ;
    { uint32_t _jt = MEM32(ebx * 4 + 0x1EBAC); /* switch: 13 entries, 10 targets */
    if (_jt == 0x0001DDAAu) goto loc_0001DDAA;
    if (_jt == 0x0001DE01u) goto loc_0001DE01;
    if (_jt == 0x0001DE5Bu) goto loc_0001DE5B;
    if (_jt == 0x0001DE77u) goto loc_0001DE77;
    if (_jt == 0x0001DF4Bu) goto loc_0001DF4B;
    if (_jt == 0x0001DFE2u) goto loc_0001DFE2;
    if (_jt == 0x0001E587u) goto loc_0001E587;
    if (_jt == 0x0001E5F5u) goto loc_0001E5F5;
    if (_jt == 0x0001E666u) goto loc_0001E666;
    if (_jt == 0x0001E6B9u) goto loc_0001E6B9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001DDAA: ;
    fp_push(MEMF(esi + 0x3EC)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    eax = esp + 0x2C0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF330)); /* fmul dword ptr [0x1af330] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001DDCBu); RECOMP_ABI_CALL(0x000CF300u, sub_000CF300); /* call 0x000CF300 */

loc_0001DDCB: ;
    PUSH32(esp, eax);
    ecx = esi + 0xF9C;
    PUSH32(esp, ecx);
    edx = esp + 0x314;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001DDE0u); RECOMP_ABI_CALL(0x000CE660u, sub_000CE660); /* call 0x000CE660 */

loc_0001DDE0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, 0x0001DDF0u); RECOMP_ABI_CALL(0x00019100u, sub_00019100); /* call 0x00019100 */

loc_0001DDF0: ;
    fp_push(MEMF(0x1CA400)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0001E028;

loc_0001DE01: ;
    fp_push(MEMF(esi + 0x3EC)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    eax = esp + 0x1E8;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF330)); /* fmul dword ptr [0x1af330] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1AF36C)); /* fadd dword ptr [0x1af36c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001DE28u); RECOMP_ABI_CALL(0x000CF300u, sub_000CF300); /* call 0x000CF300 */

loc_0001DE28: ;
    PUSH32(esp, eax);
    ecx = esi + 0xF9C;
    PUSH32(esp, ecx);
    edx = esp + 0x188;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001DE3Du); RECOMP_ABI_CALL(0x000CE660u, sub_000CE660); /* call 0x000CE660 */

loc_0001DE3D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, 0x0001DE4Du); RECOMP_ABI_CALL(0x00019100u, sub_00019100); /* call 0x00019100 */

loc_0001DE4D: ;
    eax = MEM32(0x1CA400);
    MEM32(esp + 0x10) = eax;
    goto loc_0001E028;

loc_0001DE5B: ;
    ecx = esi + 0xF78;
    PUSH32(esp, ecx);
    goto loc_0001E014;

loc_0001DE67: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0001E028; /* ja: above (unsigned >) */

loc_0001DE70: ;
    { uint32_t _jt = MEM32(ebx * 4 + 0x1EBBC); /* switch: 9 entries, 7 targets */
    if (_jt == 0x0001DE77u) goto loc_0001DE77;
    if (_jt == 0x0001DF4Bu) goto loc_0001DF4B;
    if (_jt == 0x0001DFE2u) goto loc_0001DFE2;
    if (_jt == 0x0001E587u) goto loc_0001E587;
    if (_jt == 0x0001E5F5u) goto loc_0001E5F5;
    if (_jt == 0x0001E666u) goto loc_0001E666;
    if (_jt == 0x0001E6B9u) goto loc_0001E6B9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001DE77: ;
    fp_push(MEMF(esi + 0x3EC)); /* fld float */
    edx = MEM32(esi + 0x48);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    eax = MEM32(edx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF330)); /* fmul dword ptr [0x1af330] */
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_0001DECD; /* jne: not equal / not zero */

loc_0001DE9A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0001DE9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001DE9Cu); } /* indirect call */
    }

loc_0001DE9F: ;
    PUSH32(esp, ecx);
    ecx = esp + 0x234;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001DEB0u); RECOMP_ABI_CALL(0x000CF350u, sub_000CF350); /* call 0x000CF350 */

loc_0001DEB0: ;
    PUSH32(esp, eax);
    edx = esi + 0xF9C;
    PUSH32(esp, edx);
    eax = esp + 0x360;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001DEC5u); RECOMP_ABI_CALL(0x000CE660u, sub_000CE660); /* call 0x000CE660 */

loc_0001DEC5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0001E013;

loc_0001DECD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0001DED2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001DECFu); } /* indirect call */
    }

loc_0001DED2: ;
    PUSH32(esp, ecx);
    eax = esp + 0x27C;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001DEE3u); RECOMP_ABI_CALL(0x000CF350u, sub_000CF350); /* call 0x000CF350 */

loc_0001DEE3: ;
    PUSH32(esp, eax);
    ecx = esi + 0xF9C;
    PUSH32(esp, ecx);
    edx = esp + 0x1B0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001DEF8u); RECOMP_ABI_CALL(0x000CE660u, sub_000CE660); /* call 0x000CE660 */

loc_0001DEF8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, 0x0001DF08u); RECOMP_ABI_CALL(0x00019100u, sub_00019100); /* call 0x00019100 */

loc_0001DF08: ;
    fp_push(MEMF(0x1CA404)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    PUSH32(esp, ecx);
    eax = esp + 0x1C4;
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x8DC)); /* fsub dword ptr [esi + 0x8dc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001DF2Au); RECOMP_ABI_CALL(0x000CF440u, sub_000CF440); /* call 0x000CF440 */

loc_0001DF2A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, 0x0001DF3Au); RECOMP_ABI_CALL(0x0001B010u, sub_0001B010); /* call 0x0001B010 */

loc_0001DF3A: ;
    fp_push(MEMF(0x1CA400)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0001E028;

loc_0001DF4B: ;
    fp_push(MEMF(esi + 0x3EC)); /* fld float */
    edx = MEM32(esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF330)); /* fmul dword ptr [0x1af330] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1AF36C)); /* fadd dword ptr [0x1af36c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0001DF6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001DF6Bu); } /* indirect call */
    }

loc_0001DF6E: ;
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, ecx);
    eax = esp + 0x210;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001DF81u); RECOMP_ABI_CALL(0x000CF350u, sub_000CF350); /* call 0x000CF350 */

loc_0001DF81: ;
    PUSH32(esp, eax);
    ecx = esi + 0xF9C;
    PUSH32(esp, ecx);
    edx = esp + 0x264;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001DF96u); RECOMP_ABI_CALL(0x000CE660u, sub_000CE660); /* call 0x000CE660 */

loc_0001DF96: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, 0x0001DFA6u); RECOMP_ABI_CALL(0x00019100u, sub_00019100); /* call 0x00019100 */

loc_0001DFA6: ;
    fp_push(MEMF(0x1CA404)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    PUSH32(esp, ecx);
    eax = esp + 0x29C;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x8DC)); /* fadd dword ptr [esi + 0x8dc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001DFC6u); RECOMP_ABI_CALL(0x000CF440u, sub_000CF440); /* call 0x000CF440 */

loc_0001DFC6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, 0x0001DFD6u); RECOMP_ABI_CALL(0x0001B010u, sub_0001B010); /* call 0x0001B010 */

loc_0001DFD6: ;
    ecx = MEM32(0x1CA400);
    MEM32(esp + 0x10) = ecx;
    goto loc_0001E028;

loc_0001DFE2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0001DFEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001DFE7u); } /* indirect call */
    }

loc_0001DFEA: ;
    PUSH32(esp, ecx);
    eax = esp + 0x2E4;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001DFFBu); RECOMP_ABI_CALL(0x000CF2B0u, sub_000CF2B0); /* call 0x000CF2B0 */

loc_0001DFFB: ;
    PUSH32(esp, eax);
    ecx = esi + 0xF78;
    PUSH32(esp, ecx);
    edx = esp + 0x338;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001E010u); RECOMP_ABI_CALL(0x000CE660u, sub_000CE660); /* call 0x000CE660 */

loc_0001E010: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001E013: ;
    PUSH32(esp, eax);

loc_0001E014: ;
    ecx = esp + 0x80;
    PUSH32(esp, 0x0001E020u); RECOMP_ABI_CALL(0x00019100u, sub_00019100); /* call 0x00019100 */

loc_0001E020: ;
    MEM32(esp + 0x10) = 0;

loc_0001E028: ;
    _fa = (uint32_t)(MEM8(esi + 0x100C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x100C), 0xFF (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001E085; /* je: equal / zero */

loc_0001E031: ;
    PUSH32(esp, 0x1DAEB4);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x34)) >> 32) & 1);
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x14C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001E047u); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_0001E047: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x2C) = edx;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1058)); /* fadd dword ptr [esi + 0x1058] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x105C)); /* fadd dword ptr [esi + 0x105c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1060)); /* fadd dword ptr [esi + 0x1060] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0001E426;

loc_0001E085: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ebp = esi + 0x88;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp)); /* fmul dword ptr [ebp] */
    MEMF(esp + 0xF4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 4)); /* fmul dword ptr [ebp + 4] */
    MEMF(esp + 0xF8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    fp_push(MEMF(esi + ebx * 4 + 0xF60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x80)); /* fmul dword ptr [edi + 0x80] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x84)); /* fmul dword ptr [edi + 0x84] */
    MEMF(esp + 0xD4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x88)); /* fmul dword ptr [edi + 0x88] */
    MEMF(esp + 0xD8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x74)); /* fadd dword ptr [edi + 0x74] */
    fp_push(MEMF(esp + 0xD4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x78)); /* fadd dword ptr [edi + 0x78] */
    MEMF(esp + 0xE0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xD8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x7C)); /* fadd dword ptr [edi + 0x7c] */
    MEMF(esp + 0xE4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xF4)); /* fadd dword ptr [esp + 0xf4] */
    fp_push(MEMF(esp + 0xE0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xF8)); /* fadd dword ptr [esp + 0xf8] */
    fp_push(MEMF(esp + 0xE4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    MEMF(esp + 0x138) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x138);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_NE(_fa, _fb)) goto loc_0001E176; /* jne: not equal / not zero */

loc_0001E146: ;
    ecx = esi + 0xF18;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x174;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001E15Fu); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_0001E15F: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x2C) = edx;
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = eax;

loc_0001E176: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0001E17Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001E17Au); } /* indirect call */
    }

loc_0001E17D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001E426; /* je: equal / zero */

loc_0001E185: ;
    fp_push(MEMF(edi + 0x74)); /* fld float */
    edx = MEM32(ebp + 8);
    fp_push(MEMF(edi + 0x78)); /* fld float */
    ecx = MEM32(edi + 0x88);
    fp_push(MEMF(edi + 8)); /* fld float */
    MEM32(esp + 0x120) = edx;
    fp_push(MEMF(edi + 0x80)); /* fld float */
    eax = MEM32(edi + 0x7C);
    fp_push(MEMF(edi + 0x84)); /* fld float */
    MEM32(esp + 0x12C) = ecx;
    fp_push(MEMF(ebp)); /* fld float */
    ecx = MEM32(0x1D9FB8);
    fp_push(MEMF(ebp + 4)); /* fld float */
    MEM32(esp + 0x114) = eax;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, ebp);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x124)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0xBC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0xC0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x130)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xBC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x104) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x108) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x118)); /* fadd dword ptr [esp + 0x118] */
    fp_push(MEMF(esp + 0x104)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xB0)); /* fadd dword ptr [esp + 0xb0] */
    fp_push(MEMF(esp + 0x108)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xB4)); /* fadd dword ptr [esp + 0xb4] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xB8)); /* fadd dword ptr [esp + 0xb8] */
    MEMF(esp + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x148);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = eax;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x38);
    ebx = MEM32(edx + 0x24);
    fp_push(MEMF(edi + 0x38)); /* fld float */
    eax = MEM32(edi + 0x34);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi + 0x3C);
    edx = esp + 0x38;
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x168;
    PUSH32(esp, eax);
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x44) = 0;
    PUSH32(esp, 0x0001E2C7u); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_0001E2C7: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x38) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x3C) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0001E2E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001E2E2u); } /* indirect call */
    }

loc_0001E2E5: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    PUSH32(esp, ebp);
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    ecx = esp + 0x5C;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEM32(esp + 0x68) = 0;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    MEM32(esp + 0x70) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    eax = esp + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x50)); /* fsub dword ptr [edi + 0x50] */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001E336u); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_0001E336: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0001E34Eu); RECOMP_ABI_CALL(0x000D37D0u, sub_000D37D0); /* call 0x000D37D0 */

loc_0001E34E: ;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AEFE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1aefe4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0001E422; /* jnp: not parity */

loc_0001E363: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    ecx = MEM32(edi + 0x50);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    PUSH32(esp, ebp);
    fp_push(MEMF(esp + 0x60)); /* fld float */
    edx = esp + 0x50;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    PUSH32(esp, edx);
    fp_push(MEMF(esp + 0x68)); /* fld float */
    eax = esp + 0x15C;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    PUSH32(esp, eax);
    MEMF(esp + 0xFC) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(esp + 0x58) = 0;
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esp + 0x5C) = ecx;
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x60) = 0;
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x40)); /* fadd dword ptr [esp + 0x40] */
    MEMF(esp + 0xAC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    MEMF(esp + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xFC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x48)); /* fadd dword ptr [esp + 0x48] */
    MEMF(esp + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001E3E6u); RECOMP_ABI_CALL(0x000CE420u, sub_000CE420); /* call 0x000CE420 */

loc_0001E3E6: ;
    fp_push(MEMF(esp + 0xAC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0xA4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0xA8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(esp + 0xCC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xCC);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = ecx;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001E422: ;
    ebx = MEM32(esp + 0x2C);

loc_0001E426: ;
    PUSH32(esp, 0x1DAEB4);
    edx = esp + 0x80;
    PUSH32(esp, edx);
    eax = esp + 0x378;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001E440u); RECOMP_ABI_CALL(0x000CE660u, sub_000CE660); /* call 0x000CE660 */

loc_0001E440: ;
    ecx = esp + 0x88;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001E4A4; /* je: equal / zero */

loc_0001E44E: ;
    edx = MEM32(eax);
    MEM32(esp + 0x7C) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x80) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x84) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(esp + 0x88) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(esp + 0x8C) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 0x90) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(esp + 0x94) = edx;
    ecx = MEM32(eax + 0x1C);
    MEM32(esp + 0x98) = ecx;
    edx = MEM32(eax + 0x20);
    MEM32(esp + 0x9C) = edx;

loc_0001E4A4: ;
    ecx = MEM32(esi + 0xEC4);
    eax = MEM32(esi);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x45C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0001E4BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001E4B8u); } /* indirect call */
    }

loc_0001E4BB: ;
    ecx = esp + 0x7C;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    edx = esp + 0x44;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    ecx = edi;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001E4ECu); RECOMP_ABI_CALL(0x00035AA0u, sub_00035AA0); /* call 0x00035AA0 */

loc_0001E4EC: ;
    _fb = (uint32_t)(0x3A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x3A4)) >> 32) & 1);
    edi = edi + 0x3A4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x10AC;
    ecx = MEM32(eax);
    MEM32(edi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(edi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = edx;
    eax = MEM32(esi + 0x654);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x2C) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0001DD50; /* jl: less (signed <) */

loc_0001E521: ;
    eax = MEM32(0x1D9FE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001E534; /* je: equal / zero */

loc_0001E52A: ;
    MEM32(esp + 0x18) = 0;
    goto loc_0001E54A;

loc_0001E534: ;
    fp_push(MEMF(esi + 0xFC4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xFC0)); /* fadd dword ptr [esi + 0xfc0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF014)); /* fmul dword ptr [0x1af014] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001E54A: ;
    ebp = MEM32(esp + 0x18);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x2C) = eax;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x28) = 6;
    /* nop */

loc_0001E560: ;
    edi = MEM32(esi + 0xAB0);
    ecx = MEM32(edi + ebx + 0x190);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ebx)) >> 32) & 1);
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001E790; /* je: equal / zero */

loc_0001E577: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0001E763; /* ja: above (unsigned >) */

loc_0001E580: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1EBCC); /* switch: 5 entries, 4 targets */
    if (_jt == 0x0001E587u) goto loc_0001E587;
    if (_jt == 0x0001E5F5u) goto loc_0001E5F5;
    if (_jt == 0x0001E666u) goto loc_0001E666;
    if (_jt == 0x0001E6B9u) goto loc_0001E6B9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001E587: ;
    PUSH32(esp, ebp);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x0001E592u); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_0001E592: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0xEE0);
    ecx = MEM32(eax + 0x470);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001E5B7; /* je: equal / zero */

loc_0001E5A6: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = MEM32(esi + 0x650);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001E5B7: ;
    PUSH32(esp, ebp);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x0001E5C2u); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_0001E5C2: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x120)); /* fadd dword ptr [edi + 0x120] */
    edx = esp + 0x40;
    PUSH32(esp, edx);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x124)); /* fadd dword ptr [edi + 0x124] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x128)); /* fld float */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001E5F0u); RECOMP_ABI_CALL(0x00034E40u, sub_00034E40); /* call 0x00034E40 */

loc_0001E5F0: ;
    goto loc_0001E76A;

loc_0001E5F5: ;
    PUSH32(esp, ebp);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x0001E600u); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_0001E600: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0xEE0);
    ecx = MEM32(eax + 0x470);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001E628; /* je: equal / zero */

loc_0001E614: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = MEM32(esi + 0x650);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x11C)); /* fadd dword ptr [ecx + 0x11c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001E628: ;
    PUSH32(esp, ebp);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x0001E633u); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_0001E633: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x120)); /* fadd dword ptr [edi + 0x120] */
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x124)); /* fadd dword ptr [edi + 0x124] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x128)); /* fld float */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001E661u); RECOMP_ABI_CALL(0x00034E40u, sub_00034E40); /* call 0x00034E40 */

loc_0001E661: ;
    goto loc_0001E76A;

loc_0001E666: ;
    PUSH32(esp, ebp);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x0001E671u); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_0001E671: ;
    MEMF(esp + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x0001E683u); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_0001E683: ;
    fp_push(MEMF(esp + 0xC4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x120)); /* fadd dword ptr [edi + 0x120] */
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x124)); /* fadd dword ptr [edi + 0x124] */
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x128)); /* fld float */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001E6B4u); RECOMP_ABI_CALL(0x00034E40u, sub_00034E40); /* call 0x00034E40 */

loc_0001E6B4: ;
    goto loc_0001E76A;

loc_0001E6B9: ;
    eax = MEM32(0x1D9FE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0001E713; /* jne: not equal / not zero */

loc_0001E6C2: ;
    fp_push(MEMF(esi + 0x278)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF010)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af010] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001E6F5; /* jp: parity */

loc_0001E6D5: ;
    fp_push(MEMF(0x1AF010)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x278)); /* fsub dword ptr [esi + 0x278] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x1AF010)); /* fdiv dword ptr [0x1af010] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF008)); /* fmul dword ptr [0x1af008] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001E6F5: ;
    fp_push(MEMF(esi + 0xFC4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xFC0)); /* fadd dword ptr [esi + 0xfc0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF00C)); /* fmul dword ptr [0x1af00c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esp + 0x18);

loc_0001E713: ;
    PUSH32(esp, ebp);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x0001E71Eu); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_0001E71E: ;
    MEMF(esp + 0xE8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x0001E730u); RECOMP_ABI_CALL(0x000CE100u, sub_000CE100); /* call 0x000CE100 */

loc_0001E730: ;
    fp_push(MEMF(esp + 0xE8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x120)); /* fadd dword ptr [edi + 0x120] */
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x124)); /* fadd dword ptr [edi + 0x124] */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x128)); /* fld float */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001E761u); RECOMP_ABI_CALL(0x00034E40u, sub_00034E40); /* call 0x00034E40 */

loc_0001E761: ;
    goto loc_0001E76A;

loc_0001E763: ;
    ecx = edi;
    PUSH32(esp, 0x0001E76Au); RECOMP_ABI_CALL(0x000358A0u, sub_000358A0); /* call 0x000358A0 */

loc_0001E76A: ;
    eax = esi + 0x10AC;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x80)) >> 32) & 1);
    edi = edi + 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = edx;
    ecx = MEM32(eax + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(edi + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = eax;
    eax = MEM32(esp + 0x2C);

loc_0001E790: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x4E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x4E8)) >> 32) & 1);
    ebx = ebx + 0x4E8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x28) = ecx;
    if ((_fa != 0)) goto loc_0001E560; /* jne: not equal / not zero */

loc_0001E7AA: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = MEM32(esp + 0x30);
    if (CMP_EQ(_fa, _fb)) goto loc_0001E7D0; /* je: equal / zero */

loc_0001E7B8: ;
    ecx = MEM32(esi + 0xEF0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001E7C4u); RECOMP_ABI_CALL(0x000A5900u, sub_000A5900); /* call 0x000A5900 */

loc_0001E7C4: ;
    ecx = MEM32(esi + 0xEF0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001E7D0u); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_0001E7D0: ;
    ecx = MEM32(esi + 0xEF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001E7E0; /* je: equal / zero */

loc_0001E7DA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001E7E0u); RECOMP_ABI_CALL(0x000AD890u, sub_000AD890); /* call 0x000AD890 */

loc_0001E7E0: ;
    eax = MEM32(esi + 0xEFC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001E83E; /* je: equal / zero */

loc_0001E7EA: ;
    ecx = MEM32(esi + 0xF00);
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    eax = esi + 0xA0;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    edx = esp + 0x50;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    PUSH32(esp, ecx);
    ecx = MEM32(0x1DE45C);
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x54)); /* fadd dword ptr [esi + 0x54] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x58)); /* fadd dword ptr [esi + 0x58] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x5C)); /* fadd dword ptr [esi + 0x5c] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001E83Eu); RECOMP_ABI_CALL(0x000EF660u, sub_000EF660); /* call 0x000EF660 */

loc_0001E83E: ;
    eax = MEM32(esi + 0x48);
    ebx = MEM32(eax + 0x44);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001E99E; /* je: equal / zero */

loc_0001E84E: ;
    edi = MEM32(ebx + 0x278);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001E8A3; /* jne: not equal / not zero */

loc_0001E858: ;
    MEM32(ebx + 0x330) = eax;
    ecx = MEM32(esi + 0x1008);
    _fa = (uint32_t)(MEM32(ecx + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x90), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0001E8A3; /* jle: less or equal (signed <=) */

loc_0001E86C: ;
    ecx = MEM32(ecx + 0x70);
    edx = esi + 0x10D4;

loc_0001E875: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001E899; /* jne: not equal / not zero */

loc_0001E87A: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x7F7FFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001E899; /* jne: not equal / not zero */

loc_0001E882: ;
    ebp = MEM32(esi + 0x1008);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(4)) >> 32) & 1);
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x90) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0001E875; /* jl: less (signed <) */

loc_0001E897: ;
    goto loc_0001E8A3;

loc_0001E899: ;
    MEM32(ebx + 0x330) = 1;

loc_0001E8A3: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = 0x7F7FFFFF;
    if (CMP_EQ(_fa, _fb)) goto loc_0001E94E; /* je: equal / zero */

loc_0001E8B5: ;
    eax = MEM32(ebx + 0x330);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001E992; /* je: equal / zero */

loc_0001E8C3: ;
    ecx = MEM32(0x1D9FB8);
    eax = MEM32(ecx + 0x54);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0001E992; /* jle: less or equal (signed <=) */

loc_0001E8D6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0001E8DCu); RECOMP_ABI_CALL(0x000A1780u, sub_000A1780); /* call 0x000A1780 */

loc_0001E8DC: ;
    edi = eax;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0001E8E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001E8E2u); } /* indirect call */
    }

loc_0001E8E5: ;
    ecx = MEM32(ebx + 0x18);
    fp_push(MEMF(ecx + 8)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x10)); /* fsub dword ptr [eax + 0x10] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x14)); /* fsub dword ptr [eax + 0x14] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x18)); /* fsub dword ptr [eax + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x3C)); /* fmul dword ptr [eax + 0x3c] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x38)); /* fmul dword ptr [eax + 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x34)); /* fmul dword ptr [eax + 0x34] */
    eax = MEM32(ebx + 0x2E0);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x30)); /* fmul dword ptr [edi + 0x30] */
    fp_push(MEMF(eax + 0x88)); /* fld float */
    fp_top() = RECOMP_FP_PC(MEMF(edi + 0x20) - fp_top()); /* fsubr dword ptr [edi + 0x20] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0001E93C; /* jne: not equal / not zero */

loc_0001E92B: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001E93C; /* jp: parity */

loc_0001E936: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0001E93E;

loc_0001E93C: ;
    fp_pop(); /* fstp st(0) */

loc_0001E93E: ;
    ecx = MEM32(0x1D9FB8);
    eax = MEM32(ecx + 0x54);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0001E8D6; /* jl: less (signed <) */

loc_0001E94C: ;
    goto loc_0001E992;

loc_0001E94E: ;
    eax = MEM32(esi + 0x1008);
    ecx = MEM32(eax + 0x98);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0001E992; /* jle: less or equal (signed <=) */

loc_0001E968: ;
    ecx = MEM32(esi + 0x1008);
    eax = MEM32(eax + 0x70);
    ecx = MEM32(ecx + 0x90);

loc_0001E977: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001E981; /* jne: not equal / not zero */

loc_0001E97C: ;
    edx = 1;

loc_0001E981: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0001E977; /* jne: not equal / not zero */

loc_0001E987: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001E992; /* je: equal / zero */

loc_0001E98B: ;
    ecx = ebx;
    PUSH32(esp, 0x0001E992u); RECOMP_ABI_CALL(0x00020960u, sub_00020960); /* call 0x00020960 */

loc_0001E992: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0001E99Eu); RECOMP_ABI_CALL(0x0002B140u, sub_0002B140); /* call 0x0002B140 */

loc_0001E99E: ;
    eax = MEM32(0x1D9FB8);
    ecx = MEM32(eax + 0x50);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0001EAD5; /* jle: less or equal (signed <=) */

loc_0001E9B0: ;
    eax = MEM32(0x1CA40C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0001E9CE; /* jne: not equal / not zero */

loc_0001E9B9: ;
    ecx = MEM32(esi + 0x1008);
    edx = MEM32(ecx + 0x74);
    MEM32(edx + edi * 4) = 0;
    goto loc_0001EAC3;

loc_0001E9CE: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x0001E9D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001E9D3u); } /* indirect call */
    }

loc_0001E9D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0001EA84; /* jne: not equal / not zero */

loc_0001E9DE: ;
    eax = MEM32(0x1D7500);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0001EA84; /* jne: not equal / not zero */

loc_0001E9EB: ;
    ecx = MEM32(esi + 0xEF4);
    eax = MEM32(ecx + edi * 4 + 0x200);
    edx = MEM32(esi + 0x48);
    ecx = MEM32(edx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(esi + 0x1008);
    if (CMP_EQ(_fa, _fb)) goto loc_0001EA45; /* je: equal / zero */

loc_0001EA08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(ecx + 0x74);
    MEM32(edx + edi * 4) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_0001EA2E; /* jl: less (signed <) */

loc_0001EA17: ;
    eax = MEM32(esi + 0x1008);
    fp_push(MEMF(0x1AF068)); /* fld float */
    ecx = MEM32(eax + 0x7C);
    MEMF(ecx + edi * 4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0001EAC3;

loc_0001EA2E: ;
    eax = MEM32(esi + 0x1008);
    fp_push(MEMF(0x1AF060)); /* fld float */
    ecx = MEM32(eax + 0x7C);
    MEMF(ecx + edi * 4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0001EAC3;

loc_0001EA45: ;
    ecx = MEM32(ecx + 0x74);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    edx = edx & 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ecx + edi * 4) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0001EA70; /* jl: less (signed <) */

loc_0001EA5C: ;
    edx = MEM32(esi + 0x1008);
    fp_push(MEMF(0x1AF064)); /* fld float */
    eax = MEM32(edx + 0x7C);
    MEMF(eax + edi * 4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0001EAC3;

loc_0001EA70: ;
    edx = MEM32(esi + 0x1008);
    fp_push(MEMF(0x1AF060)); /* fld float */
    eax = MEM32(edx + 0x7C);
    MEMF(eax + edi * 4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0001EAC3;

loc_0001EA84: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx + 0x14C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0001EAA3; /* jne: not equal / not zero */

loc_0001EA91: ;
    edx = MEM32(esi + 0x1008);
    eax = MEM32(edx + 0x74);
    MEM32(eax + edi * 4) = 3;
    goto loc_0001EAC3;

loc_0001EAA3: ;
    ecx = MEM32(esi + 0x1008);
    edx = MEM32(ecx + 0x74);
    MEM32(edx + edi * 4) = 1;
    eax = MEM32(esi + 0x1008);
    ecx = MEM32(eax + 0x7C);
    MEM32(ecx + edi * 4) = 0x3F800000;

loc_0001EAC3: ;
    edx = MEM32(0x1D9FB8);
    eax = MEM32(edx + 0x50);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0001E9B0; /* jl: less (signed <) */

loc_0001EAD5: ;
    PUSH32(esp, 0x0001EADAu); RECOMP_ABI_CALL(0x0009FEF0u, sub_0009FEF0); /* call 0x0009FEF0 */

loc_0001EADA: ;
    ecx = MEM32(esi + 0xEF4);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x1E0) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x1104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1104), 0x7F7FFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001EB0F; /* je: equal / zero */

loc_0001EAFA: ;
    edx = MEM32(esi + 0x1008);
    fp_push(MEMF(edx + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x1104)); /* fsub dword ptr [esi + 0x1104] */
    MEMF(esi + 0xF0C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001EB0F: ;
    fp_push(MEMF(esi + 0xF0C)); /* fld float */
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xF08)); /* fsub dword ptr [esi + 0xf08] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xF08)); /* fadd dword ptr [esi + 0xf08] */
    MEMF(esi + 0xF08) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001EB34u); RECOMP_ABI_CALL(0x0001A880u, sub_0001A880); /* call 0x0001A880 */

loc_0001EB34: ;
    ecx = MEM32(esi + 0xEF4);
    PUSH32(esp, 0x0001EB3Fu); RECOMP_ABI_CALL(0x000AAD10u, sub_000AAD10); /* call 0x000AAD10 */

loc_0001EB3F: ;
    eax = MEM32(esi + 0x654);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0001EB67; /* jle: less or equal (signed <=) */

loc_0001EB4B: ;
    goto loc_0001EB50;

    /* nop */

loc_0001EB50: ;
    ecx = MEM32(esi + 0xEF4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0001EB5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001EB59u); } /* indirect call */
    }

loc_0001EB5C: ;
    eax = MEM32(esi + 0x654);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0001EB50; /* jl: less (signed <) */

loc_0001EB67: ;
    ecx = MEM32(esi + 0xEF4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0001EB72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001EB6Fu); } /* indirect call */
    }

loc_0001EB72: ;
    ecx = MEM32(esi + 0xEF4);
    PUSH32(esp, 0x0001EB7Du); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_0001EB7D: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0001EB89u); RECOMP_ABI_CALL(0x0001D180u, sub_0001D180); /* call 0x0001D180 */

loc_0001EB89: ;
    ecx = MEM32(esi + 0x10C8);
    POP32(esp, edi);
    MEM32(esi + 0x10CC) = ecx;
    MEM32(esi + 0x10C8) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x384) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x384)) >> 32) & 1);
    esp = esp + 0x384;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001EBE0
 * Original: 0x0001EBE0 - 0x0001ED6D (397 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001EBE0(void)
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

loc_0001EBE0: ;
    _fb = (uint32_t)(0x194) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x194;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0xAB0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x94);
    eax = MEM32(ebp + 0x64);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0001ED63; /* jle: less or equal (signed <=) */

loc_0001EC0C: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0001EC10: ;
    ecx = MEM32(ebp + 0xC8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0001EC22u); RECOMP_ABI_CALL(0x0001C940u, sub_0001C940); /* call 0x0001C940 */

loc_0001EC22: ;
    PUSH32(esp, 6);
    edx = esp + 0x28;
    PUSH32(esp, 0x1AF388);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001EC33u); RECOMP_ABI_CALL(0x00102570u, sub_00102570); /* call 0x00102570 */

loc_0001EC33: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001EC51; /* je: equal / zero */

loc_0001EC3A: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x7C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001EC10; /* jl: less (signed <) */

loc_0001EC46: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x194) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x194;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0001EC51: ;
    ebp = MEM32(esp + 0x14);
    edi = MEM32(ebp + 0xEE0);
    eax = esp + 0xA0;
    PUSH32(esp, 0x1AF370);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001EC6Du); RECOMP_ABI_CALL(0x0012B3E8u, sub_0012B3E8); /* call 0x0012B3E8 */

loc_0001EC6D: ;
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x0001EC77u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001EC77: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001EC89; /* je: equal / zero */

loc_0001EC7E: ;
    ecx = eax;
    PUSH32(esp, 0x0001EC85u); RECOMP_ABI_CALL(0x000FA160u, sub_000FA160); /* call 0x000FA160 */

loc_0001EC85: ;
    esi = eax;
    goto loc_0001EC8B;

loc_0001EC89: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001EC8B: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0001EC94u); RECOMP_ABI_CALL(0x000F9DF0u, sub_000F9DF0); /* call 0x000F9DF0 */

loc_0001EC94: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    edx = esp + 0xB0;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0x0001ECC5u); RECOMP_ABI_CALL(0x000F9E30u, sub_000F9E30); /* call 0x000F9E30 */

loc_0001ECC5: ;
    eax = MEM32(esi + 0x54);
    MEM32(eax + 0x4C) = 2;
    ecx = MEM32(esi + 0x54);
    MEM32(ecx + 0x84) = 0x3E4CCCCD;
    edx = MEM32(esi + 0x54);
    MEM32(edx + 0x58) = 0x41A00000;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    eax = 0x3F800000;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x3C) = eax;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x54)); /* fadd dword ptr [edi + 0x54] */
    PUSH32(esp, 0x5C);
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x58)); /* fadd dword ptr [edi + 0x58] */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x5C)); /* fadd dword ptr [edi + 0x5c] */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001ED37u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001ED37: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001ED4E; /* je: equal / zero */

loc_0001ED3E: ;
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x0001ED4Cu); RECOMP_ABI_CALL(0x000A2DC0u, sub_000A2DC0); /* call 0x000A2DC0 */

loc_0001ED4C: ;
    goto loc_0001ED50;

loc_0001ED4E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001ED50: ;
    ecx = MEM32(ebp + 0x1008);
    PUSH32(esp, esi);
    MEM32(ebp + 0xF10) = eax;
    PUSH32(esp, 0x0001ED62u); RECOMP_ABI_CALL(0x000FC9C0u, sub_000FC9C0); /* call 0x000FC9C0 */

loc_0001ED62: ;
    POP32(esp, esi);

loc_0001ED63: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x194) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x194;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001ED70
 * Original: 0x0001ED70 - 0x0001F18D (1053 bytes, 280 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001ED70(void)
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

loc_0001ED70: ;
    _fb = (uint32_t)(0x850) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x850;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x1D9FB4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(0x1D9FB8);
    PUSH32(esp, eax);
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x0001ED8Fu); RECOMP_ABI_CALL(0x000A1780u, sub_000A1780); /* call 0x000A1780 */

loc_0001ED8F: ;
    esi = eax;
    eax = MEM32(esi + 0xC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001EDA6; /* je: equal / zero */

loc_0001ED9B: ;
    ecx = MEM32(ebx + 0x48);
    ecx = MEM32(ecx + 0x44);
    PUSH32(esp, 0x0001EDA6u); RECOMP_ABI_CALL(0x0002DF10u, sub_0002DF10); /* call 0x0002DF10 */

loc_0001EDA6: ;
    fp_push(MEMF(ebx + 0x111C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0001F184; /* jnp: not parity */

loc_0001EDBD: ;
    edx = MEM32(ebx + 0x48);
    SET_LO8(eax, MEM8(edx + 0x54));
    SET_LO8(ecx, MEM8(0x1D9FB4));
    SET_LO8(eax, LO8(eax) >> LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001F184; /* je: equal / zero */

loc_0001EDD3: ;
    ecx = esi;
    PUSH32(esp, 0x0001EDDAu); RECOMP_ABI_CALL(0x0007E0A0u, sub_0007E0A0); /* call 0x0007E0A0 */

loc_0001EDDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001F184; /* je: equal / zero */

loc_0001EDE2: ;
    ecx = esp + 0x80;
    PUSH32(esp, 0x0001EDEEu); RECOMP_ABI_CALL(0x000192A0u, sub_000192A0); /* call 0x000192A0 */

loc_0001EDEE: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0001EDFAu); RECOMP_ABI_CALL(0x000192E0u, sub_000192E0); /* call 0x000192E0 */

loc_0001EDFA: ;
    edx = esp + 0x40;
    ecx = 0x60;
    PUSH32(esp, 0x0001EE08u); RECOMP_ABI_CALL(0x00195820u, sub_00195820); /* call 0x00195820 */

loc_0001EE08: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0001EE19u); RECOMP_ABI_CALL(0x000E5430u, sub_000E5430); /* call 0x000E5430 */

loc_0001EE19: ;
    PUSH32(esp, 0x0001EE1Eu); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_0001EE1E: ;
    PUSH32(esp, 0x1DE5D0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0001EE2Au); RECOMP_ABI_CALL(0x000E6A00u, sub_000E6A00); /* call 0x000E6A00 */

loc_0001EE2A: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0001EE33u); RECOMP_ABI_CALL(0x00019960u, sub_00019960); /* call 0x00019960 */

loc_0001EE33: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0001EE3Cu); RECOMP_ABI_CALL(0x000199A0u, sub_000199A0); /* call 0x000199A0 */

loc_0001EE3C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0001EE43u); RECOMP_ABI_CALL(0x0001D270u, sub_0001D270); /* call 0x0001D270 */

loc_0001EE43: ;
    eax = MEM32(0x1DE3E8);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001EE60; /* je: equal / zero */

loc_0001EE4F: ;
    PUSH32(esp, 0);
    MEM32(0x1DE3E8) = 0;
    PUSH32(esp, 0x0001EE60u); RECOMP_ABI_CALL(0x001931B0u, sub_001931B0); /* call 0x001931B0 */

loc_0001EE60: ;
    fp_push(MEMF(0x1DE6EC)); /* fld float */
    PUSH32(esp, ebp);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1DC16C)); /* fmul dword ptr [0x1dc16c] */
    PUSH32(esp, edi);
    PUSH32(esp, 0x124AE0);
    PUSH32(esp, 0x51);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xC);
    fp_push(MEMF(0x1DE6F4)); /* fld float */
    edx = esp + 0x4A0;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1DE6EC)); /* fadd dword ptr [0x1de6ec] */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1DC16C)); /* fmul dword ptr [0x1dc16c] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1DE6F0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1DC168)); /* fmul dword ptr [0x1dc168] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1DE6F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1DE6F0)); /* fadd dword ptr [0x1de6f0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1DC168)); /* fmul dword ptr [0x1dc168] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001EEC4u); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_0001EEC4: ;
    PUSH32(esp, 0x124AE0);
    PUSH32(esp, 0x51);
    PUSH32(esp, 8);
    eax = esp + 0x218;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001EEDAu); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_0001EEDA: ;
    PUSH32(esp, 0x124AE0);
    PUSH32(esp, 0x51);
    PUSH32(esp, 4);
    ecx = esp + 0xD4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001EEF0u); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_0001EEF0: ;
    fp_push(MEMF(ebx + 0x111C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF3A0)); /* fmul dword ptr [0x1af3a0] */
    esi = esp + 0x494;
    edi = esp + 0x20C;
    ebp = esp + 0xC8;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C91D0)); /* fadd dword ptr [0x1c91d0] */
    MEM32(esp + 0x14) = 0;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ebx = MEM32(esp + 0x30);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    /* nop */

loc_0001EF40: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0x10) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF39C)); /* fmul dword ptr [0x1af39c] */
    fp_top() = RECOMP_FP_PC(MEMF(0x1AF398) - fp_top()); /* fsubr dword ptr [0x1af398] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1C91CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_0001EF80: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = MEM32(esp + 0x3C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF39C)); /* fmul dword ptr [0x1af39c] */
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x1AF398)); /* fsub dword ptr [0x1af398] */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 4) = edx;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    MEM32(esi + 8) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    MEM32(edi + 4) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x1C91CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x50)); /* fadd dword ptr [esp + 0x50] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF394)); /* fmul dword ptr [0x1af394] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1AEB20)); /* fadd dword ptr [0x1aeb20] */
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) - fp_top()); /* fsubr dword ptr [0x1c91d0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) - fp_top()); /* fsubr dword ptr [0x1c91d0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x111C)); /* fmul dword ptr [ecx + 0x111c] */
    ecx = ebp;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0001EFFFu); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_0001EFFF: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1AF390)); /* fadd dword ptr [0x1af390] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0001EF80; /* jnp: not parity */

loc_0001F02B: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1AF390)); /* fadd dword ptr [0x1af390] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1c91d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0001EF40; /* jnp: not parity */

loc_0001F04A: ;
    MEM32(esp + 0x1C) = 0x1AF33C;
    esi = esp + 0x508;
    edi = esp + 0x20C;
    ebx = esp + 0xC8;
    MEM32(esp + 0x18) = 8;
    /* nop */

loc_0001F070: ;
    PUSH32(esp, 1);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    eax = 0x12;
    PUSH32(esp, ebp);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x0001F08Eu); RECOMP_ABI_CALL(0x000FAF60u, sub_000FAF60); /* call 0x000FAF60 */

loc_0001F08E: ;
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 9;
    /* nop */

loc_0001F0A0: ;
    MEM32(esp + 0x20) = MEM32(esp + 0x20) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(esi + -116);
    MEM32(eax) = edx;
    edx = MEM32(esi + -112);
    MEM32(eax + 4) = edx;
    edx = MEM32(esi + -108);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x28);
    eax = MEM32(edi);
    MEM32(edx + 0x1C) = eax;
    edx = MEM32(esp + 0x28);
    eax = MEM32(edi + 4);
    MEM32(edx + 0x20) = eax;
    edx = MEM32(esp + 0x28);
    eax = MEM32(ebx);
    MEM32(edx + 0x18) = eax;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esi + -8);
    MEM32(eax) = edx;
    edx = MEM32(esi + -4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esi);
    MEM32(eax + 8) = edx;
    eax = MEM32(edi + 0x48);
    edx = MEM32(esp + 0x28);
    MEM32(edx + 0x1C) = eax;
    eax = MEM32(edi + 0x4C);
    edx = MEM32(esp + 0x28);
    MEM32(edx + 0x20) = eax;
    eax = MEM32(ebx + 0x24);
    edx = MEM32(esp + 0x28);
    MEM32(edx + 0x18) = eax;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = eax;
    if ((_fa != 0)) goto loc_0001F0A0; /* jne: not equal / not zero */

loc_0001F12E: ;
    MEM32(0x1DF760) = ebp;
    MEM32(0x1DF438) = ebp;
    PUSH32(esp, 0x0001F13Fu); RECOMP_ABI_CALL(0x000F95A0u, sub_000F95A0); /* call 0x000F95A0 */

loc_0001F13F: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x0001F146u); RECOMP_ABI_CALL(0x000FB660u, sub_000FB660); /* call 0x000FB660 */

loc_0001F146: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001F151u); RECOMP_ABI_CALL(0x000FAC60u, sub_000FAC60); /* call 0x000FAC60 */

loc_0001F151: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0001F15Au); RECOMP_ABI_CALL(0x000FAD00u, sub_000FAD00); /* call 0x000FAD00 */

loc_0001F15A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001F162u); RECOMP_ABI_CALL(0x000FA850u, sub_000FA850); /* call 0x000FA850 */

loc_0001F162: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0001F070; /* jne: not equal / not zero */

loc_0001F16C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0001F172u); RECOMP_ABI_CALL(0x0001D370u, sub_0001D370); /* call 0x0001D370 */

loc_0001F172: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x850) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x850;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0012AF20(); return; /* tail jmp 0x0012AF20 */

loc_0001F184: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x850) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x850;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001F190
 * Original: 0x0001F190 - 0x0001F1E3 (83 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001F190: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x1AF3A8;
    PUSH32(esp, 0x0001F1A0u); RECOMP_ABI_CALL(0x0001D5A0u, sub_0001D5A0); /* call 0x0001D5A0 */

loc_0001F1A0: ;
    esi = edi + 0xEC4;
    ebx = 5;
    goto loc_0001F1B0;

    /* nop */

loc_0001F1B0: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0001F1BDu); RECOMP_ABI_CALL(0x000FA1E0u, sub_000FA1E0); /* call 0x000FA1E0 */

loc_0001F1BD: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0001F1B0; /* jne: not equal / not zero */

loc_0001F1C0: ;
    ecx = edi + 0x8E0;
    PUSH32(esp, 0x0001F1CBu); RECOMP_ABI_CALL(0x00019AB0u, sub_00019AB0); /* call 0x00019AB0 */

loc_0001F1CB: ;
    ecx = edi + 0x4C;
    PUSH32(esp, 0x0001F1D3u); RECOMP_ABI_CALL(0x0006DB60u, sub_0006DB60); /* call 0x0006DB60 */

loc_0001F1D3: ;
    MEM32(edi) = 0x1AF260;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000256A0(); return; /* tail jmp 0x000256A0 */

}

/**
 * sub_0001F1F0
 * Original: 0x0001F1F0 - 0x0001F210 (32 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F1F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001F1F0: ;
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = eax + 0x3C;
    PUSH32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0001F201u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001F1FEu); } /* indirect call */
    }

loc_0001F201: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0001F210(); return; /* fallthrough 0x0001F210 */

}

/**
 * sub_0001F210
 * Original: 0x0001F210 - 0x0001F219 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001F210: ;
    eax = MEM32(ecx + 0x4C);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x30)); return; /* indirect tail jmp */

}

/**
 * sub_0001F220
 * Original: 0x0001F220 - 0x0001F230 (16 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001F220: ;
    eax = ecx + 0xF3C;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0001F230(); return; /* fallthrough 0x0001F230 */

}

/**
 * sub_0001F230
 * Original: 0x0001F230 - 0x0001F237 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F230(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0001F230: ;
    fp_push(MEMF(ecx + 0x68C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001F240
 * Original: 0x0001F240 - 0x0001F257 (23 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F240(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0001F240: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x650);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x114);
    fp_push(MEMF(ecx + eax + 0x10)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001F260
 * Original: 0x0001F260 - 0x0001F577 (791 bytes, 212 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F260(void)
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

loc_0001F260: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1000000);
    esi = ecx;
    PUSH32(esp, 0x0001F273u); RECOMP_ABI_CALL(0x00033A80u, sub_00033A80); /* call 0x00033A80 */

loc_0001F273: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0001F27Eu); RECOMP_ABI_CALL(0x00126000u, sub_00126000); /* call 0x00126000 */

loc_0001F27E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = esi + 0x8E0;
    PUSH32(esp, 0x4AC);
    MEM32(esi + 0xFD0) = edi;
    MEM32(esi + 0x6F0) = esi;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0xEC4) = edi;
    MEM32(esi + 0xAB0) = edi;
    MEM32(esi + 0xAAC) = edi;
    MEM32(esi + 0xEE0) = edi;
    MEM32(esi + 0xF74) = edi;
    MEM32(esi + 0xFCC) = edi;
    MEM32(esi + 0xFC0) = edi;
    MEM32(esi + 0xFC4) = edi;
    MEM32(esi + 0xF70) = edi;
    PUSH32(esp, 0x0001F2D5u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001F2D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001F2E6; /* je: equal / zero */

loc_0001F2DC: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0001F2E4u); RECOMP_ABI_CALL(0x000A5F10u, sub_000A5F10); /* call 0x000A5F10 */

loc_0001F2E4: ;
    goto loc_0001F2E8;

loc_0001F2E6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001F2E8: ;
    PUSH32(esp, 0x338);
    MEM32(esi + 0xEF0) = eax;
    PUSH32(esp, 0x0001F2F8u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001F2F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001F309; /* je: equal / zero */

loc_0001F2FF: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0001F307u); RECOMP_ABI_CALL(0x000AD660u, sub_000AD660); /* call 0x000AD660 */

loc_0001F307: ;
    goto loc_0001F30B;

loc_0001F309: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001F30B: ;
    ecx = esi;
    MEM32(esi + 0xEF8) = eax;
    PUSH32(esp, 0x0001F318u); RECOMP_ABI_CALL(0x0001A510u, sub_0001A510); /* call 0x0001A510 */

loc_0001F318: ;
    PUSH32(esp, 0x220);
    PUSH32(esp, 0x0001F322u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001F322: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001F333; /* je: equal / zero */

loc_0001F329: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0001F331u); RECOMP_ABI_CALL(0x000A6CF0u, sub_000A6CF0); /* call 0x000A6CF0 */

loc_0001F331: ;
    goto loc_0001F335;

loc_0001F333: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001F335: ;
    PUSH32(esp, 0xDC);
    MEM32(esi + 0xEF4) = eax;
    PUSH32(esp, 0x0001F345u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001F345: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001F356; /* je: equal / zero */

loc_0001F34C: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0001F354u); RECOMP_ABI_CALL(0x000A4750u, sub_000A4750); /* call 0x000A4750 */

loc_0001F354: ;
    goto loc_0001F358;

loc_0001F356: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001F358: ;
    PUSH32(esp, 0x54);
    MEM32(esi + 0xEE8) = eax;
    PUSH32(esp, 0x0001F365u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001F365: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001F373; /* je: equal / zero */

loc_0001F36C: ;
    ecx = esi + 0x4C;
    MEM32(eax) = ecx;
    goto loc_0001F375;

loc_0001F373: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001F375: ;
    MEM32(esi + 0xEEC) = eax;
    MEM32(esi + 0xEE4) = edi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xECC) = edx;
    MEM32(esi + 0xED0) = edx;
    MEM32(esi + 0xED4) = edx;
    MEM32(esi + 0xED8) = edx;
    PUSH32(esp, esi);
    MEM32(esi + 0xEDC) = edi;
    MEM32(esi + 0xEFC) = edi;
    MEM32(esi + 0xF10) = edi;
    PUSH32(esp, 0x0001F3B3u); RECOMP_ABI_CALL(0x00024F80u, sub_00024F80); /* call 0x00024F80 */

loc_0001F3B3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001F3B9u); RECOMP_ABI_CALL(0x00024D80u, sub_00024D80); /* call 0x00024D80 */

loc_0001F3B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0001F3C4u); RECOMP_ABI_CALL(0x00070C00u, sub_00070C00); /* call 0x00070C00 */

loc_0001F3C4: ;
    fp_push(MEMF(0x1AEFE4)); /* fld float */
    eax = MEM32(0x1AEFE4);
    fp_top() = -fp_top(); /* fchs */
    ecx = esi + 0xFD4;
    PUSH32(esp, edi);
    MEMF(ecx + 0xC) = (float)fp_top(); /* fst */
    PUSH32(esp, edi);
    MEMF(ecx + 0x10) = (float)fp_top(); /* fst */
    edx = eax;
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    PUSH32(esp, 0x0001F3F2u); RECOMP_ABI_CALL(0x00019500u, sub_00019500); /* call 0x00019500 */

loc_0001F3F2: ;
    ecx = MEM32(0x1D9FB8);
    ebx = MEM32(ecx + 0x50);
    PUSH32(esp, 0x134);
    PUSH32(esp, 0x0001F405u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001F405: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001F418; /* je: equal / zero */

loc_0001F40C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    ecx = eax;
    PUSH32(esp, 0x0001F416u); RECOMP_ABI_CALL(0x000FDCC0u, sub_000FDCC0); /* call 0x000FDCC0 */

loc_0001F416: ;
    goto loc_0001F41A;

loc_0001F418: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001F41A: ;
    PUSH32(esp, 0xC);
    MEM32(esi + 0x1008) = eax;
    PUSH32(esp, 0x0001F427u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001F427: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001F440; /* je: equal / zero */

loc_0001F42E: ;
    MEM32(eax) = 0x1AF368;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = 0x1B610;
    goto loc_0001F442;

loc_0001F440: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001F442: ;
    edx = MEM32(esi + 0x1008);
    MEM32(esi + 0x1128) = eax;
    PUSH32(esp, 0xC);
    MEM32(edx + 0x12C) = eax;
    PUSH32(esp, 0x0001F45Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001F45B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001F474; /* je: equal / zero */

loc_0001F462: ;
    MEM32(eax) = 0x1AF368;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = 0x1D800;
    goto loc_0001F476;

loc_0001F474: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001F476: ;
    ecx = MEM32(esi + 0x1008);
    MEM32(esi + 0x112C) = eax;
    MEM32(ecx + 0x130) = eax;
    eax = MEM32(0x1AEF18);
    edx = MEM32(esi + 0x1008);
    MEM32(edx + 0x88) = eax;
    edx = MEM32(0x1AEF1C);
    ecx = MEM32(esi + 0x1008);
    MEM32(ecx + 0x8C) = edx;
    eax = esi + 0x10AC;
    ebp = eax;
    MEM32(esp + 0x10) = 0x3F800000;
    eax = MEM32(esp + 0x10);
    MEM32(ebp) = eax;
    MEM32(esp + 0x14) = 0x3F800000;
    ecx = MEM32(esp + 0x14);
    MEM32(ebp + 4) = ecx;
    MEM32(esp + 0x18) = 0x3F800000;
    edx = MEM32(esp + 0x18);
    MEM32(ebp + 8) = edx;
    MEM32(esp + 0x1C) = 0x3F800000;
    ebx = MEM32(esp + 0x1C);
    MEM32(ebp + 0xC) = ebx;
    ebp = esi + 0x109C;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = ecx;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 8) = edx;
    PUSH32(esp, 0x54);
    MEM32(ebp + 0xC) = ebx;
    MEM32(esi + 0x10BC) = eax;
    MEM32(esi + 0x10C0) = eax;
    MEM32(esi + 0x10C4) = edi;
    MEM32(esi + 0x10D0) = 0x7F7FFFFF;
    MEM32(esi + 0x1104) = edi;
    MEM32(esi + 0x1108) = edi;
    PUSH32(esp, 0x0001F533u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001F533: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001F551; /* je: equal / zero */

loc_0001F53A: ;
    ecx = MEM32(0x1DA00C);
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 0xF);
    ecx = eax;
    PUSH32(esp, 0x0001F54Fu); RECOMP_ABI_CALL(0x000FC500u, sub_000FC500); /* call 0x000FC500 */

loc_0001F54F: ;
    goto loc_0001F553;

loc_0001F551: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001F553: ;
    MEM32(esi + 0x1120) = eax;
    ecx = 0xBF800000u;
    MEM32(eax + 0x44) = ecx;
    edx = MEM32(esi + 0x1120);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 0x48) = ecx;
    eax = 1;
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
 * sub_0001F580
 * Original: 0x0001F580 - 0x0001FC4A (1738 bytes, 477 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001F580(void)
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

loc_0001F580: ;
    eax = MEM32(0x1DA128);
    _fb = (uint32_t)(0x198) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x198));
    esp = esp - 0x198;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0001F5B8; /* jne: not equal / not zero */

loc_0001F597: ;
    PUSH32(esp, 0x312C);
    PUSH32(esp, 0x0001F5A1u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001F5A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001F5B1; /* je: equal / zero */

loc_0001F5A8: ;
    ecx = eax;
    PUSH32(esp, 0x0001F5AFu); RECOMP_ABI_CALL(0x000A4AA0u, sub_000A4AA0); /* call 0x000A4AA0 */

loc_0001F5AF: ;
    goto loc_0001F5B3;

loc_0001F5B1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001F5B3: ;
    MEM32(0x1DA128) = eax;

loc_0001F5B8: ;
    ecx = MEM32(esp + 0x1AC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x478);
    edx = ecx + eax + 4;
    PUSH32(esp, 0x1174);
    MEM32(esi + 0xEE0) = edx;
    PUSH32(esp, 0x0001F5D9u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001F5D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001F606; /* je: equal / zero */

loc_0001F5E0: ;
    ebp = eax + 4;
    MEM32(eax) = 4;
    edi = ebp;
    ebx = 4;

loc_0001F5F0: ;
    ecx = edi;
    PUSH32(esp, 0x0001F5F7u); RECOMP_ABI_CALL(0x00035D40u, sub_00035D40); /* call 0x00035D40 */

loc_0001F5F7: ;
    _fb = (uint32_t)(0x45C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x45C)) >> 32) & 1);
    edi = edi + 0x45C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0001F5F0; /* jne: not equal / not zero */

loc_0001F600: ;
    eax = ebp;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0001F608;

loc_0001F606: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001F608: ;
    MEM32(esi + 0xEC4) = eax;
    eax = MEM32(0x1D9BA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001F638; /* jne: not equal / not zero */

loc_0001F617: ;
    PUSH32(esp, 0x33F8);
    PUSH32(esp, 0x0001F621u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001F621: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001F631; /* je: equal / zero */

loc_0001F628: ;
    ecx = eax;
    PUSH32(esp, 0x0001F62Fu); RECOMP_ABI_CALL(0x00095660u, sub_00095660); /* call 0x00095660 */

loc_0001F62F: ;
    goto loc_0001F633;

loc_0001F631: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001F633: ;
    MEM32(0x1D9BA8) = eax;

loc_0001F638: ;
    ecx = MEM32(esp + 0x1B0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2BC);
    edx = MEM32(ecx + eax + 0x1C0);
    MEM32(esp + 0x10) = edx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0001F660;

    /* nop */
    goto loc_0001F660;

    /* nop */

loc_0001F660: ;
    ecx = MEM32(esi + 0xEC4);
    eax = MEM32(esp + 0x1AC);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x45C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(edi + 0x424) = esi;
    MEM32(edi + 0x10) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0001F6A1; /* jne: not equal / not zero */

loc_0001F685: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001F6A1; /* jne: not equal / not zero */

loc_0001F689: ;
    eax = MEM32(0x1CA3FC);
    PUSH32(esp, eax);
    ecx = esp + 0xA8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001F69Cu); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_0001F69C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0001F6BE;

loc_0001F6A1: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(ebx * 4 + 0x1CA3EC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xAC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001F6BBu); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_0001F6BB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001F6BE: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0001F6C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001F6C3u); } /* indirect call */
    }

loc_0001F6C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001F6D3; /* je: equal / zero */

loc_0001F6CA: ;
    ecx = esi;
    PUSH32(esp, 0x0001F6D1u); RECOMP_ABI_CALL(0x00013780u, sub_00013780); /* call 0x00013780 */

loc_0001F6D1: ;
    goto loc_0001F6D8;

loc_0001F6D3: ;
    eax = 0x98899889u;

loc_0001F6D8: ;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0xAC;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    PUSH32(esp, 0x0001F705u); RECOMP_ABI_CALL(0x000358B0u, sub_000358B0); /* call 0x000358B0 */

loc_0001F705: ;
    ecx = MEM32(esi + 0x1120);
    _fb = (uint32_t)(0x364) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x364)) >> 32) & 1);
    edi = edi + 0x364;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001F717u); RECOMP_ABI_CALL(0x000FC4E0u, sub_000FC4E0); /* call 0x000FC4E0 */

loc_0001F717: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0001F660; /* jl: less (signed <) */

loc_0001F721: ;
    PUSH32(esp, 0x1D74);
    PUSH32(esp, 0x0001F72Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001F72B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001F758; /* je: equal / zero */

loc_0001F732: ;
    ebp = eax + 4;
    MEM32(eax) = 6;
    edi = ebp;
    ebx = 6;

loc_0001F742: ;
    ecx = edi;
    PUSH32(esp, 0x0001F749u); RECOMP_ABI_CALL(0x000357F0u, sub_000357F0); /* call 0x000357F0 */

loc_0001F749: ;
    _fb = (uint32_t)(0x4E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x4E8)) >> 32) & 1);
    edi = edi + 0x4E8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0001F742; /* jne: not equal / not zero */

loc_0001F752: ;
    eax = ebp;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0001F75A;

loc_0001F758: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001F75A: ;
    MEM32(esi + 0xAB0) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xAAC) = 6;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0001F770: ;
    edx = MEM32(esi + 0xAB0);
    MEM32(edx + ecx + 0x10) = ebp;
    edx = MEM32(esi + 0xAAC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x4E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x4E8)) >> 32) & 1);
    ecx = ecx + 0x4E8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0001F770; /* jl: less (signed <) */

loc_0001F78B: ;
    eax = MEM32(0x1AEFE4);
    fp_push(MEMF(0x1AEFE4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    ecx = eax;
    edx = eax;
    MEMF(esi + 0xFFC) = (float)fp_top(); /* fst */
    MEMF(esi + 0x1000) = (float)fp_top(); /* fst */
    MEM32(esi + 0xFF0) = eax;
    MEMF(esi + 0x1004) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xFF4) = ecx;
    MEM32(esi + 0xFF8) = edx;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0001F7D0;

    /* nop */
    goto loc_0001F7D0;

    /* nop */

loc_0001F7D0: ;
    eax = MEM32(esi + 0xEE0);
    ecx = MEM32(eax + ebp + 0xEC);
    edx = MEM32(eax + 0x18);
    ebx = eax + ebp + 0xE0;
    eax = MEM32(0x1CA3A8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001F7FCu); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_0001F7FC: ;
    edx = MEM32(esi + 0xEE0);
    ecx = MEM32(esi + 0xAB0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x54)) >> 32) & 1);
    edx = edx + 0x54;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001F818u); RECOMP_ABI_CALL(0x00034C20u, sub_00034C20); /* call 0x00034C20 */

loc_0001F818: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001F938; /* je: equal / zero */

loc_0001F821: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001F83B; /* je: equal / zero */

loc_0001F828: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x0001F830u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001F82Du); } /* indirect call */
    }

loc_0001F830: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0001F83B; /* jne: not equal / not zero */

loc_0001F834: ;
    ebx = 1;
    goto loc_0001F83D;

loc_0001F83B: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001F83D: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0001F84Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001F847u); } /* indirect call */
    }

loc_0001F84A: ;
    ecx = MEM32(esi + 0xAB0);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001F866u); RECOMP_ABI_CALL(0x00034A80u, sub_00034A80); /* call 0x00034A80 */

loc_0001F866: ;
    ecx = MEM32(esi + 0xAB0);
    edx = ecx + edi + 0x40;
    ecx = MEM32(esi + 0x1008);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001F87Cu); RECOMP_ABI_CALL(0x000FC9C0u, sub_000FC9C0); /* call 0x000FC9C0 */

loc_0001F87C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x2F8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001F89A; /* je: equal / zero */

loc_0001F884: ;
    eax = MEM32(esi + 0xAB0);
    ecx = eax + edi + 0x40;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1120);
    PUSH32(esp, 0x0001F89Au); RECOMP_ABI_CALL(0x000FC4E0u, sub_000FC4E0); /* call 0x000FC4E0 */

loc_0001F89A: ;
    edx = MEM32(esi + 0xAB0);
    eax = MEM32(edx + edi + 0x94);
    fp_push(MEMF(eax + 0xAC)); /* fld float */
    ecx = edx + edi;
    fp_push(MEMF(eax + 0xB8)); /* fld float */
    edx = MEM32(eax + 0xB0);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xAC)) >> 32) & 1);
    eax = eax + 0xAC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x120)); /* fadd dword ptr [ecx + 0x120] */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 8);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(eax + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x120)); /* fadd dword ptr [ecx + 0x120] */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x30) = eax;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x124)); /* fadd dword ptr [ecx + 0x124] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x124)); /* fadd dword ptr [ecx + 0x124] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x128)); /* fadd dword ptr [ecx + 0x128] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x128)); /* fadd dword ptr [ecx + 0x128] */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi + 0xFF0;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001F938u); RECOMP_ABI_CALL(0x00019480u, sub_00019480); /* call 0x00019480 */

loc_0001F938: ;
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x98)) >> 32) & 1);
    ebp = ebp + 0x98;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x4E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x4E8)) >> 32) & 1);
    edi = edi + 0x4E8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x390) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x390 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0001F7D0; /* jl: less (signed <) */

loc_0001F950: ;
    ecx = esi;
    PUSH32(esp, 0x0001F957u); RECOMP_ABI_CALL(0x0001C650u, sub_0001C650); /* call 0x0001C650 */

loc_0001F957: ;
    edi = 0x1AF06C;
    /* nop */

loc_0001F960: ;
    edx = MEM32(edi);
    eax = MEM32(esi + 0xAB0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4E8);
    ecx = MEM32(eax + edx + 0x18C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001F98C; /* je: equal / zero */

loc_0001F97D: ;
    ecx = MEM32(0x1D3ECC);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001F98Cu); RECOMP_ABI_CALL(0x000F2DE0u, sub_000F2DE0); /* call 0x000F2DE0 */

loc_0001F98C: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001F960; /* jne: not equal / not zero */

loc_0001F997: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001F9B2; /* je: equal / zero */

loc_0001F9A1: ;
    ecx = MEM32(esi + 0x1008);
    _fb = (uint32_t)(0x28C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x28C)) >> 32) & 1);
    eax = eax + 0x28C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001F9B2u); RECOMP_ABI_CALL(0x000FC9C0u, sub_000FC9C0); /* call 0x000FC9C0 */

loc_0001F9B2: ;
    ecx = esi;
    PUSH32(esp, 0x0001F9B9u); RECOMP_ABI_CALL(0x0001EBE0u, sub_0001EBE0); /* call 0x0001EBE0 */

loc_0001F9B9: ;
    ecx = esi;
    PUSH32(esp, 0x0001F9C0u); RECOMP_ABI_CALL(0x0001D840u, sub_0001D840); /* call 0x0001D840 */

loc_0001F9C0: ;
    ecx = MEM32(esi + 0xEE8);
    PUSH32(esp, 0x0001F9CBu); RECOMP_ABI_CALL(0x000A4760u, sub_000A4760); /* call 0x000A4760 */

loc_0001F9CB: ;
    edx = MEM32(0x1CA3AC);
    PUSH32(esp, edx);
    eax = esp + 0xA8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001F9DFu); RECOMP_ABI_CALL(0x0012B3E8u, sub_0012B3E8); /* call 0x0012B3E8 */

loc_0001F9DF: ;
    ecx = MEM32(esi + 0xEE0);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x54)) >> 32) & 1);
    ecx = ecx + 0x54;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0xB0;
    PUSH32(esp, edx);
    eax = esi + 0x990;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001F9FDu); RECOMP_ABI_CALL(0x00025990u, sub_00025990); /* call 0x00025990 */

loc_0001F9FD: ;
    fp_push(MEMF(0x1AEFE4)); /* fld float */
    ecx = MEM32(0x1AEFE4);
    fp_top() = -fp_top(); /* fchs */
    edx = ecx;
    MEMF(esp + 0x64) = (float)fp_top(); /* fst */
    eax = ecx;
    MEMF(esp + 0x68) = (float)fp_top(); /* fst */
    MEM32(esp + 0x58) = ecx;
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0xEE0);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x54)) >> 32) & 1);
    ecx = ecx + 0x54;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x5C) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0xBC;
    MEM32(esp + 0x64) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    MEM32(esp + 0x60) = 3;
    MEM32(esp + 0x5C) = 0x1AF218;
    MEM32(esp + 0x7C) = ebx;
    MEM32(esp + 0x80) = ebx;
    MEM32(esp + 0x84) = ebx;
    MEM32(esp + 0x88) = ebx;
    MEM32(esp + 0x8C) = ebx;
    MEM32(esp + 0x90) = ebx;
    PUSH32(esp, 0x0001FA7Au); RECOMP_ABI_CALL(0x000259B0u, sub_000259B0); /* call 0x000259B0 */

loc_0001FA7A: ;
    edi = MEM32(esp + 0x8C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(2)) >> 32) & 1);
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001FA92u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0001FA92: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001FAA0; /* je: equal / zero */

loc_0001FA99: ;
    MEM32(eax) = edi;
    edi = eax + 4;
    goto loc_0001FAA2;

loc_0001FAA0: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001FAA2: ;
    eax = MEM32(esp + 0x6C);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0001FAE4; /* jle: less or equal (signed <=) */

loc_0001FAAC: ;
    ebx = 0xFFFFFFF8u;
    ecx = edi + 8;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edi));
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0001FAB6: ;
    eax = MEM32(esp + 0x60);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(eax + ecx);
    fp_push(MEMF(eax + ecx + 0xC)); /* fld float */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + -8) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + -4) = ebp;
    eax = MEM32(eax + 8);
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x6C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0001FAB6; /* jl: less (signed <) */

loc_0001FAE2: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001FAE4: ;
    ecx = MEM32(edi);
    fp_push(MEMF(edi + 0xC)); /* fld float */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + edi) = ecx;
    edx = MEM32(edi + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    ecx = MEM32(edi + 8);
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    fp_push(MEMF(edi + 0xC)); /* fld float */
    eax = MEM32(esp + 0x6C);
    edx = MEM32(edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    ecx = MEM32(edi + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edi + 8);
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x6C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi + 0xA14;
    PUSH32(esp, 0x0001FB34u); RECOMP_ABI_CALL(0x000D04C0u, sub_000D04C0); /* call 0x000D04C0 */

loc_0001FB34: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xFFFFFFFCu)) >> 32) & 1);
    edi = edi + 0xFFFFFFFCu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001FB3Du); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001FB3D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0xECC;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = ecx;

loc_0001FB50: ;
    edx = MEM32(esi + 0xEC4);
    ebp = MEM32(edx + eax + 0x3B8);
    edx = MEM32(ebp + 0x60);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x34) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0001FBCC; /* jle: less or equal (signed <=) */

loc_0001FB6A: ;
    MEM32(esp + 0x14) = ecx;
    edi = edi;

loc_0001FB70: ;
    eax = MEM32(ebp + 0xC4);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esi + 0xEE0);
    ebx = MEM32(eax + ecx + 4);
    edi = MEM32(edx + 0x38);
    eax = MEM32(ebx + 0x48);
    PUSH32(esp, edi);
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x0001FB94u); RECOMP_ABI_CALL(0x001025F0u, sub_001025F0); /* call 0x001025F0 */

loc_0001FB94: ;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001FBA0u); RECOMP_ABI_CALL(0x00102570u, sub_00102570); /* call 0x00102570 */

loc_0001FBA0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0001FBAD; /* jne: not equal / not zero */

loc_0001FBA7: ;
    edx = MEM32(esp + 0x18);
    MEM32(edx) = ebx;

loc_0001FBAD: ;
    eax = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 0x60);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x1C)) >> 32) & 1);
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0001FB70; /* jl: less (signed <) */

loc_0001FBC8: ;
    eax = MEM32(esp + 0x10);

loc_0001FBCC: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x45C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x45C)) >> 32) & 1);
    eax = eax + 0x45C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(4)) >> 32) & 1);
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1170) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1170 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0001FB50; /* jl: less (signed <) */

loc_0001FBEB: ;
    ecx = MEM32(esi + 0xEF0);
    PUSH32(esp, 0x0001FBF6u); RECOMP_ABI_CALL(0x000A6060u, sub_000A6060); /* call 0x000A6060 */

loc_0001FBF6: ;
    ecx = MEM32(esi + 0xEF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0001FC05; /* je: equal / zero */

loc_0001FC00: ;
    PUSH32(esp, 0x0001FC05u); RECOMP_ABI_CALL(0x000AD6A0u, sub_000AD6A0); /* call 0x000AD6A0 */

loc_0001FC05: ;
    ecx = MEM32(esi + 0xEF4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0001FC10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001FC0Du); } /* indirect call */
    }

loc_0001FC10: ;
    ecx = MEM32(esi + 0x1008);
    PUSH32(esp, ecx);
    ecx = MEM32(0x1D3EC8);
    PUSH32(esp, 0x0001FC22u); RECOMP_ABI_CALL(0x000F0BA0u, sub_000F0BA0); /* call 0x000F0BA0 */

loc_0001FC22: ;
    ecx = esp + 0x3C;
    MEM32(esi + 0xFD0) = 1;
    MEM32(esp + 0x3C) = 0x1AF218;
    PUSH32(esp, 0x0001FC3Du); RECOMP_ABI_CALL(0x000D0730u, sub_000D0730); /* call 0x000D0730 */

loc_0001FC3D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x198) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x198)) >> 32) & 1);
    esp = esp + 0x198;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001FC50
 * Original: 0x0001FC50 - 0x0001FD4A (250 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FC50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001FC50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 1);
    ebx = esi + 0x4C;
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0001FC63u); RECOMP_ABI_CALL(0x00025660u, sub_00025660); /* call 0x00025660 */

loc_0001FC63: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = edi;
    MEM32(esi) = 0x1AF3A8;
    PUSH32(esp, 0x0001FC78u); RECOMP_ABI_CALL(0x0006DA90u, sub_0006DA90); /* call 0x0006DA90 */

loc_0001FC78: ;
    ecx = esi + 0x8E0;
    PUSH32(esp, 0x0001FC83u); RECOMP_ABI_CALL(0x00019A30u, sub_00019A30); /* call 0x00019A30 */

loc_0001FC83: ;
    ebx = esi + 0xAB4;
    ebp = 5;
    edi = edi;

loc_0001FC90: ;
    ecx = ebx;
    PUSH32(esp, 0x0001FC97u); RECOMP_ABI_CALL(0x000FA160u, sub_000FA160); /* call 0x000FA160 */

loc_0001FC97: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xD0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0001FC90; /* jne: not equal / not zero */

loc_0001FCA0: ;
    SET_LO8(eax, MEM8(0x1C3E5C));
    edx = MEM32(esp + 0x14);
    MEM8(esi + 0x100C) = LO8(eax);
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x100D) = LO8(eax);
    SET_LO8(ecx, MEM8(0x1C3E5C));
    MEM8(esi + 0x100D) = LO8(eax);
    MEM8(esi + 0x100C) = LO8(ecx);
    MEM32(esi + 0x1074) = edi;
    MEM32(esi + 0x1060) = edi;
    MEM32(esi + 0x105C) = edi;
    MEM32(esi + 0x1058) = edi;
    MEM32(esi + 0x1064) = edi;
    MEM32(esi + 0x1068) = edi;
    MEM32(esi + 0x106C) = edi;
    eax = 0x3F800000;
    MEM32(esi + 0x1070) = eax;
    MEM32(esi + 0x1034) = eax;
    MEM32(esi + 0x1038) = edi;
    MEM32(esi + 0x103C) = edi;
    MEM32(esi + 0x1040) = edi;
    MEM32(esi + 0x1044) = eax;
    MEM32(esi + 0x1048) = edi;
    MEM32(esi + 0x104C) = edi;
    MEM32(esi + 0x1050) = edi;
    MEM32(esi + 0x1054) = eax;
    ecx = esi;
    MEM32(esi + 0x48) = edx;
    MEM32(esi + 0x10) = edi;
    PUSH32(esp, 0x0001FD41u); RECOMP_ABI_CALL(0x0001F260u, sub_0001F260); /* call 0x0001F260 */

loc_0001FD41: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001FD50
 * Original: 0x0001FD50 - 0x0001FD6E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FD50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0001FD58u); RECOMP_ABI_CALL(0x0001F190u, sub_0001F190); /* call 0x0001F190 */

loc_0001FD58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001FD68; /* je: equal / zero */

loc_0001FD5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001FD65u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001FD65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001FD68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001FD70
 * Original: 0x0001FD70 - 0x0001FDDC (108 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FD70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001FD70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x388;
    MEM32(esi) = 0x1AF430;
    PUSH32(esp, 0x0001FD85u); RECOMP_ABI_CALL(0x000FA1E0u, sub_000FA1E0); /* call 0x000FA1E0 */

loc_0001FD85: ;
    edi = esi + 0x318;
    MEM32(esi + 0x270) = 0x1AF248;
    ecx = edi;
    MEM32(edi) = 0x1AF218;
    PUSH32(esp, 0x0001FDA2u); RECOMP_ABI_CALL(0x000D0730u, sub_000D0730); /* call 0x000D0730 */

loc_0001FDA2: ;
    MEM32(edi) = 0x1AF200;
    edi = esi + 0x294;
    ecx = edi;
    MEM32(edi) = 0x1AF230;
    PUSH32(esp, 0x0001FDBBu); RECOMP_ABI_CALL(0x000D0730u, sub_000D0730); /* call 0x000D0730 */

loc_0001FDBB: ;
    MEM32(edi) = 0x1AF200;
    ecx = esi + 0x64;
    MEM32(esi + 0x270) = 0x1AF200;
    PUSH32(esp, 0x0001FDD3u); RECOMP_ABI_CALL(0x000D1690u, sub_000D1690); /* call 0x000D1690 */

loc_0001FDD3: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000243E0(); return; /* tail jmp 0x000243E0 */

}

/**
 * sub_0001FDE0
 * Original: 0x0001FDE0 - 0x0001FE00 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FDE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001FDE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0001FDE8u); RECOMP_ABI_CALL(0x0001FD70u, sub_0001FD70); /* call 0x0001FD70 */

loc_0001FDE8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001FDF8; /* je: equal / zero */

loc_0001FDEF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001FDF5u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001FDF5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001FDF8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_0001FE00(); return; /* fallthrough 0x0001FE00 */

}

/**
 * sub_0001FDE8
 * Original: 0x0001FDE8 - 0x0001FE00 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FDE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001FDE8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001FDF8; /* je: equal / zero */

loc_0001FDEF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001FDF5u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001FDF5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001FDF8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_0001FE00(); return; /* fallthrough 0x0001FE00 */

}

/**
 * sub_0001FE00
 * Original: 0x0001FE00 - 0x0001FE5C (92 bytes, 39 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0001FE00(void)
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

loc_0001FE00: ;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
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
    PUSH32(esp, 0x0001FE2Au); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_0001FE2A: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91e0] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    eax = esi;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0001FE58; /* jnp: not parity */

loc_0001FE3C: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) / fp_top()); /* fdivr dword ptr [0x1c91d0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001FE58: ;
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0001FE60
 * Original: 0x0001FE60 - 0x0001FE8D (45 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FE60: ;
    eax = MEM32(0x1DC3CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001FE8C; /* jne: not equal / not zero */

loc_0001FE69: ;
    edx = 1;
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = 1;
    PUSH32(esp, 0x0001FE82u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0001FE82: ;
    MEM32(0x1A51F8) = 1;

loc_0001FE8C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001FE90
 * Original: 0x0001FE90 - 0x0001FEBA (42 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FE90: ;
    eax = MEM32(0x1DC3CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001FEB9; /* je: equal / zero */

loc_0001FE99: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = 0;
    PUSH32(esp, 0x0001FEAFu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0001FEAF: ;
    MEM32(0x1A51F8) = 0;

loc_0001FEB9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001FEC0
 * Original: 0x0001FEC0 - 0x0001FEE8 (40 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FEC0: ;
    eax = MEM32(0x1DC444);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001FEE6; /* je: equal / zero */

loc_0001FECE: ;
    edx = esi;
    ecx = 0x40354;
    MEM32(0x1DC444) = esi;
    PUSH32(esp, 0x0001FEE0u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0001FEE0: ;
    MEM32(0x1A51DC) = esi;

loc_0001FEE6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001FEF0
 * Original: 0x0001FEF0 - 0x0001FF3D (77 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FEF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FEF0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = 0x3F800000;
    eax = MEM32(esp);
    MEM32(esp + 0xC) = 0x3F800000;
    MEM32(esp + 8) = 0x3F800000;
    edx = MEM32(esp + 8);
    MEM32(esp + 4) = 0x3F800000;
    ecx = MEM32(esp + 4);
    MEM32(0x1CF1E0) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x1CF1E4) = ecx;
    MEM32(0x1CF1E8) = edx;
    MEM32(0x1CF1EC) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001FF40
 * Original: 0x0001FF40 - 0x0001FF46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FF40(void)
{

loc_0001FF40: ;
    eax = 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_0001FF50
 * Original: 0x0001FF50 - 0x0001FF74 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FF50: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AF4E0;
    PUSH32(esp, 0x0001FF5Eu); RECOMP_ABI_CALL(0x000D1690u, sub_000D1690); /* call 0x000D1690 */

loc_0001FF5E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001FF6E; /* je: equal / zero */

loc_0001FF65: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001FF6Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0001FF6B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001FF6E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001FF80
 * Original: 0x0001FF80 - 0x00020085 (261 bytes, 89 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FF80: ;
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
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ecx + 0x3C;
    edi = MEM32(edx);
    esi = eax + 0x3C;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(esi + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(esi + 0xC) = edx;
    edx = ecx + 0x4C;
    edi = MEM32(edx);
    esi = eax + 0x4C;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(esi + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(esi + 0xC) = edx;
    edx = MEM32(ecx + 0x5C);
    MEM32(eax + 0x5C) = edx;
    edx = MEM32(ecx + 0x60);
    MEM32(eax + 0x60) = edx;
    edx = MEM32(ecx + 0x64);
    MEM32(eax + 0x64) = edx;
    edx = ecx + 0x68;
    esi = eax + 0x68;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020068; /* je: equal / zero */

loc_00020034: ;
    edi = MEM32(edx);
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(esi + 8) = edi;
    edi = MEM32(edx + 0xC);
    MEM32(esi + 0xC) = edi;
    edi = MEM32(edx + 0x10);
    MEM32(esi + 0x10) = edi;
    edi = MEM32(edx + 0x14);
    MEM32(esi + 0x14) = edi;
    edi = MEM32(edx + 0x18);
    MEM32(esi + 0x18) = edi;
    edi = MEM32(edx + 0x1C);
    MEM32(esi + 0x1C) = edi;
    edx = MEM32(edx + 0x20);
    MEM32(esi + 0x20) = edx;

loc_00020068: ;
    edx = MEM32(ecx + 0x8C);
    MEM32(eax + 0x8C) = edx;
    ecx = MEM32(ecx + 0x90);
    POP32(esp, edi);
    MEM32(eax + 0x90) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001FFC0
 * Original: 0x0001FFC0 - 0x00020085 (197 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001FFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001FFC0: ;
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
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ecx + 0x3C;
    edi = MEM32(edx);
    esi = eax + 0x3C;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(esi + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(esi + 0xC) = edx;
    edx = ecx + 0x4C;
    edi = MEM32(edx);
    esi = eax + 0x4C;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(esi + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(esi + 0xC) = edx;
    edx = MEM32(ecx + 0x5C);
    MEM32(eax + 0x5C) = edx;
    edx = MEM32(ecx + 0x60);
    MEM32(eax + 0x60) = edx;
    edx = MEM32(ecx + 0x64);
    MEM32(eax + 0x64) = edx;
    edx = ecx + 0x68;
    esi = eax + 0x68;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020068; /* je: equal / zero */

loc_00020034: ;
    edi = MEM32(edx);
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(esi + 8) = edi;
    edi = MEM32(edx + 0xC);
    MEM32(esi + 0xC) = edi;
    edi = MEM32(edx + 0x10);
    MEM32(esi + 0x10) = edi;
    edi = MEM32(edx + 0x14);
    MEM32(esi + 0x14) = edi;
    edi = MEM32(edx + 0x18);
    MEM32(esi + 0x18) = edi;
    edi = MEM32(edx + 0x1C);
    MEM32(esi + 0x1C) = edi;
    edx = MEM32(edx + 0x20);
    MEM32(esi + 0x20) = edx;

loc_00020068: ;
    edx = MEM32(ecx + 0x8C);
    MEM32(eax + 0x8C) = edx;
    ecx = MEM32(ecx + 0x90);
    POP32(esp, edi);
    MEM32(eax + 0x90) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00020090
 * Original: 0x00020090 - 0x00020178 (232 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020090: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0002009Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002009Cu); } /* indirect call */
    }

loc_0002009F: ;
    eax = MEM32(esp + 0x120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0x64);
    MEM32(esi + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000200B5; /* je: equal / zero */

loc_000200B0: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000200BE;

loc_000200B5: ;
    ecx = esi;
    PUSH32(esp, 0x000200BCu); RECOMP_ABI_CALL(0x00013780u, sub_00013780); /* call 0x00013780 */

loc_000200BC: ;
    edi = eax;

loc_000200BE: ;
    eax = MEM32(esp + 0x11C);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, 0x1AF524);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000200D6u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_000200D6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8EA);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi + 0x28C;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x0002010Eu); RECOMP_ABI_CALL(0x000F9E30u, sub_000F9E30); /* call 0x000F9E30 */

loc_0002010E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002016B; /* je: equal / zero */

loc_00020112: ;
    edx = MEM32(esi + 0x2E0);
    MEM32(edx + 0x84) = 0x3E4CCCCD;
    eax = MEM32(esi + 0x2E0);
    ecx = MEM32(eax + 0x108);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esi + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002013Au); RECOMP_ABI_CALL(0x000EBA00u, sub_000EBA00); /* call 0x000EBA00 */

loc_0002013A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, esi);
    ecx = 0x1D7528;
    PUSH32(esp, 0x00020152u); RECOMP_ABI_CALL(0x00071E50u, sub_00071E50); /* call 0x00071E50 */

loc_00020152: ;
    MEM32(esi + 0x48) = eax;
    eax = 1;
    POP32(esp, edi);
    MEM32(esi + 0x294) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0002016B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00020099
 * Original: 0x00020099 - 0x00020178 (223 bytes, 62 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020099(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020099: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0002009Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002009Cu); } /* indirect call */
    }

loc_0002009F: ;
    eax = MEM32(esp + 0x120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0x64);
    MEM32(esi + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000200B5; /* je: equal / zero */

loc_000200B0: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000200BE;

loc_000200B5: ;
    ecx = esi;
    PUSH32(esp, 0x000200BCu); RECOMP_ABI_CALL(0x00013780u, sub_00013780); /* call 0x00013780 */

loc_000200BC: ;
    edi = eax;

loc_000200BE: ;
    eax = MEM32(esp + 0x11C);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, 0x1AF524);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000200D6u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_000200D6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8EA);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi + 0x28C;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x0002010Eu); RECOMP_ABI_CALL(0x000F9E30u, sub_000F9E30); /* call 0x000F9E30 */

loc_0002010E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002016B; /* je: equal / zero */

loc_00020112: ;
    edx = MEM32(esi + 0x2E0);
    MEM32(edx + 0x84) = 0x3E4CCCCD;
    eax = MEM32(esi + 0x2E0);
    ecx = MEM32(eax + 0x108);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esi + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002013Au); RECOMP_ABI_CALL(0x000EBA00u, sub_000EBA00); /* call 0x000EBA00 */

loc_0002013A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, esi);
    ecx = 0x1D7528;
    PUSH32(esp, 0x00020152u); RECOMP_ABI_CALL(0x00071E50u, sub_00071E50); /* call 0x00071E50 */

loc_00020152: ;
    MEM32(esi + 0x48) = eax;
    eax = 1;
    POP32(esp, edi);
    MEM32(esi + 0x294) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0002016B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000200A6
 * Original: 0x000200A6 - 0x00020178 (210 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000200A6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000200A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0x64);
    MEM32(esi + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000200B5; /* je: equal / zero */

loc_000200B0: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000200BE;

loc_000200B5: ;
    ecx = esi;
    PUSH32(esp, 0x000200BCu); RECOMP_ABI_CALL(0x00013780u, sub_00013780); /* call 0x00013780 */

loc_000200BC: ;
    edi = eax;

loc_000200BE: ;
    eax = MEM32(esp + 0x11C);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, 0x1AF524);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000200D6u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_000200D6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8EA);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi + 0x28C;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x0002010Eu); RECOMP_ABI_CALL(0x000F9E30u, sub_000F9E30); /* call 0x000F9E30 */

loc_0002010E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002016B; /* je: equal / zero */

loc_00020112: ;
    edx = MEM32(esi + 0x2E0);
    MEM32(edx + 0x84) = 0x3E4CCCCD;
    eax = MEM32(esi + 0x2E0);
    ecx = MEM32(eax + 0x108);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esi + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002013Au); RECOMP_ABI_CALL(0x000EBA00u, sub_000EBA00); /* call 0x000EBA00 */

loc_0002013A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, esi);
    ecx = 0x1D7528;
    PUSH32(esp, 0x00020152u); RECOMP_ABI_CALL(0x00071E50u, sub_00071E50); /* call 0x00071E50 */

loc_00020152: ;
    MEM32(esi + 0x48) = eax;
    eax = 1;
    POP32(esp, edi);
    MEM32(esi + 0x294) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0002016B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000200B0
 * Original: 0x000200B0 - 0x00020178 (200 bytes, 54 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000200B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000200B0: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000200BE;

    ecx = esi;
    PUSH32(esp, 0x000200BCu); RECOMP_ABI_CALL(0x00013780u, sub_00013780); /* call 0x00013780 */

loc_000200BC: ;
    edi = eax;

loc_000200BE: ;
    eax = MEM32(esp + 0x11C);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, 0x1AF524);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000200D6u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_000200D6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8EA);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi + 0x28C;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x0002010Eu); RECOMP_ABI_CALL(0x000F9E30u, sub_000F9E30); /* call 0x000F9E30 */

loc_0002010E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002016B; /* je: equal / zero */

loc_00020112: ;
    edx = MEM32(esi + 0x2E0);
    MEM32(edx + 0x84) = 0x3E4CCCCD;
    eax = MEM32(esi + 0x2E0);
    ecx = MEM32(eax + 0x108);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esi + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002013Au); RECOMP_ABI_CALL(0x000EBA00u, sub_000EBA00); /* call 0x000EBA00 */

loc_0002013A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, esi);
    ecx = 0x1D7528;
    PUSH32(esp, 0x00020152u); RECOMP_ABI_CALL(0x00071E50u, sub_00071E50); /* call 0x00071E50 */

loc_00020152: ;
    MEM32(esi + 0x48) = eax;
    eax = 1;
    POP32(esp, edi);
    MEM32(esi + 0x294) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0002016B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000200B3
 * Original: 0x000200B3 - 0x00020178 (197 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000200B3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000200B3: ;
    goto loc_000200BE;

    ecx = esi;
    PUSH32(esp, 0x000200BCu); RECOMP_ABI_CALL(0x00013780u, sub_00013780); /* call 0x00013780 */

loc_000200BC: ;
    edi = eax;

loc_000200BE: ;
    eax = MEM32(esp + 0x11C);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, 0x1AF524);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000200D6u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_000200D6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8EA);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi + 0x28C;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x0002010Eu); RECOMP_ABI_CALL(0x000F9E30u, sub_000F9E30); /* call 0x000F9E30 */

loc_0002010E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002016B; /* je: equal / zero */

loc_00020112: ;
    edx = MEM32(esi + 0x2E0);
    MEM32(edx + 0x84) = 0x3E4CCCCD;
    eax = MEM32(esi + 0x2E0);
    ecx = MEM32(eax + 0x108);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esi + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002013Au); RECOMP_ABI_CALL(0x000EBA00u, sub_000EBA00); /* call 0x000EBA00 */

loc_0002013A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, esi);
    ecx = 0x1D7528;
    PUSH32(esp, 0x00020152u); RECOMP_ABI_CALL(0x00071E50u, sub_00071E50); /* call 0x00071E50 */

loc_00020152: ;
    MEM32(esi + 0x48) = eax;
    eax = 1;
    POP32(esp, edi);
    MEM32(esi + 0x294) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0002016B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000200B5
 * Original: 0x000200B5 - 0x00020178 (195 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000200B5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000200B5: ;
    ecx = esi;
    PUSH32(esp, 0x000200BCu); RECOMP_ABI_CALL(0x00013780u, sub_00013780); /* call 0x00013780 */

loc_000200BC: ;
    edi = eax;
    eax = MEM32(esp + 0x11C);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, 0x1AF524);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000200D6u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_000200D6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8EA);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi + 0x28C;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x0002010Eu); RECOMP_ABI_CALL(0x000F9E30u, sub_000F9E30); /* call 0x000F9E30 */

loc_0002010E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002016B; /* je: equal / zero */

loc_00020112: ;
    edx = MEM32(esi + 0x2E0);
    MEM32(edx + 0x84) = 0x3E4CCCCD;
    eax = MEM32(esi + 0x2E0);
    ecx = MEM32(eax + 0x108);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esi + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002013Au); RECOMP_ABI_CALL(0x000EBA00u, sub_000EBA00); /* call 0x000EBA00 */

loc_0002013A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, esi);
    ecx = 0x1D7528;
    PUSH32(esp, 0x00020152u); RECOMP_ABI_CALL(0x00071E50u, sub_00071E50); /* call 0x00071E50 */

loc_00020152: ;
    MEM32(esi + 0x48) = eax;
    eax = 1;
    POP32(esp, edi);
    MEM32(esi + 0x294) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0002016B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000200B7
 * Original: 0x000200B7 - 0x00020178 (193 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000200B7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000200B7: ;
    PUSH32(esp, 0x000200BCu); RECOMP_ABI_CALL(0x00013780u, sub_00013780); /* call 0x00013780 */

loc_000200BC: ;
    edi = eax;
    eax = MEM32(esp + 0x11C);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, 0x1AF524);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000200D6u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_000200D6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8EA);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi + 0x28C;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x0002010Eu); RECOMP_ABI_CALL(0x000F9E30u, sub_000F9E30); /* call 0x000F9E30 */

loc_0002010E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002016B; /* je: equal / zero */

loc_00020112: ;
    edx = MEM32(esi + 0x2E0);
    MEM32(edx + 0x84) = 0x3E4CCCCD;
    eax = MEM32(esi + 0x2E0);
    ecx = MEM32(eax + 0x108);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esi + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002013Au); RECOMP_ABI_CALL(0x000EBA00u, sub_000EBA00); /* call 0x000EBA00 */

loc_0002013A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, esi);
    ecx = 0x1D7528;
    PUSH32(esp, 0x00020152u); RECOMP_ABI_CALL(0x00071E50u, sub_00071E50); /* call 0x00071E50 */

loc_00020152: ;
    MEM32(esi + 0x48) = eax;
    eax = 1;
    POP32(esp, edi);
    MEM32(esi + 0x294) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0002016B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000200BC
 * Original: 0x000200BC - 0x00020178 (188 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000200BC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000200BC: ;
    edi = eax;
    eax = MEM32(esp + 0x11C);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, 0x1AF524);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000200D6u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_000200D6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8EA);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi + 0x28C;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x0002010Eu); RECOMP_ABI_CALL(0x000F9E30u, sub_000F9E30); /* call 0x000F9E30 */

loc_0002010E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002016B; /* je: equal / zero */

loc_00020112: ;
    edx = MEM32(esi + 0x2E0);
    MEM32(edx + 0x84) = 0x3E4CCCCD;
    eax = MEM32(esi + 0x2E0);
    ecx = MEM32(eax + 0x108);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esi + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002013Au); RECOMP_ABI_CALL(0x000EBA00u, sub_000EBA00); /* call 0x000EBA00 */

loc_0002013A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, esi);
    ecx = 0x1D7528;
    PUSH32(esp, 0x00020152u); RECOMP_ABI_CALL(0x00071E50u, sub_00071E50); /* call 0x00071E50 */

loc_00020152: ;
    MEM32(esi + 0x48) = eax;
    eax = 1;
    POP32(esp, edi);
    MEM32(esi + 0x294) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0002016B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000200BE
 * Original: 0x000200BE - 0x00020178 (186 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000200BE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000200BE: ;
    eax = MEM32(esp + 0x11C);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, 0x1AF524);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000200D6u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_000200D6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8EA);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi + 0x28C;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x0002010Eu); RECOMP_ABI_CALL(0x000F9E30u, sub_000F9E30); /* call 0x000F9E30 */

loc_0002010E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002016B; /* je: equal / zero */

loc_00020112: ;
    edx = MEM32(esi + 0x2E0);
    MEM32(edx + 0x84) = 0x3E4CCCCD;
    eax = MEM32(esi + 0x2E0);
    ecx = MEM32(eax + 0x108);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esi + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002013Au); RECOMP_ABI_CALL(0x000EBA00u, sub_000EBA00); /* call 0x000EBA00 */

loc_0002013A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, esi);
    ecx = 0x1D7528;
    PUSH32(esp, 0x00020152u); RECOMP_ABI_CALL(0x00071E50u, sub_00071E50); /* call 0x00071E50 */

loc_00020152: ;
    MEM32(esi + 0x48) = eax;
    eax = 1;
    POP32(esp, edi);
    MEM32(esi + 0x294) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0002016B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00020180
 * Original: 0x00020180 - 0x000201CB (75 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020180: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000201C0; /* jne: not equal / not zero */

loc_0002018D: ;
    eax = MEM32(esi + 0x278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000201C0; /* jne: not equal / not zero */

loc_00020197: ;
    ecx = MEM32(esi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000201B1; /* je: equal / zero */

loc_0002019E: ;
    eax = MEM32(ecx);
    edx = esi + 0x2A8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esi + 0x29C;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000201B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000201AEu); } /* indirect call */
    }

loc_000201B1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000201B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000201B5u); } /* indirect call */
    }

loc_000201B8: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x000201C0u); RECOMP_ABI_CALL(0x000D1210u, sub_000D1210); /* call 0x000D1210 */

loc_000201C0: ;
    MEM32(esi + 0x278) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000201D0
 * Original: 0x000201D0 - 0x00020232 (98 bytes, 28 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000201D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000201D0: ;
    eax = MEM32(0x1DC3CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0002021C; /* jne: not equal / not zero */

loc_000201DC: ;
    PUSH32(esp, esi);
    esi = 1;
    edx = esi;
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = esi;
    PUSH32(esp, 0x000201F4u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_000201F4: ;
    eax = MEM32(0x1DC3CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x1A51F8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0002021B; /* jne: not equal / not zero */

loc_00020203: ;
    edx = esi;
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = esi;
    PUSH32(esp, 0x00020215u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00020215: ;
    MEM32(0x1A51F8) = esi;

loc_0002021B: ;
    POP32(esp, esi);

loc_0002021C: ;
    eax = MEM32(edi + 0x290);
    ecx = edi + 0x28C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002022Eu); RECOMP_ABI_CALL(0x000F9EA0u, sub_000F9EA0); /* call 0x000F9EA0 */

loc_0002022E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00020240
 * Original: 0x00020240 - 0x0002047F (575 bytes, 138 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00020240(void)
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

loc_00020240: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002047A; /* je: equal / zero */

loc_00020254: ;
    fp_push(MEMF(0x1CF1D4)); /* fld float */
    eax = MEM32(0x1CF1DC);
    fp_push(MEMF(0x1CF1D8)); /* fld float */
    ecx = eax;
    MEM32(esi + 0x3D4) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x3CC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edi);
    MEMF(esi + 0x3D0) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x2C0);
    MEM32(esi + 0x3C0) = edx;
    eax = MEM32(esi + 0x2C4);
    MEM32(esi + 0x3C4) = eax;
    ecx = MEM32(esi + 0x2C8);
    MEM32(esi + 0x3C8) = ecx;
    fp_push(MEMF(esi + 0x3D4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3C4)); /* fmul dword ptr [esi + 0x3c4] */
    edi = esi + 0x3B4;
    fp_push(MEMF(esi + 0x3D0)); /* fld float */
    ecx = edi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3C8)); /* fmul dword ptr [esi + 0x3c8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esi + 0x3CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3C8)); /* fmul dword ptr [esi + 0x3c8] */
    fp_push(MEMF(esi + 0x3C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3D4)); /* fmul dword ptr [esi + 0x3d4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esi + 0x3C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3D0)); /* fmul dword ptr [esi + 0x3d0] */
    fp_push(MEMF(esi + 0x3CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3C4)); /* fmul dword ptr [esi + 0x3c4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + 8) = edx;
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00020311u); RECOMP_ABI_CALL(0x0001FE00u, sub_0001FE00); /* call 0x0001FE00 */

loc_00020311: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3D0)); /* fmul dword ptr [esi + 0x3d0] */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3D4)); /* fmul dword ptr [esi + 0x3d4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esi + 0x3D4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3CC)); /* fmul dword ptr [esi + 0x3cc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esi + 0x3CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    fp_push(MEMF(esi + 0x3D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x3C0) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x3C8) = eax;
    MEMF(esi + 0x3C4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x350)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x368)); /* fadd dword ptr [esi + 0x368] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C9220)); /* fadd dword ptr [0x1c9220] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3CC)); /* fmul dword ptr [esi + 0x3cc] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3D0)); /* fmul dword ptr [esi + 0x3d0] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3D4)); /* fmul dword ptr [esi + 0x3d4] */
    fp_push(MEMF(esi + 0x29C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_push(MEMF(esi + 0x2A0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    eax = esi + 0x448;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    fp_push(MEMF(esi + 0x2A4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x10);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x3A8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x3B0) = ecx;
    MEMF(esi + 0x3AC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002040F; /* je: equal / zero */

loc_000203DB: ;
    edx = MEM32(edi);
    MEM32(eax) = edx;
    ecx = MEM32(edi + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edi + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(edi + 0xC);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(edi + 0x10);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(edi + 0x14);
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(edi + 0x18);
    MEM32(eax + 0x18) = edx;
    ecx = MEM32(edi + 0x1C);
    MEM32(eax + 0x1C) = ecx;
    edx = MEM32(edi + 0x20);
    MEM32(eax + 0x20) = edx;

loc_0002040F: ;
    fp_push(MEMF(esi + 0x350)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x368)); /* fadd dword ptr [esi + 0x368] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x1C9220)); /* fadd dword ptr [0x1c9220] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3CC)); /* fmul dword ptr [esi + 0x3cc] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3D0)); /* fmul dword ptr [esi + 0x3d0] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3D4)); /* fmul dword ptr [esi + 0x3d4] */
    fp_push(MEMF(esi + 0x29C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    fp_push(MEMF(esi + 0x2A0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_push(MEMF(esi + 0x2A4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xC);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x43C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x444) = eax;
    MEMF(esi + 0x440) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_0002047A: ;
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
 * sub_00020480
 * Original: 0x00020480 - 0x000204EE (110 bytes, 29 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020480: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000204E7; /* je: equal / zero */

loc_00020490: ;
    PUSH32(esp, 0x00020495u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00020495: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0x41A00000);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x1D9FB8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3F800000;
    ecx = MEM32(eax + 0x38);
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x34C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x34C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000204E2u); RECOMP_ABI_CALL(0x00103EE0u, sub_00103EE0); /* call 0x00103EE0 */

loc_000204E2: ;
    PUSH32(esp, 0x000204E7u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_000204E7: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00020484
 * Original: 0x00020484 - 0x000204EE (106 bytes, 27 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020484(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020484: ;
    esi = ecx;
    eax = MEM32(esi + 0x278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000204E7; /* je: equal / zero */

loc_00020490: ;
    PUSH32(esp, 0x00020495u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_00020495: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0x41A00000);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x1D9FB8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3F800000;
    ecx = MEM32(eax + 0x38);
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x34C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x34C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000204E2u); RECOMP_ABI_CALL(0x00103EE0u, sub_00103EE0); /* call 0x00103EE0 */

loc_000204E2: ;
    PUSH32(esp, 0x000204E7u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_000204E7: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00020495
 * Original: 0x00020495 - 0x000204EE (89 bytes, 22 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020495(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020495: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0x41A00000);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x1D9FB8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3F800000;
    ecx = MEM32(eax + 0x38);
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x34C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x34C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000204E2u); RECOMP_ABI_CALL(0x00103EE0u, sub_00103EE0); /* call 0x00103EE0 */

loc_000204E2: ;
    PUSH32(esp, 0x000204E7u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_000204E7: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00020499
 * Original: 0x00020499 - 0x000204EE (85 bytes, 21 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020499(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020499: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0x41A00000);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x1D9FB8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3F800000;
    ecx = MEM32(eax + 0x38);
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x34C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x34C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000204E2u); RECOMP_ABI_CALL(0x00103EE0u, sub_00103EE0); /* call 0x00103EE0 */

loc_000204E2: ;
    PUSH32(esp, 0x000204E7u); RECOMP_ABI_CALL(0x0012AF20u, sub_0012AF20); /* call 0x0012AF20 */

loc_000204E7: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000204F0
 * Original: 0x000204F0 - 0x000205B3 (195 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000204F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000204F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x10) = 0;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    esi = ecx;
    MEM32(0x1CF1E0) = eax;
    MEM32(esp + 0x20) = 0x3F800000;
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x1C) = 0;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x18) = 0;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEM32(0x1CF1E4) = ecx;
    MEM32(0x1CF1E8) = edx;
    MEM32(0x1CF1EC) = eax;
    PUSH32(esp, 0x0002054Du); RECOMP_ABI_CALL(0x000E5430u, sub_000E5430); /* call 0x000E5430 */

loc_0002054D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x200);
    ecx = esi + 0x28C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2E0);
    PUSH32(esp, 0x00020567u); RECOMP_ABI_CALL(0x001001C0u, sub_001001C0); /* call 0x001001C0 */

loc_00020567: ;
    MEM32(esp + 4) = 0x3F800000;
    edx = MEM32(esp + 4);
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0xC) = 0x3F800000;
    ecx = MEM32(esp + 0xC);
    MEM32(esp + 8) = 0x3F800000;
    eax = MEM32(esp + 8);
    MEM32(0x1CF1E0) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(0x1CF1E4) = eax;
    MEM32(0x1CF1E8) = ecx;
    MEM32(0x1CF1EC) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000205C0
 * Original: 0x000205C0 - 0x000205F3 (51 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000205C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000205C0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx + 0x474);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x3E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3E0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000205DAu); RECOMP_ABI_CALL(0x000E9C80u, sub_000E9C80); /* call 0x000E9C80 */

loc_000205DA: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1DE580);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000205EDu); RECOMP_ABI_CALL(0x000E9C80u, sub_000E9C80); /* call 0x000E9C80 */

loc_000205ED: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000205CC
 * Original: 0x000205CC - 0x000205F3 (39 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000205CC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000205CC: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x3E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3E0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000205DAu); RECOMP_ABI_CALL(0x000E9C80u, sub_000E9C80); /* call 0x000E9C80 */

loc_000205DA: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1DE580);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000205EDu); RECOMP_ABI_CALL(0x000E9C80u, sub_000E9C80); /* call 0x000E9C80 */

loc_000205ED: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00020600
 * Original: 0x00020600 - 0x000207D7 (471 bytes, 110 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020600: ;
    eax = MEM32(0x1DC3CC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002064B; /* je: equal / zero */

loc_00020613: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = ebx;
    PUSH32(esp, 0x00020625u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00020625: ;
    _fa = (uint32_t)(MEM32(0x1DC3CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC3CC), ebx (32-bit) */
    MEM32(0x1A51F8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002064B; /* je: equal / zero */

loc_00020633: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = ebx;
    PUSH32(esp, 0x00020645u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00020645: ;
    MEM32(0x1A51F8) = ebx;

loc_0002064B: ;
    eax = MEM32(0x1DC444);
    edi = 0x207;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020691; /* je: equal / zero */

loc_00020659: ;
    edx = edi;
    ecx = 0x40354;
    MEM32(0x1DC444) = edi;
    PUSH32(esp, 0x0002066Bu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0002066B: ;
    _fa = (uint32_t)(MEM32(0x1DC444)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC444), edi (32-bit) */
    MEM32(0x1A51DC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00020691; /* je: equal / zero */

loc_00020679: ;
    edx = edi;
    ecx = 0x40354;
    MEM32(0x1DC444) = edi;
    PUSH32(esp, 0x0002068Bu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0002068B: ;
    MEM32(0x1A51DC) = edi;

loc_00020691: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(esp + 0x18) = 0;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    MEM32(0x1CF1E0) = eax;
    MEM32(esp + 0x28) = 0x3F800000;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x24) = 0;
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x20) = 0;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    edi = 1;
    PUSH32(esp, edi);
    MEM32(0x1CF1E4) = ecx;
    MEM32(0x1CF1E8) = edx;
    MEM32(0x1CF1EC) = eax;
    PUSH32(esp, 0x000206E7u); RECOMP_ABI_CALL(0x000E5430u, sub_000E5430); /* call 0x000E5430 */

loc_000206E7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x200);
    ecx = esi + 0x28C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2E0);
    PUSH32(esp, 0x00020701u); RECOMP_ABI_CALL(0x001001C0u, sub_001001C0); /* call 0x001001C0 */

loc_00020701: ;
    MEM32(esp + 0x10) = 0x3F800000;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0xC) = 0x3F800000;
    edx = MEM32(esp + 0xC);
    MEM32(0x1CF1E4) = eax;
    eax = MEM32(0x1DC444);
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3F800000;
    ecx = MEM32(esp + 0x14);
    MEM32(0x1CF1E0) = edx;
    edx = MEM32(esp + 0x18);
    esi = 0x203;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x1CF1E8) = ecx;
    MEM32(0x1CF1EC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002078E; /* je: equal / zero */

loc_00020756: ;
    edx = esi;
    ecx = 0x40354;
    MEM32(0x1DC444) = esi;
    PUSH32(esp, 0x00020768u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00020768: ;
    _fa = (uint32_t)(MEM32(0x1DC444)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC444), esi (32-bit) */
    MEM32(0x1A51DC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002078E; /* je: equal / zero */

loc_00020776: ;
    edx = esi;
    ecx = 0x40354;
    MEM32(0x1DC444) = esi;
    PUSH32(esp, 0x00020788u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00020788: ;
    MEM32(0x1A51DC) = esi;

loc_0002078E: ;
    _fa = (uint32_t)(MEM32(0x1DC3CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC3CC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000207CE; /* jne: not equal / not zero */

loc_00020796: ;
    edx = edi;
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = edi;
    PUSH32(esp, 0x000207A8u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_000207A8: ;
    _fa = (uint32_t)(MEM32(0x1DC3CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC3CC), ebx (32-bit) */
    MEM32(0x1A51F8) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000207CE; /* jne: not equal / not zero */

loc_000207B6: ;
    edx = edi;
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = edi;
    PUSH32(esp, 0x000207C8u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_000207C8: ;
    MEM32(0x1A51F8) = edi;

loc_000207CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00020620
 * Original: 0x00020620 - 0x000207E0 (448 bytes, 107 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00020620: ;
    PUSH32(esp, 0x00020625u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00020625: ;
    _fa = (uint32_t)(MEM32(0x1DC3CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC3CC), ebx (32-bit) */
    MEM32(0x1A51F8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002064B; /* je: equal / zero */

loc_00020633: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = ebx;
    PUSH32(esp, 0x00020645u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00020645: ;
    MEM32(0x1A51F8) = ebx;

loc_0002064B: ;
    eax = MEM32(0x1DC444);
    edi = 0x207;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020691; /* je: equal / zero */

loc_00020659: ;
    edx = edi;
    ecx = 0x40354;
    MEM32(0x1DC444) = edi;
    PUSH32(esp, 0x0002066Bu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0002066B: ;
    _fa = (uint32_t)(MEM32(0x1DC444)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC444), edi (32-bit) */
    MEM32(0x1A51DC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00020691; /* je: equal / zero */

loc_00020679: ;
    edx = edi;
    ecx = 0x40354;
    MEM32(0x1DC444) = edi;
    PUSH32(esp, 0x0002068Bu); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_0002068B: ;
    MEM32(0x1A51DC) = edi;

loc_00020691: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(esp + 0x18) = 0;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    MEM32(0x1CF1E0) = eax;
    MEM32(esp + 0x28) = 0x3F800000;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x24) = 0;
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x20) = 0;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    edi = 1;
    PUSH32(esp, edi);
    MEM32(0x1CF1E4) = ecx;
    MEM32(0x1CF1E8) = edx;
    MEM32(0x1CF1EC) = eax;
    PUSH32(esp, 0x000206E7u); RECOMP_ABI_CALL(0x000E5430u, sub_000E5430); /* call 0x000E5430 */

loc_000206E7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x200);
    ecx = esi + 0x28C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2E0);
    PUSH32(esp, 0x00020701u); RECOMP_ABI_CALL(0x001001C0u, sub_001001C0); /* call 0x001001C0 */

loc_00020701: ;
    MEM32(esp + 0x10) = 0x3F800000;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0xC) = 0x3F800000;
    edx = MEM32(esp + 0xC);
    MEM32(0x1CF1E4) = eax;
    eax = MEM32(0x1DC444);
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3F800000;
    ecx = MEM32(esp + 0x14);
    MEM32(0x1CF1E0) = edx;
    edx = MEM32(esp + 0x18);
    esi = 0x203;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x1CF1E8) = ecx;
    MEM32(0x1CF1EC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002078E; /* je: equal / zero */

loc_00020756: ;
    edx = esi;
    ecx = 0x40354;
    MEM32(0x1DC444) = esi;
    PUSH32(esp, 0x00020768u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00020768: ;
    _fa = (uint32_t)(MEM32(0x1DC444)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC444), esi (32-bit) */
    MEM32(0x1A51DC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002078E; /* je: equal / zero */

loc_00020776: ;
    edx = esi;
    ecx = 0x40354;
    MEM32(0x1DC444) = esi;
    PUSH32(esp, 0x00020788u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_00020788: ;
    MEM32(0x1A51DC) = esi;

loc_0002078E: ;
    _fa = (uint32_t)(MEM32(0x1DC3CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC3CC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000207CE; /* jne: not equal / not zero */

loc_00020796: ;
    edx = edi;
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = edi;
    PUSH32(esp, 0x000207A8u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_000207A8: ;
    _fa = (uint32_t)(MEM32(0x1DC3CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1DC3CC), ebx (32-bit) */
    MEM32(0x1A51F8) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000207CE; /* jne: not equal / not zero */

loc_000207B6: ;
    edx = edi;
    ecx = 0x4035C;
    MEM32(0x1DC3CC) = edi;
    PUSH32(esp, 0x000207C8u); RECOMP_ABI_CALL(0x00193BC0u, sub_00193BC0); /* call 0x00193BC0 */

loc_000207C8: ;
    MEM32(0x1A51F8) = edi;

loc_000207CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_000207E0(); return; /* fallthrough 0x000207E0 */

}

/**
 * sub_000207E0
 * Original: 0x000207E0 - 0x00020879 (153 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000207E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000207E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020875; /* je: equal / zero */

loc_000207F1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000207F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000207F4u); } /* indirect call */
    }

loc_000207F7: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x000207FFu); RECOMP_ABI_CALL(0x000D1210u, sub_000D1210); /* call 0x000D1210 */

loc_000207FF: ;
    edi = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x68);
    ecx = esi + 0x68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0002080Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002080Au); } /* indirect call */
    }

loc_0002080D: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x29C) = eax;
    ecx = MEM32(esi + 0x74);
    MEM32(esi + 0x2A0) = ecx;
    edx = MEM32(esi + 0x78);
    eax = esi + 0xA4;
    ecx = esi + 0x2A8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esi + 0x2A4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002086C; /* je: equal / zero */

loc_00020838: ;
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

loc_0002086C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00020874u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00020871u); } /* indirect call */
    }

loc_00020874: ;
    POP32(esp, edi);

loc_00020875: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00020880
 * Original: 0x00020880 - 0x000208D3 (83 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020880: ;
    _fa = (uint32_t)(MEM32(ecx + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x4C), 3 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000208A8; /* jne: not equal / not zero */

loc_00020890: ;
    _fa = (uint32_t)(MEM8(esi + 6)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 6), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002089A; /* je: equal / zero */

loc_00020896: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000208A8;

loc_0002089A: ;
    MEM32(ecx + 0x4C) = 2;
    MEM32(ecx + 0x58) = 1;

loc_000208A8: ;
    eax = MEM32(ecx + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000208B5; /* je: equal / zero */

loc_000208B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000208C2; /* jne: not equal / not zero */

loc_000208B5: ;
    eax = MEM32(ecx + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000208C2; /* jne: not equal / not zero */

loc_000208BC: ;
    _fa = (uint32_t)(MEM8(esi + 6)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 6), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000208CF; /* jne: not equal / not zero */

loc_000208C2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000208CF; /* je: equal / zero */

loc_000208C6: ;
    ecx = MEM32(ecx + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000208CFu); RECOMP_ABI_CALL(0x000EA770u, sub_000EA770); /* call 0x000EA770 */

loc_000208CF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000208E0
 * Original: 0x000208E0 - 0x00020918 (56 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000208E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000208E0: ;
    eax = ecx;
    ecx = MEM32(eax + 0x278);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(eax + 0x64);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00020904; /* je: equal / zero */

loc_000208F2: ;
    esi = eax + 0xA4;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00020900u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000208FDu); } /* indirect call */
    }

loc_00020900: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00020904: ;
    esi = eax + 0x2A8;
    _fb = (uint32_t)(0x29C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x29C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00020914u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00020911u); } /* indirect call */
    }

loc_00020914: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00020920
 * Original: 0x00020920 - 0x00020936 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00020920: ;
    eax = MEM32(ecx + 0x278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020933; /* je: equal / zero */

loc_0002092A: ;
    eax = MEM32(ecx + 0x68);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x2C)); return; /* indirect tail jmp */

loc_00020933: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00020940
 * Original: 0x00020940 - 0x00020956 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00020940: ;
    eax = MEM32(ecx + 0x278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020953; /* je: equal / zero */

loc_0002094A: ;
    eax = MEM32(ecx + 0x68);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x34)); return; /* indirect tail jmp */

loc_00020953: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00020960
 * Original: 0x00020960 - 0x00020968 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020960(void)
{

loc_00020960: ;
    MEM32(ecx + 0x54) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00020970
 * Original: 0x00020970 - 0x000209A1 (49 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020970: ;
    edx = MEM32(ecx + 0x4C);
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020987; /* je: equal / zero */

loc_0002097B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002098C; /* je: equal / zero */

loc_00020980: ;
    MEM32(ecx + 0x58) = 1;

loc_00020987: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002099B; /* jne: not equal / not zero */

loc_0002098C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002099B; /* je: equal / zero */

loc_00020991: ;
    MEM32(ecx + 0x4C) = 2;
    esp += 8; return; /* ret 4 */

loc_0002099B: ;
    MEM32(ecx + 0x4C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000209B0
 * Original: 0x000209B0 - 0x00020A57 (167 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000209B0(void)
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

loc_000209B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000209C4; /* jne: not equal / not zero */

loc_000209BB: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x50) = ecx;
    goto loc_000209CE;

loc_000209C4: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x50)); /* fadd dword ptr [esi + 0x50] */
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */

loc_000209CE: ;
    ecx = MEM32(esi + 0x27C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020A28; /* je: equal / zero */

loc_000209D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00020A39; /* ja: above (unsigned >) */

loc_000209DD: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x20A58); /* switch: 4 entries, 3 targets */
    if (_jt == 0x000209E4u) goto loc_000209E4;
    if (_jt == 0x000209EBu) goto loc_000209EB;
    if (_jt == 0x00020A28u) goto loc_00020A28;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000209E4: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020A28; /* je: equal / zero */

loc_000209EB: ;
    edx = MEM32(esi + 0x5C);
    eax = MEM32(esi + 0x60);
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 0x000209FFu); RECOMP_ABI_CALL(0x000EBA30u, sub_000EBA30); /* call 0x000EBA30 */

loc_000209FF: ;
    edx = MEM32(esi + 0x44);
    MEM32(esi + 0x50) = 0;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00020A17; /* jne: not equal / not zero */

loc_00020A10: ;
    MEM32(esi + 0x4C) = 3;

loc_00020A17: ;
    eax = MEM32(esi + 0x2E0);
    ecx = MEM32(eax + 0x108);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00020A28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00020A25u); } /* indirect call */
    }

loc_00020A28: ;
    ecx = MEM32(esi + 0x58);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x58) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00020A39: ;
    PUSH32(esp, 0x1AF53C);
    PUSH32(esp, 0x00020A43u); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_00020A43: ;
    ecx = MEM32(esi + 0x58);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x58) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020A70
 * Original: 0x00020A70 - 0x00020ADA (106 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020A70(void)
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

loc_00020A70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x68);
    esi = ecx;
    PUSH32(esp, 0x00020A7Au); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00020A7A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020ACD; /* je: equal / zero */

loc_00020A83: ;
    fp_push(MEMF(0x1AF4D4)); /* fld float */
    edx = MEM32(0x1AF4D4);
    MEM32(eax + 4) = 3;
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x14) = (float)fp_top(); /* fst */
    MEM32(eax + 8) = edx;
    MEMF(eax + 0x18) = (float)fp_top(); /* fst */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x10) = edx;
    MEM32(eax) = 0x1AF218;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(esi + 0x64) = eax;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x68;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x20) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00020ACD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x64) = eax;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x68;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x20) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00020AE0
 * Original: 0x00020AE0 - 0x00020B51 (113 bytes, 39 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020AE0: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    eax = 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    PUSH32(esp, esi);
    MEM32(esp + 4) = eax;
    esi = esp + 4;
    if (CMP_G(_fas, _fbs)) goto loc_00020AFB; /* jg: greater (signed >) */

loc_00020AF7: ;
    esi = esp + 0xC;

loc_00020AFB: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(ecx + 3) = LO8(edx);
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    esi = esp + 0xC;
    if (CMP_G(_fas, _fbs)) goto loc_00020B12; /* jg: greater (signed >) */

loc_00020B0E: ;
    esi = esp + 0x10;

loc_00020B12: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(ecx + 2) = LO8(edx);
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    esi = esp + 0xC;
    if (CMP_G(_fas, _fbs)) goto loc_00020B29; /* jg: greater (signed >) */

loc_00020B25: ;
    esi = esp + 0x14;

loc_00020B29: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(ecx + 1) = LO8(edx);
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_00020B45; /* jle: less or equal (signed <=) */

loc_00020B39: ;
    eax = esp + 8;
    SET_LO8(eax, MEM8(eax));
    MEM8(ecx) = LO8(eax);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_00020B45: ;
    eax = esp + 0x14;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx) = LO8(edx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00020B60
 * Original: 0x00020B60 - 0x00020C5A (250 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020B60: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    ecx = esi + 0x68;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00020B78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00020B75u); } /* indirect call */
    }

loc_00020B78: ;
    ecx = MEM32(esi + 0x64);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00020B82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00020B7Fu); } /* indirect call */
    }

loc_00020B82: ;
    ecx = MEM32(esi + 0x44);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020B90; /* je: equal / zero */

loc_00020B8B: ;
    PUSH32(esp, 0x00020B90u); RECOMP_ABI_CALL(0x000EB9C0u, sub_000EB9C0); /* call 0x000EB9C0 */

loc_00020B90: ;
    edi = 0x3F800000;
    eax = esi + 0x3E0;
    MEM8(esp + 0x17) = LO8(ebx);
    MEM8(esp + 0x16) = LO8(ebx);
    MEM8(esp + 0x15) = LO8(ebx);
    MEM8(esp + 0x14) = LO8(ebx);
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x418) = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x34C;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x3EC) = edi;
    MEM32(esi + 0x3F0) = edi;
    MEM32(eax) = 0x41200000;
    MEM32(esi + 0x3E4) = 0x41A00000;
    MEM32(esi + 0x3E8) = 0x49742400;
    MEM32(esi + 0x3F8) = 1;
    MEM32(esi + 0x3FC) = edi;
    MEM32(esi + 0x400) = edi;
    MEM32(esi + 0x414) = ebx;
    PUSH32(esp, 0x00020C06u); RECOMP_ABI_CALL(0x0001FF80u, sub_0001FF80); /* call 0x0001FF80 */

loc_00020C06: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F000000);
    ecx = esp + 0x24;
    MEM32(esi + 0x350) = 0x41C80000;
    MEM32(esi + 0x354) = 0x42480000;
    MEM32(esi + 0x368) = ebx;
    MEM32(esi + 0x36C) = 0x40A00000;
    MEM32(esi + 0x380) = 1;
    PUSH32(esp, 0x00020C45u); RECOMP_ABI_CALL(0x00015CD0u, sub_00015CD0); /* call 0x00015CD0 */

loc_00020C45: ;
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(esi + 0x384) = edx;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00020C60
 * Original: 0x00020C60 - 0x00020D39 (217 bytes, 70 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020C60(void)
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

loc_00020C60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00020C69u); RECOMP_ABI_CALL(0x00020240u, sub_00020240); /* call 0x00020240 */

loc_00020C69: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00020C84; /* ja: above (unsigned >) */

loc_00020C71: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x20D3C); /* switch: 4 entries, 3 targets */
    if (_jt == 0x00020C78u) goto loc_00020C78;
    if (_jt == 0x00020C7Fu) goto loc_00020C7F;
    if (_jt == 0x00020C91u) goto loc_00020C91;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00020C78: ;
    edi = 1;
    goto loc_00020C93;

loc_00020C7F: ;
    edi = MEM32(esi + 0x58);
    goto loc_00020C93;

loc_00020C84: ;
    PUSH32(esp, 0x1AF53C);
    PUSH32(esp, 0x00020C8Eu); RECOMP_ABI_CALL(0x000E3650u, sub_000E3650); /* call 0x000E3650 */

loc_00020C8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00020C91: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00020C93: ;
    eax = MEM32(esi + 0x27C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00020CCD; /* jne: not equal / not zero */

loc_00020C9D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020CCD; /* je: equal / zero */

loc_00020CA1: ;
    eax = MEM32(esi + 0x5C);
    ecx = MEM32(esi + 0x60);
    edx = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00020CB5u); RECOMP_ABI_CALL(0x000EBA30u, sub_000EBA30); /* call 0x000EBA30 */

loc_00020CB5: ;
    eax = MEM32(esi + 0x44);
    MEM32(esi + 0x50) = 0;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00020CCD; /* jne: not equal / not zero */

loc_00020CC6: ;
    MEM32(esi + 0x4C) = 3;

loc_00020CCD: ;
    eax = MEM32(esi + 0x330);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020D0A; /* je: equal / zero */

loc_00020CD7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00020CE2; /* jne: not equal / not zero */

loc_00020CDB: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020D0A; /* je: equal / zero */

loc_00020CE2: ;
    ecx = MEM32(esi + 0x294);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x27C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(esi + 0x2E0);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00020D03u); RECOMP_ABI_CALL(0x000FE9C0u, sub_000FE9C0); /* call 0x000FE9C0 */

loc_00020D03: ;
    MEM32(esi + 0x54) = 0;

loc_00020D0A: ;
    eax = MEM32(0x1DA00C);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020D36; /* je: equal / zero */

loc_00020D16: ;
    edx = MEM32(0x1DC340);
    fp_push(MEMF(edx + 8)); /* fld float */
    PUSH32(esp, ecx);
    eax = esi + 0x2CC;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x29C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x29C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00020D36u); RECOMP_ABI_CALL(0x00101080u, sub_00101080); /* call 0x00101080 */

loc_00020D36: ;
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
 * sub_00020D50
 * Original: 0x00020D50 - 0x00020DFC (172 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020D50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020D62; /* je: equal / zero */

loc_00020D5D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00020D62: ;
    ecx = esi;
    PUSH32(esp, 0x00020D69u); RECOMP_ABI_CALL(0x001213B0u, sub_001213B0); /* call 0x001213B0 */

loc_00020D69: ;
    PUSH32(esp, 0x1000000);
    PUSH32(esp, 0x00020D73u); RECOMP_ABI_CALL(0x00033A80u, sub_00033A80); /* call 0x00033A80 */

loc_00020D73: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00020D7Eu); RECOMP_ABI_CALL(0x00126000u, sub_00126000); /* call 0x00126000 */

loc_00020D7E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00020D84u); RECOMP_ABI_CALL(0x00024D80u, sub_00024D80); /* call 0x00024D80 */

loc_00020D84: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00020D8Au); RECOMP_ABI_CALL(0x00024BA0u, sub_00024BA0); /* call 0x00024BA0 */

loc_00020D8A: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x00020D96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00020D93u); } /* indirect call */
    }

loc_00020D96: ;
    PUSH32(esp, 0xC);
    MEM32(esi + 0x280) = edi;
    MEM32(esi + 0x284) = edi;
    MEM32(esi + 0x288) = edi;
    PUSH32(esp, 0x00020DAFu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00020DAF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020DC8; /* je: equal / zero */

loc_00020DB6: ;
    MEM32(eax) = 0x1AF57C;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = 0x20600;
    goto loc_00020DCA;

loc_00020DC8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00020DCA: ;
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0x54) = edi;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x274) = edi;
    MEM32(esi + 0x474) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x48) = 0xFFFFFFFFu;
    MEM32(esi + 0x58) = 1;
    MEM32(esi + 0x40) = 1;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00020E00
 * Original: 0x00020E00 - 0x00020EA5 (165 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020E00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020EA2; /* je: equal / zero */

loc_00020E11: ;
    eax = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    ecx = 0x1D7528;
    PUSH32(esp, 0x00020E1Fu); RECOMP_ABI_CALL(0x000720F0u, sub_000720F0); /* call 0x000720F0 */

loc_00020E1F: ;
    eax = MEM32(esi + 0x274);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020E3B; /* je: equal / zero */

loc_00020E29: ;
    ecx = MEM32(0x1DE460);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00020E35u); RECOMP_ABI_CALL(0x000ECFB0u, sub_000ECFB0); /* call 0x000ECFB0 */

loc_00020E35: ;
    MEM32(esi + 0x274) = edi;

loc_00020E3B: ;
    eax = MEM32(esi + 0x474);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020E54; /* je: equal / zero */

loc_00020E45: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00020E4Bu); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00020E4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x474) = edi;

loc_00020E54: ;
    ecx = esi + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00020E5Du); RECOMP_ABI_CALL(0x00124A50u, sub_00124A50); /* call 0x00124A50 */

loc_00020E5D: ;
    eax = MEM32(esi + 0x60);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020E79; /* je: equal / zero */

loc_00020E67: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00020E70u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00020E70: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x5C) = edi;

loc_00020E79: ;
    ecx = MEM32(esi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020E89; /* je: equal / zero */

loc_00020E80: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00020E86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00020E84u); } /* indirect call */
    }

loc_00020E86: ;
    MEM32(esi + 0x64) = edi;

loc_00020E89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00020E8Fu); RECOMP_ABI_CALL(0x00024DD0u, sub_00024DD0); /* call 0x00024DD0 */

loc_00020E8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00020E95u); RECOMP_ABI_CALL(0x00024BC0u, sub_00024BC0); /* call 0x00024BC0 */

loc_00020E95: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00020E9Fu); RECOMP_ABI_CALL(0x00018E80u, sub_00018E80); /* call 0x00018E80 */

loc_00020E9F: ;
    MEM32(esi + 0x40) = edi;

loc_00020EA2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00020EB0
 * Original: 0x00020EB0 - 0x00020F1E (110 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020EB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00020EB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 1);
    edi = esi + 0x68;
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00020EC1u); RECOMP_ABI_CALL(0x00025660u, sub_00025660); /* call 0x00025660 */

loc_00020EC1: ;
    ecx = edi;
    MEM32(esi) = 0x1AF580;
    PUSH32(esp, 0x00020ECEu); RECOMP_ABI_CALL(0x000D23E0u, sub_000D23E0); /* call 0x000D23E0 */

loc_00020ECE: ;
    ecx = esi + 0x28C;
    MEM32(edi) = 0x1AF4E0;
    PUSH32(esp, 0x00020EDFu); RECOMP_ABI_CALL(0x000FA160u, sub_000FA160); /* call 0x000FA160 */

loc_00020EDF: ;
    ecx = esi + 0x34C;
    PUSH32(esp, 0x00020EEAu); RECOMP_ABI_CALL(0x00105770u, sub_00105770); /* call 0x00105770 */

loc_00020EEA: ;
    ecx = esi + 0x3E0;
    PUSH32(esp, 0x00020EF5u); RECOMP_ABI_CALL(0x00105770u, sub_00105770); /* call 0x00105770 */

loc_00020EF5: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x27C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x40) = eax;
    PUSH32(esp, 0x00020F17u); RECOMP_ABI_CALL(0x00020D50u, sub_00020D50); /* call 0x00020D50 */

loc_00020F17: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00020F20
 * Original: 0x00020F20 - 0x00020F29 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00020F20: ;
    eax = MEM32(ecx + 0x68);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x30)); return; /* indirect tail jmp */

}

/**
 * sub_00020F30
 * Original: 0x00020F30 - 0x00020F50 (32 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00020F30: ;
    eax = MEM32(ecx + 0x278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00020F43; /* je: equal / zero */

loc_00020F3A: ;
    eax = MEM32(ecx + 0x68);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

loc_00020F43: ;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00020F50(); return; /* fallthrough 0x00020F50 */

}

/**
 * sub_00020F50
 * Original: 0x00020F50 - 0x00020F95 (69 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00020F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AF580;
    PUSH32(esp, 0x00020F5Eu); RECOMP_ABI_CALL(0x00020E00u, sub_00020E00); /* call 0x00020E00 */

loc_00020F5E: ;
    ecx = esi + 0x3E0;
    PUSH32(esp, 0x00020F69u); RECOMP_ABI_CALL(0x00105830u, sub_00105830); /* call 0x00105830 */

loc_00020F69: ;
    ecx = esi + 0x34C;
    PUSH32(esp, 0x00020F74u); RECOMP_ABI_CALL(0x00105830u, sub_00105830); /* call 0x00105830 */

loc_00020F74: ;
    ecx = esi + 0x28C;
    PUSH32(esp, 0x00020F7Fu); RECOMP_ABI_CALL(0x000FA1E0u, sub_000FA1E0); /* call 0x000FA1E0 */

loc_00020F7F: ;
    ecx = esi + 0x68;
    MEM32(ecx) = 0x1AF4E0;
    PUSH32(esp, 0x00020F8Du); RECOMP_ABI_CALL(0x000D1690u, sub_000D1690); /* call 0x000D1690 */

loc_00020F8D: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000256A0(); return; /* tail jmp 0x000256A0 */

}

/**
 * sub_00020FA0
 * Original: 0x00020FA0 - 0x00021000 (96 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00020FA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x1AF580;
    PUSH32(esp, 0x00020FAEu); RECOMP_ABI_CALL(0x00020E00u, sub_00020E00); /* call 0x00020E00 */

loc_00020FAE: ;
    ecx = esi + 0x3E0;
    PUSH32(esp, 0x00020FB9u); RECOMP_ABI_CALL(0x00105830u, sub_00105830); /* call 0x00105830 */

loc_00020FB9: ;
    ecx = esi + 0x34C;
    PUSH32(esp, 0x00020FC4u); RECOMP_ABI_CALL(0x00105830u, sub_00105830); /* call 0x00105830 */

loc_00020FC4: ;
    ecx = esi + 0x28C;
    PUSH32(esp, 0x00020FCFu); RECOMP_ABI_CALL(0x000FA1E0u, sub_000FA1E0); /* call 0x000FA1E0 */

loc_00020FCF: ;
    ecx = esi + 0x68;
    MEM32(ecx) = 0x1AF4E0;
    PUSH32(esp, 0x00020FDDu); RECOMP_ABI_CALL(0x000D1690u, sub_000D1690); /* call 0x000D1690 */

loc_00020FDD: ;
    ecx = esi;
    PUSH32(esp, 0x00020FE4u); RECOMP_ABI_CALL(0x000256A0u, sub_000256A0); /* call 0x000256A0 */

loc_00020FE4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00020FF4; /* je: equal / zero */

loc_00020FEB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00020FF1u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00020FF1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00020FF4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00021000(); return; /* fallthrough 0x00021000 */

}

/**
 * sub_00021000
 * Original: 0x00021000 - 0x000210A8 (168 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021000: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    ebx = esi + 0x18;
    PUSH32(esp, 0x1AF608);
    ecx = ebx;
    MEM32(esi + 0x24) = 0x3E800000;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x00021041u); RECOMP_ABI_CALL(0x000F9E30u, sub_000F9E30); /* call 0x000F9E30 */

loc_00021041: ;
    ecx = MEM32(0x1D3EA4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0002104Du); RECOMP_ABI_CALL(0x000F2DC0u, sub_000F2DC0); /* call 0x000F2DC0 */

loc_0002104D: ;
    eax = 0x3F800000;
    MEM32(esi + 0xD8) = eax;
    MEM32(esi + 0xDC) = edi;
    MEM32(esi + 0xE0) = edi;
    MEM32(esi + 0xE4) = edi;
    MEM32(esi + 0xE8) = eax;
    MEM32(esi + 0xEC) = edi;
    MEM32(esi + 0xF0) = edi;
    MEM32(esi + 0xF4) = edi;
    MEM32(esi + 0xF8) = eax;
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x108) = edi;
    PUSH32(esp, 0x00021097u); RECOMP_ABI_CALL(0x00126000u, sub_00126000); /* call 0x00126000 */

loc_00021097: ;
    POP32(esp, edi);
    MEM32(esi + 0x114) = 0xFFFFFFFFu;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000210B0
 * Original: 0x000210B0 - 0x0002119A (234 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000210B0(void)
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

loc_000210B0: ;
    eax = MEM32(0x1D9FB8);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx + 0x48);
    PUSH32(esp, 0x000210C6u); RECOMP_ABI_CALL(0x000ABC80u, sub_000ABC80); /* call 0x000ABC80 */

loc_000210C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x114)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x114) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00021195; /* je: equal / zero */

loc_000210D2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebx + 0x114) = eax;
    edx = MEM32(0x1D9FB8);
    ecx = MEM32(edx + 0x38);
    edi = MEM32(ecx + 0x1C);
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, 0x1AF630);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000210F7u); RECOMP_ABI_CALL(0x000E07A0u, sub_000E07A0); /* call 0x000E07A0 */

loc_000210F7: ;
    eax = MEM32(edi + 0x10);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00021192; /* jle: less or equal (signed <=) */

loc_00021107: ;
    MEM32(esp + 0x10) = ebp;
    goto loc_00021110;

    /* nop */

loc_00021110: ;
    esi = MEM32(edi + 0x6C);
    edx = MEM32(esp + 0x10);
    eax = esp + 0x14;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00021124u); RECOMP_ABI_CALL(0x000E1270u, sub_000E1270); /* call 0x000E1270 */

loc_00021124: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00021146; /* je: equal / zero */

loc_0002112B: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00021110; /* jl: less (signed <) */

loc_0002113E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00021146: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00021192; /* je: equal / zero */

loc_0002114A: ;
    ecx = MEM32(esi + 0x40);
    MEM32(ebx + 0xFC) = ecx;
    edx = MEM32(esi + 0x44);
    MEM32(ebx + 0x100) = edx;
    eax = MEM32(esi + 0x48);
    MEM32(ebx + 0x104) = eax;
    fp_push(MEMF(esi + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1C91CC)); /* fmul dword ptr [0x1c91cc] */
    eax = MEM32(ebx + 0x6C);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xAC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x44)); /* fadd dword ptr [esi + 0x44] */
    MEMF(ebx + 0x10C) = (float)fp_top(); /* fst */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x24)); /* fmul dword ptr [ebx + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    MEMF(ebx + 0x10C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_00021192: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00021195: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000211A0
 * Original: 0x000211A0 - 0x0002121D (125 bytes, 39 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000211A0(void)
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

loc_000211A0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
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
 * sub_00021220
 * Original: 0x00021220 - 0x00021243 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021220(void)
{

loc_00021220: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x22);
    esi = ecx;
    PUSH32(esp, 0x0002122Au); RECOMP_ABI_CALL(0x00018E10u, sub_00018E10); /* call 0x00018E10 */

loc_0002122A: ;
    ecx = esi + 0x18;
    MEM32(esi) = 0x1AF640;
    PUSH32(esp, 0x00021238u); RECOMP_ABI_CALL(0x000FA160u, sub_000FA160); /* call 0x000FA160 */

loc_00021238: ;
    ecx = esi;
    PUSH32(esp, 0x0002123Fu); RECOMP_ABI_CALL(0x00021000u, sub_00021000); /* call 0x00021000 */

loc_0002123F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00021250
 * Original: 0x00021250 - 0x00021257 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021250(void)
{

loc_00021250: ;
    eax = ecx + 0xFC;
    esp += 4; return; /* ret */

}

/**
 * sub_00021260
 * Original: 0x00021260 - 0x00021267 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021260(void)
{

loc_00021260: ;
    eax = ecx + 0xD8;
    esp += 4; return; /* ret */

}

/**
 * sub_00021270
 * Original: 0x00021270 - 0x0002129F (47 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00021270: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x1AF640;
    ecx = MEM32(0x1D3EA4);
    edi = esi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00021289u); RECOMP_ABI_CALL(0x000EEBB0u, sub_000EEBB0); /* call 0x000EEBB0 */

loc_00021289: ;
    ecx = edi;
    PUSH32(esp, 0x00021290u); RECOMP_ABI_CALL(0x000FA1E0u, sub_000FA1E0); /* call 0x000FA1E0 */

loc_00021290: ;
    POP32(esp, edi);
    MEM32(esi) = 0x1AEFA0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00018E80(); return; /* tail jmp 0x00018E80 */

}

/**
 * sub_000212A0
 * Original: 0x000212A0 - 0x000213A7 (263 bytes, 69 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000212A0(void)
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

loc_000212A0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000212ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000212A8u); } /* indirect call */
    }

loc_000212AB: ;
    fp_push(MEMF(0x1CA420)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    PUSH32(esp, ecx);
    ecx = esp + 8;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x1AF330)); /* fmul dword ptr [0x1af330] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000212C9u); RECOMP_ABI_CALL(0x000CF300u, sub_000CF300); /* call 0x000CF300 */

loc_000212C9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0xD8;
    PUSH32(esp, 0x000212D8u); RECOMP_ABI_CALL(0x0001B010u, sub_0001B010); /* call 0x0001B010 */

loc_000212D8: ;
    fp_push(MEMF(esi + 0x10C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x1CA41C)); /* fsub dword ptr [0x1ca41c] */
    eax = MEM32(esi + 0x108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_push(MEMF(0x1CA418)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    if (CMP_NE(_fa, _fb)) goto loc_00021342; /* jne: not equal / not zero */

loc_000212F8: ;
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x110) - fp_top()); /* fsubr dword ptr [esi + 0x110] */
    MEMF(esi + 0x110) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002131F; /* jp: parity */

loc_0002130D: ;
    MEMF(esi + 0x110) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x108) = 1;
    goto loc_00021321;

loc_0002131F: ;
    fp_pop(); /* fstp st(0) */

loc_00021321: ;
    fp_push(MEMF(esi + 0x110)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x10C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x10c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00021375; /* jne: not equal / not zero */

loc_00021334: ;
    edx = MEM32(esi + 0x10C);
    MEM32(esi + 0x110) = edx;
    goto loc_00021375;

loc_00021342: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x110)); /* fadd dword ptr [esi + 0x110] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x10C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x10c] */
    MEMF(esi + 0x110) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00021396; /* jne: not equal / not zero */

loc_0002135B: ;
    eax = MEM32(esi + 0x10C);
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x110) = eax;
    MEM32(esi + 0x108) = 0;

loc_00021373: ;
    fp_pop(); /* fstp st(0) */

loc_00021375: ;
    ecx = MEM32(esi + 0x110);
    edx = MEM32(esp + 0x30);
    eax = MEM32(esi);
    MEM32(esi + 0x100) = ecx;
    ecx = esi;
    MEM32(esi + 0x18) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0002138Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002138Cu); } /* indirect call */
    }

loc_0002138F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00021396: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00021373; /* jp: parity */

loc_0002139F: ;
    MEMF(esi + 0x110) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00021375;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000213B0
 * Original: 0x000213B0 - 0x00021430 (128 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000213B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000213B0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xFC);
    MEM32(esi + 0x28) = eax;
    ecx = MEM32(esi + 0x100);
    MEM32(esi + 0x2C) = ecx;
    edx = MEM32(esi + 0x104);
    MEM32(esi + 0x30) = edx;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    ecx = esi + 0xD8;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000213E6u); RECOMP_ABI_CALL(0x000211A0u, sub_000211A0); /* call 0x000211A0 */

loc_000213E6: ;
    ecx = esi + 0x34;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00021425; /* je: equal / zero */

loc_000213F1: ;
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

loc_00021425: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00021430(); return; /* fallthrough 0x00021430 */

}

/**
 * sub_00021430
 * Original: 0x00021430 - 0x00021474 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021430: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x1AF640;
    ecx = MEM32(0x1D3EA4);
    edi = esi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00021449u); RECOMP_ABI_CALL(0x000EEBB0u, sub_000EEBB0); /* call 0x000EEBB0 */

loc_00021449: ;
    ecx = edi;
    PUSH32(esp, 0x00021450u); RECOMP_ABI_CALL(0x000FA1E0u, sub_000FA1E0); /* call 0x000FA1E0 */

loc_00021450: ;
    ecx = esi;
    MEM32(esi) = 0x1AEFA0;
    PUSH32(esp, 0x0002145Du); RECOMP_ABI_CALL(0x00018E80u, sub_00018E80); /* call 0x00018E80 */

loc_0002145D: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002146D; /* je: equal / zero */

loc_00021464: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002146Au); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_0002146A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002146D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00021480
 * Original: 0x00021480 - 0x000214C4 (68 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021480(void)
{

loc_00021480: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x98;
    PUSH32(esp, edi);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x00021492u); RECOMP_ABI_CALL(0x00023330u, sub_00023330); /* call 0x00023330 */

loc_00021492: ;
    ecx = edi;
    MEM32(esi) = 0x1AF9B8;
    PUSH32(esp, 0x0002149Fu); RECOMP_ABI_CALL(0x000D23E0u, sub_000D23E0); /* call 0x000D23E0 */

loc_0002149F: ;
    ecx = esi + 0x2A4;
    PUSH32(esp, 0x000214AAu); RECOMP_ABI_CALL(0x00019840u, sub_00019840); /* call 0x00019840 */

loc_000214AA: ;
    ecx = esi + 0x3BC;
    PUSH32(esp, 0x000214B5u); RECOMP_ABI_CALL(0x000FA160u, sub_000FA160); /* call 0x000FA160 */

loc_000214B5: ;
    POP32(esp, edi);
    MEM32(esi + 0x4A8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000214D0
 * Original: 0x000214D0 - 0x00021570 (160 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000214D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000214D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x4A8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x1AF9B8;
    if (CMP_LE(_fas, _fbs)) goto loc_0002150A; /* jle: less or equal (signed <=) */

loc_000214E7: ;
    edi = esi + 0x480;
    /* nop */

loc_000214F0: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000214FC; /* je: equal / zero */

loc_000214F6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000214FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000214FAu); } /* indirect call */
    }

loc_000214FC: ;
    eax = MEM32(esi + 0x4A8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000214F0; /* jl: less (signed <) */

loc_0002150A: ;
    ecx = esi + 0x3BC;
    PUSH32(esp, 0x00021515u); RECOMP_ABI_CALL(0x000FA1E0u, sub_000FA1E0); /* call 0x000FA1E0 */

loc_00021515: ;
    edi = esi + 0x34C;
    MEM32(esi + 0x2A4) = 0x1AF248;
    ecx = edi;
    MEM32(edi) = 0x1AF218;
    PUSH32(esp, 0x00021532u); RECOMP_ABI_CALL(0x000D0730u, sub_000D0730); /* call 0x000D0730 */

loc_00021532: ;
    MEM32(edi) = 0x1AF200;
    edi = esi + 0x2C8;
    ecx = edi;
    MEM32(edi) = 0x1AF230;
    PUSH32(esp, 0x0002154Bu); RECOMP_ABI_CALL(0x000D0730u, sub_000D0730); /* call 0x000D0730 */

loc_0002154B: ;
    MEM32(edi) = 0x1AF200;
    ecx = esi + 0x98;
    MEM32(esi + 0x2A4) = 0x1AF200;
    PUSH32(esp, 0x00021566u); RECOMP_ABI_CALL(0x000D1690u, sub_000D1690); /* call 0x000D1690 */

loc_00021566: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00023390(); return; /* tail jmp 0x00023390 */

}

/**
 * sub_00021570
 * Original: 0x00021570 - 0x00021590 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00021570: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00021578u); RECOMP_ABI_CALL(0x000214D0u, sub_000214D0); /* call 0x000214D0 */

loc_00021578: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00021588; /* je: equal / zero */

loc_0002157F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00021585u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00021585: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00021588: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    g_seh_ebp = ebp; sub_00021590(); return; /* fallthrough 0x00021590 */

}

/**
 * sub_00021590
 * Original: 0x00021590 - 0x00021778 (488 bytes, 156 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021590(void)
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

loc_00021590: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x47C);
    fp_push(MEMF(esi + 0x2A0)); /* fld float */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x1CA430)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 0x1ca430] */
    PUSH32(esp, edi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000216BA; /* jne: not equal / not zero */

loc_000215B7: ;
    eax = MEM32(esi + 0x18);
    fp_push(MEMF(eax + 0x68)); /* fld float */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(eax)); /* fld float */
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
    PUSH32(esp, 0x000215E4u); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_000215E4: ;
    eax = MEM32(esi + 0x47C);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1CA434)); /* fmul dword ptr [eax + 0x1ca434] */
    ecx = eax + 0x1CA43C;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1CA438)); /* fmul dword ptr [eax + 0x1ca438] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002161D; /* jp: parity */

loc_00021619: ;
    ecx = esp + 8;

loc_0002161D: ;
    ecx = MEM32(ecx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0002162Cu); RECOMP_ABI_CALL(0x00023520u, sub_00023520); /* call 0x00023520 */

loc_0002162C: ;
    eax = MEM32(0x1DA86C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00021656; /* jne: not equal / not zero */

loc_00021635: ;
    PUSH32(esp, 0x23C);
    PUSH32(esp, 0x0002163Fu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0002163F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002164F; /* je: equal / zero */

loc_00021646: ;
    ecx = eax;
    PUSH32(esp, 0x0002164Du); RECOMP_ABI_CALL(0x000AFC40u, sub_000AFC40); /* call 0x000AFC40 */

loc_0002164D: ;
    goto loc_00021651;

loc_0002164F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00021651: ;
    MEM32(0x1DA86C) = eax;

loc_00021656: ;
    fp_push(MEMF(eax + 0x21C)); /* fld float */
    eax = MEM32(0x1DA878);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esi + 0x18);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_0002168D; /* jne: not equal / not zero */

loc_0002166C: ;
    PUSH32(esp, 0x360);
    PUSH32(esp, 0x00021676u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00021676: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00021686; /* je: equal / zero */

loc_0002167D: ;
    ecx = eax;
    PUSH32(esp, 0x00021684u); RECOMP_ABI_CALL(0x000B0870u, sub_000B0870); /* call 0x000B0870 */

loc_00021684: ;
    goto loc_00021688;

loc_00021686: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00021688: ;
    MEM32(0x1DA878) = eax;

loc_0002168D: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x000216A6u); RECOMP_ABI_CALL(0x000AFF50u, sub_000AFF50); /* call 0x000AFF50 */

loc_000216A6: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000216B2u); RECOMP_ABI_CALL(0x00023A90u, sub_00023A90); /* call 0x00023A90 */

loc_000216B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000216BA: ;
    edx = MEM32(esi + 0x18);
    fp_push(MEMF(edx + 0x208)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1AF3A0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x1af3a0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00021764; /* jne: not equal / not zero */

loc_000216D4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    ecx = 0x1CEFD8;
    PUSH32(esp, 0x000216E1u); RECOMP_ABI_CALL(0x000CE0A0u, sub_000CE0A0); /* call 0x000CE0A0 */

loc_000216E1: ;
    ebx = eax;
    eax = MEM32(0x1DA86C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002170D; /* jne: not equal / not zero */

loc_000216EC: ;
    PUSH32(esp, 0x23C);
    PUSH32(esp, 0x000216F6u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000216F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00021706; /* je: equal / zero */

loc_000216FD: ;
    ecx = eax;
    PUSH32(esp, 0x00021704u); RECOMP_ABI_CALL(0x000AFC40u, sub_000AFC40); /* call 0x000AFC40 */

loc_00021704: ;
    goto loc_00021708;

loc_00021706: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00021708: ;
    MEM32(0x1DA86C) = eax;

loc_0002170D: ;
    fp_push(MEMF(eax + 0x21C)); /* fld float */
    eax = MEM32(0x1DA878);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esi + 0x18);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_00021744; /* jne: not equal / not zero */

loc_00021723: ;
    PUSH32(esp, 0x360);
    PUSH32(esp, 0x0002172Du); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_0002172D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002173D; /* je: equal / zero */

loc_00021734: ;
    ecx = eax;
    PUSH32(esp, 0x0002173Bu); RECOMP_ABI_CALL(0x000B0870u, sub_000B0870); /* call 0x000B0870 */

loc_0002173B: ;
    goto loc_0002173F;

loc_0002173D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002173F: ;
    MEM32(0x1DA878) = eax;

loc_00021744: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ebx * 4 + 0x1CA558);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00021763u); RECOMP_ABI_CALL(0x000AFF50u, sub_000AFF50); /* call 0x000AFF50 */

loc_00021763: ;
    POP32(esp, ebx);

loc_00021764: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00021770u); RECOMP_ABI_CALL(0x00023A90u, sub_00023A90); /* call 0x00023A90 */

loc_00021770: ;
    POP32(esp, edi);
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
 * sub_00021780
 * Original: 0x00021780 - 0x00021A44 (708 bytes, 193 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00021780: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x8C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esi + 0x47C) = eax;
    edi = eax;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x1CA430) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1CA430;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ebp = eax;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0xFFFFFFFFu);
    _fb = (uint32_t)(0x1CA4F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1CA4F8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    ebx = esi + 0x3BC;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x000217E1u); RECOMP_ABI_CALL(0x000F9E30u, sub_000F9E30); /* call 0x000F9E30 */

loc_000217E1: ;
    edx = MEM32(esi + 0x410);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(edx + 0x58) = 0x42F00000;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x00021813u); RECOMP_ABI_CALL(0x00023C70u, sub_00023C70); /* call 0x00023C70 */

loc_00021813: ;
    edx = MEM32(edi + 4);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ebx = esi + 0x2A4;
    PUSH32(esp, ebx);
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x00021840u); RECOMP_ABI_CALL(0x00025960u, sub_00025960); /* call 0x00025960 */

loc_00021840: ;
    eax = esi + 0x98;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(ebx + 0x20) = eax;
    MEM32(ebx + 0x44) = eax;
    MEM32(ebx + 0xC8) = eax;
    PUSH32(esp, 0x0002185Du); RECOMP_ABI_CALL(0x00023C60u, sub_00023C60); /* call 0x00023C60 */

loc_0002185D: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x00021866u); RECOMP_ABI_CALL(0x000D0E40u, sub_000D0E40); /* call 0x000D0E40 */

loc_00021866: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0002186Fu); RECOMP_ABI_CALL(0x000D0E40u, sub_000D0E40); /* call 0x000D0E40 */

loc_0002186F: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, 0x3F400000);
    ecx = eax;
    PUSH32(esp, ecx);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    MEM32(esp + 0x70) = eax;
    PUSH32(esp, 0x00021895u); RECOMP_ABI_CALL(0x000D4AC0u, sub_000D4AC0); /* call 0x000D4AC0 */

loc_00021895: ;
    ecx = esp + 0x34;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000218DE; /* je: equal / zero */

loc_000218A0: ;
    edx = MEM32(eax);
    MEM32(esp + 0x20) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x24) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x28) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(esp + 0x2C) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(esp + 0x30) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 0x34) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(esp + 0x38) = edx;
    ecx = MEM32(eax + 0x1C);
    MEM32(esp + 0x3C) = ecx;
    edx = MEM32(eax + 0x20);
    MEM32(esp + 0x40) = edx;

loc_000218DE: ;
    eax = MEM32(ebp + 0x14);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x70) = 0x3DCCCCCD;
    MEM32(esp + 0x6C) = 0x3FA66666;
    MEM32(esp + 0x64) = eax;
    PUSH32(esp, 0x00021901u); RECOMP_ABI_CALL(0x00023C50u, sub_00023C50); /* call 0x00023C50 */

loc_00021901: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0002190Au); RECOMP_ABI_CALL(0x000D0E40u, sub_000D0E40); /* call 0x000D0E40 */

loc_0002190A: ;
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F000000);
    eax = edx;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    MEM32(esp + 0x70) = edx;
    PUSH32(esp, 0x00021930u); RECOMP_ABI_CALL(0x000D4AC0u, sub_000D4AC0); /* call 0x000D4AC0 */

loc_00021930: ;
    edx = esp + 0x34;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00021979; /* je: equal / zero */

loc_0002193B: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x2C) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0x30) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esp + 0x34) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(esp + 0x38) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(esp + 0x3C) = edx;
    eax = MEM32(eax + 0x20);
    MEM32(esp + 0x40) = eax;

loc_00021979: ;
    ecx = MEM32(ebp + 0x1C);
    eax = MEM32(edi + 8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x6C) = 0x3DCCCCCD;
    MEM32(esp + 0x68) = 0x3F000000;
    MEM32(esp + 0x60) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00021A2E; /* jle: less or equal (signed <=) */

loc_0002199D: ;
    ebx = esi + 0x480;

loc_000219A3: ;
    edx = MEM32(edi + 0xC);
    eax = edx + ebp * 8;
    PUSH32(esp, 0x460);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000219B7u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_000219B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000219C7; /* je: equal / zero */

loc_000219BE: ;
    ecx = eax;
    PUSH32(esp, 0x000219C5u); RECOMP_ABI_CALL(0x000233B0u, sub_000233B0); /* call 0x000233B0 */

loc_000219C5: ;
    goto loc_000219C9;

loc_000219C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000219C9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    MEM32(ebx) = eax;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    PUSH32(esp, 0x00021A03u); RECOMP_ABI_CALL(0x000240A0u, sub_000240A0); /* call 0x000240A0 */

loc_00021A03: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0x00021A0Fu); RECOMP_ABI_CALL(0x00023410u, sub_00023410); /* call 0x00023410 */

loc_00021A0F: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00021A19u); RECOMP_ABI_CALL(0x000234C0u, sub_000234C0); /* call 0x000234C0 */

loc_00021A19: ;
    MEM32(esi + 0x4A8) = MEM32(esi + 0x4A8) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x4A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000219A3; /* jl: less (signed <) */

loc_00021A2E: ;
    PUSH32(esp, 0xF);
    ecx = esi;
    PUSH32(esp, 0x00021A37u); RECOMP_ABI_CALL(0x00024020u, sub_00024020); /* call 0x00024020 */

loc_00021A37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00021A50
 * Original: 0x00021A50 - 0x00021ABF (111 bytes, 47 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00021A50(void)
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

loc_00021A50: ;
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
    PUSH32(esp, 0x00021A85u); RECOMP_ABI_CALL(0x000CDE60u, sub_000CDE60); /* call 0x000CDE60 */

loc_00021A85: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x1C91E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x1c91e0] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    eax = esi;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00021ABB; /* jnp: not parity */

loc_00021A97: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x1C91D0) / fp_top()); /* fdivr dword ptr [0x1c91d0] */
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

loc_00021ABB: ;
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00021AC0
 * Original: 0x00021AC0 - 0x00021B27 (103 bytes, 34 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021AC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021AC0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x1C);
    MEM32(esi + 4) = edx;
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = esp + 8;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x00021AE8u); RECOMP_ABI_CALL(0x000CE7E0u, sub_000CE7E0); /* call 0x000CE7E0 */

loc_00021AE8: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0xC) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = edx;
    ecx = MEM32(eax);
    MEM32(esi + 0x1C) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 0x20) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00021B30
 * Original: 0x00021B30 - 0x00021B69 (57 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021B30(void)
{

loc_00021B30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x1B4;
    PUSH32(esp, edi);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00021B42u); RECOMP_ABI_CALL(0x00032960u, sub_00032960); /* call 0x00032960 */

loc_00021B42: ;
    ecx = edi;
    MEM32(esi) = 0x1AFA30;
    PUSH32(esp, 0x00021B4Fu); RECOMP_ABI_CALL(0x000D23E0u, sub_000D23E0); /* call 0x000D23E0 */

loc_00021B4F: ;
    ecx = esi + 0x3C4;
    PUSH32(esp, 0x00021B5Au); RECOMP_ABI_CALL(0x00075E80u, sub_00075E80); /* call 0x00075E80 */

loc_00021B5A: ;
    POP32(esp, edi);
    MEM32(esi + 0x3C0) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00021B70
 * Original: 0x00021B70 - 0x00021B86 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021B70: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00021B90
 * Original: 0x00021B90 - 0x00021BD9 (73 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021B90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021B90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00021B9Eu); RECOMP_ABI_CALL(0x001025F0u, sub_001025F0); /* call 0x001025F0 */

loc_00021B9E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00021BA5u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00021BA5: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi) = eax;
    PUSH32(esp, 0x00021BAEu); RECOMP_ABI_CALL(0x000E1310u, sub_000E1310); /* call 0x000E1310 */

loc_00021BAE: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00021BB7u); RECOMP_ABI_CALL(0x001025F0u, sub_001025F0); /* call 0x001025F0 */

loc_00021BB7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00021BBEu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00021BBE: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x00021BC8u); RECOMP_ABI_CALL(0x000E1310u, sub_000E1310); /* call 0x000E1310 */

loc_00021BC8: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00021BE0
 * Original: 0x00021BE0 - 0x00021C1E (62 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021BE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    esi = ecx;
    PUSH32(esp, 0x00021BEAu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00021BEA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00021C0F; /* je: equal / zero */

loc_00021BF1: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00021C02u); RECOMP_ABI_CALL(0x00021B90u, sub_00021B90); /* call 0x00021B90 */

loc_00021C02: ;
    ecx = MEM32(esi + 0x14);
    MEM32(eax + 0xC) = ecx;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00021C0F: ;
    ecx = MEM32(esi + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00021C20
 * Original: 0x00021C20 - 0x00021C92 (114 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021C20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00021C48; /* jle: less or equal (signed <=) */

loc_00021C33: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + edi * 4 + -4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00021C44; /* je: equal / zero */

loc_00021C3E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00021C44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00021C42u); } /* indirect call */
    }

loc_00021C44: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00021C33; /* jg: greater (signed >) */

loc_00021C48: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00021C50u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00021C50: ;
    edi = MEM32(esi + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00021C78; /* jle: less or equal (signed <=) */

loc_00021C62: ;
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + edi * 4 + -4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00021C74; /* je: equal / zero */

loc_00021C6E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00021C74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00021C72u); } /* indirect call */
    }

loc_00021C74: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00021C62; /* jg: greater (signed >) */

loc_00021C78: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00021C8B; /* je: equal / zero */

loc_00021C7F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00021C85u); RECOMP_ABI_CALL(0x0012B21Cu, sub_0012B21C); /* call 0x0012B21C */

loc_00021C85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = ebx;

loc_00021C8B: ;
    POP32(esp, edi);
    MEM32(esi + 0x10) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00021CA0
 * Original: 0x00021CA0 - 0x00021CDF (63 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00021CA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 8);
    _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00021CCA; /* jle: less or equal (signed <=) */

loc_00021CB2: ;
    ebx = MEM32(esp + 0x14);

loc_00021CB6: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + esi * 4 + -4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00021CC2u); RECOMP_ABI_CALL(0x00013780u, sub_00013780); /* call 0x00013780 */

loc_00021CC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00021CD3; /* je: equal / zero */

loc_00021CC6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00021CB6; /* jg: greater (signed >) */

loc_00021CCA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00021CD3: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx + esi * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00021CE0
 * Original: 0x00021CE0 - 0x00021D38 (88 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00021CE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00021D05; /* jne: not equal / not zero */

loc_00021CE8: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x00021CF2u); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00021CF2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;

loc_00021D05: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00021D34; /* je: equal / zero */

loc_00021D12: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx + 0x10) = 0;
    edx = MEM32(esi);
    MEM32(edx + eax * 4) = ecx;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00021D31; /* jne: not equal / not zero */

loc_00021D2A: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00021D31: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00021D34: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00021D40
 * Original: 0x00021D40 - 0x00021E0C (204 bytes, 74 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00021D40: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x50);
    eax = esp + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebp = ecx;
    PUSH32(esp, 0x00021D57u); RECOMP_ABI_CALL(0x000E1310u, sub_000E1310); /* call 0x000E1310 */

loc_00021D57: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00021D61u); RECOMP_ABI_CALL(0x00105920u, sub_00105920); /* call 0x00105920 */

loc_00021D61: ;
    PUSH32(esp, 0x488);
    PUSH32(esp, 0x00021D6Bu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00021D6B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00021D7D; /* je: equal / zero */

loc_00021D72: ;
    ecx = eax;
    PUSH32(esp, 0x00021D79u); RECOMP_ABI_CALL(0x0002FB80u, sub_0002FB80); /* call 0x0002FB80 */

loc_00021D79: ;
    esi = eax;
    goto loc_00021D7F;

loc_00021D7D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00021D7F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    ebx = edi + 0x20;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00021D8Du); RECOMP_ABI_CALL(0x0002FC00u, sub_0002FC00); /* call 0x0002FC00 */

loc_00021D8D: ;
    eax = MEM32(0x1CA564);
    ecx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(0x1CA564) = eax;
    PUSH32(esp, 0x00021DA2u); RECOMP_ABI_CALL(0x00126000u, sub_00126000); /* call 0x00126000 */

loc_00021DA2: ;
    edx = MEM32(esi);
    eax = edi + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00021DB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00021DAEu); } /* indirect call */
    }

loc_00021DB1: ;
    ecx = MEM32(0x1D9FB8);
    _fa = (uint32_t)(MEM32(ecx + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x5C), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00021DDB; /* jne: not equal / not zero */

loc_00021DBD: ;
    PUSH32(esp, 0x1AFAA8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00021DC8u); RECOMP_ABI_CALL(0x00105910u, sub_00105910); /* call 0x00105910 */

loc_00021DC8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00021DDB; /* je: equal / zero */

loc_00021DCF: ;
    PUSH32(esp, 0xBF800000u);
    ecx = esi;
    PUSH32(esp, 0x00021DDBu); RECOMP_ABI_CALL(0x000241C0u, sub_000241C0); /* call 0x000241C0 */

loc_00021DDB: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00021DF3; /* jne: not equal / not zero */

loc_00021DE3: ;
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0x00021DEDu); RECOMP_ABI_CALL(0x0012B267u, sub_0012B267); /* call 0x0012B267 */

loc_00021DED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = eax;

loc_00021DF3: ;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + edx * 4) = esi;
    eax = MEM32(ebp + 0x10);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ebp + 0x10) = eax;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}
