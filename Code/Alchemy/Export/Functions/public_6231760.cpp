#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231ad0);

PROC_DECLARE(0x6231760, internal_6231760, public_6231760);
extern "C" NAKED register_t __cdecl internal_6231760()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6231ad0
        UNREACHABLE_TRAP(0x6231760)
    }
}
