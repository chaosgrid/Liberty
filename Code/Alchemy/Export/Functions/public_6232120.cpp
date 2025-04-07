#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232120);
CLANG_FORWARD_PROC_SYMBOL(public_6244690);

PROC_DECLARE(0x6232120, internal_6232120, public_6232120);
extern "C" NAKED register_t __cdecl internal_6232120()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 0xC
        mov dword ptr ss : [esp+4], edx
        jmp public_6244690
        UNREACHABLE_TRAP(0x6232120)
    }
}
