// fft_normal.c
// Generated by decompiling fft.hex
// using Reko decompiler version 0.9.4.0.

#include "fft.h"

// 0115: Register word16 fn0115(Register out (ptr16 Eq_n) gp14Out)
// Called from:
//      fn011B
word16 fn0115(struct Eq_n & gp14Out)
{
	struct Eq_n * gp14_n;
	word16 gp0_n = fn011B(0x00, gp1, gp3, gp4, gp14, out gp14_n);
	gp14Out = gp14_n;
	return gp0_n;
}

// 011B: Register cui16 fn011B(Register cui16 gp0, Register word16 gp1, Register word16 gp3, Register word16 gp4, Register (ptr16 Eq_n) gp14, Register out Eq_n gp14Out)
// Called from:
//      fn0100
//      fn0115
cui16 fn011B(cui16 gp0, word16 gp1, word16 gp3, word16 gp4, struct Eq_n * gp14, union Eq_n & gp14Out)
{
	do
	{
		ci16 gp1_n = -gp1;
		if ((__shift_arithmetic(gp3, gp1_n) & 0x01) == 0x00)
		{
			while (true)
			{
				ci16 gp3_n = *(ci16 *) 0x8A40;
				cui16 gp0_n = *(cui16 *) 39489;
				if (gp3_n > 0x0F)
					break;
				gp14->w0001 = gp3_n;
				fn0115(out gp14);
			}
			gp14Out = <invalid>;
			return gp0_n;
		}
		gp0 |= __shift_logical(gp4, 0x03 - gp1_n);
		gp1 = gp1_n + 0x01;
	} while (gp1_n <= 0x02);
	gp14Out.u0 = <invalid>;
	return gp0;
}

// 014E: void fn014E()
void fn014E()
{
	struct Eq_n * gp14_n = fp - 0x02;
	uint16 gp9_n = 0x00;
	do
	{
		ui16 gp8_n = gp9_n * 0x03;
		real48 gp5_gp6_gp7_n = g_aFFFF8030[gp9_n];
		real48 gp2_gp3_gp4_n = g_aFFFF8060[gp9_n];
		gp14_n[1] = (struct Eq_n) SEQ(gp8_n, gp9_n);
		Eq_n gp5_gp6_gp7_n = gp5_gp6_gp7_n * gp5_gp6_gp7_n + gp2_gp3_gp4_n * gp2_gp3_gp4_n;
		word16 gp7_n = (word16) gp5_gp6_gp7_n;
		gp14_n = fn0245(gp5_gp6_gp7_n, gp7_n, gp7_n);
		real48 gp0_gp1_gp2_n = <invalid>;
		*((word16) gp14_n[1].w0002 + 0x0000808E) = (struct Eq_n) gp0_gp1_gp2_n;
		ci16 gp9_n = gp14_n[2];
		gp9_n = gp9_n + 0x01;
	} while (gp9_n <= 0x0E);
}

// 0226: void fn0226(Register cui16 gp1, Register (ptr16 (ptr16 Eq_n)) gp3)
// Called from:
//      fn0245
void fn0226(cui16 gp1, struct Eq_n ** gp3)
{
	struct Eq_n * gp5_n = *gp3;
	cu16 gp4_n = gp1 & 0xFF;
	if (Test(NE,(gp1 & 0xFF & 0x0100) == 0x00))
		gp4_n = gp1 & 0xFF | 0xFF00;
	if (Test(NE,(gp4_n & 0x8000) == 0x00))
		++gp4_n;
	gp5_n->w0001 = (gp4_n >> 0x01 & 0xFF) + 0x01 & 0xFF;
	gp5_n->w0002 = 0x00;
	gp5_n->w0000 = 0x4000;
}

// 0245: Register ptr16 fn0245(Sequence Eq_n gp0_gp1, Register word16 gp2, Register word16 gp7)
// Called from:
//      fn014E
ptr16 fn0245(Eq_n gp0_gp1, word16 gp2, word16 gp7)
{
	cui16 gp1 = (word16) gp0_gp1;
	if (gp0_gp1 < 0x00)
		return fp - 0x03;
	fn0226(gp1, (struct Eq_n **) 0x01);
	while (true)
		;
}

// 0273: void fn0273()
void fn0273()
{
}

