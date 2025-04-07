#include "Freelancer-PCH.h"

PROC_DECLARE(0x44cea0, internal_44cea0, public_44cea0);
extern "C" NAKED register_t __cdecl internal_44cea0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cbfdc]
        mov dword ptr ds : [public_668ac4], eax
        ret 
        UNREACHABLE_TRAP(0x44cea0)
    }
}
