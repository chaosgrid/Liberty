#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620df30);

PROC_DECLARE(0x620d740, internal_620d740, public_620d740);
extern "C" NAKED register_t __cdecl internal_620d740()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620df30
        UNREACHABLE_TRAP(0x620d740)
    }
}
