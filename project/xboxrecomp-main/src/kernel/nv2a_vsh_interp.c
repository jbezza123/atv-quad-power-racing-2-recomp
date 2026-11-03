/**
 * NV2A vertex program interpreter. See nv2a_vsh_interp.h for why it exists.
 *
 * Encoding. An instruction is four dwords; dword 0 is unused. Fields, as
 * (dword, lowest bit, width):
 *
 *   ILU op        1 25 3      MAC op        1 21 4
 *   const index   1 13 8      input index   1  9 4   (shared by A, B, C)
 *   A negate      1  8 1      A swizzle     1  0 8   (x y z w, 2 bits each,
 *   A temp        2 28 4      A mux         2 26 2    x highest)
 *   B negate      2 25 1      B swizzle     2 17 8
 *   B temp        2 13 4      B mux         2 11 2
 *   C negate      2 10 1      C swizzle     2  2 8
 *   C temp        2 0 2 (high) : 3 30 2 (low)          C mux 3 28 2
 *   MAC temp mask 3 24 4      temp dest     3 20 4
 *   ILU temp mask 3 16 4      out mask      3 12 4
 *   out to o[]    3 11 1      out address   3  3 8   (0: to c[])
 *   out from ILU  3  2 1      a0.x relative 3  1 1   final 3 0 1
 *
 * Masks are x=8 y=4 z=2 w=1. A source mux of 1 reads a temp, 2 an input,
 * 3 a constant. Temp 12 is oPos. When an instruction carries both a MAC and
 * an ILU op, the ILU's temp write goes to R1 whatever the temp field says,
 * and both units read their sources before either writes.
 *
 * The layout is checked against real programs rather than taken on trust:
 * RECOMP_VSH_DUMP disassembles each program the title uploads, and an Xbox
 * D3D program is recognisable -- DP4s against the matrix constants, ending in
 * the runtime's screen-space epilogue (RCC of R12.w, then a MAD into oPos).
 */
#include "nv2a_vsh_interp.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "platform/host_time.h"   /* xbox_HostNowNs, for RECOMP_VSH_BENCH */

static uint32_t s_program[NV2A_VSH_SLOTS][4];
static float    s_const[NV2A_VSH_CONSTANTS][4];
static uint32_t s_load_slot, s_load_word, s_start_slot;
static uint32_t s_const_load, s_const_word;
static uint32_t s_cxt_write;
static uint32_t s_ops_hash;
static int      s_const_trace = -1;      /* RECOMP_VSH_DUMP: constant traffic */

static int vsh_dump_enabled(void)
{
    if (s_const_trace < 0)
        s_const_trace = getenv("RECOMP_VSH_DUMP") != NULL;
    return s_const_trace;
}

static __forceinline uint32_t field(const uint32_t *ins, int dw, int lo, int width)
{
    return (ins[dw] >> lo) & ((1u << width) - 1u);
}
typedef struct { float v[4]; } vec4;

/* ---- decoded program -----------------------------------------------------
 *
 * A title runs the same program for every vertex of every batch -- a heavy
 * race frame here is 160,000 vertices through one uploaded program. The field
 * extraction in read_src and the op/mask decode in the loop body then repeat
 * millions of times per frame, and measured on that frame they were about 70%
 * of the whole transform cost. Decoding once per upload moves all of it out of
 * the per-vertex path: the executor below reads small integers.
 *
 * Invalidated by any program write or a new start slot, which is the only way
 * the instruction stream can change. */
typedef struct {
    uint8_t mac, ilu;               /* opcodes; 0 = neither unit runs */
    uint8_t mac_mask, ilu_mask;     /* temp write masks, x=8 y=4 z=2 w=1 */
    uint8_t mdst, idst;             /* write target: 0..11 temp, 12 oPos, 0xFF none */
    uint8_t omask, oaddr, out_to_c, out_from_ilu, final;
    uint8_t need;                   /* sources this op reads: 1=A 2=B 4=C */
    uint8_t ident[3];               /* source swizzle is x,y,z,w as written */
    struct {
        uint8_t neg, mux, reg, ci, rel;
        uint8_t swz[4];             /* component order the swizzle selects */
    } src[3];
} VshOp;

