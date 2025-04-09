#include "Freelancer-PCH.h"

PROC_DECLARE(0x4a7810, internal_4a7810, public_4a7810);
extern "C" NAKED register_t __cdecl internal_4a7810()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d4780]
        mov dword ptr ds : [public_6721ac], eax
        ret 
        UNREACHABLE_TRAP(0x4a7810)
    }
}
