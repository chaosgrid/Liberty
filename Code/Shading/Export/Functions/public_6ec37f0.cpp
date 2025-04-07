#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf110);

PROC_DECLARE(0x6ec37f0, internal_6ec37f0, public_6ec37f0);
extern "C" NAKED register_t __cdecl internal_6ec37f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push 0
        push eax
        push ecx
        call public_6ebf110
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6ec37f0)
    }
}