static VshOp   s_ops[NV2A_VSH_SLOTS];
static int     s_ops_valid;
static uint32_t s_ops_count;
static uint32_t s_ops_inmask;       /* bit n = the program reads v[n] */

static void decode_program(void)
{
    uint32_t s, n = 0;

    s_ops_valid = 1;
    s_ops_count = 0;
    s_ops_inmask = 0;
    s_ops_hash = 2166136261u;
    for (s = s_start_slot; s < NV2A_VSH_SLOTS; s++) {
        const uint32_t *ins = s_program[s];
        VshOp *op = &s_ops[n];
        uint32_t tdst, mac;
        int i, b;

        for (i = 0; i < 4; i++) {
            for (b = 0; b < 4; b++) {
                s_ops_hash ^= (ins[i] >> (b * 8)) & 0xFFu;
                s_ops_hash *= 16777619u;
            }
        }

        op->mac = (uint8_t)field(ins, 1, 21, 4);
        op->ilu = (uint8_t)field(ins, 1, 25, 3);
        op->mac_mask = (uint8_t)field(ins, 3, 24, 4);
        op->ilu_mask = (uint8_t)field(ins, 3, 16, 4);
        tdst = field(ins, 3, 20, 4);
        op->omask = (uint8_t)field(ins, 3, 12, 4);
        op->oaddr = (uint8_t)field(ins, 3, 3, 8);
        op->out_to_c = (uint8_t)field(ins, 3, 11, 1);
        op->out_from_ilu = (uint8_t)field(ins, 3, 2, 1);
        op->final = (uint8_t)field(ins, 3, 0, 1);
        mac = op->mac;
        /* MAC writes its temp unless it is the ARL op (which only sets a0). */
        op->mdst = (mac && mac != 13 && op->mac_mask &&
                    (tdst < 12 || tdst == 12)) ? (uint8_t)tdst : 0xFF;
        if (mac && mac != 13 && op->mac_mask && tdst > 12)
            op->mdst = 0xFF;
        /* Paired with any MAC op, the ILU writes R1 whatever the temp field
         * says; alone, it uses the temp field. */
        op->idst = (op->ilu && op->ilu_mask)
                 ? (uint8_t)(mac ? 1u : tdst) : 0xFF;
        if (op->idst != 0xFF && op->idst > 12)
            op->idst = 0xFF;

        /* How many of the instruction's three sources its opcodes actually
         * read. A mov reads one; mad reads three; the ILU half reads C. On a
         * program of mostly mov/mul/mad this removes a third of the source
         * reads, and each read is a swizzle gather. */
        op->need = 0;
        switch (mac) {
        case 0:  break;                       /* no MAC half */
        case 1:  op->need |= 1; break;        /* mov  : A */
        case 13: op->need |= 1; break;        /* arl  : A */
        case 3:  op->need |= 1 | 4; break;    /* add  : A, C */
        case 4:  op->need |= 1 | 2 | 4; break;/* mad  : A, B, C */
        default: op->need |= 1 | 2; break;    /* the rest: A, B */
        }
        if (op->ilu)
            op->need |= 4;                    /* every ILU op reads C */

        for (i = 0; i < 3; i++) {
            uint32_t neg, swz, mux, reg;
            if (i == 0) {
                neg = field(ins, 1, 8, 1); swz = field(ins, 1, 0, 8);
                mux = field(ins, 2, 26, 2); reg = field(ins, 2, 28, 4);
            } else if (i == 1) {
                neg = field(ins, 2, 25, 1); swz = field(ins, 2, 17, 8);
                mux = field(ins, 2, 11, 2); reg = field(ins, 2, 13, 4);
            } else {
                neg = field(ins, 2, 10, 1); swz = field(ins, 2, 2, 8);
                mux = field(ins, 3, 28, 2);
                reg = (field(ins, 2, 0, 2) << 2) | field(ins, 3, 30, 2);
            }
            op->src[i].neg = (uint8_t)neg;
            op->src[i].mux = (uint8_t)mux;
            op->src[i].reg = (uint8_t)reg;
            op->src[i].rel = (uint8_t)field(ins, 3, 1, 1);
            op->src[i].ci = (uint8_t)field(ins, 1, 13, 8);
            op->src[i].swz[0] = (uint8_t)((swz >> 6) & 3);
            op->src[i].swz[1] = (uint8_t)((swz >> 4) & 3);
            op->src[i].swz[2] = (uint8_t)((swz >> 2) & 3);
            op->src[i].swz[3] = (uint8_t)(swz & 3);
            if (mux == 2)
                s_ops_inmask |= 1u << field(ins, 1, 9, 4);
            op->ident[i] = (uint8_t)(op->src[i].swz[0] == 0 &&
                                     op->src[i].swz[1] == 1 &&
                                     op->src[i].swz[2] == 2 &&
                                     op->src[i].swz[3] == 3);
        }
        n++;
        if (op->final)
            break;
    }
    if (n && !s_ops[n - 1].final)
        n = 0;                      /* no FINAL: no program to run */
    s_ops_count = n;
    if (!n)
        s_ops_hash = 0;
}

