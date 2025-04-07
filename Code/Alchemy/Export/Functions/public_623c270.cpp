#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c270);
CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

PROC_DECLARE(0x623c270, internal_623c270, public_623c270);
extern "C" NAKED register_t __cdecl internal_623c270()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x623c270)
    }
}
