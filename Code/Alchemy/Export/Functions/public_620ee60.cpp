#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ed20);

PROC_DECLARE(0x620ee60, internal_620ee60, public_620ee60);
extern "C" NAKED register_t __cdecl internal_620ee60()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620ed20
        UNREACHABLE_TRAP(0x620ee60)
    }
}
