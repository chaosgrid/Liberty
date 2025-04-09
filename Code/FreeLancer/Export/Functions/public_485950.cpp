#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_485950);
CLANG_FORWARD_PROC_SYMBOL(public_579380);

PROC_DECLARE(0x485950, internal_485950, public_485950);
extern "C" NAKED register_t __cdecl internal_485950()
{
    __asm
    {
        mov ecx, offset public_671f14
        jmp public_579380
        UNREACHABLE_TRAP(0x485950)
    }
}
