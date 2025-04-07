#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e100);

PROC_DECLARE(0x623e750, internal_623e750, public_623e750);
extern "C" NAKED register_t __cdecl internal_623e750()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623e100
        UNREACHABLE_TRAP(0x623e750)
    }
}