static __forceinline vec4 read_src_dec(const VshOp *op, int which,
                         const float in[NV2A_VSH_INPUTS][4],
                         const vec4 *temp, const vec4 *opos, int a0)
{
    const float *s;
    vec4 r;
    const uint8_t *swz;

    switch (op->src[which].mux) {
    case 1:
        s = (op->src[which].reg == 12) ? opos->v
          : (op->src[which].reg < 12 ? temp[op->src[which].reg].v : temp[0].v);
        break;
    case 2:
        s = in[op->src[which].reg & 15];
        break;
    default: {
        int ci = op->src[which].ci;
        if (op->src[which].rel)
            ci += a0;
        if (ci < 0 || ci >= NV2A_VSH_CONSTANTS)
            ci = 0;
        s = s_const[ci];
        break;
    }
    }
    swz = op->src[which].swz;
    if (op->ident[which]) {
        /* The overwhelmingly common swizzle: one 16-byte move, no gather. */
        r.v[0] = s[0]; r.v[1] = s[1]; r.v[2] = s[2]; r.v[3] = s[3];
    } else {
        r.v[0] = s[swz[0]];
        r.v[1] = s[swz[1]];
        r.v[2] = s[swz[2]];
        r.v[3] = s[swz[3]];
    }
    if (op->src[which].neg) {
        r.v[0] = -r.v[0]; r.v[1] = -r.v[1];
        r.v[2] = -r.v[2]; r.v[3] = -r.v[3];
    }
    return r;
}


/* ---- uploads ------------------------------------------------------------ */

void nv2a_vsh_set_load_slot(uint32_t slot)
{
    s_load_slot = slot;
    s_load_word = 0;
}

void nv2a_vsh_program_word(uint32_t word)
{
    if (s_load_slot < NV2A_VSH_SLOTS)
        s_program[s_load_slot][s_load_word] = word;
    s_ops_valid = 0;
    if (++s_load_word == 4) {
        s_load_word = 0;
        s_load_slot++;
    }
}

void nv2a_vsh_set_start_slot(uint32_t slot)
{
    if (slot != s_start_slot) {
        s_start_slot = slot;
        s_ops_valid = 0;
    }
}
void nv2a_vsh_set_cxt_write(uint32_t enable) { s_cxt_write = enable; }

