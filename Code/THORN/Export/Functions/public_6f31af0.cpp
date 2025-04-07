#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f33e20);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f31b59 _public_6f31b59
#define public_6f31b6d _public_6f31b6d
#define public_6f31b73 _public_6f31b73
#define public_6f31b81 _public_6f31b81
#define public_6f31bc2 _public_6f31bc2
#define public_6f31bdb _public_6f31bdb
#define public_6f31bee _public_6f31bee
#define public_6f31bf9 _public_6f31bf9
#define public_6f31bfc _public_6f31bfc
#define public_6f31c01 _public_6f31c01
#define public_6f31c2a _public_6f31c2a
#define public_6f31c43 _public_6f31c43
#define public_6f31c56 _public_6f31c56
#define public_6f31c60 _public_6f31c60
#define public_6f31c83 _public_6f31c83
#define public_6f31c9b _public_6f31c9b
#define public_6f31cae _public_6f31cae
#define public_6f31cbb _public_6f31cbb
#define public_6f31cbd _public_6f31cbd
#define public_6f31cc3 _public_6f31cc3
#define public_6f31cec _public_6f31cec
#define public_6f31cff _public_6f31cff
#define public_6f31d0a _public_6f31d0a
#define public_6f31d0d _public_6f31d0d
#define public_6f31d0f _public_6f31d0f
#define public_6f31d12 _public_6f31d12
#define public_6f31d1e _public_6f31d1e

PROC_DECLARE(0x6f31af0, internal_6f31af0, public_6f31af0);
extern "C" NAKED register_t __cdecl internal_6f31af0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6f57e9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f33e20
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f31b59
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f31b59
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jl public_6f31b59
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f31b73
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f31b73
        public_6f31b59 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f31b6d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f31b73
        public_6f31b6d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f31b73
        mov dword ptr ds : [eax], ebx
        public_6f31b73 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f31d1e
        public_6f31b81 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6f31d1e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f31c60
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6f31bc2
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f31d12
        public_6f31bc2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f31c01
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f31bdb
        mov dword ptr ds : [edx+4], eax
        public_6f31bdb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f31bee
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f31bfc
        public_6f31bee : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f31bf9
        mov dword ptr ds : [edx], ecx
        jmp public_6f31bfc
        public_6f31bf9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f31bfc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f31c01 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f31c2a
        mov dword ptr ds : [edi+4], ecx
        public_6f31c2a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f31c43
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f31d0f
        public_6f31c43 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f31c56
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f31d0f
        public_6f31c56 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f31d0f
        public_6f31c60 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6f31c83
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f31d12
        public_6f31c83 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f31cc3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f31c9b
        mov dword ptr ds : [edx+4], eax
        public_6f31c9b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f31cae
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f31cbd
        public_6f31cae : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f31cbb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f31cbd
        public_6f31cbb : nop
        mov dword ptr ds : [edx], ecx
        public_6f31cbd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f31cc3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f31cec
        mov dword ptr ds : [edi+4], ecx
        public_6f31cec : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f31cff
        mov dword ptr ds : [edi+4], edx
        jmp public_6f31d0d
        public_6f31cff : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f31d0a
        mov dword ptr ds : [edi], edx
        jmp public_6f31d0d
        public_6f31d0a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f31d0d : nop
        mov dword ptr ds : [edx], ecx
        public_6f31d0f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f31d12 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f31b81
        public_6f31d1e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f31af0)
    }
}

#undef public_6f31b59
#undef public_6f31b6d
#undef public_6f31b73
#undef public_6f31b81
#undef public_6f31bc2
#undef public_6f31bdb
#undef public_6f31bee
#undef public_6f31bf9
#undef public_6f31bfc
#undef public_6f31c01
#undef public_6f31c2a
#undef public_6f31c43
#undef public_6f31c56
#undef public_6f31c60
#undef public_6f31c83
#undef public_6f31c9b
#undef public_6f31cae
#undef public_6f31cbb
#undef public_6f31cbd
#undef public_6f31cc3
#undef public_6f31cec
#undef public_6f31cff
#undef public_6f31d0a
#undef public_6f31d0d
#undef public_6f31d0f
#undef public_6f31d12
#undef public_6f31d1e
