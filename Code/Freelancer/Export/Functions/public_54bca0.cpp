#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f130);
CLANG_FORWARD_PROC_SYMBOL(public_54bca0);

PROC_DECLARE(0x54bca0, internal_54bca0, public_54bca0);
extern "C" NAKED register_t __cdecl internal_54bca0()
{
    __asm
    {
        call public_40f130
        sub eax, offset public_679634
        neg eax
        sbb eax, eax
        inc eax
        ret 
        UNREACHABLE_TRAP(0x54bca0)
    }
}
