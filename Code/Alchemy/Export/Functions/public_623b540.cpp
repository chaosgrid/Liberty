#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ab00);

PROC_DECLARE(0x623b540, internal_623b540, public_623b540);
extern "C" NAKED register_t __cdecl internal_623b540()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623ab00
        UNREACHABLE_TRAP(0x623b540)
    }
}
