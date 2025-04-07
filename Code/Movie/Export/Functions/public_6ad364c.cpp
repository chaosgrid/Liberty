#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad364c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad77bf);
CLANG_FORWARD_PROC_SYMBOL(public_6ad77d1);

#define public_6ad36a8 _public_6ad36a8
#define public_6ad36aa _public_6ad36aa
#define public_6ad36ad _public_6ad36ad

PROC_DECLARE(0x6ad364c, internal_6ad364c, public_6ad364c);
extern "C" NAKED register_t __cdecl internal_6ad364c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        fld qword ptr ss : [ebp+8]
        push ecx
        push ecx
        fstp qword ptr ss : [esp]
        call public_6ad77d1
        pop ecx
        test al, 0x90
        pop ecx
        jne public_6ad36ad
        fld qword ptr ss : [ebp+8]
        push ecx
        push ecx
        fstp qword ptr ss : [esp]
        call public_6ad77bf
        fstp qword ptr ss : [ebp-8]
        fld qword ptr ss : [ebp-8]
        fcomp qword ptr ss : [ebp+8]
        pop ecx
        pop ecx
        fnstsw ax
        sahf 
        jne public_6ad36ad
        fld qword ptr ss : [ebp+8]
        fdiv qword ptr ds : [public_6adae98]
        push ecx
        push ecx
        fstp qword ptr ss : [ebp+8]
        fld qword ptr ss : [ebp+8]
        fstp qword ptr ss : [esp]
        call public_6ad77bf
        fcomp qword ptr ss : [ebp+8]
        pop ecx
        pop ecx
        fnstsw ax
        sahf 
        jne public_6ad36a8
        push 2
        jmp public_6ad36aa
        public_6ad36a8 : nop
        push 1
        public_6ad36aa : nop
        pop eax
        leave 
        ret 
        public_6ad36ad : nop
        xor eax, eax
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad364c)
    }
}

#undef public_6ad36a8
#undef public_6ad36aa
#undef public_6ad36ad
