#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219500);

PROC_DECLARE(0x6219960, internal_6219960, public_6219960);
extern "C" NAKED register_t __cdecl internal_6219960()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6219500
        UNREACHABLE_TRAP(0x6219960)
    }
}
