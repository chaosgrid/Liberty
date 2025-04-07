#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dd30);

PROC_DECLARE(0x620d990, internal_620d990, public_620d990);
extern "C" NAKED register_t __cdecl internal_620d990()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620dd30
        UNREACHABLE_TRAP(0x620d990)
    }
}
