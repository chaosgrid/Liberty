#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ed40);

PROC_DECLARE(0x620ee50, internal_620ee50, public_620ee50);
extern "C" NAKED register_t __cdecl internal_620ee50()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620ed40
        UNREACHABLE_TRAP(0x620ee50)
    }
}
