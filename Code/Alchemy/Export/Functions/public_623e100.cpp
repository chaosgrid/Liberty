#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e100);
CLANG_FORWARD_PROC_SYMBOL(public_62400b0);

PROC_DECLARE(0x623e100, internal_623e100, public_623e100);
extern "C" NAKED register_t __cdecl internal_623e100()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_62400b0
        UNREACHABLE_TRAP(0x623e100)
    }
}
