#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620eab0);

PROC_DECLARE(0x620ed90, internal_620ed90, public_620ed90);
extern "C" NAKED register_t __cdecl internal_620ed90()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620eab0
        UNREACHABLE_TRAP(0x620ed90)
    }
}
