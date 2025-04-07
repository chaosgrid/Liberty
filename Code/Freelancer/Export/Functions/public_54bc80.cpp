#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f130);
CLANG_FORWARD_PROC_SYMBOL(public_54bc80);

PROC_DECLARE(0x54bc80, internal_54bc80, public_54bc80);
extern "C" NAKED register_t __cdecl internal_54bc80()
{
    __asm
    {
        call public_40f130
        sub eax, offset public_678ba4
        neg eax
        sbb eax, eax
        inc eax
        ret 
        UNREACHABLE_TRAP(0x54bc80)
    }
}
