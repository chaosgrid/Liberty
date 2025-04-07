#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211e10);

PROC_DECLARE(0x6211980, internal_6211980, public_6211980);
extern "C" NAKED register_t __cdecl internal_6211980()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6211e10
        UNREACHABLE_TRAP(0x6211980)
    }
}
