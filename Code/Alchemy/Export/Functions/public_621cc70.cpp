#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621bf90);

PROC_DECLARE(0x621cc70, internal_621cc70, public_621cc70);
extern "C" NAKED register_t __cdecl internal_621cc70()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621bf90
        UNREACHABLE_TRAP(0x621cc70)
    }
}
