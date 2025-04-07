#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d046c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d058a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d05d40);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d058c4 _public_6d058c4
#define public_6d058e2 _public_6d058e2
#define public_6d058ed _public_6d058ed
#define public_6d058f6 _public_6d058f6
#define public_6d05901 _public_6d05901
#define public_6d0591d _public_6d0591d
#define public_6d05934 _public_6d05934
#define public_6d05941 _public_6d05941
#define public_6d0594c _public_6d0594c
#define public_6d0594f _public_6d0594f
#define public_6d05967 _public_6d05967
#define public_6d05972 _public_6d05972
#define public_6d05975 _public_6d05975
#define public_6d0598a _public_6d0598a
#define public_6d05995 _public_6d05995
#define public_6d059a0 _public_6d059a0
#define public_6d059a3 _public_6d059a3
#define public_6d059b7 _public_6d059b7
#define public_6d059c3 _public_6d059c3
#define public_6d059cf _public_6d059cf
#define public_6d059d2 _public_6d059d2
#define public_6d059f0 _public_6d059f0
#define public_6d05a2f _public_6d05a2f
#define public_6d05a42 _public_6d05a42
#define public_6d05a4d _public_6d05a4d
#define public_6d05a50 _public_6d05a50
#define public_6d05a5b _public_6d05a5b
#define public_6d05a6e _public_6d05a6e
#define public_6d05a95 _public_6d05a95
#define public_6d05aaf _public_6d05aaf
#define public_6d05ad5 _public_6d05ad5
#define public_6d05ae8 _public_6d05ae8
#define public_6d05af5 _public_6d05af5
#define public_6d05af7 _public_6d05af7
#define public_6d05b02 _public_6d05b02
#define public_6d05b19 _public_6d05b19
#define public_6d05b31 _public_6d05b31
#define public_6d05b3e _public_6d05b3e
#define public_6d05b40 _public_6d05b40
#define public_6d05b4c _public_6d05b4c
#define public_6d05b76 _public_6d05b76
#define public_6d05b8e _public_6d05b8e
#define public_6d05b9e _public_6d05b9e
#define public_6d05ba8 _public_6d05ba8
#define public_6d05bcb _public_6d05bcb
#define public_6d05bde _public_6d05bde
#define public_6d05be9 _public_6d05be9
#define public_6d05bec _public_6d05bec
#define public_6d05bf6 _public_6d05bf6
#define public_6d05c1f _public_6d05c1f
#define public_6d05c32 _public_6d05c32
#define public_6d05c3f _public_6d05c3f
#define public_6d05c41 _public_6d05c41
#define public_6d05c44 _public_6d05c44
#define public_6d05c47 _public_6d05c47
#define public_6d05c4e _public_6d05c4e

