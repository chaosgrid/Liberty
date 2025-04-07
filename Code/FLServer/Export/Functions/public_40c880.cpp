#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40c880);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);

PROC_DECLARE(0x40c880, internal_40c880, public_40c880);
extern "C" NAKED register_t __cdecl internal_40c880()
{
    __asm
    {
        jmp public_418a98
        UNREACHABLE_TRAP(0x40c880)
    }
}
