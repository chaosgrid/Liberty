#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801c30);
CLANG_FORWARD_PROC_SYMBOL(public_6802360);
CLANG_FORWARD_PROC_SYMBOL(public_6803020);
CLANG_FORWARD_PROC_SYMBOL(public_6805e40);

#define public_6809aab _public_6809aab

PROC_DECLARE(0x6809a80, internal_6809a80, public_6809a80);
extern "C" NAKED register_t __cdecl internal_6809a80()
{
    __asm
    {
        push 0
        push 0
        push 1
        call public_6805e40
        push eax
        call public_6803020
        add esp, 0x10
        test eax, eax
        jne public_6809aab
        call public_6801c30
        test eax, eax
        jne public_6809aab
        push eax
        push eax
        call public_6802360
        add esp, 8
        public_6809aab : nop
        ret 
        UNREACHABLE_TRAP(0x6809a80)
    }
}

#undef public_6809aab
