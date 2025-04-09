#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_429140);
CLANG_FORWARD_PROC_SYMBOL(public_50c300);

PROC_DECLARE(0x50c300, internal_50c300, public_50c300);
extern "C" NAKED register_t __cdecl internal_50c300()
{
    __asm
    {
        jmp public_429140
        UNREACHABLE_TRAP(0x50c300)
    }
}
