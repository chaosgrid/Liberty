#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c1d0);

PROC_DECLARE(0x623d080, internal_623d080, public_623d080);
extern "C" NAKED register_t __cdecl internal_623d080()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c1d0
        UNREACHABLE_TRAP(0x623d080)
    }
}
