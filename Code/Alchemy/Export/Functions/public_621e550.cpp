#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621dc60);

PROC_DECLARE(0x621e550, internal_621e550, public_621e550);
extern "C" NAKED register_t __cdecl internal_621e550()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621dc60
        UNREACHABLE_TRAP(0x621e550)
    }
}
