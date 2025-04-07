#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6236900);

PROC_DECLARE(0x6237560, internal_6237560, public_6237560);
extern "C" NAKED register_t __cdecl internal_6237560()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6236900
        UNREACHABLE_TRAP(0x6237560)
    }
}
