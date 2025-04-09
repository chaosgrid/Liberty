#include "Freelancer-PCH.h"

PROC_DECLARE(0x51e900, internal_51e900, public_51e900);
extern "C" NAKED register_t __cdecl internal_51e900()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc2b8]
        mov dword ptr ds : [public_6752d0], eax
        ret 
        UNREACHABLE_TRAP(0x51e900)
    }
}
