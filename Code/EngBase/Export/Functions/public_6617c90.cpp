#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66142f0);
CLANG_FORWARD_PROC_SYMBOL(public_6617c90);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6617cb4 _public_6617cb4
#define public_6617cd2 _public_6617cd2
#define public_6617cdd _public_6617cdd
#define public_6617ce6 _public_6617ce6
#define public_6617cf1 _public_6617cf1
#define public_6617d0f _public_6617d0f
#define public_6617d26 _public_6617d26
#define public_6617d33 _public_6617d33
#define public_6617d3e _public_6617d3e
#define public_6617d41 _public_6617d41
#define public_6617d59 _public_6617d59
#define public_6617d64 _public_6617d64
#define public_6617d67 _public_6617d67
#define public_6617d7e _public_6617d7e
#define public_6617d89 _public_6617d89
#define public_6617d94 _public_6617d94
#define public_6617d97 _public_6617d97
#define public_6617dad _public_6617dad
#define public_6617db9 _public_6617db9
#define public_6617dc5 _public_6617dc5
#define public_6617dc8 _public_6617dc8
#define public_6617de3 _public_6617de3
#define public_6617e22 _public_6617e22
#define public_6617e35 _public_6617e35
#define public_6617e40 _public_6617e40
#define public_6617e43 _public_6617e43
#define public_6617e4e _public_6617e4e
#define public_6617e61 _public_6617e61
#define public_6617e88 _public_6617e88
#define public_6617ea2 _public_6617ea2
#define public_6617ec8 _public_6617ec8
#define public_6617edb _public_6617edb
#define public_6617ee8 _public_6617ee8
#define public_6617eea _public_6617eea
#define public_6617ef5 _public_6617ef5
#define public_6617f0c _public_6617f0c
#define public_6617f24 _public_6617f24
#define public_6617f31 _public_6617f31
#define public_6617f33 _public_6617f33
#define public_6617f3f _public_6617f3f
#define public_6617f69 _public_6617f69
#define public_6617f81 _public_6617f81
#define public_6617f91 _public_6617f91
#define public_6617f9b _public_6617f9b
#define public_6617fbe _public_6617fbe
#define public_6617fd1 _public_6617fd1
#define public_6617fdc _public_6617fdc
#define public_6617fdf _public_6617fdf
#define public_6617fe9 _public_6617fe9
#define public_6618012 _public_6618012
#define public_6618025 _public_6618025
#define public_6618032 _public_6618032
#define public_6618034 _public_6618034
#define public_6618037 _public_6618037
#define public_661803a _public_661803a
#define public_661803d _public_661803d

