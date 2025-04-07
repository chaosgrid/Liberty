#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623de30);

PROC_DECLARE(0x623e600, internal_623e600, public_623e600);
extern "C" NAKED register_t __cdecl internal_623e600()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623de30
        UNREACHABLE_TRAP(0x623e600)
    }
}
