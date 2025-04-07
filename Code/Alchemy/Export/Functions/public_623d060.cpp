#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c1b0);

PROC_DECLARE(0x623d060, internal_623d060, public_623d060);
extern "C" NAKED register_t __cdecl internal_623d060()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c1b0
        UNREACHABLE_TRAP(0x623d060)
    }
}
