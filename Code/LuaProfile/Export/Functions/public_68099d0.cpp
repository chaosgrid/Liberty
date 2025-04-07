#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801e80);
CLANG_FORWARD_PROC_SYMBOL(public_6802420);
CLANG_FORWARD_PROC_SYMBOL(public_6805f10);

PROC_DECLARE(0x68099d0, internal_68099d0, public_68099d0);
extern "C" NAKED register_t __cdecl internal_68099d0()
{
    __asm
    {
        push 1
        call public_6805f10
        push eax
        call public_6802420
        call public_6801e80
        push eax
        call public_6802420
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x68099d0)
    }
}
