#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f54960);
CLANG_FORWARD_PROC_SYMBOL(public_6f552c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f54984 _public_6f54984
#define public_6f549a2 _public_6f549a2
#define public_6f549ad _public_6f549ad
#define public_6f549b6 _public_6f549b6
#define public_6f549c1 _public_6f549c1
#define public_6f549dd _public_6f549dd
#define public_6f549f4 _public_6f549f4
#define public_6f54a01 _public_6f54a01
#define public_6f54a0c _public_6f54a0c
#define public_6f54a0f _public_6f54a0f
#define public_6f54a27 _public_6f54a27
#define public_6f54a32 _public_6f54a32
#define public_6f54a35 _public_6f54a35
#define public_6f54a4a _public_6f54a4a
#define public_6f54a55 _public_6f54a55
#define public_6f54a60 _public_6f54a60
#define public_6f54a63 _public_6f54a63
#define public_6f54a77 _public_6f54a77
#define public_6f54a83 _public_6f54a83
#define public_6f54a8f _public_6f54a8f
#define public_6f54a92 _public_6f54a92
#define public_6f54ab0 _public_6f54ab0
#define public_6f54aef _public_6f54aef
#define public_6f54b02 _public_6f54b02
#define public_6f54b0d _public_6f54b0d
#define public_6f54b10 _public_6f54b10
#define public_6f54b1b _public_6f54b1b
#define public_6f54b2e _public_6f54b2e
#define public_6f54b55 _public_6f54b55
#define public_6f54b6f _public_6f54b6f
#define public_6f54b95 _public_6f54b95
#define public_6f54ba8 _public_6f54ba8
#define public_6f54bb5 _public_6f54bb5
#define public_6f54bb7 _public_6f54bb7
#define public_6f54bc2 _public_6f54bc2
#define public_6f54bd9 _public_6f54bd9
#define public_6f54bf1 _public_6f54bf1
#define public_6f54bfe _public_6f54bfe
#define public_6f54c00 _public_6f54c00
#define public_6f54c0c _public_6f54c0c
#define public_6f54c36 _public_6f54c36
#define public_6f54c4e _public_6f54c4e
#define public_6f54c5e _public_6f54c5e
#define public_6f54c68 _public_6f54c68
#define public_6f54c8b _public_6f54c8b
#define public_6f54c9e _public_6f54c9e
#define public_6f54ca9 _public_6f54ca9
#define public_6f54cac _public_6f54cac
#define public_6f54cb6 _public_6f54cb6
#define public_6f54cdf _public_6f54cdf
#define public_6f54cf2 _public_6f54cf2
#define public_6f54cff _public_6f54cff
#define public_6f54d01 _public_6f54d01
#define public_6f54d04 _public_6f54d04
#define public_6f54d07 _public_6f54d07
#define public_6f54d0e _public_6f54d0e

PROC_DECLARE(0x6f54960, internal_6f54960, public_6f54960);
extern "C" NAKED register_t __cdecl internal_6f54960()
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
        call public_6f552c0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f549a2
        mov eax, dword ptr ds : [esi+8]
        public_6f54984 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f54a27
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f54a35
        public_6f549a2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f549ad
        mov eax, edx
        jmp public_6f54984
        public_6f549ad : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        jne public_6f549c1
        public_6f549b6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        je public_6f549b6
        public_6f549c1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f54984
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f549dd
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f549f4
        public_6f549dd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f549f4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f54a01
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f54a0f
        public_6f54a01 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f54a0c
        mov dword ptr ds : [edx], ecx
        jmp public_6f54a0f
        public_6f54a0c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f54a0f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x30]
        mov dl, byte ptr ds : [ecx+0x30]
        mov byte ptr ds : [ecx+0x30], bl
        mov byte ptr ds : [esi+0x30], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f54a92
        public_6f54a27 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f54a32
        mov dword ptr ds : [ecx], eax
        jmp public_6f54a35
        public_6f54a32 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f54a35 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f54a63
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f54a4a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f54a60
        public_6f54a4a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x31]
        test bl, bl
        mov edx, eax
        jne public_6f54a60
        public_6f54a55 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x31]
        test bl, bl
        je public_6f54a55
        public_6f54a60 : nop
        mov dword ptr ss : [ebp], edx
        public_6f54a63 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f54a92
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f54a77
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f54a8f
        public_6f54a77 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x31]
        test bl, bl
        mov edx, eax
        jne public_6f54a8f
        public_6f54a83 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x31]
        test bl, bl
        je public_6f54a83
        public_6f54a8f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f54a92 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x30]
        mov bl, 1
        cmp cl, bl
        jne public_6f54d0e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6f54d07
        nop 
        public_6f54ab0 : nop
        cmp byte ptr ds : [eax+0x30], bl
        jne public_6f54d07
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f54b6f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_6f54b1b
        mov byte ptr ds : [ecx+0x30], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x30], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f54aef
        mov dword ptr ds : [esi+4], ecx
        public_6f54aef : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f54b02
        mov dword ptr ds : [esi+4], edx
        jmp public_6f54b10
        public_6f54b02 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f54b0d
        mov dword ptr ds : [esi], edx
        jmp public_6f54b10
        public_6f54b0d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f54b10 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f54b1b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x30], bl
        jne public_6f54b2e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x30], bl
        je public_6f54bd9
        public_6f54b2e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x30], bl
        jne public_6f54c0c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x30], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x30], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f54b55
        mov dword ptr ds : [esi+4], ecx
        public_6f54b55 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f54bf1
        mov dword ptr ds : [esi+4], edx
        jmp public_6f54c00
        public_6f54b6f : nop
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_6f54bc2
        mov byte ptr ds : [ecx+0x30], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f54b95
        mov dword ptr ds : [esi+4], ecx
        public_6f54b95 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f54ba8
        mov dword ptr ds : [esi+4], edx
        jmp public_6f54bb7
        public_6f54ba8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f54bb5
        mov dword ptr ds : [esi+8], edx
        jmp public_6f54bb7
        public_6f54bb5 : nop
        mov dword ptr ds : [esi], edx
        public_6f54bb7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f54bc2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x30], bl
        jne public_6f54c68
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x30], bl
        jne public_6f54c68
        public_6f54bd9 : nop
        mov byte ptr ds : [ecx+0x30], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f54ab0
        jmp public_6f54d07
        public_6f54bf1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f54bfe
        mov dword ptr ds : [esi+8], edx
        jmp public_6f54c00
        public_6f54bfe : nop
        mov dword ptr ds : [esi], edx
        public_6f54c00 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f54c0c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x30]
        mov byte ptr ds : [ecx+0x30], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x30], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x30], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f54c36
        mov dword ptr ds : [esi+4], ecx
        public_6f54c36 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f54c4e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f54d04
        public_6f54c4e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f54c5e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f54d04
        public_6f54c5e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f54d04
        public_6f54c68 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x30], bl
        jne public_6f54cb6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x30], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x30], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f54c8b
        mov dword ptr ds : [esi+4], ecx
        public_6f54c8b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f54c9e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f54cac
        public_6f54c9e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f54ca9
        mov dword ptr ds : [esi], edx
        jmp public_6f54cac
        public_6f54ca9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f54cac : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f54cb6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x30]
        mov byte ptr ds : [ecx+0x30], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x30], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x30], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f54cdf
        mov dword ptr ds : [esi+4], ecx
        public_6f54cdf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f54cf2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f54d01
        public_6f54cf2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f54cff
        mov dword ptr ds : [esi+8], edx
        jmp public_6f54d01
        public_6f54cff : nop
        mov dword ptr ds : [esi], edx
        public_6f54d01 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f54d04 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f54d07 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x30], bl
        public_6f54d0e : nop
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
        UNREACHABLE_TRAP(0x6f54960)
    }
}

