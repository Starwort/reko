// hello_m68k_CRTDOS.c
// Generated by decompiling hello_m68k.exe
// using Reko decompiler version 0.9.4.0.

#include "hello_m68k.h"

// 00003340: void fn00003340(Register (ptr32 Eq_n) a5, Stack word16 wArg06)
void fn00003340(struct Eq_n * a5, word16 wArg06)
{
	a5->dwFFFFF940 = (int32) wArg06;
	int32 d2_n = 0;
	struct Eq_n * d0_n = &a5->dwFFFFF940 + 111;
	do
	{
		if (wArg06 - d0_n->w0000 == 0x00)
		{
			a5->tFFFFF93C.u1 = (uint32) a5->aFFFFFAFE[d2_n].w0000;
			return;
		}
		++d0_n;
		++d2_n;
	} while (d0_n - (a5 + -0x044C) <u 0x00);
	a5->tFFFFF93C.u0 = 22;
}

