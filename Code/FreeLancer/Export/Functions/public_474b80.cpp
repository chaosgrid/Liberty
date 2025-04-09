#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_474b80);
CLANG_FORWARD_PROC_SYMBOL(public_579380);

PROC_DECLARE(0x474b80, internal_474b80, public_474b80);
extern "C" NAKED register_t __cdecl internal_474b80()
{
    __asm
    {
        mov ecx, offset public_66dc18
        jmp public_579380
        UNREACHABLE_TRAP(0x474b80)
    }
}
