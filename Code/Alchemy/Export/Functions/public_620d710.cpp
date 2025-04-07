#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dfc0);

PROC_DECLARE(0x620d710, internal_620d710, public_620d710);
extern "C" NAKED register_t __cdecl internal_620d710()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620dfc0
        UNREACHABLE_TRAP(0x620d710)
    }
}
