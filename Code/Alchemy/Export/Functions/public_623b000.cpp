#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b020);

PROC_DECLARE(0x623b000, internal_623b000, public_623b000);
extern "C" NAKED register_t __cdecl internal_623b000()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623b020
        UNREACHABLE_TRAP(0x623b000)
    }
}
