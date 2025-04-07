#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d591b0);

PROC_DECLARE(0x6d591b0, internal_6d591b0, public_6d591b0);
extern "C" NAKED register_t __cdecl internal_6d591b0()
{
    __asm
    {
        movaps xmm1, xmm0
        pand xmm0, xmmword ptr ds : [public_6d6eb80]
        pand xmm1, xmmword ptr ds : [public_6d6eb70]
        movaps xmm2, xmm0
        mulps xmm0, xmmword ptr ds : [public_6d6eb60]
        movaps xmm4, xmmword ptr ds : [public_6d6eb50]
        addps xmm0, xmmword ptr ds : [public_6d6eb40]
        movaps xmm3, xmm0
        subps xmm0, xmmword ptr ds : [public_6d6eb40]
        mulps xmm4, xmm0
        subps xmm2, xmm4
        shufps xmm4, xmm4, 0x39
        subps xmm2, xmm4
        shufps xmm4, xmm4, 0x39
        subps xmm2, xmm4
        shufps xmm4, xmm4, 0x39
        subps xmm2, xmm4
        movaps xmm4, xmm2
        mulps xmm4, xmm4
        andps xmm3, xmmword ptr ds : [public_6d6eb30]
        movaps xmm0, xmm3
        movaps xmm7, xmm3
        andps xmm0, xmmword ptr ds : [public_6d6eb20]
        psubd xmm3, xmm0
        paddd xmm7, xmm0
        pand xmm3, xmmword ptr ds : [public_6d6eb10]
        pand xmm7, xmmword ptr ds : [public_6d6eb10]
        pslld xmm3, 0x1E
        pslld xmm7, 0x1E
        pxor xmm3, xmm1
        pslld xmm0, 0x1E
        pxor xmm1, xmm1
        cmpneqps xmm0, xmm1
        movaps xmm5, xmmword ptr ds : [public_6d6eb00]
        mulps xmm5, xmm4
        addps xmm5, xmmword ptr ds : [public_6d6eaf0]
        mulps xmm5, xmm4
        addps xmm5, xmmword ptr ds : [public_6d6eae0]
        mulps xmm5, xmm4
        addps xmm5, xmmword ptr ds : [public_6d6ead0]
        unpcklps xmm2, xmm4
        mulps xmm5, xmm2
        addps xmm5, xmmword ptr ds : [public_6d6eac0]
        movaps xmm2, xmm0
        andps xmm0, xmm5
        andnps xmm2, xmm5
        shufps xmm2, xmm2, 0xB1
        orps xmm0, xmm2
        unpcklps xmm7, xmm3
        xorps xmm0, xmm7
        ret 0x10
        UNREACHABLE_TRAP(0x6d591b0)
    }
}
