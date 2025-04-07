#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620eac0);

PROC_DECLARE(0x620eda0, internal_620eda0, public_620eda0);
extern "C" NAKED register_t __cdecl internal_620eda0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620eac0
        UNREACHABLE_TRAP(0x620eda0)
    }
}
