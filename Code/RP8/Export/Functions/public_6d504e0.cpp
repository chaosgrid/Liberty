#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d504e0);

PROC_DECLARE(0x6d504e0, internal_6d504e0, public_6d504e0);
extern "C" NAKED register_t __cdecl internal_6d504e0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 4
        mov dword ptr ss : [esp], ebx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+8]
        movlps xmm1, qword ptr ds : [eax]
        movhps xmm1, qword ptr ds : [eax+8]
        movlps xmm0, qword ptr ds : [ebx]
        movhps xmm0, qword ptr ds : [ebx+8]
        movaps xmm2, xmm1
        shufps xmm1, xmm1, 0xFF
        mulps xmm1, xmm0
        movaps xmm3, xmm2
        shufps xmm2, xmm2, 0
        shufps xmm0, xmm0, 0x1B
        xorps xmm2, xmmword ptr ds : [public_6d75100]
        mulps xmm2, xmm0
        addps xmm1, xmm2
        movaps xmm2, xmm3
        shufps xmm3, xmm3, 0x55
        shufps xmm0, xmm0, 0xB1
        xorps xmm3, xmmword ptr ds : [public_6d750f0]
        mulps xmm3, xmm0
        addps xmm1, xmm3
        shufps xmm2, xmm2, 0xAA
        shufps xmm0, xmm0, 0x1B
        xorps xmm2, xmmword ptr ds : [public_6d750e0]
        mulps xmm2, xmm0
        addps xmm1, xmm2
        movlps qword ptr ds : [edx], xmm1
        movhps qword ptr ds : [edx+8], xmm1
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ss : [esp]
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d504e0)
    }
}
