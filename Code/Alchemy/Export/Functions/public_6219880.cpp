#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219330);

PROC_DECLARE(0x6219880, internal_6219880, public_6219880);
extern "C" NAKED register_t __cdecl internal_6219880()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6219330
        UNREACHABLE_TRAP(0x6219880)
    }
}
