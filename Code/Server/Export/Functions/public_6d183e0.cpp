#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d150a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

PROC_DECLARE(0x6d183e0, internal_6d183e0, public_6d183e0);
extern "C" NAKED register_t __cdecl internal_6d183e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push eax
        mov eax, dword ptr ss : [esp+8]
        push ecx
        push edx
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d150a0
        ret 
        UNREACHABLE_TRAP(0x6d183e0)
    }
}
