#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f590);

#define public_623f5fb _public_623f5fb
#define public_623f614 _public_623f614

PROC_DECLARE(0x623f590, internal_623f590, public_623f590);
extern "C" NAKED register_t __cdecl internal_623f590()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        push edi
        movss xmm0, dword ptr ss : [ebp+8]
        andps xmm0, xmmword ptr ds : [public_624f850]
        mulss xmm0, dword ptr ds : [public_624f830]
        mov eax, dword ptr ss : [ebp+8]
        and eax, 0x80000000
        movaps xmm4, xmm0
        addss xmm0, dword ptr ds : [public_624f7c0]
        cvttss2si ecx, xmm0
        cvttss2si esi, xmm4
        mov edx, ecx
        shl edx, 0x1E
        mov edi, esi
        shl edi, 0x1E
        cvtsi2ss xmm1, ecx
        and edx, 0x80000000
        cvtsi2ss xmm5, esi
        and edi, 0x80000000
        and ecx, 1
        subss xmm0, xmm1
        je public_623f5fb
        movss xmm1, dword ptr ds : [public_624f7c0]
        subss xmm1, xmm0
        movss xmm0, xmm1
        public_623f5fb : nop
        and esi, 1
        subss xmm4, xmm5
        je public_623f614
        movss xmm5, dword ptr ds : [public_624f7c0]
        subss xmm5, xmm4
        movss xmm4, xmm5
        public_623f614 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        movss xmm1, xmm0
        mulss xmm0, xmm0
        movss xmm5, xmm4
        mulss xmm4, xmm4
        mov dword ptr ds : [ecx], edx
        movss xmm2, xmm0
        mulss xmm0, dword ptr ds : [public_624f89c]
        xor eax, edi
        movss xmm6, xmm4
        mulss xmm4, dword ptr ds : [public_624f89c]
        addss xmm0, dword ptr ds : [public_624f898]
        mov dword ptr ds : [ecx+4], eax
        addss xmm4, dword ptr ds : [public_624f898]
        mulss xmm0, xmm2
        movss xmm3, dword ptr ds : [ecx]
        mulss xmm4, xmm6
        movss xmm7, dword ptr ds : [ecx+4]
        addss xmm0, dword ptr ds : [public_624f894]
        addss xmm4, dword ptr ds : [public_624f894]
        mulss xmm0, xmm2
        orps xmm1, xmm3
        mulss xmm4, xmm6
        orps xmm5, xmm7
        addss xmm0, dword ptr ds : [public_624f890]
        addss xmm4, dword ptr ds : [public_624f890]
        mulss xmm0, xmm1
        mulss xmm4, xmm5
        movss dword ptr ds : [ecx], xmm0
        movss dword ptr ds : [ecx+4], xmm4
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x623f590)
    }
}

#undef public_623f5fb
#undef public_623f614
