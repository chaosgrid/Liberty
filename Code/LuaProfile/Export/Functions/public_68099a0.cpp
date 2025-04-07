#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6802420);
CLANG_FORWARD_PROC_SYMBOL(public_6805df0);
CLANG_FORWARD_PROC_SYMBOL(public_6805e70);
CLANG_FORWARD_PROC_SYMBOL(public_680bdaa);

PROC_DECLARE(0x68099a0, internal_68099a0, public_68099a0);
extern "C" NAKED register_t __cdecl internal_68099a0()
{
    __asm
    {
        push 0
        push 2
        call public_6805df0
        add esp, 8
        push eax
        push 1
        call public_6805e70
        add esp, 4
        call public_680bdaa
        push eax
        call public_6801dd0
        push eax
        call public_6802420
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x68099a0)
    }
}
