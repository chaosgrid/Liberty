#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59d400);
CLANG_FORWARD_PROC_SYMBOL(public_59d410);

PROC_DECLARE(0x59d400, internal_59d400, public_59d400);
extern "C" NAKED register_t __cdecl internal_59d400()
{
    __asm
    {
        mov ecx, offset public_67dbf0
        jmp public_59d410
        UNREACHABLE_TRAP(0x59d400)
    }
}
