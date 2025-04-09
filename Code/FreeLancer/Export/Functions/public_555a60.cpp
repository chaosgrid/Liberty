#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555a60);
CLANG_FORWARD_PROC_SYMBOL(public_555a90);

PROC_DECLARE(0x555a60, internal_555a60, public_555a60);
extern "C" NAKED register_t __cdecl internal_555a60()
{
    __asm
    {
        jmp public_555a90
        UNREACHABLE_TRAP(0x555a60)
    }
}
