#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4fff0);

#define public_6d5009e _public_6d5009e
#define public_6d500a5 _public_6d500a5

PROC_DECLARE(0x6d4fff0, internal_6d4fff0, public_6d4fff0);
extern "C" NAKED register_t __cdecl internal_6d4fff0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 4
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], eax
        lea esi, ds:[esi]
        mov eax, dword ptr ss : [ebp+0xC]
        movups xmm0, xmmword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+0x10]
        movss xmm1, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [ebp+0x14]
        movhps xmm1, qword ptr ds : [ecx]
        movss xmm2, dword ptr ds : [edx+8]
        movaps xmm4, xmm0
        shufps xmm0, xmm0, 0x4E
        movaps xmm3, xmm1
        shufps xmm4, xmm4, 0xFF
        movhps xmm2, qword ptr ds : [edx]
        mulps xmm3, xmm0
        mulps xmm0, xmm2
        movhlps xmm5, xmm3
        movhlps xmm6, xmm0
        addps xmm3, xmm5
        addps xmm0, xmm6
        shufps xmm5, xmm3, 0x55
        shufps xmm6, xmm0, 0x55
        addss xmm3, xmm5
        addss xmm0, xmm6
        movss xmm5, xmm3
        subss xmm5, xmm0
        addss xmm3, xmm4
        comiss xmm5, dword ptr ds : [public_6d73540]
        je public_6d5009e
        rcpss xmm0, xmm5
        movss xmm6, xmm0
        addss xmm6, xmm6
        mulss xmm5, xmm0
        mulss xmm5, xmm0
        subss xmm6, xmm5
        mulss xmm3, xmm6
        shufps xmm3, xmm3, 0
        subps xmm2, xmm1
        mulps xmm3, xmm2
        mov eax, dword ptr ss : [ebp-4]
        addps xmm1, xmm3
        movhps qword ptr ds : [eax], xmm1
        movss dword ptr ds : [eax+8], xmm1
        jmp public_6d500a5
        public_6d5009e : nop
        mov dword ptr ss : [ebp-4], 0
        public_6d500a5 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d4fff0)
    }
}

#undef public_6d5009e
#undef public_6d500a5
