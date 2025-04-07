#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a800);

PROC_DECLARE(0x621b1d0, internal_621b1d0, public_621b1d0);
extern "C" NAKED register_t __cdecl internal_621b1d0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621a800
        UNREACHABLE_TRAP(0x621b1d0)
    }
}
