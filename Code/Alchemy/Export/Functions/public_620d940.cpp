#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dc30);

PROC_DECLARE(0x620d940, internal_620d940, public_620d940);
extern "C" NAKED register_t __cdecl internal_620d940()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620dc30
        UNREACHABLE_TRAP(0x620d940)
    }
}
