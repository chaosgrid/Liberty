#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6392320);
CLANG_FORWARD_PROC_SYMBOL(public_6392330);

PROC_DECLARE(0x6392310, internal_6392310, public_6392310);
extern "C" NAKED register_t __cdecl internal_6392310()
{
    __asm
    {
        call public_6392320
        jmp public_6392330
        UNREACHABLE_TRAP(0x6392310)
    }
}
