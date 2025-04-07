#include "Freelancer-PCH.h"

PROC_DECLARE(0x4d6280, internal_4d6280, public_4d6280);
extern "C" NAKED register_t __cdecl internal_4d6280()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d7ffc]
        mov dword ptr ds : [public_674a04], eax
        ret 
        UNREACHABLE_TRAP(0x4d6280)
    }
}
