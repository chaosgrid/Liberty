#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad6dd6);

#define public_6ad6e23 _public_6ad6e23
#define public_6ad6e40 _public_6ad6e40

PROC_DECLARE(0x6ad6dfc, internal_6ad6dfc, public_6ad6dfc);
extern "C" NAKED register_t __cdecl internal_6ad6dfc()
{
    __asm
    {
        push eax
        mov eax, dword ptr ss : [esp+8]
        and eax, 0x7F800000
        cmp eax, 0x7F800000
        je public_6ad6e40
        fnstsw ax
        and eax, 0x3800
        je public_6ad6e23
        fld dword ptr ss : [esp+8]
        call public_6ad6dd6
        pop eax
        ret 4
        public_6ad6e23 : nop
        fxch 
        sub esp, 0xC
        fstp tbyte ptr ss : [esp]
        fld dword ptr ss : [esp+0x14]
        call public_6ad6dd6
        fld tbyte ptr ss : [esp]
        fxch 
        add esp, 0xC
        pop eax
        ret 4
        public_6ad6e40 : nop
        fdiv dword ptr ss : [esp+8]
        pop eax
        ret 4
        UNREACHABLE_TRAP(0x6ad6dfc)
    }
}

#undef public_6ad6e23
#undef public_6ad6e40
