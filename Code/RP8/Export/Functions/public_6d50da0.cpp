#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d50da0);

#define public_6d50db1 _public_6d50db1

PROC_DECLARE(0x6d50da0, internal_6d50da0, public_6d50da0);
extern "C" NAKED register_t __cdecl internal_6d50da0()
{
    __asm
    {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0xFFFFFFF0
        add esp, 8
        jmp public_6d50db1
        push ebx
        mov ebx, esp
        public_6d50db1 : nop
        push ebp
        mov ebp, dword ptr ds : [ebx+0xC]
        sub esp, 0x14
        mov edx, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [ebx+8]
        movlps xmm0, qword ptr ds : [edx]
        movhps xmm0, qword ptr ds : [edx+8]
        movlps xmm2, qword ptr ds : [ecx]
        movhps xmm2, qword ptr ds : [ecx+8]
        shufps xmm2, xmm2, 0x39
        movlps xmm1, qword ptr ss : [ebp]
        movhps xmm1, qword ptr ss : [ebp+8]
        shufps xmm1, xmm1, 0x39
        movaps xmm3, xmm0
        shufps xmm0, xmm0, 0x4E
        movaps xmm4, xmm0
        shufps xmm0, xmm0, 0x39
        mulps xmm0, xmm2
        mulps xmm4, xmm2
        mulps xmm2, xmm3
        movaps xmm3, xmm0
        shufps xmm0, xmm0, 0x4E
        subps xmm0, xmm3
        movaps xmm3, xmm1
        shufps xmm1, xmm1, 0x39
        mulps xmm0, xmm1
        shufps xmm1, xmm1, 0x39
        movaps xmm5, xmm4
        shufps xmm4, xmm4, 0x39
        movaps xmm6, xmm2
        shufps xmm2, xmm2, 0x4E
        subps xmm4, xmm2
        mulps xmm3, xmm4
        addps xmm3, xmm0
        shufps xmm6, xmm6, 0x39
        subps xmm5, xmm6
        mulps xmm1, xmm5
        addps xmm3, xmm1
        xorps xmm3, xmmword ptr ds : [public_6d6e660]
        movups xmmword ptr ds : [eax], xmm3
        add esp, 0x14
        pop ebp
        mov esp, ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6d50da0)
    }
}

#undef public_6d50db1
