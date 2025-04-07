#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dd70);

PROC_DECLARE(0x620da10, internal_620da10, public_620da10);
extern "C" NAKED register_t __cdecl internal_620da10()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620dd70
        UNREACHABLE_TRAP(0x620da10)
    }
}
