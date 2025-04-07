#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218a90);

PROC_DECLARE(0x6219770, internal_6219770, public_6219770);
extern "C" NAKED register_t __cdecl internal_6219770()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6218a90
        UNREACHABLE_TRAP(0x6219770)
    }
}