// 02E1: void fn02E1()
void fn02E1()
{
}

// 02FA: void fn02FA()
void fn02FA()
{
}

// 0311: Register ptr16 fn0311(Register ci16 gp1, Stack cui16 wArg1A)
// Called from:
//      fn037C
//      fn03A0
ptr16 fn0311(ci16 gp1, cui16 wArg1A)
{
	if (gp1 >= 0x00)
		return fp;
	struct Eq_n * gp2_n = wArg1A + 0x07 & ~0x07;
	while (true)
	{
		Eq_n gp1_gp2_n = (uint32) (gp1 - gp2_n);
		do
			;
		while (gp1_gp2_n > 0x07);
		gp2_n = gp2_n->ptr032C;
	}
}

// 037C: void fn037C(Sequence int32 gp0_gp1, Sequence int32 gp12_gp13, Register word16 gp2, Register cui16 gp3, Register (ptr16 Eq_n) gp11, Stack cui16 wArg18)
void fn037C(int32 gp0_gp1, int32 gp12_gp13, word16 gp2, cui16 gp3, struct Eq_n * gp11, cui16 wArg18)
{
	cui16 gp1 = (word16) gp0_gp1;
	struct Eq_n * gp0 = SLICE(gp0_gp1, word16, 16);
	struct Eq_n * gp12 = SLICE(gp12_gp13, word16, 16);
	int32 gp1_gp2_n = SEQ(gp1, gp2);
	if (gp0_gp1 >= 0x00)
		fn03E2(gp1_gp2_n, gp0, gp3, gp1, gp2, gp11);
	else
	{
		real48 gp2_gp3_gp4_n = g_rFFFF8054;
		real48 gp5_gp6_gp7_n = (SEQ((word32) gp2_gp3_gp4_n, (word16) gp2_gp3_gp4_n) - SEQ(gp0_gp1, gp2)) *48 *((char *) (&g_rFFFF8054) + 3);
		Eq_n gp0_gp1_n = (int32) gp5_gp6_gp7_n;
		if (gp5_gp6_gp7_n - (real48) gp0_gp1_n >= 0.0)
		{
			Eq_n gp0_gp1_n = gp0_gp1_n + gp12->r0020;
			fn03F1(gp0_gp1_n, gp12_gp13, gp2, gp11);
		}
		else
		{
			word32 gp0_gp1_n = gp0_gp1_n + Mem0[0x805D<p16>:word32];
			if (gp0_gp1 >= 0x00)
				fn03F7(gp0_gp1_n, gp12_gp13, gp1, gp11);
			else
				fn0311(SLICE(gp0_gp1_n + Mem0[0x805F<p16>:word32], word16, 0), wArg18);
		}
	}
}

// 03A0: void fn03A0(Sequence int32 gp0_gp1, Sequence int32 gp12_gp13, Register word16 gp2, Register word16 gp8, Register cui16 gp9, Register word16 gp10, Register (ptr16 Eq_n) gp11, Stack cui16 wArg18)
void fn03A0(int32 gp0_gp1, int32 gp12_gp13, word16 gp2, word16 gp8, cui16 gp9, word16 gp10, struct Eq_n * gp11, cui16 wArg18)
{
	Eq_n gp1_gp2_n = SEQ((word16) gp0_gp1, gp2);
	if (gp0_gp1 >= 0x00)
		fn0404(gp1_gp2_n, gp12_gp13, gp9, gp10, gp11);
	else
	{
		real48 gp2_gp3_gp4_n = g_rFFFF8061 - SEQ(gp0_gp1, gp2);
		real48 gp5_gp6_gp7_n = SEQ((word32) gp2_gp3_gp4_n, (word16) gp2_gp3_gp4_n) *48 *((char *) (&g_rFFFF8061) + 3);
		int32 gp0_gp1_n = (int32) gp5_gp6_gp7_n;
		real48 gp5_gp6_gp7_n = gp5_gp6_gp7_n - (real48) gp0_gp1_n;
		word16 gp7_n = (word16) gp5_gp6_gp7_n;
		word16 gp5_n = SLICE(gp5_gp6_gp7_n, word16, 32);
		if (gp5_gp6_gp7_n >= 0.0)
			fn0412(gp12_gp13, SEQ(gp7_n, gp8), gp5_n, gp9, gp10, gp11);
		else
			fn0311((word16) (*((char *) &g_dwFFFF806A + 2) + (gp0_gp1_n + g_dwFFFF806A) / 39491), wArg18);
	}
}

