#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d500b0);

#define public_6d500c1 _public_6d500c1
#define public_6d500dc _public_6d500dc
#define public_6d500fb _public_6d500fb

PROC_DECLARE(0x6d500b0, internal_6d500b0, public_6d500b0);
extern "C" NAKED register_t __cdecl internal_6d500b0()
{
    __asm
    {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0xFFFFFFF0
        add esp, 8
        jmp public_6d500c1
        push ebx
        mov ebx, esp
        public_6d500c1 : nop
        sub esp, 0x38
        mov eax, dword ptr ds : [ebx+8]
        test al, 0xF
        jne public_6d500dc
        movaps xmm7, xmmword ptr ds : [eax]
        movaps xmm1, xmmword ptr ds : [eax+0x10]
        movaps xmm2, xmmword ptr ds : [eax+0x20]
        movaps xmm0, xmmword ptr ds : [eax+0x30]
        jmp public_6d500fb
        public_6d500dc : nop
        movlps xmm1, qword ptr ds : [eax+0x10]
        movlps xmm7, qword ptr ds : [eax]
        movhps xmm1, qword ptr ds : [eax+0x18]
        movhps xmm7, qword ptr ds : [eax+8]
        movlps xmm2, qword ptr ds : [eax+0x20]
        movlps xmm0, qword ptr ds : [eax+0x30]
        movhps xmm2, qword ptr ds : [eax+0x28]
        movhps xmm0, qword ptr ds : [eax+0x38]
        public_6d500fb : nop
        shufps xmm2, xmm2, 0x39
        shufps xmm1, xmm1, 0x39
        movaps xmm3, xmm0
        shufps xmm0, xmm0, 0x4E
        mulps xmm3, xmm2
        movaps xmm4, xmm0
        shufps xmm0, xmm0, 0x39
        mulps xmm4, xmm2
        mulps xmm2, xmm0
        movaps xmm0, xmm2
        shufps xmm2, xmm2, 0x4E
        subps xmm2, xmm0
        movaps xmm0, xmm1
        shufps xmm1, xmm1, 0x39
        mulps xmm2, xmm1
        shufps xmm1, xmm1, 0x39
        movaps xmm5, xmm4
        shufps xmm4, xmm4, 0x39
        movaps xmm6, xmm3
        shufps xmm3, xmm3, 0x4E
        shufps xmm6, xmm6, 0x39
        subps xmm4, xmm3
        subps xmm5, xmm6
        mulps xmm0, xmm4
        mulps xmm1, xmm5
        addps xmm0, xmm2
        addps xmm0, xmm1
        mulps xmm0, xmm7
        movaps xmm1, xmm0
        movhlps xmm0, xmm0
        addps xmm1, xmm0
        movaps xmm0, xmm1
        shufps xmm1, xmm1, 1
        subss xmm0, xmm1
        movss dword ptr ss : [esp], xmm0
        fld dword ptr ss : [esp]
        mov esp, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d500b0)
    }
}

#undef public_6d500c1
#undef public_6d500dc
#undef public_6d500fb
