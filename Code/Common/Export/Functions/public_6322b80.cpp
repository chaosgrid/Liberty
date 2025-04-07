#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631ee30);
CLANG_FORWARD_PROC_SYMBOL(public_6322b80);
CLANG_FORWARD_PROC_SYMBOL(public_63231f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6322ba4 _public_6322ba4
#define public_6322bc2 _public_6322bc2
#define public_6322bcd _public_6322bcd
#define public_6322bd6 _public_6322bd6
#define public_6322be1 _public_6322be1
#define public_6322bfd _public_6322bfd
#define public_6322c14 _public_6322c14
#define public_6322c21 _public_6322c21
#define public_6322c2c _public_6322c2c
#define public_6322c2f _public_6322c2f
#define public_6322c47 _public_6322c47
#define public_6322c52 _public_6322c52
#define public_6322c55 _public_6322c55
#define public_6322c6a _public_6322c6a
#define public_6322c75 _public_6322c75
#define public_6322c80 _public_6322c80
#define public_6322c83 _public_6322c83
#define public_6322c97 _public_6322c97
#define public_6322ca3 _public_6322ca3
#define public_6322caf _public_6322caf
#define public_6322cb2 _public_6322cb2
#define public_6322cd0 _public_6322cd0
#define public_6322d0f _public_6322d0f
#define public_6322d22 _public_6322d22
#define public_6322d2d _public_6322d2d
#define public_6322d30 _public_6322d30
#define public_6322d3b _public_6322d3b
#define public_6322d4e _public_6322d4e
#define public_6322d75 _public_6322d75
#define public_6322d8f _public_6322d8f
#define public_6322db5 _public_6322db5
#define public_6322dc8 _public_6322dc8
#define public_6322dd5 _public_6322dd5
#define public_6322dd7 _public_6322dd7
#define public_6322de2 _public_6322de2
#define public_6322df9 _public_6322df9
#define public_6322e11 _public_6322e11
#define public_6322e1e _public_6322e1e
#define public_6322e20 _public_6322e20
#define public_6322e2c _public_6322e2c
#define public_6322e56 _public_6322e56
#define public_6322e6e _public_6322e6e
#define public_6322e7e _public_6322e7e
#define public_6322e88 _public_6322e88
#define public_6322eab _public_6322eab
#define public_6322ebe _public_6322ebe
#define public_6322ec9 _public_6322ec9
#define public_6322ecc _public_6322ecc
#define public_6322ed6 _public_6322ed6
#define public_6322eff _public_6322eff
#define public_6322f12 _public_6322f12
#define public_6322f1f _public_6322f1f
#define public_6322f21 _public_6322f21
#define public_6322f24 _public_6322f24
#define public_6322f27 _public_6322f27
#define public_6322f2e _public_6322f2e

PROC_DECLARE(0x6322b80, internal_6322b80, public_6322b80);
extern "C" NAKED register_t __cdecl internal_6322b80()
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
        call public_63231f0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6322bc2
        mov eax, dword ptr ds : [esi+8]
        public_6322ba4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6322c47
        mov dword ptr ds : [ecx+4], eax
        jmp public_6322c55
        public_6322bc2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6322bcd
        mov eax, edx
        jmp public_6322ba4
        public_6322bcd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        jne public_6322be1
        public_6322bd6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        je public_6322bd6
        public_6322be1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6322ba4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6322bfd
        mov dword ptr ds : [eax+4], ecx
        jmp public_6322c14
        public_6322bfd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6322c14 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6322c21
        mov dword ptr ds : [edx+4], ecx
        jmp public_6322c2f
        public_6322c21 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6322c2c
        mov dword ptr ds : [edx], ecx
        jmp public_6322c2f
        public_6322c2c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6322c2f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x44]
        mov dl, byte ptr ds : [ecx+0x44]
        mov byte ptr ds : [ecx+0x44], bl
        mov byte ptr ds : [esi+0x44], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6322cb2
        public_6322c47 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6322c52
        mov dword ptr ds : [ecx], eax
        jmp public_6322c55
        public_6322c52 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6322c55 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6322c83
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6322c6a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6322c80
        public_6322c6a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x45]
        test bl, bl
        mov edx, eax
        jne public_6322c80
        public_6322c75 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x45]
        test bl, bl
        je public_6322c75
        public_6322c80 : nop
        mov dword ptr ss : [ebp], edx
        public_6322c83 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6322cb2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6322c97
        mov edx, dword ptr ds : [esi+4]
        jmp public_6322caf
        public_6322c97 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x45]
        test bl, bl
        mov edx, eax
        jne public_6322caf
        public_6322ca3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x45]
        test bl, bl
        je public_6322ca3
        public_6322caf : nop
        mov dword ptr ss : [ebp+8], edx
        public_6322cb2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x44]
        mov bl, 1
        cmp cl, bl
        jne public_6322f2e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6322f27
        nop 
        public_6322cd0 : nop
        cmp byte ptr ds : [eax+0x44], bl
        jne public_6322f27
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6322d8f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_6322d3b
        mov byte ptr ds : [ecx+0x44], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x44], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6322d0f
        mov dword ptr ds : [esi+4], ecx
        public_6322d0f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6322d22
        mov dword ptr ds : [esi+4], edx
        jmp public_6322d30
        public_6322d22 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6322d2d
        mov dword ptr ds : [esi], edx
        jmp public_6322d30
        public_6322d2d : nop
        mov dword ptr ds : [esi+8], edx
        public_6322d30 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6322d3b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_6322d4e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x44], bl
        je public_6322df9
        public_6322d4e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_6322e2c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x44], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x44], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6322d75
        mov dword ptr ds : [esi+4], ecx
        public_6322d75 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6322e11
        mov dword ptr ds : [esi+4], edx
        jmp public_6322e20
        public_6322d8f : nop
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_6322de2
        mov byte ptr ds : [ecx+0x44], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6322db5
        mov dword ptr ds : [esi+4], ecx
        public_6322db5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6322dc8
        mov dword ptr ds : [esi+4], edx
        jmp public_6322dd7
        public_6322dc8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6322dd5
        mov dword ptr ds : [esi+8], edx
        jmp public_6322dd7
        public_6322dd5 : nop
        mov dword ptr ds : [esi], edx
        public_6322dd7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6322de2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_6322e88
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_6322e88
        public_6322df9 : nop
        mov byte ptr ds : [ecx+0x44], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6322cd0
        jmp public_6322f27
        public_6322e11 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6322e1e
        mov dword ptr ds : [esi+8], edx
        jmp public_6322e20
        public_6322e1e : nop
        mov dword ptr ds : [esi], edx
        public_6322e20 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6322e2c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x44]
        mov byte ptr ds : [ecx+0x44], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x44], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x44], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6322e56
        mov dword ptr ds : [esi+4], ecx
        public_6322e56 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6322e6e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6322f24
        public_6322e6e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6322e7e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6322f24
        public_6322e7e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6322f24
        public_6322e88 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_6322ed6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x44], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x44], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6322eab
        mov dword ptr ds : [esi+4], ecx
        public_6322eab : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6322ebe
        mov dword ptr ds : [esi+4], edx
        jmp public_6322ecc
        public_6322ebe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6322ec9
        mov dword ptr ds : [esi], edx
        jmp public_6322ecc
        public_6322ec9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6322ecc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6322ed6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x44]
        mov byte ptr ds : [ecx+0x44], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x44], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x44], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6322eff
        mov dword ptr ds : [esi+4], ecx
        public_6322eff : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6322f12
        mov dword ptr ds : [esi+4], edx
        jmp public_6322f21
        public_6322f12 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6322f1f
        mov dword ptr ds : [esi+8], edx
        jmp public_6322f21
        public_6322f1f : nop
        mov dword ptr ds : [esi], edx
        public_6322f21 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6322f24 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6322f27 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x44], bl
        public_6322f2e : nop
        lea ecx, ds:[esi+0xC]
        call public_631ee30
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
        UNREACHABLE_TRAP(0x6322b80)
    }
}

