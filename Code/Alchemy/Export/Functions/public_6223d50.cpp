#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6223d50);
CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

PROC_DECLARE(0x6223d50, internal_6223d50, public_6223d50);
extern "C" NAKED register_t __cdecl internal_6223d50()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x6223d50)
    }
}
