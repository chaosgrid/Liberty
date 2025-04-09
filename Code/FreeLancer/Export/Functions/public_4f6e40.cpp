#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f79a0);
CLANG_FORWARD_PROC_SYMBOL(public_4f8d00);

#define public_4f6e55 _public_4f6e55

PROC_DECLARE(0x4f6e40, internal_4f6e40, public_4f6e40);
extern "C" NAKED register_t __cdecl internal_4f6e40()
{
    __asm
    {
        push 0x78
        call public_4f79a0
        add esp, 4
        test eax, eax
        je public_4f6e55
        mov ecx, eax
        jmp public_4f8d00
        public_4f6e55 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x4f6e40)
    }
}

#undef public_4f6e55
