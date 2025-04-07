#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a630);

PROC_DECLARE(0x621b310, internal_621b310, public_621b310);
extern "C" NAKED register_t __cdecl internal_621b310()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621a630
        UNREACHABLE_TRAP(0x621b310)
    }
}
