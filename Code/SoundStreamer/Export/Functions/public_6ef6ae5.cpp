#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6ae5);

#define public_6ef6b1f _public_6ef6b1f

PROC_DECLARE(0x6ef6ae5, internal_6ef6ae5, public_6ef6ae5);
extern "C" NAKED register_t __cdecl internal_6ef6ae5()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        fld qword ptr ds : [public_6efc358]
        fstp qword ptr ss : [ebp-8]
        fld qword ptr ds : [public_6efc350]
        fstp qword ptr ss : [ebp-0x10]
        fld qword ptr ss : [ebp-0x10]
        fdiv qword ptr ss : [ebp-8]
        fmul qword ptr ss : [ebp-8]
        fsubr qword ptr ss : [ebp-0x10]
        fstp qword ptr ss : [ebp-0x18]
        fld qword ptr ss : [ebp-0x18]
        fcomp qword ptr ds : [public_6efc348]
        fnstsw ax
        sahf 
        jbe public_6ef6b1f
        push 1
        pop eax
        leave 
        ret 
        public_6ef6b1f : nop
        xor eax, eax
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef6ae5)
    }
}

#undef public_6ef6b1f
