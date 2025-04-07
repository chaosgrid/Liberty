#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446be0);
CLANG_FORWARD_PROC_SYMBOL(public_447f90);

#define public_4579b0 _public_4579b0

PROC_DECLARE(0x4579a0, internal_4579a0, public_4579a0);
extern "C" NAKED register_t __cdecl internal_4579a0()
{
    __asm
    {
        call public_446be0
        test eax, eax
        je public_4579b0
        mov ecx, eax
        call public_447f90
        public_4579b0 : nop
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x4579a0)
    }
}

#undef public_4579b0
