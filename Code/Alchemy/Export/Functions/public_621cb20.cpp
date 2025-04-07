#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c190);

PROC_DECLARE(0x621cb20, internal_621cb20, public_621cb20);
extern "C" NAKED register_t __cdecl internal_621cb20()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621c190
        UNREACHABLE_TRAP(0x621cb20)
    }
}
