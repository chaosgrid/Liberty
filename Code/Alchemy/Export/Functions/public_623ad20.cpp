#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ad20);
CLANG_FORWARD_PROC_SYMBOL(public_62400b0);

PROC_DECLARE(0x623ad20, internal_623ad20, public_623ad20);
extern "C" NAKED register_t __cdecl internal_623ad20()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 0xC
        mov dword ptr ss : [esp+4], edx
        jmp public_62400b0
        UNREACHABLE_TRAP(0x623ad20)
    }
}
