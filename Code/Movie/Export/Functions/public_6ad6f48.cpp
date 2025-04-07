#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad6de9);

#define public_6ad6f6f _public_6ad6f6f
#define public_6ad6f8c _public_6ad6f8c

PROC_DECLARE(0x6ad6f48, internal_6ad6f48, public_6ad6f48);
extern "C" NAKED register_t __cdecl internal_6ad6f48()
{
    __asm
    {
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        and eax, 0x7FF00000
        cmp eax, 0x7FF00000
        je public_6ad6f8c
        fnstsw ax
        and eax, 0x3800
        je public_6ad6f6f
        fld qword ptr ss : [esp+8]
        call public_6ad6de9
        pop eax
        ret 8
        public_6ad6f6f : nop
        fxch 
        sub esp, 0xC
        fstp tbyte ptr ss : [esp]
        fld qword ptr ss : [esp+0x14]
        call public_6ad6de9
        fld tbyte ptr ss : [esp]
        fxch 
        add esp, 0xC
        pop eax
        ret 8
        public_6ad6f8c : nop
        fdivr qword ptr ss : [esp+8]
        pop eax
        ret 8
        UNREACHABLE_TRAP(0x6ad6f48)
    }
}

#undef public_6ad6f6f
#undef public_6ad6f8c
