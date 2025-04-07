#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801c50);
CLANG_FORWARD_PROC_SYMBOL(public_6801c80);
CLANG_FORWARD_PROC_SYMBOL(public_6801e50);
CLANG_FORWARD_PROC_SYMBOL(public_68050a0);

PROC_DECLARE(0x6801e50, internal_6801e50, public_6801e50);
extern "C" NAKED register_t __cdecl internal_6801e50()
{
    __asm
    {
        push 1
        call public_6801c50
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+8]
        sub ecx, 0x10
        push ecx
        push edx
        push eax
        call public_68050a0
        add esp, 0x10
        jmp public_6801c80
        UNREACHABLE_TRAP(0x6801e50)
    }
}
