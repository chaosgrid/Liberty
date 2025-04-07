#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4f2c0);

#define public_6d4f2d1 _public_6d4f2d1
#define public_6d4f31b _public_6d4f31b

PROC_DECLARE(0x6d4f2c0, internal_6d4f2c0, public_6d4f2c0);
extern "C" NAKED register_t __cdecl internal_6d4f2c0()
{
    __asm
    {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0xFFFFFFF0
        add esp, 8
        jmp public_6d4f2d1
        push ebx
        mov ebx, esp
        public_6d4f2d1 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        sub esp, 0x18
        mov edx, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ds : [ebx+8]
        test al, 0xF
        jne public_6d4f31b
        xorps xmm0, xmm0
        movlps xmm0, qword ptr ds : [edx]
        movss xmm1, dword ptr ds : [edx+8]
        shufps xmm1, xmm1, 0
        mulps xmm1, xmmword ptr ds : [eax+0x20]
        addps xmm1, xmmword ptr ds : [eax+0x30]
        movaps xmm2, xmm0
        shufps xmm0, xmm0, 0
        mulps xmm0, xmmword ptr ds : [eax]
        shufps xmm2, xmm2, 0x55
        mulps xmm2, xmmword ptr ds : [eax+0x10]
        addps xmm0, xmm2
        addps xmm0, xmm1
        movups xmmword ptr ds : [ecx], xmm0
        mov eax, ecx
        mov esp, ebx
        pop ebx
        ret 0xC
        public_6d4f31b : nop
        xorps xmm2, xmm2
        movlps xmm2, qword ptr ds : [edx]
        movlps xmm4, qword ptr ds : [eax]
        movhps xmm4, qword ptr ds : [eax+8]
        movlps xmm3, qword ptr ds : [eax+0x10]
        movhps xmm3, qword ptr ds : [eax+0x18]
        movss xmm5, dword ptr ds : [edx+8]
        shufps xmm5, xmm5, 0
        movaps xmm6, xmm2
        shufps xmm2, xmm2, 0
        mulps xmm4, xmm2
        shufps xmm6, xmm6, 0x55
        mulps xmm3, xmm6
        addps xmm4, xmm3
        movlps xmm1, qword ptr ds : [eax+0x20]
        movhps xmm1, qword ptr ds : [eax+0x28]
        mulps xmm1, xmm5
        movlps xmm0, qword ptr ds : [eax+0x30]
        movhps xmm0, qword ptr ds : [eax+0x38]
        addps xmm1, xmm0
        addps xmm4, xmm1
        movups xmmword ptr ds : [ecx], xmm4
        mov eax, ecx
        mov esp, ebx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d4f2c0)
    }
}

#undef public_6d4f2d1
#undef public_6d4f31b
