#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c150);
CLANG_FORWARD_PROC_SYMBOL(public_6245ad0);

PROC_DECLARE(0x623c150, internal_623c150, public_623c150);
extern "C" NAKED register_t __cdecl internal_623c150()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_6245ad0
        UNREACHABLE_TRAP(0x623c150)
    }
}
