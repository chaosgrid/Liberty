#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f42af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a670);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f42b59 _public_6f42b59
#define public_6f42b6d _public_6f42b6d
#define public_6f42b73 _public_6f42b73
#define public_6f42b81 _public_6f42b81
#define public_6f42bc2 _public_6f42bc2
#define public_6f42bdb _public_6f42bdb
#define public_6f42bee _public_6f42bee
#define public_6f42bf9 _public_6f42bf9
#define public_6f42bfc _public_6f42bfc
#define public_6f42c01 _public_6f42c01
#define public_6f42c2a _public_6f42c2a
#define public_6f42c43 _public_6f42c43
#define public_6f42c56 _public_6f42c56
#define public_6f42c60 _public_6f42c60
#define public_6f42c83 _public_6f42c83
#define public_6f42c9b _public_6f42c9b
#define public_6f42cae _public_6f42cae
#define public_6f42cbb _public_6f42cbb
#define public_6f42cbd _public_6f42cbd
#define public_6f42cc3 _public_6f42cc3
#define public_6f42cec _public_6f42cec
#define public_6f42cff _public_6f42cff
#define public_6f42d0a _public_6f42d0a
#define public_6f42d0d _public_6f42d0d
#define public_6f42d0f _public_6f42d0f
#define public_6f42d12 _public_6f42d12
#define public_6f42d1e _public_6f42d1e

PROC_DECLARE(0x6f42af0, internal_6f42af0, public_6f42af0);
extern "C" NAKED register_t __cdecl internal_6f42af0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x20
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x1C], 0
        mov byte ptr ds : [ebx+0x1D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f6a670
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f42b59
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f42b59
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f42b59
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f42b73
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f42b73
        public_6f42b59 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f42b6d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f42b73
        public_6f42b6d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f42b73
        mov dword ptr ds : [eax], ebx
        public_6f42b73 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f42d1e
        public_6f42b81 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f42d1e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f42c60
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_6f42bc2
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f42d12
        public_6f42bc2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f42c01
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f42bdb
        mov dword ptr ds : [edx+4], eax
        public_6f42bdb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f42bee
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f42bfc
        public_6f42bee : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f42bf9
        mov dword ptr ds : [edx], ecx
        jmp public_6f42bfc
        public_6f42bf9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f42bfc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f42c01 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f42c2a
        mov dword ptr ds : [edi+4], ecx
        public_6f42c2a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f42c43
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f42d0f
        public_6f42c43 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f42c56
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f42d0f
        public_6f42c56 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f42d0f
        public_6f42c60 : nop
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_6f42c83
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f42d12
        public_6f42c83 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f42cc3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f42c9b
        mov dword ptr ds : [edx+4], eax
        public_6f42c9b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f42cae
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f42cbd
        public_6f42cae : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f42cbb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f42cbd
        public_6f42cbb : nop
        mov dword ptr ds : [edx], ecx
        public_6f42cbd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f42cc3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f42cec
        mov dword ptr ds : [edi+4], ecx
        public_6f42cec : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f42cff
        mov dword ptr ds : [edi+4], edx
        jmp public_6f42d0d
        public_6f42cff : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f42d0a
        mov dword ptr ds : [edi], edx
        jmp public_6f42d0d
        public_6f42d0a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f42d0d : nop
        mov dword ptr ds : [edx], ecx
        public_6f42d0f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f42d12 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f42b81
        public_6f42d1e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f42af0)
    }
}

#undef public_6f42b59
#undef public_6f42b6d
#undef public_6f42b73
#undef public_6f42b81
#undef public_6f42bc2
#undef public_6f42bdb
#undef public_6f42bee
#undef public_6f42bf9
#undef public_6f42bfc
#undef public_6f42c01
#undef public_6f42c2a
#undef public_6f42c43
#undef public_6f42c56
#undef public_6f42c60
#undef public_6f42c83
#undef public_6f42c9b
#undef public_6f42cae
#undef public_6f42cbb
#undef public_6f42cbd
#undef public_6f42cc3
#undef public_6f42cec
#undef public_6f42cff
#undef public_6f42d0a
#undef public_6f42d0d
#undef public_6f42d0f
#undef public_6f42d12
#undef public_6f42d1e
