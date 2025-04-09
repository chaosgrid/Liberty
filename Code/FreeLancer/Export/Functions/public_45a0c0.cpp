#include "Freelancer-PCH.h"

PROC_DECLARE(0x45a0c0, internal_45a0c0, public_45a0c0);
extern "C" NAKED register_t __cdecl internal_45a0c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ce7ec]
        mov dword ptr ds : [public_66d34c], eax
        ret 
        UNREACHABLE_TRAP(0x45a0c0)
    }
}
