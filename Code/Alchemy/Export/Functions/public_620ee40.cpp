#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ed00);

PROC_DECLARE(0x620ee40, internal_620ee40, public_620ee40);
extern "C" NAKED register_t __cdecl internal_620ee40()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620ed00
        UNREACHABLE_TRAP(0x620ee40)
    }
}
