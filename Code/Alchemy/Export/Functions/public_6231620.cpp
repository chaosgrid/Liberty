#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232200);

PROC_DECLARE(0x6231620, internal_6231620, public_6231620);
extern "C" NAKED register_t __cdecl internal_6231620()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6232200
        UNREACHABLE_TRAP(0x6231620)
    }
}
