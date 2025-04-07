#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c140);

PROC_DECLARE(0x623d000, internal_623d000, public_623d000);
extern "C" NAKED register_t __cdecl internal_623d000()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c140
        UNREACHABLE_TRAP(0x623d000)
    }
}
