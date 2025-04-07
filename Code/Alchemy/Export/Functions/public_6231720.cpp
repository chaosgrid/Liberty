#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231a60);

PROC_DECLARE(0x6231720, internal_6231720, public_6231720);
extern "C" NAKED register_t __cdecl internal_6231720()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6231a60
        UNREACHABLE_TRAP(0x6231720)
    }
}
