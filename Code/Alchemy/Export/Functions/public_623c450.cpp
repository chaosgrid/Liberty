#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c450);
CLANG_FORWARD_PROC_SYMBOL(public_623ffb0);

PROC_DECLARE(0x623c450, internal_623c450, public_623c450);
extern "C" NAKED register_t __cdecl internal_623c450()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623ffb0
        UNREACHABLE_TRAP(0x623c450)
    }
}
