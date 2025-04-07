#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a8c0);

PROC_DECLARE(0x621b230, internal_621b230, public_621b230);
extern "C" NAKED register_t __cdecl internal_621b230()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621a8c0
        UNREACHABLE_TRAP(0x621b230)
    }
}
