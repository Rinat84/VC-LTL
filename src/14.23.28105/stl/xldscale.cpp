// _LDscale function -- IEEE 754 version
#include "xmath.h"

_EXTERN_C_UNLESS_PURE

short _LDscale(long double* px, long lexp) { // scale *px by 2^lexp with checking -- 64-bit
    return _Dscale((double*) px, lexp);
}

_END_EXTERN_C_UNLESS_PURE

/*
 * Copyright (c) by P.J. Plauger. All rights reserved.
 * Consult your license regarding permissions and restrictions.
V6.50:0009 */
