#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4fe50);

PROC_DECLARE(0x6d4fe50, internal_6d4fe50, public_6d4fe50);
extern "C" NAKED register_t __cdecl internal_6d4fe50()
{
    __asm
    {
        push ebp
        mov ebp, esp
        movss xmm0, dword ptr ss : [ebp+0x1C]
        movss xmm1, xmm0
        mulss xmm1, xmm0
        movss xmm2, xmm0
        shufps xmm0, xmm0, 0
        mulss xmm2, xmm1
        shufps xmm1, xmm1, 0
        mulps xmm0, xmmword ptr ds : [public_6d6e500]
        shufps xmm2, xmm2, 0
        mulps xmm1, xmmword ptr ds : [public_6d6e4f0]
        addss xmm0, dword ptr ds : [public_6d6e4e0]
        mulps xmm2, xmmword ptr ds : [public_6d6e4d0]
        addps xmm0, xmm1
        addps xmm0, xmm2
        mov eax, dword ptr ss : [ebp+0xC]
        movaps xmm2, xmm0
        shufps xmm2, xmm0, 0xFA
        shufps xmm0, xmm0, 0x50
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        movlps xmm4, qword ptr ds : [eax]
        movhps xmm4, qword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp+0x18]
        mulps xmm4, xmm0
        movlps xmm6, qword ptr ds : [edx]
        movhps xmm6, qword ptr ds : [eax]
        mulps xmm6, xmm2
        mov ecx, dword ptr ss : [ebp+8]
        addps xmm4, xmm6
        movhlps xmm3, xmm4
        addps xmm4, xmm3
        movlps qword ptr ds : [ecx], xmm4
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6d4fe50)
    }
}
