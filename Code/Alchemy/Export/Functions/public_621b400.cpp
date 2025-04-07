#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a5c0);

PROC_DECLARE(0x621b400, internal_621b400, public_621b400);
extern "C" NAKED register_t __cdecl internal_621b400()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621a5c0
        UNREACHABLE_TRAP(0x621b400)
    }
}
