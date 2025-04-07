#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e060);

PROC_DECLARE(0x623e710, internal_623e710, public_623e710);
extern "C" NAKED register_t __cdecl internal_623e710()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623e060
        UNREACHABLE_TRAP(0x623e710)
    }
}
