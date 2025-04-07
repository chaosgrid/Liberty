#include "Freelancer-PCH.h"

PROC_DECLARE(0x513400, internal_513400, public_513400);
extern "C" NAKED register_t __cdecl internal_513400()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5db750]
        mov dword ptr ds : [public_6751f4], eax
        ret 
        UNREACHABLE_TRAP(0x513400)
    }
}
