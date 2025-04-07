#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202770);
CLANG_FORWARD_PROC_SYMBOL(public_623ffb0);

PROC_DECLARE(0x6202770, internal_6202770, public_6202770);
extern "C" NAKED register_t __cdecl internal_6202770()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623ffb0
        UNREACHABLE_TRAP(0x6202770)
    }
}
