#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801f50);
CLANG_FORWARD_PROC_SYMBOL(public_6802420);
CLANG_FORWARD_PROC_SYMBOL(public_6805f40);

PROC_DECLARE(0x6809930, internal_6809930, public_6809930);
extern "C" NAKED register_t __cdecl internal_6809930()
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
        push 3
        call public_6805f40
        push eax
        call public_6802420
        add esp, 0x18
        jmp public_6801f50
        UNREACHABLE_TRAP(0x6809930)
    }
}
