#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620df10);

PROC_DECLARE(0x620d6c0, internal_620d6c0, public_620d6c0);
extern "C" NAKED register_t __cdecl internal_620d6c0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620df10
        UNREACHABLE_TRAP(0x620d6c0)
    }
}
