#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6223f80);

PROC_DECLARE(0x6224430, internal_6224430, public_6224430);
extern "C" NAKED register_t __cdecl internal_6224430()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6223f80
        UNREACHABLE_TRAP(0x6224430)
    }
}
