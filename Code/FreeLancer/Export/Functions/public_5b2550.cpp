#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b2550);
CLANG_FORWARD_PROC_SYMBOL(public_5b2560);

PROC_DECLARE(0x5b2550, internal_5b2550, public_5b2550);
extern "C" NAKED register_t __cdecl internal_5b2550()
{
    __asm
    {
        mov ecx, offset public_67ea60
        jmp public_5b2560
        UNREACHABLE_TRAP(0x5b2550)
    }
}
