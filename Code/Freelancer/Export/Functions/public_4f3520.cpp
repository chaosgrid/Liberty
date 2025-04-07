#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f3520);
CLANG_FORWARD_PROC_SYMBOL(public_4f38c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4f3589 _public_4f3589
#define public_4f359d _public_4f359d
#define public_4f35a3 _public_4f35a3
#define public_4f35b1 _public_4f35b1
#define public_4f35f2 _public_4f35f2
#define public_4f360b _public_4f360b
#define public_4f361e _public_4f361e
#define public_4f3629 _public_4f3629
#define public_4f362c _public_4f362c
#define public_4f3631 _public_4f3631
#define public_4f365a _public_4f365a
#define public_4f3673 _public_4f3673
#define public_4f3686 _public_4f3686
#define public_4f3690 _public_4f3690
#define public_4f36b3 _public_4f36b3
#define public_4f36cb _public_4f36cb
#define public_4f36de _public_4f36de
#define public_4f36eb _public_4f36eb
#define public_4f36ed _public_4f36ed
#define public_4f36f3 _public_4f36f3
#define public_4f371c _public_4f371c
#define public_4f372f _public_4f372f
#define public_4f373a _public_4f373a
#define public_4f373d _public_4f373d
#define public_4f373f _public_4f373f
#define public_4f3742 _public_4f3742
#define public_4f374e _public_4f374e

PROC_DECLARE(0x4f3520, internal_4f3520, public_4f3520);
extern "C" NAKED register_t __cdecl internal_4f3520()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x48
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x44], 0
        mov byte ptr ds : [ebx+0x45], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_4f38c0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_4f3589
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_4f3589
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_4f3589
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_4f35a3
        mov dword ptr ds : [eax+8], ebx
        jmp public_4f35a3
        public_4f3589 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_4f359d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_4f35a3
        public_4f359d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_4f35a3
        mov dword ptr ds : [eax], ebx
        public_4f35a3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_4f374e
        public_4f35b1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_4f374e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_4f3690
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x44], 0
        jne public_4f35f2
        mov byte ptr ds : [ecx+0x44], 1
        mov byte ptr ds : [edx+0x44], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_4f3742
        public_4f35f2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_4f3631
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_4f360b
        mov dword ptr ds : [edx+4], eax
        public_4f360b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4f361e
        mov dword ptr ds : [edx+4], ecx
        jmp public_4f362c
        public_4f361e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_4f3629
        mov dword ptr ds : [edx], ecx
        jmp public_4f362c
        public_4f3629 : nop
        mov dword ptr ds : [edx+8], ecx
        public_4f362c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_4f3631 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_4f365a
        mov dword ptr ds : [edi+4], ecx
        public_4f365a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_4f3673
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4f373f
        public_4f3673 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4f3686
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4f373f
        public_4f3686 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4f373f
        public_4f3690 : nop
        cmp byte ptr ds : [edx+0x44], 0
        jne public_4f36b3
        mov byte ptr ds : [ecx+0x44], 1
        mov byte ptr ds : [edx+0x44], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x44], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_4f3742
        public_4f36b3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_4f36f3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_4f36cb
        mov dword ptr ds : [edx+4], eax
        public_4f36cb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4f36de
        mov dword ptr ds : [edx+4], ecx
        jmp public_4f36ed
        public_4f36de : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_4f36eb
        mov dword ptr ds : [edx+8], ecx
        jmp public_4f36ed
        public_4f36eb : nop
        mov dword ptr ds : [edx], ecx
        public_4f36ed : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_4f36f3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_4f371c
        mov dword ptr ds : [edi+4], ecx
        public_4f371c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_4f372f
        mov dword ptr ds : [edi+4], edx
        jmp public_4f373d
        public_4f372f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_4f373a
        mov dword ptr ds : [edi], edx
        jmp public_4f373d
        public_4f373a : nop
        mov dword ptr ds : [edi+8], edx
        public_4f373d : nop
        mov dword ptr ds : [edx], ecx
        public_4f373f : nop
        mov dword ptr ds : [ecx+4], edx
        public_4f3742 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_4f35b1
        public_4f374e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x44], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x4f3520)
    }
}

#undef public_4f3589
#undef public_4f359d
#undef public_4f35a3
#undef public_4f35b1
#undef public_4f35f2
#undef public_4f360b
#undef public_4f361e
#undef public_4f3629
#undef public_4f362c
#undef public_4f3631
#undef public_4f365a
#undef public_4f3673
#undef public_4f3686
#undef public_4f3690
#undef public_4f36b3
#undef public_4f36cb
#undef public_4f36de
#undef public_4f36eb
#undef public_4f36ed
#undef public_4f36f3
#undef public_4f371c
#undef public_4f372f
#undef public_4f373a
#undef public_4f373d
#undef public_4f373f
#undef public_4f3742
#undef public_4f374e
