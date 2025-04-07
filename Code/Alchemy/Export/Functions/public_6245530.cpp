#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6245260);

PROC_DECLARE(0x6245530, internal_6245530, public_6245530);
extern "C" NAKED register_t __cdecl internal_6245530()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6245260
        UNREACHABLE_TRAP(0x6245530)
    }
}
