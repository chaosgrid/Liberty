#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b6280, internal_5b6280, public_5b6280);
extern "C" NAKED register_t __cdecl internal_5b6280()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e715c]
        mov dword ptr ds : [public_67ed4c], eax
        ret 
        UNREACHABLE_TRAP(0x5b6280)
    }
}
