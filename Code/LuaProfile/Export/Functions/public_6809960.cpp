#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801e50);
CLANG_FORWARD_PROC_SYMBOL(public_6802420);
CLANG_FORWARD_PROC_SYMBOL(public_6805df0);
CLANG_FORWARD_PROC_SYMBOL(public_6805e70);
CLANG_FORWARD_PROC_SYMBOL(public_6805f40);
CLANG_FORWARD_PROC_SYMBOL(public_680bdaa);

PROC_DECLARE(0x6809960, internal_6809960, public_6809960);
extern "C" NAKED register_t __cdecl internal_6809960()
{
    __asm
    {
        push 3
        call public_6805f40
        push eax
        call public_6802420
        push 0
        push 2
        call public_6805df0
        add esp, 0x10
        push eax
        push 1
        call public_6805e70
        add esp, 4
        call public_680bdaa
        push eax
        call public_6801e50
        push eax
        call public_6802420
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6809960)
    }
}
