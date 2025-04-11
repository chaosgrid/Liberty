#include "FileSys.h"

void __fastcall switchchar_convert(char* string)
{
	while ((string = strchr(string, '/')) != 0)
	{
		*string++ = '\\';
	}
}
