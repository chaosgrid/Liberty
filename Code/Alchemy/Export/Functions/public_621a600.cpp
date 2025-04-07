#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a600);
CLANG_FORWARD_PROC_SYMBOL(public_623fb50);

PROC_DECLARE(0x621a600, internal_621a600, public_621a600);
extern "C" NAKED register_t __cdecl internal_621a600()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623fb50
        UNREACHABLE_TRAP(0x621a600)
    }
}
