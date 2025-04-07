#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ead0);

PROC_DECLARE(0x620edb0, internal_620edb0, public_620edb0);
extern "C" NAKED register_t __cdecl internal_620edb0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620ead0
        UNREACHABLE_TRAP(0x620edb0)
    }
}
