/* _LCosh function */
#include "xmath.h"
_C_STD_BEGIN

_CRTIMP2_PURE long double __CLRCALL_PURE_OR_CDECL _LCosh(long double x, long double y)
	{	/* compute y * cosh(x), |y| <= 1 */
	switch (_LDtest(&x))
		{	/* test for special codes */
	case _NANCODE:
	case _INFCODE:
		return (x);
	case 0:
		return (y);
	default:	/* finite */
		if (y == 0.0L)
			return (y);
		if (x < 0.0)
			x = -x;
		if (x < _LXbig)
			{	/* worth adding in exp(-x) */
			_LExp(&x, 1.0L, -1);
			return (y * (x + 0.25L / x));
			}
		switch (_LExp(&x, y, -1))
			{	/* report over/underflow */
		case 0:
			_Feraise(_FE_UNDERFLOW);
			break;
		case _INFCODE:
			_Feraise(_FE_OVERFLOW);
			}
		return (x);
		}
	}
_C_STD_END

/*
 * Copyright (c) by P.J. Plauger. All rights reserved.
 * Consult your license regarding permissions and restrictions.
V6.50:0009 */
