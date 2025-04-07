#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c160);

PROC_DECLARE(0x623d020, internal_623d020, public_623d020);
extern "C" NAKED register_t __cdecl internal_623d020()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c160
        UNREACHABLE_TRAP(0x623d020)
    }
}
