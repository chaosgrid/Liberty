#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ad30);

PROC_DECLARE(0x623af50, internal_623af50, public_623af50);
extern "C" NAKED register_t __cdecl internal_623af50()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623ad30
        UNREACHABLE_TRAP(0x623af50)
    }
}
