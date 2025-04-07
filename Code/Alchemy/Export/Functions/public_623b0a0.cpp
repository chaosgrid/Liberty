#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b3f0);

PROC_DECLARE(0x623b0a0, internal_623b0a0, public_623b0a0);
extern "C" NAKED register_t __cdecl internal_623b0a0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623b3f0
        UNREACHABLE_TRAP(0x623b0a0)
    }
}
