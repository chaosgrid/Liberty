#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621bf00);

PROC_DECLARE(0x621cd40, internal_621cd40, public_621cd40);
extern "C" NAKED register_t __cdecl internal_621cd40()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621bf00
        UNREACHABLE_TRAP(0x621cd40)
    }
}
