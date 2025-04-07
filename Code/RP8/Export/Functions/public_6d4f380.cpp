#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4f380);

#define public_6d4f391 _public_6d4f391
#define public_6d4f3fc _public_6d4f3fc

PROC_DECLARE(0x6d4f380, internal_6d4f380, public_6d4f380);
extern "C" NAKED register_t __cdecl internal_6d4f380()
{
    __asm
    {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0xFFFFFFF0
        add esp, 8
        jmp public_6d4f391
        push ebx
        mov ebx, esp
        public_6d4f391 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        sub esp, 0x18
        mov ecx, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ds : [ebx+8]
        test al, 0xF
        jne public_6d4f3fc
        movss xmm1, dword ptr ds : [ecx+8]
        xorps xmm0, xmm0
        shufps xmm1, xmm1, 0
        movlps xmm0, qword ptr ds : [ecx]
        mulps xmm1, xmmword ptr ds : [eax+0x20]
        addps xmm1, xmmword ptr ds : [eax+0x30]
        movaps xmm2, xmm0
        shufps xmm0, xmm0, 0
        shufps xmm2, xmm2, 0x55
        mulps xmm0, xmmword ptr ds : [eax]
        mulps xmm2, xmmword ptr ds : [eax+0x10]
        addps xmm0, xmm2
        addps xmm0, xmm1
        rcpps xmm1, xmm0
        movaps xmm2, xmm1
        mulps xmm1, xmm0
        mulps xmm1, xmm2
        addps xmm2, xmm2
        subps xmm2, xmm1
        shufps xmm2, xmm2, 0xFF
        mulps xmm0, xmm2
        movlps qword ptr ds : [edx], xmm0
        movhlps xmm0, xmm0
        movss dword ptr ds : [edx+8], xmm0
        mov eax, edx
        mov esp, ebx
        pop ebx
        ret 0xC
        public_6d4f3fc : nop
        xorps xmm2, xmm2
        movlps xmm4, qword ptr ds : [eax]
        movlps xmm2, qword ptr ds : [ecx]
        movhps xmm4, qword ptr ds : [eax+8]
        movlps xmm3, qword ptr ds : [eax+0x10]
        movss xmm5, dword ptr ds : [ecx+8]
        movhps xmm3, qword ptr ds : [eax+0x18]
        shufps xmm5, xmm5, 0
        movaps xmm6, xmm2
        shufps xmm2, xmm2, 0
        shufps xmm6, xmm6, 0x55
        mulps xmm4, xmm2
        mulps xmm3, xmm6
        movlps xmm1, qword ptr ds : [eax+0x20]
        addps xmm4, xmm3
        movhps xmm1, qword ptr ds : [eax+0x28]
        movlps xmm0, qword ptr ds : [eax+0x30]
        mulps xmm1, xmm5
        movhps xmm0, qword ptr ds : [eax+0x38]
        addps xmm1, xmm0
        addps xmm4, xmm1
        rcpps xmm0, xmm4
        movaps xmm1, xmm0
        mulps xmm0, xmm4
        mulps xmm0, xmm1
        addps xmm1, xmm1
        subps xmm1, xmm0
        shufps xmm1, xmm1, 0xFF
        mulps xmm4, xmm1
        movlps qword ptr ds : [edx], xmm4
        movhlps xmm4, xmm4
        movss dword ptr ds : [edx+8], xmm4
        mov eax, edx
        mov esp, ebx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d4f380)
    }
}

#undef public_6d4f391
#undef public_6d4f3fc
