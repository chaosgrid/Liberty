#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2f320);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c5b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7c622 _public_6f7c622
#define public_6f7c636 _public_6f7c636
#define public_6f7c63c _public_6f7c63c
#define public_6f7c650 _public_6f7c650
#define public_6f7c6a0 _public_6f7c6a0
#define public_6f7c6b9 _public_6f7c6b9
#define public_6f7c6cc _public_6f7c6cc
#define public_6f7c6d7 _public_6f7c6d7
#define public_6f7c6da _public_6f7c6da
#define public_6f7c6df _public_6f7c6df
#define public_6f7c70e _public_6f7c70e
#define public_6f7c727 _public_6f7c727
#define public_6f7c73a _public_6f7c73a
#define public_6f7c744 _public_6f7c744
#define public_6f7c773 _public_6f7c773
#define public_6f7c78b _public_6f7c78b
#define public_6f7c79e _public_6f7c79e
#define public_6f7c7ab _public_6f7c7ab
#define public_6f7c7ad _public_6f7c7ad
#define public_6f7c7b3 _public_6f7c7b3
#define public_6f7c7e2 _public_6f7c7e2
#define public_6f7c7f5 _public_6f7c7f5
#define public_6f7c800 _public_6f7c800
#define public_6f7c803 _public_6f7c803
#define public_6f7c805 _public_6f7c805
#define public_6f7c808 _public_6f7c808
#define public_6f7c814 _public_6f7c814

PROC_DECLARE(0x6f7c5b0, internal_6f7c5b0, public_6f7c5b0);
extern "C" NAKED register_t __cdecl internal_6f7c5b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x138
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x134], 0
        mov byte ptr ds : [ebx+0x135], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f2f320
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f7c622
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f7c622
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f7c622
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f7c63c
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f7c63c
        public_6f7c622 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f7c636
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f7c63c
        public_6f7c636 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f7c63c
        mov dword ptr ds : [eax], ebx
        public_6f7c63c : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f7c814
        lea ebx, ds:[ebx]
        public_6f7c650 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x134]
        test dl, dl
        jne public_6f7c814
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f7c744
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x134], 0
        jne public_6f7c6a0
        mov byte ptr ds : [ecx+0x134], 1
        mov byte ptr ds : [edx+0x134], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x134], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f7c808
        public_6f7c6a0 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f7c6df
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f7c6b9
        mov dword ptr ds : [edx+4], eax
        public_6f7c6b9 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f7c6cc
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f7c6da
        public_6f7c6cc : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f7c6d7
        mov dword ptr ds : [edx], ecx
        jmp public_6f7c6da
        public_6f7c6d7 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f7c6da : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f7c6df : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x134], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x134], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f7c70e
        mov dword ptr ds : [edi+4], ecx
        public_6f7c70e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f7c727
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f7c805
        public_6f7c727 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f7c73a
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f7c805
        public_6f7c73a : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f7c805
        public_6f7c744 : nop
        cmp byte ptr ds : [edx+0x134], 0
        jne public_6f7c773
        mov byte ptr ds : [ecx+0x134], 1
        mov byte ptr ds : [edx+0x134], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x134], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f7c808
        public_6f7c773 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f7c7b3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f7c78b
        mov dword ptr ds : [edx+4], eax
        public_6f7c78b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f7c79e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f7c7ad
        public_6f7c79e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f7c7ab
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f7c7ad
        public_6f7c7ab : nop
        mov dword ptr ds : [edx], ecx
        public_6f7c7ad : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f7c7b3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x134], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x134], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f7c7e2
        mov dword ptr ds : [edi+4], ecx
        public_6f7c7e2 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f7c7f5
        mov dword ptr ds : [edi+4], edx
        jmp public_6f7c803
        public_6f7c7f5 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f7c800
        mov dword ptr ds : [edi], edx
        jmp public_6f7c803
        public_6f7c800 : nop
        mov dword ptr ds : [edi+8], edx
        public_6f7c803 : nop
        mov dword ptr ds : [edx], ecx
        public_6f7c805 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f7c808 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f7c650
        public_6f7c814 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x134], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f7c5b0)
    }
}

#undef public_6f7c622
#undef public_6f7c636
#undef public_6f7c63c
#undef public_6f7c650
#undef public_6f7c6a0
#undef public_6f7c6b9
#undef public_6f7c6cc
#undef public_6f7c6d7
#undef public_6f7c6da
#undef public_6f7c6df
#undef public_6f7c70e
#undef public_6f7c727
#undef public_6f7c73a
#undef public_6f7c744
#undef public_6f7c773
#undef public_6f7c78b
#undef public_6f7c79e
#undef public_6f7c7ab
#undef public_6f7c7ad
#undef public_6f7c7b3
#undef public_6f7c7e2
#undef public_6f7c7f5
#undef public_6f7c800
#undef public_6f7c803
#undef public_6f7c805
#undef public_6f7c808
#undef public_6f7c814
