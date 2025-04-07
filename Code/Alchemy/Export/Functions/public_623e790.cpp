#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e080);

PROC_DECLARE(0x623e790, internal_623e790, public_623e790);
extern "C" NAKED register_t __cdecl internal_623e790()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623e080
        UNREACHABLE_TRAP(0x623e790)
    }
}
