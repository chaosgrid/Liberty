#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1db0);
CLANG_FORWARD_PROC_SYMBOL(public_6be21c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be1dd4 _public_6be1dd4
#define public_6be1df2 _public_6be1df2
#define public_6be1dfd _public_6be1dfd
#define public_6be1e06 _public_6be1e06
#define public_6be1e11 _public_6be1e11
#define public_6be1e2d _public_6be1e2d
#define public_6be1e44 _public_6be1e44
#define public_6be1e51 _public_6be1e51
#define public_6be1e5c _public_6be1e5c
#define public_6be1e5f _public_6be1e5f
#define public_6be1e77 _public_6be1e77
#define public_6be1e82 _public_6be1e82
#define public_6be1e85 _public_6be1e85
#define public_6be1e9a _public_6be1e9a
#define public_6be1ea5 _public_6be1ea5
#define public_6be1eb0 _public_6be1eb0
#define public_6be1eb3 _public_6be1eb3
#define public_6be1ec7 _public_6be1ec7
#define public_6be1ed3 _public_6be1ed3
#define public_6be1edf _public_6be1edf
#define public_6be1ee2 _public_6be1ee2
#define public_6be1f00 _public_6be1f00
#define public_6be1f3f _public_6be1f3f
#define public_6be1f52 _public_6be1f52
#define public_6be1f5d _public_6be1f5d
#define public_6be1f60 _public_6be1f60
#define public_6be1f6b _public_6be1f6b
#define public_6be1f7e _public_6be1f7e
#define public_6be1fa5 _public_6be1fa5
#define public_6be1fbf _public_6be1fbf
#define public_6be1fe5 _public_6be1fe5
#define public_6be1ff8 _public_6be1ff8
#define public_6be2005 _public_6be2005
#define public_6be2007 _public_6be2007
#define public_6be2012 _public_6be2012
#define public_6be2029 _public_6be2029
#define public_6be2041 _public_6be2041
#define public_6be204e _public_6be204e
#define public_6be2050 _public_6be2050
#define public_6be205c _public_6be205c
#define public_6be2086 _public_6be2086
#define public_6be209e _public_6be209e
#define public_6be20ae _public_6be20ae
#define public_6be20b8 _public_6be20b8
#define public_6be20db _public_6be20db
#define public_6be20ee _public_6be20ee
#define public_6be20f9 _public_6be20f9
#define public_6be20fc _public_6be20fc
#define public_6be2106 _public_6be2106
#define public_6be212f _public_6be212f
#define public_6be2142 _public_6be2142
#define public_6be214f _public_6be214f
#define public_6be2151 _public_6be2151
#define public_6be2154 _public_6be2154
#define public_6be2157 _public_6be2157
#define public_6be215a _public_6be215a

PROC_DECLARE(0x6be1db0, internal_6be1db0, public_6be1db0);
extern "C" NAKED register_t __cdecl internal_6be1db0()
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
        call public_6be21c0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6be1df2
        mov eax, dword ptr ds : [esi+8]
        public_6be1dd4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6be1e77
        mov dword ptr ds : [ecx+4], eax
        jmp public_6be1e85
        public_6be1df2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6be1dfd
        mov eax, edx
        jmp public_6be1dd4
        public_6be1dfd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6be1e11
        public_6be1e06 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6be1e06
        public_6be1e11 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6be1dd4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6be1e2d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6be1e44
        public_6be1e2d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6be1e44 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6be1e51
        mov dword ptr ds : [edx+4], ecx
        jmp public_6be1e5f
        public_6be1e51 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6be1e5c
        mov dword ptr ds : [edx], ecx
        jmp public_6be1e5f
        public_6be1e5c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6be1e5f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6be1ee2
        public_6be1e77 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6be1e82
        mov dword ptr ds : [ecx], eax
        jmp public_6be1e85
        public_6be1e82 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6be1e85 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6be1eb3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6be1e9a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6be1eb0
        public_6be1e9a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6be1eb0
        public_6be1ea5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6be1ea5
        public_6be1eb0 : nop
        mov dword ptr ss : [ebp], edx
        public_6be1eb3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6be1ee2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6be1ec7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6be1edf
        public_6be1ec7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6be1edf
        public_6be1ed3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6be1ed3
        public_6be1edf : nop
        mov dword ptr ss : [ebp+8], edx
        public_6be1ee2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x14]
        mov bl, 1
        cmp dl, bl
        jne public_6be215a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6be2157
        nop 
        public_6be1f00 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_6be2157
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6be1fbf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6be1f6b
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6be1f3f
        mov dword ptr ds : [esi+4], ecx
        public_6be1f3f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6be1f52
        mov dword ptr ds : [esi+4], edx
        jmp public_6be1f60
        public_6be1f52 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6be1f5d
        mov dword ptr ds : [esi], edx
        jmp public_6be1f60
        public_6be1f5d : nop
        mov dword ptr ds : [esi+8], edx
        public_6be1f60 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6be1f6b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6be1f7e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_6be2029
        public_6be1f7e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6be205c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6be1fa5
        mov dword ptr ds : [esi+4], ecx
        public_6be1fa5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6be2041
        mov dword ptr ds : [esi+4], edx
        jmp public_6be2050
        public_6be1fbf : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6be2012
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6be1fe5
        mov dword ptr ds : [esi+4], ecx
        public_6be1fe5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6be1ff8
        mov dword ptr ds : [esi+4], edx
        jmp public_6be2007
        public_6be1ff8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6be2005
        mov dword ptr ds : [esi+8], edx
        jmp public_6be2007
        public_6be2005 : nop
        mov dword ptr ds : [esi], edx
        public_6be2007 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6be2012 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6be20b8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6be20b8
        public_6be2029 : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6be1f00
        jmp public_6be2157
        public_6be2041 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6be204e
        mov dword ptr ds : [esi+8], edx
        jmp public_6be2050
        public_6be204e : nop
        mov dword ptr ds : [esi], edx
        public_6be2050 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6be205c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6be2086
        mov dword ptr ds : [esi+4], ecx
        public_6be2086 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6be209e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6be2154
        public_6be209e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6be20ae
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6be2154
        public_6be20ae : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6be2154
        public_6be20b8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6be2106
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6be20db
        mov dword ptr ds : [esi+4], ecx
        public_6be20db : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6be20ee
        mov dword ptr ds : [esi+4], edx
        jmp public_6be20fc
        public_6be20ee : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6be20f9
        mov dword ptr ds : [esi], edx
        jmp public_6be20fc
        public_6be20f9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6be20fc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6be2106 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6be212f
        mov dword ptr ds : [esi+4], ecx
        public_6be212f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6be2142
        mov dword ptr ds : [esi+4], edx
        jmp public_6be2151
        public_6be2142 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6be214f
        mov dword ptr ds : [esi+8], edx
        jmp public_6be2151
        public_6be214f : nop
        mov dword ptr ds : [esi], edx
        public_6be2151 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6be2154 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6be2157 : nop
        mov byte ptr ds : [eax+0x14], bl
        public_6be215a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6c09aaa
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
        UNREACHABLE_TRAP(0x6be1db0)
    }
}

