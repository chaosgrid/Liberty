#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b0e0);

PROC_DECLARE(0x623b040, internal_623b040, public_623b040);
extern "C" NAKED register_t __cdecl internal_623b040()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623b0e0
        UNREACHABLE_TRAP(0x623b040)
    }
}
