#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6316470);
CLANG_FORWARD_PROC_SYMBOL(public_6316e60);
CLANG_FORWARD_PROC_SYMBOL(public_6317300);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6316e84 _public_6316e84
#define public_6316ea2 _public_6316ea2
#define public_6316ead _public_6316ead
#define public_6316eb6 _public_6316eb6
#define public_6316ec1 _public_6316ec1
#define public_6316edd _public_6316edd
#define public_6316ef4 _public_6316ef4
#define public_6316f01 _public_6316f01
#define public_6316f0c _public_6316f0c
#define public_6316f0f _public_6316f0f
#define public_6316f27 _public_6316f27
#define public_6316f32 _public_6316f32
#define public_6316f35 _public_6316f35
#define public_6316f4a _public_6316f4a
#define public_6316f55 _public_6316f55
#define public_6316f60 _public_6316f60
#define public_6316f63 _public_6316f63
#define public_6316f77 _public_6316f77
#define public_6316f83 _public_6316f83
#define public_6316f8f _public_6316f8f
#define public_6316f92 _public_6316f92
#define public_6316fb0 _public_6316fb0
#define public_6316fef _public_6316fef
#define public_6317002 _public_6317002
#define public_631700d _public_631700d
#define public_6317010 _public_6317010
#define public_631701b _public_631701b
#define public_631702e _public_631702e
#define public_6317055 _public_6317055
#define public_631706f _public_631706f
#define public_6317095 _public_6317095
#define public_63170a8 _public_63170a8
#define public_63170b5 _public_63170b5
#define public_63170b7 _public_63170b7
#define public_63170c2 _public_63170c2
#define public_63170d9 _public_63170d9
#define public_63170f1 _public_63170f1
#define public_63170fe _public_63170fe
#define public_6317100 _public_6317100
#define public_631710c _public_631710c
#define public_6317136 _public_6317136
#define public_631714e _public_631714e
#define public_631715e _public_631715e
#define public_6317168 _public_6317168
#define public_631718b _public_631718b
#define public_631719e _public_631719e
#define public_63171a9 _public_63171a9
#define public_63171ac _public_63171ac
#define public_63171b6 _public_63171b6
#define public_63171df _public_63171df
#define public_63171f2 _public_63171f2
#define public_63171ff _public_63171ff
#define public_6317201 _public_6317201
#define public_6317204 _public_6317204
#define public_6317207 _public_6317207
#define public_631720e _public_631720e

