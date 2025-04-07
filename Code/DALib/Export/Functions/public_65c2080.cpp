#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c1090);
CLANG_FORWARD_PROC_SYMBOL(public_65c2080);

PROC_DECLARE(0x65c2080, internal_65c2080, public_65c2080);
extern "C" NAKED register_t __cdecl internal_65c2080()
{
    __asm
    {
        mov ecx, offset public_65ca128
        jmp public_65c1090
        UNREACHABLE_TRAP(0x65c2080)
    }
}