#undef public_6f54984
#undef public_6f549a2
#undef public_6f549ad
#undef public_6f549b6
#undef public_6f549c1
#undef public_6f549dd
#undef public_6f549f4
#undef public_6f54a01
#undef public_6f54a0c
#undef public_6f54a0f
#undef public_6f54a27
#undef public_6f54a32
#undef public_6f54a35
#undef public_6f54a4a
#undef public_6f54a55
#undef public_6f54a60
#undef public_6f54a63
#undef public_6f54a77
#undef public_6f54a83
#undef public_6f54a8f
#undef public_6f54a92
#undef public_6f54ab0
#undef public_6f54aef
#undef public_6f54b02
#undef public_6f54b0d
#undef public_6f54b10
#undef public_6f54b1b
#undef public_6f54b2e
#undef public_6f54b55
#undef public_6f54b6f
#undef public_6f54b95
#undef public_6f54ba8
#undef public_6f54bb5
#undef public_6f54bb7
#undef public_6f54bc2
#undef public_6f54bd9
#undef public_6f54bf1
#undef public_6f54bfe
#undef public_6f54c00
#undef public_6f54c0c
#undef public_6f54c36
#undef public_6f54c4e
#undef public_6f54c5e
#undef public_6f54c68
#undef public_6f54c8b
#undef public_6f54c9e
#undef public_6f54ca9
#undef public_6f54cac
#undef public_6f54cb6
#undef public_6f54cdf
#undef public_6f54cf2
#undef public_6f54cff
#undef public_6f54d01
#undef public_6f54d04
#undef public_6f54d07
#undef public_6f54d0e
