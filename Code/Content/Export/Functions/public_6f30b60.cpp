#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f03670);
CLANG_FORWARD_PROC_SYMBOL(public_6f30b60);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f30b84 _public_6f30b84
#define public_6f30ba2 _public_6f30ba2
#define public_6f30bad _public_6f30bad
#define public_6f30bb6 _public_6f30bb6
#define public_6f30bc1 _public_6f30bc1
#define public_6f30bdd _public_6f30bdd
#define public_6f30bf4 _public_6f30bf4
#define public_6f30c01 _public_6f30c01
#define public_6f30c0c _public_6f30c0c
#define public_6f30c0f _public_6f30c0f
#define public_6f30c27 _public_6f30c27
#define public_6f30c32 _public_6f30c32
#define public_6f30c35 _public_6f30c35
#define public_6f30c4a _public_6f30c4a
#define public_6f30c55 _public_6f30c55
#define public_6f30c60 _public_6f30c60
#define public_6f30c63 _public_6f30c63
#define public_6f30c77 _public_6f30c77
#define public_6f30c83 _public_6f30c83
#define public_6f30c8f _public_6f30c8f
#define public_6f30c92 _public_6f30c92
#define public_6f30cb0 _public_6f30cb0
#define public_6f30cef _public_6f30cef
#define public_6f30d02 _public_6f30d02
#define public_6f30d0d _public_6f30d0d
#define public_6f30d10 _public_6f30d10
#define public_6f30d1b _public_6f30d1b
#define public_6f30d2e _public_6f30d2e
#define public_6f30d55 _public_6f30d55
#define public_6f30d6f _public_6f30d6f
#define public_6f30d95 _public_6f30d95
#define public_6f30da8 _public_6f30da8
#define public_6f30db5 _public_6f30db5
#define public_6f30db7 _public_6f30db7
#define public_6f30dc2 _public_6f30dc2
#define public_6f30dd9 _public_6f30dd9
#define public_6f30df1 _public_6f30df1
#define public_6f30dfe _public_6f30dfe
#define public_6f30e00 _public_6f30e00
#define public_6f30e0c _public_6f30e0c
#define public_6f30e36 _public_6f30e36
#define public_6f30e4e _public_6f30e4e
#define public_6f30e5e _public_6f30e5e
#define public_6f30e68 _public_6f30e68
#define public_6f30e8b _public_6f30e8b
#define public_6f30e9e _public_6f30e9e
#define public_6f30ea9 _public_6f30ea9
#define public_6f30eac _public_6f30eac
#define public_6f30eb6 _public_6f30eb6
#define public_6f30edf _public_6f30edf
#define public_6f30ef2 _public_6f30ef2
#define public_6f30eff _public_6f30eff
#define public_6f30f01 _public_6f30f01
#define public_6f30f04 _public_6f30f04
#define public_6f30f07 _public_6f30f07
#define public_6f30f0e _public_6f30f0e

