#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202430);
CLANG_FORWARD_PROC_SYMBOL(public_6227770);

PROC_DECLARE(0x6202430, internal_6202430, public_6202430);
extern "C" NAKED register_t __cdecl internal_6202430()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_6227770
        UNREACHABLE_TRAP(0x6202430)
    }
}
