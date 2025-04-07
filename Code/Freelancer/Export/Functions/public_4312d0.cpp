#include "Freelancer-PCH.h"

PROC_DECLARE(0x4312d0, internal_4312d0, public_4312d0);
extern "C" NAKED register_t __cdecl internal_4312d0()
{
    __asm
    {
        fld dword ptr ds : [public_5c7474]
        ret 
        UNREACHABLE_TRAP(0x4312d0)
    }
}
