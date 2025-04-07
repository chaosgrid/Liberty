#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620eb40);

PROC_DECLARE(0x620edf0, internal_620edf0, public_620edf0);
extern "C" NAKED register_t __cdecl internal_620edf0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620eb40
        UNREACHABLE_TRAP(0x620edf0)
    }
}
