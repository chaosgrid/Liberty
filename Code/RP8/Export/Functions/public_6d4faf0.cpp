#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4faf0);

PROC_DECLARE(0x6d4faf0, internal_6d4faf0, public_6d4faf0);
extern "C" NAKED register_t __cdecl internal_6d4faf0()
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
        mulps xmm0, xmmword ptr ds : [public_6d6e4c0]
        shufps xmm2, xmm2, 0
        mulps xmm1, xmmword ptr ds : [public_6d6e4b0]
        addps xmm0, xmmword ptr ds : [public_6d6e4a0]
        mulps xmm2, xmmword ptr ds : [public_6d6e490]
        addps xmm0, xmm1
        addps xmm0, xmm2
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        movaps xmm1, xmm0
        shufps xmm1, xmm0, 0x55
        movaps xmm2, xmm0
        shufps xmm2, xmm0, 0xAA
        movaps xmm3, xmm0
        shufps xmm3, xmm0, 0xFF
        shufps xmm0, xmm0, 0
        movss xmm4, dword ptr ds : [eax+8]
        movhps xmm4, qword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp+0x18]
        mulps xmm4, xmm0
        movss xmm5, dword ptr ds : [ecx+8]
        movhps xmm5, qword ptr ds : [ecx]
        mulps xmm5, xmm1
        movss xmm6, dword ptr ds : [edx+8]
        movhps xmm6, qword ptr ds : [edx]
        addps xmm4, xmm5
        mulps xmm6, xmm2
        addps xmm4, xmm6
        movss xmm7, dword ptr ds : [eax+8]
        movhps xmm7, qword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+8]
        mulps xmm7, xmm3
        addps xmm4, xmm7
        movhps qword ptr ds : [ecx], xmm4
        movss dword ptr ds : [ecx+8], xmm4
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6d4faf0)
    }
}
