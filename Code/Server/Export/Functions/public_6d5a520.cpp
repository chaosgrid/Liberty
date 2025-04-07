#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5be0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a520);
CLANG_FORWARD_PROC_SYMBOL(public_6d5af30);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d5a590 _public_6d5a590
#define public_6d5a5a4 _public_6d5a5a4
#define public_6d5a5aa _public_6d5a5aa
#define public_6d5a5b8 _public_6d5a5b8
#define public_6d5a5f9 _public_6d5a5f9
#define public_6d5a612 _public_6d5a612
#define public_6d5a625 _public_6d5a625
#define public_6d5a630 _public_6d5a630
#define public_6d5a633 _public_6d5a633
#define public_6d5a638 _public_6d5a638
#define public_6d5a661 _public_6d5a661
#define public_6d5a67a _public_6d5a67a
#define public_6d5a68d _public_6d5a68d
#define public_6d5a697 _public_6d5a697
#define public_6d5a6ba _public_6d5a6ba
#define public_6d5a6d2 _public_6d5a6d2
#define public_6d5a6e5 _public_6d5a6e5
#define public_6d5a6f2 _public_6d5a6f2
#define public_6d5a6f4 _public_6d5a6f4
#define public_6d5a6fa _public_6d5a6fa
#define public_6d5a723 _public_6d5a723
#define public_6d5a736 _public_6d5a736
#define public_6d5a741 _public_6d5a741
#define public_6d5a744 _public_6d5a744
#define public_6d5a746 _public_6d5a746
#define public_6d5a749 _public_6d5a749
#define public_6d5a755 _public_6d5a755

PROC_DECLARE(0x6d5a520, internal_6d5a520, public_6d5a520);
extern "C" NAKED register_t __cdecl internal_6d5a520()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x24
        mov esi, ecx
        call public_6d60012
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
        call public_6ce5be0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6d5a590
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6d5a590
        lea ecx, ds:[edi+0xC]
        push ecx
        mov ecx, ebp
        call public_6d5af30
        test eax, eax
        jl public_6d5a590
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6d5a5aa
        mov dword ptr ds : [eax+8], ebx
        jmp public_6d5a5aa
        public_6d5a590 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6d5a5a4
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6d5a5aa
        public_6d5a5a4 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6d5a5aa
        mov dword ptr ds : [eax], ebx
        public_6d5a5aa : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6d5a755
        public_6d5a5b8 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6d5a755
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6d5a697
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6d5a5f9
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6d5a749
        public_6d5a5f9 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6d5a638
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6d5a612
        mov dword ptr ds : [edx+4], eax
        public_6d5a612 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d5a625
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d5a633
        public_6d5a625 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6d5a630
        mov dword ptr ds : [edx], ecx
        jmp public_6d5a633
        public_6d5a630 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d5a633 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6d5a638 : nop
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
        je public_6d5a661
        mov dword ptr ds : [edi+4], ecx
        public_6d5a661 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6d5a67a
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d5a746
        public_6d5a67a : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d5a68d
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d5a746
        public_6d5a68d : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d5a746
        public_6d5a697 : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6d5a6ba
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6d5a749
        public_6d5a6ba : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6d5a6fa
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6d5a6d2
        mov dword ptr ds : [edx+4], eax
        public_6d5a6d2 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d5a6e5
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d5a6f4
        public_6d5a6e5 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d5a6f2
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d5a6f4
        public_6d5a6f2 : nop
        mov dword ptr ds : [edx], ecx
        public_6d5a6f4 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6d5a6fa : nop
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
        je public_6d5a723
        mov dword ptr ds : [edi+4], ecx
        public_6d5a723 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6d5a736
        mov dword ptr ds : [edi+4], edx
        jmp public_6d5a744
        public_6d5a736 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6d5a741
        mov dword ptr ds : [edi], edx
        jmp public_6d5a744
        public_6d5a741 : nop
        mov dword ptr ds : [edi+8], edx
        public_6d5a744 : nop
        mov dword ptr ds : [edx], ecx
        public_6d5a746 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6d5a749 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6d5a5b8
        public_6d5a755 : nop
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
        UNREACHABLE_TRAP(0x6d5a520)
    }
}

#undef public_6d5a590
#undef public_6d5a5a4
#undef public_6d5a5aa
#undef public_6d5a5b8
#undef public_6d5a5f9
#undef public_6d5a612
#undef public_6d5a625
#undef public_6d5a630
#undef public_6d5a633
#undef public_6d5a638
#undef public_6d5a661
#undef public_6d5a67a
#undef public_6d5a68d
#undef public_6d5a697
#undef public_6d5a6ba
#undef public_6d5a6d2
#undef public_6d5a6e5
#undef public_6d5a6f2
#undef public_6d5a6f4
#undef public_6d5a6fa
#undef public_6d5a723
#undef public_6d5a736
#undef public_6d5a741
#undef public_6d5a744
#undef public_6d5a746
#undef public_6d5a749
#undef public_6d5a755
