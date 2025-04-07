#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4f540);

#define public_6d4f551 _public_6d4f551

PROC_DECLARE(0x6d4f540, internal_6d4f540, public_6d4f540);
extern "C" NAKED register_t __cdecl internal_6d4f540()
{
    __asm
    {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0xFFFFFFF0
        add esp, 8
        jmp public_6d4f551
        push ebx
        mov ebx, esp
        public_6d4f551 : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [ebx+8]
        sub esp, 0x18
        movss xmm4, dword ptr ds : [edx]
        shufps xmm4, xmm4, 0
        movlps xmm3, qword ptr ds : [ecx]
        movhps xmm3, qword ptr ds : [ecx+8]
        mulps xmm4, xmm3
        movss xmm5, dword ptr ds : [edx+4]
        shufps xmm5, xmm5, 0
        movlps xmm2, qword ptr ds : [ecx+0x10]
        movhps xmm2, qword ptr ds : [ecx+0x18]
        mulps xmm5, xmm2
        addps xmm4, xmm5
        movss xmm5, dword ptr ds : [edx+8]
        shufps xmm5, xmm5, 0
        movlps xmm1, qword ptr ds : [ecx+0x20]
        movhps xmm1, qword ptr ds : [ecx+0x28]
        mulps xmm5, xmm1
        addps xmm4, xmm5
        movss xmm5, dword ptr ds : [edx+0xC]
        shufps xmm5, xmm5, 0
        movlps xmm0, qword ptr ds : [ecx+0x30]
        movhps xmm0, qword ptr ds : [ecx+0x38]
        mulps xmm5, xmm0
        addps xmm4, xmm5
        movss xmm5, dword ptr ds : [edx+0x10]
        movss xmm6, dword ptr ds : [edx+0x14]
        shufps xmm5, xmm5, 0
        mulps xmm5, xmm3
        shufps xmm6, xmm6, 0
        mulps xmm6, xmm2
        addps xmm5, xmm6
        movss xmm6, dword ptr ds : [edx+0x18]
        shufps xmm6, xmm6, 0
        mulps xmm6, xmm1
        addps xmm5, xmm6
        movss xmm6, dword ptr ds : [edx+0x1C]
        shufps xmm6, xmm6, 0
        mulps xmm6, xmm0
        addps xmm5, xmm6
        movss xmm6, dword ptr ds : [edx+0x20]
        shufps xmm6, xmm6, 0
        mulps xmm6, xmm3
        mov ecx, eax
        movss xmm7, dword ptr ds : [edx+0x24]
        shufps xmm7, xmm7, 0
        mulps xmm7, xmm2
        addps xmm6, xmm7
        movss xmm7, dword ptr ds : [edx+0x28]
        shufps xmm7, xmm7, 0
        mulps xmm7, xmm1
        addps xmm6, xmm7
        movss xmm7, dword ptr ds : [edx+0x2C]
        shufps xmm7, xmm7, 0
        mulps xmm7, xmm0
        addps xmm6, xmm7
        movss xmm7, dword ptr ds : [edx+0x30]
        shufps xmm7, xmm7, 0
        mulps xmm7, xmm3
        movss xmm3, dword ptr ds : [edx+0x34]
        shufps xmm3, xmm3, 0
        mulps xmm3, xmm2
        addps xmm7, xmm3
        movss xmm2, dword ptr ds : [edx+0x38]
        shufps xmm2, xmm2, 0
        mulps xmm2, xmm1
        movss xmm1, dword ptr ds : [edx+0x3C]
        movlps qword ptr ds : [ecx], xmm4
        movhps qword ptr ds : [ecx+8], xmm4
        movlps qword ptr ds : [ecx+0x10], xmm5
        movhps qword ptr ds : [ecx+0x18], xmm5
        movlps qword ptr ds : [ecx+0x20], xmm6
        movhps qword ptr ds : [ecx+0x28], xmm6
        addps xmm7, xmm2
        shufps xmm1, xmm1, 0
        mulps xmm1, xmm0
        addps xmm7, xmm1
        movlps qword ptr ds : [ecx+0x30], xmm7
        movhps qword ptr ds : [ecx+0x38], xmm7
        mov esp, ebx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d4f540)
    }
}

#undef public_6d4f551
