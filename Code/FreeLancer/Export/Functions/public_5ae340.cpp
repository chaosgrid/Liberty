#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ae340);
CLANG_FORWARD_PROC_SYMBOL(public_5af250);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5ae3a9 _public_5ae3a9
#define public_5ae3bd _public_5ae3bd
#define public_5ae3c3 _public_5ae3c3
#define public_5ae3d1 _public_5ae3d1
#define public_5ae412 _public_5ae412
#define public_5ae42b _public_5ae42b
#define public_5ae43e _public_5ae43e
#define public_5ae449 _public_5ae449
#define public_5ae44c _public_5ae44c
#define public_5ae451 _public_5ae451
#define public_5ae47a _public_5ae47a
#define public_5ae493 _public_5ae493
#define public_5ae4a6 _public_5ae4a6
#define public_5ae4b0 _public_5ae4b0
#define public_5ae4d3 _public_5ae4d3
#define public_5ae4eb _public_5ae4eb
#define public_5ae4fe _public_5ae4fe
#define public_5ae50b _public_5ae50b
#define public_5ae50d _public_5ae50d
#define public_5ae513 _public_5ae513
#define public_5ae53c _public_5ae53c
#define public_5ae54f _public_5ae54f
#define public_5ae55a _public_5ae55a
#define public_5ae55d _public_5ae55d
#define public_5ae55f _public_5ae55f
#define public_5ae562 _public_5ae562
#define public_5ae56e _public_5ae56e

PROC_DECLARE(0x5ae340, internal_5ae340, public_5ae340);
extern "C" NAKED register_t __cdecl internal_5ae340()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x38
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x34], 0
        mov byte ptr ds : [ebx+0x35], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_5af250
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_5ae3a9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_5ae3a9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_5ae3a9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_5ae3c3
        mov dword ptr ds : [eax+8], ebx
        jmp public_5ae3c3
        public_5ae3a9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_5ae3bd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_5ae3c3
        public_5ae3bd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_5ae3c3
        mov dword ptr ds : [eax], ebx
        public_5ae3c3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_5ae56e
        public_5ae3d1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_5ae56e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_5ae4b0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x34], 0
        jne public_5ae412
        mov byte ptr ds : [ecx+0x34], 1
        mov byte ptr ds : [edx+0x34], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_5ae562
        public_5ae412 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_5ae451
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_5ae42b
        mov dword ptr ds : [edx+4], eax
        public_5ae42b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_5ae43e
        mov dword ptr ds : [edx+4], ecx
        jmp public_5ae44c
        public_5ae43e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_5ae449
        mov dword ptr ds : [edx], ecx
        jmp public_5ae44c
        public_5ae449 : nop
        mov dword ptr ds : [edx+8], ecx
        public_5ae44c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_5ae451 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_5ae47a
        mov dword ptr ds : [edi+4], ecx
        public_5ae47a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_5ae493
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_5ae55f
        public_5ae493 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_5ae4a6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_5ae55f
        public_5ae4a6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_5ae55f
        public_5ae4b0 : nop
        cmp byte ptr ds : [edx+0x34], 0
        jne public_5ae4d3
        mov byte ptr ds : [ecx+0x34], 1
        mov byte ptr ds : [edx+0x34], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x34], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_5ae562
        public_5ae4d3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_5ae513
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_5ae4eb
        mov dword ptr ds : [edx+4], eax
        public_5ae4eb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_5ae4fe
        mov dword ptr ds : [edx+4], ecx
        jmp public_5ae50d
        public_5ae4fe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_5ae50b
        mov dword ptr ds : [edx+8], ecx
        jmp public_5ae50d
        public_5ae50b : nop
        mov dword ptr ds : [edx], ecx
        public_5ae50d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_5ae513 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_5ae53c
        mov dword ptr ds : [edi+4], ecx
        public_5ae53c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_5ae54f
        mov dword ptr ds : [edi+4], edx
        jmp public_5ae55d
        public_5ae54f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_5ae55a
        mov dword ptr ds : [edi], edx
        jmp public_5ae55d
        public_5ae55a : nop
        mov dword ptr ds : [edi+8], edx
        public_5ae55d : nop
        mov dword ptr ds : [edx], ecx
        public_5ae55f : nop
        mov dword ptr ds : [ecx+4], edx
        public_5ae562 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_5ae3d1
        public_5ae56e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x34], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x5ae340)
    }
}

#undef public_5ae3a9
#undef public_5ae3bd
#undef public_5ae3c3
#undef public_5ae3d1
#undef public_5ae412
#undef public_5ae42b
#undef public_5ae43e
#undef public_5ae449
#undef public_5ae44c
#undef public_5ae451
#undef public_5ae47a
#undef public_5ae493
#undef public_5ae4a6
#undef public_5ae4b0
#undef public_5ae4d3
#undef public_5ae4eb
#undef public_5ae4fe
#undef public_5ae50b
#undef public_5ae50d
#undef public_5ae513
#undef public_5ae53c
#undef public_5ae54f
#undef public_5ae55a
#undef public_5ae55d
#undef public_5ae55f
#undef public_5ae562
#undef public_5ae56e
