#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801df0);
CLANG_FORWARD_PROC_SYMBOL(public_6802810);
CLANG_FORWARD_PROC_SYMBOL(public_6803620);

#define public_680282b _public_680282b

PROC_DECLARE(0x6802810, internal_6802810, public_6802810);
extern "C" NAKED register_t __cdecl internal_6802810()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6803620
        add esp, 4
        test eax, eax
        je public_680282b
        push eax
        call public_6801df0
        add esp, 4
        ret 
        public_680282b : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6802810)
    }
}

#undef public_680282b
