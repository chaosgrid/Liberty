#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623a940);
CLANG_FORWARD_PROC_SYMBOL(public_623fb50);

PROC_DECLARE(0x623a940, internal_623a940, public_623a940);
extern "C" NAKED register_t __cdecl internal_623a940()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623fb50
        UNREACHABLE_TRAP(0x623a940)
    }
}
