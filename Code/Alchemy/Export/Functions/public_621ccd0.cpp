#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c000);

PROC_DECLARE(0x621ccd0, internal_621ccd0, public_621ccd0);
extern "C" NAKED register_t __cdecl internal_621ccd0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621c000
        UNREACHABLE_TRAP(0x621ccd0)
    }
}
