#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f502e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f51160);

PROC_DECLARE(0x6f502e0, internal_6f502e0, public_6f502e0);
extern "C" NAKED register_t __cdecl internal_6f502e0()
{
    __asm
    {
        add ecx, 4
        jmp public_6f51160
        UNREACHABLE_TRAP(0x6f502e0)
    }
}
