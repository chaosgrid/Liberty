#include "Freelancer-PCH.h"

PROC_DECLARE(0x45fc50, internal_45fc50, public_45fc50);
extern "C" NAKED register_t __cdecl internal_45fc50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ceefc]
        mov dword ptr ds : [public_66d4d8], eax
        ret 
        UNREACHABLE_TRAP(0x45fc50)
    }
}
