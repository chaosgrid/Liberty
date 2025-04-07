#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c200);
CLANG_FORWARD_PROC_SYMBOL(public_6245aa0);

PROC_DECLARE(0x623c200, internal_623c200, public_623c200);
extern "C" NAKED register_t __cdecl internal_623c200()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_6245aa0
        UNREACHABLE_TRAP(0x623c200)
    }
}
