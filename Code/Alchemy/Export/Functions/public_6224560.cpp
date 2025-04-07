#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6223d50);

PROC_DECLARE(0x6224560, internal_6224560, public_6224560);
extern "C" NAKED register_t __cdecl internal_6224560()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6223d50
        UNREACHABLE_TRAP(0x6224560)
    }
}
