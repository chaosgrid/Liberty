#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec56d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec69f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec5739 _public_6ec5739
#define public_6ec574d _public_6ec574d
#define public_6ec5753 _public_6ec5753
#define public_6ec5761 _public_6ec5761
#define public_6ec57a2 _public_6ec57a2
#define public_6ec57bb _public_6ec57bb
#define public_6ec57ce _public_6ec57ce
#define public_6ec57d9 _public_6ec57d9
#define public_6ec57dc _public_6ec57dc
#define public_6ec57e1 _public_6ec57e1
#define public_6ec580a _public_6ec580a
#define public_6ec5823 _public_6ec5823
#define public_6ec5836 _public_6ec5836
#define public_6ec5840 _public_6ec5840
#define public_6ec5863 _public_6ec5863
#define public_6ec587b _public_6ec587b
#define public_6ec588e _public_6ec588e
#define public_6ec589b _public_6ec589b
#define public_6ec589d _public_6ec589d
#define public_6ec58a3 _public_6ec58a3
#define public_6ec58cc _public_6ec58cc
#define public_6ec58df _public_6ec58df
#define public_6ec58ea _public_6ec58ea
#define public_6ec58ed _public_6ec58ed
#define public_6ec58ef _public_6ec58ef
#define public_6ec58f2 _public_6ec58f2
#define public_6ec58fe _public_6ec58fe

PROC_DECLARE(0x6ec56d0, internal_6ec56d0, public_6ec56d0);
extern "C" NAKED register_t __cdecl internal_6ec56d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6ed0c5c
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
        call public_6ec69f0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6ec5739
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6ec5739
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6ec5739
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6ec5753
        mov dword ptr ds : [eax+8], ebx
        jmp public_6ec5753
        public_6ec5739 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6ec574d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6ec5753
        public_6ec574d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6ec5753
        mov dword ptr ds : [eax], ebx
        public_6ec5753 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6ec58fe
        public_6ec5761 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6ec58fe
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6ec5840
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6ec57a2
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6ec58f2
        public_6ec57a2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6ec57e1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ec57bb
        mov dword ptr ds : [edx+4], eax
        public_6ec57bb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ec57ce
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ec57dc
        public_6ec57ce : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6ec57d9
        mov dword ptr ds : [edx], ecx
        jmp public_6ec57dc
        public_6ec57d9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ec57dc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ec57e1 : nop
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
        je public_6ec580a
        mov dword ptr ds : [edi+4], ecx
        public_6ec580a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ec5823
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec58ef
        public_6ec5823 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ec5836
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec58ef
        public_6ec5836 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec58ef
        public_6ec5840 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6ec5863
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6ec58f2
        public_6ec5863 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6ec58a3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ec587b
        mov dword ptr ds : [edx+4], eax
        public_6ec587b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ec588e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ec589d
        public_6ec588e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6ec589b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec589d
        public_6ec589b : nop
        mov dword ptr ds : [edx], ecx
        public_6ec589d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ec58a3 : nop
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
        je public_6ec58cc
        mov dword ptr ds : [edi+4], ecx
        public_6ec58cc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ec58df
        mov dword ptr ds : [edi+4], edx
        jmp public_6ec58ed
        public_6ec58df : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6ec58ea
        mov dword ptr ds : [edi], edx
        jmp public_6ec58ed
        public_6ec58ea : nop
        mov dword ptr ds : [edi+8], edx
        public_6ec58ed : nop
        mov dword ptr ds : [edx], ecx
        public_6ec58ef : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ec58f2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ec5761
        public_6ec58fe : nop
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
        UNREACHABLE_TRAP(0x6ec56d0)
    }
}

#undef public_6ec5739
#undef public_6ec574d
#undef public_6ec5753
#undef public_6ec5761
#undef public_6ec57a2
#undef public_6ec57bb
#undef public_6ec57ce
#undef public_6ec57d9
#undef public_6ec57dc
#undef public_6ec57e1
#undef public_6ec580a
#undef public_6ec5823
#undef public_6ec5836
#undef public_6ec5840
#undef public_6ec5863
#undef public_6ec587b
#undef public_6ec588e
#undef public_6ec589b
#undef public_6ec589d
#undef public_6ec58a3
#undef public_6ec58cc
#undef public_6ec58df
#undef public_6ec58ea
#undef public_6ec58ed
#undef public_6ec58ef
#undef public_6ec58f2
#undef public_6ec58fe
