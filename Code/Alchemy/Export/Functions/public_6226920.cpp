#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226c50);

PROC_DECLARE(0x6226920, internal_6226920, public_6226920);
extern "C" NAKED register_t __cdecl internal_6226920()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6226c50
        UNREACHABLE_TRAP(0x6226920)
    }
}
