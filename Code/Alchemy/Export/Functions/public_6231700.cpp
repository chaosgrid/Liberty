#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231a30);

PROC_DECLARE(0x6231700, internal_6231700, public_6231700);
extern "C" NAKED register_t __cdecl internal_6231700()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6231a30
        UNREACHABLE_TRAP(0x6231700)
    }
}
