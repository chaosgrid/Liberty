#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6237c00);
CLANG_FORWARD_PROC_SYMBOL(public_623a950);

PROC_DECLARE(0x623a950, internal_623a950, public_623a950);
extern "C" NAKED register_t __cdecl internal_623a950()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_6237c00
        UNREACHABLE_TRAP(0x623a950)
    }
}
