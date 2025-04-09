#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4582b0);
CLANG_FORWARD_PROC_SYMBOL(public_558580);

PROC_DECLARE(0x4582b0, internal_4582b0, public_4582b0);
extern "C" NAKED register_t __cdecl internal_4582b0()
{
    __asm
    {
        add ecx, 0x20
        jmp public_558580
        UNREACHABLE_TRAP(0x4582b0)
    }
}
