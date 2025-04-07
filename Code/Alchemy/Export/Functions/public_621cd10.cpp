#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c020);

PROC_DECLARE(0x621cd10, internal_621cd10, public_621cd10);
extern "C" NAKED register_t __cdecl internal_621cd10()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621c020
        UNREACHABLE_TRAP(0x621cd10)
    }
}
