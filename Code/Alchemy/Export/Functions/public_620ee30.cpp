#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ece0);

PROC_DECLARE(0x620ee30, internal_620ee30, public_620ee30);
extern "C" NAKED register_t __cdecl internal_620ee30()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620ece0
        UNREACHABLE_TRAP(0x620ee30)
    }
}
