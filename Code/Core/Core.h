#pragma once

#include <stdarg.h>
#include <stdlib.h>
#include <Windows.h>

#define DA_XSTR(s) DA_STR(s)
#define DA_STR(s) #s

#ifndef __max
#define __max(a,b)            (((a) > (b)) ? (a) : (b))
#endif

#ifndef __min
#define __min(a,b)            (((a) < (b)) ? (a) : (b))
#endif

#define debug_point { static int _debug_point; (void)(_debug_point++); } 
#define NOT_IMPLEMENTED \
	_Pragma("clang diagnostic push") \
	_Pragma("clang diagnostic ignored \"-Wexceptions\"") \
	__debugbreak(); throw 0; \
	_Pragma("clang diagnostic pop")
#define unused(expression) debug_point; (void)(expression)

#include <Core/fatal.h>
#include <Core/typedefs.h>
#include <Core/genresult.h>
#include <Core/libver.h>
#include <Core/TempStr.h>
#include <Core/stddat.h>
#include <Core/MangledAssert.h>
