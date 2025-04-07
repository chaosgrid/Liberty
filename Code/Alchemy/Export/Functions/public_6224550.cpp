#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6223c90);

PROC_DECLARE(0x6224550, internal_6224550, public_6224550);
extern "C" NAKED register_t __cdecl internal_6224550()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6223c90
        UNREACHABLE_TRAP(0x6224550)
    }
}
