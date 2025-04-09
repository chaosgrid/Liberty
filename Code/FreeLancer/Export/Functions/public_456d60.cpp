#include "Freelancer-PCH.h"

PROC_DECLARE(0x456d60, internal_456d60, public_456d60);
extern "C" NAKED register_t __cdecl internal_456d60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ce118]
        mov dword ptr ds : [public_66d30c], eax
        ret 
        UNREACHABLE_TRAP(0x456d60)
    }
}
