#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad0314);
CLANG_FORWARD_PROC_SYMBOL(public_6ad36e6);

PROC_DECLARE(0x6ad0314, internal_6ad0314, public_6ad0314);
extern "C" NAKED register_t __cdecl internal_6ad0314()
{
    __asm
    {
        push 0x30000
        push 0x10000
        call public_6ad36e6
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ad0314)
    }
}
