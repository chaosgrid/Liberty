#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404b80);
CLANG_FORWARD_PROC_SYMBOL(public_405800);
CLANG_FORWARD_PROC_SYMBOL(public_405d00);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_404ba4 _public_404ba4
#define public_404bc2 _public_404bc2
#define public_404bcd _public_404bcd
#define public_404bd6 _public_404bd6
#define public_404be1 _public_404be1
#define public_404bfd _public_404bfd
#define public_404c14 _public_404c14
#define public_404c21 _public_404c21
#define public_404c2c _public_404c2c
#define public_404c2f _public_404c2f
#define public_404c47 _public_404c47
#define public_404c52 _public_404c52
#define public_404c55 _public_404c55
#define public_404c6a _public_404c6a
#define public_404c75 _public_404c75
#define public_404c80 _public_404c80
#define public_404c83 _public_404c83
#define public_404c97 _public_404c97
#define public_404ca3 _public_404ca3
#define public_404caf _public_404caf
#define public_404cb2 _public_404cb2
#define public_404cd0 _public_404cd0
#define public_404d0f _public_404d0f
#define public_404d22 _public_404d22
#define public_404d2d _public_404d2d
#define public_404d30 _public_404d30
#define public_404d3b _public_404d3b
#define public_404d4e _public_404d4e
#define public_404d75 _public_404d75
#define public_404d8f _public_404d8f
#define public_404db5 _public_404db5
#define public_404dc8 _public_404dc8
#define public_404dd5 _public_404dd5
#define public_404dd7 _public_404dd7
#define public_404de2 _public_404de2
#define public_404df9 _public_404df9
#define public_404e11 _public_404e11
#define public_404e1e _public_404e1e
#define public_404e20 _public_404e20
#define public_404e2c _public_404e2c
#define public_404e56 _public_404e56
#define public_404e6e _public_404e6e
#define public_404e7e _public_404e7e
#define public_404e88 _public_404e88
#define public_404eab _public_404eab
#define public_404ebe _public_404ebe
#define public_404ec9 _public_404ec9
#define public_404ecc _public_404ecc
#define public_404ed6 _public_404ed6
#define public_404eff _public_404eff
#define public_404f12 _public_404f12
#define public_404f1f _public_404f1f
#define public_404f21 _public_404f21
#define public_404f24 _public_404f24
#define public_404f27 _public_404f27
#define public_404f2e _public_404f2e

