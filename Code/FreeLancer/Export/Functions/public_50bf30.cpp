#include "Freelancer-PCH.h"

PROC_DECLARE(0x50bf30, internal_50bf30, public_50bf30);
extern "C" NAKED register_t __cdecl internal_50bf30()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x70]
        ret 
        UNREACHABLE_TRAP(0x50bf30)
    }
}
