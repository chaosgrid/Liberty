#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211e00);

PROC_DECLARE(0x6211ab0, internal_6211ab0, public_6211ab0);
extern "C" NAKED register_t __cdecl internal_6211ab0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6211e00
        UNREACHABLE_TRAP(0x6211ab0)
    }
}