// 03BF: void fn03BF(Register (ptr16 Eq_n) gp0, Register int16 gp1, Register cui16 gp3, Stack word16 wArgC7)
void fn03BF(struct Eq_n * gp0, int16 gp1, cui16 gp3, word16 wArgC7)
{
	gp0->t0000.u1 = 0x2020;
	gp0[1] = (struct Eq_n) 0x2020;
	gp0[2] = (struct Eq_n) 0x2020;
	gp0[3] = (struct Eq_n) 0x00;
	cui16 gp13_n = 0x00;
	while (true)
	{
		word16 gp10_n = 0x20;
		int16 gp1_n = gp1;
		if (gp1 < 0x00)
		{
			gp10_n = 0x2D;
			gp1_n = -gp1;
		}
		gp1 = gp1_n / 0x0A;
		gp13_n |= 0x30;
		if (true)
			break;
		gp0[2] = (struct Eq_n) SEQ(gp0[3], (byte) gp13_n);
	}
	gp0[2] = (struct Eq_n) SEQ((byte) gp13_n, gp0[2]);
	fn03E2(SEQ(gp1, gp1 % 0x0A), gp0, gp3, 0x01, gp10_n, gp0 - 0x01);
}

// 03E2: void fn03E2(Sequence int32 gp1_gp2, Register (ptr16 Eq_n) gp0, Register cui16 gp3, Register cui16 gp9, Register word16 gp10, Register (ptr16 Eq_n) gp11)
// Called from:
//      fn037C
//      fn03BF
void fn03E2(int32 gp1_gp2, struct Eq_n * gp0, cui16 gp3, cui16 gp9, word16 gp10, struct Eq_n * gp11)
{
	if (PZN)
		fn0432(gp1_gp2, gp0, gp3);
	else if ((gp9 & 0x8000) != 0x00)
		gp11[2] = (struct Eq_n) SEQ((byte) gp10, gp11[2]);
	else
		gp11[2] = (struct Eq_n) SEQ(gp11[3], (byte) gp10);
}

// 03ED: void fn03ED(Sequence Eq_n gp1_gp2, Sequence int32 gp12_gp13, Register (ptr16 Eq_n) gp0)
void fn03ED(Eq_n gp1_gp2, int32 gp12_gp13, struct Eq_n * gp0)
{
	fn03F1(gp1_gp2, gp12_gp13, 0x2020, gp0);
}

// 03F1: void fn03F1(Sequence Eq_n gp1_gp2, Sequence int32 gp12_gp13, Register word16 gp10, Register (ptr16 Eq_n) gp11)
// Called from:
//      fn037C
//      fn03ED
void fn03F1(Eq_n gp1_gp2, int32 gp12_gp13, word16 gp10, struct Eq_n * gp11)
{
	fn03F2(gp1_gp2, gp12_gp13, 0x06, gp10, gp11);
}

// 03F2: void fn03F2(Sequence Eq_n gp1_gp2, Sequence int32 gp12_gp13, Register cui16 gp9, Register word16 gp10, Register (ptr16 Eq_n) gp11)
// Called from:
//      fn037C
//      fn03F1
void fn03F2(Eq_n gp1_gp2, int32 gp12_gp13, cui16 gp9, word16 gp10, struct Eq_n * gp11)
{
	do
	{
		gp11->w0000 = gp10;
		++gp11;
		--gp9;
	} while (gp9 != 0x00);
	fn03F7(gp1_gp2, gp12_gp13, gp9, gp11);
}

