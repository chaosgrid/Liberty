#include "Common-PCH.h"

PROC_DECLARE(0x628c7a0, internal_628c7a0, public_628c7a0);
extern "C" NAKED register_t __cdecl internal_628c7a0()
{
    __asm
    {
        mov dword ptr ds : [ecx+0xC], 0
        ret 4
        UNREACHABLE_TRAP(0x628c7a0)
    }
}
