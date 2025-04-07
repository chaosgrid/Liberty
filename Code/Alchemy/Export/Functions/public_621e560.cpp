#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621dc80);

PROC_DECLARE(0x621e560, internal_621e560, public_621e560);
extern "C" NAKED register_t __cdecl internal_621e560()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621dc80
        UNREACHABLE_TRAP(0x621e560)
    }
}
