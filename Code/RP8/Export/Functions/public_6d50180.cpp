#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d50180);

#define public_6d50191 _public_6d50191

PROC_DECLARE(0x6d50180, internal_6d50180, public_6d50180);
extern "C" NAKED register_t __cdecl internal_6d50180()
{
    __asm
    {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0xFFFFFFF0
        add esp, 8
        jmp public_6d50191
        push ebx
        mov ebx, esp
        public_6d50191 : nop
        push ebp
        mov ebp, dword ptr ds : [ebx+0xC]
        sub esp, 0x14
        mov edx, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [ebx+8]
        movss xmm0, dword ptr ss : [ebp+8]
        movss xmm1, dword ptr ds : [edx+8]
        movhps xmm0, qword ptr ss : [ebp]
        movhps xmm1, qword ptr ds : [edx]
        movss xmm2, dword ptr ds : [ecx+8]
        movhps xmm2, qword ptr ds : [ecx]
        movaps xmm3, xmm0
        subps xmm0, xmm1
        movaps xmm1, xmm0
        shufps xmm0, xmm0, 0x78
        shufps xmm1, xmm1, 0x63
        movaps xmm4, xmm3
        subps xmm3, xmm2
        movaps xmm2, xmmword ptr ds : [public_6d6e520]
        movaps xmm5, xmm3
        shufps xmm3, xmm3, 0x63
        shufps xmm5, xmm5, 0x78
        mulps xmm0, xmm3
        mulps xmm5, xmm1
        movaps xmm1, xmmword ptr ds : [public_6d6e530]
        subps xmm0, xmm5
        shufps xmm4, xmm4, 0xE
        movaps xmm3, xmm0
        mulps xmm0, xmm0
        movaps xmm5, xmm0
        movhlps xmm0, xmm0
        addps xmm5, xmm0
        movaps xmm0, xmm5
        shufps xmm5, xmm5, 1
        addss xmm0, xmm5
        movaps xmm5, xmm0
        rsqrtss xmm0, xmm0
        mulss xmm1, xmm0
        movaps xmm6, xmm5
        mulss xmm5, xmm0
        mulss xmm5, xmm0
        subss xmm2, xmm5
        mulss xmm1, xmm2
        shufps xmm1, xmm1, 0
        mulps xmm3, xmm1
        mulps xmm4, xmm3
        movups xmmword ptr ds : [eax], xmm3
        movhlps xmm6, xmm4
        movaps xmm0, xmm4
        shufps xmm4, xmm4, 0x55
        addss xmm6, xmm4
        addss xmm0, xmm6
        xorps xmm0, xmmword ptr ds : [public_6d6e510]
        movss dword ptr ds : [eax+0xC], xmm0
        add esp, 0x14
        pop ebp
        mov esp, ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6d50180)
    }
}

#undef public_6d50191
