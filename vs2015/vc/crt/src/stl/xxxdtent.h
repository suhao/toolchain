/* xxxdtent.h -- common _[FL]Dtento functionality */
#include "xmath.h"
_C_STD_BEGIN
 #if !defined(MRTDLL)
_C_LIB_DECL
 #endif /* defined(MRTDLL) */

		/* macros */
#define ACSIZE	4	/* size of extended-precision accumulators */
#define BIAS	(ACSIZE * (FBITS / 2))	/* avoid denorms for finite values */

#define FRAC_BITS_2	(FRAC_BITS * FRAC_BITS)

 #if 113 <= FBITS
  #define FRAC_BITS	72057594037927936.0L		/* 2^56 */

static const FTYPE tenth[] =
	{	/* 113-bit: 0.100000 */
	(FTYPE)(FLIT(7205759403792793.0) / FRAC_BITS),
	(FTYPE)(FLIT(43234556422756761.0) / FRAC_BITS_2),
	(FTYPE)(FLIT(43234556422756761.0) / FRAC_BITS_2 / FRAC_BITS),
	(FTYPE)(FLIT(43234556422756761.0) / FRAC_BITS_2 / FRAC_BITS_2),
	};

 #elif 64 <= FBITS
  #define FRAC_BITS	4294967296.0L		/* 2^32 */

static const FTYPE tenth[] =
	{	/* 64-bit: 0.100000 */
	(FTYPE)(FLIT(429496729.0) / FRAC_BITS),
	(FTYPE)(FLIT(2576980377.0) / FRAC_BITS_2),
	(FTYPE)(FLIT(2576980377.0) / FRAC_BITS_2 / FRAC_BITS),
	(FTYPE)(FLIT(2576980377.0) / FRAC_BITS_2 / FRAC_BITS_2),
	};

 #elif 53 <= FBITS
  #define FRAC_BITS	67108864.0L		/* 2^26 */

static const FTYPE tenth[] =
	{	/* 53-bit: 0.100000 */
	(FTYPE)(FLIT(6710886.0) / FRAC_BITS),
	(FTYPE)(FLIT(26843545.0) / FRAC_BITS_2),
	(FTYPE)(FLIT(40265318.0) / FRAC_BITS_2 / FRAC_BITS),
	(FTYPE)(FLIT(26843545.0) / FRAC_BITS_2 / FRAC_BITS_2),
	};

 #elif 24 <= FBITS
  #define FRAC_BITS	4096.0L		/* 2^12 */

static const FTYPE tenth[] =
	{	/* 24-bit: 0.100000 */
	(FTYPE)(FLIT(409.0) / FRAC_BITS),
	(FTYPE)(FLIT(2457.0) / FRAC_BITS_2),
	(FTYPE)(FLIT(2457.0) / FRAC_BITS_2 / FRAC_BITS),
	(FTYPE)(FLIT(2457.0) / FRAC_BITS_2 / FRAC_BITS_2),
	};

 #elif 11 <= FBITS
  #define FRAC_BITS	32.0		/* 2^5 */

static const FTYPE tenth[] =
	{	/* 11-bit: 0.100000 */
	FTYPE(3.0 / FRAC_BITS),
	FTYPE(6.0 / FRAC_BITS_2),
	FTYPE(13.0 / FRAC_BITS_2 / FRAC_BITS),
	FTYPE(25.0 / FRAC_BITS_2 / FRAC_BITS_2),	/* 19, 6, 12, 25... */
	};

 #else /* FBITS */
  #error _Dtento has too much precision
 #endif /* FBITS */

FTYPE FNAME(Dtento)(FTYPE *xpx, long n, int *perr)
	{	/* compute *px * 10**n */
	FTYPE xpf[ACSIZE];
	FTYPE x;

	if (n == 0 || xpx[0] == FLIT(0.0))
		return (FNAME(Xp_getw)(xpx, ACSIZE));

	if (0 < n)
		FNAME(Xp_setw)(xpf, ACSIZE, 10.0);	/* factor = 10 */
	else
		{	/* scale down */
		n = -n;
		FNAME(Xp_movx)(xpf, ACSIZE, tenth);	/* factor = 1/10 */
		FNAME(Xp_ldexpx)(xpx, ACSIZE, BIAS);	/* scale up x */
		}

	for (; ; )
		{	/* multiply as needed by 10^(2^n) */
		FTYPE xpt[ACSIZE * 2];
		FTYPE xpw[ACSIZE];

		if (n & 1)
			FNAME(Xp_mulx)(xpx, ACSIZE, xpf, ACSIZE, xpt);
		n >>= 1;
		if (n == 0)
			break;
		FNAME(Xp_movx)(xpw, ACSIZE, xpf);
		FNAME(Xp_mulx)(xpf, ACSIZE, xpw, ACSIZE, xpt);	/* square 10^n */
		}

	if (xpf[0] < FLIT(1.0))
		FNAME(Xp_ldexpx)(xpx, ACSIZE, -BIAS);	/* scale down result */
	x = FNAME(Xp_getw)(xpx, ACSIZE);
	if (x == FLIT(0.0) || x == FCONST(Inf) || x == -FCONST(Inf))
		{	/* report error and set errno */
		errno = ERANGE;
		if (perr != 0)
			*perr |= 1;
		}
	return (x);
	}
 #if !defined(MRTDLL)
_END_C_LIB_DECL
 #endif /* !defined(MRTDLL) */
_C_STD_END

/*
 * Copyright (c) by P.J. Plauger. All rights reserved.
 * Consult your license regarding permissions and restrictions.
V6.50:0009 */
