#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ad40);
CLANG_FORWARD_PROC_SYMBOL(public_623ffb0);

PROC_DECLARE(0x623ad40, internal_623ad40, public_623ad40);
extern "C" NAKED register_t __cdecl internal_623ad40()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 0xC
        mov dword ptr ss : [esp+4], edx
        jmp public_623ffb0
        UNREACHABLE_TRAP(0x623ad40)
    }
}
