#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c170);

PROC_DECLARE(0x623d030, internal_623d030, public_623d030);
extern "C" NAKED register_t __cdecl internal_623d030()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c170
        UNREACHABLE_TRAP(0x623d030)
    }
}
