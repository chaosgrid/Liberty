#include "Freelancer-PCH.h"

PROC_DECLARE(0x513430, internal_513430, public_513430);
extern "C" NAKED register_t __cdecl internal_513430()
{
    __asm
    {
        mov dword ptr ds : [public_6751cc], offset public_5db760
        ret 
        UNREACHABLE_TRAP(0x513430)
    }
}
