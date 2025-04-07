#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d50ae0);

#define public_6d50af1 _public_6d50af1
#define public_6d50d31 _public_6d50d31
#define public_6d50d8b _public_6d50d8b

PROC_DECLARE(0x6d50ae0, internal_6d50ae0, public_6d50ae0);
extern "C" NAKED register_t __cdecl internal_6d50ae0()
{
    __asm
    {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0xFFFFFFF0
        add esp, 8
        jmp public_6d50af1
        push ebx
        mov ebx, esp
        public_6d50af1 : nop
        sub esp, 0x118
        mov eax, dword ptr ds : [ebx+0x10]
        movlps xmm0, qword ptr ds : [eax+8]
        movlps xmm4, qword ptr ds : [eax+0x28]
        movhps xmm0, qword ptr ds : [eax+0x18]
        movhps xmm4, qword ptr ds : [eax+0x38]
        movlps xmm3, qword ptr ds : [eax+0x20]
        movlps xmm1, qword ptr ds : [eax]
        movhps xmm3, qword ptr ds : [eax+0x30]
        movhps xmm1, qword ptr ds : [eax+0x10]
        movaps xmm5, xmm0
        shufps xmm0, xmm4, 0x88
        shufps xmm4, xmm5, 0xDD
        movaps xmm5, xmm4
        mulps xmm5, xmm0
        shufps xmm5, xmm5, 0xB1
        movaps xmm6, xmm5
        shufps xmm5, xmm5, 0x4E
        movaps xmm7, xmm3
        shufps xmm3, xmm1, 0xDD
        shufps xmm1, xmm7, 0x88
        movaps xmm7, xmm3
        mulps xmm3, xmm5
        xorps xmm2, xmm2
        mulps xmm5, xmm1
        movaps xmmword ptr ss : [esp+0x30], xmm5
        movaps xmm5, xmm7
        mulps xmm7, xmm6
        mulps xmm6, xmm1
        subps xmm3, xmm7
        movaps xmm7, xmm5
        mulps xmm5, xmm0
        shufps xmm0, xmm0, 0x4E
        shufps xmm5, xmm5, 0xB1
        movaps xmmword ptr ss : [esp+0x40], xmm6
        movaps xmm6, xmm4
        mulps xmm6, xmm5
        addps xmm6, xmm3
        movaps xmm3, xmm5
        shufps xmm5, xmm5, 0x4E
        mulps xmm3, xmm1
        movaps xmmword ptr ss : [esp+0x50], xmm3
        movaps xmm3, xmm4
        mulps xmm3, xmm5
        mulps xmm5, xmm1
        subps xmm6, xmm3
        movaps xmm3, xmm7
        shufps xmm7, xmm7, 0x4E
        mulps xmm7, xmm4
        shufps xmm7, xmm7, 0xB1
        movaps xmmword ptr ss : [esp+0x60], xmm5
        movaps xmm5, xmm0
        mulps xmm0, xmm7
        addps xmm0, xmm6
        movaps xmm6, xmm7
        shufps xmm7, xmm7, 0x4E
        mulps xmm6, xmm1
        movaps xmmword ptr ss : [esp+0x70], xmm4
        movaps xmm4, xmm5
        mulps xmm5, xmm7
        mulps xmm7, xmm1
        subps xmm0, xmm5
        subps xmm7, xmm6
        movaps xmm5, xmm1
        mulps xmm1, xmm0
        shufps xmm7, xmm7, 0x4E
        movaps xmm6, xmm1
        shufps xmm1, xmm1, 0x4E
        movaps xmmword ptr ss : [esp+0x20], xmm0
        addps xmm1, xmm6
        movaps xmm0, xmm1
        shufps xmm1, xmm1, 0xB1
        addss xmm1, xmm0
        movaps xmmword ptr ss : [esp+0x10], xmm1
        movaps xmm0, xmm5
        mulps xmm5, xmm3
        shufps xmm5, xmm5, 0xB1
        movaps xmm6, xmm5
        shufps xmm5, xmm5, 0x4E
        movaps xmmword ptr ss : [esp+0x80], xmm4
        movaps xmm4, xmmword ptr ss : [esp+0x70]
        movaps xmmword ptr ss : [esp+0x90], xmm3
        movaps xmm3, xmm4
        mulps xmm3, xmm6
        addps xmm3, xmm7
        movaps xmm7, xmm4
        mulps xmm7, xmm5
        subps xmm7, xmm3
        movaps xmm3, xmm4
        mulps xmm3, xmm0
        shufps xmm3, xmm3, 0xB1
        movaps xmmword ptr ss : [esp+0xA0], xmm5
        movaps xmm5, xmmword ptr ss : [esp+0x90]
        movaps xmmword ptr ss : [esp+0xB0], xmm6
        movaps xmm6, xmm5
        mulps xmm5, xmm3
        addps xmm5, xmm7
        movaps xmm7, xmm3
        shufps xmm3, xmm3, 0x4E
        movaps xmmword ptr ss : [esp+0xC0], xmm4
        movaps xmm4, xmm6
        mulps xmm4, xmm3
        movaps xmmword ptr ss : [esp+0xD0], xmm6
        movaps xmm6, xmm5
        subps xmm6, xmm4
        movaps xmm4, xmmword ptr ss : [esp+0x30]
        movaps xmm5, xmmword ptr ss : [esp+0x40]
        subps xmm4, xmm5
        shufps xmm4, xmm4, 0x4E
        movaps xmm5, xmmword ptr ss : [esp+0x80]
        mulps xmm7, xmm5
        mulps xmm3, xmm5
        subps xmm4, xmm7
        mulps xmm0, xmm5
        addps xmm4, xmm3
        shufps xmm0, xmm0, 0xB1
        movaps xmm3, xmm0
        shufps xmm0, xmm0, 0x4E
        movaps xmm7, xmmword ptr ss : [esp+0xC0]
        movaps xmmword ptr ss : [esp+0xE0], xmm6
        movaps xmm6, xmm7
        mulps xmm7, xmm3
        mulps xmm6, xmm0
        addps xmm4, xmm7
        subps xmm4, xmm6
        movaps xmm6, xmmword ptr ss : [esp+0x60]
        movaps xmm7, xmmword ptr ss : [esp+0x50]
        subps xmm6, xmm7
        shufps xmm6, xmm6, 0x4E
        movaps xmm7, xmmword ptr ss : [esp+0xB0]
        mulps xmm7, xmm5
        subps xmm7, xmm6
        movaps xmm6, xmmword ptr ss : [esp+0xA0]
        mulps xmm5, xmm6
        subps xmm7, xmm5
        movaps xmm5, xmmword ptr ss : [esp+0xD0]
        mulps xmm3, xmm5
        mulps xmm5, xmm0
        subps xmm7, xmm3
        movaps xmm0, xmm2
        movaps xmm2, xmm5
        addps xmm2, xmm7
        comiss xmm1, xmm0
        movaps xmm6, xmmword ptr ss : [esp+0xE0]
        je public_6d50d8b
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_6d50d31
        movaps xmm0, xmm1
        movss dword ptr ds : [eax], xmm0
        public_6d50d31 : nop
        movaps xmm0, xmm1
        movaps xmm1, xmmword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ebx+8]
        movaps xmm3, xmm0
        rcpss xmm0, xmm0
        movaps xmm5, xmm0
        mulss xmm0, xmm0
        mulss xmm3, xmm0
        addss xmm5, xmm5
        subss xmm5, xmm3
        shufps xmm5, xmm5, 0
        mulps xmm1, xmm5
        movlps qword ptr ds : [eax], xmm1
        movhps qword ptr ds : [eax+8], xmm1
        mulps xmm4, xmm5
        movlps qword ptr ds : [eax+0x10], xmm4
        movhps qword ptr ds : [eax+0x18], xmm4
        mulps xmm6, xmm5
        movlps qword ptr ds : [eax+0x20], xmm6
        movhps qword ptr ds : [eax+0x28], xmm6
        mulps xmm5, xmm2
        movlps qword ptr ds : [eax+0x30], xmm5
        movhps qword ptr ds : [eax+0x38], xmm5
        mov esp, ebx
        pop ebx
        ret 0xC
        public_6d50d8b : nop
        add esp, 0x118
        xor eax, eax
        mov esp, ebx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d50ae0)
    }
}

#undef public_6d50af1
#undef public_6d50d31
#undef public_6d50d8b
