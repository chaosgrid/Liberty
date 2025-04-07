#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621bf40);
CLANG_FORWARD_PROC_SYMBOL(public_623fb50);

PROC_DECLARE(0x621bf40, internal_621bf40, public_621bf40);
extern "C" NAKED register_t __cdecl internal_621bf40()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623fb50
        UNREACHABLE_TRAP(0x621bf40)
    }
}
