#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c0d0);

PROC_DECLARE(0x621ccf0, internal_621ccf0, public_621ccf0);
extern "C" NAKED register_t __cdecl internal_621ccf0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621c0d0
        UNREACHABLE_TRAP(0x621ccf0)
    }
}
