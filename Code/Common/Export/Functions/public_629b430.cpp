#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b430);
CLANG_FORWARD_PROC_SYMBOL(public_629b440);

PROC_DECLARE(0x629b430, internal_629b430, public_629b430);
extern "C" NAKED register_t __cdecl internal_629b430()
{
    __asm
    {
        jmp public_629b440
        UNREACHABLE_TRAP(0x629b430)
    }
}
