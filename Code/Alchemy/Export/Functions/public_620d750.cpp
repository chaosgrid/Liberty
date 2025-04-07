#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620df50);

PROC_DECLARE(0x620d750, internal_620d750, public_620d750);
extern "C" NAKED register_t __cdecl internal_620d750()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620df50
        UNREACHABLE_TRAP(0x620d750)
    }
}
