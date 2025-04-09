#include "Freelancer-PCH.h"

PROC_DECLARE(0x5360e0, internal_5360e0, public_5360e0);
extern "C" NAKED register_t __cdecl internal_5360e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5de578]
        mov dword ptr ds : [public_675548], eax
        ret 
        UNREACHABLE_TRAP(0x5360e0)
    }
}
