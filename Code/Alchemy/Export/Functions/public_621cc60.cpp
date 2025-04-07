#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621bf80);

PROC_DECLARE(0x621cc60, internal_621cc60, public_621cc60);
extern "C" NAKED register_t __cdecl internal_621cc60()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621bf80
        UNREACHABLE_TRAP(0x621cc60)
    }
}
