#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c130);

PROC_DECLARE(0x623cff0, internal_623cff0, public_623cff0);
extern "C" NAKED register_t __cdecl internal_623cff0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c130
        UNREACHABLE_TRAP(0x623cff0)
    }
}
