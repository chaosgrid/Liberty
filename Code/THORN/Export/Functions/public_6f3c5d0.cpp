#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3dc40);
CLANG_FORWARD_PROC_SYMBOL(public_6f3de90);
CLANG_FORWARD_PROC_SYMBOL(public_6f3dee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3eef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ef10);
CLANG_FORWARD_PROC_SYMBOL(public_6f3fbb0);

#define public_6f3c5f0 _public_6f3c5f0
#define public_6f3c603 _public_6f3c603
#define public_6f3c606 _public_6f3c606
#define public_6f3c60a _public_6f3c60a
#define public_6f3c669 _public_6f3c669
#define public_6f3c681 _public_6f3c681
#define public_6f3c68b _public_6f3c68b
#define public_6f3c68f _public_6f3c68f
#define public_6f3c6a0 _public_6f3c6a0
#define public_6f3c6db _public_6f3c6db
#define public_6f3c6ea _public_6f3c6ea
#define public_6f3c70b _public_6f3c70b
#define public_6f3c72c _public_6f3c72c
#define public_6f3c73a _public_6f3c73a
#define public_6f3c759 _public_6f3c759
#define public_6f3c765 _public_6f3c765
#define public_6f3c781 _public_6f3c781
#define public_6f3c79c _public_6f3c79c
#define public_6f3c7a3 _public_6f3c7a3
#define public_6f3c7c6 _public_6f3c7c6

PROC_DECLARE(0x6f3c5d0, internal_6f3c5d0, public_6f3c5d0);
extern "C" NAKED register_t __cdecl internal_6f3c5d0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_6f3c60a
        lea esp, ss:[esp]
        public_6f3c5f0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setl al
        test al, al
        je public_6f3c603
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f3c606
        public_6f3c603 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f3c606 : nop
        cmp ebp, edx
        jne public_6f3c5f0
        public_6f3c60a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f3c781
        push 0
        push esi
        mov ecx, edi
        call public_6f3eef0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f3fbb0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f3c669
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f3c669
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_6f3c669
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3c68f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f3c68f
        public_6f3c669 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f3c681
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3c68b
        public_6f3c681 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3c68b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f3c68b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f3c68f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f3c765
        lea ecx, ds:[ecx]
        public_6f3c6a0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_6f3c765
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3c70b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6f3c6db
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f3c759
        public_6f3c6db : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3c6ea
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f3de90
        public_6f3c6ea : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f3dee0
        jmp public_6f3c759
        public_6f3c70b : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6f3c72c
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f3c759
        public_6f3c72c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3c73a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f3dee0
        public_6f3c73a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f3de90
        public_6f3c759 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f3c6a0
        public_6f3c765 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f3c781 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f3c79c
        cmp esi, dword ptr ds : [ecx]
        je public_6f3c7a3
        lea ecx, ss:[esp+0x10]
        call public_6f3ef10
        mov edx, dword ptr ss : [esp+0x10]
        public_6f3c79c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jge public_6f3c7c6
        public_6f3c7a3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f3dc40
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6f3c7c6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3c5d0)
    }
}

#undef public_6f3c5f0
#undef public_6f3c603
#undef public_6f3c606
#undef public_6f3c60a
#undef public_6f3c669
#undef public_6f3c681
#undef public_6f3c68b
#undef public_6f3c68f
#undef public_6f3c6a0
#undef public_6f3c6db
#undef public_6f3c6ea
#undef public_6f3c70b
#undef public_6f3c72c
#undef public_6f3c73a
#undef public_6f3c759
#undef public_6f3c765
#undef public_6f3c781
#undef public_6f3c79c
#undef public_6f3c7a3
#undef public_6f3c7c6
