#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d50870);

#define public_6d50881 _public_6d50881
#define public_6d508cf _public_6d508cf

PROC_DECLARE(0x6d50870, internal_6d50870, public_6d50870);
extern "C" NAKED register_t __cdecl internal_6d50870()
{
    __asm
    {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0xFFFFFFF0
        add esp, 8
        jmp public_6d50881
        push ebx
        mov ebx, esp
        public_6d50881 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        sub esp, 0x18
        mov ecx, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ds : [ebx+8]
        test al, 0xF
        jne public_6d508cf
        movss xmm1, dword ptr ds : [ecx+8]
        xorps xmm0, xmm0
        shufps xmm1, xmm1, 0
        movlps xmm0, qword ptr ds : [ecx]
        mulps xmm1, xmmword ptr ds : [eax+0x20]
        movaps xmm2, xmm0
        shufps xmm0, xmm0, 0
        shufps xmm2, xmm2, 0x55
        mulps xmm0, xmmword ptr ds : [eax]
        mulps xmm2, xmmword ptr ds : [eax+0x10]
        addps xmm0, xmm2
        addps xmm0, xmm1
        movlps qword ptr ds : [edx], xmm0
        movhlps xmm0, xmm0
        movss dword ptr ds : [edx+8], xmm0
        mov eax, edx
        mov esp, ebx
        pop ebx
        ret 0xC
        public_6d508cf : nop
        xorps xmm1, xmm1
        movlps xmm3, qword ptr ds : [eax]
        movlps xmm1, qword ptr ds : [ecx]
        movhps xmm3, qword ptr ds : [eax+8]
        movlps xmm2, qword ptr ds : [eax+0x10]
        movss xmm4, dword ptr ds : [ecx+8]
        movhps xmm2, qword ptr ds : [eax+0x18]
        shufps xmm4, xmm4, 0
        movaps xmm5, xmm1
        shufps xmm1, xmm1, 0
        shufps xmm5, xmm5, 0x55
        mulps xmm3, xmm1
        mulps xmm2, xmm5
        movlps xmm0, qword ptr ds : [eax+0x20]
        addps xmm3, xmm2
        movhps xmm0, qword ptr ds : [eax+0x28]
        mulps xmm0, xmm4
        addps xmm3, xmm0
        movlps qword ptr ds : [edx], xmm3
        movhlps xmm3, xmm3
        movss dword ptr ds : [edx+8], xmm3
        mov eax, edx
        mov esp, ebx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d50870)
    }
}

#undef public_6d50881
#undef public_6d508cf
