#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b2c0);

PROC_DECLARE(0x623b290, internal_623b290, public_623b290);
extern "C" NAKED register_t __cdecl internal_623b290()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623b2c0
        UNREACHABLE_TRAP(0x623b290)
    }
}
