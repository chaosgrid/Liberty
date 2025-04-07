#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232210);

PROC_DECLARE(0x6231630, internal_6231630, public_6231630);
extern "C" NAKED register_t __cdecl internal_6231630()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6232210
        UNREACHABLE_TRAP(0x6231630)
    }
}
