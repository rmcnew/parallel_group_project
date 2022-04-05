/*
 * Copyright (c) 2003, 2007-14 Matteo Frigo
 * Copyright (c) 2003, 2007-14 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Tue Sep 14 10:47:22 EDT 2021 */

#include "rdft/codelet-rdft.h"

#if defined(ARCH_PREFERS_FMA) || defined(ISA_EXTENSION_PREFERS_FMA)

/* Generated by: ../../../genfft/gen_hc2cdft_c.native -fma -simd -compact -variables 4 -pipeline-latency 8 -trivial-stores -variables 32 -no-generate-bytw -n 4 -dit -name hc2cfdftv_4 -include rdft/simd/hc2cfv.h */

/*
 * This function contains 15 FP additions, 16 FP multiplications,
 * (or, 9 additions, 10 multiplications, 6 fused multiply/add),
 * 21 stack variables, 1 constants, and 8 memory accesses
 */
#include "rdft/simd/hc2cfv.h"

static void hc2cfdftv_4(R *Rp, R *Ip, R *Rm, R *Im, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DVK(KP500000000, +0.500000000000000000000000000000000000000000000);
     {
	  INT m;
	  for (m = mb, W = W + ((mb - 1) * ((TWVL / VL) * 6)); m < me; m = m + VL, Rp = Rp + (VL * ms), Ip = Ip + (VL * ms), Rm = Rm - (VL * ms), Im = Im - (VL * ms), W = W + (TWVL * 6), MAKE_VOLATILE_STRIDE(16, rs)) {
	       V T8, Th, Td, Tg, T3, Tc, T7, Ta, T1, T2, Tb, T5, T6, T4, T9;
	       V Te, Tj, Tf, Ti;
	       T1 = LD(&(Rp[0]), ms, &(Rp[0]));
	       T2 = LD(&(Rm[0]), -ms, &(Rm[0]));
	       T3 = VFMACONJ(T2, T1);
	       Tb = LDW(&(W[0]));
	       Tc = VZMULIJ(Tb, VFNMSCONJ(T2, T1));
	       T5 = LD(&(Rp[WS(rs, 1)]), ms, &(Rp[WS(rs, 1)]));
	       T6 = LD(&(Rm[WS(rs, 1)]), -ms, &(Rm[WS(rs, 1)]));
	       T4 = LDW(&(W[TWVL * 2]));
	       T7 = VZMULJ(T4, VFMACONJ(T6, T5));
	       T9 = LDW(&(W[TWVL * 4]));
	       Ta = VZMULIJ(T9, VFNMSCONJ(T6, T5));
	       T8 = VSUB(T3, T7);
	       Th = VADD(Tc, Ta);
	       Td = VSUB(Ta, Tc);
	       Tg = VADD(T3, T7);
	       Te = VMUL(LDK(KP500000000), VFNMSI(Td, T8));
	       ST(&(Rp[WS(rs, 1)]), Te, ms, &(Rp[WS(rs, 1)]));
	       Tj = VCONJ(VMUL(LDK(KP500000000), VADD(Th, Tg)));
	       ST(&(Rm[WS(rs, 1)]), Tj, -ms, &(Rm[WS(rs, 1)]));
	       Tf = VCONJ(VMUL(LDK(KP500000000), VFMAI(Td, T8)));
	       ST(&(Rm[0]), Tf, -ms, &(Rm[0]));
	       Ti = VMUL(LDK(KP500000000), VSUB(Tg, Th));
	       ST(&(Rp[0]), Ti, ms, &(Rp[0]));
	  }
     }
     VLEAVE();
}

static const tw_instr twinstr[] = {
     VTW(1, 1),
     VTW(1, 2),
     VTW(1, 3),
     { TW_NEXT, VL, 0 }
};

static const hc2c_desc desc = { 4, XSIMD_STRING("hc2cfdftv_4"), twinstr, &GENUS, { 9, 10, 6, 0 } };

