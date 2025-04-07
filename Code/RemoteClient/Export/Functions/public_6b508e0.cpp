#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b508e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b50cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b50953 _public_6b50953
#define public_6b50967 _public_6b50967
#define public_6b5096d _public_6b5096d
#define public_6b50980 _public_6b50980
#define public_6b509c1 _public_6b509c1
#define public_6b509da _public_6b509da
#define public_6b509ed _public_6b509ed
#define public_6b509f8 _public_6b509f8
#define public_6b509fb _public_6b509fb
#define public_6b50a00 _public_6b50a00
#define public_6b50a29 _public_6b50a29
#define public_6b50a42 _public_6b50a42
#define public_6b50a55 _public_6b50a55
#define public_6b50a5f _public_6b50a5f
#define public_6b50a82 _public_6b50a82
#define public_6b50a9a _public_6b50a9a
#define public_6b50aad _public_6b50aad
#define public_6b50aba _public_6b50aba
#define public_6b50abc _public_6b50abc
#define public_6b50ac2 _public_6b50ac2
#define public_6b50aeb _public_6b50aeb
#define public_6b50afe _public_6b50afe
#define public_6b50b09 _public_6b50b09
#define public_6b50b0c _public_6b50b0c
#define public_6b50b0e _public_6b50b0e
#define public_6b50b11 _public_6b50b11
#define public_6b50b1d _public_6b50b1d

PROC_DECLARE(0x6b508e0, internal_6b508e0, public_6b508e0);
extern "C" NAKED register_t __cdecl internal_6b508e0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x24
        mov esi, ecx
        call public_6b6a134
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x20], 0
        mov byte ptr ds : [ebx+0x21], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6b50cc0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6b50953
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6b50953
        lea ecx, ds:[edi+0xC]
        push ecx
        push ebp
        call dword ptr ds : [public_6b6b15c]
        add esp, 8
        test al, al
        jne public_6b50953
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6b5096d
        mov dword ptr ds : [eax+8], ebx
        jmp public_6b5096d
        public_6b50953 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6b50967
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6b5096d
        public_6b50967 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6b5096d
        mov dword ptr ds : [eax], ebx
        public_6b5096d : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6b50b1d
        nop 
        lea esp, ss:[esp]
        public_6b50980 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6b50b1d
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6b50a5f
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6b509c1
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6b50b11
        public_6b509c1 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6b50a00
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6b509da
        mov dword ptr ds : [edx+4], eax
        public_6b509da : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6b509ed
        mov dword ptr ds : [edx+4], ecx
        jmp public_6b509fb
        public_6b509ed : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6b509f8
        mov dword ptr ds : [edx], ecx
        jmp public_6b509fb
        public_6b509f8 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6b509fb : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6b50a00 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6b50a29
        mov dword ptr ds : [edi+4], ecx
        public_6b50a29 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6b50a42
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b50b0e
        public_6b50a42 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6b50a55
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b50b0e
        public_6b50a55 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b50b0e
        public_6b50a5f : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6b50a82
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6b50b11
        public_6b50a82 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6b50ac2
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6b50a9a
        mov dword ptr ds : [edx+4], eax
        public_6b50a9a : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6b50aad
        mov dword ptr ds : [edx+4], ecx
        jmp public_6b50abc
        public_6b50aad : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6b50aba
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b50abc
        public_6b50aba : nop
        mov dword ptr ds : [edx], ecx
        public_6b50abc : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6b50ac2 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6b50aeb
        mov dword ptr ds : [edi+4], ecx
        public_6b50aeb : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6b50afe
        mov dword ptr ds : [edi+4], edx
        jmp public_6b50b0c
        public_6b50afe : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6b50b09
        mov dword ptr ds : [edi], edx
        jmp public_6b50b0c
        public_6b50b09 : nop
        mov dword ptr ds : [edi+8], edx
        public_6b50b0c : nop
        mov dword ptr ds : [edx], ecx
        public_6b50b0e : nop
        mov dword ptr ds : [ecx+4], edx
        public_6b50b11 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6b50980
        public_6b50b1d : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6b508e0)
    }
}

#undef public_6b50953
#undef public_6b50967
#undef public_6b5096d
#undef public_6b50980
#undef public_6b509c1
#undef public_6b509da
#undef public_6b509ed
#undef public_6b509f8
#undef public_6b509fb
#undef public_6b50a00
#undef public_6b50a29
#undef public_6b50a42
#undef public_6b50a55
#undef public_6b50a5f
#undef public_6b50a82
#undef public_6b50a9a
#undef public_6b50aad
#undef public_6b50aba
#undef public_6b50abc
#undef public_6b50ac2
#undef public_6b50aeb
#undef public_6b50afe
#undef public_6b50b09
#undef public_6b50b0c
#undef public_6b50b0e
#undef public_6b50b11
#undef public_6b50b1d
