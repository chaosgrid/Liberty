#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7ef0);

PROC_DECLARE(0x65d6f68, internal_65d6f68, public_65d6f68);
extern "C" NAKED register_t __cdecl internal_65d6f68()
{
    __asm
    {
        push 0x19
        call public_65d7ef0
        UNREACHABLE_TRAP(0x65d6f68)
    }
}
