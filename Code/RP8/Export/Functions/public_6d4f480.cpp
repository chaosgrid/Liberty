#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4f480);

#define public_6d4f491 _public_6d4f491
#define public_6d4f4e0 _public_6d4f4e0

PROC_DECLARE(0x6d4f480, internal_6d4f480, public_6d4f480);
extern "C" NAKED register_t __cdecl internal_6d4f480()
{
    __asm
    {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0xFFFFFFF0
        add esp, 8
        jmp public_6d4f491
        push ebx
        mov ebx, esp
        public_6d4f491 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        sub esp, 0x18
        mov ecx, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ds : [ebx+8]
        test al, 0xF
        jne public_6d4f4e0
        movups xmm0, xmmword ptr ds : [ecx]
        movaps xmm1, xmm0
        shufps xmm0, xmm0, 0
        mulps xmm0, xmmword ptr ds : [eax]
        movaps xmm2, xmm1
        shufps xmm1, xmm1, 0x55
        mulps xmm1, xmmword ptr ds : [eax+0x10]
        addps xmm0, xmm1
        movaps xmm1, xmm2
        shufps xmm2, xmm2, 0xAA
        mulps xmm2, xmmword ptr ds : [eax+0x20]
        shufps xmm1, xmm1, 0xFF
        mulps xmm1, xmmword ptr ds : [eax+0x30]
        addps xmm2, xmm1
        addps xmm0, xmm2
        movups xmmword ptr ds : [edx], xmm0
        mov eax, edx
        mov esp, ebx
        pop ebx
        ret 0xC
        public_6d4f4e0 : nop
        movups xmm4, xmmword ptr ds : [ecx]
        movlps xmm3, qword ptr ds : [eax]
        movhps xmm3, qword ptr ds : [eax+8]
        movlps xmm2, qword ptr ds : [eax+0x10]
        movhps xmm2, qword ptr ds : [eax+0x18]
        movlps xmm1, qword ptr ds : [eax+0x20]
        movaps xmm5, xmm4
        shufps xmm4, xmm4, 0
        mulps xmm3, xmm4
        movhps xmm1, qword ptr ds : [eax+0x28]
        movlps xmm0, qword ptr ds : [eax+0x30]
        movaps xmm4, xmm5
        shufps xmm5, xmm5, 0x55
        mulps xmm2, xmm5
        addps xmm3, xmm2
        movhps xmm0, qword ptr ds : [eax+0x38]
        movaps xmm2, xmm4
        shufps xmm4, xmm4, 0xAA
        mulps xmm1, xmm4
        shufps xmm2, xmm2, 0xFF
        mulps xmm0, xmm2
        addps xmm1, xmm0
        addps xmm3, xmm1
        movups xmmword ptr ds : [edx], xmm3
        mov eax, edx
        mov esp, ebx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d4f480)
    }
}

#undef public_6d4f491
#undef public_6d4f4e0
