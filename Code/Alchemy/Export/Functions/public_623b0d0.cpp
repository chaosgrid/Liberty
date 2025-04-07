#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b380);

PROC_DECLARE(0x623b0d0, internal_623b0d0, public_623b0d0);
extern "C" NAKED register_t __cdecl internal_623b0d0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623b380
        UNREACHABLE_TRAP(0x623b0d0)
    }
}
