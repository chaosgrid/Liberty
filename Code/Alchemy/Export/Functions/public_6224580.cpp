#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6223cc0);

PROC_DECLARE(0x6224580, internal_6224580, public_6224580);
extern "C" NAKED register_t __cdecl internal_6224580()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6223cc0
        UNREACHABLE_TRAP(0x6224580)
    }
}
