#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b170);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

PROC_DECLARE(0x6f50310, internal_6f50310, public_6f50310);
extern "C" NAKED register_t __cdecl internal_6f50310()
{
    __asm
    {
        push 0
        push 2
        call public_6f4f5e0
        add esp, 8
        push eax
        push 1
        call public_6f4f660
        add esp, 4
        call public_6f57f16
        push eax
        call public_6f4b170
        push eax
        call public_6f4b900
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f50310)
    }
}
