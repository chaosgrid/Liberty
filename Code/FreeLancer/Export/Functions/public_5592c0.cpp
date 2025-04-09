#include "Freelancer-PCH.h"

PROC_DECLARE(0x5592c0, internal_5592c0, public_5592c0);
extern "C" NAKED register_t __cdecl internal_5592c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e1498]
        mov dword ptr ds : [public_679a20], eax
        ret 
        UNREACHABLE_TRAP(0x5592c0)
    }
}
