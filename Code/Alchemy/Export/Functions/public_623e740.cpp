#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e030);

PROC_DECLARE(0x623e740, internal_623e740, public_623e740);
extern "C" NAKED register_t __cdecl internal_623e740()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623e030
        UNREACHABLE_TRAP(0x623e740)
    }
}
