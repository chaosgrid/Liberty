#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f96520);
CLANG_FORWARD_PROC_SYMBOL(public_6f96d90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f96589 _public_6f96589
#define public_6f9659d _public_6f9659d
#define public_6f965a3 _public_6f965a3
#define public_6f965b1 _public_6f965b1
#define public_6f965f2 _public_6f965f2
#define public_6f9660b _public_6f9660b
#define public_6f9661e _public_6f9661e
#define public_6f96629 _public_6f96629
#define public_6f9662c _public_6f9662c
#define public_6f96631 _public_6f96631
#define public_6f9665a _public_6f9665a
#define public_6f96673 _public_6f96673
#define public_6f96686 _public_6f96686
#define public_6f96690 _public_6f96690
#define public_6f966b3 _public_6f966b3
#define public_6f966cb _public_6f966cb
#define public_6f966de _public_6f966de
#define public_6f966eb _public_6f966eb
#define public_6f966ed _public_6f966ed
#define public_6f966f3 _public_6f966f3
#define public_6f9671c _public_6f9671c
#define public_6f9672f _public_6f9672f
#define public_6f9673a _public_6f9673a
#define public_6f9673d _public_6f9673d
#define public_6f9673f _public_6f9673f
#define public_6f96742 _public_6f96742
#define public_6f9674e _public_6f9674e

PROC_DECLARE(0x6f96520, internal_6f96520, public_6f96520);
extern "C" NAKED register_t __cdecl internal_6f96520()
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
        call public_6f96d90
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f96589
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f96589
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f96589
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f965a3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f965a3
        public_6f96589 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f9659d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f965a3
        public_6f9659d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f965a3
        mov dword ptr ds : [eax], ebx
        public_6f965a3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f9674e
        public_6f965b1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_6f9674e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f96690
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x50], 0
        jne public_6f965f2
        mov byte ptr ds : [ecx+0x50], 1
        mov byte ptr ds : [edx+0x50], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f96742
        public_6f965f2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f96631
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f9660b
        mov dword ptr ds : [edx+4], eax
        public_6f9660b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f9661e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f9662c
        public_6f9661e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f96629
        mov dword ptr ds : [edx], ecx
        jmp public_6f9662c
        public_6f96629 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f9662c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f96631 : nop
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
        je public_6f9665a
        mov dword ptr ds : [edi+4], ecx
        public_6f9665a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f96673
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f9673f
        public_6f96673 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f96686
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f9673f
        public_6f96686 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f9673f
        public_6f96690 : nop
        cmp byte ptr ds : [edx+0x50], 0
        jne public_6f966b3
        mov byte ptr ds : [ecx+0x50], 1
        mov byte ptr ds : [edx+0x50], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x50], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f96742
        public_6f966b3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f966f3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f966cb
        mov dword ptr ds : [edx+4], eax
        public_6f966cb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f966de
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f966ed
        public_6f966de : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f966eb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f966ed
        public_6f966eb : nop
        mov dword ptr ds : [edx], ecx
        public_6f966ed : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f966f3 : nop
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
        je public_6f9671c
        mov dword ptr ds : [edi+4], ecx
        public_6f9671c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f9672f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f9673d
        public_6f9672f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f9673a
        mov dword ptr ds : [edi], edx
        jmp public_6f9673d
        public_6f9673a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f9673d : nop
        mov dword ptr ds : [edx], ecx
        public_6f9673f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f96742 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f965b1
        public_6f9674e : nop
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
        UNREACHABLE_TRAP(0x6f96520)
    }
}

#undef public_6f96589
#undef public_6f9659d
#undef public_6f965a3
#undef public_6f965b1
#undef public_6f965f2
#undef public_6f9660b
#undef public_6f9661e
#undef public_6f96629
#undef public_6f9662c
#undef public_6f96631
#undef public_6f9665a
#undef public_6f96673
#undef public_6f96686
#undef public_6f96690
#undef public_6f966b3
#undef public_6f966cb
#undef public_6f966de
#undef public_6f966eb
#undef public_6f966ed
#undef public_6f966f3
#undef public_6f9671c
#undef public_6f9672f
#undef public_6f9673a
#undef public_6f9673d
#undef public_6f9673f
#undef public_6f96742
#undef public_6f9674e
