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
/* Generated on Tue Sep 14 10:45:09 EDT 2021 */

#include "dft/codelet-dft.h"

#if defined(ARCH_PREFERS_FMA) || defined(ISA_EXTENSION_PREFERS_FMA)

/* Generated by: ../../../genfft/gen_notw_c.native -fma -simd -compact -variables 4 -pipeline-latency 8 -sign 1 -n 25 -name n1bv_25 -include dft/simd/n1b.h */

/*
 * This function contains 224 FP additions, 193 FP multiplications,
 * (or, 43 additions, 12 multiplications, 181 fused multiply/add),
 * 140 stack variables, 67 constants, and 50 memory accesses
 */
#include "dft/simd/n1b.h"

static void n1bv_25(const R *ri, const R *ii, R *ro, R *io, stride is, stride os, INT v, INT ivs, INT ovs)
{
     DVK(KP803003575, +0.803003575438660414833440593570376004635464850);
     DVK(KP999544308, +0.999544308746292983948881682379742149196758193);
     DVK(KP792626838, +0.792626838241819413632131824093538848057784557);
     DVK(KP876091699, +0.876091699473550838204498029706869638173524346);
     DVK(KP968583161, +0.968583161128631119490168375464735813836012403);
     DVK(KP617882369, +0.617882369114440893914546919006756321695042882);
     DVK(KP242145790, +0.242145790282157779872542093866183953459003101);
     DVK(KP683113946, +0.683113946453479238701949862233725244439656928);
     DVK(KP559154169, +0.559154169276087864842202529084232643714075927);
     DVK(KP829049696, +0.829049696159252993975487806364305442437946767);
     DVK(KP904730450, +0.904730450839922351881287709692877908104763647);
     DVK(KP831864738, +0.831864738706457140726048799369896829771167132);
     DVK(KP916574801, +0.916574801383451584742370439148878693530976769);
     DVK(KP894834959, +0.894834959464455102997960030820114611498661386);
     DVK(KP809385824, +0.809385824416008241660603814668679683846476688);
     DVK(KP447417479, +0.447417479732227551498980015410057305749330693);
     DVK(KP958953096, +0.958953096729998668045963838399037225970891871);
     DVK(KP867381224, +0.867381224396525206773171885031575671309956167);
     DVK(KP912575812, +0.912575812670962425556968549836277086778922727);
     DVK(KP897376177, +0.897376177523557693138608077137219684419427330);
     DVK(KP855719849, +0.855719849902058969314654733608091555096772472);
     DVK(KP860541664, +0.860541664367944677098261680920518816412804187);
     DVK(KP681693190, +0.681693190061530575150324149145440022633095390);
     DVK(KP876306680, +0.876306680043863587308115903922062583399064238);
     DVK(KP560319534, +0.560319534973832390111614715371676131169633784);
     DVK(KP949179823, +0.949179823508441261575555465843363271711583843);
     DVK(KP952936919, +0.952936919628306576880750665357914584765951388);
     DVK(KP998026728, +0.998026728428271561952336806863450553336905220);
     DVK(KP992114701, +0.992114701314477831049793042785778521453036709);
     DVK(KP997675361, +0.997675361079556513670859573984492383596555031);
     DVK(KP904508497, +0.904508497187473712051146708591409529430077295);
     DVK(KP237294955, +0.237294955877110315393888866460840817927895961);
     DVK(KP923225144, +0.923225144846402650453449441572664695995209956);
     DVK(KP262346850, +0.262346850930607871785420028382979691334784273);
     DVK(KP669429328, +0.669429328479476605641803240971985825917022098);
     DVK(KP570584518, +0.570584518783621657366766175430996792655723863);
     DVK(KP982009705, +0.982009705009746369461829878184175962711969869);
     DVK(KP906616052, +0.906616052148196230441134447086066874408359177);
     DVK(KP921078979, +0.921078979742360627699756128143719920817673854);
     DVK(KP845997307, +0.845997307939530944175097360758058292389769300);
     DVK(KP690983005, +0.690983005625052575897706582817180941139845410);
     DVK(KP945422727, +0.945422727388575946270360266328811958657216298);
     DVK(KP763932022, +0.763932022500210303590826331268723764559381640);
     DVK(KP956723877, +0.956723877038460305821989399535483155872969262);
     DVK(KP522616830, +0.522616830205754336872861364785224694908468440);
     DVK(KP772036680, +0.772036680810363904029489473607579825330539880);
     DVK(KP734762448, +0.734762448793050413546343770063151342619912334);
     DVK(KP951056516, +0.951056516295153572116439333379382143405698634);
     DVK(KP269969613, +0.269969613759572083574752974412347470060951301);
     DVK(KP244189809, +0.244189809627953270309879511234821255780225091);
     DVK(KP447533225, +0.447533225982656890041886979663652563063114397);
     DVK(KP494780565, +0.494780565770515410344588413655324772219443730);
     DVK(KP578046249, +0.578046249379945007321754579646815604023525655);
     DVK(KP603558818, +0.603558818296015001454675132653458027918768137);
     DVK(KP667278218, +0.667278218140296670899089292254759909713898805);
     DVK(KP522847744, +0.522847744331509716623755382187077770911012542);
     DVK(KP132830569, +0.132830569247582714407653942074819768844536507);
     DVK(KP786782374, +0.786782374965295178365099601674911834788448471);
     DVK(KP869845200, +0.869845200362138853122720822420327157933056305);
     DVK(KP120146378, +0.120146378570687701782758537356596213647956445);
     DVK(KP987388751, +0.987388751065621252324603216482382109400433949);
     DVK(KP059835404, +0.059835404262124915169548397419498386427871950);
     DVK(KP066152395, +0.066152395967733048213034281011006031460903353);
     DVK(KP893101515, +0.893101515366181661711202267938416198338079437);
     DVK(KP559016994, +0.559016994374947424102293417182819058860154590);
     DVK(KP250000000, +0.250000000000000000000000000000000000000000000);
     DVK(KP618033988, +0.618033988749894848204586834365638117720309180);
     {
	  INT i;
	  const R *xi;
	  R *xo;
	  xi = ii;
	  xo = io;
	  for (i = v; i > 0; i = i - VL, xi = xi + (VL * ivs), xo = xo + (VL * ovs), MAKE_VOLATILE_STRIDE(50, is), MAKE_VOLATILE_STRIDE(50, os)) {
	       V Ta, T2z, T1q, T9, T3n, T3r, T3s, T3t, T1a, T2N, T2V, T1j, T1J, T2o, T2t;
	       V T1R, TV, T2O, T2W, T1i, T1K, T2l, T2s, T1S, T3o, T3p, T3q, TF, T2R, T2Y;
	       V T1f, T1N, T2e, T2v, T1V, Tq, T2Q, T2Z, T1e, T1M, T2h, T2w, T1U;
	       {
		    V T1, T7, T1p, T4, T1o, T8;
		    T1 = LD(&(xi[0]), ivs, &(xi[0]));
		    {
			 V T5, T6, T2, T3;
			 T5 = LD(&(xi[WS(is, 10)]), ivs, &(xi[0]));
			 T6 = LD(&(xi[WS(is, 15)]), ivs, &(xi[WS(is, 1)]));
			 T7 = VADD(T5, T6);
			 T1p = VSUB(T5, T6);
			 T2 = LD(&(xi[WS(is, 5)]), ivs, &(xi[WS(is, 1)]));
			 T3 = LD(&(xi[WS(is, 20)]), ivs, &(xi[0]));
			 T4 = VADD(T2, T3);
			 T1o = VSUB(T2, T3);
		    }
		    Ta = VSUB(T4, T7);
		    T2z = VFNMS(LDK(KP618033988), T1o, T1p);
		    T1q = VFMA(LDK(KP618033988), T1p, T1o);
		    T8 = VADD(T4, T7);
		    T9 = VFNMS(LDK(KP250000000), T8, T1);
		    T3n = VADD(T1, T8);
	       }
	       {
		    V TH, TW, TO, TT, TQ, TS, T13, T18, T15, T17;
		    TH = LD(&(xi[WS(is, 2)]), ivs, &(xi[0]));
		    TW = LD(&(xi[WS(is, 3)]), ivs, &(xi[WS(is, 1)]));
		    {
			 V TI, TJ, TK, TL, TM, TN;
			 TI = LD(&(xi[WS(is, 7)]), ivs, &(xi[WS(is, 1)]));
			 TJ = LD(&(xi[WS(is, 22)]), ivs, &(xi[0]));
			 TK = VADD(TI, TJ);
			 TL = LD(&(xi[WS(is, 12)]), ivs, &(xi[0]));
			 TM = LD(&(xi[WS(is, 17)]), ivs, &(xi[WS(is, 1)]));
			 TN = VADD(TL, TM);
			 TO = VADD(TK, TN);
			 TT = VSUB(TM, TL);
			 TQ = VSUB(TN, TK);
			 TS = VSUB(TI, TJ);
		    }
		    {
			 V TX, TY, TZ, T10, T11, T12;
			 TX = LD(&(xi[WS(is, 8)]), ivs, &(xi[0]));
			 TY = LD(&(xi[WS(is, 23)]), ivs, &(xi[WS(is, 1)]));
			 TZ = VADD(TX, TY);
			 T10 = LD(&(xi[WS(is, 13)]), ivs, &(xi[WS(is, 1)]));
			 T11 = LD(&(xi[WS(is, 18)]), ivs, &(xi[0]));
			 T12 = VADD(T10, T11);
			 T13 = VADD(TZ, T12);
			 T18 = VSUB(T10, T11);
			 T15 = VSUB(T12, TZ);
			 T17 = VSUB(TX, TY);
		    }
		    T3r = VADD(TH, TO);
		    T3s = VADD(TW, T13);
		    T3t = VADD(T3r, T3s);
		    {
			 V T19, T2m, T16, T2n, T14;
			 T19 = VFMA(LDK(KP618033988), T18, T17);
			 T2m = VFNMS(LDK(KP618033988), T17, T18);
			 T14 = VFNMS(LDK(KP250000000), T13, TW);
			 T16 = VFNMS(LDK(KP559016994), T15, T14);
			 T2n = VFMA(LDK(KP559016994), T15, T14);
			 T1a = VFNMS(LDK(KP893101515), T19, T16);
			 T2N = VFMA(LDK(KP066152395), T2n, T2m);
			 T2V = VFNMS(LDK(KP059835404), T2m, T2n);
			 T1j = VFMA(LDK(KP987388751), T16, T19);
			 T1J = VFNMS(LDK(KP120146378), T19, T16);
			 T2o = VFMA(LDK(KP869845200), T2n, T2m);
			 T2t = VFNMS(LDK(KP786782374), T2m, T2n);
			 T1R = VFMA(LDK(KP132830569), T16, T19);
		    }
		    {
			 V TU, T2j, TR, T2k, TP;
			 TU = VFNMS(LDK(KP618033988), TT, TS);
			 T2j = VFMA(LDK(KP618033988), TS, TT);
			 TP = VFNMS(LDK(KP250000000), TO, TH);
			 TR = VFNMS(LDK(KP559016994), TQ, TP);
			 T2k = VFMA(LDK(KP559016994), TQ, TP);
			 TV = VFNMS(LDK(KP522847744), TU, TR);
			 T2O = VFNMS(LDK(KP667278218), T2k, T2j);
			 T2W = VFMA(LDK(KP603558818), T2j, T2k);
			 T1i = VFMA(LDK(KP578046249), TR, TU);
			 T1K = VFNMS(LDK(KP494780565), TR, TU);
			 T2l = VFMA(LDK(KP066152395), T2k, T2j);
			 T2s = VFNMS(LDK(KP059835404), T2j, T2k);
			 T1S = VFMA(LDK(KP447533225), TU, TR);
		    }
	       }
	       {
		    V Tc, Ty, Tj, To, Tl, Tn, Tt, TD, Tw, TB;
		    Tc = LD(&(xi[WS(is, 1)]), ivs, &(xi[WS(is, 1)]));
		    Ty = LD(&(xi[WS(is, 4)]), ivs, &(xi[0]));
		    {
			 V Td, Te, Tf, Tg, Th, Ti;
			 Td = LD(&(xi[WS(is, 6)]), ivs, &(xi[0]));
			 Te = LD(&(xi[WS(is, 21)]), ivs, &(xi[WS(is, 1)]));
			 Tf = VADD(Td, Te);
			 Tg = LD(&(xi[WS(is, 11)]), ivs, &(xi[WS(is, 1)]));
			 Th = LD(&(xi[WS(is, 16)]), ivs, &(xi[0]));
			 Ti = VADD(Tg, Th);
			 Tj = VADD(Tf, Ti);
			 To = VSUB(Th, Tg);
			 Tl = VSUB(Tf, Ti);
			 Tn = VSUB(Td, Te);
		    }
		    {
			 V Tr, Ts, Tz, Tu, Tv, TA;
			 Tr = LD(&(xi[WS(is, 24)]), ivs, &(xi[0]));
			 Ts = LD(&(xi[WS(is, 9)]), ivs, &(xi[WS(is, 1)]));
			 Tz = VADD(Ts, Tr);
			 Tu = LD(&(xi[WS(is, 19)]), ivs, &(xi[WS(is, 1)]));
			 Tv = LD(&(xi[WS(is, 14)]), ivs, &(xi[0]));
			 TA = VADD(Tv, Tu);
			 Tt = VSUB(Tr, Ts);
			 TD = VSUB(Tz, TA);
			 Tw = VSUB(Tu, Tv);
			 TB = VADD(Tz, TA);
		    }
		    T3o = VADD(Tc, Tj);
		    T3p = VADD(Ty, TB);
		    T3q = VADD(T3o, T3p);
		    {
			 V Tx, T2d, TE, T2c, TC;
			 Tx = VFMA(LDK(KP618033988), Tw, Tt);
			 T2d = VFNMS(LDK(KP618033988), Tt, Tw);
			 TC = VFMS(LDK(KP250000000), TB, Ty);
			 TE = VFNMS(LDK(KP559016994), TD, TC);
			 T2c = VFMA(LDK(KP559016994), TD, TC);
			 TF = VFNMS(LDK(KP667278218), TE, Tx);
			 T2R = VFNMS(LDK(KP494780565), T2c, T2d);
			 T2Y = VFMA(LDK(KP447533225), T2d, T2c);
			 T1f = VFMA(LDK(KP603558818), Tx, TE);
			 T1N = VFMA(LDK(KP869845200), TE, Tx);
			 T2e = VFMA(LDK(KP120146378), T2d, T2c);
			 T2v = VFNMS(LDK(KP132830569), T2c, T2d);
			 T1V = VFNMS(LDK(KP786782374), Tx, TE);
		    }
		    {
			 V Tp, T2g, Tm, T2f, Tk;
			 Tp = VFNMS(LDK(KP618033988), To, Tn);
			 T2g = VFMA(LDK(KP618033988), Tn, To);
			 Tk = VFNMS(LDK(KP250000000), Tj, Tc);
			 Tm = VFMA(LDK(KP559016994), Tl, Tk);
			 T2f = VFNMS(LDK(KP559016994), Tl, Tk);
			 Tq = VFNMS(LDK(KP244189809), Tp, Tm);
			 T2Q = VFNMS(LDK(KP522847744), T2g, T2f);
			 T2Z = VFMA(LDK(KP578046249), T2f, T2g);
			 T1e = VFMA(LDK(KP269969613), Tm, Tp);
			 T1M = VFMA(LDK(KP667278218), Tm, Tp);
			 T2h = VFMA(LDK(KP893101515), T2g, T2f);
			 T2w = VFNMS(LDK(KP987388751), T2f, T2g);
			 T1U = VFNMS(LDK(KP603558818), Tp, Tm);
		    }
	       }
	       {
		    V T3w, T3u, T3v, T3A, T3C, T3y, T3z, T3B, T3x;
		    T3w = VSUB(T3q, T3t);
		    T3u = VADD(T3q, T3t);
		    T3v = VFNMS(LDK(KP250000000), T3u, T3n);
		    T3y = VSUB(T3o, T3p);
		    T3z = VSUB(T3r, T3s);
		    T3A = VMUL(LDK(KP951056516), VFMA(LDK(KP618033988), T3z, T3y));
		    T3C = VMUL(LDK(KP951056516), VFNMS(LDK(KP618033988), T3y, T3z));
		    ST(&(xo[0]), VADD(T3u, T3n), ovs, &(xo[0]));
		    T3B = VFNMS(LDK(KP559016994), T3w, T3v);
		    ST(&(xo[WS(os, 10)]), VFNMSI(T3C, T3B), ovs, &(xo[0]));
		    ST(&(xo[WS(os, 15)]), VFMAI(T3C, T3B), ovs, &(xo[WS(os, 1)]));
		    T3x = VFMA(LDK(KP559016994), T3w, T3v);
		    ST(&(xo[WS(os, 5)]), VFMAI(T3A, T3x), ovs, &(xo[WS(os, 1)]));
		    ST(&(xo[WS(os, 20)]), VFNMSI(T3A, T3x), ovs, &(xo[0]));
	       }
	       {
		    V T2B, T2H, T2q, T2E, T2y, T2K, T31, T3a, T3l, T3f, T2b, T35, T34, T2T, T33;
		    V T3h, T37;
		    T2B = VFMA(LDK(KP734762448), T2w, T2v);
		    T2H = VFNMS(LDK(KP734762448), T2h, T2e);
		    {
			 V T2p, T2i, T2D, T2C;
			 T2p = VFNMS(LDK(KP772036680), T2o, T2l);
			 T2i = VFMA(LDK(KP734762448), T2h, T2e);
			 T2C = VFNMS(LDK(KP772036680), T2t, T2s);
			 T2D = VFNMS(LDK(KP522616830), T2i, T2C);
			 T2q = VFMA(LDK(KP956723877), T2p, T2i);
			 T2E = VFMA(LDK(KP763932022), T2D, T2p);
		    }
		    {
			 V T2u, T2x, T2J, T2I;
			 T2u = VFMA(LDK(KP772036680), T2t, T2s);
			 T2x = VFNMS(LDK(KP734762448), T2w, T2v);
			 T2I = VFMA(LDK(KP772036680), T2o, T2l);
			 T2J = VFMA(LDK(KP522616830), T2x, T2I);
			 T2y = VFMA(LDK(KP945422727), T2x, T2u);
			 T2K = VFNMS(LDK(KP690983005), T2J, T2u);
		    }
		    {
			 V T3e, T3d, T3k, T36, T2P, T2S;
			 {
			      V T2X, T30, T3b, T3c;
			      T2X = VFMA(LDK(KP845997307), T2W, T2V);
			      T30 = VFNMS(LDK(KP921078979), T2Z, T2Y);
			      T31 = VFNMS(LDK(KP906616052), T30, T2X);
			      T3e = VFMA(LDK(KP906616052), T30, T2X);
			      T3b = VFMA(LDK(KP845997307), T2O, T2N);
			      T3c = VFMA(LDK(KP982009705), T2R, T2Q);
			      T3d = VFMA(LDK(KP570584518), T3c, T3b);
			      T3k = VFNMS(LDK(KP669429328), T3b, T3c);
			 }
			 T3a = VFMA(LDK(KP262346850), T31, T2z);
			 T3l = VFNMS(LDK(KP669429328), T3e, T3k);
			 T3f = VFMA(LDK(KP618033988), T3e, T3d);
			 T2b = VFNMS(LDK(KP559016994), Ta, T9);
			 T35 = VFMA(LDK(KP921078979), T2Z, T2Y);
			 T34 = VFNMS(LDK(KP845997307), T2W, T2V);
			 T2P = VFNMS(LDK(KP845997307), T2O, T2N);
			 T2S = VFNMS(LDK(KP982009705), T2R, T2Q);
			 T2T = VFMA(LDK(KP923225144), T2S, T2P);
			 T36 = VFNMS(LDK(KP923225144), T2S, T2P);
			 T33 = VFNMS(LDK(KP237294955), T2T, T2b);
			 T3h = VFNMS(LDK(KP904508497), T36, T34);
			 T37 = VFNMS(LDK(KP997675361), T36, T35);
		    }
		    {
			 V T2r, T2A, T2U, T32;
			 T2r = VFMA(LDK(KP992114701), T2q, T2b);
			 T2A = VMUL(LDK(KP998026728), VFMA(LDK(KP952936919), T2z, T2y));
			 ST(&(xo[WS(os, 22)]), VFNMSI(T2A, T2r), ovs, &(xo[0]));
			 ST(&(xo[WS(os, 3)]), VFMAI(T2A, T2r), ovs, &(xo[WS(os, 1)]));
			 T2U = VFMA(LDK(KP949179823), T2T, T2b);
			 T32 = VMUL(LDK(KP998026728), VFNMS(LDK(KP952936919), T2z, T31));
			 ST(&(xo[WS(os, 23)]), VFNMSI(T32, T2U), ovs, &(xo[WS(os, 1)]));
			 ST(&(xo[WS(os, 2)]), VFMAI(T32, T2U), ovs, &(xo[0]));
		    }
		    {
			 V T3g, T39, T38, T3m, T3j, T3i;
			 T3g = VMUL(LDK(KP951056516), VFNMS(LDK(KP949179823), T3f, T3a));
			 T38 = VFMA(LDK(KP560319534), T37, T34);
			 T39 = VFNMS(LDK(KP949179823), T38, T33);
			 ST(&(xo[WS(os, 12)]), VFNMSI(T3g, T39), ovs, &(xo[0]));
			 ST(&(xo[WS(os, 13)]), VFMAI(T3g, T39), ovs, &(xo[WS(os, 1)]));
			 T3m = VMUL(LDK(KP951056516), VFNMS(LDK(KP876306680), T3l, T3a));
			 T3i = VFNMS(LDK(KP681693190), T3h, T35);
			 T3j = VFNMS(LDK(KP860541664), T3i, T33);
			 ST(&(xo[WS(os, 7)]), VFNMSI(T3m, T3j), ovs, &(xo[WS(os, 1)]));
			 ST(&(xo[WS(os, 18)]), VFMAI(T3m, T3j), ovs, &(xo[0]));
			 {
			      V T2G, T2M, T2F, T2L;
			      T2F = VFNMS(LDK(KP855719849), T2E, T2B);
			      T2G = VFMA(LDK(KP897376177), T2F, T2b);
			      T2L = VFMA(LDK(KP855719849), T2K, T2H);
			      T2M = VMUL(LDK(KP951056516), VFNMS(LDK(KP992114701), T2L, T2z));
			      ST(&(xo[WS(os, 8)]), VFMAI(T2M, T2G), ovs, &(xo[0]));
			      ST(&(xo[WS(os, 17)]), VFNMSI(T2M, T2G), ovs, &(xo[WS(os, 1)]));
			 }
		    }
	       }
	       {
		    V T1Z, T25, T1P, T22, T1X, T28, T1t, T1u, T1F, T1z, Tb, T1k, T1g, T1c, T1d;
		    V T1B, T1l;
		    T1Z = VFNMS(LDK(KP912575812), T1V, T1U);
		    T25 = VFNMS(LDK(KP912575812), T1N, T1M);
		    {
			 V T1L, T1O, T21, T20;
			 T1L = VFNMS(LDK(KP867381224), T1K, T1J);
			 T1O = VFMA(LDK(KP912575812), T1N, T1M);
			 T20 = VFNMS(LDK(KP958953096), T1S, T1R);
			 T21 = VFMA(LDK(KP447417479), T1O, T20);
			 T1P = VFNMS(LDK(KP809385824), T1O, T1L);
			 T22 = VFMA(LDK(KP690983005), T21, T1L);
		    }
		    {
			 V T1T, T1W, T27, T26;
			 T1T = VFMA(LDK(KP958953096), T1S, T1R);
			 T1W = VFMA(LDK(KP912575812), T1V, T1U);
			 T26 = VFMA(LDK(KP867381224), T1K, T1J);
			 T27 = VFMA(LDK(KP447417479), T1W, T26);
			 T1X = VFMA(LDK(KP894834959), T1W, T1T);
			 T28 = VFNMS(LDK(KP763932022), T27, T1T);
		    }
		    {
			 V T1y, T1x, T1E, T1h, TG, T1b;
			 {
			      V T1r, T1s, T1v, T1w;
			      T1r = VFNMS(LDK(KP916574801), T1f, T1e);
			      T1s = VFMA(LDK(KP831864738), T1j, T1i);
			      T1t = VFMA(LDK(KP904730450), T1s, T1r);
			      T1y = VFNMS(LDK(KP904730450), T1s, T1r);
			      T1v = VFNMS(LDK(KP829049696), TF, Tq);
			      T1w = VFNMS(LDK(KP831864738), T1a, TV);
			      T1x = VFMA(LDK(KP559154169), T1w, T1v);
			      T1E = VFNMS(LDK(KP683113946), T1v, T1w);
			 }
			 T1u = VFNMS(LDK(KP242145790), T1t, T1q);
			 T1F = VFMA(LDK(KP617882369), T1y, T1E);
			 T1z = VFMA(LDK(KP559016994), T1y, T1x);
			 Tb = VFMA(LDK(KP559016994), Ta, T9);
			 T1k = VFNMS(LDK(KP831864738), T1j, T1i);
			 T1g = VFMA(LDK(KP916574801), T1f, T1e);
			 TG = VFMA(LDK(KP829049696), TF, Tq);
			 T1b = VFMA(LDK(KP831864738), T1a, TV);
			 T1c = VFMA(LDK(KP904730450), T1b, TG);
			 T1h = VFNMS(LDK(KP904730450), T1b, TG);
			 T1d = VFNMS(LDK(KP242145790), T1c, Tb);
			 T1B = VADD(T1g, T1h);
			 T1l = VFNMS(LDK(KP904730450), T1k, T1h);
		    }
		    {
			 V T1H, T1I, T1Q, T1Y;
			 T1H = VFMA(LDK(KP968583161), T1c, Tb);
			 T1I = VMUL(LDK(KP951056516), VFMA(LDK(KP968583161), T1t, T1q));
			 ST(&(xo[WS(os, 1)]), VFMAI(T1I, T1H), ovs, &(xo[WS(os, 1)]));
			 ST(&(xo[WS(os, 24)]), VFNMSI(T1I, T1H), ovs, &(xo[0]));
			 T1Q = VFNMS(LDK(KP992114701), T1P, Tb);
			 T1Y = VMUL(LDK(KP951056516), VFNMS(LDK(KP992114701), T1X, T1q));
			 ST(&(xo[WS(os, 4)]), VFNMSI(T1Y, T1Q), ovs, &(xo[0]));
			 ST(&(xo[WS(os, 21)]), VFMAI(T1Y, T1Q), ovs, &(xo[WS(os, 1)]));
		    }
		    {
			 V T1A, T1n, T1m, T1G, T1D, T1C;
			 T1A = VMUL(LDK(KP951056516), VFMA(LDK(KP968583161), T1z, T1u));
			 T1m = VFNMS(LDK(KP618033988), T1l, T1g);
			 T1n = VFNMS(LDK(KP876091699), T1m, T1d);
			 ST(&(xo[WS(os, 6)]), VFMAI(T1A, T1n), ovs, &(xo[0]));
			 ST(&(xo[WS(os, 19)]), VFNMSI(T1A, T1n), ovs, &(xo[WS(os, 1)]));
			 T1G = VMUL(LDK(KP951056516), VFNMS(LDK(KP876306680), T1F, T1u));
			 T1C = VFNMS(LDK(KP683113946), T1B, T1k);
			 T1D = VFMA(LDK(KP792626838), T1C, T1d);
			 ST(&(xo[WS(os, 11)]), VFMAI(T1G, T1D), ovs, &(xo[WS(os, 1)]));
			 ST(&(xo[WS(os, 14)]), VFNMSI(T1G, T1D), ovs, &(xo[0]));
			 {
			      V T24, T2a, T23, T29;
			      T23 = VFNMS(LDK(KP999544308), T22, T1Z);
			      T24 = VFNMS(LDK(KP803003575), T23, Tb);
			      T29 = VFNMS(LDK(KP999544308), T28, T25);
			      T2a = VMUL(LDK(KP951056516), VFNMS(LDK(KP803003575), T29, T1q));
			      ST(&(xo[WS(os, 9)]), VFNMSI(T2a, T24), ovs, &(xo[WS(os, 1)]));
			      ST(&(xo[WS(os, 16)]), VFMAI(T2a, T24), ovs, &(xo[0]));
			 }
		    }
	       }
	  }
     }
     VLEAVE();
}

