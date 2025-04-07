#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c120);

PROC_DECLARE(0x623d120, internal_623d120, public_623d120);
extern "C" NAKED register_t __cdecl internal_623d120()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c120
        UNREACHABLE_TRAP(0x623d120)
    }
}
