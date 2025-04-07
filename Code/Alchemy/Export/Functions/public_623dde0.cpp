#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623dde0);
CLANG_FORWARD_PROC_SYMBOL(public_623fb50);

PROC_DECLARE(0x623dde0, internal_623dde0, public_623dde0);
extern "C" NAKED register_t __cdecl internal_623dde0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623fb50
        UNREACHABLE_TRAP(0x623dde0)
    }
}
