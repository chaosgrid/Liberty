#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d58fc0);

PROC_DECLARE(0x6d58fc0, internal_6d58fc0, public_6d58fc0);
extern "C" NAKED register_t __cdecl internal_6d58fc0()
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
        andps xmm0, xmmword ptr ds : [public_6d6eaa0]
        andps xmm1, xmmword ptr ds : [public_6d6ea90]
        movaps xmm2, xmm0
        movaps xmm7, xmm0
        mulps xmm0, xmmword ptr ds : [public_6d6ea80]
        movaps xmm4, xmmword ptr ds : [public_6d6ea70]
        movaps xmm5, xmmword ptr ds : [public_6d6ea60]
        mov edx, esp
        add edx, 0xFFFFFFC0
        and edx, 0xFFFFFFF0
        movaps xmm6, xmmword ptr ds : [public_6d6ea50]
        movaps xmm7, xmmword ptr ds : [public_6d6ea40]
        addps xmm0, xmmword ptr ds : [public_6d6ea30]
        movaps xmm3, xmm0
        subps xmm0, xmmword ptr ds : [public_6d6ea30]
        mulps xmm4, xmm0
        mulps xmm5, xmm0
        mulps xmm6, xmm0
        mulps xmm7, xmm0
        subps xmm2, xmm4
        subps xmm2, xmm5
        movaps xmm5, xmmword ptr ds : [public_6d6ea20]
        subps xmm2, xmm6
        movaps xmm6, xmmword ptr ds : [public_6d6ea10]
        subps xmm2, xmm7
        movaps xmm4, xmm2
        mulps xmm4, xmm4
        andps xmm3, xmmword ptr ds : [public_6d6ea00]
        movaps xmm0, xmm3
        movaps xmm7, xmm3
        andps xmm0, xmmword ptr ds : [public_6d6e9f0]
        movaps xmmword ptr ds : [edx], xmm0
        movaps xmmword ptr ds : [edx+0x10], xmm3
        movaps xmmword ptr ds : [edx+0x20], xmm7
        mov eax, dword ptr ds : [edx+0x10]
        sub eax, dword ptr ds : [edx]
        and eax, dword ptr ds : [public_6d6e9e0]
        shl eax, 0x1E
        mov dword ptr ds : [edx+0x10], eax
        mov eax, dword ptr ds : [edx+0x14]
        sub eax, dword ptr ds : [edx+4]
        and eax, dword ptr ds : [public_6d6e9e0]
        shl eax, 0x1E
        mov dword ptr ds : [edx+0x14], eax
        mov eax, dword ptr ds : [edx+0x18]
        sub eax, dword ptr ds : [edx+8]
        and eax, dword ptr ds : [public_6d6e9e0]
        shl eax, 0x1E
        mov dword ptr ds : [edx+0x18], eax
        mov eax, dword ptr ds : [edx+0x1C]
        sub eax, dword ptr ds : [edx+0xC]
        and eax, dword ptr ds : [public_6d6e9e0]
        shl eax, 0x1E
        mov dword ptr ds : [edx+0x1C], eax
        mov eax, dword ptr ds : [edx+0x20]
        add eax, dword ptr ds : [edx]
        and eax, dword ptr ds : [public_6d6e9e0]
        shl eax, 0x1E
        mov dword ptr ds : [edx+0x20], eax
        mov eax, dword ptr ds : [edx+0x24]
        add eax, dword ptr ds : [edx+4]
        and eax, dword ptr ds : [public_6d6e9e0]
        shl eax, 0x1E
        mov dword ptr ds : [edx+0x24], eax
        mov eax, dword ptr ds : [edx+0x28]
        add eax, dword ptr ds : [edx+8]
        and eax, dword ptr ds : [public_6d6e9e0]
        shl eax, 0x1E
        mov dword ptr ds : [edx+0x28], eax
        mov eax, dword ptr ds : [edx+0x2C]
        add eax, dword ptr ds : [edx+0xC]
        and eax, dword ptr ds : [public_6d6e9e0]
        shl eax, 0x1E
        mov dword ptr ds : [edx+0x2C], eax
        mov eax, dword ptr ds : [edx]
        shl eax, 0x1E
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [edx+4]
        shl eax, 0x1E
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [edx+8]
        shl eax, 0x1E
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ds : [edx+0xC]
        shl eax, 0x1E
        mov dword ptr ds : [edx+0xC], eax
        movaps xmm3, xmmword ptr ds : [edx+0x10]
        movaps xmm7, xmmword ptr ds : [edx+0x20]
        movaps xmm0, xmmword ptr ds : [edx]
        xorps xmm3, xmm1
        xorps xmm1, xmm1
        cmpneqps xmm0, xmm1
        mulps xmm5, xmm4
        mulps xmm6, xmm4
        addps xmm5, xmmword ptr ds : [public_6d6e9d0]
        addps xmm6, xmmword ptr ds : [public_6d6e9c0]
        mulps xmm5, xmm4
        mulps xmm6, xmm4
        addps xmm5, xmmword ptr ds : [public_6d6e9b0]
        addps xmm6, xmmword ptr ds : [public_6d6e9a0]
        mulps xmm5, xmm4
        mulps xmm6, xmm4
        addps xmm5, xmmword ptr ds : [public_6d6e990]
        addps xmm6, xmmword ptr ds : [public_6d6e980]
        mulps xmm5, xmm2
        mulps xmm6, xmm4
        addps xmm6, xmmword ptr ds : [public_6d6e970]
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
        UNREACHABLE_TRAP(0x6d58fc0)
    }
}