#undef public_6be1dd4
#undef public_6be1df2
#undef public_6be1dfd
#undef public_6be1e06
#undef public_6be1e11
#undef public_6be1e2d
#undef public_6be1e44
#undef public_6be1e51
#undef public_6be1e5c
#undef public_6be1e5f
#undef public_6be1e77
#undef public_6be1e82
#undef public_6be1e85
#undef public_6be1e9a
#undef public_6be1ea5
#undef public_6be1eb0
#undef public_6be1eb3
#undef public_6be1ec7
#undef public_6be1ed3
#undef public_6be1edf
#undef public_6be1ee2
#undef public_6be1f00
#undef public_6be1f3f
#undef public_6be1f52
#undef public_6be1f5d
#undef public_6be1f60
#undef public_6be1f6b
#undef public_6be1f7e
#undef public_6be1fa5
#undef public_6be1fbf
#undef public_6be1fe5
#undef public_6be1ff8
#undef public_6be2005
#undef public_6be2007
#undef public_6be2012
#undef public_6be2029
#undef public_6be2041
#undef public_6be204e
#undef public_6be2050
#undef public_6be205c
#undef public_6be2086
#undef public_6be209e
#undef public_6be20ae
#undef public_6be20b8
#undef public_6be20db
#undef public_6be20ee
#undef public_6be20f9
#undef public_6be20fc
#undef public_6be2106
#undef public_6be212f
#undef public_6be2142
#undef public_6be214f
#undef public_6be2151
#undef public_6be2154
#undef public_6be2157
#undef public_6be215a
