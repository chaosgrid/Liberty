#include "Freelancer-PCH.h"

PROC_DECLARE(0x5360f0, internal_5360f0, public_5360f0);
extern "C" NAKED register_t __cdecl internal_5360f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5de57c]
        mov dword ptr ds : [public_675544], eax
        ret 
        UNREACHABLE_TRAP(0x5360f0)
    }
}
