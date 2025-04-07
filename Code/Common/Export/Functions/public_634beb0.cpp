#include "Common-PCH.h"

PROC_DECLARE(0x634beb0, internal_634beb0, public_634beb0);
extern "C" NAKED register_t __cdecl internal_634beb0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x18]
        ret 
        UNREACHABLE_TRAP(0x634beb0)
    }
}