PROC_DECLARE(0x6316e60, internal_6316e60, public_6316e60);
extern "C" NAKED register_t __cdecl internal_6316e60()
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
        call public_6317300
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6316ea2
        mov eax, dword ptr ds : [esi+8]
        public_6316e84 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6316f27
        mov dword ptr ds : [ecx+4], eax
        jmp public_6316f35
        public_6316ea2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6316ead
        mov eax, edx
        jmp public_6316e84
        public_6316ead : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x61]
        test bl, bl
        jne public_6316ec1
        public_6316eb6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x61]
        test bl, bl
        je public_6316eb6
        public_6316ec1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6316e84
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6316edd
        mov dword ptr ds : [eax+4], ecx
        jmp public_6316ef4
        public_6316edd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6316ef4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6316f01
        mov dword ptr ds : [edx+4], ecx
        jmp public_6316f0f
        public_6316f01 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6316f0c
        mov dword ptr ds : [edx], ecx
        jmp public_6316f0f
        public_6316f0c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6316f0f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x60]
        mov dl, byte ptr ds : [ecx+0x60]
        mov byte ptr ds : [ecx+0x60], bl
        mov byte ptr ds : [esi+0x60], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6316f92
        public_6316f27 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6316f32
        mov dword ptr ds : [ecx], eax
        jmp public_6316f35
        public_6316f32 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6316f35 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6316f63
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6316f4a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6316f60
        public_6316f4a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x61]
        test bl, bl
        mov edx, eax
        jne public_6316f60
        public_6316f55 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x61]
        test bl, bl
        je public_6316f55
        public_6316f60 : nop
        mov dword ptr ss : [ebp], edx
        public_6316f63 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6316f92
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6316f77
        mov edx, dword ptr ds : [esi+4]
        jmp public_6316f8f
        public_6316f77 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x61]
        test bl, bl
        mov edx, eax
        jne public_6316f8f
        public_6316f83 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x61]
        test bl, bl
        je public_6316f83
        public_6316f8f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6316f92 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x60]
        mov bl, 1
        cmp cl, bl
        jne public_631720e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6317207
        nop 
        public_6316fb0 : nop
        cmp byte ptr ds : [eax+0x60], bl
        jne public_6317207
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_631706f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x60]
        test dl, dl
        jne public_631701b
        mov byte ptr ds : [ecx+0x60], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x60], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6316fef
        mov dword ptr ds : [esi+4], ecx
        public_6316fef : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6317002
        mov dword ptr ds : [esi+4], edx
        jmp public_6317010
        public_6317002 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_631700d
        mov dword ptr ds : [esi], edx
        jmp public_6317010
        public_631700d : nop
        mov dword ptr ds : [esi+8], edx
        public_6317010 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_631701b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x60], bl
        jne public_631702e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x60], bl
        je public_63170d9
        public_631702e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x60], bl
        jne public_631710c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x60], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x60], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6317055
        mov dword ptr ds : [esi+4], ecx
        public_6317055 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_63170f1
        mov dword ptr ds : [esi+4], edx
        jmp public_6317100
        public_631706f : nop
        mov dl, byte ptr ds : [ecx+0x60]
        test dl, dl
        jne public_63170c2
        mov byte ptr ds : [ecx+0x60], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x60], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6317095
        mov dword ptr ds : [esi+4], ecx
        public_6317095 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_63170a8
        mov dword ptr ds : [esi+4], edx
        jmp public_63170b7
        public_63170a8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_63170b5
        mov dword ptr ds : [esi+8], edx
        jmp public_63170b7
        public_63170b5 : nop
        mov dword ptr ds : [esi], edx
        public_63170b7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_63170c2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x60], bl
        jne public_6317168
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x60], bl
        jne public_6317168
        public_63170d9 : nop
        mov byte ptr ds : [ecx+0x60], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6316fb0
        jmp public_6317207
        public_63170f1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_63170fe
        mov dword ptr ds : [esi+8], edx
        jmp public_6317100
        public_63170fe : nop
        mov dword ptr ds : [esi], edx
        public_6317100 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_631710c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x60]
        mov byte ptr ds : [ecx+0x60], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x60], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x60], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6317136
        mov dword ptr ds : [esi+4], ecx
        public_6317136 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_631714e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6317204
        public_631714e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_631715e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6317204
        public_631715e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6317204
        public_6317168 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x60], bl
        jne public_63171b6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x60], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x60], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_631718b
        mov dword ptr ds : [esi+4], ecx
        public_631718b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_631719e
        mov dword ptr ds : [esi+4], edx
        jmp public_63171ac
        public_631719e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_63171a9
        mov dword ptr ds : [esi], edx
        jmp public_63171ac
        public_63171a9 : nop
        mov dword ptr ds : [esi+8], edx
        public_63171ac : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_63171b6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x60]
        mov byte ptr ds : [ecx+0x60], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x60], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x60], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_63171df
        mov dword ptr ds : [esi+4], ecx
        public_63171df : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_63171f2
        mov dword ptr ds : [esi+4], edx
        jmp public_6317201
        public_63171f2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_63171ff
        mov dword ptr ds : [esi+8], edx
        jmp public_6317201
        public_63171ff : nop
        mov dword ptr ds : [esi], edx
        public_6317201 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6317204 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6317207 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x60], bl
        public_631720e : nop
        lea ecx, ds:[esi+0xC]
        call public_6316470
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
        UNREACHABLE_TRAP(0x6316e60)
    }
}

#undef public_6316e84
#undef public_6316ea2
#undef public_6316ead
#undef public_6316eb6
#undef public_6316ec1
#undef public_6316edd
#undef public_6316ef4
#undef public_6316f01
#undef public_6316f0c
#undef public_6316f0f
#undef public_6316f27
#undef public_6316f32
#undef public_6316f35
#undef public_6316f4a
#undef public_6316f55
#undef public_6316f60
#undef public_6316f63
#undef public_6316f77
#undef public_6316f83
#undef public_6316f8f
#undef public_6316f92
#undef public_6316fb0
#undef public_6316fef
#undef public_6317002
#undef public_631700d
#undef public_6317010
#undef public_631701b
#undef public_631702e
#undef public_6317055
#undef public_631706f
#undef public_6317095
#undef public_63170a8
#undef public_63170b5
#undef public_63170b7
#undef public_63170c2
#undef public_63170d9
#undef public_63170f1
#undef public_63170fe
#undef public_6317100
#undef public_631710c
#undef public_6317136
#undef public_631714e
#undef public_631715e
#undef public_6317168
#undef public_631718b
#undef public_631719e
#undef public_63171a9
#undef public_63171ac
#undef public_63171b6
#undef public_63171df
#undef public_63171f2
#undef public_63171ff
#undef public_6317201
#undef public_6317204
#undef public_6317207
#undef public_631720e
