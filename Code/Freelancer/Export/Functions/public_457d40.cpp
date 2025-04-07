#include "Freelancer-PCH.h"

PROC_DECLARE(0x457d40, internal_457d40, public_457d40);
extern "C" NAKED register_t __cdecl internal_457d40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ce778]
        mov dword ptr ds : [public_66d318], eax
        ret 
        UNREACHABLE_TRAP(0x457d40)
    }
}
