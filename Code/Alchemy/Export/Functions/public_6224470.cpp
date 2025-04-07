#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6224120);

PROC_DECLARE(0x6224470, internal_6224470, public_6224470);
extern "C" NAKED register_t __cdecl internal_6224470()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6224120
        UNREACHABLE_TRAP(0x6224470)
    }
}
