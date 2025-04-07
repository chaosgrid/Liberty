#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad6dd6);

#define public_6ad6e6f _public_6ad6e6f
#define public_6ad6e8c _public_6ad6e8c

PROC_DECLARE(0x6ad6e48, internal_6ad6e48, public_6ad6e48);
extern "C" NAKED register_t __cdecl internal_6ad6e48()
{
    __asm
    {
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        and eax, 0x7FF00000
        cmp eax, 0x7FF00000
        je public_6ad6e8c
        fnstsw ax
        and eax, 0x3800
        je public_6ad6e6f
        fld qword ptr ss : [esp+8]
        call public_6ad6dd6
        pop eax
        ret 8
        public_6ad6e6f : nop
        fxch 
        sub esp, 0xC
        fstp tbyte ptr ss : [esp]
        fld qword ptr ss : [esp+0x14]
        call public_6ad6dd6
        fld tbyte ptr ss : [esp]
        fxch 
        add esp, 0xC
        pop eax
        ret 8
        public_6ad6e8c : nop
        fdiv qword ptr ss : [esp+8]
        pop eax
        ret 8
        UNREACHABLE_TRAP(0x6ad6e48)
    }
}

#undef public_6ad6e6f
#undef public_6ad6e8c
