#include "Freelancer-PCH.h"

PROC_DECLARE(0x453d40, internal_453d40, public_453d40);
extern "C" NAKED register_t __cdecl internal_453d40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cdae0]
        mov dword ptr ds : [public_66d2a0], eax
        ret 
        UNREACHABLE_TRAP(0x453d40)
    }
}
