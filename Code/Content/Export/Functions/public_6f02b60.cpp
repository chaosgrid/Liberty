#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f02660);
CLANG_FORWARD_PROC_SYMBOL(public_6f02b60);
CLANG_FORWARD_PROC_SYMBOL(public_6f03670);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f02b84 _public_6f02b84
#define public_6f02ba2 _public_6f02ba2
#define public_6f02bad _public_6f02bad
#define public_6f02bb6 _public_6f02bb6
#define public_6f02bc1 _public_6f02bc1
#define public_6f02bdd _public_6f02bdd
#define public_6f02bf4 _public_6f02bf4
#define public_6f02c01 _public_6f02c01
#define public_6f02c0c _public_6f02c0c
#define public_6f02c0f _public_6f02c0f
#define public_6f02c27 _public_6f02c27
#define public_6f02c32 _public_6f02c32
#define public_6f02c35 _public_6f02c35
#define public_6f02c4a _public_6f02c4a
#define public_6f02c55 _public_6f02c55
#define public_6f02c60 _public_6f02c60
#define public_6f02c63 _public_6f02c63
#define public_6f02c77 _public_6f02c77
#define public_6f02c83 _public_6f02c83
#define public_6f02c8f _public_6f02c8f
#define public_6f02c92 _public_6f02c92
#define public_6f02cb0 _public_6f02cb0
#define public_6f02cef _public_6f02cef
#define public_6f02d02 _public_6f02d02
#define public_6f02d0d _public_6f02d0d
#define public_6f02d10 _public_6f02d10
#define public_6f02d1b _public_6f02d1b
#define public_6f02d2e _public_6f02d2e
#define public_6f02d55 _public_6f02d55
#define public_6f02d6f _public_6f02d6f
#define public_6f02d95 _public_6f02d95
#define public_6f02da8 _public_6f02da8
#define public_6f02db5 _public_6f02db5
#define public_6f02db7 _public_6f02db7
#define public_6f02dc2 _public_6f02dc2
#define public_6f02dd9 _public_6f02dd9
#define public_6f02df1 _public_6f02df1
#define public_6f02dfe _public_6f02dfe
#define public_6f02e00 _public_6f02e00
#define public_6f02e0c _public_6f02e0c
#define public_6f02e36 _public_6f02e36
#define public_6f02e4e _public_6f02e4e
#define public_6f02e5e _public_6f02e5e
#define public_6f02e68 _public_6f02e68
#define public_6f02e8b _public_6f02e8b
#define public_6f02e9e _public_6f02e9e
#define public_6f02ea9 _public_6f02ea9
#define public_6f02eac _public_6f02eac
#define public_6f02eb6 _public_6f02eb6
#define public_6f02edf _public_6f02edf
#define public_6f02ef2 _public_6f02ef2
#define public_6f02eff _public_6f02eff
#define public_6f02f01 _public_6f02f01
#define public_6f02f04 _public_6f02f04
#define public_6f02f07 _public_6f02f07
#define public_6f02f0e _public_6f02f0e

