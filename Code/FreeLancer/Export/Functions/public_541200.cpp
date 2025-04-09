#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_541200);
CLANG_FORWARD_PROC_SYMBOL(public_5b7326);

PROC_DECLARE(0x541200, internal_541200, public_541200);
extern "C" NAKED register_t __cdecl internal_541200()
{
    __asm
    {
        add ecx, 0x10
        jmp public_5b7326
        UNREACHABLE_TRAP(0x541200)
    }
}
