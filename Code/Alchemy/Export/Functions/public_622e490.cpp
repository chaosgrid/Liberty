#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622e8a0);

PROC_DECLARE(0x622e490, internal_622e490, public_622e490);
extern "C" NAKED register_t __cdecl internal_622e490()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_622e8a0
        UNREACHABLE_TRAP(0x622e490)
    }
}
