#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621bf70);

PROC_DECLARE(0x621cc50, internal_621cc50, public_621cc50);
extern "C" NAKED register_t __cdecl internal_621cc50()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621bf70
        UNREACHABLE_TRAP(0x621cc50)
    }
}
