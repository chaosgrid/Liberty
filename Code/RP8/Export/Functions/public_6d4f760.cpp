#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4f760);

#define public_6d4f771 _public_6d4f771
#define public_6d4f7d4 _public_6d4f7d4

PROC_DECLARE(0x6d4f760, internal_6d4f760, public_6d4f760);
extern "C" NAKED register_t __cdecl internal_6d4f760()
{
    __asm
    {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0xFFFFFFF0
        add esp, 8
        jmp public_6d4f771
        push ebx
        mov ebx, esp
        public_6d4f771 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [ebx+8]
        sub esp, 0x18
        movss xmm0, dword ptr ds : [edx]
        movss xmm4, dword ptr ds : [edx+4]
        movss xmm6, dword ptr ds : [edx+8]
        movss xmm1, dword ptr ds : [public_6d7500c]
        movaps xmm2, xmm0
        mulss xmm2, xmm2
        movaps xmm3, xmm4
        mulss xmm3, xmm3
        addss xmm2, xmm3
        movaps xmm3, xmm6
        mulss xmm3, xmm3
        movaps xmm5, xmm3
        movaps xmm3, xmm2
        addss xmm3, xmm5
        comiss xmm1, xmm3
        jbe public_6d4f7d4
        xorps xmm0, xmm0
        movss dword ptr ds : [eax], xmm0
        movss dword ptr ds : [eax+4], xmm0
        movss dword ptr ds : [eax+8], xmm0
        movss dword ptr ds : [eax+0xC], xmm0
        mov esp, ebx
        pop ebx
        ret 8
        public_6d4f7d4 : nop
        movss xmm1, dword ptr ds : [public_6d75014]
        movss xmm2, dword ptr ds : [public_6d75010]
        movaps xmm5, xmm3
        rsqrtss xmm3, xmm3
        mulss xmm5, xmm3
        mulss xmm2, xmm3
        mulss xmm5, xmm3
        subss xmm1, xmm5
        movaps xmm3, xmm0
        movaps xmm0, xmm2
        mulss xmm0, xmm1
        movaps xmm1, xmm0
        mulss xmm1, xmm3
        movss dword ptr ds : [eax], xmm1
        movaps xmm1, xmm0
        mulss xmm1, xmm4
        movss dword ptr ds : [eax+4], xmm1
        movaps xmm1, xmm0
        mulss xmm1, xmm6
        movss dword ptr ds : [eax+8], xmm1
        mulss xmm0, dword ptr ds : [edx+0xC]
        movss dword ptr ds : [eax+0xC], xmm0
        mov esp, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d4f760)
    }
}

#undef public_6d4f771
#undef public_6d4f7d4
