#include <Core.h>

namespace ErrorHandler
{
	COMMON_DEC void activate(char const*, int(__cdecl*)(char const*, char const*, bool))
	{
		mangled_assert("?activate@ErrorHandler@@YAXPBDP6AH00_N@Z@Z");
		debug_point;
	}
}