void nv2a_vsh_set_constant_load(uint32_t index)
{
    s_const_load = index;
    s_const_word = 0;
    if (vsh_dump_enabled())
        fprintf(stderr, "  [VSH] constant load -> c[%u]\n", index);
}

void nv2a_vsh_constant_word(uint32_t word)
{
    if (s_const_load < NV2A_VSH_CONSTANTS)
        memcpy(&s_const[s_const_load][s_const_word], &word, 4);
    else if (vsh_dump_enabled()) {
        static int warned;
        if (warned++ < 8)
            fprintf(stderr, "  [VSH] constant write DROPPED (c[%u] >= %u)\n",
                    s_const_load, NV2A_VSH_CONSTANTS);
    }
    if (vsh_dump_enabled() && s_const_word == 3 && s_const_load >= 64) {
        static int shown;
        if (shown++ < 96)
            fprintf(stderr, "  [VSH] c[%u] = %.6g %.6g %.6g %.6g\n",
                    s_const_load, s_const[s_const_load][0],
                    s_const[s_const_load][1], s_const[s_const_load][2],
                    s_const[s_const_load][3]);
    }
    if (++s_const_word == 4) {
        s_const_word = 0;
        s_const_load++;
    }
}

void nv2a_vsh_set_constant(uint32_t index, const float v[4])
{
    if (index < NV2A_VSH_CONSTANTS)
        memcpy(s_const[index], v, sizeof s_const[index]);
}

void nv2a_vsh_set_instruction(uint32_t slot, const uint32_t words[4])
{
    if (slot < NV2A_VSH_SLOTS)
        memcpy(s_program[slot], words, sizeof s_program[slot]);
    s_ops_valid = 0;
}

/* ---- disassembly (RECOMP_VSH_DUMP) --------------------------------------- */

static const char *const k_mac[16] = {
    "nop", "mov", "mul", "add", "mad", "dp3", "dph", "dp4",
    "dst", "min", "max", "slt", "sge", "arl", "mac14", "mac15"
};
static const char *const k_ilu[8] = {
    "nop", "mov", "rcp", "rcc", "rsq", "exp", "log", "lit"
};

static void dis_src(char *b, size_t n, const uint32_t *ins, int which)
{
    static const char sw[] = "xyzw";
    uint32_t neg, swz, mux, reg;

    if (which == 0) {
        neg = field(ins, 1, 8, 1); swz = field(ins, 1, 0, 8);
        mux = field(ins, 2, 26, 2); reg = field(ins, 2, 28, 4);
    } else if (which == 1) {
        neg = field(ins, 2, 25, 1); swz = field(ins, 2, 17, 8);
        mux = field(ins, 2, 11, 2); reg = field(ins, 2, 13, 4);
    } else {
        neg = field(ins, 2, 10, 1); swz = field(ins, 2, 2, 8);
        mux = field(ins, 3, 28, 2);
        reg = (field(ins, 2, 0, 2) << 2) | field(ins, 3, 30, 2);
    }
    if (mux == 1)
        snprintf(b, n, "%sR%u", neg ? "-" : "", reg);
    else if (mux == 2)
        snprintf(b, n, "%sv%u", neg ? "-" : "", field(ins, 1, 9, 4));
    else
        snprintf(b, n, "%sc[%s%u]", neg ? "-" : "",
                 field(ins, 3, 1, 1) ? "a0.x+" : "", field(ins, 1, 13, 8));
    {
        size_t l = strlen(b);
        if (l + 6 < n)
            snprintf(b + l, n - l, ".%c%c%c%c", sw[(swz >> 6) & 3],
                     sw[(swz >> 4) & 3], sw[(swz >> 2) & 3], sw[swz & 3]);
    }
}

