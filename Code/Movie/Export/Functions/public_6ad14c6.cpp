#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad14c6);
CLANG_FORWARD_PROC_SYMBOL(public_6ad14d5);

PROC_DECLARE(0x6ad14c6, internal_6ad14c6, public_6ad14c6);
extern "C" NAKED register_t __cdecl internal_6ad14c6()
{
    __asm
    {
        push 1
        push 0
        push 0
        call public_6ad14d5
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ad14c6)
    }
}