// 03F7: void fn03F7(Sequence Eq_n gp1_gp2, Sequence int32 gp12_gp13, Register cui16 gp9, Register (ptr16 Eq_n) gp11)
// Called from:
//      fn037C
void fn03F7(Eq_n gp1_gp2, int32 gp12_gp13, cui16 gp9, struct Eq_n * gp11)
{
	ci16 gp1 = SLICE(gp1_gp2, word16, 16);
	word16 gp2 = (word16) gp1_gp2;
	gp11->wFFFFFFFF = SEQ(gp11[2], (byte) gp9);
	if (gp1 >= 0x00)
		fn0407(gp1_gp2, gp12_gp13, gp9, 0x20, gp11 - 0x01);
	else if (gp1 != 0x8000)
		fn0406(gp1_gp2, gp12_gp13, gp9, 0x2D, gp11 - 0x01);
	else if (gp2 != 0x00)
		fn0406(gp1_gp2, gp12_gp13, gp9, 0x2D, gp11 - 0x01);
	else
		fn0405(gp12_gp13, gp1, gp2, gp9, 0x2D, gp11 - 0x01);
}

// 0404: void fn0404(Sequence Eq_n gp1_gp2, Sequence int32 gp12_gp13, Register cui16 gp9, Register word16 gp10, Register (ptr16 Eq_n) gp11)
// Called from:
//      fn03A0
void fn0404(Eq_n gp1_gp2, int32 gp12_gp13, cui16 gp9, word16 gp10, struct Eq_n * gp11)
{
	ci16 gp1 = SLICE(gp1_gp2, word16, 16);
	word16 gp2 = (word16) gp1_gp2;
	if (Z)
		fn0406(gp1_gp2, gp12_gp13, gp9, gp10, gp11);
	else
		fn0405(gp12_gp13, gp1, gp2, gp9, gp10, gp11);
}

// 0405: void fn0405(Sequence int32 gp12_gp13, Register ci16 gp1, Register word16 gp2, Register cui16 gp9, Register word16 gp10, Register (ptr16 Eq_n) gp11)
// Called from:
//      fn037C
//      fn0404
void fn0405(int32 gp12_gp13, ci16 gp1, word16 gp2, cui16 gp9, word16 gp10, struct Eq_n * gp11)
{
	fn0406(SEQ(gp1, gp2 + 0x01), gp12_gp13, gp9, gp10, gp11);
}

// 0406: void fn0406(Sequence Eq_n gp1_gp2, Sequence int32 gp12_gp13, Register cui16 gp9, Register word16 gp10, Register (ptr16 Eq_n) gp11)
// Called from:
//      fn037C
//      fn0404
void fn0406(Eq_n gp1_gp2, int32 gp12_gp13, cui16 gp9, word16 gp10, struct Eq_n * gp11)
{
	Eq_n gp1_gp2_n = -gp1_gp2;
	fn0407(gp1_gp2_n, gp12_gp13, gp9, gp10, gp11);
}

// 0407: void fn0407(Sequence Eq_n gp1_gp2, Sequence int32 gp12_gp13, Register cui16 gp9, Register word16 gp10, Register (ptr16 Eq_n) gp11)
// Called from:
//      fn037C
void fn0407(Eq_n gp1_gp2, int32 gp12_gp13, cui16 gp9, word16 gp10, struct Eq_n * gp11)
{
	word16 gp5_n = (word16) (gp1_gp2 - (gp1_gp2 / 0x0A) * 0x0A);
	if (Test(EQ,(gp9 + 0x01 & 0x8000) == 0x00))
		fn0417(gp12_gp13, 0x0A, gp5_n + 0x30, gp9 + 0x01, gp10, gp11);
	else
		fn0413(gp12_gp13, 0x0A, gp5_n + 0x30, gp9 + 0x01, gp10, gp11);
}

// 0412: void fn0412(Sequence int32 gp12_gp13, Sequence int32 gp7_gp8, Register word16 gp5, Register cui16 gp9, Register word16 gp10, Register (ptr16 Eq_n) gp11)
// Called from:
//      fn03A0
void fn0412(int32 gp12_gp13, int32 gp7_gp8, word16 gp5, cui16 gp9, word16 gp10, struct Eq_n * gp11)
{
	if (Z)
		fn0417(gp12_gp13, gp7_gp8, gp5, gp9, gp10, gp11);
	else
		fn0413(gp12_gp13, gp7_gp8, gp5, gp9, gp10, gp11);
}

