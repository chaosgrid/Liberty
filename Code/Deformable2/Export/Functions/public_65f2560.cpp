#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f2570);
CLANG_FORWARD_PROC_SYMBOL(public_65f25f0);

PROC_DECLARE(0x65f2560, internal_65f2560, public_65f2560);
extern "C" NAKED register_t __cdecl internal_65f2560()
{
    __asm
    {
        call public_65f2570
        jmp public_65f25f0
        UNREACHABLE_TRAP(0x65f2560)
    }
}
