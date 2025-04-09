#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446be0);
CLANG_FORWARD_PROC_SYMBOL(public_4481b0);

#define public_4579d0 _public_4579d0

PROC_DECLARE(0x4579c0, internal_4579c0, public_4579c0);
extern "C" NAKED register_t __cdecl internal_4579c0()
{
    __asm
    {
        call public_446be0
        test eax, eax
        je public_4579d0
        mov ecx, eax
        call public_4481b0
        public_4579d0 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x4579c0)
    }
}

#undef public_4579d0