PROC_DECLARE(0x6d058a0, internal_6d058a0, public_6d058a0);
extern "C" NAKED register_t __cdecl internal_6d058a0()
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
        call public_6d05d40
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6d058e2
        mov eax, dword ptr ds : [esi+8]
        public_6d058c4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6d05967
        mov dword ptr ds : [ecx+4], eax
        jmp public_6d05975
        public_6d058e2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6d058ed
        mov eax, edx
        jmp public_6d058c4
        public_6d058ed : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        jne public_6d05901
        public_6d058f6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        je public_6d058f6
        public_6d05901 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d058c4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d0591d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d05934
        public_6d0591d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6d05934 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6d05941
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d0594f
        public_6d05941 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6d0594c
        mov dword ptr ds : [edx], ecx
        jmp public_6d0594f
        public_6d0594c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d0594f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x34]
        mov dl, byte ptr ds : [ecx+0x34]
        mov byte ptr ds : [ecx+0x34], bl
        mov byte ptr ds : [esi+0x34], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6d059d2
        public_6d05967 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6d05972
        mov dword ptr ds : [ecx], eax
        jmp public_6d05975
        public_6d05972 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6d05975 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6d059a3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d0598a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6d059a0
        public_6d0598a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        mov edx, eax
        jne public_6d059a0
        public_6d05995 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        je public_6d05995
        public_6d059a0 : nop
        mov dword ptr ss : [ebp], edx
        public_6d059a3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6d059d2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d059b7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6d059cf
        public_6d059b7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        mov edx, eax
        jne public_6d059cf
        public_6d059c3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        je public_6d059c3
        public_6d059cf : nop
        mov dword ptr ss : [ebp+8], edx
        public_6d059d2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x34]
        mov bl, 1
        cmp cl, bl
        jne public_6d05c4e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6d05c47
        nop 
        public_6d059f0 : nop
        cmp byte ptr ds : [eax+0x34], bl
        jne public_6d05c47
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6d05aaf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_6d05a5b
        mov byte ptr ds : [ecx+0x34], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x34], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d05a2f
        mov dword ptr ds : [esi+4], ecx
        public_6d05a2f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d05a42
        mov dword ptr ds : [esi+4], edx
        jmp public_6d05a50
        public_6d05a42 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d05a4d
        mov dword ptr ds : [esi], edx
        jmp public_6d05a50
        public_6d05a4d : nop
        mov dword ptr ds : [esi+8], edx
        public_6d05a50 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6d05a5b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_6d05a6e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x34], bl
        je public_6d05b19
        public_6d05a6e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_6d05b4c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x34], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x34], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d05a95
        mov dword ptr ds : [esi+4], ecx
        public_6d05a95 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d05b31
        mov dword ptr ds : [esi+4], edx
        jmp public_6d05b40
        public_6d05aaf : nop
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_6d05b02
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d05ad5
        mov dword ptr ds : [esi+4], ecx
        public_6d05ad5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d05ae8
        mov dword ptr ds : [esi+4], edx
        jmp public_6d05af7
        public_6d05ae8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d05af5
        mov dword ptr ds : [esi+8], edx
        jmp public_6d05af7
        public_6d05af5 : nop
        mov dword ptr ds : [esi], edx
        public_6d05af7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6d05b02 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_6d05ba8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_6d05ba8
        public_6d05b19 : nop
        mov byte ptr ds : [ecx+0x34], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6d059f0
        jmp public_6d05c47
        public_6d05b31 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d05b3e
        mov dword ptr ds : [esi+8], edx
        jmp public_6d05b40
        public_6d05b3e : nop
        mov dword ptr ds : [esi], edx
        public_6d05b40 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6d05b4c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x34]
        mov byte ptr ds : [ecx+0x34], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x34], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d05b76
        mov dword ptr ds : [esi+4], ecx
        public_6d05b76 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d05b8e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d05c44
        public_6d05b8e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d05b9e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d05c44
        public_6d05b9e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d05c44
        public_6d05ba8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_6d05bf6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x34], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x34], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d05bcb
        mov dword ptr ds : [esi+4], ecx
        public_6d05bcb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d05bde
        mov dword ptr ds : [esi+4], edx
        jmp public_6d05bec
        public_6d05bde : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d05be9
        mov dword ptr ds : [esi], edx
        jmp public_6d05bec
        public_6d05be9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6d05bec : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6d05bf6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x34]
        mov byte ptr ds : [ecx+0x34], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x34], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d05c1f
        mov dword ptr ds : [esi+4], ecx
        public_6d05c1f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d05c32
        mov dword ptr ds : [esi+4], edx
        jmp public_6d05c41
        public_6d05c32 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d05c3f
        mov dword ptr ds : [esi+8], edx
        jmp public_6d05c41
        public_6d05c3f : nop
        mov dword ptr ds : [esi], edx
        public_6d05c41 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d05c44 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6d05c47 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x34], bl
        public_6d05c4e : nop
        lea ecx, ds:[esi+0xC]
        call public_6d046c0
        push esi
        call public_6d5ffb0
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
        UNREACHABLE_TRAP(0x6d058a0)
    }
}

#undef public_6d058c4
#undef public_6d058e2
#undef public_6d058ed
#undef public_6d058f6
#undef public_6d05901
#undef public_6d0591d
#undef public_6d05934
#undef public_6d05941
#undef public_6d0594c
#undef public_6d0594f
#undef public_6d05967
#undef public_6d05972
#undef public_6d05975
#undef public_6d0598a
#undef public_6d05995
#undef public_6d059a0
#undef public_6d059a3
#undef public_6d059b7
#undef public_6d059c3
#undef public_6d059cf
#undef public_6d059d2
#undef public_6d059f0
#undef public_6d05a2f
#undef public_6d05a42
#undef public_6d05a4d
#undef public_6d05a50
#undef public_6d05a5b
#undef public_6d05a6e
#undef public_6d05a95
#undef public_6d05aaf
#undef public_6d05ad5
#undef public_6d05ae8
#undef public_6d05af5
#undef public_6d05af7
#undef public_6d05b02
#undef public_6d05b19
#undef public_6d05b31
#undef public_6d05b3e
#undef public_6d05b40
#undef public_6d05b4c
#undef public_6d05b76
#undef public_6d05b8e
#undef public_6d05b9e
#undef public_6d05ba8
#undef public_6d05bcb
#undef public_6d05bde
#undef public_6d05be9
#undef public_6d05bec
#undef public_6d05bf6
#undef public_6d05c1f
#undef public_6d05c32
#undef public_6d05c3f
#undef public_6d05c41
#undef public_6d05c44
#undef public_6d05c47
#undef public_6d05c4e
