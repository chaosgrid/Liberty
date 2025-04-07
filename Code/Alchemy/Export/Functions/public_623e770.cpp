#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e120);

PROC_DECLARE(0x623e770, internal_623e770, public_623e770);
extern "C" NAKED register_t __cdecl internal_623e770()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623e120
        UNREACHABLE_TRAP(0x623e770)
    }
}
