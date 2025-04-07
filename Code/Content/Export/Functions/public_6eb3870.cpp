#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3870);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3d40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb38d9 _public_6eb38d9
#define public_6eb38ed _public_6eb38ed
#define public_6eb38f3 _public_6eb38f3
#define public_6eb3901 _public_6eb3901
#define public_6eb3942 _public_6eb3942
#define public_6eb395b _public_6eb395b
#define public_6eb396e _public_6eb396e
#define public_6eb3979 _public_6eb3979
#define public_6eb397c _public_6eb397c
#define public_6eb3981 _public_6eb3981
#define public_6eb39aa _public_6eb39aa
#define public_6eb39c3 _public_6eb39c3
#define public_6eb39d6 _public_6eb39d6
#define public_6eb39e0 _public_6eb39e0
#define public_6eb3a03 _public_6eb3a03
#define public_6eb3a1b _public_6eb3a1b
#define public_6eb3a2e _public_6eb3a2e
#define public_6eb3a3b _public_6eb3a3b
#define public_6eb3a3d _public_6eb3a3d
#define public_6eb3a43 _public_6eb3a43
#define public_6eb3a6c _public_6eb3a6c
#define public_6eb3a7f _public_6eb3a7f
#define public_6eb3a8a _public_6eb3a8a
#define public_6eb3a8d _public_6eb3a8d
#define public_6eb3a8f _public_6eb3a8f
#define public_6eb3a92 _public_6eb3a92
#define public_6eb3a9e _public_6eb3a9e

PROC_DECLARE(0x6eb3870, internal_6eb3870, public_6eb3870);
extern "C" NAKED register_t __cdecl internal_6eb3870()
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
        call public_6eb3d40
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6eb38d9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6eb38d9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6eb38d9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6eb38f3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6eb38f3
        public_6eb38d9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6eb38ed
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6eb38f3
        public_6eb38ed : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6eb38f3
        mov dword ptr ds : [eax], ebx
        public_6eb38f3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6eb3a9e
        public_6eb3901 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6eb3a9e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6eb39e0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6eb3942
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6eb3a92
        public_6eb3942 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6eb3981
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6eb395b
        mov dword ptr ds : [edx+4], eax
        public_6eb395b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6eb396e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eb397c
        public_6eb396e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6eb3979
        mov dword ptr ds : [edx], ecx
        jmp public_6eb397c
        public_6eb3979 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6eb397c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6eb3981 : nop
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
        je public_6eb39aa
        mov dword ptr ds : [edi+4], ecx
        public_6eb39aa : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6eb39c3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb3a8f
        public_6eb39c3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6eb39d6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb3a8f
        public_6eb39d6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb3a8f
        public_6eb39e0 : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6eb3a03
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6eb3a92
        public_6eb3a03 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6eb3a43
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6eb3a1b
        mov dword ptr ds : [edx+4], eax
        public_6eb3a1b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6eb3a2e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eb3a3d
        public_6eb3a2e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6eb3a3b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb3a3d
        public_6eb3a3b : nop
        mov dword ptr ds : [edx], ecx
        public_6eb3a3d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6eb3a43 : nop
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
        je public_6eb3a6c
        mov dword ptr ds : [edi+4], ecx
        public_6eb3a6c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6eb3a7f
        mov dword ptr ds : [edi+4], edx
        jmp public_6eb3a8d
        public_6eb3a7f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6eb3a8a
        mov dword ptr ds : [edi], edx
        jmp public_6eb3a8d
        public_6eb3a8a : nop
        mov dword ptr ds : [edi+8], edx
        public_6eb3a8d : nop
        mov dword ptr ds : [edx], ecx
        public_6eb3a8f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6eb3a92 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6eb3901
        public_6eb3a9e : nop
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
        UNREACHABLE_TRAP(0x6eb3870)
    }
}

#undef public_6eb38d9
#undef public_6eb38ed
#undef public_6eb38f3
#undef public_6eb3901
#undef public_6eb3942
#undef public_6eb395b
#undef public_6eb396e
#undef public_6eb3979
#undef public_6eb397c
#undef public_6eb3981
#undef public_6eb39aa
#undef public_6eb39c3
#undef public_6eb39d6
#undef public_6eb39e0
#undef public_6eb3a03
#undef public_6eb3a1b
#undef public_6eb3a2e
#undef public_6eb3a3b
#undef public_6eb3a3d
#undef public_6eb3a43
#undef public_6eb3a6c
#undef public_6eb3a7f
#undef public_6eb3a8a
#undef public_6eb3a8d
#undef public_6eb3a8f
#undef public_6eb3a92
#undef public_6eb3a9e
