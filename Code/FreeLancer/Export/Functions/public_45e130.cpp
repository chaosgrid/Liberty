#include "Freelancer-PCH.h"

PROC_DECLARE(0x45e130, internal_45e130, public_45e130);
extern "C" NAKED register_t __cdecl internal_45e130()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d995]
        and eax, 0xFF52EAF5
        or eax, 0x52EAF5
        mov byte ptr ds : [public_66d994], 8
        mov dword ptr ds : [public_66d995], eax
        ret 
        UNREACHABLE_TRAP(0x45e130)
    }
}
