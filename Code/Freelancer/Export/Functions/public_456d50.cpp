#include "Freelancer-PCH.h"

PROC_DECLARE(0x456d50, internal_456d50, public_456d50);
extern "C" NAKED register_t __cdecl internal_456d50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ce118]
        mov dword ptr ds : [public_66d310], eax
        ret 
        UNREACHABLE_TRAP(0x456d50)
    }
}
