#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dbd0);

PROC_DECLARE(0x620d910, internal_620d910, public_620d910);
extern "C" NAKED register_t __cdecl internal_620d910()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620dbd0
        UNREACHABLE_TRAP(0x620d910)
    }
}
