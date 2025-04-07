#include "Freelancer-PCH.h"

PROC_DECLARE(0x429030, internal_429030, public_429030);
extern "C" NAKED register_t __cdecl internal_429030()
{
    __asm
    {
        fld dword ptr ds : [public_667c58]
        fchs 
        fstp dword ptr ds : [public_667a20]
        ret 
        UNREACHABLE_TRAP(0x429030)
    }
}
