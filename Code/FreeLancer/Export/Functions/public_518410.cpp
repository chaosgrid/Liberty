#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420f70);
CLANG_FORWARD_PROC_SYMBOL(public_518410);

PROC_DECLARE(0x518410, internal_518410, public_518410);
extern "C" NAKED register_t __cdecl internal_518410()
{
    __asm
    {
        add ecx, 0x190
        jmp public_420f70
        UNREACHABLE_TRAP(0x518410)
    }
}
