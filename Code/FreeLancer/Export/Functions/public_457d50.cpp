#include "Freelancer-PCH.h"

PROC_DECLARE(0x457d50, internal_457d50, public_457d50);
extern "C" NAKED register_t __cdecl internal_457d50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ce77c]
        mov dword ptr ds : [public_66d314], eax
        ret 
        UNREACHABLE_TRAP(0x457d50)
    }
}
