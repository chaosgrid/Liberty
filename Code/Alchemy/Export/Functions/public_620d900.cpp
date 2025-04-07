#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dbc0);

PROC_DECLARE(0x620d900, internal_620d900, public_620d900);
extern "C" NAKED register_t __cdecl internal_620d900()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620dbc0
        UNREACHABLE_TRAP(0x620d900)
    }
}
