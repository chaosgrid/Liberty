#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e350);

PROC_DECLARE(0x623e800, internal_623e800, public_623e800);
extern "C" NAKED register_t __cdecl internal_623e800()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623e350
        UNREACHABLE_TRAP(0x623e800)
    }
}
