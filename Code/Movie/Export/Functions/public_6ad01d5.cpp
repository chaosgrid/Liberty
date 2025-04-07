#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad01d5);

#define public_6ad01f9 _public_6ad01f9
#define public_6ad01fa _public_6ad01fa

PROC_DECLARE(0x6ad01d5, internal_6ad01d5, public_6ad01d5);
extern "C" NAKED register_t __cdecl internal_6ad01d5()
{
    __asm
    {
        fld st(0)
        frndint 
        fcomp 
        mov cl, 0
        wait 
        fnstsw ax
        sahf 
        jne public_6ad01fa
        fmul qword ptr ds : [public_6add540]
        inc cl
        fld st(0)
        frndint 
        fcompp 
        wait 
        fnstsw ax
        sahf 
        jne public_6ad01f9
        inc cl
        public_6ad01f9 : nop
        ret 
        public_6ad01fa : nop
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x6ad01d5)
    }
}

#undef public_6ad01f9
#undef public_6ad01fa
