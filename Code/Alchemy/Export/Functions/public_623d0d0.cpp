#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c200);

PROC_DECLARE(0x623d0d0, internal_623d0d0, public_623d0d0);
extern "C" NAKED register_t __cdecl internal_623d0d0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c200
        UNREACHABLE_TRAP(0x623d0d0)
    }
}
