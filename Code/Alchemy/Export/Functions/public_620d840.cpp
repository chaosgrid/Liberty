#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e3c0);

PROC_DECLARE(0x620d840, internal_620d840, public_620d840);
extern "C" NAKED register_t __cdecl internal_620d840()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620e3c0
        UNREACHABLE_TRAP(0x620d840)
    }
}
