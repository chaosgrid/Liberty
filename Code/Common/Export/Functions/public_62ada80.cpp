#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284e50);
CLANG_FORWARD_PROC_SYMBOL(public_62ada80);

PROC_DECLARE(0x62ada80, internal_62ada80, public_62ada80);
extern "C" NAKED register_t __cdecl internal_62ada80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push eax
        mov eax, dword ptr ss : [esp+8]
        push edx
        push eax
        push ecx
        call public_6284e50
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x62ada80)
    }
}