static const kdft_desc desc = { 25, XSIMD_STRING("n1bv_25"), { 43, 12, 181, 0 }, &GENUS, 0, 0, 0, 0 };

void XSIMD(codelet_n1bv_25) (planner *p) { X(kdft_register) (p, n1bv_25, &desc);
}

#else

/* Generated by: ../../../genfft/gen_notw_c.native -simd -compact -variables 4 -pipeline-latency 8 -sign 1 -n 25 -name n1bv_25 -include dft/simd/n1b.h */

/*
 * This function contains 224 FP additions, 140 FP multiplications,
 * (or, 147 additions, 63 multiplications, 77 fused multiply/add),
 * 115 stack variables, 40 constants, and 50 memory accesses
 */
#include "dft/simd/n1b.h"

static void n1bv_25(const R *ri, const R *ii, R *ro, R *io, stride is, stride os, INT v, INT ivs, INT ovs)
{
     DVK(KP809016994, +0.809016994374947424102293417182819058860154590);
     DVK(KP309016994, +0.309016994374947424102293417182819058860154590);
     DVK(KP637423989, +0.637423989748689710176712811676016195434917298);
     DVK(KP1_541026485, +1.541026485551578461606019272792355694543335344);
     DVK(KP125333233, +0.125333233564304245373118759816508793942918247);
     DVK(KP1_984229402, +1.984229402628955662099586085571557042906073418);
     DVK(KP770513242, +0.770513242775789230803009636396177847271667672);
     DVK(KP1_274847979, +1.274847979497379420353425623352032390869834596);
     DVK(KP992114701, +0.992114701314477831049793042785778521453036709);
     DVK(KP250666467, +0.250666467128608490746237519633017587885836494);
     DVK(KP851558583, +0.851558583130145297725004891488503407959946084);
     DVK(KP904827052, +0.904827052466019527713668647932697593970413911);
     DVK(KP425779291, +0.425779291565072648862502445744251703979973042);
     DVK(KP1_809654104, +1.809654104932039055427337295865395187940827822);
     DVK(KP497379774, +0.497379774329709576484567492012895936835134813);
     DVK(KP968583161, +0.968583161128631119490168375464735813836012403);
     DVK(KP248689887, +0.248689887164854788242283746006447968417567406);
     DVK(KP1_937166322, +1.937166322257262238980336750929471627672024806);
     DVK(KP1_688655851, +1.688655851004030157097116127933363010763318483);
     DVK(KP535826794, +0.535826794978996618271308767867639978063575346);
     DVK(KP481753674, +0.481753674101715274987191502872129653528542010);
     DVK(KP1_752613360, +1.752613360087727174616231807844125166798128477);
     DVK(KP844327925, +0.844327925502015078548558063966681505381659241);
     DVK(KP1_071653589, +1.071653589957993236542617535735279956127150691);
     DVK(KP963507348, +0.963507348203430549974383005744259307057084020);
     DVK(KP876306680, +0.876306680043863587308115903922062583399064238);
     DVK(KP1_996053456, +1.996053456856543123904673613726901106673810439);
     DVK(KP062790519, +0.062790519529313376076178224565631133122484832);
     DVK(KP684547105, +0.684547105928688673732283357621209269889519233);
     DVK(KP1_457937254, +1.457937254842823046293460638110518222745143328);
     DVK(KP998026728, +0.998026728428271561952336806863450553336905220);
     DVK(KP125581039, +0.125581039058626752152356449131262266244969664);
     DVK(KP1_369094211, +1.369094211857377347464566715242418539779038465);
     DVK(KP728968627, +0.728968627421411523146730319055259111372571664);
     DVK(KP293892626, +0.293892626146236564584352977319536384298826219);
     DVK(KP475528258, +0.475528258147576786058219666689691071702849317);
     DVK(KP250000000, +0.250000000000000000000000000000000000000000000);
     DVK(KP951056516, +0.951056516295153572116439333379382143405698634);
     DVK(KP587785252, +0.587785252292473129168705954639072768597652438);
     DVK(KP559016994, +0.559016994374947424102293417182819058860154590);
     {
	  INT i;
	  const R *xi;
	  R *xo;
	  xi = ii;
	  xo = io;
	  for (i = v; i > 0; i = i - VL, xi = xi + (VL * ivs), xo = xo + (VL * ovs), MAKE_VOLATILE_STRIDE(50, is), MAKE_VOLATILE_STRIDE(50, os)) {
	       V T1b, T2o, T1v, T1e, T2W, T2P, T2Q, T2U, T11, T27, TY, T26, T12, T2f, T1j;
	       V T28, TM, T24, TJ, T23, TN, T2e, T1i, T25, T2M, T2N, T2T, Tm, T1W, Tt;
	       V T1X, Tu, T20, Tw, T1Y, T7, T1U, Te, T1T, Tf, T21, Tx, T1V;
	       {
		    V T1c, T1a, T1t, T17, T1r;
		    T1c = LD(&(xi[0]), ivs, &(xi[0]));
		    {
			 V T18, T19, T15, T16;
			 T18 = LD(&(xi[WS(is, 10)]), ivs, &(xi[0]));
			 T19 = LD(&(xi[WS(is, 15)]), ivs, &(xi[WS(is, 1)]));
			 T1a = VADD(T18, T19);
			 T1t = VSUB(T18, T19);
			 T15 = LD(&(xi[WS(is, 5)]), ivs, &(xi[WS(is, 1)]));
			 T16 = LD(&(xi[WS(is, 20)]), ivs, &(xi[0]));
			 T17 = VADD(T15, T16);
			 T1r = VSUB(T15, T16);
		    }
		    {
			 V T2n, T1s, T1u, T1d;
			 T1b = VMUL(LDK(KP559016994), VSUB(T17, T1a));
			 T2n = VMUL(LDK(KP587785252), T1r);
			 T2o = VFNMS(LDK(KP951056516), T1t, T2n);
			 T1s = VMUL(LDK(KP951056516), T1r);
			 T1u = VMUL(LDK(KP587785252), T1t);
			 T1v = VADD(T1s, T1u);
			 T1d = VADD(T17, T1a);
			 T1e = VFNMS(LDK(KP250000000), T1d, T1c);
			 T2W = VADD(T1c, T1d);
		    }
	       }
	       {
		    V TG, TV, TF, TL, TH, TK, TU, T10, TW, TZ, TX, TI;
		    TG = LD(&(xi[WS(is, 2)]), ivs, &(xi[0]));
		    TV = LD(&(xi[WS(is, 3)]), ivs, &(xi[WS(is, 1)]));
		    {
			 V Tz, TA, TB, TC, TD, TE;
			 Tz = LD(&(xi[WS(is, 7)]), ivs, &(xi[WS(is, 1)]));
			 TA = LD(&(xi[WS(is, 22)]), ivs, &(xi[0]));
			 TB = VADD(Tz, TA);
			 TC = LD(&(xi[WS(is, 12)]), ivs, &(xi[0]));
			 TD = LD(&(xi[WS(is, 17)]), ivs, &(xi[WS(is, 1)]));
			 TE = VADD(TC, TD);
			 TF = VMUL(LDK(KP559016994), VSUB(TB, TE));
			 TL = VSUB(TC, TD);
			 TH = VADD(TB, TE);
			 TK = VSUB(Tz, TA);
		    }
		    {
			 V TO, TP, TQ, TR, TS, TT;
			 TO = LD(&(xi[WS(is, 8)]), ivs, &(xi[0]));
			 TP = LD(&(xi[WS(is, 23)]), ivs, &(xi[WS(is, 1)]));
			 TQ = VADD(TO, TP);
			 TR = LD(&(xi[WS(is, 13)]), ivs, &(xi[WS(is, 1)]));
			 TS = LD(&(xi[WS(is, 18)]), ivs, &(xi[0]));
			 TT = VADD(TR, TS);
			 TU = VMUL(LDK(KP559016994), VSUB(TQ, TT));
			 T10 = VSUB(TR, TS);
			 TW = VADD(TQ, TT);
			 TZ = VSUB(TO, TP);
		    }
		    T2P = VADD(TG, TH);
		    T2Q = VADD(TV, TW);
		    T2U = VADD(T2P, T2Q);
		    T11 = VFMA(LDK(KP475528258), TZ, VMUL(LDK(KP293892626), T10));
		    T27 = VFNMS(LDK(KP475528258), T10, VMUL(LDK(KP293892626), TZ));
		    TX = VFNMS(LDK(KP250000000), TW, TV);
		    TY = VADD(TU, TX);
		    T26 = VSUB(TX, TU);
		    T12 = VFNMS(LDK(KP1_369094211), T11, VMUL(LDK(KP728968627), TY));
		    T2f = VFMA(LDK(KP125581039), T27, VMUL(LDK(KP998026728), T26));
		    T1j = VFMA(LDK(KP1_457937254), T11, VMUL(LDK(KP684547105), TY));
		    T28 = VFNMS(LDK(KP1_996053456), T27, VMUL(LDK(KP062790519), T26));
		    TM = VFMA(LDK(KP475528258), TK, VMUL(LDK(KP293892626), TL));
		    T24 = VFNMS(LDK(KP475528258), TL, VMUL(LDK(KP293892626), TK));
		    TI = VFNMS(LDK(KP250000000), TH, TG);
		    TJ = VADD(TF, TI);
		    T23 = VSUB(TI, TF);
		    TN = VFNMS(LDK(KP963507348), TM, VMUL(LDK(KP876306680), TJ));
		    T2e = VFMA(LDK(KP1_071653589), T24, VMUL(LDK(KP844327925), T23));
		    T1i = VFMA(LDK(KP1_752613360), TM, VMUL(LDK(KP481753674), TJ));
		    T25 = VFNMS(LDK(KP1_688655851), T24, VMUL(LDK(KP535826794), T23));
	       }
	       {
		    V Tb, Tq, T3, Tc, T6, Ta, Ti, Tr, Tl, Tp, Ts, Td;
		    Tb = LD(&(xi[WS(is, 4)]), ivs, &(xi[0]));
		    Tq = LD(&(xi[WS(is, 1)]), ivs, &(xi[WS(is, 1)]));
		    {
			 V T1, T2, T8, T4, T5, T9;
			 T1 = LD(&(xi[WS(is, 9)]), ivs, &(xi[WS(is, 1)]));
			 T2 = LD(&(xi[WS(is, 24)]), ivs, &(xi[0]));
			 T8 = VADD(T1, T2);
			 T4 = LD(&(xi[WS(is, 14)]), ivs, &(xi[0]));
			 T5 = LD(&(xi[WS(is, 19)]), ivs, &(xi[WS(is, 1)]));
			 T9 = VADD(T4, T5);
			 T3 = VSUB(T1, T2);
			 Tc = VADD(T8, T9);
			 T6 = VSUB(T4, T5);
			 Ta = VMUL(LDK(KP559016994), VSUB(T8, T9));
		    }
		    {
			 V Tg, Th, Tn, Tj, Tk, To;
			 Tg = LD(&(xi[WS(is, 6)]), ivs, &(xi[0]));
			 Th = LD(&(xi[WS(is, 21)]), ivs, &(xi[WS(is, 1)]));
			 Tn = VADD(Tg, Th);
			 Tj = LD(&(xi[WS(is, 11)]), ivs, &(xi[WS(is, 1)]));
			 Tk = LD(&(xi[WS(is, 16)]), ivs, &(xi[0]));
			 To = VADD(Tj, Tk);
			 Ti = VSUB(Tg, Th);
			 Tr = VADD(Tn, To);
			 Tl = VSUB(Tj, Tk);
			 Tp = VMUL(LDK(KP559016994), VSUB(Tn, To));
		    }
		    T2M = VADD(Tq, Tr);
		    T2N = VADD(Tb, Tc);
		    T2T = VADD(T2M, T2N);
		    Tm = VFMA(LDK(KP475528258), Ti, VMUL(LDK(KP293892626), Tl));
		    T1W = VFNMS(LDK(KP475528258), Tl, VMUL(LDK(KP293892626), Ti));
		    Ts = VFNMS(LDK(KP250000000), Tr, Tq);
		    Tt = VADD(Tp, Ts);
		    T1X = VSUB(Ts, Tp);
		    Tu = VFMA(LDK(KP1_937166322), Tm, VMUL(LDK(KP248689887), Tt));
		    T20 = VFNMS(LDK(KP963507348), T1W, VMUL(LDK(KP876306680), T1X));
		    Tw = VFNMS(LDK(KP497379774), Tm, VMUL(LDK(KP968583161), Tt));
		    T1Y = VFMA(LDK(KP1_752613360), T1W, VMUL(LDK(KP481753674), T1X));
		    T7 = VFMA(LDK(KP475528258), T3, VMUL(LDK(KP293892626), T6));
		    T1U = VFNMS(LDK(KP475528258), T6, VMUL(LDK(KP293892626), T3));
		    Td = VFNMS(LDK(KP250000000), Tc, Tb);
		    Te = VADD(Ta, Td);
		    T1T = VSUB(Td, Ta);
		    Tf = VFMA(LDK(KP1_071653589), T7, VMUL(LDK(KP844327925), Te));
		    T21 = VFMA(LDK(KP1_809654104), T1U, VMUL(LDK(KP425779291), T1T));
		    Tx = VFNMS(LDK(KP1_688655851), T7, VMUL(LDK(KP535826794), Te));
		    T1V = VFNMS(LDK(KP851558583), T1U, VMUL(LDK(KP904827052), T1T));
	       }
	       {
		    V T2V, T2X, T2Y, T2S, T30, T2O, T2R, T31, T2Z;
		    T2V = VMUL(LDK(KP559016994), VSUB(T2T, T2U));
		    T2X = VADD(T2T, T2U);
		    T2Y = VFNMS(LDK(KP250000000), T2X, T2W);
		    T2O = VSUB(T2M, T2N);
		    T2R = VSUB(T2P, T2Q);
		    T2S = VBYI(VFMA(LDK(KP951056516), T2O, VMUL(LDK(KP587785252), T2R)));
		    T30 = VBYI(VFNMS(LDK(KP951056516), T2R, VMUL(LDK(KP587785252), T2O)));
		    ST(&(xo[0]), VADD(T2W, T2X), ovs, &(xo[0]));
		    T31 = VSUB(T2Y, T2V);
		    ST(&(xo[WS(os, 10)]), VADD(T30, T31), ovs, &(xo[0]));
		    ST(&(xo[WS(os, 15)]), VSUB(T31, T30), ovs, &(xo[WS(os, 1)]));
		    T2Z = VADD(T2V, T2Y);
		    ST(&(xo[WS(os, 5)]), VADD(T2S, T2Z), ovs, &(xo[WS(os, 1)]));
		    ST(&(xo[WS(os, 20)]), VSUB(T2Z, T2S), ovs, &(xo[0]));
	       }
	       {
		    V T1Z, T2i, T2j, T2g, T2w, T2x, T2y, T2G, T2H, T2I, T2D, T2E, T2F, T2z, T2A;
		    V T2B, T2p, T2m, T2q, T2b, T2c, T2a, T2d, T2h, T2r;
		    T1Z = VSUB(T1V, T1Y);
		    T2i = VADD(T20, T21);
		    T2j = VSUB(T25, T28);
		    T2g = VSUB(T2e, T2f);
		    T2w = VFMA(LDK(KP1_369094211), T1W, VMUL(LDK(KP728968627), T1X));
		    T2x = VFNMS(LDK(KP992114701), T1T, VMUL(LDK(KP250666467), T1U));
		    T2y = VADD(T2w, T2x);
		    T2G = VFNMS(LDK(KP125581039), T24, VMUL(LDK(KP998026728), T23));
		    T2H = VFMA(LDK(KP1_274847979), T27, VMUL(LDK(KP770513242), T26));
		    T2I = VADD(T2G, T2H);
		    T2D = VFNMS(LDK(KP1_457937254), T1W, VMUL(LDK(KP684547105), T1X));
		    T2E = VFMA(LDK(KP1_984229402), T1U, VMUL(LDK(KP125333233), T1T));
		    T2F = VADD(T2D, T2E);
		    T2z = VFMA(LDK(KP1_996053456), T24, VMUL(LDK(KP062790519), T23));
		    T2A = VFNMS(LDK(KP637423989), T26, VMUL(LDK(KP1_541026485), T27));
		    T2B = VADD(T2z, T2A);
		    {
			 V T2k, T2l, T22, T29;
			 T2k = VADD(T1Y, T1V);
			 T2l = VADD(T2e, T2f);
			 T2p = VADD(T2k, T2l);
			 T2m = VMUL(LDK(KP559016994), VSUB(T2k, T2l));
			 T2q = VFNMS(LDK(KP250000000), T2p, T2o);
			 T2b = VSUB(T1e, T1b);
			 T22 = VSUB(T20, T21);
			 T29 = VADD(T25, T28);
			 T2c = VADD(T22, T29);
			 T2a = VMUL(LDK(KP559016994), VSUB(T22, T29));
			 T2d = VFNMS(LDK(KP250000000), T2c, T2b);
		    }
		    {
			 V T2u, T2v, T2C, T2J;
			 T2u = VADD(T2b, T2c);
			 T2v = VBYI(VADD(T2o, T2p));
			 ST(&(xo[WS(os, 23)]), VSUB(T2u, T2v), ovs, &(xo[WS(os, 1)]));
			 ST(&(xo[WS(os, 2)]), VADD(T2u, T2v), ovs, &(xo[0]));
			 T2C = VADD(T2b, VADD(T2y, T2B));
			 T2J = VBYI(VSUB(VADD(T2F, T2I), T2o));
			 ST(&(xo[WS(os, 22)]), VSUB(T2C, T2J), ovs, &(xo[0]));
			 ST(&(xo[WS(os, 3)]), VADD(T2C, T2J), ovs, &(xo[WS(os, 1)]));
		    }
		    T2h = VFMA(LDK(KP951056516), T1Z, VADD(T2a, VFNMS(LDK(KP587785252), T2g, T2d)));
		    T2r = VBYI(VADD(VFMA(LDK(KP951056516), T2i, VMUL(LDK(KP587785252), T2j)), VADD(T2m, T2q)));
		    ST(&(xo[WS(os, 18)]), VSUB(T2h, T2r), ovs, &(xo[0]));
		    ST(&(xo[WS(os, 7)]), VADD(T2h, T2r), ovs, &(xo[WS(os, 1)]));
		    {
			 V T2s, T2t, T2K, T2L;
			 T2s = VFMA(LDK(KP587785252), T1Z, VFMA(LDK(KP951056516), T2g, VSUB(T2d, T2a)));
			 T2t = VBYI(VADD(VFNMS(LDK(KP951056516), T2j, VMUL(LDK(KP587785252), T2i)), VSUB(T2q, T2m)));
			 ST(&(xo[WS(os, 13)]), VSUB(T2s, T2t), ovs, &(xo[WS(os, 1)]));
			 ST(&(xo[WS(os, 12)]), VADD(T2s, T2t), ovs, &(xo[0]));
			 T2K = VBYI(VSUB(VFMA(LDK(KP951056516), VSUB(T2w, T2x), VFMA(LDK(KP309016994), T2F, VFNMS(LDK(KP809016994), T2I, VMUL(LDK(KP587785252), VSUB(T2z, T2A))))), T2o));
			 T2L = VFMA(LDK(KP309016994), T2y, VFMA(LDK(KP951056516), VSUB(T2E, T2D), VFMA(LDK(KP587785252), VSUB(T2H, T2G), VFNMS(LDK(KP809016994), T2B, T2b))));
			 ST(&(xo[WS(os, 8)]), VADD(T2K, T2L), ovs, &(xo[0]));
			 ST(&(xo[WS(os, 17)]), VSUB(T2L, T2K), ovs, &(xo[WS(os, 1)]));
		    }
	       }
	       {
		    V Tv, T1m, T1n, T1k, T1D, T1E, T1F, T1N, T1O, T1P, T1K, T1L, T1M, T1G, T1H;
		    V T1I, T1w, T1q, T1x, T1f, T1g, T14, T1h, T1l, T1y;
		    Tv = VSUB(Tf, Tu);
		    T1m = VSUB(Tw, Tx);
		    T1n = VSUB(TN, T12);
		    T1k = VSUB(T1i, T1j);
		    T1D = VFMA(LDK(KP1_688655851), Tm, VMUL(LDK(KP535826794), Tt));
		    T1E = VFMA(LDK(KP1_541026485), T7, VMUL(LDK(KP637423989), Te));
		    T1F = VSUB(T1D, T1E);
		    T1N = VFMA(LDK(KP851558583), TM, VMUL(LDK(KP904827052), TJ));
		    T1O = VFMA(LDK(KP1_984229402), T11, VMUL(LDK(KP125333233), TY));
		    T1P = VADD(T1N, T1O);
		    T1K = VFNMS(LDK(KP1_071653589), Tm, VMUL(LDK(KP844327925), Tt));
		    T1L = VFNMS(LDK(KP770513242), Te, VMUL(LDK(KP1_274847979), T7));
		    T1M = VADD(T1K, T1L);
		    T1G = VFNMS(LDK(KP425779291), TJ, VMUL(LDK(KP1_809654104), TM));
		    T1H = VFNMS(LDK(KP992114701), TY, VMUL(LDK(KP250666467), T11));
		    T1I = VADD(T1G, T1H);
		    {
			 V T1o, T1p, Ty, T13;
			 T1o = VADD(Tu, Tf);
			 T1p = VADD(T1i, T1j);
			 T1w = VADD(T1o, T1p);
			 T1q = VMUL(LDK(KP559016994), VSUB(T1o, T1p));
			 T1x = VFNMS(LDK(KP250000000), T1w, T1v);
			 T1f = VADD(T1b, T1e);
			 Ty = VADD(Tw, Tx);
			 T13 = VADD(TN, T12);
			 T1g = VADD(Ty, T13);
			 T14 = VMUL(LDK(KP559016994), VSUB(Ty, T13));
			 T1h = VFNMS(LDK(KP250000000), T1g, T1f);
		    }
		    {
			 V T1B, T1C, T1J, T1Q;
			 T1B = VADD(T1f, T1g);
			 T1C = VBYI(VADD(T1v, T1w));
			 ST(&(xo[WS(os, 24)]), VSUB(T1B, T1C), ovs, &(xo[0]));
			 ST(&(xo[WS(os, 1)]), VADD(T1B, T1C), ovs, &(xo[WS(os, 1)]));
			 T1J = VADD(T1f, VADD(T1F, T1I));
			 T1Q = VBYI(VSUB(VADD(T1M, T1P), T1v));
			 ST(&(xo[WS(os, 21)]), VSUB(T1J, T1Q), ovs, &(xo[WS(os, 1)]));
			 ST(&(xo[WS(os, 4)]), VADD(T1J, T1Q), ovs, &(xo[0]));
		    }
		    T1l = VFMA(LDK(KP951056516), Tv, VADD(T14, VFNMS(LDK(KP587785252), T1k, T1h)));
		    T1y = VBYI(VADD(VFMA(LDK(KP951056516), T1m, VMUL(LDK(KP587785252), T1n)), VADD(T1q, T1x)));
		    ST(&(xo[WS(os, 19)]), VSUB(T1l, T1y), ovs, &(xo[WS(os, 1)]));
		    ST(&(xo[WS(os, 6)]), VADD(T1l, T1y), ovs, &(xo[0]));
		    {
			 V T1z, T1A, T1R, T1S;
			 T1z = VFMA(LDK(KP587785252), Tv, VFMA(LDK(KP951056516), T1k, VSUB(T1h, T14)));
			 T1A = VBYI(VADD(VFNMS(LDK(KP951056516), T1n, VMUL(LDK(KP587785252), T1m)), VSUB(T1x, T1q)));
			 ST(&(xo[WS(os, 14)]), VSUB(T1z, T1A), ovs, &(xo[0]));
			 ST(&(xo[WS(os, 11)]), VADD(T1z, T1A), ovs, &(xo[WS(os, 1)]));
			 T1R = VBYI(VSUB(VFMA(LDK(KP309016994), T1M, VFMA(LDK(KP951056516), VADD(T1D, T1E), VFNMS(LDK(KP809016994), T1P, VMUL(LDK(KP587785252), VSUB(T1G, T1H))))), T1v));
			 T1S = VFMA(LDK(KP951056516), VSUB(T1L, T1K), VFMA(LDK(KP309016994), T1F, VFMA(LDK(KP587785252), VSUB(T1O, T1N), VFNMS(LDK(KP809016994), T1I, T1f))));
			 ST(&(xo[WS(os, 9)]), VADD(T1R, T1S), ovs, &(xo[WS(os, 1)]));
			 ST(&(xo[WS(os, 16)]), VSUB(T1S, T1R), ovs, &(xo[0]));
		    }
	       }
	  }
     }
     VLEAVE();
}

static const kdft_desc desc = { 25, XSIMD_STRING("n1bv_25"), { 147, 63, 77, 0 }, &GENUS, 0, 0, 0, 0 };

void XSIMD(codelet_n1bv_25) (planner *p) { X(kdft_register) (p, n1bv_25, &desc);
}

#endif
