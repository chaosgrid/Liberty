#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e190);

PROC_DECLARE(0x620d770, internal_620d770, public_620d770);
extern "C" NAKED register_t __cdecl internal_620d770()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620e190
        UNREACHABLE_TRAP(0x620d770)
    }
}
