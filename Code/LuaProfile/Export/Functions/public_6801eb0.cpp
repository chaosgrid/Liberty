#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801c50);
CLANG_FORWARD_PROC_SYMBOL(public_6801c80);
CLANG_FORWARD_PROC_SYMBOL(public_6801eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6803d10);

PROC_DECLARE(0x6801eb0, internal_6801eb0, public_6801eb0);
extern "C" NAKED register_t __cdecl internal_6801eb0()
{
    __asm
    {
        push 2
        call public_6801c50
        add esp, 4
        call public_6803d10
        jmp public_6801c80
        UNREACHABLE_TRAP(0x6801eb0)
    }
}
