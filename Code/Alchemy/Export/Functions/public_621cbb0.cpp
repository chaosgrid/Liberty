#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c1d0);

PROC_DECLARE(0x621cbb0, internal_621cbb0, public_621cbb0);
extern "C" NAKED register_t __cdecl internal_621cbb0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621c1d0
        UNREACHABLE_TRAP(0x621cbb0)
    }
}
