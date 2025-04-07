#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231ab0);

PROC_DECLARE(0x6231790, internal_6231790, public_6231790);
extern "C" NAKED register_t __cdecl internal_6231790()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6231ab0
        UNREACHABLE_TRAP(0x6231790)
    }
}
