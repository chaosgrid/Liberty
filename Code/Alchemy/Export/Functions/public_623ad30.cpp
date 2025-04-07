#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ad30);
CLANG_FORWARD_PROC_SYMBOL(public_62400f0);

PROC_DECLARE(0x623ad30, internal_623ad30, public_623ad30);
extern "C" NAKED register_t __cdecl internal_623ad30()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 0xC
        mov dword ptr ss : [esp+4], edx
        jmp public_62400f0
        UNREACHABLE_TRAP(0x623ad30)
    }
}
