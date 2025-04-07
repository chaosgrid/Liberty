#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801c50);
CLANG_FORWARD_PROC_SYMBOL(public_6801fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6802870);
CLANG_FORWARD_PROC_SYMBOL(public_6803fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6805a80);

PROC_DECLARE(0x6801fb0, internal_6801fb0, public_6801fb0);
extern "C" NAKED register_t __cdecl internal_6801fb0()
{
    __asm
    {
        push 1
        call public_6801c50
        push 2
        call public_6802870
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call public_6805a80
        push eax
        call public_6803fd0
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6801fb0)
    }
}
