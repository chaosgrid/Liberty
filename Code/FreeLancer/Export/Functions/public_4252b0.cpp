#include "Freelancer-PCH.h"

PROC_DECLARE(0x4252b0, internal_4252b0, public_4252b0);
extern "C" NAKED register_t __cdecl internal_4252b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c9954]
        mov dword ptr ds : [public_667a04], eax
        ret 
        UNREACHABLE_TRAP(0x4252b0)
    }
}
