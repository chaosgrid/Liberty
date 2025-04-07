#include "Freelancer-PCH.h"

PROC_DECLARE(0x51b2a0, internal_51b2a0, public_51b2a0);
extern "C" NAKED register_t __cdecl internal_51b2a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dbf50]
        mov dword ptr ds : [public_67523c], eax
        ret 
        UNREACHABLE_TRAP(0x51b2a0)
    }
}
