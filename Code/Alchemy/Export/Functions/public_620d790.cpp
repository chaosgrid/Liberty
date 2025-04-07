#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e1c0);

PROC_DECLARE(0x620d790, internal_620d790, public_620d790);
extern "C" NAKED register_t __cdecl internal_620d790()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620e1c0
        UNREACHABLE_TRAP(0x620d790)
    }
}
