#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_562700);
CLANG_FORWARD_PROC_SYMBOL(public_579380);

PROC_DECLARE(0x562700, internal_562700, public_562700);
extern "C" NAKED register_t __cdecl internal_562700()
{
    __asm
    {
        mov ecx, offset public_67a444
        jmp public_579380
        UNREACHABLE_TRAP(0x562700)
    }
}