PROC_DECLARE(0x404b80, internal_404b80, public_404b80);
extern "C" NAKED register_t __cdecl internal_404b80()
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
        call public_405800
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_404bc2
        mov eax, dword ptr ds : [esi+8]
        public_404ba4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_404c47
        mov dword ptr ds : [ecx+4], eax
        jmp public_404c55
        public_404bc2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_404bcd
        mov eax, edx
        jmp public_404ba4
        public_404bcd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_404be1
        public_404bd6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_404bd6
        public_404be1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_404ba4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_404bfd
        mov dword ptr ds : [eax+4], ecx
        jmp public_404c14
        public_404bfd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_404c14 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_404c21
        mov dword ptr ds : [edx+4], ecx
        jmp public_404c2f
        public_404c21 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_404c2c
        mov dword ptr ds : [edx], ecx
        jmp public_404c2f
        public_404c2c : nop
        mov dword ptr ds : [edx+8], ecx
        public_404c2f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x20]
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [ecx+0x20], bl
        mov byte ptr ds : [esi+0x20], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_404cb2
        public_404c47 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_404c52
        mov dword ptr ds : [ecx], eax
        jmp public_404c55
        public_404c52 : nop
        mov dword ptr ds : [ecx+8], eax
        public_404c55 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_404c83
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_404c6a
        mov edx, dword ptr ds : [esi+4]
        jmp public_404c80
        public_404c6a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_404c80
        public_404c75 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_404c75
        public_404c80 : nop
        mov dword ptr ss : [ebp], edx
        public_404c83 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_404cb2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_404c97
        mov edx, dword ptr ds : [esi+4]
        jmp public_404caf
        public_404c97 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_404caf
        public_404ca3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_404ca3
        public_404caf : nop
        mov dword ptr ss : [ebp+8], edx
        public_404cb2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x20]
        mov bl, 1
        cmp cl, bl
        jne public_404f2e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_404f27
        nop 
        public_404cd0 : nop
        cmp byte ptr ds : [eax+0x20], bl
        jne public_404f27
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_404d8f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_404d3b
        mov byte ptr ds : [ecx+0x20], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_404d0f
        mov dword ptr ds : [esi+4], ecx
        public_404d0f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_404d22
        mov dword ptr ds : [esi+4], edx
        jmp public_404d30
        public_404d22 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_404d2d
        mov dword ptr ds : [esi], edx
        jmp public_404d30
        public_404d2d : nop
        mov dword ptr ds : [esi+8], edx
        public_404d30 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_404d3b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_404d4e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        je public_404df9
        public_404d4e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_404e2c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_404d75
        mov dword ptr ds : [esi+4], ecx
        public_404d75 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_404e11
        mov dword ptr ds : [esi+4], edx
        jmp public_404e20
        public_404d8f : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_404de2
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_404db5
        mov dword ptr ds : [esi+4], ecx
        public_404db5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_404dc8
        mov dword ptr ds : [esi+4], edx
        jmp public_404dd7
        public_404dc8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_404dd5
        mov dword ptr ds : [esi+8], edx
        jmp public_404dd7
        public_404dd5 : nop
        mov dword ptr ds : [esi], edx
        public_404dd7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_404de2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_404e88
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_404e88
        public_404df9 : nop
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_404cd0
        jmp public_404f27
        public_404e11 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_404e1e
        mov dword ptr ds : [esi+8], edx
        jmp public_404e20
        public_404e1e : nop
        mov dword ptr ds : [esi], edx
        public_404e20 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_404e2c : nop
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
        je public_404e56
        mov dword ptr ds : [esi+4], ecx
        public_404e56 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_404e6e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_404f24
        public_404e6e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_404e7e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_404f24
        public_404e7e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_404f24
        public_404e88 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_404ed6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_404eab
        mov dword ptr ds : [esi+4], ecx
        public_404eab : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_404ebe
        mov dword ptr ds : [esi+4], edx
        jmp public_404ecc
        public_404ebe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_404ec9
        mov dword ptr ds : [esi], edx
        jmp public_404ecc
        public_404ec9 : nop
        mov dword ptr ds : [esi+8], edx
        public_404ecc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_404ed6 : nop
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
        je public_404eff
        mov dword ptr ds : [esi+4], ecx
        public_404eff : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_404f12
        mov dword ptr ds : [esi+4], edx
        jmp public_404f21
        public_404f12 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_404f1f
        mov dword ptr ds : [esi+8], edx
        jmp public_404f21
        public_404f1f : nop
        mov dword ptr ds : [esi], edx
        public_404f21 : nop
        mov dword ptr ds : [edx+8], ecx
        public_404f24 : nop
        mov dword ptr ds : [ecx+4], edx
        public_404f27 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x20], bl
        public_404f2e : nop
        lea ecx, ds:[esi+0xC]
        call public_405d00
        push esi
        call public_418978
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
        UNREACHABLE_TRAP(0x404b80)
    }
}

#undef public_404ba4
#undef public_404bc2
#undef public_404bcd
#undef public_404bd6
#undef public_404be1
#undef public_404bfd
#undef public_404c14
#undef public_404c21
#undef public_404c2c
#undef public_404c2f
#undef public_404c47
#undef public_404c52
#undef public_404c55
#undef public_404c6a
#undef public_404c75
#undef public_404c80
#undef public_404c83
#undef public_404c97
#undef public_404ca3
#undef public_404caf
#undef public_404cb2
#undef public_404cd0
#undef public_404d0f
#undef public_404d22
#undef public_404d2d
#undef public_404d30
#undef public_404d3b
#undef public_404d4e
#undef public_404d75
#undef public_404d8f
#undef public_404db5
#undef public_404dc8
#undef public_404dd5
#undef public_404dd7
#undef public_404de2
#undef public_404df9
#undef public_404e11
#undef public_404e1e
#undef public_404e20
#undef public_404e2c
#undef public_404e56
#undef public_404e6e
#undef public_404e7e
#undef public_404e88
#undef public_404eab
#undef public_404ebe
#undef public_404ec9
#undef public_404ecc
#undef public_404ed6
#undef public_404eff
#undef public_404f12
#undef public_404f1f
#undef public_404f21
#undef public_404f24
#undef public_404f27
#undef public_404f2e
