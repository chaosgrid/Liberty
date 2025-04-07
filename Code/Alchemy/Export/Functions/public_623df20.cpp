#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623df20);
CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

PROC_DECLARE(0x623df20, internal_623df20, public_623df20);
extern "C" NAKED register_t __cdecl internal_623df20()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x623df20)
    }
}
