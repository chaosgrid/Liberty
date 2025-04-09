#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48a000);
CLANG_FORWARD_PROC_SYMBOL(public_579380);

PROC_DECLARE(0x48a000, internal_48a000, public_48a000);
extern "C" NAKED register_t __cdecl internal_48a000()
{
    __asm
    {
        mov ecx, offset public_671fb8
        jmp public_579380
        UNREACHABLE_TRAP(0x48a000)
    }
}
