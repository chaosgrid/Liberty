#include "Freelancer-PCH.h"

PROC_DECLARE(0x453d60, internal_453d60, public_453d60);
extern "C" NAKED register_t __cdecl internal_453d60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cdae4]
        mov dword ptr ds : [public_66d298], eax
        ret 
        UNREACHABLE_TRAP(0x453d60)
    }
}
