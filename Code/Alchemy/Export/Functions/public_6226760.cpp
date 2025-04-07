#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6227000);

PROC_DECLARE(0x6226760, internal_6226760, public_6226760);
extern "C" NAKED register_t __cdecl internal_6226760()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6227000
        UNREACHABLE_TRAP(0x6226760)
    }
}
