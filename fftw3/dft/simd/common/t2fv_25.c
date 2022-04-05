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
/* Generated on Tue Sep 14 10:45:45 EDT 2021 */

#include "dft/codelet-dft.h"

#if defined(ARCH_PREFERS_FMA) || defined(ISA_EXTENSION_PREFERS_FMA)

/* Generated by: ../../../genfft/gen_twiddle_c.native -fma -simd -compact -variables 4 -pipeline-latency 8 -n 25 -name t2fv_25 -include dft/simd/t2f.h */

/*
 * This function contains 248 FP additions, 241 FP multiplications,
 * (or, 67 additions, 60 multiplications, 181 fused multiply/add),
 * 147 stack variables, 67 constants, and 50 memory accesses
 */
#include "dft/simd/t2f.h"

static void t2fv_25(R *ri, R *ii, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DVK(KP617882369, +0.617882369114440893914546919006756321695042882);
     DVK(KP792626838, +0.792626838241819413632131824093538848057784557);
     DVK(KP876091699, +0.876091699473550838204498029706869638173524346);
     DVK(KP803003575, +0.803003575438660414833440593570376004635464850);
     DVK(KP999544308, +0.999544308746292983948881682379742149196758193);
     DVK(KP968583161, +0.968583161128631119490168375464735813836012403);
     DVK(KP242145790, +0.242145790282157779872542093866183953459003101);
     DVK(KP916574801, +0.916574801383451584742370439148878693530976769);
     DVK(KP269969613, +0.269969613759572083574752974412347470060951301);
     DVK(KP904730450, +0.904730450839922351881287709692877908104763647);
     DVK(KP809385824, +0.809385824416008241660603814668679683846476688);
     DVK(KP894834959, +0.894834959464455102997960030820114611498661386);
     DVK(KP447417479, +0.447417479732227551498980015410057305749330693);
     DVK(KP867381224, +0.867381224396525206773171885031575671309956167);
     DVK(KP958953096, +0.958953096729998668045963838399037225970891871);
     DVK(KP683113946, +0.683113946453479238701949862233725244439656928);
     DVK(KP559154169, +0.559154169276087864842202529084232643714075927);
     DVK(KP831864738, +0.831864738706457140726048799369896829771167132);
     DVK(KP829049696, +0.829049696159252993975487806364305442437946767);
     DVK(KP912575812, +0.912575812670962425556968549836277086778922727);
     DVK(KP876306680, +0.876306680043863587308115903922062583399064238);
     DVK(KP262346850, +0.262346850930607871785420028382979691334784273);
     DVK(KP860541664, +0.860541664367944677098261680920518816412804187);
     DVK(KP681693190, +0.681693190061530575150324149145440022633095390);
     DVK(KP560319534, +0.560319534973832390111614715371676131169633784);
     DVK(KP897376177, +0.897376177523557693138608077137219684419427330);
     DVK(KP855719849, +0.855719849902058969314654733608091555096772472);
     DVK(KP949179823, +0.949179823508441261575555465843363271711583843);
     DVK(KP952936919, +0.952936919628306576880750665357914584765951388);
     DVK(KP998026728, +0.998026728428271561952336806863450553336905220);
     DVK(KP992114701, +0.992114701314477831049793042785778521453036709);
     DVK(KP997675361, +0.997675361079556513670859573984492383596555031);
     DVK(KP237294955, +0.237294955877110315393888866460840817927895961);
     DVK(KP904508497, +0.904508497187473712051146708591409529430077295);
     DVK(KP906616052, +0.906616052148196230441134447086066874408359177);
     DVK(KP923225144, +0.923225144846402650453449441572664695995209956);
     DVK(KP921078979, +0.921078979742360627699756128143719920817673854);
     DVK(KP578046249, +0.578046249379945007321754579646815604023525655);
     DVK(KP763932022, +0.763932022500210303590826331268723764559381640);
     DVK(KP956723877, +0.956723877038460305821989399535483155872969262);
     DVK(KP690983005, +0.690983005625052575897706582817180941139845410);
     DVK(KP945422727, +0.945422727388575946270360266328811958657216298);
     DVK(KP522616830, +0.522616830205754336872861364785224694908468440);
     DVK(KP772036680, +0.772036680810363904029489473607579825330539880);
     DVK(KP669429328, +0.669429328479476605641803240971985825917022098);
     DVK(KP570584518, +0.570584518783621657366766175430996792655723863);
     DVK(KP982009705, +0.982009705009746369461829878184175962711969869);
     DVK(KP845997307, +0.845997307939530944175097360758058292389769300);
     DVK(KP734762448, +0.734762448793050413546343770063151342619912334);
     DVK(KP951056516, +0.951056516295153572116439333379382143405698634);
     DVK(KP447533225, +0.447533225982656890041886979663652563063114397);
     DVK(KP059835404, +0.059835404262124915169548397419498386427871950);
     DVK(KP494780565, +0.494780565770515410344588413655324772219443730);
     DVK(KP603558818, +0.603558818296015001454675132653458027918768137);
     DVK(KP987388751, +0.987388751065621252324603216482382109400433949);
     DVK(KP522847744, +0.522847744331509716623755382187077770911012542);
     DVK(KP667278218, +0.667278218140296670899089292254759909713898805);
     DVK(KP244189809, +0.244189809627953270309879511234821255780225091);
     DVK(KP132830569, +0.132830569247582714407653942074819768844536507);
     DVK(KP869845200, +0.869845200362138853122720822420327157933056305);
     DVK(KP786782374, +0.786782374965295178365099601674911834788448471);
     DVK(KP066152395, +0.066152395967733048213034281011006031460903353);
     DVK(KP120146378, +0.120146378570687701782758537356596213647956445);
     DVK(KP893101515, +0.893101515366181661711202267938416198338079437);
     DVK(KP559016994, +0.559016994374947424102293417182819058860154590);
     DVK(KP618033988, +0.618033988749894848204586834365638117720309180);
     DVK(KP250000000, +0.250000000000000000000000000000000000000000000);
     {
	  INT m;
	  R *x;
	  x = ri;
	  for (m = mb, W = W + (mb * ((TWVL / VL) * 48)); m < me; m = m + VL, x = x + (VL * ms), W = W + (TWVL * 48), MAKE_VOLATILE_STRIDE(25, rs)) {
	       V T1, Te, Tc, Td, T1O, T2X, T3Q, T1x, T2K, T1u, T2L, T1y, T27, T3b, T2R;
	       V T2M, T2f, T3M, Ty, T2E, Tv, T2D, Tz, T2a, T3e, T2U, T2F, T2i, T3N, TK;
	       V T2B, TS, T2A, TT, T2b, T3f, T2T, T2C, T2j, T3P, T1d, T2H, T1a, T2I, T1e;
	       V T28, T3c, T2Q, T2J, T2g;
	       {
		    V T8, Ta, Tb, T3, T5, T6, T1M, T1N;
		    T1 = LD(&(x[0]), ms, &(x[0]));
		    {
			 V T7, T9, T2, T4;
			 T7 = LD(&(x[WS(rs, 10)]), ms, &(x[0]));
			 T8 = BYTWJ(&(W[TWVL * 18]), T7);
			 T9 = LD(&(x[WS(rs, 15)]), ms, &(x[WS(rs, 1)]));
			 Ta = BYTWJ(&(W[TWVL * 28]), T9);
			 Tb = VADD(T8, Ta);
			 T2 = LD(&(x[WS(rs, 5)]), ms, &(x[WS(rs, 1)]));
			 T3 = BYTWJ(&(W[TWVL * 8]), T2);
			 T4 = LD(&(x[WS(rs, 20)]), ms, &(x[0]));
			 T5 = BYTWJ(&(W[TWVL * 38]), T4);
			 T6 = VADD(T3, T5);
		    }
		    Te = VSUB(T6, Tb);
		    Tc = VADD(T6, Tb);
		    Td = VFNMS(LDK(KP250000000), Tc, T1);
		    T1M = VSUB(T3, T5);
		    T1N = VSUB(T8, Ta);
		    T1O = VFMA(LDK(KP618033988), T1N, T1M);
		    T2X = VFNMS(LDK(KP618033988), T1M, T1N);
	       }
	       {
		    V T1g, T1v, T1w, T1l, T1q, T1r, T1f, T1s, T1t;
		    T1f = LD(&(x[WS(rs, 3)]), ms, &(x[WS(rs, 1)]));
		    T1g = BYTWJ(&(W[TWVL * 4]), T1f);
		    {
			 V T1i, T1p, T1k, T1n;
			 {
			      V T1h, T1o, T1j, T1m;
			      T1h = LD(&(x[WS(rs, 8)]), ms, &(x[0]));
			      T1i = BYTWJ(&(W[TWVL * 14]), T1h);
			      T1o = LD(&(x[WS(rs, 18)]), ms, &(x[0]));
			      T1p = BYTWJ(&(W[TWVL * 34]), T1o);
			      T1j = LD(&(x[WS(rs, 23)]), ms, &(x[WS(rs, 1)]));
			      T1k = BYTWJ(&(W[TWVL * 44]), T1j);
			      T1m = LD(&(x[WS(rs, 13)]), ms, &(x[WS(rs, 1)]));
			      T1n = BYTWJ(&(W[TWVL * 24]), T1m);
			 }
			 T1v = VSUB(T1i, T1k);
			 T1w = VSUB(T1n, T1p);
			 T1l = VADD(T1i, T1k);
			 T1q = VADD(T1n, T1p);
			 T1r = VADD(T1l, T1q);
		    }
		    T3Q = VADD(T1g, T1r);
		    T1x = VFMA(LDK(KP618033988), T1w, T1v);
		    T2K = VFNMS(LDK(KP618033988), T1v, T1w);
		    T1s = VFNMS(LDK(KP250000000), T1r, T1g);
		    T1t = VSUB(T1q, T1l);
		    T1u = VFNMS(LDK(KP559016994), T1t, T1s);
		    T2L = VFMA(LDK(KP559016994), T1t, T1s);
		    T1y = VFNMS(LDK(KP893101515), T1x, T1u);
		    T27 = VFNMS(LDK(KP120146378), T1x, T1u);
		    T3b = VFMA(LDK(KP066152395), T2L, T2K);
		    T2R = VFNMS(LDK(KP786782374), T2K, T2L);
		    T2M = VFMA(LDK(KP869845200), T2L, T2K);
		    T2f = VFMA(LDK(KP132830569), T1u, T1x);
	       }
	       {
		    V Th, Tw, Tx, Tm, Tr, Ts, Tg, Tt, Tu;
		    Tg = LD(&(x[WS(rs, 1)]), ms, &(x[WS(rs, 1)]));
		    Th = BYTWJ(&(W[0]), Tg);
		    {
			 V Tj, Tq, Tl, To;
			 {
			      V Ti, Tp, Tk, Tn;
			      Ti = LD(&(x[WS(rs, 6)]), ms, &(x[0]));
			      Tj = BYTWJ(&(W[TWVL * 10]), Ti);
			      Tp = LD(&(x[WS(rs, 16)]), ms, &(x[0]));
			      Tq = BYTWJ(&(W[TWVL * 30]), Tp);
			      Tk = LD(&(x[WS(rs, 21)]), ms, &(x[WS(rs, 1)]));
			      Tl = BYTWJ(&(W[TWVL * 40]), Tk);
			      Tn = LD(&(x[WS(rs, 11)]), ms, &(x[WS(rs, 1)]));
			      To = BYTWJ(&(W[TWVL * 20]), Tn);
			 }
			 Tw = VSUB(Tj, Tl);
			 Tx = VSUB(Tq, To);
			 Tm = VADD(Tj, Tl);
			 Tr = VADD(To, Tq);
			 Ts = VADD(Tm, Tr);
		    }
		    T3M = VADD(Th, Ts);
		    Ty = VFNMS(LDK(KP618033988), Tx, Tw);
		    T2E = VFMA(LDK(KP618033988), Tw, Tx);
		    Tt = VFNMS(LDK(KP250000000), Ts, Th);
		    Tu = VSUB(Tm, Tr);
		    Tv = VFMA(LDK(KP559016994), Tu, Tt);
		    T2D = VFNMS(LDK(KP559016994), Tu, Tt);
		    Tz = VFNMS(LDK(KP244189809), Ty, Tv);
		    T2a = VFMA(LDK(KP667278218), Tv, Ty);
		    T3e = VFNMS(LDK(KP522847744), T2E, T2D);
		    T2U = VFNMS(LDK(KP987388751), T2D, T2E);
		    T2F = VFMA(LDK(KP893101515), T2E, T2D);
		    T2i = VFNMS(LDK(KP603558818), Ty, Tv);
	       }
	       {
		    V TM, TE, TJ, TN, TO, TP, TL, TQ, TR;
		    TL = LD(&(x[WS(rs, 4)]), ms, &(x[0]));
		    TM = BYTWJ(&(W[TWVL * 6]), TL);
		    {
			 V TB, TI, TD, TG;
			 {
			      V TA, TH, TC, TF;
			      TA = LD(&(x[WS(rs, 24)]), ms, &(x[0]));
			      TB = BYTWJ(&(W[TWVL * 46]), TA);
			      TH = LD(&(x[WS(rs, 14)]), ms, &(x[0]));
			      TI = BYTWJ(&(W[TWVL * 26]), TH);
			      TC = LD(&(x[WS(rs, 9)]), ms, &(x[WS(rs, 1)]));
			      TD = BYTWJ(&(W[TWVL * 16]), TC);
			      TF = LD(&(x[WS(rs, 19)]), ms, &(x[WS(rs, 1)]));
			      TG = BYTWJ(&(W[TWVL * 36]), TF);
			 }
			 TE = VSUB(TB, TD);
			 TJ = VSUB(TG, TI);
			 TN = VADD(TD, TB);
			 TO = VADD(TI, TG);
			 TP = VADD(TN, TO);
		    }
		    T3N = VADD(TM, TP);
		    TK = VFMA(LDK(KP618033988), TJ, TE);
		    T2B = VFNMS(LDK(KP618033988), TE, TJ);
		    TQ = VFMS(LDK(KP250000000), TP, TM);
		    TR = VSUB(TN, TO);
		    TS = VFNMS(LDK(KP559016994), TR, TQ);
		    T2A = VFMA(LDK(KP559016994), TR, TQ);
		    TT = VFNMS(LDK(KP667278218), TS, TK);
		    T2b = VFMA(LDK(KP869845200), TS, TK);
		    T3f = VFNMS(LDK(KP494780565), T2A, T2B);
		    T2T = VFNMS(LDK(KP132830569), T2A, T2B);
		    T2C = VFMA(LDK(KP120146378), T2B, T2A);
		    T2j = VFNMS(LDK(KP786782374), TK, TS);
	       }
	       {
		    V TW, T1b, T1c, T11, T16, T17, TV, T18, T19;
		    TV = LD(&(x[WS(rs, 2)]), ms, &(x[0]));
		    TW = BYTWJ(&(W[TWVL * 2]), TV);
		    {
			 V TY, T15, T10, T13;
			 {
			      V TX, T14, TZ, T12;
			      TX = LD(&(x[WS(rs, 7)]), ms, &(x[WS(rs, 1)]));
			      TY = BYTWJ(&(W[TWVL * 12]), TX);
			      T14 = LD(&(x[WS(rs, 17)]), ms, &(x[WS(rs, 1)]));
			      T15 = BYTWJ(&(W[TWVL * 32]), T14);
			      TZ = LD(&(x[WS(rs, 22)]), ms, &(x[0]));
			      T10 = BYTWJ(&(W[TWVL * 42]), TZ);
			      T12 = LD(&(x[WS(rs, 12)]), ms, &(x[0]));
			      T13 = BYTWJ(&(W[TWVL * 22]), T12);
			 }
			 T1b = VSUB(TY, T10);
			 T1c = VSUB(T15, T13);
			 T11 = VADD(TY, T10);
			 T16 = VADD(T13, T15);
			 T17 = VADD(T11, T16);
		    }
		    T3P = VADD(TW, T17);
		    T1d = VFNMS(LDK(KP618033988), T1c, T1b);
		    T2H = VFMA(LDK(KP618033988), T1b, T1c);
		    T18 = VFNMS(LDK(KP250000000), T17, TW);
		    T19 = VSUB(T16, T11);
		    T1a = VFNMS(LDK(KP559016994), T19, T18);
		    T2I = VFMA(LDK(KP559016994), T19, T18);
		    T1e = VFNMS(LDK(KP522847744), T1d, T1a);
		    T28 = VFNMS(LDK(KP494780565), T1a, T1d);
		    T3c = VFNMS(LDK(KP667278218), T2I, T2H);
		    T2Q = VFNMS(LDK(KP059835404), T2H, T2I);
		    T2J = VFMA(LDK(KP066152395), T2I, T2H);
		    T2g = VFMA(LDK(KP447533225), T1d, T1a);
	       }
	       {
		    V T3Y, T40, T3L, T3S, T3T, T3U, T3Z, T3V;
		    {
			 V T3W, T3X, T3O, T3R;
			 T3W = VSUB(T3M, T3N);
			 T3X = VSUB(T3P, T3Q);
			 T3Y = VMUL(LDK(KP951056516), VFMA(LDK(KP618033988), T3X, T3W));
			 T40 = VMUL(LDK(KP951056516), VFNMS(LDK(KP618033988), T3W, T3X));
			 T3L = VADD(T1, Tc);
			 T3O = VADD(T3M, T3N);
			 T3R = VADD(T3P, T3Q);
			 T3S = VADD(T3O, T3R);
			 T3T = VFNMS(LDK(KP250000000), T3S, T3L);
			 T3U = VSUB(T3O, T3R);
		    }
		    ST(&(x[0]), VADD(T3S, T3L), ms, &(x[0]));
		    T3Z = VFNMS(LDK(KP559016994), T3U, T3T);
		    ST(&(x[WS(rs, 10)]), VFMAI(T40, T3Z), ms, &(x[0]));
		    ST(&(x[WS(rs, 15)]), VFNMSI(T40, T3Z), ms, &(x[WS(rs, 1)]));
		    T3V = VFMA(LDK(KP559016994), T3U, T3T);
		    ST(&(x[WS(rs, 5)]), VFNMSI(T3Y, T3V), ms, &(x[WS(rs, 1)]));
		    ST(&(x[WS(rs, 20)]), VFMAI(T3Y, T3V), ms, &(x[0]));
	       }
	       {
		    V T2Z, T35, T3B, T3I, T2W, T38, T2O, T32, T2z, T3t, T3h, T3s, T3p, T3F, T3r;
		    V T3v, T3C, T3z, T3A;
		    T2Z = VFMA(LDK(KP734762448), T2U, T2T);
		    T35 = VFNMS(LDK(KP734762448), T2F, T2C);
		    T3z = VFMA(LDK(KP845997307), T3c, T3b);
		    T3A = VFMA(LDK(KP982009705), T3f, T3e);
		    T3B = VFMA(LDK(KP570584518), T3A, T3z);
		    T3I = VFNMS(LDK(KP669429328), T3z, T3A);
		    {
			 V T2S, T2V, T37, T36;
			 T2S = VFMA(LDK(KP772036680), T2R, T2Q);
			 T2V = VFNMS(LDK(KP734762448), T2U, T2T);
			 T36 = VFMA(LDK(KP772036680), T2M, T2J);
			 T37 = VFMA(LDK(KP522616830), T2V, T36);
			 T2W = VFMA(LDK(KP945422727), T2V, T2S);
			 T38 = VFNMS(LDK(KP690983005), T37, T2S);
		    }
		    {
			 V T2N, T2G, T31, T30;
			 T2N = VFNMS(LDK(KP772036680), T2M, T2J);
			 T2G = VFMA(LDK(KP734762448), T2F, T2C);
			 T30 = VFNMS(LDK(KP772036680), T2R, T2Q);
			 T31 = VFNMS(LDK(KP522616830), T2G, T30);
			 T2O = VFMA(LDK(KP956723877), T2N, T2G);
			 T32 = VFMA(LDK(KP763932022), T31, T2N);
		    }
		    {
			 V T3o, T3u, T3l, T3m, T3n;
			 T2z = VFNMS(LDK(KP559016994), Te, Td);
			 T3m = VFMA(LDK(KP447533225), T2B, T2A);
			 T3n = VFMA(LDK(KP578046249), T2D, T2E);
			 T3o = VFNMS(LDK(KP921078979), T3n, T3m);
			 T3t = VFMA(LDK(KP921078979), T3n, T3m);
			 {
			      V T3d, T3g, T3j, T3k;
			      T3d = VFNMS(LDK(KP845997307), T3c, T3b);
			      T3g = VFNMS(LDK(KP982009705), T3f, T3e);
			      T3h = VFMA(LDK(KP923225144), T3g, T3d);
			      T3u = VFNMS(LDK(KP923225144), T3g, T3d);
			      T3j = VFNMS(LDK(KP059835404), T2K, T2L);
			      T3k = VFMA(LDK(KP603558818), T2H, T2I);
			      T3l = VFMA(LDK(KP845997307), T3k, T3j);
			      T3s = VFNMS(LDK(KP845997307), T3k, T3j);
			 }
			 T3p = VFNMS(LDK(KP906616052), T3o, T3l);
			 T3F = VFNMS(LDK(KP904508497), T3u, T3s);
			 T3r = VFNMS(LDK(KP237294955), T3h, T2z);
			 T3v = VFNMS(LDK(KP997675361), T3u, T3t);
			 T3C = VFMA(LDK(KP906616052), T3o, T3l);
		    }
		    {
			 V T2P, T2Y, T3i, T3q;
			 T2P = VFMA(LDK(KP992114701), T2O, T2z);
			 T2Y = VMUL(LDK(KP998026728), VFMA(LDK(KP952936919), T2X, T2W));
			 ST(&(x[WS(rs, 3)]), VFNMSI(T2Y, T2P), ms, &(x[WS(rs, 1)]));
			 ST(&(x[WS(rs, 22)]), VFMAI(T2Y, T2P), ms, &(x[0]));
			 T3i = VFMA(LDK(KP949179823), T3h, T2z);
			 T3q = VMUL(LDK(KP998026728), VFNMS(LDK(KP952936919), T2X, T3p));
			 ST(&(x[WS(rs, 2)]), VFNMSI(T3q, T3i), ms, &(x[0]));
			 ST(&(x[WS(rs, 23)]), VFMAI(T3q, T3i), ms, &(x[WS(rs, 1)]));
		    }
		    {
			 V T34, T3a, T33, T39;
			 T33 = VFNMS(LDK(KP855719849), T32, T2Z);
			 T34 = VFMA(LDK(KP897376177), T33, T2z);
			 T39 = VFMA(LDK(KP855719849), T38, T35);
			 T3a = VMUL(LDK(KP951056516), VFNMS(LDK(KP992114701), T39, T2X));
			 ST(&(x[WS(rs, 8)]), VFNMSI(T3a, T34), ms, &(x[0]));
			 ST(&(x[WS(rs, 17)]), VFMAI(T3a, T34), ms, &(x[WS(rs, 1)]));
		    }
		    {
			 V T3x, T3H, T3E, T3K, T3w;
			 T3w = VFMA(LDK(KP560319534), T3v, T3s);
			 T3x = VFNMS(LDK(KP949179823), T3w, T3r);
			 {
			      V T3G, T3y, T3J, T3D;
			      T3G = VFNMS(LDK(KP681693190), T3F, T3t);
			      T3H = VFNMS(LDK(KP860541664), T3G, T3r);
			      T3y = VFMA(LDK(KP262346850), T3p, T2X);
			      T3J = VFNMS(LDK(KP669429328), T3C, T3I);
			      T3D = VFMA(LDK(KP618033988), T3C, T3B);
			      T3E = VMUL(LDK(KP951056516), VFNMS(LDK(KP949179823), T3D, T3y));
			      T3K = VMUL(LDK(KP951056516), VFNMS(LDK(KP876306680), T3J, T3y));
			 }
			 ST(&(x[WS(rs, 13)]), VFNMSI(T3E, T3x), ms, &(x[WS(rs, 1)]));
			 ST(&(x[WS(rs, 7)]), VFMAI(T3K, T3H), ms, &(x[WS(rs, 1)]));
			 ST(&(x[WS(rs, 12)]), VFMAI(T3E, T3x), ms, &(x[0]));
			 ST(&(x[WS(rs, 18)]), VFNMSI(T3K, T3H), ms, &(x[0]));
		    }
	       }
	       {
		    V T2n, T2t, T1V, T22, T2l, T2w, T2d, T2q, Tf, T1I, T1A, T1E, T1B, T1Z, T1J;
		    V T1R, T1W, T1T, T1U;
		    T2n = VFNMS(LDK(KP912575812), T2j, T2i);
		    T2t = VFNMS(LDK(KP912575812), T2b, T2a);
		    T1T = VFNMS(LDK(KP829049696), TT, Tz);
		    T1U = VFNMS(LDK(KP831864738), T1y, T1e);
		    T1V = VFMA(LDK(KP559154169), T1U, T1T);
		    T22 = VFNMS(LDK(KP683113946), T1T, T1U);
		    {
			 V T2h, T2k, T2v, T2u;
			 T2h = VFMA(LDK(KP958953096), T2g, T2f);
			 T2k = VFMA(LDK(KP912575812), T2j, T2i);
			 T2u = VFMA(LDK(KP867381224), T28, T27);
			 T2v = VFMA(LDK(KP447417479), T2k, T2u);
			 T2l = VFMA(LDK(KP894834959), T2k, T2h);
			 T2w = VFNMS(LDK(KP763932022), T2v, T2h);
		    }
		    {
			 V T29, T2c, T2p, T2o;
			 T29 = VFNMS(LDK(KP867381224), T28, T27);
			 T2c = VFMA(LDK(KP912575812), T2b, T2a);
			 T2o = VFNMS(LDK(KP958953096), T2g, T2f);
			 T2p = VFMA(LDK(KP447417479), T2c, T2o);
			 T2d = VFNMS(LDK(KP809385824), T2c, T29);
			 T2q = VFMA(LDK(KP690983005), T2p, T29);
		    }
		    {
			 V T1Q, T1F, T1P, T1G, T1H;
			 Tf = VFMA(LDK(KP559016994), Te, Td);
			 T1G = VFMA(LDK(KP578046249), T1a, T1d);
			 T1H = VFMA(LDK(KP987388751), T1u, T1x);
			 T1I = VFNMS(LDK(KP831864738), T1H, T1G);
			 T1Q = VFMA(LDK(KP831864738), T1H, T1G);
			 {
			      V TU, T1z, T1C, T1D;
			      TU = VFMA(LDK(KP829049696), TT, Tz);
			      T1z = VFMA(LDK(KP831864738), T1y, T1e);
			      T1A = VFMA(LDK(KP904730450), T1z, TU);
			      T1F = VFNMS(LDK(KP904730450), T1z, TU);
			      T1C = VFMA(LDK(KP269969613), Tv, Ty);
			      T1D = VFMA(LDK(KP603558818), TK, TS);
			      T1E = VFMA(LDK(KP916574801), T1D, T1C);
			      T1P = VFNMS(LDK(KP916574801), T1D, T1C);
			 }
			 T1B = VFNMS(LDK(KP242145790), T1A, Tf);
			 T1Z = VADD(T1E, T1F);
			 T1J = VFNMS(LDK(KP904730450), T1I, T1F);
			 T1R = VFMA(LDK(KP904730450), T1Q, T1P);
			 T1W = VFNMS(LDK(KP904730450), T1Q, T1P);
		    }
		    {
			 V T25, T26, T2e, T2m;
			 T25 = VFMA(LDK(KP968583161), T1A, Tf);
			 T26 = VMUL(LDK(KP951056516), VFMA(LDK(KP968583161), T1R, T1O));
			 ST(&(x[WS(rs, 1)]), VFNMSI(T26, T25), ms, &(x[WS(rs, 1)]));
			 ST(&(x[WS(rs, 24)]), VFMAI(T26, T25), ms, &(x[0]));
			 T2e = VFNMS(LDK(KP992114701), T2d, Tf);
			 T2m = VMUL(LDK(KP951056516), VFNMS(LDK(KP992114701), T2l, T1O));
			 ST(&(x[WS(rs, 4)]), VFMAI(T2m, T2e), ms, &(x[0]));
			 ST(&(x[WS(rs, 21)]), VFNMSI(T2m, T2e), ms, &(x[WS(rs, 1)]));
		    }
		    {
			 V T2s, T2y, T2r, T2x;
			 T2r = VFNMS(LDK(KP999544308), T2q, T2n);
			 T2s = VFNMS(LDK(KP803003575), T2r, Tf);
			 T2x = VFNMS(LDK(KP999544308), T2w, T2t);
			 T2y = VMUL(LDK(KP951056516), VFNMS(LDK(KP803003575), T2x, T1O));
			 ST(&(x[WS(rs, 16)]), VFNMSI(T2y, T2s), ms, &(x[0]));
			 ST(&(x[WS(rs, 9)]), VFMAI(T2y, T2s), ms, &(x[WS(rs, 1)]));
		    }
		    {
			 V T1L, T21, T1Y, T24, T1K;
			 T1K = VFNMS(LDK(KP618033988), T1J, T1E);
			 T1L = VFNMS(LDK(KP876091699), T1K, T1B);
			 {
			      V T20, T1S, T23, T1X;
			      T20 = VFNMS(LDK(KP683113946), T1Z, T1I);
			      T21 = VFMA(LDK(KP792626838), T20, T1B);
			      T1S = VFNMS(LDK(KP242145790), T1R, T1O);
			      T23 = VFMA(LDK(KP617882369), T1W, T22);
			      T1X = VFMA(LDK(KP559016994), T1W, T1V);
			      T1Y = VMUL(LDK(KP951056516), VFMA(LDK(KP968583161), T1X, T1S));
			      T24 = VMUL(LDK(KP951056516), VFNMS(LDK(KP876306680), T23, T1S));
			 }
			 ST(&(x[WS(rs, 6)]), VFNMSI(T1Y, T1L), ms, &(x[0]));
			 ST(&(x[WS(rs, 14)]), VFMAI(T24, T21), ms, &(x[0]));
			 ST(&(x[WS(rs, 19)]), VFMAI(T1Y, T1L), ms, &(x[WS(rs, 1)]));
			 ST(&(x[WS(rs, 11)]), VFNMSI(T24, T21), ms, &(x[WS(rs, 1)]));
		    }
	       }
	  }
     }
     VLEAVE();
}

