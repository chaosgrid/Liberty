#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417880);
CLANG_FORWARD_PROC_SYMBOL(public_417d30);
CLANG_FORWARD_PROC_SYMBOL(public_417dc0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_4178a4 _public_4178a4
#define public_4178c2 _public_4178c2
#define public_4178cd _public_4178cd
#define public_4178d6 _public_4178d6
#define public_4178e1 _public_4178e1
#define public_4178fd _public_4178fd
#define public_417914 _public_417914
#define public_417921 _public_417921
#define public_41792c _public_41792c
#define public_41792f _public_41792f
#define public_417947 _public_417947
#define public_417952 _public_417952
#define public_417955 _public_417955
#define public_41796a _public_41796a
#define public_417975 _public_417975
#define public_417980 _public_417980
#define public_417983 _public_417983
#define public_417997 _public_417997
#define public_4179a3 _public_4179a3
#define public_4179af _public_4179af
#define public_4179b2 _public_4179b2
#define public_4179d0 _public_4179d0
#define public_417a0f _public_417a0f
#define public_417a22 _public_417a22
#define public_417a2d _public_417a2d
#define public_417a30 _public_417a30
#define public_417a3b _public_417a3b
#define public_417a4e _public_417a4e
#define public_417a75 _public_417a75
#define public_417a8f _public_417a8f
#define public_417ab5 _public_417ab5
#define public_417ac8 _public_417ac8
#define public_417ad5 _public_417ad5
#define public_417ad7 _public_417ad7
#define public_417ae2 _public_417ae2
#define public_417af9 _public_417af9
#define public_417b11 _public_417b11
#define public_417b1e _public_417b1e
#define public_417b20 _public_417b20
#define public_417b2c _public_417b2c
#define public_417b56 _public_417b56
#define public_417b6e _public_417b6e
#define public_417b7e _public_417b7e
#define public_417b88 _public_417b88
#define public_417bab _public_417bab
#define public_417bbe _public_417bbe
#define public_417bc9 _public_417bc9
#define public_417bcc _public_417bcc
#define public_417bd6 _public_417bd6
#define public_417bff _public_417bff
#define public_417c12 _public_417c12
#define public_417c1f _public_417c1f
#define public_417c21 _public_417c21
#define public_417c24 _public_417c24
#define public_417c27 _public_417c27
#define public_417c2e _public_417c2e

PROC_DECLARE(0x417880, internal_417880, public_417880);
extern "C" NAKED register_t __cdecl internal_417880()
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
        call public_417d30
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_4178c2
        mov eax, dword ptr ds : [esi+8]
        public_4178a4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_417947
        mov dword ptr ds : [ecx+4], eax
        jmp public_417955
        public_4178c2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_4178cd
        mov eax, edx
        jmp public_4178a4
        public_4178cd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        jne public_4178e1
        public_4178d6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        je public_4178d6
        public_4178e1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_4178a4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4178fd
        mov dword ptr ds : [eax+4], ecx
        jmp public_417914
        public_4178fd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_417914 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_417921
        mov dword ptr ds : [edx+4], ecx
        jmp public_41792f
        public_417921 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_41792c
        mov dword ptr ds : [edx], ecx
        jmp public_41792f
        public_41792c : nop
        mov dword ptr ds : [edx+8], ecx
        public_41792f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x28]
        mov dl, byte ptr ds : [ecx+0x28]
        mov byte ptr ds : [ecx+0x28], bl
        mov byte ptr ds : [esi+0x28], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_4179b2
        public_417947 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_417952
        mov dword ptr ds : [ecx], eax
        jmp public_417955
        public_417952 : nop
        mov dword ptr ds : [ecx+8], eax
        public_417955 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_417983
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_41796a
        mov edx, dword ptr ds : [esi+4]
        jmp public_417980
        public_41796a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        mov edx, eax
        jne public_417980
        public_417975 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        je public_417975
        public_417980 : nop
        mov dword ptr ss : [ebp], edx
        public_417983 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_4179b2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_417997
        mov edx, dword ptr ds : [esi+4]
        jmp public_4179af
        public_417997 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        mov edx, eax
        jne public_4179af
        public_4179a3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        je public_4179a3
        public_4179af : nop
        mov dword ptr ss : [ebp+8], edx
        public_4179b2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x28]
        mov bl, 1
        cmp cl, bl
        jne public_417c2e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_417c27
        nop 
        public_4179d0 : nop
        cmp byte ptr ds : [eax+0x28], bl
        jne public_417c27
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_417a8f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_417a3b
        mov byte ptr ds : [ecx+0x28], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_417a0f
        mov dword ptr ds : [esi+4], ecx
        public_417a0f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_417a22
        mov dword ptr ds : [esi+4], edx
        jmp public_417a30
        public_417a22 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_417a2d
        mov dword ptr ds : [esi], edx
        jmp public_417a30
        public_417a2d : nop
        mov dword ptr ds : [esi+8], edx
        public_417a30 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_417a3b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_417a4e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        je public_417af9
        public_417a4e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_417b2c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x28], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x28], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_417a75
        mov dword ptr ds : [esi+4], ecx
        public_417a75 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_417b11
        mov dword ptr ds : [esi+4], edx
        jmp public_417b20
        public_417a8f : nop
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_417ae2
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_417ab5
        mov dword ptr ds : [esi+4], ecx
        public_417ab5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_417ac8
        mov dword ptr ds : [esi+4], edx
        jmp public_417ad7
        public_417ac8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_417ad5
        mov dword ptr ds : [esi+8], edx
        jmp public_417ad7
        public_417ad5 : nop
        mov dword ptr ds : [esi], edx
        public_417ad7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_417ae2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_417b88
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_417b88
        public_417af9 : nop
        mov byte ptr ds : [ecx+0x28], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_4179d0
        jmp public_417c27
        public_417b11 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_417b1e
        mov dword ptr ds : [esi+8], edx
        jmp public_417b20
        public_417b1e : nop
        mov dword ptr ds : [esi], edx
        public_417b20 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_417b2c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x28]
        mov byte ptr ds : [ecx+0x28], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_417b56
        mov dword ptr ds : [esi+4], ecx
        public_417b56 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_417b6e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_417c24
        public_417b6e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_417b7e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_417c24
        public_417b7e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_417c24
        public_417b88 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_417bd6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x28], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x28], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_417bab
        mov dword ptr ds : [esi+4], ecx
        public_417bab : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_417bbe
        mov dword ptr ds : [esi+4], edx
        jmp public_417bcc
        public_417bbe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_417bc9
        mov dword ptr ds : [esi], edx
        jmp public_417bcc
        public_417bc9 : nop
        mov dword ptr ds : [esi+8], edx
        public_417bcc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_417bd6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x28]
        mov byte ptr ds : [ecx+0x28], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_417bff
        mov dword ptr ds : [esi+4], ecx
        public_417bff : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_417c12
        mov dword ptr ds : [esi+4], edx
        jmp public_417c21
        public_417c12 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_417c1f
        mov dword ptr ds : [esi+8], edx
        jmp public_417c21
        public_417c1f : nop
        mov dword ptr ds : [esi], edx
        public_417c21 : nop
        mov dword ptr ds : [edx+8], ecx
        public_417c24 : nop
        mov dword ptr ds : [ecx+4], edx
        public_417c27 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x28], bl
        public_417c2e : nop
        lea ecx, ds:[esi+0xC]
        call public_417dc0
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
        UNREACHABLE_TRAP(0x417880)
    }
}

