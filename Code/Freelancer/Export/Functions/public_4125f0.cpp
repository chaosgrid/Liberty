#include "Freelancer-PCH.h"

PROC_DECLARE(0x4125f0, internal_4125f0, public_4125f0);
extern "C" NAKED register_t __cdecl internal_4125f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c8bb4]
        mov dword ptr ds : [public_616688], eax
        ret 
        UNREACHABLE_TRAP(0x4125f0)
    }
}
