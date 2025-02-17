/* _FDint function -- IEEE 754 version */
#include "xmath.h"
_C_STD_BEGIN
 #if !defined(MRTDLL)
_C_LIB_DECL
 #endif /* defined(MRTDLL) */

short _FDint(float *px, short xexp)
	{	/* test and drop (scaled) fraction bits */
	_Fval *ps = (_Fval *)(char *)px;
	unsigned short frac;
	short xchar = (ps->_Sh[_F0] & _FMASK) >> _FOFF;

	if (xchar == _FMAX)
		return ((ps->_Sh[_F0] & _FFRAC) == 0 && ps->_Sh[_F1] == 0
			? _INFCODE : _NANCODE);
	else if ((ps->_Sh[_F0] & ~_FSIGN) == 0 && ps->_Sh[_F1] == 0)
		return (0);
	xchar = (_FBIAS + 16 + _FOFF + 1) - xchar - xexp;
	if (xchar <= 0)
		return (0);	/* no frac bits to drop */
	else if ((16 + _FOFF + 1) <= xchar)
		{	/* all frac bits */
		ps->_Sh[_F0] &= _FSIGN;
		ps->_Sh[_F1] = 0;
		return (_FINITE);	/* report on frac, not result */
		}
	else
		{	/* strip out frac bits */
		static const unsigned short mask[] = {
			0x0000, 0x0001, 0x0003, 0x0007,
			0x000f, 0x001f, 0x003f, 0x007f,
			0x00ff, 0x01ff, 0x03ff, 0x07ff,
			0x0fff, 0x1fff, 0x3fff, 0x7fff};
		static const size_t sub[] = {_F1, _F0};

		frac = mask[xchar & 0xf];
		xchar >>= 4;
		frac &= ps->_Sh[sub[xchar]];
		ps->_Sh[sub[xchar]] ^= frac;
		if (0 < xchar)
			frac |= ps->_Sh[_F1], ps->_Sh[_F1] = 0;
		return (frac != 0 ? _FINITE : 0);
		}
	}
 #if !defined(MRTDLL)
_END_C_LIB_DECL
 #endif /* !defined(MRTDLL) */
_C_STD_END

/*
 * Copyright (c) by P.J. Plauger. All rights reserved.
 * Consult your license regarding permissions and restrictions.
V6.50:0009 */
