#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231e50);

PROC_DECLARE(0x6231530, internal_6231530, public_6231530);
extern "C" NAKED register_t __cdecl internal_6231530()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6231e50
        UNREACHABLE_TRAP(0x6231530)
    }
}
