#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f319b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);

PROC_DECLARE(0x6f319b0, internal_6f319b0, public_6f319b0);
extern "C" NAKED register_t __cdecl internal_6f319b0()
{
    __asm
    {
        lea eax, ss:[esp+4]
        push eax
        call public_6f50650
        mov ecx, dword ptr ss : [esp+0xC]
        add ecx, 0x30
        add esp, 4
        push ecx
        mov ecx, eax
        call public_6f4f7c0
        ret 
        UNREACHABLE_TRAP(0x6f319b0)
    }
}
