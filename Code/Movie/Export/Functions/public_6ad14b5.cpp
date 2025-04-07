#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad14b5);
CLANG_FORWARD_PROC_SYMBOL(public_6ad14d5);

PROC_DECLARE(0x6ad14b5, internal_6ad14b5, public_6ad14b5);
extern "C" NAKED register_t __cdecl internal_6ad14b5()
{
    __asm
    {
        push 0
        push 1
        push dword ptr ss : [esp+0xC]
        call public_6ad14d5
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ad14b5)
    }
}
