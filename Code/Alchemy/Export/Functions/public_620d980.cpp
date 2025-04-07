#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dd00);

PROC_DECLARE(0x620d980, internal_620d980, public_620d980);
extern "C" NAKED register_t __cdecl internal_620d980()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620dd00
        UNREACHABLE_TRAP(0x620d980)
    }
}