static void dump_program(uint32_t start)
{
    uint32_t s;
    fprintf(stderr, "  [VSH] program at slot %u:\n", start);
    for (s = start; s < NV2A_VSH_SLOTS; s++) {
        const uint32_t *ins = s_program[s];
        char a[40], bb[40], c[40];
        dis_src(a, sizeof a, ins, 0);
        dis_src(bb, sizeof bb, ins, 1);
        dis_src(c, sizeof c, ins, 2);
        fprintf(stderr, "  [VSH] %3u %-4s %-4s A=%s B=%s C=%s  R%u mac%X ilu%X"
                " out%s%u m%X%s%s\n", s,
                k_mac[field(ins, 1, 21, 4)], k_ilu[field(ins, 1, 25, 3)],
                a, bb, c, field(ins, 3, 20, 4), field(ins, 3, 24, 4),
                field(ins, 3, 16, 4), field(ins, 3, 11, 1) ? "o" : "c",
                field(ins, 3, 3, 8), field(ins, 3, 12, 4),
                field(ins, 3, 2, 1) ? " ilu" : " mac",
                field(ins, 3, 0, 1) ? " FINAL" : "");
        if (field(ins, 3, 0, 1))
            break;
    }
    fflush(stderr);
}

const float *nv2a_vsh_constant(uint32_t index)
{
    return s_const[index < NV2A_VSH_CONSTANTS ? index : 0];
}

void nv2a_vsh_constant_component(uint32_t index, uint32_t comp, uint32_t word)
{
    if (index < NV2A_VSH_CONSTANTS && comp < 4)
        memcpy(&s_const[index][comp], &word, 4);
}

/* ---- execution ----------------------------------------------------------- */



static __forceinline void write_masked(float *dst, const vec4 *src, uint32_t mask)
{
    if (mask & 8) dst[0] = src->v[0];
    if (mask & 4) dst[1] = src->v[1];
    if (mask & 2) dst[2] = src->v[2];
    if (mask & 1) dst[3] = src->v[3];
}

static __forceinline vec4 splat(float f)
{
    vec4 r;
    r.v[0] = r.v[1] = r.v[2] = r.v[3] = f;
    return r;
}

static __forceinline vec4 run_mac(uint32_t op, vec4 a, vec4 b, vec4 c, int *a0)
{
    vec4 r = a;
    int i;

    switch (op) {
    case 1: break;                                            /* mov */
    case 2: for (i = 0; i < 4; i++) r.v[i] = a.v[i] * b.v[i]; break;
    case 3: for (i = 0; i < 4; i++) r.v[i] = a.v[i] + c.v[i]; break;
    case 4: for (i = 0; i < 4; i++) r.v[i] = a.v[i] * b.v[i] + c.v[i]; break;
    case 5: r = splat(a.v[0]*b.v[0] + a.v[1]*b.v[1] + a.v[2]*b.v[2]); break;
    case 6: r = splat(a.v[0]*b.v[0] + a.v[1]*b.v[1] + a.v[2]*b.v[2]
                      + b.v[3]); break;                        /* dph */
    case 7: r = splat(a.v[0]*b.v[0] + a.v[1]*b.v[1] + a.v[2]*b.v[2]
                      + a.v[3]*b.v[3]); break;
    case 8: r.v[0] = 1.0f; r.v[1] = a.v[1] * b.v[1];            /* dst */
            r.v[2] = a.v[2]; r.v[3] = b.v[3]; break;
    case 9: for (i = 0; i < 4; i++) r.v[i] = a.v[i] < b.v[i] ? a.v[i] : b.v[i]; break;
    case 10: for (i = 0; i < 4; i++) r.v[i] = a.v[i] >= b.v[i] ? a.v[i] : b.v[i]; break;
    case 11: for (i = 0; i < 4; i++) r.v[i] = a.v[i] < b.v[i] ? 1.0f : 0.0f; break;
    case 12: for (i = 0; i < 4; i++) r.v[i] = a.v[i] >= b.v[i] ? 1.0f : 0.0f; break;
    case 13: *a0 = (int)floorf(a.v[0] + 0.001f); break;         /* arl */
    default: break;
    }
    return r;
}

