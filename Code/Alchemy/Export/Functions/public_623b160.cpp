#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b2d0);

PROC_DECLARE(0x623b160, internal_623b160, public_623b160);
extern "C" NAKED register_t __cdecl internal_623b160()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623b2d0
        UNREACHABLE_TRAP(0x623b160)
    }
}
