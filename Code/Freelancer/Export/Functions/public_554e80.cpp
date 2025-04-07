#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_554ab0);
CLANG_FORWARD_PROC_SYMBOL(public_554e80);

PROC_DECLARE(0x554e80, internal_554e80, public_554e80);
extern "C" NAKED register_t __cdecl internal_554e80()
{
    __asm
    {
        push 0
        call public_554ab0
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x554e80)
    }
}
