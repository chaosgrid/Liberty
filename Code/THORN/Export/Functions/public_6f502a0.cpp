#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b320);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f730);

PROC_DECLARE(0x6f502a0, internal_6f502a0, public_6f502a0);
extern "C" NAKED register_t __cdecl internal_6f502a0()
{
    __asm
    {
        push 1
        call public_6f4f730
        push eax
        call public_6f4b900
        push 2
        call public_6f4f730
        push eax
        call public_6f4b900
        push 3
        call public_6f4f730
        push eax
        call public_6f4b900
        add esp, 0x18
        jmp public_6f4b320
        UNREACHABLE_TRAP(0x6f502a0)
    }
}
