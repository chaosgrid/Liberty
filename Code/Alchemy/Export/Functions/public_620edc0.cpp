#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620eaa0);

PROC_DECLARE(0x620edc0, internal_620edc0, public_620edc0);
extern "C" NAKED register_t __cdecl internal_620edc0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620eaa0
        UNREACHABLE_TRAP(0x620edc0)
    }
}
