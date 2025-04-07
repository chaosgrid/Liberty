#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6214740);
CLANG_FORWARD_PROC_SYMBOL(public_623f9e0);

PROC_DECLARE(0x6214740, internal_6214740, public_6214740);
extern "C" NAKED register_t __cdecl internal_6214740()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623f9e0
        UNREACHABLE_TRAP(0x6214740)
    }
}
