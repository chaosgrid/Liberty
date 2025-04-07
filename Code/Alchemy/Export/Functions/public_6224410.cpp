#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6223e70);

PROC_DECLARE(0x6224410, internal_6224410, public_6224410);
extern "C" NAKED register_t __cdecl internal_6224410()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6223e70
        UNREACHABLE_TRAP(0x6224410)
    }
}
