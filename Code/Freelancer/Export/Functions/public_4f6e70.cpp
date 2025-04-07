#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f79a0);
CLANG_FORWARD_PROC_SYMBOL(public_4f8060);

#define public_4f6e8b _public_4f6e8b

PROC_DECLARE(0x4f6e70, internal_4f6e70, public_4f6e70);
extern "C" NAKED register_t __cdecl internal_4f6e70()
{
    __asm
    {
        push 0x84
        call public_4f79a0
        add esp, 4
        test eax, eax
        je public_4f6e8b
        push 0
        mov ecx, eax
        call public_4f8060
        ret 
        public_4f6e8b : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x4f6e70)
    }
}

#undef public_4f6e8b
