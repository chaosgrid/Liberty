#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a470);
CLANG_FORWARD_PROC_SYMBOL(public_4c7270);

#define public_4c727c _public_4c727c

PROC_DECLARE(0x4c7270, internal_4c7270, public_4c7270);
extern "C" NAKED register_t __cdecl internal_4c7270()
{
    __asm
    {
        call public_45a470
        test al, al
        je public_4c727c
        mov al, 1
        ret 
        public_4c727c : nop
        mov cl, byte ptr ds : [public_67354c]
        xor eax, eax
        test cl, cl
        sete al
        ret 
        UNREACHABLE_TRAP(0x4c7270)
    }
}

#undef public_4c727c
