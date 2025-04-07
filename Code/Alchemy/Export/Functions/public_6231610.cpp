#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232270);

PROC_DECLARE(0x6231610, internal_6231610, public_6231610);
extern "C" NAKED register_t __cdecl internal_6231610()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6232270
        UNREACHABLE_TRAP(0x6231610)
    }
}
