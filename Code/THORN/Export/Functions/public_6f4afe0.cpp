#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4afe0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b020);

PROC_DECLARE(0x6f4afe0, internal_6f4afe0, public_6f4afe0);
extern "C" NAKED register_t __cdecl internal_6f4afe0()
{
    __asm
    {
        push 1
        call public_6f4aff0
        add esp, 4
        jmp public_6f4b020
        UNREACHABLE_TRAP(0x6f4afe0)
    }
}
