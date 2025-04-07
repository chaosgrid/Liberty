#include "Freelancer-PCH.h"

PROC_DECLARE(0x43d5a0, internal_43d5a0, public_43d5a0);
extern "C" NAKED register_t __cdecl internal_43d5a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cb4c4]
        mov dword ptr ds : [public_668824], eax
        ret 
        UNREACHABLE_TRAP(0x43d5a0)
    }
}
