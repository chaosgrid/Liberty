#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d592a0);

PROC_DECLARE(0x6d592a0, internal_6d592a0, public_6d592a0);
extern "C" NAKED register_t __cdecl internal_6d592a0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        movaps xmm0, xmmword ptr ds : [eax]
        lea esi, ds:[esi]
        movaps xmm1, xmm0
        movaps xmm6, xmm0
        pand xmm0, xmmword ptr ds : [public_6d6ecc0]
        pand xmm1, xmmword ptr ds : [public_6d6ecb0]
        movaps xmm2, xmm0
        movaps xmm7, xmm0
        mulps xmm0, xmmword ptr ds : [public_6d6eca0]
        movaps xmm4, xmmword ptr ds : [public_6d6ec90]
        movaps xmm5, xmmword ptr ds : [public_6d6ec80]
        movaps xmm6, xmmword ptr ds : [public_6d6ec70]
        movaps xmm7, xmmword ptr ds : [public_6d6ec60]
        addps xmm0, xmmword ptr ds : [public_6d6ec50]
        movaps xmm3, xmm0
        subps xmm0, xmmword ptr ds : [public_6d6ec50]
        mulps xmm4, xmm0
        mulps xmm5, xmm0
        mulps xmm6, xmm0
        mulps xmm7, xmm0
        subps xmm2, xmm4
        subps xmm2, xmm5
        movaps xmm5, xmmword ptr ds : [public_6d6ec40]
        subps xmm2, xmm6
        movaps xmm6, xmmword ptr ds : [public_6d6ec30]
        subps xmm2, xmm7
        movaps xmm4, xmm2
        mulps xmm4, xmm4
        andps xmm3, xmmword ptr ds : [public_6d6ec20]
        movaps xmm0, xmm3
        movaps xmm7, xmm3
        andps xmm0, xmmword ptr ds : [public_6d6ec10]
        psubd xmm3, xmm0
        paddd xmm7, xmm0
        pand xmm3, xmmword ptr ds : [public_6d6ec00]
        pand xmm7, xmmword ptr ds : [public_6d6ec00]
        pslld xmm3, 0x1E
        pslld xmm7, 0x1E
        pxor xmm3, xmm1
        pslld xmm0, 0x1E
        pxor xmm1, xmm1
        cmpneqps xmm0, xmm1
        mulps xmm5, xmm4
        mulps xmm6, xmm4
        addps xmm5, xmmword ptr ds : [public_6d6ebf0]
        addps xmm6, xmmword ptr ds : [public_6d6ebe0]
        mulps xmm5, xmm4
        mulps xmm6, xmm4
        addps xmm5, xmmword ptr ds : [public_6d6ebd0]
        addps xmm6, xmmword ptr ds : [public_6d6ebc0]
        mulps xmm5, xmm4
        mulps xmm6, xmm4
        addps xmm5, xmmword ptr ds : [public_6d6ebb0]
        addps xmm6, xmmword ptr ds : [public_6d6eba0]
        mulps xmm5, xmm2
        mulps xmm6, xmm4
        addps xmm6, xmmword ptr ds : [public_6d6eb90]
        movaps xmm1, xmm0
        movaps xmm2, xmm0
        andnps xmm1, xmm5
        andps xmm2, xmm6
        orps xmm1, xmm2
        movaps xmm2, xmm0
        andps xmm0, xmm5
        andnps xmm2, xmm6
        orps xmm0, xmm2
        xorps xmm0, xmm7
        xorps xmm1, xmm3
        mov eax, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+0x10]
        movaps xmmword ptr ds : [eax], xmm1
        movaps xmmword ptr ds : [edx], xmm0
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d592a0)
    }
}
