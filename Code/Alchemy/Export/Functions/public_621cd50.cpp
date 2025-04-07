#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621be30);

PROC_DECLARE(0x621cd50, internal_621cd50, public_621cd50);
extern "C" NAKED register_t __cdecl internal_621cd50()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621be30
        UNREACHABLE_TRAP(0x621cd50)
    }
}
