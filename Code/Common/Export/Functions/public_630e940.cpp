#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e870);
CLANG_FORWARD_PROC_SYMBOL(public_630e940);

PROC_DECLARE(0x630e940, internal_630e940, public_630e940);
extern "C" NAKED register_t __cdecl internal_630e940()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        sub esp, 0x48
        lea eax, ss:[esp]
        push eax
        mov eax, dword ptr ss : [esp+0x50]
        push ecx
        push edx
        push eax
        call public_630e870
        add esp, 0x58
        ret 
        UNREACHABLE_TRAP(0x630e940)
    }
}
