#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c0e0);

PROC_DECLARE(0x621cd70, internal_621cd70, public_621cd70);
extern "C" NAKED register_t __cdecl internal_621cd70()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621c0e0
        UNREACHABLE_TRAP(0x621cd70)
    }
}
