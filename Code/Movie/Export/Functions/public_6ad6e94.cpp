#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad6dd6);

#define public_6ad6eab _public_6ad6eab

PROC_DECLARE(0x6ad6e94, internal_6ad6e94, public_6ad6e94);
extern "C" NAKED register_t __cdecl internal_6ad6e94()
{
    __asm
    {
        push eax
        fnstsw ax
        and eax, 0x3800
        je public_6ad6eab
        fild word ptr ss : [esp+8]
        call public_6ad6dd6
        pop eax
        ret 4
        public_6ad6eab : nop
        fxch 
        sub esp, 0xC
        fstp tbyte ptr ss : [esp]
        fild word ptr ss : [esp+0x14]
        call public_6ad6dd6
        fld tbyte ptr ss : [esp]
        fxch 
        add esp, 0xC
        pop eax
        ret 4
        UNREACHABLE_TRAP(0x6ad6e94)
    }
}

#undef public_6ad6eab
