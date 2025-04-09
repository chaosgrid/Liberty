#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5374e0);
CLANG_FORWARD_PROC_SYMBOL(public_537a90);

#define public_513498 _public_513498

PROC_DECLARE(0x513480, internal_513480, public_513480);
extern "C" NAKED register_t __cdecl internal_513480()
{
    __asm
    {
        push 0x12C
        call public_537a90
        add esp, 4
        test eax, eax
        je public_513498
        mov ecx, eax
        jmp public_5374e0
        public_513498 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x513480)
    }
}

#undef public_513498
