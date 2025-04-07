#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621dc40);

PROC_DECLARE(0x621e540, internal_621e540, public_621e540);
extern "C" NAKED register_t __cdecl internal_621e540()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621dc40
        UNREACHABLE_TRAP(0x621e540)
    }
}
