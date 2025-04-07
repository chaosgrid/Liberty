#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c347a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34de0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c34809 _public_6c34809
#define public_6c3481d _public_6c3481d
#define public_6c34823 _public_6c34823
#define public_6c34831 _public_6c34831
#define public_6c34872 _public_6c34872
#define public_6c3488b _public_6c3488b
#define public_6c3489e _public_6c3489e
#define public_6c348a9 _public_6c348a9
#define public_6c348ac _public_6c348ac
#define public_6c348b1 _public_6c348b1
#define public_6c348da _public_6c348da
#define public_6c348f3 _public_6c348f3
#define public_6c34906 _public_6c34906
#define public_6c34910 _public_6c34910
#define public_6c34933 _public_6c34933
#define public_6c3494b _public_6c3494b
#define public_6c3495e _public_6c3495e
#define public_6c3496b _public_6c3496b
#define public_6c3496d _public_6c3496d
#define public_6c34973 _public_6c34973
#define public_6c3499c _public_6c3499c
#define public_6c349af _public_6c349af
#define public_6c349ba _public_6c349ba
#define public_6c349bd _public_6c349bd
#define public_6c349bf _public_6c349bf
#define public_6c349c2 _public_6c349c2
#define public_6c349ce _public_6c349ce

PROC_DECLARE(0x6c347a0, internal_6c347a0, public_6c347a0);
extern "C" NAKED register_t __cdecl internal_6c347a0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x28
        mov esi, ecx
        call public_6c34eac
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x24], 0
        mov byte ptr ds : [ebx+0x25], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6c34de0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6c34809
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6c34809
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jl public_6c34809
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6c34823
        mov dword ptr ds : [eax+8], ebx
        jmp public_6c34823
        public_6c34809 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6c3481d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6c34823
        public_6c3481d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6c34823
        mov dword ptr ds : [eax], ebx
        public_6c34823 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6c349ce
        public_6c34831 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6c349ce
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6c34910
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6c34872
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6c349c2
        public_6c34872 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6c348b1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6c3488b
        mov dword ptr ds : [edx+4], eax
        public_6c3488b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6c3489e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6c348ac
        public_6c3489e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6c348a9
        mov dword ptr ds : [edx], ecx
        jmp public_6c348ac
        public_6c348a9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6c348ac : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6c348b1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6c348da
        mov dword ptr ds : [edi+4], ecx
        public_6c348da : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6c348f3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6c349bf
        public_6c348f3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6c34906
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6c349bf
        public_6c34906 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6c349bf
        public_6c34910 : nop
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6c34933
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6c349c2
        public_6c34933 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6c34973
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6c3494b
        mov dword ptr ds : [edx+4], eax
        public_6c3494b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6c3495e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6c3496d
        public_6c3495e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6c3496b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6c3496d
        public_6c3496b : nop
        mov dword ptr ds : [edx], ecx
        public_6c3496d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6c34973 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6c3499c
        mov dword ptr ds : [edi+4], ecx
        public_6c3499c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6c349af
        mov dword ptr ds : [edi+4], edx
        jmp public_6c349bd
        public_6c349af : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6c349ba
        mov dword ptr ds : [edi], edx
        jmp public_6c349bd
        public_6c349ba : nop
        mov dword ptr ds : [edi+8], edx
        public_6c349bd : nop
        mov dword ptr ds : [edx], ecx
        public_6c349bf : nop
        mov dword ptr ds : [ecx+4], edx
        public_6c349c2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6c34831
        public_6c349ce : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6c347a0)
    }
}

#undef public_6c34809
#undef public_6c3481d
#undef public_6c34823
#undef public_6c34831
#undef public_6c34872
#undef public_6c3488b
#undef public_6c3489e
#undef public_6c348a9
#undef public_6c348ac
#undef public_6c348b1
#undef public_6c348da
#undef public_6c348f3
#undef public_6c34906
#undef public_6c34910
#undef public_6c34933
#undef public_6c3494b
#undef public_6c3495e
#undef public_6c3496b
#undef public_6c3496d
#undef public_6c34973
#undef public_6c3499c
#undef public_6c349af
#undef public_6c349ba
#undef public_6c349bd
#undef public_6c349bf
#undef public_6c349c2
#undef public_6c349ce
