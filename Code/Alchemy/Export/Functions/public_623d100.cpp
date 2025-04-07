#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c0e0);

PROC_DECLARE(0x623d100, internal_623d100, public_623d100);
extern "C" NAKED register_t __cdecl internal_623d100()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c0e0
        UNREACHABLE_TRAP(0x623d100)
    }
}
