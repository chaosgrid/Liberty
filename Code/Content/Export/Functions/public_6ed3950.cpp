#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed3950);
CLANG_FORWARD_PROC_SYMBOL(public_6efd030);
CLANG_FORWARD_PROC_SYMBOL(public_6f466e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed3974 _public_6ed3974
#define public_6ed3992 _public_6ed3992
#define public_6ed399d _public_6ed399d
#define public_6ed39a6 _public_6ed39a6
#define public_6ed39b1 _public_6ed39b1
#define public_6ed39cd _public_6ed39cd
#define public_6ed39e4 _public_6ed39e4
#define public_6ed39f1 _public_6ed39f1
#define public_6ed39fc _public_6ed39fc
#define public_6ed39ff _public_6ed39ff
#define public_6ed3a17 _public_6ed3a17
#define public_6ed3a22 _public_6ed3a22
#define public_6ed3a25 _public_6ed3a25
#define public_6ed3a3a _public_6ed3a3a
#define public_6ed3a45 _public_6ed3a45
#define public_6ed3a50 _public_6ed3a50
#define public_6ed3a53 _public_6ed3a53
#define public_6ed3a67 _public_6ed3a67
#define public_6ed3a73 _public_6ed3a73
#define public_6ed3a7f _public_6ed3a7f
#define public_6ed3a82 _public_6ed3a82
#define public_6ed3aa0 _public_6ed3aa0
#define public_6ed3adf _public_6ed3adf
#define public_6ed3af2 _public_6ed3af2
#define public_6ed3afd _public_6ed3afd
#define public_6ed3b00 _public_6ed3b00
#define public_6ed3b0b _public_6ed3b0b
#define public_6ed3b1e _public_6ed3b1e
#define public_6ed3b45 _public_6ed3b45
#define public_6ed3b5f _public_6ed3b5f
#define public_6ed3b85 _public_6ed3b85
#define public_6ed3b98 _public_6ed3b98
#define public_6ed3ba5 _public_6ed3ba5
#define public_6ed3ba7 _public_6ed3ba7
#define public_6ed3bb2 _public_6ed3bb2
#define public_6ed3bc9 _public_6ed3bc9
#define public_6ed3be1 _public_6ed3be1
#define public_6ed3bee _public_6ed3bee
#define public_6ed3bf0 _public_6ed3bf0
#define public_6ed3bfc _public_6ed3bfc
#define public_6ed3c26 _public_6ed3c26
#define public_6ed3c3e _public_6ed3c3e
#define public_6ed3c4e _public_6ed3c4e
#define public_6ed3c58 _public_6ed3c58
#define public_6ed3c7b _public_6ed3c7b
#define public_6ed3c8e _public_6ed3c8e
#define public_6ed3c99 _public_6ed3c99
#define public_6ed3c9c _public_6ed3c9c
#define public_6ed3ca6 _public_6ed3ca6
#define public_6ed3ccf _public_6ed3ccf
#define public_6ed3ce2 _public_6ed3ce2
#define public_6ed3cef _public_6ed3cef
#define public_6ed3cf1 _public_6ed3cf1
#define public_6ed3cf4 _public_6ed3cf4
#define public_6ed3cf7 _public_6ed3cf7
#define public_6ed3cfe _public_6ed3cfe

PROC_DECLARE(0x6ed3950, internal_6ed3950, public_6ed3950);
extern "C" NAKED register_t __cdecl internal_6ed3950()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f466e0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6ed3992
        mov eax, dword ptr ds : [esi+8]
        public_6ed3974 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6ed3a17
        mov dword ptr ds : [ecx+4], eax
        jmp public_6ed3a25
        public_6ed3992 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6ed399d
        mov eax, edx
        jmp public_6ed3974
        public_6ed399d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        jne public_6ed39b1
        public_6ed39a6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        je public_6ed39a6
        public_6ed39b1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ed3974
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ed39cd
        mov dword ptr ds : [eax+4], ecx
        jmp public_6ed39e4
        public_6ed39cd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6ed39e4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6ed39f1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ed39ff
        public_6ed39f1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6ed39fc
        mov dword ptr ds : [edx], ecx
        jmp public_6ed39ff
        public_6ed39fc : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ed39ff : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x50]
        mov dl, byte ptr ds : [ecx+0x50]
        mov byte ptr ds : [ecx+0x50], bl
        mov byte ptr ds : [esi+0x50], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6ed3a82
        public_6ed3a17 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6ed3a22
        mov dword ptr ds : [ecx], eax
        jmp public_6ed3a25
        public_6ed3a22 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6ed3a25 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6ed3a53
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ed3a3a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ed3a50
        public_6ed3a3a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        mov edx, eax
        jne public_6ed3a50
        public_6ed3a45 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        je public_6ed3a45
        public_6ed3a50 : nop
        mov dword ptr ss : [ebp], edx
        public_6ed3a53 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6ed3a82
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ed3a67
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ed3a7f
        public_6ed3a67 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        mov edx, eax
        jne public_6ed3a7f
        public_6ed3a73 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        je public_6ed3a73
        public_6ed3a7f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6ed3a82 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x50]
        mov bl, 1
        cmp cl, bl
        jne public_6ed3cfe
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6ed3cf7
        nop 
        public_6ed3aa0 : nop
        cmp byte ptr ds : [eax+0x50], bl
        jne public_6ed3cf7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ed3b5f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_6ed3b0b
        mov byte ptr ds : [ecx+0x50], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x50], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ed3adf
        mov dword ptr ds : [esi+4], ecx
        public_6ed3adf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ed3af2
        mov dword ptr ds : [esi+4], edx
        jmp public_6ed3b00
        public_6ed3af2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ed3afd
        mov dword ptr ds : [esi], edx
        jmp public_6ed3b00
        public_6ed3afd : nop
        mov dword ptr ds : [esi+8], edx
        public_6ed3b00 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ed3b0b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_6ed3b1e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x50], bl
        je public_6ed3bc9
        public_6ed3b1e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_6ed3bfc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x50], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x50], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ed3b45
        mov dword ptr ds : [esi+4], ecx
        public_6ed3b45 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ed3be1
        mov dword ptr ds : [esi+4], edx
        jmp public_6ed3bf0
        public_6ed3b5f : nop
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_6ed3bb2
        mov byte ptr ds : [ecx+0x50], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ed3b85
        mov dword ptr ds : [esi+4], ecx
        public_6ed3b85 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ed3b98
        mov dword ptr ds : [esi+4], edx
        jmp public_6ed3ba7
        public_6ed3b98 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ed3ba5
        mov dword ptr ds : [esi+8], edx
        jmp public_6ed3ba7
        public_6ed3ba5 : nop
        mov dword ptr ds : [esi], edx
        public_6ed3ba7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6ed3bb2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_6ed3c58
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_6ed3c58
        public_6ed3bc9 : nop
        mov byte ptr ds : [ecx+0x50], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ed3aa0
        jmp public_6ed3cf7
        public_6ed3be1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ed3bee
        mov dword ptr ds : [esi+8], edx
        jmp public_6ed3bf0
        public_6ed3bee : nop
        mov dword ptr ds : [esi], edx
        public_6ed3bf0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ed3bfc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x50]
        mov byte ptr ds : [ecx+0x50], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x50], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x50], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ed3c26
        mov dword ptr ds : [esi+4], ecx
        public_6ed3c26 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ed3c3e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ed3cf4
        public_6ed3c3e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ed3c4e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ed3cf4
        public_6ed3c4e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ed3cf4
        public_6ed3c58 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_6ed3ca6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x50], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x50], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ed3c7b
        mov dword ptr ds : [esi+4], ecx
        public_6ed3c7b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ed3c8e
        mov dword ptr ds : [esi+4], edx
        jmp public_6ed3c9c
        public_6ed3c8e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ed3c99
        mov dword ptr ds : [esi], edx
        jmp public_6ed3c9c
        public_6ed3c99 : nop
        mov dword ptr ds : [esi+8], edx
        public_6ed3c9c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6ed3ca6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x50]
        mov byte ptr ds : [ecx+0x50], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x50], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x50], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ed3ccf
        mov dword ptr ds : [esi+4], ecx
        public_6ed3ccf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ed3ce2
        mov dword ptr ds : [esi+4], edx
        jmp public_6ed3cf1
        public_6ed3ce2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ed3cef
        mov dword ptr ds : [esi+8], edx
        jmp public_6ed3cf1
        public_6ed3cef : nop
        mov dword ptr ds : [esi], edx
        public_6ed3cf1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ed3cf4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ed3cf7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x50], bl
        public_6ed3cfe : nop
        lea ecx, ds:[esi+0xC]
        call public_6efd030
        push esi
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ed3950)
    }
}