// 0413: void fn0413(Sequence int32 gp12_gp13, Sequence int32 gp7_gp8, Register word16 gp5, Register cui16 gp9, Register word16 gp10, Register (ptr16 Eq_n) gp11)
// Called from:
//      fn037C
//      fn0412
void fn0413(int32 gp12_gp13, int32 gp7_gp8, word16 gp5, cui16 gp9, word16 gp10, struct Eq_n * gp11)
{
	gp11->t0000 = SEQ((byte) gp5, gp11->t0000);
	fn0417(gp12_gp13, gp7_gp8, gp5, gp9, gp10, gp11 - 0x01);
}

// 0417: void fn0417(Sequence int32 gp12_gp13, Sequence int32 gp7_gp8, Register word16 gp5, Register cui16 gp9, Register word16 gp10, Register (ptr16 Eq_n) gp11)
// Called from:
//      fn037C
//      fn0412
void fn0417(int32 gp12_gp13, int32 gp7_gp8, word16 gp5, cui16 gp9, word16 gp10, struct Eq_n * gp11)
{
	gp11->t0000 = SEQ(gp11->b0001, (byte) gp5);
	if (gp12_gp13 / gp7_gp8 != 0x00)
		fn046A();
	else if (Test(EQ,(gp9 + 0x01 & 0x8000) == 0x00))
		gp11->t0000 = SEQ(gp11->b0001, (byte) gp10);
	else
		gp11->t0000 = SEQ((byte) gp10, gp11->t0000);
}

// 0426: Register (ptr16 Eq_n) fn0426(Sequence word32 gp1_gp2, Register (ptr16 Eq_n) gp0)
// Called from:
//      fn04F6
struct Eq_n * fn0426(word32 gp1_gp2, struct Eq_n * gp0)
{
	cui16 gp2 = (word16) gp1_gp2;
	struct Eq_n * gp1 = SLICE(gp1_gp2, word16, 16);
	gp0[7] = (struct Eq_n) 0x00;
	fn043E(0x00, 0x06, gp0, gp1, gp2, 0x00);
	return gp1;
}

// 0432: void fn0432(Sequence int32 gp1_gp2, Register (ptr16 Eq_n) gp0, Register cui16 gp3)
// Called from:
//      fn037C
void fn0432(int32 gp1_gp2, struct Eq_n * gp0, cui16 gp3)
{
	cui16 gp2 = (word16) gp1_gp2;
	struct Eq_n * gp1 = SLICE(gp1_gp2, word16, 16);
	gp0[0x0A] = (struct Eq_n) 0x00;
	fn043E(0x00, 11, gp0, gp1, gp2, gp3);
}

