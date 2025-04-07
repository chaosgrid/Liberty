#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623a960);

PROC_DECLARE(0x623b490, internal_623b490, public_623b490);
extern "C" NAKED register_t __cdecl internal_623b490()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623a960
        UNREACHABLE_TRAP(0x623b490)
    }
}
