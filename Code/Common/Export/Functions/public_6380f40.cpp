#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6380f40);
CLANG_FORWARD_PROC_SYMBOL(public_6380f60);

PROC_DECLARE(0x6380f40, internal_6380f40, public_6380f40);
extern "C" NAKED register_t __cdecl internal_6380f40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push 0
        push 0
        push eax
        push ecx
        push edx
        call public_6380f60
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6380f40)
    }
}
