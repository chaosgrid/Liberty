#include "Freelancer-PCH.h"

PROC_DECLARE(0x45a0d0, internal_45a0d0, public_45a0d0);
extern "C" NAKED register_t __cdecl internal_45a0d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ce7f8]
        mov dword ptr ds : [public_66d348], eax
        ret 
        UNREACHABLE_TRAP(0x45a0d0)
    }
}
