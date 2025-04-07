#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b410);

PROC_DECLARE(0x623b100, internal_623b100, public_623b100);
extern "C" NAKED register_t __cdecl internal_623b100()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623b410
        UNREACHABLE_TRAP(0x623b100)
    }
}