PROC_DECLARE(0x6f02b60, internal_6f02b60, public_6f02b60);
extern "C" NAKED register_t __cdecl internal_6f02b60()
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
        jne public_6f02ba2
        mov eax, dword ptr ds : [esi+8]
        public_6f02b84 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f02c27
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f02c35
        public_6f02ba2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f02bad
        mov eax, edx
        jmp public_6f02b84
        public_6f02bad : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6f02bc1
        public_6f02bb6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6f02bb6
        public_6f02bc1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f02b84
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f02bdd
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f02bf4
        public_6f02bdd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f02bf4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f02c01
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f02c0f
        public_6f02c01 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f02c0c
        mov dword ptr ds : [edx], ecx
        jmp public_6f02c0f
        public_6f02c0c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f02c0f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x20]
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [ecx+0x20], bl
        mov byte ptr ds : [esi+0x20], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f02c92
        public_6f02c27 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f02c32
        mov dword ptr ds : [ecx], eax
        jmp public_6f02c35
        public_6f02c32 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f02c35 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f02c63
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f02c4a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f02c60
        public_6f02c4a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6f02c60
        public_6f02c55 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6f02c55
        public_6f02c60 : nop
        mov dword ptr ss : [ebp], edx
        public_6f02c63 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f02c92
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f02c77
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f02c8f
        public_6f02c77 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6f02c8f
        public_6f02c83 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6f02c83
        public_6f02c8f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f02c92 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x20]
        mov bl, 1
        cmp cl, bl
        jne public_6f02f0e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6f02f07
        nop 
        public_6f02cb0 : nop
        cmp byte ptr ds : [eax+0x20], bl
        jne public_6f02f07
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f02d6f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f02d1b
        mov byte ptr ds : [ecx+0x20], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f02cef
        mov dword ptr ds : [esi+4], ecx
        public_6f02cef : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f02d02
        mov dword ptr ds : [esi+4], edx
        jmp public_6f02d10
        public_6f02d02 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f02d0d
        mov dword ptr ds : [esi], edx
        jmp public_6f02d10
        public_6f02d0d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f02d10 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f02d1b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f02d2e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        je public_6f02dd9
        public_6f02d2e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f02e0c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f02d55
        mov dword ptr ds : [esi+4], ecx
        public_6f02d55 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f02df1
        mov dword ptr ds : [esi+4], edx
        jmp public_6f02e00
        public_6f02d6f : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f02dc2
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f02d95
        mov dword ptr ds : [esi+4], ecx
        public_6f02d95 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f02da8
        mov dword ptr ds : [esi+4], edx
        jmp public_6f02db7
        public_6f02da8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f02db5
        mov dword ptr ds : [esi+8], edx
        jmp public_6f02db7
        public_6f02db5 : nop
        mov dword ptr ds : [esi], edx
        public_6f02db7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f02dc2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f02e68
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f02e68
        public_6f02dd9 : nop
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f02cb0
        jmp public_6f02f07
        public_6f02df1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f02dfe
        mov dword ptr ds : [esi+8], edx
        jmp public_6f02e00
        public_6f02dfe : nop
        mov dword ptr ds : [esi], edx
        public_6f02e00 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f02e0c : nop
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
        je public_6f02e36
        mov dword ptr ds : [esi+4], ecx
        public_6f02e36 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f02e4e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f02f04
        public_6f02e4e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f02e5e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f02f04
        public_6f02e5e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f02f04
        public_6f02e68 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f02eb6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f02e8b
        mov dword ptr ds : [esi+4], ecx
        public_6f02e8b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f02e9e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f02eac
        public_6f02e9e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f02ea9
        mov dword ptr ds : [esi], edx
        jmp public_6f02eac
        public_6f02ea9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f02eac : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f02eb6 : nop
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
        je public_6f02edf
        mov dword ptr ds : [esi+4], ecx
        public_6f02edf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f02ef2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f02f01
        public_6f02ef2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f02eff
        mov dword ptr ds : [esi+8], edx
        jmp public_6f02f01
        public_6f02eff : nop
        mov dword ptr ds : [esi], edx
        public_6f02f01 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f02f04 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f02f07 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x20], bl
        public_6f02f0e : nop
        lea ecx, ds:[esi+0xC]
        call public_6f02660
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
        UNREACHABLE_TRAP(0x6f02b60)
    }
}

#undef public_6f02b84
#undef public_6f02ba2
#undef public_6f02bad
#undef public_6f02bb6
#undef public_6f02bc1
#undef public_6f02bdd
#undef public_6f02bf4
#undef public_6f02c01
#undef public_6f02c0c
#undef public_6f02c0f
#undef public_6f02c27
#undef public_6f02c32
#undef public_6f02c35
#undef public_6f02c4a
#undef public_6f02c55
#undef public_6f02c60
#undef public_6f02c63
#undef public_6f02c77
#undef public_6f02c83
#undef public_6f02c8f
#undef public_6f02c92
#undef public_6f02cb0
#undef public_6f02cef
#undef public_6f02d02
#undef public_6f02d0d
#undef public_6f02d10
#undef public_6f02d1b
#undef public_6f02d2e
#undef public_6f02d55
#undef public_6f02d6f
#undef public_6f02d95
#undef public_6f02da8
#undef public_6f02db5
#undef public_6f02db7
#undef public_6f02dc2
#undef public_6f02dd9
#undef public_6f02df1
#undef public_6f02dfe
#undef public_6f02e00
#undef public_6f02e0c
#undef public_6f02e36
#undef public_6f02e4e
#undef public_6f02e5e
#undef public_6f02e68
#undef public_6f02e8b
#undef public_6f02e9e
#undef public_6f02ea9
#undef public_6f02eac
#undef public_6f02eb6
#undef public_6f02edf
#undef public_6f02ef2
#undef public_6f02eff
#undef public_6f02f01
#undef public_6f02f04
#undef public_6f02f07
#undef public_6f02f0e
