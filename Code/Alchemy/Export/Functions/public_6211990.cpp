#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211e70);

PROC_DECLARE(0x6211990, internal_6211990, public_6211990);
extern "C" NAKED register_t __cdecl internal_6211990()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6211e70
        UNREACHABLE_TRAP(0x6211990)
    }
}
