#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c4660);
CLANG_FORWARD_PROC_SYMBOL(public_65c5680);

PROC_DECLARE(0x65c4660, internal_65c4660, public_65c4660);
extern "C" NAKED register_t __cdecl internal_65c4660()
{
    __asm
    {
        mov ecx, offset public_65ca258
        jmp public_65c5680
        UNREACHABLE_TRAP(0x65c4660)
    }
}
