#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621bfc0);

PROC_DECLARE(0x621cc90, internal_621cc90, public_621cc90);
extern "C" NAKED register_t __cdecl internal_621cc90()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621bfc0
        UNREACHABLE_TRAP(0x621cc90)
    }
}
