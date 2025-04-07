#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202420);
CLANG_FORWARD_PROC_SYMBOL(public_6227710);

PROC_DECLARE(0x6202420, internal_6202420, public_6202420);
extern "C" NAKED register_t __cdecl internal_6202420()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_6227710
        UNREACHABLE_TRAP(0x6202420)
    }
}