PROC_DECLARE(0x6617c90, internal_6617c90, public_6617c90);
extern "C" NAKED register_t __cdecl internal_6617c90()
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
        call public_66142f0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6617cd2
        mov eax, dword ptr ds : [esi+8]
        public_6617cb4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6617d59
        mov dword ptr ds : [ecx+4], eax
        jmp public_6617d67
        public_6617cd2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6617cdd
        mov eax, edx
        jmp public_6617cb4
        public_6617cdd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_6617cf1
        public_6617ce6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_6617ce6
        public_6617cf1 : nop
        mov eax, dword ptr ds : [ecx+8]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6617cb4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [esi+8]
        cmp ecx, edx
        jne public_6617d0f
        mov dword ptr ds : [eax+4], ecx
        jmp public_6617d26
        public_6617d0f : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6617d26 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6617d33
        mov dword ptr ds : [edx+4], ecx
        jmp public_6617d41
        public_6617d33 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6617d3e
        mov dword ptr ds : [edx], ecx
        jmp public_6617d41
        public_6617d3e : nop
        mov dword ptr ds : [edx+8], ecx
        public_6617d41 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x10]
        mov dl, byte ptr ds : [ecx+0x10]
        mov byte ptr ds : [ecx+0x10], bl
        mov byte ptr ds : [esi+0x10], dl
        jmp public_6617dc8
        public_6617d59 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6617d64
        mov dword ptr ds : [ecx], eax
        jmp public_6617d67
        public_6617d64 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6617d67 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6617d97
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_6617d7e
        mov edx, dword ptr ds : [esi+4]
        jmp public_6617d94
        public_6617d7e : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        jne public_6617d94
        public_6617d89 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_6617d89
        public_6617d94 : nop
        mov dword ptr ss : [ebp], edx
        public_6617d97 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6617dc8
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_6617dad
        mov edx, dword ptr ds : [esi+4]
        jmp public_6617dc5
        public_6617dad : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        jne public_6617dc5
        public_6617db9 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_6617db9
        public_6617dc5 : nop
        mov dword ptr ss : [ebp+8], edx
        public_6617dc8 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov bl, 1
        cmp byte ptr ds : [ecx+0x10], bl
        jne public_661803d
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_661803a
        public_6617de3 : nop
        cmp byte ptr ds : [eax+0x10], bl
        jne public_661803a
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6617ea2
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_6617e4e
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6617e22
        mov dword ptr ds : [esi+4], ecx
        public_6617e22 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6617e35
        mov dword ptr ds : [esi+4], edx
        jmp public_6617e43
        public_6617e35 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6617e40
        mov dword ptr ds : [esi], edx
        jmp public_6617e43
        public_6617e40 : nop
        mov dword ptr ds : [esi+8], edx
        public_6617e43 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6617e4e : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_6617e61
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        je public_6617f0c
        public_6617e61 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_6617f3f
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x10], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x10], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6617e88
        mov dword ptr ds : [esi+4], ecx
        public_6617e88 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6617f24
        mov dword ptr ds : [esi+4], edx
        jmp public_6617f33
        public_6617ea2 : nop
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_6617ef5
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6617ec8
        mov dword ptr ds : [esi+4], ecx
        public_6617ec8 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6617edb
        mov dword ptr ds : [esi+4], edx
        jmp public_6617eea
        public_6617edb : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6617ee8
        mov dword ptr ds : [esi+8], edx
        jmp public_6617eea
        public_6617ee8 : nop
        mov dword ptr ds : [esi], edx
        public_6617eea : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6617ef5 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_6617f9b
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_6617f9b
        public_6617f0c : nop
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6617de3
        jmp public_661803a
        public_6617f24 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6617f31
        mov dword ptr ds : [esi+8], edx
        jmp public_6617f33
        public_6617f31 : nop
        mov dword ptr ds : [esi], edx
        public_6617f33 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6617f3f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x10]
        mov byte ptr ds : [ecx+0x10], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x10], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6617f69
        mov dword ptr ds : [esi+4], ecx
        public_6617f69 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6617f81
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6618037
        public_6617f81 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6617f91
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6618037
        public_6617f91 : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6618037
        public_6617f9b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_6617fe9
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x10], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x10], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6617fbe
        mov dword ptr ds : [esi+4], ecx
        public_6617fbe : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6617fd1
        mov dword ptr ds : [esi+4], edx
        jmp public_6617fdf
        public_6617fd1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6617fdc
        mov dword ptr ds : [esi], edx
        jmp public_6617fdf
        public_6617fdc : nop
        mov dword ptr ds : [esi+8], edx
        public_6617fdf : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6617fe9 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x10]
        mov byte ptr ds : [ecx+0x10], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x10], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6618012
        mov dword ptr ds : [esi+4], ecx
        public_6618012 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6618025
        mov dword ptr ds : [esi+4], edx
        jmp public_6618034
        public_6618025 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6618032
        mov dword ptr ds : [esi+8], edx
        jmp public_6618034
        public_6618032 : nop
        mov dword ptr ds : [esi], edx
        public_6618034 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6618037 : nop
        mov dword ptr ds : [ecx+4], edx
        public_661803a : nop
        mov byte ptr ds : [eax+0x10], bl
        public_661803d : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_66281d0
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6617c90)
    }
}

#undef public_6617cb4
#undef public_6617cd2
#undef public_6617cdd
#undef public_6617ce6
#undef public_6617cf1
#undef public_6617d0f
#undef public_6617d26
#undef public_6617d33
#undef public_6617d3e
#undef public_6617d41
#undef public_6617d59
#undef public_6617d64
#undef public_6617d67
#undef public_6617d7e
#undef public_6617d89
#undef public_6617d94
#undef public_6617d97
#undef public_6617dad
#undef public_6617db9
#undef public_6617dc5
#undef public_6617dc8
#undef public_6617de3
#undef public_6617e22
#undef public_6617e35
#undef public_6617e40
#undef public_6617e43
#undef public_6617e4e
#undef public_6617e61
#undef public_6617e88
#undef public_6617ea2
#undef public_6617ec8
#undef public_6617edb
#undef public_6617ee8
#undef public_6617eea
#undef public_6617ef5
#undef public_6617f0c
#undef public_6617f24
#undef public_6617f31
#undef public_6617f33
#undef public_6617f3f
#undef public_6617f69
#undef public_6617f81
#undef public_6617f91
#undef public_6617f9b
#undef public_6617fbe
#undef public_6617fd1
#undef public_6617fdc
#undef public_6617fdf
#undef public_6617fe9
#undef public_6618012
#undef public_6618025
#undef public_6618032
#undef public_6618034
#undef public_6618037
#undef public_661803a
#undef public_661803d
