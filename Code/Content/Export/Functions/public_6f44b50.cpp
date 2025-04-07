#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f44b50);
CLANG_FORWARD_PROC_SYMBOL(public_6f6fa70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f44bb9 _public_6f44bb9
#define public_6f44bcd _public_6f44bcd
#define public_6f44bd3 _public_6f44bd3
#define public_6f44be1 _public_6f44be1
#define public_6f44c22 _public_6f44c22
#define public_6f44c3b _public_6f44c3b
#define public_6f44c4e _public_6f44c4e
#define public_6f44c59 _public_6f44c59
#define public_6f44c5c _public_6f44c5c
#define public_6f44c61 _public_6f44c61
#define public_6f44c8a _public_6f44c8a
#define public_6f44ca3 _public_6f44ca3
#define public_6f44cb6 _public_6f44cb6
#define public_6f44cc0 _public_6f44cc0
#define public_6f44ce3 _public_6f44ce3
#define public_6f44cfb _public_6f44cfb
#define public_6f44d0e _public_6f44d0e
#define public_6f44d1b _public_6f44d1b
#define public_6f44d1d _public_6f44d1d
#define public_6f44d23 _public_6f44d23
#define public_6f44d4c _public_6f44d4c
#define public_6f44d5f _public_6f44d5f
#define public_6f44d6a _public_6f44d6a
#define public_6f44d6d _public_6f44d6d
#define public_6f44d6f _public_6f44d6f
#define public_6f44d72 _public_6f44d72
#define public_6f44d7e _public_6f44d7e

PROC_DECLARE(0x6f44b50, internal_6f44b50, public_6f44b50);
extern "C" NAKED register_t __cdecl internal_6f44b50()
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
        call public_6f6fa70
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f44bb9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f44bb9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f44bb9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f44bd3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f44bd3
        public_6f44bb9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f44bcd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f44bd3
        public_6f44bcd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f44bd3
        mov dword ptr ds : [eax], ebx
        public_6f44bd3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f44d7e
        public_6f44be1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f44d7e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f44cc0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6f44c22
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f44d72
        public_6f44c22 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f44c61
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f44c3b
        mov dword ptr ds : [edx+4], eax
        public_6f44c3b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f44c4e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f44c5c
        public_6f44c4e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f44c59
        mov dword ptr ds : [edx], ecx
        jmp public_6f44c5c
        public_6f44c59 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f44c5c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f44c61 : nop
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
        je public_6f44c8a
        mov dword ptr ds : [edi+4], ecx
        public_6f44c8a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f44ca3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f44d6f
        public_6f44ca3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f44cb6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f44d6f
        public_6f44cb6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f44d6f
        public_6f44cc0 : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6f44ce3
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f44d72
        public_6f44ce3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f44d23
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f44cfb
        mov dword ptr ds : [edx+4], eax
        public_6f44cfb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f44d0e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f44d1d
        public_6f44d0e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f44d1b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f44d1d
        public_6f44d1b : nop
        mov dword ptr ds : [edx], ecx
        public_6f44d1d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f44d23 : nop
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
        je public_6f44d4c
        mov dword ptr ds : [edi+4], ecx
        public_6f44d4c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f44d5f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f44d6d
        public_6f44d5f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f44d6a
        mov dword ptr ds : [edi], edx
        jmp public_6f44d6d
        public_6f44d6a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f44d6d : nop
        mov dword ptr ds : [edx], ecx
        public_6f44d6f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f44d72 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f44be1
        public_6f44d7e : nop
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
        UNREACHABLE_TRAP(0x6f44b50)
    }
}

#undef public_6f44bb9
#undef public_6f44bcd
#undef public_6f44bd3
#undef public_6f44be1
#undef public_6f44c22
#undef public_6f44c3b
#undef public_6f44c4e
#undef public_6f44c59
#undef public_6f44c5c
#undef public_6f44c61
#undef public_6f44c8a
#undef public_6f44ca3
#undef public_6f44cb6
#undef public_6f44cc0
#undef public_6f44ce3
#undef public_6f44cfb
#undef public_6f44d0e
#undef public_6f44d1b
#undef public_6f44d1d
#undef public_6f44d23
#undef public_6f44d4c
#undef public_6f44d5f
#undef public_6f44d6a
#undef public_6f44d6d
#undef public_6f44d6f
#undef public_6f44d72
#undef public_6f44d7e
