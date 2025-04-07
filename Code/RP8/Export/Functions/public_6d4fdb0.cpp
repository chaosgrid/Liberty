#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4fdb0);

PROC_DECLARE(0x6d4fdb0, internal_6d4fdb0, public_6d4fdb0);
extern "C" NAKED register_t __cdecl internal_6d4fdb0()
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
        movaps xmm1, xmm0
        shufps xmm1, xmm0, 0x55
        movaps xmm2, xmm0
        mov ecx, dword ptr ss : [ebp+0x10]
        shufps xmm2, xmm0, 0xAA
        movaps xmm3, xmm0
        shufps xmm3, xmm0, 0xFF
        mov edx, dword ptr ss : [ebp+0x14]
        shufps xmm0, xmm0, 0
        movups xmm4, xmmword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp+0x18]
        mulps xmm4, xmm0
        movups xmm5, xmmword ptr ds : [ecx]
        mulps xmm5, xmm1
        movups xmm6, xmmword ptr ds : [edx]
        addps xmm4, xmm5
        mulps xmm6, xmm2
        addps xmm4, xmm6
        movups xmm7, xmmword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+8]
        mulps xmm7, xmm3
        addps xmm4, xmm7
        movups xmmword ptr ds : [ecx], xmm4
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6d4fdb0)
    }
}