#undef public_4178a4
#undef public_4178c2
#undef public_4178cd
#undef public_4178d6
#undef public_4178e1
#undef public_4178fd
#undef public_417914
#undef public_417921
#undef public_41792c
#undef public_41792f
#undef public_417947
#undef public_417952
#undef public_417955
#undef public_41796a
#undef public_417975
#undef public_417980
#undef public_417983
#undef public_417997
#undef public_4179a3
#undef public_4179af
#undef public_4179b2
#undef public_4179d0
#undef public_417a0f
#undef public_417a22
#undef public_417a2d
#undef public_417a30
#undef public_417a3b
#undef public_417a4e
#undef public_417a75
#undef public_417a8f
#undef public_417ab5
#undef public_417ac8
#undef public_417ad5
#undef public_417ad7
#undef public_417ae2
#undef public_417af9
#undef public_417b11
#undef public_417b1e
#undef public_417b20
#undef public_417b2c
#undef public_417b56
#undef public_417b6e
#undef public_417b7e
#undef public_417b88
#undef public_417bab
#undef public_417bbe
#undef public_417bc9
#undef public_417bcc
#undef public_417bd6
#undef public_417bff
#undef public_417c12
#undef public_417c1f
#undef public_417c21
#undef public_417c24
#undef public_417c27
#undef public_417c2e
