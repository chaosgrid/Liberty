#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c160);
CLANG_FORWARD_PROC_SYMBOL(public_6245b00);

PROC_DECLARE(0x623c160, internal_623c160, public_623c160);
extern "C" NAKED register_t __cdecl internal_623c160()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_6245b00
        UNREACHABLE_TRAP(0x623c160)
    }
}
