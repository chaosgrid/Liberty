#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235310);
CLANG_FORWARD_PROC_SYMBOL(public_623fb50);

PROC_DECLARE(0x6235310, internal_6235310, public_6235310);
extern "C" NAKED register_t __cdecl internal_6235310()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623fb50
        UNREACHABLE_TRAP(0x6235310)
    }
}
