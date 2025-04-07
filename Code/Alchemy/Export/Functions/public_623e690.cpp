#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623deb0);

PROC_DECLARE(0x623e690, internal_623e690, public_623e690);
extern "C" NAKED register_t __cdecl internal_623e690()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623deb0
        UNREACHABLE_TRAP(0x623e690)
    }
}
