#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c280);

PROC_DECLARE(0x623d0b0, internal_623d0b0, public_623d0b0);
extern "C" NAKED register_t __cdecl internal_623d0b0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c280
        UNREACHABLE_TRAP(0x623d0b0)
    }
}
