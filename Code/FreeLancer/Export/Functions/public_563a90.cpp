#include "Freelancer-PCH.h"

PROC_DECLARE(0x563a90, internal_563a90, public_563a90);
extern "C" NAKED register_t __cdecl internal_563a90()
{
    __asm
    {
        mov dword ptr ds : [public_67a48c], 0
        ret 
        UNREACHABLE_TRAP(0x563a90)
    }
}
