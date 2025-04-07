#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231ea0);

PROC_DECLARE(0x6231510, internal_6231510, public_6231510);
extern "C" NAKED register_t __cdecl internal_6231510()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6231ea0
        UNREACHABLE_TRAP(0x6231510)
    }
}
