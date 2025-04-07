#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad6820);

PROC_DECLARE(0x6ad6ffc, internal_6ad6ffc, public_6ad6ffc);
extern "C" NAKED register_t __cdecl internal_6ad6ffc()
{
    __asm
    {
        push eax
        sub esp, 0x2C
        fstp tbyte ptr ss : [esp]
        fstp tbyte ptr ss : [esp+0xC]
        call public_6ad6820
        add esp, 0x2C
        pop eax
        ret 
        UNREACHABLE_TRAP(0x6ad6ffc)
    }
}