static __forceinline vec4 run_ilu(uint32_t op, vec4 c)
{
    float x = c.v[0];
    vec4 r = c;

    switch (op) {
    case 1: break;                                            /* mov */
    case 2: r = splat(x == 0.0f ? INFINITY : 1.0f / x); break;  /* rcp */
    case 3: {                                                  /* rcc */
        float f = 1.0f / x;
        if (fabsf(f) < 5.42101e-20f) f = f < 0 ? -5.42101e-20f : 5.42101e-20f;
        if (fabsf(f) > 1.884467e19f) f = f < 0 ? -1.884467e19f : 1.884467e19f;
        r = splat(f);
        break;
    }
    case 4: r = splat(1.0f / sqrtf(fabsf(x))); break;           /* rsq */
    case 5: {                                                  /* exp */
        float fl = floorf(x);
        r.v[0] = exp2f(fl); r.v[1] = x - fl; r.v[2] = exp2f(x); r.v[3] = 1.0f;
        break;
    }
    case 6: {                                                  /* log */
        float ax = fabsf(x);
        if (ax == 0.0f) {
            r.v[0] = r.v[2] = -INFINITY; r.v[1] = 1.0f;
        } else {
            float e = floorf(log2f(ax));
            r.v[0] = e; r.v[1] = ax / exp2f(e); r.v[2] = log2f(ax);
        }
        r.v[3] = 1.0f;
        break;
    }
    case 7: {                                                  /* lit */
        float nl = c.v[0] > 0.0f ? c.v[0] : 0.0f;
        float nh = c.v[1] > 0.0f ? c.v[1] : 0.0f;
        float p = c.v[3] < -127.9961f ? -127.9961f
                : (c.v[3] > 127.9961f ? 127.9961f : c.v[3]);
        r.v[0] = 1.0f; r.v[1] = nl;
        r.v[2] = c.v[0] > 0.0f ? powf(nh, p) : 0.0f; r.v[3] = 1.0f;
        break;
    }
    default: break;
    }
    return r;
}

