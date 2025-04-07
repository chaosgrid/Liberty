#include "Freelancer-PCH.h"

PROC_DECLARE(0x457d30, internal_457d30, public_457d30);
extern "C" NAKED register_t __cdecl internal_457d30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ce778]
        mov dword ptr ds : [public_66d31c], eax
        ret 
        UNREACHABLE_TRAP(0x457d30)
    }
}
