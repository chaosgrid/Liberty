#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3c5ce);

#define public_6d3ebec _public_6d3ebec
#define public_6d3ebf1 _public_6d3ebf1
#define public_6d3ec26 _public_6d3ec26
#define public_6d3ec2f _public_6d3ec2f

PROC_DECLARE(0x6d3eba6, internal_6d3eba6, public_6d3eba6);
extern "C" NAKED register_t __cdecl internal_6d3eba6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [ecx+4]
        push ecx
        fld dword ptr ds : [ecx]
        push ecx
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp dword ptr ss : [ebp+0xC]
        fstp st(0)
        fstp st(0)
        fld1 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0xC]
        fstp dword ptr ss : [esp]
        call public_6d3c5ce
        add esp, 8
        test eax, eax
        je public_6d3ebf1
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ecx
        je public_6d3ec2f
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        public_6d3ebec : nop
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d3ec2f
        public_6d3ebf1 : nop
        fld dword ptr ss : [ebp+0xC]
        fcomp dword ptr ds : [public_6d5f8ec]
        fnstsw ax
        test ah, 0x41
        mov eax, dword ptr ss : [ebp+8]
        jne public_6d3ec26
        fld dword ptr ss : [ebp+0xC]
        fsqrt 
        fdivr dword ptr ds : [public_6d5e488]
        fld st(0)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ss : [ebp-8]
        fmul dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-4]
        jmp public_6d3ebec
        public_6d3ec26 : nop
        fldz 
        fstp dword ptr ds : [eax]
        fldz 
        fstp dword ptr ds : [eax+4]
        public_6d3ec2f : nop
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6d3eba6)
    }
}

#undef public_6d3ebec
#undef public_6d3ebf1
#undef public_6d3ec26
#undef public_6d3ec2f
