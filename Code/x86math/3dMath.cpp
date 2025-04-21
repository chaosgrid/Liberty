/* ---------- headers */

#include "3dMath.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

I3DMathEngine* __stdcall __MATH_ENGINE(void)
{
	DA3DMATHDESC math_info;
	I3DMathEngine* math_engine;
	DACOM_Acquire()->CreateInstance(&math_info, (void**)&math_engine);
	return math_engine;
}
I3DMathEngine& MATH_ENGINE = *__MATH_ENGINE();

/* ---------- inline code */

//
//X86MATH_DEC SINGLE InvSqrt(const SINGLE x)
//{
//	SINGLE result;
//	MATH_ENGINE.InvSqrt(result, x);
//	return result;
//}
//
//X86MATH_DEC SINGLE Sqrt(const SINGLE x)
//{
//	SINGLE result;
//	MATH_ENGINE.Sqrt(result, x);
//	return result;
//}