PROC_DECLARE(0x6f30b60, internal_6f30b60, public_6f30b60);
extern "C" NAKED register_t __cdecl internal_6f30b60()
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
        call public_6f03670
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f30ba2
        mov eax, dword ptr ds : [esi+8]
        public_6f30b84 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f30c27
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f30c35
        public_6f30ba2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f30bad
        mov eax, edx
        jmp public_6f30b84
        public_6f30bad : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6f30bc1
        public_6f30bb6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6f30bb6
        public_6f30bc1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f30b84
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f30bdd
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f30bf4
        public_6f30bdd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f30bf4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f30c01
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f30c0f
        public_6f30c01 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f30c0c
        mov dword ptr ds : [edx], ecx
        jmp public_6f30c0f
        public_6f30c0c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f30c0f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x20]
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [ecx+0x20], bl
        mov byte ptr ds : [esi+0x20], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f30c92
        public_6f30c27 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f30c32
        mov dword ptr ds : [ecx], eax
        jmp public_6f30c35
        public_6f30c32 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f30c35 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f30c63
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f30c4a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f30c60
        public_6f30c4a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6f30c60
        public_6f30c55 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6f30c55
        public_6f30c60 : nop
        mov dword ptr ss : [ebp], edx
        public_6f30c63 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f30c92
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f30c77
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f30c8f
        public_6f30c77 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6f30c8f
        public_6f30c83 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6f30c83
        public_6f30c8f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f30c92 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x20]
        mov bl, 1
        cmp cl, bl
        jne public_6f30f0e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6f30f07
        nop 
        public_6f30cb0 : nop
        cmp byte ptr ds : [eax+0x20], bl
        jne public_6f30f07
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f30d6f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f30d1b
        mov byte ptr ds : [ecx+0x20], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f30cef
        mov dword ptr ds : [esi+4], ecx
        public_6f30cef : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f30d02
        mov dword ptr ds : [esi+4], edx
        jmp public_6f30d10
        public_6f30d02 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f30d0d
        mov dword ptr ds : [esi], edx
        jmp public_6f30d10
        public_6f30d0d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f30d10 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f30d1b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f30d2e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        je public_6f30dd9
        public_6f30d2e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f30e0c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f30d55
        mov dword ptr ds : [esi+4], ecx
        public_6f30d55 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f30df1
        mov dword ptr ds : [esi+4], edx
        jmp public_6f30e00
        public_6f30d6f : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f30dc2
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f30d95
        mov dword ptr ds : [esi+4], ecx
        public_6f30d95 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f30da8
        mov dword ptr ds : [esi+4], edx
        jmp public_6f30db7
        public_6f30da8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f30db5
        mov dword ptr ds : [esi+8], edx
        jmp public_6f30db7
        public_6f30db5 : nop
        mov dword ptr ds : [esi], edx
        public_6f30db7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f30dc2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f30e68
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f30e68
        public_6f30dd9 : nop
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f30cb0
        jmp public_6f30f07
        public_6f30df1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f30dfe
        mov dword ptr ds : [esi+8], edx
        jmp public_6f30e00
        public_6f30dfe : nop
        mov dword ptr ds : [esi], edx
        public_6f30e00 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f30e0c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f30e36
        mov dword ptr ds : [esi+4], ecx
        public_6f30e36 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f30e4e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f30f04
        public_6f30e4e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f30e5e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f30f04
        public_6f30e5e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f30f04
        public_6f30e68 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f30eb6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f30e8b
        mov dword ptr ds : [esi+4], ecx
        public_6f30e8b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f30e9e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f30eac
        public_6f30e9e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f30ea9
        mov dword ptr ds : [esi], edx
        jmp public_6f30eac
        public_6f30ea9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f30eac : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f30eb6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f30edf
        mov dword ptr ds : [esi+4], ecx
        public_6f30edf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f30ef2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f30f01
        public_6f30ef2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f30eff
        mov dword ptr ds : [esi+8], edx
        jmp public_6f30f01
        public_6f30eff : nop
        mov dword ptr ds : [esi], edx
        public_6f30f01 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f30f04 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f30f07 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x20], bl
        public_6f30f0e : nop
        lea ecx, ds:[esi+0xC]
        call public_6f98760
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
        UNREACHABLE_TRAP(0x6f30b60)
    }
}

#undef public_6f30b84
#undef public_6f30ba2
#undef public_6f30bad
#undef public_6f30bb6
#undef public_6f30bc1
#undef public_6f30bdd
#undef public_6f30bf4
#undef public_6f30c01
#undef public_6f30c0c
#undef public_6f30c0f
#undef public_6f30c27
#undef public_6f30c32
#undef public_6f30c35
#undef public_6f30c4a
#undef public_6f30c55
#undef public_6f30c60
#undef public_6f30c63
#undef public_6f30c77
#undef public_6f30c83
#undef public_6f30c8f
#undef public_6f30c92
#undef public_6f30cb0
#undef public_6f30cef
#undef public_6f30d02
#undef public_6f30d0d
#undef public_6f30d10
#undef public_6f30d1b
#undef public_6f30d2e
#undef public_6f30d55
#undef public_6f30d6f
#undef public_6f30d95
#undef public_6f30da8
#undef public_6f30db5
#undef public_6f30db7
#undef public_6f30dc2
#undef public_6f30dd9
#undef public_6f30df1
#undef public_6f30dfe
#undef public_6f30e00
#undef public_6f30e0c
#undef public_6f30e36
#undef public_6f30e4e
#undef public_6f30e5e
#undef public_6f30e68
#undef public_6f30e8b
#undef public_6f30e9e
#undef public_6f30ea9
#undef public_6f30eac
#undef public_6f30eb6
#undef public_6f30edf
#undef public_6f30ef2
#undef public_6f30eff
#undef public_6f30f01
#undef public_6f30f04
#undef public_6f30f07
#undef public_6f30f0e
