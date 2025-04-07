#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6236b30);

PROC_DECLARE(0x6237660, internal_6237660, public_6237660);
extern "C" NAKED register_t __cdecl internal_6237660()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6236b30
        UNREACHABLE_TRAP(0x6237660)
    }
}
