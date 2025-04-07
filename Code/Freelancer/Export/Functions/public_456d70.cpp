#include "Freelancer-PCH.h"

PROC_DECLARE(0x456d70, internal_456d70, public_456d70);
extern "C" NAKED register_t __cdecl internal_456d70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ce11c]
        mov dword ptr ds : [public_66d308], eax
        ret 
        UNREACHABLE_TRAP(0x456d70)
    }
}
