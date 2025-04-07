#include "Freelancer-PCH.h"

PROC_DECLARE(0x445e10, internal_445e10, public_445e10);
extern "C" NAKED register_t __cdecl internal_445e10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cbc00]
        mov dword ptr ds : [public_668a7c], eax
        ret 
        UNREACHABLE_TRAP(0x445e10)
    }
}
