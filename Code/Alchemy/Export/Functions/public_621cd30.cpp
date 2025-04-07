#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621bf20);

PROC_DECLARE(0x621cd30, internal_621cd30, public_621cd30);
extern "C" NAKED register_t __cdecl internal_621cd30()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621bf20
        UNREACHABLE_TRAP(0x621cd30)
    }
}
