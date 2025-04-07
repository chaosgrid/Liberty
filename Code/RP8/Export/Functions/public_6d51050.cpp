#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d51050);

#define public_6d51061 _public_6d51061
#define public_6d510b8 _public_6d510b8
#define public_6d510ce _public_6d510ce
#define public_6d510db _public_6d510db
#define public_6d510f1 _public_6d510f1
#define public_6d51116 _public_6d51116
#define public_6d511b5 _public_6d511b5
#define public_6d511d4 _public_6d511d4

PROC_DECLARE(0x6d51050, internal_6d51050, public_6d51050);
extern "C" NAKED register_t __cdecl internal_6d51050()
{
    __asm
    {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0xFFFFFFF0
        add esp, 8
        jmp public_6d51061
        push ebx
        mov ebx, esp
        public_6d51061 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        sub esp, 0x18
        movups xmm2, xmmword ptr ds : [eax]
        movaps xmm3, xmmword ptr ds : [public_6d6e6e0]
        xorps xmm0, xmm0
        andps xmm3, xmm2
        xorps xmm1, xmm1
        mulps xmm3, xmm3
        mov edx, 1
        xor ecx, ecx
        movhlps xmm0, xmm3
        movaps xmm4, xmm1
        movaps xmm1, xmm3
        addps xmm1, xmm0
        movaps xmm0, xmm1
        shufps xmm0, xmm0, 1
        addss xmm0, xmm1
        comiss xmm0, xmm4
        cmove ecx, edx
        cmp ecx, 1
        je public_6d51116
        mov al, byte ptr ds : [public_6d74200]
        test al, 1
        je public_6d510b8
        movaps xmm4, xmmword ptr ds : [public_6d741e0]
        jmp public_6d510ce
        public_6d510b8 : nop
        or al, 1
        movss xmm4, dword ptr ds : [public_6d75220]
        mov byte ptr ds : [public_6d74200], al
        movaps xmmword ptr ds : [public_6d741e0], xmm4
        public_6d510ce : nop
        test al, 2
        je public_6d510db
        movaps xmm3, xmmword ptr ds : [public_6d741f0]
        jmp public_6d510f1
        public_6d510db : nop
        or al, 2
        movss xmm3, dword ptr ds : [public_6d75224]
        mov byte ptr ds : [public_6d74200], al
        movaps xmmword ptr ds : [public_6d741f0], xmm3
        public_6d510f1 : nop
        movaps xmm5, xmm0
        rsqrtss xmm5, xmm5
        mulss xmm0, xmm5
        mulss xmm4, xmm5
        mulss xmm0, xmm5
        subss xmm3, xmm0
        mulss xmm4, xmm3
        shufps xmm4, xmm4, 0
        movaps xmm0, xmm2
        mulps xmm0, xmm4
        public_6d51116 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [ebx+8]
        movups xmm2, xmmword ptr ds : [edx]
        movaps xmm3, xmmword ptr ds : [public_6d6e6b0]
        movaps xmm4, xmmword ptr ds : [public_6d6e6a0]
        xorps xmm4, xmm0
        mulps xmm0, xmm2
        movaps xmm5, xmmword ptr ds : [public_6d6e6c0]
        movhlps xmm1, xmm0
        movaps xmm6, xmmword ptr ds : [public_6d6e6d0]
        addps xmm0, xmm1
        movaps xmm1, xmm0
        shufps xmm1, xmm1, 1
        addss xmm0, xmm1
        shufps xmm0, xmm0, 0
        andps xmm3, xmm0
        andps xmm5, xmm0
        andps xmm6, xmm0
        movaps xmm1, xmm4
        shufps xmm4, xmm4, 0x55
        mulps xmm4, xmm2
        movaps xmm7, xmm0
        movaps xmm0, xmm4
        addps xmm0, xmm3
        movaps xmm3, xmm1
        shufps xmm3, xmm3, 0xAA
        mulps xmm3, xmm2
        movaps xmm4, xmm1
        movaps xmm1, xmm3
        addps xmm1, xmm5
        movaps xmm3, xmm4
        shufps xmm4, xmm4, 0xFF
        shufps xmm3, xmm3, 0
        mulps xmm4, xmm2
        mulps xmm3, xmm2
        movaps xmm2, xmm4
        addps xmm2, xmm6
        addss xmm3, xmm7
        test al, 0xF
        jne public_6d511b5
        movaps xmmword ptr ds : [eax], xmm3
        movaps xmmword ptr ds : [eax+0x10], xmm0
        movaps xmmword ptr ds : [eax+0x20], xmm1
        movaps xmmword ptr ds : [eax+0x30], xmm2
        jmp public_6d511d4
        public_6d511b5 : nop
        movlps qword ptr ds : [eax], xmm3
        movhps qword ptr ds : [eax+8], xmm3
        movlps qword ptr ds : [eax+0x10], xmm0
        movhps qword ptr ds : [eax+0x18], xmm0
        movlps qword ptr ds : [eax+0x20], xmm1
        movhps qword ptr ds : [eax+0x28], xmm1
        movlps qword ptr ds : [eax+0x30], xmm2
        movhps qword ptr ds : [eax+0x38], xmm2
        public_6d511d4 : nop
        mov esp, ebx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d51050)
    }
}

#undef public_6d51061
#undef public_6d510b8
#undef public_6d510ce
#undef public_6d510db
#undef public_6d510f1
#undef public_6d51116
#undef public_6d511b5
#undef public_6d511d4
