#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621bf40);

PROC_DECLARE(0x621cd60, internal_621cd60, public_621cd60);
extern "C" NAKED register_t __cdecl internal_621cd60()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621bf40
        UNREACHABLE_TRAP(0x621cd60)
    }
}
