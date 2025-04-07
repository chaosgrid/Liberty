#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_42d730);
CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_4c4810);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_45a770 _public_45a770
#define public_45a77c _public_45a77c

PROC_DECLARE(0x45a740, internal_45a740, public_45a740);
extern "C" NAKED register_t __cdecl internal_45a740()
{
    __asm
    {
        mov al, byte ptr ds : [public_67dcc8]
        test al, al
        jne public_45a77c
        call public_41dd90
        test al, al
        je public_45a77c
        call public_42d730
        test al, al
        jne public_45a77c
        mov al, byte ptr ds : [public_668761]
        test al, al
        jne public_45a77c
        call public_4c4810
        test al, al
        je public_45a770
        xor al, al
        ret 
        public_45a770 : nop
        call public_54baf0
        neg eax
        sbb al, al
        inc al
        ret 
        public_45a77c : nop
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x45a740)
    }
}

#undef public_45a770
#undef public_45a77c
