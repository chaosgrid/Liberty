#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801c80);
CLANG_FORWARD_PROC_SYMBOL(public_6801f70);
CLANG_FORWARD_PROC_SYMBOL(public_6802870);
CLANG_FORWARD_PROC_SYMBOL(public_6803f20);
CLANG_FORWARD_PROC_SYMBOL(public_6805a80);

PROC_DECLARE(0x6801f70, internal_6801f70, public_6801f70);
extern "C" NAKED register_t __cdecl internal_6801f70()
{
    __asm
    {
        push 2
        call public_6802870
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_6805a80
        push eax
        call public_6803f20
        add esp, 0xC
        jmp public_6801c80
        UNREACHABLE_TRAP(0x6801f70)
    }
}
