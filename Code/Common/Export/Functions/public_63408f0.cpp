#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63408f0);
CLANG_FORWARD_PROC_SYMBOL(public_63413b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6340962 _public_6340962
#define public_6340976 _public_6340976
#define public_634097c _public_634097c
#define public_6340990 _public_6340990
#define public_63409e0 _public_63409e0
#define public_63409f9 _public_63409f9
#define public_6340a0c _public_6340a0c
#define public_6340a17 _public_6340a17
#define public_6340a1a _public_6340a1a
#define public_6340a1f _public_6340a1f
#define public_6340a4e _public_6340a4e
#define public_6340a67 _public_6340a67
#define public_6340a7a _public_6340a7a
#define public_6340a84 _public_6340a84
#define public_6340ab3 _public_6340ab3
#define public_6340acb _public_6340acb
#define public_6340ade _public_6340ade
#define public_6340aeb _public_6340aeb
#define public_6340aed _public_6340aed
#define public_6340af3 _public_6340af3
#define public_6340b22 _public_6340b22
#define public_6340b35 _public_6340b35
#define public_6340b40 _public_6340b40
#define public_6340b43 _public_6340b43
#define public_6340b45 _public_6340b45
#define public_6340b48 _public_6340b48
#define public_6340b54 _public_6340b54

PROC_DECLARE(0x63408f0, internal_63408f0, public_63408f0);
extern "C" NAKED register_t __cdecl internal_63408f0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0xBC
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0xB8], 0
        mov byte ptr ds : [ebx+0xB9], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_63413b0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6340962
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6340962
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6340962
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_634097c
        mov dword ptr ds : [eax+8], ebx
        jmp public_634097c
        public_6340962 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6340976
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_634097c
        public_6340976 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_634097c
        mov dword ptr ds : [eax], ebx
        public_634097c : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6340b54
        lea ebx, ds:[ebx]
        public_6340990 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0xB8]
        test dl, dl
        jne public_6340b54
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6340a84
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0xB8], 0
        jne public_63409e0
        mov byte ptr ds : [ecx+0xB8], 1
        mov byte ptr ds : [edx+0xB8], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xB8], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6340b48
        public_63409e0 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6340a1f
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_63409f9
        mov dword ptr ds : [edx+4], eax
        public_63409f9 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6340a0c
        mov dword ptr ds : [edx+4], ecx
        jmp public_6340a1a
        public_6340a0c : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6340a17
        mov dword ptr ds : [edx], ecx
        jmp public_6340a1a
        public_6340a17 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6340a1a : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6340a1f : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xB8], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xB8], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6340a4e
        mov dword ptr ds : [edi+4], ecx
        public_6340a4e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6340a67
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6340b45
        public_6340a67 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6340a7a
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6340b45
        public_6340a7a : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6340b45
        public_6340a84 : nop
        cmp byte ptr ds : [edx+0xB8], 0
        jne public_6340ab3
        mov byte ptr ds : [ecx+0xB8], 1
        mov byte ptr ds : [edx+0xB8], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0xB8], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6340b48
        public_6340ab3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6340af3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6340acb
        mov dword ptr ds : [edx+4], eax
        public_6340acb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6340ade
        mov dword ptr ds : [edx+4], ecx
        jmp public_6340aed
        public_6340ade : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6340aeb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6340aed
        public_6340aeb : nop
        mov dword ptr ds : [edx], ecx
        public_6340aed : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6340af3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xB8], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xB8], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6340b22
        mov dword ptr ds : [edi+4], ecx
        public_6340b22 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6340b35
        mov dword ptr ds : [edi+4], edx
        jmp public_6340b43
        public_6340b35 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6340b40
        mov dword ptr ds : [edi], edx
        jmp public_6340b43
        public_6340b40 : nop
        mov dword ptr ds : [edi+8], edx
        public_6340b43 : nop
        mov dword ptr ds : [edx], ecx
        public_6340b45 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6340b48 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6340990
        public_6340b54 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0xB8], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x63408f0)
    }
}

#undef public_6340962
#undef public_6340976
#undef public_634097c
#undef public_6340990
#undef public_63409e0
#undef public_63409f9
#undef public_6340a0c
#undef public_6340a17
#undef public_6340a1a
#undef public_6340a1f
#undef public_6340a4e
#undef public_6340a67
#undef public_6340a7a
#undef public_6340a84
#undef public_6340ab3
#undef public_6340acb
#undef public_6340ade
#undef public_6340aeb
#undef public_6340aed
#undef public_6340af3
#undef public_6340b22
#undef public_6340b35
#undef public_6340b40
#undef public_6340b43
#undef public_6340b45
#undef public_6340b48
#undef public_6340b54
