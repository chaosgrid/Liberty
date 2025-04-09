#include "Freelancer-PCH.h"

PROC_DECLARE(0x5914a0, internal_5914a0, public_5914a0);
extern "C" NAKED register_t __cdecl internal_5914a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e5324]
        mov dword ptr ds : [public_67d964], eax
        ret 
        UNREACHABLE_TRAP(0x5914a0)
    }
}
