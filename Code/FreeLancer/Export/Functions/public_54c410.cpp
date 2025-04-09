#include "Freelancer-PCH.h"

PROC_DECLARE(0x54c410, internal_54c410, public_54c410);
extern "C" NAKED register_t __cdecl internal_54c410()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e0954]
        mov dword ptr ds : [public_679854], eax
        ret 
        UNREACHABLE_TRAP(0x54c410)
    }
}