#undef public_6322ba4
#undef public_6322bc2
#undef public_6322bcd
#undef public_6322bd6
#undef public_6322be1
#undef public_6322bfd
#undef public_6322c14
#undef public_6322c21
#undef public_6322c2c
#undef public_6322c2f
#undef public_6322c47
#undef public_6322c52
#undef public_6322c55
#undef public_6322c6a
#undef public_6322c75
#undef public_6322c80
#undef public_6322c83
#undef public_6322c97
#undef public_6322ca3
#undef public_6322caf
#undef public_6322cb2
#undef public_6322cd0
#undef public_6322d0f
#undef public_6322d22
#undef public_6322d2d
#undef public_6322d30
#undef public_6322d3b
#undef public_6322d4e
#undef public_6322d75
#undef public_6322d8f
#undef public_6322db5
#undef public_6322dc8
#undef public_6322dd5
#undef public_6322dd7
#undef public_6322de2
#undef public_6322df9
#undef public_6322e11
#undef public_6322e1e
#undef public_6322e20
#undef public_6322e2c
#undef public_6322e56
#undef public_6322e6e
#undef public_6322e7e
#undef public_6322e88
#undef public_6322eab
#undef public_6322ebe
#undef public_6322ec9
#undef public_6322ecc
#undef public_6322ed6
#undef public_6322eff
#undef public_6322f12
#undef public_6322f1f
#undef public_6322f21
#undef public_6322f24
#undef public_6322f27
#undef public_6322f2e
