#include "Freelancer-PCH.h"

PROC_DECLARE(0x453d50, internal_453d50, public_453d50);
extern "C" NAKED register_t __cdecl internal_453d50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cdae0]
        mov dword ptr ds : [public_66d29c], eax
        ret 
        UNREACHABLE_TRAP(0x453d50)
    }
}
