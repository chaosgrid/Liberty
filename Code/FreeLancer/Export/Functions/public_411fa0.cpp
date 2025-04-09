#include "Freelancer-PCH.h"

PROC_DECLARE(0x411fa0, internal_411fa0, public_411fa0);
extern "C" NAKED register_t __cdecl internal_411fa0()
{
    __asm
    {
        fld dword ptr ds : [public_61650c]
        fdivr qword ptr ds : [public_5c89b8]
        fstp dword ptr ds : [public_616508]
        ret 
        UNREACHABLE_TRAP(0x411fa0)
    }
}
