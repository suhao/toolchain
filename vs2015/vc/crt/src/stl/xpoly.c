/* _Poly function */
#include "xmath.h"
_C_STD_BEGIN

double _Poly(double x, const double *tab, int n)
	{	/* compute polynomial */
	double y;

	for (y = *tab; 0 <= --n; )
		y = y * x + *++tab;
	return (y);
	}
_C_STD_END

/*
 * Copyright (c) by P.J. Plauger. All rights reserved.
 * Consult your license regarding permissions and restrictions.
V6.50:0009 */
