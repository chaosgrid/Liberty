#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad6de9);

#define public_6ad6f23 _public_6ad6f23
#define public_6ad6f40 _public_6ad6f40

PROC_DECLARE(0x6ad6efc, internal_6ad6efc, public_6ad6efc);
extern "C" NAKED register_t __cdecl internal_6ad6efc()
{
    __asm
    {
        push eax
        mov eax, dword ptr ss : [esp+8]
        and eax, 0x7F800000
        cmp eax, 0x7F800000
        je public_6ad6f40
        fnstsw ax
        and eax, 0x3800
        je public_6ad6f23
        fld dword ptr ss : [esp+8]
        call public_6ad6de9
        pop eax
        ret 4
        public_6ad6f23 : nop
        fxch 
        sub esp, 0xC
        fstp tbyte ptr ss : [esp]
        fld dword ptr ss : [esp+0x14]
        call public_6ad6de9
        fld tbyte ptr ss : [esp]
        fxch 
        add esp, 0xC
        pop eax
        ret 4
        public_6ad6f40 : nop
        fdivr dword ptr ss : [esp+8]
        pop eax
        ret 4
        UNREACHABLE_TRAP(0x6ad6efc)
    }
}

#undef public_6ad6f23
#undef public_6ad6f40
