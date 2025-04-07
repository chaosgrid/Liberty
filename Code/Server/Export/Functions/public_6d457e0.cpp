#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

PROC_DECLARE(0x6d457e0, internal_6d457e0, public_6d457e0);
extern "C" NAKED register_t __cdecl internal_6d457e0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp]
        push edx
        push 0x22
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], ecx
        call public_6d43650
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d457e0)
    }
}
