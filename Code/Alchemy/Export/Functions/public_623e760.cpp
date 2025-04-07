#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e110);

PROC_DECLARE(0x623e760, internal_623e760, public_623e760);
extern "C" NAKED register_t __cdecl internal_623e760()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623e110
        UNREACHABLE_TRAP(0x623e760)
    }
}
