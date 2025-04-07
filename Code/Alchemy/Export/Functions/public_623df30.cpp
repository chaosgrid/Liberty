#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623df30);
CLANG_FORWARD_PROC_SYMBOL(public_623f9e0);

PROC_DECLARE(0x623df30, internal_623df30, public_623df30);
extern "C" NAKED register_t __cdecl internal_623df30()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623f9e0
        UNREACHABLE_TRAP(0x623df30)
    }
}
