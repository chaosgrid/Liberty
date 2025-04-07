#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad6820);
CLANG_FORWARD_PROC_SYMBOL(public_6ad6dd6);

PROC_DECLARE(0x6ad6dd6, internal_6ad6dd6, public_6ad6dd6);
extern "C" NAKED register_t __cdecl internal_6ad6dd6()
{
    __asm
    {
        sub esp, 0x2C
        fstp tbyte ptr ss : [esp]
        fstp tbyte ptr ss : [esp+0xC]
        call public_6ad6820
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x6ad6dd6)
    }
}
