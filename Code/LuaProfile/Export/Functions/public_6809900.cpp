#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6802420);
CLANG_FORWARD_PROC_SYMBOL(public_6805f40);

PROC_DECLARE(0x6809900, internal_6809900, public_6809900);
extern "C" NAKED register_t __cdecl internal_6809900()
{
    __asm
    {
        push 1
        call public_6805f40
        push eax
        call public_6802420
        push 2
        call public_6805f40
        push eax
        call public_6802420
        call public_6801ed0
        push eax
        call public_6802420
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6809900)
    }
}
