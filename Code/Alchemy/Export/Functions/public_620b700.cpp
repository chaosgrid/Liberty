#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b700);
CLANG_FORWARD_PROC_SYMBOL(public_6244b50);

PROC_DECLARE(0x620b700, internal_620b700, public_620b700);
extern "C" NAKED register_t __cdecl internal_620b700()
{
    __asm
    {
        jmp public_6244b50
        UNREACHABLE_TRAP(0x620b700)
    }
}
