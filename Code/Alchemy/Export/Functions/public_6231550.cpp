#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232090);

PROC_DECLARE(0x6231550, internal_6231550, public_6231550);
extern "C" NAKED register_t __cdecl internal_6231550()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6232090
        UNREACHABLE_TRAP(0x6231550)
    }
}
