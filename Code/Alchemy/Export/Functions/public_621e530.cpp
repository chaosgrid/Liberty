#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621dc20);

PROC_DECLARE(0x621e530, internal_621e530, public_621e530);
extern "C" NAKED register_t __cdecl internal_621e530()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621dc20
        UNREACHABLE_TRAP(0x621e530)
    }
}