static const tw_instr twinstr[] = {
     VTW(0, 1),
     VTW(0, 2),
     VTW(0, 3),
     VTW(0, 4),
     VTW(0, 5),
     VTW(0, 6),
     VTW(0, 7),
     VTW(0, 8),
     VTW(0, 9),
     VTW(0, 10),
     VTW(0, 11),
     VTW(0, 12),
     VTW(0, 13),
     VTW(0, 14),
     VTW(0, 15),
     VTW(0, 16),
     VTW(0, 17),
     VTW(0, 18),
     VTW(0, 19),
     VTW(0, 20),
     VTW(0, 21),
     VTW(0, 22),
     VTW(0, 23),
     VTW(0, 24),
     { TW_NEXT, VL, 0 }
};

static const ct_desc desc = { 25, XSIMD_STRING("t2fv_25"), twinstr, &GENUS, { 67, 60, 181, 0 }, 0, 0, 0 };

void XSIMD(codelet_t2fv_25) (planner *p) {
     X(kdft_dit_register) (p, t2fv_25, &desc);
}
#else

/* Generated by: ../../../genfft/gen_twiddle_c.native -simd -compact -variables 4 -pipeline-latency 8 -n 25 -name t2fv_25 -include dft/simd/t2f.h */

/*
 * This function contains 248 FP additions, 188 FP multiplications,
 * (or, 170 additions, 110 multiplications, 78 fused multiply/add),
 * 99 stack variables, 40 constants, and 50 memory accesses
 */
