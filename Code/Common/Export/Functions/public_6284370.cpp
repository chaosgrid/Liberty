#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284370);
CLANG_FORWARD_PROC_SYMBOL(public_6284390);

PROC_DECLARE(0x6284370, internal_6284370, public_6284370);
extern "C" NAKED register_t __cdecl internal_6284370()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push eax
        push 1
        push ecx
        push edx
        call public_6284390
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6284370)
    }
}
