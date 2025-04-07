#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623df40);

PROC_DECLARE(0x623e700, internal_623e700, public_623e700);
extern "C" NAKED register_t __cdecl internal_623e700()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623df40
        UNREACHABLE_TRAP(0x623e700)
    }
}
