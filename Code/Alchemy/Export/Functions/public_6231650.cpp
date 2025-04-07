#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232160);

PROC_DECLARE(0x6231650, internal_6231650, public_6231650);
extern "C" NAKED register_t __cdecl internal_6231650()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6232160
        UNREACHABLE_TRAP(0x6231650)
    }
}
