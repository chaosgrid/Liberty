#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e420);

PROC_DECLARE(0x620d800, internal_620d800, public_620d800);
extern "C" NAKED register_t __cdecl internal_620d800()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620e420
        UNREACHABLE_TRAP(0x620d800)
    }
}
