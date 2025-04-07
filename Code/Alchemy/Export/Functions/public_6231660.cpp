#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232170);

PROC_DECLARE(0x6231660, internal_6231660, public_6231660);
extern "C" NAKED register_t __cdecl internal_6231660()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6232170
        UNREACHABLE_TRAP(0x6231660)
    }
}
