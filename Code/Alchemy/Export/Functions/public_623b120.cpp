#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b3b0);

PROC_DECLARE(0x623b120, internal_623b120, public_623b120);
extern "C" NAKED register_t __cdecl internal_623b120()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623b3b0
        UNREACHABLE_TRAP(0x623b120)
    }
}
