#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232230);

PROC_DECLARE(0x6231640, internal_6231640, public_6231640);
extern "C" NAKED register_t __cdecl internal_6231640()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6232230
        UNREACHABLE_TRAP(0x6231640)
    }
}
