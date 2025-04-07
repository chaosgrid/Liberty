#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ecc0);

PROC_DECLARE(0x620ee20, internal_620ee20, public_620ee20);
extern "C" NAKED register_t __cdecl internal_620ee20()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620ecc0
        UNREACHABLE_TRAP(0x620ee20)
    }
}