// 043E: void fn043E(Register cui16 gp0, Register word16 gp1, Register (ptr16 Eq_n) gp11, Register (ptr16 Eq_n) gp12, Register cui16 gp13, Register cui16 gp14)
// Called from:
//      fn037C
//      fn0426
void fn043E(cui16 gp0, word16 gp1, struct Eq_n * gp11, struct Eq_n * gp12, cui16 gp13, cui16 gp14)
{
	while (true)
	{
		real48 gp12_gp13_gp14_n;
		word16 gp0_n;
		if (Test(NE,(gp12 & 0x01) == 0x00))
		{
			if (Test(EQ,(gp12 & 0x02) == 0x00))
			{
				gp0_n = 0x2D20;
				gp12_gp13_gp14_n = SEQ(gp12, gp13, gp14) * g_r057F;
				goto l0458;
			}
		}
		else
		{
			gp0 = gp0 | gp12 | gp13 | gp14;
			if (gp0 == 0x00 || Test(NE,(gp12 & 0x02) == 0x00))
			{
				gp0_n = 0x2B20;
				gp12_gp13_gp14_n = SEQ(gp12, gp13, gp14);
l0458:
				gp11->t0000.u1 = gp0_n;
				int16 gp2_n = 0x00;
				real48 gp12_gp13_gp14_n = gp12_gp13_gp14_n;
				if (Test(NE,(SLICE(gp12_gp13_gp14_n, word16, 16) & 0x0100) == 0x00))
				{
					fn046A();
					return;
				}
				else
				{
					for (; gp12_gp13_gp14_n >= g_r0579; gp12_gp13_gp14_n /= g_r0579)
						++gp2_n;
					if (gp1 != 0x06)
						gp11[8] = (struct Eq_n) 17707;
					else
						gp11[5] = (struct Eq_n) 17707;
					int16 gp2_n = gp2_n / 0x0A;
					Eq_n gp2_n = __xbr(gp2_n) | gp2_n % 0x0A;
					if (gp1 != 0x06)
						gp11[9] = (struct Eq_n) (gp2_n | 0x3030);
					else
						gp11[6] = (struct Eq_n) (gp2_n | 0x3030);
					int32 gp2_gp3_n = (int32) gp12_gp13_gp14_n;
					gp11->t0000.u1 = SEQ(gp11[1], (byte) ((word16) gp2_gp3_n + 0x30));
					gp11[1] = (struct Eq_n) SEQ(0x2E, gp11[1]);
					cui16 gp7_n = 0x00;
					real48 gp12_gp13_gp14_n = gp12_gp13_gp14_n - (real48) gp2_gp3_n;
					do
					{
						real48 gp12_gp13_gp14_n = gp12_gp13_gp14_n * g_r0579;
						int32 gp2_gp3_n = (int32) SEQ((word32) gp12_gp13_gp14_n, (word16) gp12_gp13_gp14_n);
						word16 gp3_n = (word16) gp2_gp3_n;
						gp12_gp13_gp14_n = gp12_gp13_gp14_n - (real48) gp2_gp3_n;
						++gp7_n;
						if ((gp7_n & 0x8000) != 0x00)
							gp11[1] = (struct Eq_n) SEQ((byte) (gp3_n + 0x30), gp11[1]);
						else
						{
							gp11[1] = (struct Eq_n) SEQ(gp11[2], (byte) (gp3_n + 0x30));
							++gp11;
						}
						--gp1;
					} while (gp1 != 0x00);
					gp11[1] = (struct Eq_n) 0x2020;
					return;
				}
			}
		}
		gp12 = (struct Eq_n *) 0x07;
		if (gp1 != 0x06)
			gp12 = (struct Eq_n *) 0x0A;
		__mov(gp11, 1410);
	}
}

// 0467: void fn0467(Sequence real48 gp12_gp13_gp14, Register cui16 gp0)
// Called from:
//      fn046A
void fn0467(real48 gp12_gp13_gp14, cui16 gp0)
{
	if (gp12_gp13_gp14 >= g_r057C)
		fn04AC(gp0);
	else
		fn046A();
}

// 046A: void fn046A()
// Called from:
//      fn037C
//      fn043E
//      fn0467
void fn046A()
{
	fn0467(SEQ(gp12, gp13, gp14), gp0);
}

// 04AC: void fn04AC(Register cui16 gp0)
// Called from:
//      fn043E
//      fn04AF
//      fn04C0
void fn04AC(cui16 gp0)
{
	__console_output(gp0);
}

// 04AF: void fn04AF(Register (ptr16 byte) gp0)
// Called from:
//      fn04F6
void fn04AF(byte * gp0)
{
	byte * gp11_n = gp0;
	cui16 gp0_n = 0x00;
	while (true)
	{
		cui16 gp0_n = SEQ(*gp11_n, (byte) gp0_n);
		if (gp0_n == 0x00)
			break;
		fn04AC(gp0_n);
		gp0_n = SEQ(*gp11_n, *gp11_n);
		if (gp0_n == 0x00)
			return;
		fn04AC(gp0_n);
		++gp11_n;
	}
}

// 04C0: void fn04C0(Register uint16 gp0)
// Called from:
//      fn04CE
void fn04C0(uint16 gp0)
{
	if ((gp0 & 0x0F) >= 0x09)
	{
		cui16 gp0_n = (gp0 & 0x0F) + 55;
		fn04AC(gp0_n);
	}
	else
	{
		cui16 gp0_n = (gp0 & 0x0F) + 0x30;
		fn04AC(gp0_n);
	}
}

// 04CE: void fn04CE(Register uint16 gp0)
void fn04CE(uint16 gp0)
{
	fn04C0(gp0 >> 0x04);
	fn04C0(gp0);
}

// 04F6: void fn04F6(Sequence word32 gp0_gp1)
void fn04F6(word32 gp0_gp1)
{
	fn04AF(fn0426(gp0_gp1, &g_tFFFF806E));
}

real48 g_r0579 = ;
real48 g_r057C = ;
real48 g_r057F = ;
