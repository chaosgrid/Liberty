#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46d20);
CLANG_FORWARD_PROC_SYMBOL(public_6d572e0);

PROC_DECLARE(0x6d572e0, internal_6d572e0, public_6d572e0);
extern "C" NAKED register_t __cdecl internal_6d572e0()
{
    __asm
    {
        add ecx, 0x200
        jmp public_6d46d20
        UNREACHABLE_TRAP(0x6d572e0)
    }
}
