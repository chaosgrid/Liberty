#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c280);
CLANG_FORWARD_PROC_SYMBOL(public_623f9e0);

PROC_DECLARE(0x623c280, internal_623c280, public_623c280);
extern "C" NAKED register_t __cdecl internal_623c280()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623f9e0
        UNREACHABLE_TRAP(0x623c280)
    }
}
