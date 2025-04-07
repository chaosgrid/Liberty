#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dfb0);

PROC_DECLARE(0x620d700, internal_620d700, public_620d700);
extern "C" NAKED register_t __cdecl internal_620d700()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620dfb0
        UNREACHABLE_TRAP(0x620d700)
    }
}
