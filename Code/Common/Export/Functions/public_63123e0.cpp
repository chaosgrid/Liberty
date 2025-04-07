#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63123e0);
CLANG_FORWARD_PROC_SYMBOL(public_6312680);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6312449 _public_6312449
#define public_631245d _public_631245d
#define public_6312463 _public_6312463
#define public_6312471 _public_6312471
#define public_63124b2 _public_63124b2
#define public_63124cb _public_63124cb
#define public_63124de _public_63124de
#define public_63124e9 _public_63124e9
#define public_63124ec _public_63124ec
#define public_63124f1 _public_63124f1
#define public_631251a _public_631251a
#define public_6312533 _public_6312533
#define public_6312546 _public_6312546
#define public_6312550 _public_6312550
#define public_6312573 _public_6312573
#define public_631258b _public_631258b
#define public_631259e _public_631259e
#define public_63125ab _public_63125ab
#define public_63125ad _public_63125ad
#define public_63125b3 _public_63125b3
#define public_63125dc _public_63125dc
#define public_63125ef _public_63125ef
#define public_63125fa _public_63125fa
#define public_63125fd _public_63125fd
#define public_63125ff _public_63125ff
#define public_6312602 _public_6312602
#define public_631260e _public_631260e

PROC_DECLARE(0x63123e0, internal_63123e0, public_63123e0);
extern "C" NAKED register_t __cdecl internal_63123e0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x2C
        mov esi, ecx
        call public_6391d9c
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
        call public_6312680
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6312449
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6312449
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6312449
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6312463
        mov dword ptr ds : [eax+8], ebx
        jmp public_6312463
        public_6312449 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_631245d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6312463
        public_631245d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6312463
        mov dword ptr ds : [eax], ebx
        public_6312463 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_631260e
        public_6312471 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_631260e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6312550
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x28], 0
        jne public_63124b2
        mov byte ptr ds : [ecx+0x28], 1
        mov byte ptr ds : [edx+0x28], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6312602
        public_63124b2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_63124f1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_63124cb
        mov dword ptr ds : [edx+4], eax
        public_63124cb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_63124de
        mov dword ptr ds : [edx+4], ecx
        jmp public_63124ec
        public_63124de : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_63124e9
        mov dword ptr ds : [edx], ecx
        jmp public_63124ec
        public_63124e9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_63124ec : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_63124f1 : nop
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
        je public_631251a
        mov dword ptr ds : [edi+4], ecx
        public_631251a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6312533
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63125ff
        public_6312533 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6312546
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63125ff
        public_6312546 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63125ff
        public_6312550 : nop
        cmp byte ptr ds : [edx+0x28], 0
        jne public_6312573
        mov byte ptr ds : [ecx+0x28], 1
        mov byte ptr ds : [edx+0x28], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x28], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6312602
        public_6312573 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_63125b3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_631258b
        mov dword ptr ds : [edx+4], eax
        public_631258b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_631259e
        mov dword ptr ds : [edx+4], ecx
        jmp public_63125ad
        public_631259e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_63125ab
        mov dword ptr ds : [edx+8], ecx
        jmp public_63125ad
        public_63125ab : nop
        mov dword ptr ds : [edx], ecx
        public_63125ad : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_63125b3 : nop
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
        je public_63125dc
        mov dword ptr ds : [edi+4], ecx
        public_63125dc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_63125ef
        mov dword ptr ds : [edi+4], edx
        jmp public_63125fd
        public_63125ef : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_63125fa
        mov dword ptr ds : [edi], edx
        jmp public_63125fd
        public_63125fa : nop
        mov dword ptr ds : [edi+8], edx
        public_63125fd : nop
        mov dword ptr ds : [edx], ecx
        public_63125ff : nop
        mov dword ptr ds : [ecx+4], edx
        public_6312602 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6312471
        public_631260e : nop
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
        UNREACHABLE_TRAP(0x63123e0)
    }
}

#undef public_6312449
#undef public_631245d
#undef public_6312463
#undef public_6312471
#undef public_63124b2
#undef public_63124cb
#undef public_63124de
#undef public_63124e9
#undef public_63124ec
#undef public_63124f1
#undef public_631251a
#undef public_6312533
#undef public_6312546
#undef public_6312550
#undef public_6312573
#undef public_631258b
#undef public_631259e
#undef public_63125ab
#undef public_63125ad
#undef public_63125b3
#undef public_63125dc
#undef public_63125ef
#undef public_63125fa
#undef public_63125fd
#undef public_63125ff
#undef public_6312602
#undef public_631260e
