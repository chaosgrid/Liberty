#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b1a0);

PROC_DECLARE(0x623b060, internal_623b060, public_623b060);
extern "C" NAKED register_t __cdecl internal_623b060()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623b1a0
        UNREACHABLE_TRAP(0x623b060)
    }
}
