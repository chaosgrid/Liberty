#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eee780);
CLANG_FORWARD_PROC_SYMBOL(public_6f43a40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f43aa9 _public_6f43aa9
#define public_6f43abd _public_6f43abd
#define public_6f43ac3 _public_6f43ac3
#define public_6f43ad1 _public_6f43ad1
#define public_6f43b12 _public_6f43b12
#define public_6f43b2b _public_6f43b2b
#define public_6f43b3e _public_6f43b3e
#define public_6f43b49 _public_6f43b49
#define public_6f43b4c _public_6f43b4c
#define public_6f43b51 _public_6f43b51
#define public_6f43b7a _public_6f43b7a
#define public_6f43b93 _public_6f43b93
#define public_6f43ba6 _public_6f43ba6
#define public_6f43bb0 _public_6f43bb0
#define public_6f43bd3 _public_6f43bd3
#define public_6f43beb _public_6f43beb
#define public_6f43bfe _public_6f43bfe
#define public_6f43c0b _public_6f43c0b
#define public_6f43c0d _public_6f43c0d
#define public_6f43c13 _public_6f43c13
#define public_6f43c3c _public_6f43c3c
#define public_6f43c4f _public_6f43c4f
#define public_6f43c5a _public_6f43c5a
#define public_6f43c5d _public_6f43c5d
#define public_6f43c5f _public_6f43c5f
#define public_6f43c62 _public_6f43c62
#define public_6f43c6e _public_6f43c6e

PROC_DECLARE(0x6f43a40, internal_6f43a40, public_6f43a40);
extern "C" NAKED register_t __cdecl internal_6f43a40()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x54
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x50], 0
        mov byte ptr ds : [ebx+0x51], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6eee780
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f43aa9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f43aa9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f43aa9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f43ac3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f43ac3
        public_6f43aa9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f43abd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f43ac3
        public_6f43abd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f43ac3
        mov dword ptr ds : [eax], ebx
        public_6f43ac3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f43c6e
        public_6f43ad1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_6f43c6e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f43bb0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x50], 0
        jne public_6f43b12
        mov byte ptr ds : [ecx+0x50], 1
        mov byte ptr ds : [edx+0x50], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f43c62
        public_6f43b12 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f43b51
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f43b2b
        mov dword ptr ds : [edx+4], eax
        public_6f43b2b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f43b3e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f43b4c
        public_6f43b3e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f43b49
        mov dword ptr ds : [edx], ecx
        jmp public_6f43b4c
        public_6f43b49 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f43b4c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f43b51 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x50], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f43b7a
        mov dword ptr ds : [edi+4], ecx
        public_6f43b7a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f43b93
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f43c5f
        public_6f43b93 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f43ba6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f43c5f
        public_6f43ba6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f43c5f
        public_6f43bb0 : nop
        cmp byte ptr ds : [edx+0x50], 0
        jne public_6f43bd3
        mov byte ptr ds : [ecx+0x50], 1
        mov byte ptr ds : [edx+0x50], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x50], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f43c62
        public_6f43bd3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f43c13
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f43beb
        mov dword ptr ds : [edx+4], eax
        public_6f43beb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f43bfe
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f43c0d
        public_6f43bfe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f43c0b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f43c0d
        public_6f43c0b : nop
        mov dword ptr ds : [edx], ecx
        public_6f43c0d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f43c13 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x50], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f43c3c
        mov dword ptr ds : [edi+4], ecx
        public_6f43c3c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f43c4f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f43c5d
        public_6f43c4f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f43c5a
        mov dword ptr ds : [edi], edx
        jmp public_6f43c5d
        public_6f43c5a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f43c5d : nop
        mov dword ptr ds : [edx], ecx
        public_6f43c5f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f43c62 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f43ad1
        public_6f43c6e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x50], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f43a40)
    }
}

#undef public_6f43aa9
#undef public_6f43abd
#undef public_6f43ac3
#undef public_6f43ad1
#undef public_6f43b12
#undef public_6f43b2b
#undef public_6f43b3e
#undef public_6f43b49
#undef public_6f43b4c
#undef public_6f43b51
#undef public_6f43b7a
#undef public_6f43b93
#undef public_6f43ba6
#undef public_6f43bb0
#undef public_6f43bd3
#undef public_6f43beb
#undef public_6f43bfe
#undef public_6f43c0b
#undef public_6f43c0d
#undef public_6f43c13
#undef public_6f43c3c
#undef public_6f43c4f
#undef public_6f43c5a
#undef public_6f43c5d
#undef public_6f43c5f
#undef public_6f43c62
#undef public_6f43c6e
