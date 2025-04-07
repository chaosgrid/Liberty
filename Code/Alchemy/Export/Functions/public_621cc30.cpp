#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621bf50);

PROC_DECLARE(0x621cc30, internal_621cc30, public_621cc30);
extern "C" NAKED register_t __cdecl internal_621cc30()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621bf50
        UNREACHABLE_TRAP(0x621cc30)
    }
}
