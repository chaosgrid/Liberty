#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621d940);

PROC_DECLARE(0x621e490, internal_621e490, public_621e490);
extern "C" NAKED register_t __cdecl internal_621e490()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621d940
        UNREACHABLE_TRAP(0x621e490)
    }
}
