#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623a9a0);
CLANG_FORWARD_PROC_SYMBOL(public_623faf0);

PROC_DECLARE(0x623a9a0, internal_623a9a0, public_623a9a0);
extern "C" NAKED register_t __cdecl internal_623a9a0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623faf0
        UNREACHABLE_TRAP(0x623a9a0)
    }
}
