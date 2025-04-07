#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ec90);

PROC_DECLARE(0x620ee00, internal_620ee00, public_620ee00);
extern "C" NAKED register_t __cdecl internal_620ee00()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620ec90
        UNREACHABLE_TRAP(0x620ee00)
    }
}
