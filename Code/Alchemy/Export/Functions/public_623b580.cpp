#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623a920);

PROC_DECLARE(0x623b580, internal_623b580, public_623b580);
extern "C" NAKED register_t __cdecl internal_623b580()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623a920
        UNREACHABLE_TRAP(0x623b580)
    }
}
