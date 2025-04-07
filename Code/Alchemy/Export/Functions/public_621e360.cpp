#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621d800);

PROC_DECLARE(0x621e360, internal_621e360, public_621e360);
extern "C" NAKED register_t __cdecl internal_621e360()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621d800
        UNREACHABLE_TRAP(0x621e360)
    }
}
