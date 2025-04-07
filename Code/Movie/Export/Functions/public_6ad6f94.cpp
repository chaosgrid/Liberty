#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad6de9);

#define public_6ad6fab _public_6ad6fab

PROC_DECLARE(0x6ad6f94, internal_6ad6f94, public_6ad6f94);
extern "C" NAKED register_t __cdecl internal_6ad6f94()
{
    __asm
    {
        push eax
        fnstsw ax
        and eax, 0x3800
        je public_6ad6fab
        fild word ptr ss : [esp+8]
        call public_6ad6de9
        pop eax
        ret 4
        public_6ad6fab : nop
        fxch 
        sub esp, 0xC
        fstp tbyte ptr ss : [esp]
        fild word ptr ss : [esp+0x14]
        call public_6ad6de9
        fld tbyte ptr ss : [esp]
        fxch 
        add esp, 0xC
        pop eax
        ret 4
        UNREACHABLE_TRAP(0x6ad6f94)
    }
}

#undef public_6ad6fab
