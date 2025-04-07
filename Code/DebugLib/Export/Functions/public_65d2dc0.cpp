#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d10c0);
CLANG_FORWARD_PROC_SYMBOL(public_65d2dc0);

PROC_DECLARE(0x65d2dc0, internal_65d2dc0, public_65d2dc0);
extern "C" NAKED register_t __cdecl internal_65d2dc0()
{
    __asm
    {
        jmp public_65d10c0
        UNREACHABLE_TRAP(0x65d2dc0)
    }
}
