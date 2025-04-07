#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f496);
CLANG_FORWARD_PROC_SYMBOL(public_6d49926);

PROC_DECLARE(0x6d49926, internal_6d49926, public_6d49926);
extern "C" NAKED register_t __cdecl internal_6d49926()
{
    __asm
    {
        push dword ptr ss : [esp+8]
        call public_6d2f496
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d49926)
    }
}
