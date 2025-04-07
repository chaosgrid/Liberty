#include "Common-PCH.h"

PROC_DECLARE(0x634b6d0, internal_634b6d0, public_634b6d0);
extern "C" NAKED register_t __cdecl internal_634b6d0()
{
    __asm
    {
        fld dword ptr ds : [public_63a53d0]
        ret 
        UNREACHABLE_TRAP(0x634b6d0)
    }
}
