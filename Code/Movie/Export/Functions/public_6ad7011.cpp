#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad6820);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7011);

PROC_DECLARE(0x6ad7011, internal_6ad7011, public_6ad7011);
extern "C" NAKED register_t __cdecl internal_6ad7011()
{
    __asm
    {
        push eax
        sub esp, 0x2C
        fstp tbyte ptr ss : [esp+0xC]
        fstp tbyte ptr ss : [esp]
        call public_6ad6820
        add esp, 0x2C
        pop eax
        ret 
        UNREACHABLE_TRAP(0x6ad7011)
    }
}
