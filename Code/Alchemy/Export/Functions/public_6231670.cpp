#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232180);

PROC_DECLARE(0x6231670, internal_6231670, public_6231670);
extern "C" NAKED register_t __cdecl internal_6231670()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6232180
        UNREACHABLE_TRAP(0x6231670)
    }
}
