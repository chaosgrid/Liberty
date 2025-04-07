#include "Common-PCH.h"

PROC_DECLARE(0x629cd20, internal_629cd20, public_629cd20);
extern "C" NAKED register_t __cdecl internal_629cd20()
{
    __asm
    {
        dec dword ptr ds : [ecx+0xC]
        ret 4
        UNREACHABLE_TRAP(0x629cd20)
    }
}
