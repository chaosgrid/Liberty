#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eee430);
CLANG_FORWARD_PROC_SYMBOL(public_6eee950);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eee499 _public_6eee499
#define public_6eee4ad _public_6eee4ad
#define public_6eee4b3 _public_6eee4b3
#define public_6eee4c1 _public_6eee4c1
#define public_6eee502 _public_6eee502
#define public_6eee51b _public_6eee51b
#define public_6eee52e _public_6eee52e
#define public_6eee539 _public_6eee539
#define public_6eee53c _public_6eee53c
#define public_6eee541 _public_6eee541
#define public_6eee56a _public_6eee56a
#define public_6eee583 _public_6eee583
#define public_6eee596 _public_6eee596
#define public_6eee5a0 _public_6eee5a0
#define public_6eee5c3 _public_6eee5c3
#define public_6eee5db _public_6eee5db
#define public_6eee5ee _public_6eee5ee
#define public_6eee5fb _public_6eee5fb
#define public_6eee5fd _public_6eee5fd
#define public_6eee603 _public_6eee603
#define public_6eee62c _public_6eee62c
#define public_6eee63f _public_6eee63f
#define public_6eee64a _public_6eee64a
#define public_6eee64d _public_6eee64d
#define public_6eee64f _public_6eee64f
#define public_6eee652 _public_6eee652
#define public_6eee65e _public_6eee65e

PROC_DECLARE(0x6eee430, internal_6eee430, public_6eee430);
extern "C" NAKED register_t __cdecl internal_6eee430()
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
        call public_6eee950
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6eee499
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6eee499
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jl public_6eee499
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6eee4b3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6eee4b3
        public_6eee499 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6eee4ad
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6eee4b3
        public_6eee4ad : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6eee4b3
        mov dword ptr ds : [eax], ebx
        public_6eee4b3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6eee65e
        public_6eee4c1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6eee65e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6eee5a0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_6eee502
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6eee652
        public_6eee502 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6eee541
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6eee51b
        mov dword ptr ds : [edx+4], eax
        public_6eee51b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6eee52e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eee53c
        public_6eee52e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6eee539
        mov dword ptr ds : [edx], ecx
        jmp public_6eee53c
        public_6eee539 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6eee53c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6eee541 : nop
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
        je public_6eee56a
        mov dword ptr ds : [edi+4], ecx
        public_6eee56a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6eee583
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eee64f
        public_6eee583 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6eee596
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eee64f
        public_6eee596 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eee64f
        public_6eee5a0 : nop
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_6eee5c3
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6eee652
        public_6eee5c3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6eee603
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6eee5db
        mov dword ptr ds : [edx+4], eax
        public_6eee5db : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6eee5ee
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eee5fd
        public_6eee5ee : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6eee5fb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eee5fd
        public_6eee5fb : nop
        mov dword ptr ds : [edx], ecx
        public_6eee5fd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6eee603 : nop
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
        je public_6eee62c
        mov dword ptr ds : [edi+4], ecx
        public_6eee62c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6eee63f
        mov dword ptr ds : [edi+4], edx
        jmp public_6eee64d
        public_6eee63f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6eee64a
        mov dword ptr ds : [edi], edx
        jmp public_6eee64d
        public_6eee64a : nop
        mov dword ptr ds : [edi+8], edx
        public_6eee64d : nop
        mov dword ptr ds : [edx], ecx
        public_6eee64f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6eee652 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6eee4c1
        public_6eee65e : nop
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
        UNREACHABLE_TRAP(0x6eee430)
    }
}

#undef public_6eee499
#undef public_6eee4ad
#undef public_6eee4b3
#undef public_6eee4c1
#undef public_6eee502
#undef public_6eee51b
#undef public_6eee52e
#undef public_6eee539
#undef public_6eee53c
#undef public_6eee541
#undef public_6eee56a
#undef public_6eee583
#undef public_6eee596
#undef public_6eee5a0
#undef public_6eee5c3
#undef public_6eee5db
#undef public_6eee5ee
#undef public_6eee5fb
#undef public_6eee5fd
#undef public_6eee603
#undef public_6eee62c
#undef public_6eee63f
#undef public_6eee64a
#undef public_6eee64d
#undef public_6eee64f
#undef public_6eee652
#undef public_6eee65e
