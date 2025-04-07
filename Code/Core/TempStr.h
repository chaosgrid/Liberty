#pragma once

//--------------------------------------------------------------------------//
//                              TempStr.h                                   //
//              COPYRIGHT (C) 1997-1998 BY DIGITAL ANVIL, INC.              //
//--------------------------------------------------------------------------//

// Design Notes:
//     This header provides a simple class for building temporary strings.
// It is used by the libraries for building trace output.
//
// WARNING: The string buffer is of limited size. Beware of buffer overflows.

// Constants
const int TempStrSize = 8 * 1024;

// Class and structure definitions

class TempStr
{
protected:
	char buffer[TempStrSize];

public:
	CORE_DEC TempStr();
	CORE_DEC TempStr(const char* fmt, ...);
	CORE_DEC void set(const char* fmt, ...);
#ifdef _VA_LIST_DEFINED
	CORE_DEC void set(const char* fmt, va_list args);
#endif
	CORE_DEC operator char* (void);
	CORE_DEC operator const char* (void) const;
};

// This macro guarantees that the cast occurs when constructing a temp string in a variable
// argument list.
#define TEMPSTR (char*) TempStr
