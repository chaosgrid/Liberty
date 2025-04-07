#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218c90);

PROC_DECLARE(0x6219720, internal_6219720, public_6219720);
extern "C" NAKED register_t __cdecl internal_6219720()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6218c90
        UNREACHABLE_TRAP(0x6219720)
    }
}
