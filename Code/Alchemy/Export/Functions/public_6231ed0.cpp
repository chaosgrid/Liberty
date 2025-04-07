#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231ed0);
CLANG_FORWARD_PROC_SYMBOL(public_623ffb0);

PROC_DECLARE(0x6231ed0, internal_6231ed0, public_6231ed0);
extern "C" NAKED register_t __cdecl internal_6231ed0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 0xC
        mov dword ptr ss : [esp+4], edx
        jmp public_623ffb0
        UNREACHABLE_TRAP(0x6231ed0)
    }
}
