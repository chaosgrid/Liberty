#include "core.h"

#include <stdio.h>

CORE_DEC TempStr::TempStr()
{
	buffer[0] = '\0';
}

CORE_DEC TempStr::TempStr(const char* fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	set(fmt, args);
	va_end(args);
}

CORE_DEC void TempStr::set(const char* fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	set(fmt, args);
	va_end(args);
}

CORE_DEC void TempStr::set(const char* fmt, va_list args)
{
	vsnprintf(buffer, TempStrSize, fmt, args);
}

CORE_DEC TempStr::operator char* (void)
{
	return buffer;
}

CORE_DEC TempStr::operator const char* (void) const
{
	return buffer;
}
