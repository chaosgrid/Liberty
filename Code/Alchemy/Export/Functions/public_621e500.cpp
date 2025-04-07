#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621daa0);

PROC_DECLARE(0x621e500, internal_621e500, public_621e500);
extern "C" NAKED register_t __cdecl internal_621e500()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621daa0
        UNREACHABLE_TRAP(0x621e500)
    }
}
