#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ea30);

PROC_DECLARE(0x620edd0, internal_620edd0, public_620edd0);
extern "C" NAKED register_t __cdecl internal_620edd0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620ea30
        UNREACHABLE_TRAP(0x620edd0)
    }
}
