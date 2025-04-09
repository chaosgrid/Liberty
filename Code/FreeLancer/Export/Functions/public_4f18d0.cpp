#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4f18d0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);

#define public_4f192a _public_4f192a
#define public_4f1967 _public_4f1967
#define public_4f1970 _public_4f1970
#define public_4f1a65 _public_4f1a65
#define public_4f1a78 _public_4f1a78
#define public_4f1a7a _public_4f1a7a
#define public_4f1ab1 _public_4f1ab1
#define public_4f1ab6 _public_4f1ab6
#define public_4f1ae9 _public_4f1ae9
#define public_4f1afb _public_4f1afb
#define public_4f1b2b _public_4f1b2b
#define public_4f1b2d _public_4f1b2d

PROC_DECLARE(0x4f18d0, internal_4f18d0, public_4f18d0);
extern "C" NAKED register_t __cdecl internal_4f18d0()
{
    __asm
    {
        sub esp, 0x14
        push esi
        mov esi, ecx
        mov byte ptr ss : [esp+7], 0
        call public_42d680
        fadd dword ptr ds : [esi+0x420]
        fst dword ptr ds : [esi+0x420]
        fcom dword ptr ds : [public_5d8ef0]
        fnstsw ax
        test ah, 5
        jnp public_4f1b2b
        fcomp dword ptr ds : [esi+0x424]
        fnstsw ax
        test ah, 1
        jne public_4f192a
        mov al, byte ptr ds : [esi+0x428]
        test al, al
        sete al
        mov dword ptr ds : [esi+0x420], 0
        mov byte ptr ds : [esi+0x428], al
        mov byte ptr ss : [esp+7], 1
        public_4f192a : nop
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x14], 0x5368D4A5
        mov byte ptr ss : [esp+0xE], 0
        call public_54baf0
        mov ebp, eax
        xor ebx, ebx
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x1C], ebp
        je public_4f1ab1
        mov eax, dword ptr ds : [esi+0x36C]
        cmp dword ptr ds : [eax+0x800], ebx
        jle public_4f1ab1
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        jmp public_4f1970
        public_4f1967 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        nop 
        lea esp, ss:[esp]
        public_4f1970 : nop
        mov eax, dword ptr ds : [eax+ebx*8]
        test eax, eax
        je public_4f1a7a
        lea edi, ds:[eax-8]
        test edi, edi
        je public_4f1a7a
        mov ecx, dword ptr ds : [esi+0x374]
        mov edx, dword ptr ss : [esp+0x14]
        test dword ptr ds : [edx+ecx], 0x1000000
        je public_4f1a7a
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x74]
        test eax, eax
        jne public_4f1a7a
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_4f1a7a
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov ebp, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, ebp
        jne public_4f1a7a
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x20]
        mov ebp, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [ebp]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [ebp+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [ebp+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        jp public_4f1a78
        mov al, byte ptr ds : [esi+0x44C]
        fstp dword ptr ss : [esp+0x18]
        test al, al
        mov byte ptr ss : [esp+0x12], 1
        jne public_4f1a7a
        mov byte ptr ds : [esi+0x44C], 1
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x150]
        mov ecx, eax
        call dword ptr ds : [public_5c6590]
        test eax, eax
        je public_4f1a65
        cmp dword ptr ds : [eax+0xA8], 0xA
        jne public_4f1a65
        mov eax, dword ptr ds : [public_674b50]
        push 0
        push eax
        call public_489e80
        add esp, 8
        jmp public_4f1a7a
        public_4f1a65 : nop
        mov ecx, dword ptr ds : [public_674b4c]
        push 0
        push ecx
        call public_489e80
        add esp, 8
        jmp public_4f1a7a
        public_4f1a78 : nop
        fstp st(0)
        public_4f1a7a : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x36C]
        mov ecx, dword ptr ds : [eax+0x800]
        inc ebx
        add edx, 0x34
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x14], edx
        jl public_4f1967
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        pop edi
        je public_4f1ab1
        mov al, byte ptr ds : [esi+0x428]
        test al, al
        jne public_4f1ab1
        xor eax, eax
        jmp public_4f1ab6
        public_4f1ab1 : nop
        mov eax, 1
        public_4f1ab6 : nop
        mov ecx, dword ptr ds : [esi+0x410]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        mov al, byte ptr ss : [esp+0xE]
        test al, al
        pop ebp
        mov byte ptr ds : [esi+0x44C], al
        pop ebx
        jne public_4f1ae9
        mov eax, dword ptr ds : [public_5d8ef0]
        mov dword ptr ds : [esi+0x424], eax
        pop esi
        add esp, 0x14
        ret 
        public_4f1ae9 : nop
        mov al, byte ptr ss : [esp+7]
        test al, al
        je public_4f1afb
        push 0x19
        call public_5645c0
        add esp, 4
        public_4f1afb : nop
        fld dword ptr ss : [esp+0xC]
        fsqrt 
        fmul qword ptr ds : [public_5c75f8]
        fst dword ptr ds : [esi+0x424]
        fcomp dword ptr ds : [public_5d8ef0]
        fnstsw ax
        test ah, 5
        jp public_4f1b2d
        mov ecx, dword ptr ds : [public_5d8ef0]
        mov dword ptr ds : [esi+0x424], ecx
        pop esi
        add esp, 0x14
        ret 
        public_4f1b2b : nop
        fstp st(0)
        public_4f1b2d : nop
        pop esi
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4f18d0)
    }
}

#undef public_4f192a
#undef public_4f1967
#undef public_4f1970
#undef public_4f1a65
#undef public_4f1a78
#undef public_4f1a7a
#undef public_4f1ab1
#undef public_4f1ab6
#undef public_4f1ae9
#undef public_4f1afb
#undef public_4f1b2b
#undef public_4f1b2d