/* The executor proper: the decoded program, one vertex. */
static int vsh_execute(const float in[NV2A_VSH_INPUTS][4], Nv2aVshOutput *out)
{
    static int dump = -1;
    /* RECOMP_VSH_BENCH=empty runs the same prologue and epilogue with the
     * instruction loop skipped, which separates a vertex's fixed cost from its
     * per-instruction cost. */
    static int skip_ops = -1;
    static uint32_t dumped[16];
    static int ndumped;
    vec4 temp[12], opos;
    float outregs[13][4];
    int a0 = 0;
    uint32_t s;

    if (dump < 0)
        dump = getenv("RECOMP_VSH_DUMP") != NULL;
    if (skip_ops < 0)
        skip_ops = getenv("RECOMP_VSH_BENCH_EMPTY") != NULL;
    if (dump && ndumped < 16) {
        /* By content: titles reload different programs into the same slot. */
        uint32_t h = 2166136261u, t;
        int i, seen = 0;
        for (t = s_start_slot; t < NV2A_VSH_SLOTS; t++) {
            for (i = 0; i < 4; i++)
                h = (h ^ s_program[t][i]) * 16777619u;
            if (field(s_program[t], 3, 0, 1))
                break;
        }
        for (i = 0; i < ndumped; i++)
            if (dumped[i] == h) seen = 1;
        if (!seen) {
            dumped[ndumped++] = h;
            dump_program(s_start_slot);
        }
    }

    if (!s_ops_valid)
        decode_program();
    if (!s_ops_count)
        return 0;                    /* no FINAL: nothing to run */

    memset(temp, 0, sizeof temp);
    memset(&opos, 0, sizeof opos);
    memset(outregs, 0, sizeof outregs);
    outregs[3][3] = outregs[4][3] = 1.0f;      /* colours default opaque */
    /* Unwritten texture coordinates are (0,0,0,1), as xemu initialises them:
     * a projective stage divides by q, and q = 0 would put every texel of an
     * unwritten stage at infinity. */
    outregs[9][3] = outregs[10][3] = outregs[11][3] = outregs[12][3] = 1.0f;

    for (s = 0; s < s_ops_count; s++) {
        if (skip_ops)
            break;
        const VshOp *op = &s_ops[s];
        vec4 a = {{0, 0, 0, 0}}, b = {{0, 0, 0, 0}}, c = {{0, 0, 0, 0}};
        vec4 mres = {{0, 0, 0, 0}}, ires = {{0, 0, 0, 0}};
        uint32_t mac = op->mac, ilu = op->ilu;

        if (op->need & 1)
            a = read_src_dec(op, 0, in, temp, &opos, a0);
        if (op->need & 2)
            b = read_src_dec(op, 1, in, temp, &opos, a0);
        if (op->need & 4)
            c = read_src_dec(op, 2, in, temp, &opos, a0);

        if (mac)
            mres = run_mac(mac, a, b, c, &a0);
        if (ilu)
            ires = run_ilu(ilu, c);

        if (op->mdst != 0xFF) {
            float *d = op->mdst == 12 ? opos.v : temp[op->mdst].v;
            write_masked(d, &mres, op->mac_mask);
        }
        if (op->idst != 0xFF) {
            /* Paired with any MAC op, the ILU can only write R1 -- even when
             * the MAC half writes no temp at all. The D3D epilogue is exactly
             * that: `mul o[0].xyz` beside `rcc R1.x`, then `mad` with R1.x.
             * Sending the rcc to the temp field (R7 there) left R1.x at 0 and
             * put every vertex of every 3D batch at c[59]. */
            float *d = op->idst == 12 ? opos.v : temp[op->idst].v;
            write_masked(d, &ires, op->ilu_mask);
        }
        if (op->omask) {
            const vec4 *src = op->out_from_ilu ? &ires : &mres;
            if (!op->out_to_c) {                          /* to c[] */
                if (s_cxt_write && op->oaddr < NV2A_VSH_CONSTANTS)
                    write_masked(s_const[op->oaddr], src, op->omask);
            } else if (op->oaddr == 0) {
                write_masked(opos.v, src, op->omask);
            } else if (op->oaddr < 13) {
                write_masked(outregs[op->oaddr], src, op->omask);
            }
        }
        if (op->final) {
            int k;
            memcpy(out->pos, opos.v, sizeof out->pos);
            /* The NV2A clamps the colour outputs to 0..1 before they are
             * interpolated, as the fixed-function path already does here.
             * Lighting programs push them well above 1 (SSX 3's riders), and
             * unclamped every lit model came out washed out. */
            for (k = 0; k < 4; k++) {
                float c0 = outregs[3][k], c1 = outregs[4][k];
                out->d0[k] = c0 > 1.0f ? 1.0f : (c0 >= 0.0f ? c0 : 0.0f);
                out->d1[k] = c1 > 1.0f ? 1.0f : (c1 >= 0.0f ? c1 : 0.0f);
            }
            memcpy(out->fog, outregs[5], sizeof out->fog);
            memcpy(out->tex[0], outregs[9], sizeof out->tex[0]);
            memcpy(out->tex[1], outregs[10], sizeof out->tex[1]);
            memcpy(out->tex[2], outregs[11], sizeof out->tex[2]);
            memcpy(out->tex[3], outregs[12], sizeof out->tex[3]);
            return 1;
        }
    }
    return 0;
}

