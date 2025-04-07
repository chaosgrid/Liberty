#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6204ef0);
CLANG_FORWARD_PROC_SYMBOL(public_620df10);

PROC_DECLARE(0x620df10, internal_620df10, public_620df10);
extern "C" NAKED register_t __cdecl internal_620df10()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_6204ef0
        UNREACHABLE_TRAP(0x620df10)
    }
}
