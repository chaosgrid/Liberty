#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b020);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b250);
CLANG_FORWARD_PROC_SYMBOL(public_6f4cf70);

PROC_DECLARE(0x6f4b250, internal_6f4b250, public_6f4b250);
extern "C" NAKED register_t __cdecl internal_6f4b250()
{
    __asm
    {
        push 2
        call public_6f4aff0
        add esp, 4
        call public_6f4cf70
        jmp public_6f4b020
        UNREACHABLE_TRAP(0x6f4b250)
    }
}
