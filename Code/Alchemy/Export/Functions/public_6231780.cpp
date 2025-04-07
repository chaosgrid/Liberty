#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231aa0);

PROC_DECLARE(0x6231780, internal_6231780, public_6231780);
extern "C" NAKED register_t __cdecl internal_6231780()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6231aa0
        UNREACHABLE_TRAP(0x6231780)
    }
}
