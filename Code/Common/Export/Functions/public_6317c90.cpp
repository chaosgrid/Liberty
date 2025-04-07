#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6316730);
CLANG_FORWARD_PROC_SYMBOL(public_6317c90);
CLANG_FORWARD_PROC_SYMBOL(public_6342a40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6317cb4 _public_6317cb4
#define public_6317cd2 _public_6317cd2
#define public_6317cdd _public_6317cdd
#define public_6317ce6 _public_6317ce6
#define public_6317cf1 _public_6317cf1
#define public_6317d0d _public_6317d0d
#define public_6317d24 _public_6317d24
#define public_6317d31 _public_6317d31
#define public_6317d3c _public_6317d3c
#define public_6317d3f _public_6317d3f
#define public_6317d57 _public_6317d57
#define public_6317d62 _public_6317d62
#define public_6317d65 _public_6317d65
#define public_6317d7a _public_6317d7a
#define public_6317d85 _public_6317d85
#define public_6317d90 _public_6317d90
#define public_6317d93 _public_6317d93
#define public_6317da7 _public_6317da7
#define public_6317db3 _public_6317db3
#define public_6317dbf _public_6317dbf
#define public_6317dc2 _public_6317dc2
#define public_6317de0 _public_6317de0
#define public_6317e1f _public_6317e1f
#define public_6317e32 _public_6317e32
#define public_6317e3d _public_6317e3d
#define public_6317e40 _public_6317e40
#define public_6317e4b _public_6317e4b
#define public_6317e5e _public_6317e5e
#define public_6317e85 _public_6317e85
#define public_6317e9f _public_6317e9f
#define public_6317ec5 _public_6317ec5
#define public_6317ed8 _public_6317ed8
#define public_6317ee5 _public_6317ee5
#define public_6317ee7 _public_6317ee7
#define public_6317ef2 _public_6317ef2
#define public_6317f09 _public_6317f09
#define public_6317f21 _public_6317f21
#define public_6317f2e _public_6317f2e
#define public_6317f30 _public_6317f30
#define public_6317f3c _public_6317f3c
#define public_6317f66 _public_6317f66
#define public_6317f7e _public_6317f7e
#define public_6317f8e _public_6317f8e
#define public_6317f98 _public_6317f98
#define public_6317fbb _public_6317fbb
#define public_6317fce _public_6317fce
#define public_6317fd9 _public_6317fd9
#define public_6317fdc _public_6317fdc
#define public_6317fe6 _public_6317fe6
#define public_631800f _public_631800f
#define public_6318022 _public_6318022
#define public_631802f _public_631802f
#define public_6318031 _public_6318031
#define public_6318034 _public_6318034
#define public_6318037 _public_6318037
#define public_631803e _public_631803e

PROC_DECLARE(0x6317c90, internal_6317c90, public_6317c90);
extern "C" NAKED register_t __cdecl internal_6317c90()
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
        call public_6342a40
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6317cd2
        mov eax, dword ptr ds : [esi+8]
        public_6317cb4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6317d57
        mov dword ptr ds : [ecx+4], eax
        jmp public_6317d65
        public_6317cd2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6317cdd
        mov eax, edx
        jmp public_6317cb4
        public_6317cdd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6317cf1
        public_6317ce6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6317ce6
        public_6317cf1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6317cb4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6317d0d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6317d24
        public_6317d0d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6317d24 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6317d31
        mov dword ptr ds : [edx+4], ecx
        jmp public_6317d3f
        public_6317d31 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6317d3c
        mov dword ptr ds : [edx], ecx
        jmp public_6317d3f
        public_6317d3c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6317d3f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x24]
        mov dl, byte ptr ds : [ecx+0x24]
        mov byte ptr ds : [ecx+0x24], bl
        mov byte ptr ds : [esi+0x24], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6317dc2
        public_6317d57 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6317d62
        mov dword ptr ds : [ecx], eax
        jmp public_6317d65
        public_6317d62 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6317d65 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6317d93
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6317d7a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6317d90
        public_6317d7a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        mov edx, eax
        jne public_6317d90
        public_6317d85 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_6317d85
        public_6317d90 : nop
        mov dword ptr ss : [ebp], edx
        public_6317d93 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6317dc2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6317da7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6317dbf
        public_6317da7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        mov edx, eax
        jne public_6317dbf
        public_6317db3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_6317db3
        public_6317dbf : nop
        mov dword ptr ss : [ebp+8], edx
        public_6317dc2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x24]
        mov bl, 1
        cmp cl, bl
        jne public_631803e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6318037
        nop 
        public_6317de0 : nop
        cmp byte ptr ds : [eax+0x24], bl
        jne public_6318037
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6317e9f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6317e4b
        mov byte ptr ds : [ecx+0x24], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6317e1f
        mov dword ptr ds : [esi+4], ecx
        public_6317e1f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6317e32
        mov dword ptr ds : [esi+4], edx
        jmp public_6317e40
        public_6317e32 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6317e3d
        mov dword ptr ds : [esi], edx
        jmp public_6317e40
        public_6317e3d : nop
        mov dword ptr ds : [esi+8], edx
        public_6317e40 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6317e4b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6317e5e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        je public_6317f09
        public_6317e5e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6317f3c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6317e85
        mov dword ptr ds : [esi+4], ecx
        public_6317e85 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6317f21
        mov dword ptr ds : [esi+4], edx
        jmp public_6317f30
        public_6317e9f : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6317ef2
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6317ec5
        mov dword ptr ds : [esi+4], ecx
        public_6317ec5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6317ed8
        mov dword ptr ds : [esi+4], edx
        jmp public_6317ee7
        public_6317ed8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6317ee5
        mov dword ptr ds : [esi+8], edx
        jmp public_6317ee7
        public_6317ee5 : nop
        mov dword ptr ds : [esi], edx
        public_6317ee7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6317ef2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6317f98
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6317f98
        public_6317f09 : nop
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6317de0
        jmp public_6318037
        public_6317f21 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6317f2e
        mov dword ptr ds : [esi+8], edx
        jmp public_6317f30
        public_6317f2e : nop
        mov dword ptr ds : [esi], edx
        public_6317f30 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6317f3c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6317f66
        mov dword ptr ds : [esi+4], ecx
        public_6317f66 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6317f7e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6318034
        public_6317f7e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6317f8e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6318034
        public_6317f8e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6318034
        public_6317f98 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6317fe6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6317fbb
        mov dword ptr ds : [esi+4], ecx
        public_6317fbb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6317fce
        mov dword ptr ds : [esi+4], edx
        jmp public_6317fdc
        public_6317fce : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6317fd9
        mov dword ptr ds : [esi], edx
        jmp public_6317fdc
        public_6317fd9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6317fdc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6317fe6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_631800f
        mov dword ptr ds : [esi+4], ecx
        public_631800f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6318022
        mov dword ptr ds : [esi+4], edx
        jmp public_6318031
        public_6318022 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_631802f
        mov dword ptr ds : [esi+8], edx
        jmp public_6318031
        public_631802f : nop
        mov dword ptr ds : [esi], edx
        public_6318031 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6318034 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6318037 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x24], bl
        public_631803e : nop
        lea ecx, ds:[esi+0xC]
        call public_6316730
        push esi
        call public_6391d5a
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
        UNREACHABLE_TRAP(0x6317c90)
    }
}