#include "dft/simd/t2f.h"

static void t2fv_25(R *ri, R *ii, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DVK(KP998026728, +0.998026728428271561952336806863450553336905220);
     DVK(KP125581039, +0.125581039058626752152356449131262266244969664);
     DVK(KP1_996053456, +1.996053456856543123904673613726901106673810439);
     DVK(KP062790519, +0.062790519529313376076178224565631133122484832);
     DVK(KP809016994, +0.809016994374947424102293417182819058860154590);
     DVK(KP309016994, +0.309016994374947424102293417182819058860154590);
     DVK(KP1_369094211, +1.369094211857377347464566715242418539779038465);
     DVK(KP728968627, +0.728968627421411523146730319055259111372571664);
     DVK(KP963507348, +0.963507348203430549974383005744259307057084020);
     DVK(KP876306680, +0.876306680043863587308115903922062583399064238);
     DVK(KP497379774, +0.497379774329709576484567492012895936835134813);
     DVK(KP968583161, +0.968583161128631119490168375464735813836012403);
     DVK(KP684547105, +0.684547105928688673732283357621209269889519233);
     DVK(KP1_457937254, +1.457937254842823046293460638110518222745143328);
     DVK(KP481753674, +0.481753674101715274987191502872129653528542010);
     DVK(KP1_752613360, +1.752613360087727174616231807844125166798128477);
     DVK(KP248689887, +0.248689887164854788242283746006447968417567406);
     DVK(KP1_937166322, +1.937166322257262238980336750929471627672024806);
     DVK(KP992114701, +0.992114701314477831049793042785778521453036709);
     DVK(KP250666467, +0.250666467128608490746237519633017587885836494);
     DVK(KP425779291, +0.425779291565072648862502445744251703979973042);
     DVK(KP1_809654104, +1.809654104932039055427337295865395187940827822);
     DVK(KP1_274847979, +1.274847979497379420353425623352032390869834596);
     DVK(KP770513242, +0.770513242775789230803009636396177847271667672);
     DVK(KP844327925, +0.844327925502015078548558063966681505381659241);
     DVK(KP1_071653589, +1.071653589957993236542617535735279956127150691);
     DVK(KP125333233, +0.125333233564304245373118759816508793942918247);
     DVK(KP1_984229402, +1.984229402628955662099586085571557042906073418);
     DVK(KP904827052, +0.904827052466019527713668647932697593970413911);
     DVK(KP851558583, +0.851558583130145297725004891488503407959946084);
     DVK(KP637423989, +0.637423989748689710176712811676016195434917298);
     DVK(KP1_541026485, +1.541026485551578461606019272792355694543335344);
     DVK(KP535826794, +0.535826794978996618271308767867639978063575346);
     DVK(KP1_688655851, +1.688655851004030157097116127933363010763318483);
     DVK(KP293892626, +0.293892626146236564584352977319536384298826219);
     DVK(KP475528258, +0.475528258147576786058219666689691071702849317);
     DVK(KP587785252, +0.587785252292473129168705954639072768597652438);
     DVK(KP951056516, +0.951056516295153572116439333379382143405698634);
     DVK(KP250000000, +0.250000000000000000000000000000000000000000000);
     DVK(KP559016994, +0.559016994374947424102293417182819058860154590);
     {
	  INT m;
	  R *x;
	  x = ri;
	  for (m = mb, W = W + (mb * ((TWVL / VL) * 48)); m < me; m = m + VL, x = x + (VL * ms), W = W + (TWVL * 48), MAKE_VOLATILE_STRIDE(25, rs)) {
	       V Tc, Tb, Td, Te, T1C, T2t, T1E, T1x, T2m, T1u, T3c, T2n, Ty, T2i, Tv;
	       V T38, T2j, TS, T2f, TP, T39, T2g, T1d, T2p, T1a, T3b, T2q;
	       {
		    V T7, T9, Ta, T2, T4, T5, T1D;
		    Tc = LD(&(x[0]), ms, &(x[0]));
		    {
			 V T6, T8, T1, T3;
			 T6 = LD(&(x[WS(rs, 10)]), ms, &(x[0]));
			 T7 = BYTWJ(&(W[TWVL * 18]), T6);
			 T8 = LD(&(x[WS(rs, 15)]), ms, &(x[WS(rs, 1)]));
			 T9 = BYTWJ(&(W[TWVL * 28]), T8);
			 Ta = VADD(T7, T9);
			 T1 = LD(&(x[WS(rs, 5)]), ms, &(x[WS(rs, 1)]));
			 T2 = BYTWJ(&(W[TWVL * 8]), T1);
			 T3 = LD(&(x[WS(rs, 20)]), ms, &(x[0]));
			 T4 = BYTWJ(&(W[TWVL * 38]), T3);
			 T5 = VADD(T2, T4);
		    }
		    Tb = VMUL(LDK(KP559016994), VSUB(T5, Ta));
		    Td = VADD(T5, Ta);
		    Te = VFNMS(LDK(KP250000000), Td, Tc);
		    T1C = VSUB(T2, T4);
		    T1D = VSUB(T7, T9);
		    T2t = VMUL(LDK(KP951056516), T1D);
		    T1E = VFMA(LDK(KP951056516), T1C, VMUL(LDK(KP587785252), T1D));
	       }
	       {
		    V T1r, T1l, T1n, T1o, T1g, T1i, T1j, T1q;
		    T1q = LD(&(x[WS(rs, 3)]), ms, &(x[WS(rs, 1)]));
		    T1r = BYTWJ(&(W[TWVL * 4]), T1q);
		    {
			 V T1k, T1m, T1f, T1h;
			 T1k = LD(&(x[WS(rs, 13)]), ms, &(x[WS(rs, 1)]));
			 T1l = BYTWJ(&(W[TWVL * 24]), T1k);
			 T1m = LD(&(x[WS(rs, 18)]), ms, &(x[0]));
			 T1n = BYTWJ(&(W[TWVL * 34]), T1m);
			 T1o = VADD(T1l, T1n);
			 T1f = LD(&(x[WS(rs, 8)]), ms, &(x[0]));
			 T1g = BYTWJ(&(W[TWVL * 14]), T1f);
			 T1h = LD(&(x[WS(rs, 23)]), ms, &(x[WS(rs, 1)]));
			 T1i = BYTWJ(&(W[TWVL * 44]), T1h);
			 T1j = VADD(T1g, T1i);
		    }
		    {
			 V T1v, T1w, T1p, T1s, T1t;
			 T1v = VSUB(T1g, T1i);
			 T1w = VSUB(T1l, T1n);
			 T1x = VFMA(LDK(KP475528258), T1v, VMUL(LDK(KP293892626), T1w));
			 T2m = VFNMS(LDK(KP293892626), T1v, VMUL(LDK(KP475528258), T1w));
			 T1p = VMUL(LDK(KP559016994), VSUB(T1j, T1o));
			 T1s = VADD(T1j, T1o);
			 T1t = VFNMS(LDK(KP250000000), T1s, T1r);
			 T1u = VADD(T1p, T1t);
			 T3c = VADD(T1r, T1s);
			 T2n = VSUB(T1t, T1p);
		    }
	       }
	       {
		    V Ts, Tm, To, Tp, Th, Tj, Tk, Tr;
		    Tr = LD(&(x[WS(rs, 1)]), ms, &(x[WS(rs, 1)]));
		    Ts = BYTWJ(&(W[0]), Tr);
		    {
			 V Tl, Tn, Tg, Ti;
			 Tl = LD(&(x[WS(rs, 11)]), ms, &(x[WS(rs, 1)]));
			 Tm = BYTWJ(&(W[TWVL * 20]), Tl);
			 Tn = LD(&(x[WS(rs, 16)]), ms, &(x[0]));
			 To = BYTWJ(&(W[TWVL * 30]), Tn);
			 Tp = VADD(Tm, To);
			 Tg = LD(&(x[WS(rs, 6)]), ms, &(x[0]));
			 Th = BYTWJ(&(W[TWVL * 10]), Tg);
			 Ti = LD(&(x[WS(rs, 21)]), ms, &(x[WS(rs, 1)]));
			 Tj = BYTWJ(&(W[TWVL * 40]), Ti);
			 Tk = VADD(Th, Tj);
		    }
		    {
			 V Tw, Tx, Tq, Tt, Tu;
			 Tw = VSUB(Th, Tj);
			 Tx = VSUB(Tm, To);
			 Ty = VFMA(LDK(KP475528258), Tw, VMUL(LDK(KP293892626), Tx));
			 T2i = VFNMS(LDK(KP293892626), Tw, VMUL(LDK(KP475528258), Tx));
			 Tq = VMUL(LDK(KP559016994), VSUB(Tk, Tp));
			 Tt = VADD(Tk, Tp);
			 Tu = VFNMS(LDK(KP250000000), Tt, Ts);
			 Tv = VADD(Tq, Tu);
			 T38 = VADD(Ts, Tt);
			 T2j = VSUB(Tu, Tq);
		    }
	       }
	       {
		    V TM, TG, TI, TJ, TB, TD, TE, TL;
		    TL = LD(&(x[WS(rs, 4)]), ms, &(x[0]));
		    TM = BYTWJ(&(W[TWVL * 6]), TL);
		    {
			 V TF, TH, TA, TC;
			 TF = LD(&(x[WS(rs, 14)]), ms, &(x[0]));
			 TG = BYTWJ(&(W[TWVL * 26]), TF);
			 TH = LD(&(x[WS(rs, 19)]), ms, &(x[WS(rs, 1)]));
			 TI = BYTWJ(&(W[TWVL * 36]), TH);
			 TJ = VADD(TG, TI);
			 TA = LD(&(x[WS(rs, 9)]), ms, &(x[WS(rs, 1)]));
			 TB = BYTWJ(&(W[TWVL * 16]), TA);
			 TC = LD(&(x[WS(rs, 24)]), ms, &(x[0]));
			 TD = BYTWJ(&(W[TWVL * 46]), TC);
			 TE = VADD(TB, TD);
		    }
		    {
			 V TQ, TR, TK, TN, TO;
			 TQ = VSUB(TB, TD);
			 TR = VSUB(TG, TI);
			 TS = VFMA(LDK(KP475528258), TQ, VMUL(LDK(KP293892626), TR));
			 T2f = VFNMS(LDK(KP293892626), TQ, VMUL(LDK(KP475528258), TR));
			 TK = VMUL(LDK(KP559016994), VSUB(TE, TJ));
			 TN = VADD(TE, TJ);
			 TO = VFNMS(LDK(KP250000000), TN, TM);
			 TP = VADD(TK, TO);
			 T39 = VADD(TM, TN);
			 T2g = VSUB(TO, TK);
		    }
	       }
	       {
		    V T17, T11, T13, T14, TW, TY, TZ, T16;
		    T16 = LD(&(x[WS(rs, 2)]), ms, &(x[0]));
		    T17 = BYTWJ(&(W[TWVL * 2]), T16);
		    {
			 V T10, T12, TV, TX;
			 T10 = LD(&(x[WS(rs, 12)]), ms, &(x[0]));
			 T11 = BYTWJ(&(W[TWVL * 22]), T10);
			 T12 = LD(&(x[WS(rs, 17)]), ms, &(x[WS(rs, 1)]));
			 T13 = BYTWJ(&(W[TWVL * 32]), T12);
			 T14 = VADD(T11, T13);
			 TV = LD(&(x[WS(rs, 7)]), ms, &(x[WS(rs, 1)]));
			 TW = BYTWJ(&(W[TWVL * 12]), TV);
			 TX = LD(&(x[WS(rs, 22)]), ms, &(x[0]));
			 TY = BYTWJ(&(W[TWVL * 42]), TX);
			 TZ = VADD(TW, TY);
		    }
		    {
			 V T1b, T1c, T15, T18, T19;
			 T1b = VSUB(TW, TY);
			 T1c = VSUB(T11, T13);
			 T1d = VFMA(LDK(KP475528258), T1b, VMUL(LDK(KP293892626), T1c));
			 T2p = VFNMS(LDK(KP293892626), T1b, VMUL(LDK(KP475528258), T1c));
			 T15 = VMUL(LDK(KP559016994), VSUB(TZ, T14));
			 T18 = VADD(TZ, T14);
			 T19 = VFNMS(LDK(KP250000000), T18, T17);
			 T1a = VADD(T15, T19);
			 T3b = VADD(T17, T18);
			 T2q = VSUB(T19, T15);
		    }
	       }
	       {
		    V T3l, T3m, T3f, T3g, T3e, T3h, T3n, T3i;
		    {
			 V T3j, T3k, T3a, T3d;
			 T3j = VSUB(T38, T39);
			 T3k = VSUB(T3b, T3c);
			 T3l = VBYI(VFMA(LDK(KP951056516), T3j, VMUL(LDK(KP587785252), T3k)));
			 T3m = VBYI(VFNMS(LDK(KP587785252), T3j, VMUL(LDK(KP951056516), T3k)));
			 T3f = VADD(Tc, Td);
			 T3a = VADD(T38, T39);
			 T3d = VADD(T3b, T3c);
			 T3g = VADD(T3a, T3d);
			 T3e = VMUL(LDK(KP559016994), VSUB(T3a, T3d));
			 T3h = VFNMS(LDK(KP250000000), T3g, T3f);
		    }
		    ST(&(x[0]), VADD(T3f, T3g), ms, &(x[0]));
		    T3n = VSUB(T3h, T3e);
		    ST(&(x[WS(rs, 10)]), VADD(T3m, T3n), ms, &(x[0]));
		    ST(&(x[WS(rs, 15)]), VSUB(T3n, T3m), ms, &(x[WS(rs, 1)]));
		    T3i = VADD(T3e, T3h);
		    ST(&(x[WS(rs, 5)]), VSUB(T3i, T3l), ms, &(x[WS(rs, 1)]));
		    ST(&(x[WS(rs, 20)]), VADD(T3l, T3i), ms, &(x[0]));
	       }
	       {
		    V Tf, T1Z, T20, T21, T29, T2a, T2b, T26, T27, T28, T22, T23, T24, T1L, T1U;
		    V T1Q, T1S, T1A, T1V, T1N, T1O, T2d, T2e;
		    Tf = VADD(Tb, Te);
		    T1Z = VFMA(LDK(KP1_688655851), Ty, VMUL(LDK(KP535826794), Tv));
		    T20 = VFMA(LDK(KP1_541026485), TS, VMUL(LDK(KP637423989), TP));
		    T21 = VSUB(T1Z, T20);
		    T29 = VFMA(LDK(KP851558583), T1d, VMUL(LDK(KP904827052), T1a));
		    T2a = VFMA(LDK(KP1_984229402), T1x, VMUL(LDK(KP125333233), T1u));
		    T2b = VADD(T29, T2a);
		    T26 = VFNMS(LDK(KP844327925), Tv, VMUL(LDK(KP1_071653589), Ty));
		    T27 = VFNMS(LDK(KP1_274847979), TS, VMUL(LDK(KP770513242), TP));
		    T28 = VADD(T26, T27);
		    T22 = VFNMS(LDK(KP425779291), T1a, VMUL(LDK(KP1_809654104), T1d));
		    T23 = VFNMS(LDK(KP992114701), T1u, VMUL(LDK(KP250666467), T1x));
		    T24 = VADD(T22, T23);
		    {
			 V T1F, T1G, T1H, T1I, T1J, T1K;
			 T1F = VFMA(LDK(KP1_937166322), Ty, VMUL(LDK(KP248689887), Tv));
			 T1G = VFMA(LDK(KP1_071653589), TS, VMUL(LDK(KP844327925), TP));
			 T1H = VADD(T1F, T1G);
			 T1I = VFMA(LDK(KP1_752613360), T1d, VMUL(LDK(KP481753674), T1a));
			 T1J = VFMA(LDK(KP1_457937254), T1x, VMUL(LDK(KP684547105), T1u));
			 T1K = VADD(T1I, T1J);
			 T1L = VADD(T1H, T1K);
			 T1U = VSUB(T1J, T1I);
			 T1Q = VMUL(LDK(KP559016994), VSUB(T1K, T1H));
			 T1S = VSUB(T1G, T1F);
		    }
		    {
			 V Tz, TT, TU, T1e, T1y, T1z;
			 Tz = VFNMS(LDK(KP497379774), Ty, VMUL(LDK(KP968583161), Tv));
			 TT = VFNMS(LDK(KP1_688655851), TS, VMUL(LDK(KP535826794), TP));
			 TU = VADD(Tz, TT);
			 T1e = VFNMS(LDK(KP963507348), T1d, VMUL(LDK(KP876306680), T1a));
			 T1y = VFNMS(LDK(KP1_369094211), T1x, VMUL(LDK(KP728968627), T1u));
			 T1z = VADD(T1e, T1y);
			 T1A = VADD(TU, T1z);
			 T1V = VMUL(LDK(KP559016994), VSUB(TU, T1z));
			 T1N = VSUB(TT, Tz);
			 T1O = VSUB(T1e, T1y);
		    }
		    {
			 V T1B, T1M, T25, T2c;
			 T1B = VADD(Tf, T1A);
			 T1M = VBYI(VADD(T1E, T1L));
			 ST(&(x[WS(rs, 1)]), VSUB(T1B, T1M), ms, &(x[WS(rs, 1)]));
			 ST(&(x[WS(rs, 24)]), VADD(T1B, T1M), ms, &(x[0]));
			 T25 = VADD(Tf, VADD(T21, T24));
			 T2c = VBYI(VADD(T1E, VSUB(T28, T2b)));
			 ST(&(x[WS(rs, 21)]), VSUB(T25, T2c), ms, &(x[WS(rs, 1)]));
			 ST(&(x[WS(rs, 4)]), VADD(T25, T2c), ms, &(x[0]));
		    }
		    T2d = VBYI(VADD(T1E, VFMA(LDK(KP309016994), T28, VFMA(LDK(KP587785252), VSUB(T23, T22), VFNMS(LDK(KP951056516), VADD(T1Z, T20), VMUL(LDK(KP809016994), T2b))))));
		    T2e = VFMA(LDK(KP309016994), T21, VFMA(LDK(KP951056516), VSUB(T26, T27), VFMA(LDK(KP587785252), VSUB(T2a, T29), VFNMS(LDK(KP809016994), T24, Tf))));
		    ST(&(x[WS(rs, 9)]), VADD(T2d, T2e), ms, &(x[WS(rs, 1)]));
		    ST(&(x[WS(rs, 16)]), VSUB(T2e, T2d), ms, &(x[0]));
		    {
			 V T1R, T1X, T1W, T1Y, T1P, T1T;
			 T1P = VFMS(LDK(KP250000000), T1L, T1E);
			 T1R = VBYI(VADD(VFMA(LDK(KP587785252), T1N, VMUL(LDK(KP951056516), T1O)), VSUB(T1P, T1Q)));
			 T1X = VBYI(VADD(VFNMS(LDK(KP587785252), T1O, VMUL(LDK(KP951056516), T1N)), VADD(T1P, T1Q)));
			 T1T = VFNMS(LDK(KP250000000), T1A, Tf);
			 T1W = VFMA(LDK(KP587785252), T1S, VFNMS(LDK(KP951056516), T1U, VSUB(T1T, T1V)));
			 T1Y = VFMA(LDK(KP951056516), T1S, VADD(T1V, VFMA(LDK(KP587785252), T1U, T1T)));
			 ST(&(x[WS(rs, 11)]), VADD(T1R, T1W), ms, &(x[WS(rs, 1)]));
			 ST(&(x[WS(rs, 19)]), VSUB(T1Y, T1X), ms, &(x[WS(rs, 1)]));
			 ST(&(x[WS(rs, 14)]), VSUB(T1W, T1R), ms, &(x[0]));
			 ST(&(x[WS(rs, 6)]), VADD(T1X, T1Y), ms, &(x[0]));
		    }
	       }
	       {
		    V T2u, T2w, T2h, T2k, T2l, T2A, T2B, T2C, T2o, T2r, T2s, T2x, T2y, T2z, T2M;
		    V T2X, T2N, T2W, T2R, T31, T2U, T30, T2E, T2F;
		    T2u = VFNMS(LDK(KP587785252), T1C, T2t);
		    T2w = VSUB(Te, Tb);
		    T2h = VFNMS(LDK(KP125333233), T2g, VMUL(LDK(KP1_984229402), T2f));
		    T2k = VFMA(LDK(KP1_457937254), T2i, VMUL(LDK(KP684547105), T2j));
		    T2l = VSUB(T2h, T2k);
		    T2A = VFNMS(LDK(KP1_996053456), T2p, VMUL(LDK(KP062790519), T2q));
		    T2B = VFMA(LDK(KP1_541026485), T2m, VMUL(LDK(KP637423989), T2n));
		    T2C = VSUB(T2A, T2B);
		    T2o = VFNMS(LDK(KP770513242), T2n, VMUL(LDK(KP1_274847979), T2m));
		    T2r = VFMA(LDK(KP125581039), T2p, VMUL(LDK(KP998026728), T2q));
		    T2s = VSUB(T2o, T2r);
		    T2x = VFNMS(LDK(KP1_369094211), T2i, VMUL(LDK(KP728968627), T2j));
		    T2y = VFMA(LDK(KP250666467), T2f, VMUL(LDK(KP992114701), T2g));
		    T2z = VSUB(T2x, T2y);
		    {
			 V T2G, T2H, T2I, T2J, T2K, T2L;
			 T2G = VFNMS(LDK(KP481753674), T2j, VMUL(LDK(KP1_752613360), T2i));
			 T2H = VFMA(LDK(KP851558583), T2f, VMUL(LDK(KP904827052), T2g));
			 T2I = VSUB(T2G, T2H);
			 T2J = VFNMS(LDK(KP844327925), T2q, VMUL(LDK(KP1_071653589), T2p));
			 T2K = VFNMS(LDK(KP998026728), T2n, VMUL(LDK(KP125581039), T2m));
			 T2L = VADD(T2J, T2K);
			 T2M = VMUL(LDK(KP559016994), VSUB(T2I, T2L));
			 T2X = VSUB(T2J, T2K);
			 T2N = VADD(T2I, T2L);
			 T2W = VADD(T2G, T2H);
		    }
		    {
			 V T2P, T2Q, T2Y, T2S, T2T, T2Z;
			 T2P = VFNMS(LDK(KP425779291), T2g, VMUL(LDK(KP1_809654104), T2f));
			 T2Q = VFMA(LDK(KP963507348), T2i, VMUL(LDK(KP876306680), T2j));
			 T2Y = VADD(T2Q, T2P);
			 T2S = VFMA(LDK(KP1_688655851), T2p, VMUL(LDK(KP535826794), T2q));
			 T2T = VFMA(LDK(KP1_996053456), T2m, VMUL(LDK(KP062790519), T2n));
			 T2Z = VADD(T2S, T2T);
			 T2R = VSUB(T2P, T2Q);
			 T31 = VADD(T2Y, T2Z);
			 T2U = VSUB(T2S, T2T);
			 T30 = VMUL(LDK(KP559016994), VSUB(T2Y, T2Z));
		    }
		    {
			 V T36, T37, T2v, T2D;
			 T36 = VBYI(VADD(T2u, T2N));
			 T37 = VADD(T2w, T31);
			 ST(&(x[WS(rs, 2)]), VADD(T36, T37), ms, &(x[0]));
			 ST(&(x[WS(rs, 23)]), VSUB(T37, T36), ms, &(x[WS(rs, 1)]));
			 T2v = VBYI(VSUB(VADD(T2l, T2s), T2u));
			 T2D = VADD(T2w, VADD(T2z, T2C));
			 ST(&(x[WS(rs, 3)]), VADD(T2v, T2D), ms, &(x[WS(rs, 1)]));
			 ST(&(x[WS(rs, 22)]), VSUB(T2D, T2v), ms, &(x[0]));
		    }
		    T2E = VFMA(LDK(KP309016994), T2z, VFNMS(LDK(KP809016994), T2C, VFNMS(LDK(KP587785252), VADD(T2r, T2o), VFNMS(LDK(KP951056516), VADD(T2k, T2h), T2w))));
		    T2F = VBYI(VSUB(VFNMS(LDK(KP587785252), VADD(T2A, T2B), VFNMS(LDK(KP809016994), T2s, VFNMS(LDK(KP951056516), VADD(T2x, T2y), VMUL(LDK(KP309016994), T2l)))), T2u));
		    ST(&(x[WS(rs, 17)]), VSUB(T2E, T2F), ms, &(x[WS(rs, 1)]));
		    ST(&(x[WS(rs, 8)]), VADD(T2E, T2F), ms, &(x[0]));
		    {
			 V T2V, T34, T33, T35, T2O, T32;
			 T2O = VFNMS(LDK(KP250000000), T2N, T2u);
			 T2V = VBYI(VADD(T2M, VADD(T2O, VFNMS(LDK(KP587785252), T2U, VMUL(LDK(KP951056516), T2R)))));
			 T34 = VBYI(VADD(T2O, VSUB(VFMA(LDK(KP587785252), T2R, VMUL(LDK(KP951056516), T2U)), T2M)));
			 T32 = VFNMS(LDK(KP250000000), T31, T2w);
			 T33 = VFMA(LDK(KP951056516), T2W, VFMA(LDK(KP587785252), T2X, VADD(T30, T32)));
			 T35 = VFMA(LDK(KP587785252), T2W, VSUB(VFNMS(LDK(KP951056516), T2X, T32), T30));
			 ST(&(x[WS(rs, 7)]), VADD(T2V, T33), ms, &(x[WS(rs, 1)]));
			 ST(&(x[WS(rs, 13)]), VSUB(T35, T34), ms, &(x[WS(rs, 1)]));
			 ST(&(x[WS(rs, 18)]), VSUB(T33, T2V), ms, &(x[0]));
			 ST(&(x[WS(rs, 12)]), VADD(T34, T35), ms, &(x[0]));
		    }
	       }
	  }
     }
     VLEAVE();
}

static const tw_instr twinstr[] = {
     VTW(0, 1),
     VTW(0, 2),
     VTW(0, 3),
     VTW(0, 4),
     VTW(0, 5),
     VTW(0, 6),
     VTW(0, 7),
     VTW(0, 8),
     VTW(0, 9),
     VTW(0, 10),
     VTW(0, 11),
     VTW(0, 12),
     VTW(0, 13),
     VTW(0, 14),
     VTW(0, 15),
     VTW(0, 16),
     VTW(0, 17),
     VTW(0, 18),
     VTW(0, 19),
     VTW(0, 20),
     VTW(0, 21),
     VTW(0, 22),
     VTW(0, 23),
     VTW(0, 24),
     { TW_NEXT, VL, 0 }
};

static const ct_desc desc = { 25, XSIMD_STRING("t2fv_25"), twinstr, &GENUS, { 170, 110, 78, 0 }, 0, 0, 0 };

void XSIMD(codelet_t2fv_25) (planner *p) {
     X(kdft_dit_register) (p, t2fv_25, &desc);
}
#endif
