#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c1e0);

PROC_DECLARE(0x623d090, internal_623d090, public_623d090);
extern "C" NAKED register_t __cdecl internal_623d090()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c1e0
        UNREACHABLE_TRAP(0x623d090)
    }
}