int nv2a_vsh_run(const float in[NV2A_VSH_INPUTS][4], Nv2aVshOutput *out)
{
    /* RECOMP_VSH_BENCH=<n>: measure the loaded program, once, in the first
     * batch that uses it. Optimising this interpreter against the race scene
     * meant driving the game to the race for every change; a program is a
     * program, so timing one during the first menu frame measures the same
     * code.
     *
     * Short runs here swing by 50%: the emulator's audio, timer and raster
     * threads share a two-core laptop with this one. So each size runs five
     * times and the report keeps the fastest -- the run least disturbed by
     * preemption -- and the program is also replayed at 2x and 4x length so
     * the per-instruction slope can be read off separately from the per-vertex
     * fixed cost. */
    static int bench_left = -1;
    if (bench_left > 0) {
        uint32_t base, i, k, r;
        Nv2aVshOutput tmp;
        if (!s_ops_valid)
            decode_program();
        base = s_ops_count;
        bench_left = 0;
        for (k = 1; k <= 4; k *= 2) {
            double best = 1e30, prev = 0.0;
            for (i = 0; i < base * k && i < NV2A_VSH_SLOTS; i++) {
                s_ops[i] = s_ops[i % base];
                s_ops[i].final = 0;
            }
            s_ops[base * k - 1].final = 1;
            s_ops_count = base * k;
            for (r = 0; r < 5; r++) {
                uint64_t t0, t1;
                int j;
                t0 = xbox_HostNowNs();
                for (j = 0; j < 20000; j++)
                    vsh_execute(in, &tmp);
                t1 = xbox_HostNowNs();
                if ((double)(t1 - t0) / 20000.0 < best)
                    best = (double)(t1 - t0) / 20000.0;
            }
            fprintf(stderr,
                "[VSH-BENCH] ops=%u ns_per_vertex=%.1f marginal_ns_per_op=%.2f\n",
                s_ops_count, best,
                k > 1 ? (best - prev) / (double)(base * k - base * (k / 2)) : 0.0);
            fflush(stderr);
            prev = best;
        }
        /* Put the real program back. */
        s_ops_valid = 0;                 /* re-decode the real program */
        decode_program();
    }
    if (bench_left == -1) {
        const char *e = getenv("RECOMP_VSH_BENCH");
        bench_left = e && *e ? atoi(e) : 0;
    }
    if (!s_ops_valid)
        decode_program();
    if (!s_ops_count)
        return 0;                    /* no FINAL: nothing to run */
    return vsh_execute(in, out);
}

uint32_t nv2a_vsh_input_mask(void)
{
    if (!s_ops_valid)
        decode_program();
    return s_ops_inmask;
}

uint32_t nv2a_vsh_ops(void)
{
    if (!s_ops_valid)
        decode_program();
    return s_ops_count;
}

uint32_t nv2a_vsh_start_slot(void)
{
    return s_start_slot;
}

uint32_t nv2a_vsh_program_hash(void)
{
    if (!s_ops_valid)
        decode_program();
    return s_ops_hash;
}

uint32_t nv2a_vsh_program_constant_refs(uint32_t *indices, uint8_t *relative,
                                        uint32_t capacity)
{
    uint32_t n, source, count = 0;
    if (!s_ops_valid)
        decode_program();
    for (n = 0; n < s_ops_count; ++n) {
        const VshOp *op = &s_ops[n];
        for (source = 0; source < 3; ++source) {
            uint32_t j;
            uint8_t index, rel;
            int duplicate = 0;
            /* Match read_src_dec(): 1 selects a temp and 2 an input; all other
             * selectors take its default path through the constant file. */
            if (!(op->need & (1u << source)) ||
                op->src[source].mux == 1 || op->src[source].mux == 2)
                continue;
            index = op->src[source].ci;
            rel = op->src[source].rel;
            for (j = 0; j < count && j < capacity; ++j) {
                if (indices[j] == index && relative[j] == rel) {
                    duplicate = 1;
                    break;
                }
            }
            if (duplicate)
                continue;
            if (count < capacity) {
                indices[count] = index;
                relative[count] = rel;
            }
            ++count;
        }
    }
    return count;
}
