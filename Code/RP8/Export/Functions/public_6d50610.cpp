#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d50610);

#define public_6d50621 _public_6d50621

PROC_DECLARE(0x6d50610, internal_6d50610, public_6d50610);
extern "C" NAKED register_t __cdecl internal_6d50610()
{
    __asm
    {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0xFFFFFFF0
        add esp, 8
        jmp public_6d50621
        push ebx
        mov ebx, esp
        public_6d50621 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [ebx+8]
        sub esp, 0x18
        movlps xmm0, qword ptr ds : [edx]
        movhps xmm0, qword ptr ds : [edx+8]
        movaps xmm1, xmm0
        mulps xmm0, xmm0
        movaps xmm2, xmm0
        movhlps xmm0, xmm0
        addps xmm2, xmm0
        mulps xmm1, xmmword ptr ds : [public_6d6e640]
        movaps xmm0, xmm2
        shufps xmm2, xmm2, 0x55
        addss xmm0, xmm2
        movaps xmm2, xmm0
        rcpss xmm0, xmm0
        add esp, 0x18
        movaps xmm3, xmm0
        mulss xmm0, xmm2
        mulss xmm0, xmm3
        addss xmm3, xmm3
        subss xmm3, xmm0
        shufps xmm3, xmm3, 0
        mulps xmm1, xmm3
        movups xmmword ptr ds : [eax], xmm1
        mov esp, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d50610)
    }
}

#undef public_6d50621
