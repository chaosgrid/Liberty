#include "Freelancer-PCH.h"

PROC_DECLARE(0x4252a0, internal_4252a0, public_4252a0);
extern "C" NAKED register_t __cdecl internal_4252a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c9954]
        mov dword ptr ds : [public_667a08], eax
        ret 
        UNREACHABLE_TRAP(0x4252a0)
    }
}
