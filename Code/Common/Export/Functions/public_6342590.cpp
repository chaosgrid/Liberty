#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6342590);
CLANG_FORWARD_PROC_SYMBOL(public_6342a90);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_63425f9 _public_63425f9
#define public_634260d _public_634260d
#define public_6342613 _public_6342613
#define public_6342621 _public_6342621
#define public_6342662 _public_6342662
#define public_634267b _public_634267b
#define public_634268e _public_634268e
#define public_6342699 _public_6342699
#define public_634269c _public_634269c
#define public_63426a1 _public_63426a1
#define public_63426ca _public_63426ca
#define public_63426e3 _public_63426e3
#define public_63426f6 _public_63426f6
#define public_6342700 _public_6342700
#define public_6342723 _public_6342723
#define public_634273b _public_634273b
#define public_634274e _public_634274e
#define public_634275b _public_634275b
#define public_634275d _public_634275d
#define public_6342763 _public_6342763
#define public_634278c _public_634278c
#define public_634279f _public_634279f
#define public_63427aa _public_63427aa
#define public_63427ad _public_63427ad
#define public_63427af _public_63427af
#define public_63427b2 _public_63427b2
#define public_63427be _public_63427be

PROC_DECLARE(0x6342590, internal_6342590, public_6342590);
extern "C" NAKED register_t __cdecl internal_6342590()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x28
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x24], 0
        mov byte ptr ds : [ebx+0x25], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6342a90
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_63425f9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_63425f9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_63425f9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6342613
        mov dword ptr ds : [eax+8], ebx
        jmp public_6342613
        public_63425f9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_634260d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6342613
        public_634260d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6342613
        mov dword ptr ds : [eax], ebx
        public_6342613 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_63427be
        public_6342621 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_63427be
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6342700
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6342662
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_63427b2
        public_6342662 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_63426a1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_634267b
        mov dword ptr ds : [edx+4], eax
        public_634267b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_634268e
        mov dword ptr ds : [edx+4], ecx
        jmp public_634269c
        public_634268e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6342699
        mov dword ptr ds : [edx], ecx
        jmp public_634269c
        public_6342699 : nop
        mov dword ptr ds : [edx+8], ecx
        public_634269c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_63426a1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_63426ca
        mov dword ptr ds : [edi+4], ecx
        public_63426ca : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_63426e3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63427af
        public_63426e3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_63426f6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63427af
        public_63426f6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63427af
        public_6342700 : nop
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6342723
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_63427b2
        public_6342723 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6342763
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_634273b
        mov dword ptr ds : [edx+4], eax
        public_634273b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_634274e
        mov dword ptr ds : [edx+4], ecx
        jmp public_634275d
        public_634274e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_634275b
        mov dword ptr ds : [edx+8], ecx
        jmp public_634275d
        public_634275b : nop
        mov dword ptr ds : [edx], ecx
        public_634275d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6342763 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_634278c
        mov dword ptr ds : [edi+4], ecx
        public_634278c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_634279f
        mov dword ptr ds : [edi+4], edx
        jmp public_63427ad
        public_634279f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_63427aa
        mov dword ptr ds : [edi], edx
        jmp public_63427ad
        public_63427aa : nop
        mov dword ptr ds : [edi+8], edx
        public_63427ad : nop
        mov dword ptr ds : [edx], ecx
        public_63427af : nop
        mov dword ptr ds : [ecx+4], edx
        public_63427b2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6342621
        public_63427be : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6342590)
    }
}

#undef public_63425f9
#undef public_634260d
#undef public_6342613
#undef public_6342621
#undef public_6342662
#undef public_634267b
#undef public_634268e
#undef public_6342699
#undef public_634269c
#undef public_63426a1
#undef public_63426ca
#undef public_63426e3
#undef public_63426f6
#undef public_6342700
#undef public_6342723
#undef public_634273b
#undef public_634274e
#undef public_634275b
#undef public_634275d
#undef public_6342763
#undef public_634278c
#undef public_634279f
#undef public_63427aa
#undef public_63427ad
#undef public_63427af
#undef public_63427b2
#undef public_63427be
