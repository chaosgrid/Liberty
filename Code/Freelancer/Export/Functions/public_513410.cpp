#include "Freelancer-PCH.h"

PROC_DECLARE(0x513410, internal_513410, public_513410);
extern "C" NAKED register_t __cdecl internal_513410()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5db750]
        mov dword ptr ds : [public_6751f0], eax
        ret 
        UNREACHABLE_TRAP(0x513410)
    }
}
