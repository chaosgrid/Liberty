#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a690);

PROC_DECLARE(0x621b360, internal_621b360, public_621b360);
extern "C" NAKED register_t __cdecl internal_621b360()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621a690
        UNREACHABLE_TRAP(0x621b360)
    }
}
