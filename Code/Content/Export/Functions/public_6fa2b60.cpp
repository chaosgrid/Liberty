#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa2b60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4560);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa2bc9 _public_6fa2bc9
#define public_6fa2bdd _public_6fa2bdd
#define public_6fa2be3 _public_6fa2be3
#define public_6fa2bf1 _public_6fa2bf1
#define public_6fa2c32 _public_6fa2c32
#define public_6fa2c4b _public_6fa2c4b
#define public_6fa2c5e _public_6fa2c5e
#define public_6fa2c69 _public_6fa2c69
#define public_6fa2c6c _public_6fa2c6c
#define public_6fa2c71 _public_6fa2c71
#define public_6fa2c9a _public_6fa2c9a
#define public_6fa2cb3 _public_6fa2cb3
#define public_6fa2cc6 _public_6fa2cc6
#define public_6fa2cd0 _public_6fa2cd0
#define public_6fa2cf3 _public_6fa2cf3
#define public_6fa2d0b _public_6fa2d0b
#define public_6fa2d1e _public_6fa2d1e
#define public_6fa2d2b _public_6fa2d2b
#define public_6fa2d2d _public_6fa2d2d
#define public_6fa2d33 _public_6fa2d33
#define public_6fa2d5c _public_6fa2d5c
#define public_6fa2d6f _public_6fa2d6f
#define public_6fa2d7a _public_6fa2d7a
#define public_6fa2d7d _public_6fa2d7d
#define public_6fa2d7f _public_6fa2d7f
#define public_6fa2d82 _public_6fa2d82
#define public_6fa2d8e _public_6fa2d8e

PROC_DECLARE(0x6fa2b60, internal_6fa2b60, public_6fa2b60);
extern "C" NAKED register_t __cdecl internal_6fa2b60()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x24
        mov esi, ecx
        call public_6fa912a
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
        call public_6fa4560
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6fa2bc9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6fa2bc9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jl public_6fa2bc9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6fa2be3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6fa2be3
        public_6fa2bc9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6fa2bdd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6fa2be3
        public_6fa2bdd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6fa2be3
        mov dword ptr ds : [eax], ebx
        public_6fa2be3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6fa2d8e
        public_6fa2bf1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6fa2d8e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6fa2cd0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6fa2c32
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6fa2d82
        public_6fa2c32 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6fa2c71
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6fa2c4b
        mov dword ptr ds : [edx+4], eax
        public_6fa2c4b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6fa2c5e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6fa2c6c
        public_6fa2c5e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6fa2c69
        mov dword ptr ds : [edx], ecx
        jmp public_6fa2c6c
        public_6fa2c69 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6fa2c6c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6fa2c71 : nop
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
        je public_6fa2c9a
        mov dword ptr ds : [edi+4], ecx
        public_6fa2c9a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6fa2cb3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6fa2d7f
        public_6fa2cb3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6fa2cc6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6fa2d7f
        public_6fa2cc6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6fa2d7f
        public_6fa2cd0 : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6fa2cf3
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6fa2d82
        public_6fa2cf3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6fa2d33
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6fa2d0b
        mov dword ptr ds : [edx+4], eax
        public_6fa2d0b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6fa2d1e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6fa2d2d
        public_6fa2d1e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6fa2d2b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6fa2d2d
        public_6fa2d2b : nop
        mov dword ptr ds : [edx], ecx
        public_6fa2d2d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6fa2d33 : nop
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
        je public_6fa2d5c
        mov dword ptr ds : [edi+4], ecx
        public_6fa2d5c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6fa2d6f
        mov dword ptr ds : [edi+4], edx
        jmp public_6fa2d7d
        public_6fa2d6f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6fa2d7a
        mov dword ptr ds : [edi], edx
        jmp public_6fa2d7d
        public_6fa2d7a : nop
        mov dword ptr ds : [edi+8], edx
        public_6fa2d7d : nop
        mov dword ptr ds : [edx], ecx
        public_6fa2d7f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6fa2d82 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6fa2bf1
        public_6fa2d8e : nop
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
        UNREACHABLE_TRAP(0x6fa2b60)
    }
}

#undef public_6fa2bc9
#undef public_6fa2bdd
#undef public_6fa2be3
#undef public_6fa2bf1
#undef public_6fa2c32
#undef public_6fa2c4b
#undef public_6fa2c5e
#undef public_6fa2c69
#undef public_6fa2c6c
#undef public_6fa2c71
#undef public_6fa2c9a
#undef public_6fa2cb3
#undef public_6fa2cc6
#undef public_6fa2cd0
#undef public_6fa2cf3
#undef public_6fa2d0b
#undef public_6fa2d1e
#undef public_6fa2d2b
#undef public_6fa2d2d
#undef public_6fa2d33
#undef public_6fa2d5c
#undef public_6fa2d6f
#undef public_6fa2d7a
#undef public_6fa2d7d
#undef public_6fa2d7f
#undef public_6fa2d82
#undef public_6fa2d8e
