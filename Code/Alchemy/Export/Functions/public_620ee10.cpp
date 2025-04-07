#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ecb0);

PROC_DECLARE(0x620ee10, internal_620ee10, public_620ee10);
extern "C" NAKED register_t __cdecl internal_620ee10()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620ecb0
        UNREACHABLE_TRAP(0x620ee10)
    }
}
