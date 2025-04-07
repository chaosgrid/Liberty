#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dbe0);

PROC_DECLARE(0x620d920, internal_620d920, public_620d920);
extern "C" NAKED register_t __cdecl internal_620d920()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620dbe0
        UNREACHABLE_TRAP(0x620d920)
    }
}
