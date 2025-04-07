#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f730);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

PROC_DECLARE(0x6f502d0, internal_6f502d0, public_6f502d0);
extern "C" NAKED register_t __cdecl internal_6f502d0()
{
    __asm
    {
        push 3
        call public_6f4f730
        push eax
        call public_6f4b900
        push 0
        push 2
        call public_6f4f5e0
        add esp, 0x10
        push eax
        push 1
        call public_6f4f660
        add esp, 4
        call public_6f57f16
        push eax
        call public_6f4b1f0
        push eax
        call public_6f4b900
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f502d0)
    }
}
