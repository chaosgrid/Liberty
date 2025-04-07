#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1a30);
CLANG_FORWARD_PROC_SYMBOL(public_6ed3170);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ed1a99 _public_6ed1a99
#define public_6ed1aad _public_6ed1aad
#define public_6ed1ab3 _public_6ed1ab3
#define public_6ed1ac1 _public_6ed1ac1
#define public_6ed1b02 _public_6ed1b02
#define public_6ed1b1b _public_6ed1b1b
#define public_6ed1b2e _public_6ed1b2e
#define public_6ed1b39 _public_6ed1b39
#define public_6ed1b3c _public_6ed1b3c
#define public_6ed1b41 _public_6ed1b41
#define public_6ed1b6a _public_6ed1b6a
#define public_6ed1b83 _public_6ed1b83
#define public_6ed1b96 _public_6ed1b96
#define public_6ed1ba0 _public_6ed1ba0
#define public_6ed1bc3 _public_6ed1bc3
#define public_6ed1bdb _public_6ed1bdb
#define public_6ed1bee _public_6ed1bee
#define public_6ed1bfb _public_6ed1bfb
#define public_6ed1bfd _public_6ed1bfd
#define public_6ed1c03 _public_6ed1c03
#define public_6ed1c2c _public_6ed1c2c
#define public_6ed1c3f _public_6ed1c3f
#define public_6ed1c4a _public_6ed1c4a
#define public_6ed1c4d _public_6ed1c4d
#define public_6ed1c4f _public_6ed1c4f
#define public_6ed1c52 _public_6ed1c52
#define public_6ed1c5e _public_6ed1c5e

PROC_DECLARE(0x6ed1a30, internal_6ed1a30, public_6ed1a30);
extern "C" NAKED register_t __cdecl internal_6ed1a30()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x44
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x40], 0
        mov byte ptr ds : [ebx+0x41], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6ed3170
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6ed1a99
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6ed1a99
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6ed1a99
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6ed1ab3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6ed1ab3
        public_6ed1a99 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6ed1aad
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6ed1ab3
        public_6ed1aad : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6ed1ab3
        mov dword ptr ds : [eax], ebx
        public_6ed1ab3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6ed1c5e
        public_6ed1ac1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_6ed1c5e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6ed1ba0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x40], 0
        jne public_6ed1b02
        mov byte ptr ds : [ecx+0x40], 1
        mov byte ptr ds : [edx+0x40], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6ed1c52
        public_6ed1b02 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6ed1b41
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ed1b1b
        mov dword ptr ds : [edx+4], eax
        public_6ed1b1b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ed1b2e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ed1b3c
        public_6ed1b2e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6ed1b39
        mov dword ptr ds : [edx], ecx
        jmp public_6ed1b3c
        public_6ed1b39 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ed1b3c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ed1b41 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6ed1b6a
        mov dword ptr ds : [edi+4], ecx
        public_6ed1b6a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ed1b83
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ed1c4f
        public_6ed1b83 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ed1b96
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ed1c4f
        public_6ed1b96 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ed1c4f
        public_6ed1ba0 : nop
        cmp byte ptr ds : [edx+0x40], 0
        jne public_6ed1bc3
        mov byte ptr ds : [ecx+0x40], 1
        mov byte ptr ds : [edx+0x40], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x40], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6ed1c52
        public_6ed1bc3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6ed1c03
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ed1bdb
        mov dword ptr ds : [edx+4], eax
        public_6ed1bdb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ed1bee
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ed1bfd
        public_6ed1bee : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6ed1bfb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ed1bfd
        public_6ed1bfb : nop
        mov dword ptr ds : [edx], ecx
        public_6ed1bfd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ed1c03 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6ed1c2c
        mov dword ptr ds : [edi+4], ecx
        public_6ed1c2c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ed1c3f
        mov dword ptr ds : [edi+4], edx
        jmp public_6ed1c4d
        public_6ed1c3f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6ed1c4a
        mov dword ptr ds : [edi], edx
        jmp public_6ed1c4d
        public_6ed1c4a : nop
        mov dword ptr ds : [edi+8], edx
        public_6ed1c4d : nop
        mov dword ptr ds : [edx], ecx
        public_6ed1c4f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ed1c52 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ed1ac1
        public_6ed1c5e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x40], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ed1a30)
    }
}

#undef public_6ed1a99
#undef public_6ed1aad
#undef public_6ed1ab3
#undef public_6ed1ac1
#undef public_6ed1b02
#undef public_6ed1b1b
#undef public_6ed1b2e
#undef public_6ed1b39
#undef public_6ed1b3c
#undef public_6ed1b41
#undef public_6ed1b6a
#undef public_6ed1b83
#undef public_6ed1b96
#undef public_6ed1ba0
#undef public_6ed1bc3
#undef public_6ed1bdb
#undef public_6ed1bee
#undef public_6ed1bfb
#undef public_6ed1bfd
#undef public_6ed1c03
#undef public_6ed1c2c
#undef public_6ed1c3f
#undef public_6ed1c4a
#undef public_6ed1c4d
#undef public_6ed1c4f
#undef public_6ed1c52
#undef public_6ed1c5e
