#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f59f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a1b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f59f99 _public_6f59f99
#define public_6f59fad _public_6f59fad
#define public_6f59fb3 _public_6f59fb3
#define public_6f59fc1 _public_6f59fc1
#define public_6f5a002 _public_6f5a002
#define public_6f5a01b _public_6f5a01b
#define public_6f5a02e _public_6f5a02e
#define public_6f5a039 _public_6f5a039
#define public_6f5a03c _public_6f5a03c
#define public_6f5a041 _public_6f5a041
#define public_6f5a06a _public_6f5a06a
#define public_6f5a083 _public_6f5a083
#define public_6f5a096 _public_6f5a096
#define public_6f5a0a0 _public_6f5a0a0
#define public_6f5a0c3 _public_6f5a0c3
#define public_6f5a0db _public_6f5a0db
#define public_6f5a0ee _public_6f5a0ee
#define public_6f5a0fb _public_6f5a0fb
#define public_6f5a0fd _public_6f5a0fd
#define public_6f5a103 _public_6f5a103
#define public_6f5a12c _public_6f5a12c
#define public_6f5a13f _public_6f5a13f
#define public_6f5a14a _public_6f5a14a
#define public_6f5a14d _public_6f5a14d
#define public_6f5a14f _public_6f5a14f
#define public_6f5a152 _public_6f5a152
#define public_6f5a15e _public_6f5a15e

PROC_DECLARE(0x6f59f30, internal_6f59f30, public_6f59f30);
extern "C" NAKED register_t __cdecl internal_6f59f30()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x2C
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x28], 0
        mov byte ptr ds : [ebx+0x29], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f5a1b0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f59f99
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f59f99
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f59f99
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f59fb3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f59fb3
        public_6f59f99 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f59fad
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f59fb3
        public_6f59fad : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f59fb3
        mov dword ptr ds : [eax], ebx
        public_6f59fb3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f5a15e
        public_6f59fc1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6f5a15e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f5a0a0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x28], 0
        jne public_6f5a002
        mov byte ptr ds : [ecx+0x28], 1
        mov byte ptr ds : [edx+0x28], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f5a152
        public_6f5a002 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f5a041
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f5a01b
        mov dword ptr ds : [edx+4], eax
        public_6f5a01b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f5a02e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f5a03c
        public_6f5a02e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f5a039
        mov dword ptr ds : [edx], ecx
        jmp public_6f5a03c
        public_6f5a039 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f5a03c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f5a041 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f5a06a
        mov dword ptr ds : [edi+4], ecx
        public_6f5a06a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f5a083
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f5a14f
        public_6f5a083 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f5a096
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f5a14f
        public_6f5a096 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f5a14f
        public_6f5a0a0 : nop
        cmp byte ptr ds : [edx+0x28], 0
        jne public_6f5a0c3
        mov byte ptr ds : [ecx+0x28], 1
        mov byte ptr ds : [edx+0x28], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x28], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f5a152
        public_6f5a0c3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f5a103
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f5a0db
        mov dword ptr ds : [edx+4], eax
        public_6f5a0db : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f5a0ee
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f5a0fd
        public_6f5a0ee : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f5a0fb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f5a0fd
        public_6f5a0fb : nop
        mov dword ptr ds : [edx], ecx
        public_6f5a0fd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f5a103 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f5a12c
        mov dword ptr ds : [edi+4], ecx
        public_6f5a12c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f5a13f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f5a14d
        public_6f5a13f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f5a14a
        mov dword ptr ds : [edi], edx
        jmp public_6f5a14d
        public_6f5a14a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f5a14d : nop
        mov dword ptr ds : [edx], ecx
        public_6f5a14f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f5a152 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f59fc1
        public_6f5a15e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x28], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f59f30)
    }
}

#undef public_6f59f99
#undef public_6f59fad
#undef public_6f59fb3
#undef public_6f59fc1
#undef public_6f5a002
#undef public_6f5a01b
#undef public_6f5a02e
#undef public_6f5a039
#undef public_6f5a03c
#undef public_6f5a041
#undef public_6f5a06a
#undef public_6f5a083
#undef public_6f5a096
#undef public_6f5a0a0
#undef public_6f5a0c3
#undef public_6f5a0db
#undef public_6f5a0ee
#undef public_6f5a0fb
#undef public_6f5a0fd
#undef public_6f5a103
#undef public_6f5a12c
#undef public_6f5a13f
#undef public_6f5a14a
#undef public_6f5a14d
#undef public_6f5a14f
#undef public_6f5a152
#undef public_6f5a15e
