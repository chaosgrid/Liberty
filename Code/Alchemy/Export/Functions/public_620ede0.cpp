#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ea50);

PROC_DECLARE(0x620ede0, internal_620ede0, public_620ede0);
extern "C" NAKED register_t __cdecl internal_620ede0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620ea50
        UNREACHABLE_TRAP(0x620ede0)
    }
}
