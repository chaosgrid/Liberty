#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad0326);

#define public_6ad0360 _public_6ad0360

PROC_DECLARE(0x6ad0326, internal_6ad0326, public_6ad0326);
extern "C" NAKED register_t __cdecl internal_6ad0326()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        fld qword ptr ds : [public_6ada9a0]
        fstp qword ptr ss : [ebp-8]
        fld qword ptr ds : [public_6ada998]
        fstp qword ptr ss : [ebp-0x10]
        fld qword ptr ss : [ebp-0x10]
        fdiv qword ptr ss : [ebp-8]
        fmul qword ptr ss : [ebp-8]
        fsubr qword ptr ss : [ebp-0x10]
        fstp qword ptr ss : [ebp-0x18]
        fld qword ptr ss : [ebp-0x18]
        fcomp qword ptr ds : [public_6ada990]
        fnstsw ax
        sahf 
        jbe public_6ad0360
        push 1
        pop eax
        leave 
        ret 
        public_6ad0360 : nop
        xor eax, eax
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad0326)
    }
}

#undef public_6ad0360
