#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fd4b0);
CLANG_FORWARD_PROC_SYMBOL(public_66ff970);
CLANG_FORWARD_PROC_SYMBOL(public_6700810);

#define public_66fd519 _public_66fd519
#define public_66fd52d _public_66fd52d
#define public_66fd533 _public_66fd533
#define public_66fd541 _public_66fd541
#define public_66fd582 _public_66fd582
#define public_66fd59b _public_66fd59b
#define public_66fd5ae _public_66fd5ae
#define public_66fd5b9 _public_66fd5b9
#define public_66fd5bc _public_66fd5bc
#define public_66fd5c1 _public_66fd5c1
#define public_66fd5ea _public_66fd5ea
#define public_66fd603 _public_66fd603
#define public_66fd616 _public_66fd616
#define public_66fd620 _public_66fd620
#define public_66fd643 _public_66fd643
#define public_66fd65b _public_66fd65b
#define public_66fd66e _public_66fd66e
#define public_66fd67b _public_66fd67b
#define public_66fd67d _public_66fd67d
#define public_66fd683 _public_66fd683
#define public_66fd6ac _public_66fd6ac
#define public_66fd6bf _public_66fd6bf
#define public_66fd6ca _public_66fd6ca
#define public_66fd6cd _public_66fd6cd
#define public_66fd6cf _public_66fd6cf
#define public_66fd6d2 _public_66fd6d2
#define public_66fd6de _public_66fd6de

PROC_DECLARE(0x66fd4b0, internal_66fd4b0, public_66fd4b0);
extern "C" NAKED register_t __cdecl internal_66fd4b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6700810
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
        call public_66ff970
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_66fd519
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_66fd519
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jl public_66fd519
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_66fd533
        mov dword ptr ds : [eax+8], ebx
        jmp public_66fd533
        public_66fd519 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_66fd52d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_66fd533
        public_66fd52d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_66fd533
        mov dword ptr ds : [eax], ebx
        public_66fd533 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_66fd6de
        public_66fd541 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_66fd6de
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_66fd620
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_66fd582
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_66fd6d2
        public_66fd582 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_66fd5c1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_66fd59b
        mov dword ptr ds : [edx+4], eax
        public_66fd59b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_66fd5ae
        mov dword ptr ds : [edx+4], ecx
        jmp public_66fd5bc
        public_66fd5ae : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_66fd5b9
        mov dword ptr ds : [edx], ecx
        jmp public_66fd5bc
        public_66fd5b9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_66fd5bc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_66fd5c1 : nop
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
        je public_66fd5ea
        mov dword ptr ds : [edi+4], ecx
        public_66fd5ea : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_66fd603
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_66fd6cf
        public_66fd603 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_66fd616
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_66fd6cf
        public_66fd616 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_66fd6cf
        public_66fd620 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_66fd643
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_66fd6d2
        public_66fd643 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_66fd683
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_66fd65b
        mov dword ptr ds : [edx+4], eax
        public_66fd65b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_66fd66e
        mov dword ptr ds : [edx+4], ecx
        jmp public_66fd67d
        public_66fd66e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_66fd67b
        mov dword ptr ds : [edx+8], ecx
        jmp public_66fd67d
        public_66fd67b : nop
        mov dword ptr ds : [edx], ecx
        public_66fd67d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_66fd683 : nop
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
        je public_66fd6ac
        mov dword ptr ds : [edi+4], ecx
        public_66fd6ac : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_66fd6bf
        mov dword ptr ds : [edi+4], edx
        jmp public_66fd6cd
        public_66fd6bf : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_66fd6ca
        mov dword ptr ds : [edi], edx
        jmp public_66fd6cd
        public_66fd6ca : nop
        mov dword ptr ds : [edi+8], edx
        public_66fd6cd : nop
        mov dword ptr ds : [edx], ecx
        public_66fd6cf : nop
        mov dword ptr ds : [ecx+4], edx
        public_66fd6d2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_66fd541
        public_66fd6de : nop
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
        UNREACHABLE_TRAP(0x66fd4b0)
    }
}

#undef public_66fd519
#undef public_66fd52d
#undef public_66fd533
#undef public_66fd541
#undef public_66fd582
#undef public_66fd59b
#undef public_66fd5ae
#undef public_66fd5b9
#undef public_66fd5bc
#undef public_66fd5c1
#undef public_66fd5ea
#undef public_66fd603
#undef public_66fd616
#undef public_66fd620
#undef public_66fd643
#undef public_66fd65b
#undef public_66fd66e
#undef public_66fd67b
#undef public_66fd67d
#undef public_66fd683
#undef public_66fd6ac
#undef public_66fd6bf
#undef public_66fd6ca
#undef public_66fd6cd
#undef public_66fd6cf
#undef public_66fd6d2
#undef public_66fd6de
