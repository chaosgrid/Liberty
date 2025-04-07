#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d511e0);

#define public_6d511f1 _public_6d511f1

PROC_DECLARE(0x6d511e0, internal_6d511e0, public_6d511e0);
extern "C" NAKED register_t __cdecl internal_6d511e0()
{
    __asm
    {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0xFFFFFFF0
        add esp, 8
        jmp public_6d511f1
        push ebx
        mov ebx, esp
        public_6d511f1 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [ebx+8]
        sub esp, 0x18
        movhps xmm1, qword ptr ds : [edx+8]
        movlps xmm1, qword ptr ds : [edx]
        movaps xmm0, xmmword ptr ds : [public_6d6e760]
        andps xmm0, xmm1
        mulps xmm0, xmm0
        movss xmm2, dword ptr ds : [public_6d6e740]
        movss xmm3, dword ptr ds : [public_6d6e750]
        movaps xmm4, xmm0
        movhlps xmm0, xmm0
        addps xmm4, xmm0
        movaps xmm0, xmm4
        shufps xmm4, xmm4, 1
        addss xmm0, xmm4
        movaps xmm4, xmmword ptr ds : [public_6d6e730]
        movaps xmm5, xmm0
        rsqrtss xmm0, xmm0
        mulss xmm5, xmm0
        mulss xmm5, xmm0
        subss xmm2, xmm5
        mulss xmm3, xmm0
        mulss xmm3, xmm2
        shufps xmm3, xmm3, 0
        mulps xmm1, xmm3
        mulps xmm4, xmm1
        movaps xmm0, xmm1
        shufps xmm1, xmm1, 0
        mulps xmm1, xmm4
        addps xmm1, xmmword ptr ds : [public_6d6e720]
        movaps xmm2, xmm0
        shufps xmm0, xmm0, 0xFF
        mulps xmm0, xmm4
        addps xmm0, xmmword ptr ds : [public_6d6e6f0]
        movaps xmm3, xmm2
        shufps xmm2, xmm2, 0xAA
        mulps xmm2, xmm4
        addps xmm2, xmmword ptr ds : [public_6d6e700]
        shufps xmm3, xmm3, 0x55
        mulps xmm4, xmm3
        addps xmm4, xmmword ptr ds : [public_6d6e710]
        movups xmmword ptr ds : [eax], xmm1
        movups xmmword ptr ds : [eax+0x10], xmm4
        movups xmmword ptr ds : [eax+0x20], xmm2
        movups xmmword ptr ds : [eax+0x30], xmm0
        mov esp, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d511e0)
    }
}

#undef public_6d511f1
