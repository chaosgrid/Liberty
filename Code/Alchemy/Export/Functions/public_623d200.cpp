#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c630);

PROC_DECLARE(0x623d200, internal_623d200, public_623d200);
extern "C" NAKED register_t __cdecl internal_623d200()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c630
        UNREACHABLE_TRAP(0x623d200)
    }
}
