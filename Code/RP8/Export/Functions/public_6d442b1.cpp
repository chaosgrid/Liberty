#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d442b1);
CLANG_FORWARD_PROC_SYMBOL(public_6d484a8);

PROC_DECLARE(0x6d442b1, internal_6d442b1, public_6d442b1);
extern "C" NAKED register_t __cdecl internal_6d442b1()
{
    __asm
    {
        jmp public_6d484a8
        UNREACHABLE_TRAP(0x6d442b1)
    }
}