#undef public_6317cb4
#undef public_6317cd2
#undef public_6317cdd
#undef public_6317ce6
#undef public_6317cf1
#undef public_6317d0d
#undef public_6317d24
#undef public_6317d31
#undef public_6317d3c
#undef public_6317d3f
#undef public_6317d57
#undef public_6317d62
#undef public_6317d65
#undef public_6317d7a
#undef public_6317d85
#undef public_6317d90
#undef public_6317d93
#undef public_6317da7
#undef public_6317db3
#undef public_6317dbf
#undef public_6317dc2
#undef public_6317de0
#undef public_6317e1f
#undef public_6317e32
#undef public_6317e3d
#undef public_6317e40
#undef public_6317e4b
#undef public_6317e5e
#undef public_6317e85
#undef public_6317e9f
#undef public_6317ec5
#undef public_6317ed8
#undef public_6317ee5
#undef public_6317ee7
#undef public_6317ef2
#undef public_6317f09
#undef public_6317f21
#undef public_6317f2e
#undef public_6317f30
#undef public_6317f3c
#undef public_6317f66
#undef public_6317f7e
#undef public_6317f8e
#undef public_6317f98
#undef public_6317fbb
#undef public_6317fce
#undef public_6317fd9
#undef public_6317fdc
#undef public_6317fe6
#undef public_631800f
#undef public_6318022
#undef public_631802f
#undef public_6318031
#undef public_6318034
#undef public_6318037
#undef public_631803e