void XSIMD(codelet_hc2cfdftv_4) (planner *p) {
     X(khc2c_register) (p, hc2cfdftv_4, &desc, HC2C_VIA_DFT);
}
#else

/* Generated by: ../../../genfft/gen_hc2cdft_c.native -simd -compact -variables 4 -pipeline-latency 8 -trivial-stores -variables 32 -no-generate-bytw -n 4 -dit -name hc2cfdftv_4 -include rdft/simd/hc2cfv.h */

/*
 * This function contains 15 FP additions, 10 FP multiplications,
 * (or, 15 additions, 10 multiplications, 0 fused multiply/add),
 * 23 stack variables, 1 constants, and 8 memory accesses
 */
#include "rdft/simd/hc2cfv.h"

static void hc2cfdftv_4(R *Rp, R *Ip, R *Rm, R *Im, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DVK(KP500000000, +0.500000000000000000000000000000000000000000000);
     {
	  INT m;
	  for (m = mb, W = W + ((mb - 1) * ((TWVL / VL) * 6)); m < me; m = m + VL, Rp = Rp + (VL * ms), Ip = Ip + (VL * ms), Rm = Rm - (VL * ms), Im = Im - (VL * ms), W = W + (TWVL * 6), MAKE_VOLATILE_STRIDE(16, rs)) {
	       V T4, Tc, T9, Te, T1, T3, T2, Tb, T6, T8, T7, T5, Td, Tg, Th;
	       V Ta, Tf, Tk, Tl, Ti, Tj;
	       T1 = LD(&(Rp[0]), ms, &(Rp[0]));
	       T2 = LD(&(Rm[0]), -ms, &(Rm[0]));
	       T3 = VCONJ(T2);
	       T4 = VADD(T1, T3);
	       Tb = LDW(&(W[0]));
	       Tc = VZMULIJ(Tb, VSUB(T3, T1));
	       T6 = LD(&(Rp[WS(rs, 1)]), ms, &(Rp[WS(rs, 1)]));
	       T7 = LD(&(Rm[WS(rs, 1)]), -ms, &(Rm[WS(rs, 1)]));
	       T8 = VCONJ(T7);
	       T5 = LDW(&(W[TWVL * 2]));
	       T9 = VZMULJ(T5, VADD(T6, T8));
	       Td = LDW(&(W[TWVL * 4]));
	       Te = VZMULIJ(Td, VSUB(T8, T6));
	       Ta = VSUB(T4, T9);
	       Tf = VBYI(VSUB(Tc, Te));
	       Tg = VMUL(LDK(KP500000000), VSUB(Ta, Tf));
	       Th = VCONJ(VMUL(LDK(KP500000000), VADD(Ta, Tf)));
	       ST(&(Rp[WS(rs, 1)]), Tg, ms, &(Rp[WS(rs, 1)]));
	       ST(&(Rm[0]), Th, -ms, &(Rm[0]));
	       Ti = VADD(T4, T9);
	       Tj = VADD(Tc, Te);
	       Tk = VCONJ(VMUL(LDK(KP500000000), VSUB(Ti, Tj)));
	       Tl = VMUL(LDK(KP500000000), VADD(Ti, Tj));
	       ST(&(Rm[WS(rs, 1)]), Tk, -ms, &(Rm[WS(rs, 1)]));
	       ST(&(Rp[0]), Tl, ms, &(Rp[0]));
	  }
     }
     VLEAVE();
}

static const tw_instr twinstr[] = {
     VTW(1, 1),
     VTW(1, 2),
     VTW(1, 3),
     { TW_NEXT, VL, 0 }
};

static const hc2c_desc desc = { 4, XSIMD_STRING("hc2cfdftv_4"), twinstr, &GENUS, { 15, 10, 0, 0 } };

void XSIMD(codelet_hc2cfdftv_4) (planner *p) {
     X(khc2c_register) (p, hc2cfdftv_4, &desc, HC2C_VIA_DFT);
}
#endif
