#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d507a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d58fc0);

#define public_6d507b1 _public_6d507b1

PROC_DECLARE(0x6d507a0, internal_6d507a0, public_6d507a0);
extern "C" NAKED register_t __cdecl internal_6d507a0()
{
    __asm
    {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0xFFFFFFF0
        add esp, 8
        jmp public_6d507b1
        push ebx
        mov ebx, esp
        public_6d507b1 : nop
        sub esp, 0x58
        movss xmm0, dword ptr ds : [ebx+0x10]
        movss xmm1, dword ptr ds : [ebx+0x14]
        movss xmm2, dword ptr ds : [public_6d75160]
        unpcklps xmm0, xmm1
        movss xmm1, dword ptr ds : [ebx+0xC]
        lea eax, ss:[esp+0x10]
        lea edx, ss:[esp+0x10]
        unpcklps xmm2, xmm1
        lea ecx, ss:[esp+0x20]
        shufps xmm0, xmm2, 0x11
        movaps xmmword ptr ss : [esp+0x10], xmm0
        mulps xmm0, xmmword ptr ds : [public_6d75150]
        mov dword ptr ss : [esp], eax
        mov dword ptr ss : [esp+4], edx
        movaps xmmword ptr ss : [esp+0x10], xmm0
        mov dword ptr ss : [esp+8], ecx
        call public_6d58fc0
        movaps xmm0, xmmword ptr ss : [esp+0x10]
        movaps xmm1, xmmword ptr ss : [esp+0x20]
        movaps xmm2, xmm0
        shufps xmm0, xmm1, 0
        shufps xmm0, xmm0, 0x8A
        shufps xmm2, xmm1, 0x99
        movaps xmm1, xmm0
        shufps xmm0, xmm0, 0x8A
        movaps xmm3, xmm2
        shufps xmm2, xmm2, 0xF7
        shufps xmm3, xmm3, 0xA8
        mulps xmm1, xmm2
        shufps xmm2, xmm2, 0x51
        mulps xmm0, xmm2
        mulps xmm1, xmm3
        shufps xmm3, xmm3, 1
        mulps xmm0, xmm3
        movaps xmmword ptr ss : [esp+0x10], xmm1
        xorps xmm0, xmmword ptr ds : [public_6d75140]
        addps xmm1, xmm0
        movaps xmmword ptr ss : [esp+0x10], xmm1
        mov eax, dword ptr ds : [ebx+8]
        movups xmmword ptr ds : [eax], xmm1
        mov esp, ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6d507a0)
    }
}

#undef public_6d507b1
