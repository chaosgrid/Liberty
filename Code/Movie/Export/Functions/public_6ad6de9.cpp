#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad6820);
CLANG_FORWARD_PROC_SYMBOL(public_6ad6de9);

PROC_DECLARE(0x6ad6de9, internal_6ad6de9, public_6ad6de9);
extern "C" NAKED register_t __cdecl internal_6ad6de9()
{
    __asm
    {
        sub esp, 0x2C
        fstp tbyte ptr ss : [esp+0xC]
        fstp tbyte ptr ss : [esp]
        call public_6ad6820
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x6ad6de9)
    }
}
