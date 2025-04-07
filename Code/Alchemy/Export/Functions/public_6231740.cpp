#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231a80);

PROC_DECLARE(0x6231740, internal_6231740, public_6231740);
extern "C" NAKED register_t __cdecl internal_6231740()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6231a80
        UNREACHABLE_TRAP(0x6231740)
    }
}