#undef public_6ed3974
#undef public_6ed3992
#undef public_6ed399d
#undef public_6ed39a6
#undef public_6ed39b1
#undef public_6ed39cd
#undef public_6ed39e4
#undef public_6ed39f1
#undef public_6ed39fc
#undef public_6ed39ff
#undef public_6ed3a17
#undef public_6ed3a22
#undef public_6ed3a25
#undef public_6ed3a3a
#undef public_6ed3a45
#undef public_6ed3a50
#undef public_6ed3a53
#undef public_6ed3a67
#undef public_6ed3a73
#undef public_6ed3a7f
#undef public_6ed3a82
#undef public_6ed3aa0
#undef public_6ed3adf
#undef public_6ed3af2
#undef public_6ed3afd
#undef public_6ed3b00
#undef public_6ed3b0b
#undef public_6ed3b1e
#undef public_6ed3b45
#undef public_6ed3b5f
#undef public_6ed3b85
#undef public_6ed3b98
#undef public_6ed3ba5
#undef public_6ed3ba7
#undef public_6ed3bb2
#undef public_6ed3bc9
#undef public_6ed3be1
#undef public_6ed3bee
#undef public_6ed3bf0
#undef public_6ed3bfc
#undef public_6ed3c26
#undef public_6ed3c3e
#undef public_6ed3c4e
#undef public_6ed3c58
#undef public_6ed3c7b
#undef public_6ed3c8e
#undef public_6ed3c99
#undef public_6ed3c9c
#undef public_6ed3ca6
#undef public_6ed3ccf
#undef public_6ed3ce2
#undef public_6ed3cef
#undef public_6ed3cf1
#undef public_6ed3cf4
#undef public_6ed3cf7
#undef public_6ed3cfe
