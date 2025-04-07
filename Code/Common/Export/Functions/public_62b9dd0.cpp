#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b9dd0);
CLANG_FORWARD_PROC_SYMBOL(public_62bae10);
CLANG_FORWARD_PROC_SYMBOL(public_62bb580);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62b9df4 _public_62b9df4
#define public_62b9e12 _public_62b9e12
#define public_62b9e1d _public_62b9e1d
#define public_62b9e26 _public_62b9e26
#define public_62b9e31 _public_62b9e31
#define public_62b9e4d _public_62b9e4d
#define public_62b9e64 _public_62b9e64
#define public_62b9e71 _public_62b9e71
#define public_62b9e7c _public_62b9e7c
#define public_62b9e7f _public_62b9e7f
#define public_62b9e97 _public_62b9e97
#define public_62b9ea2 _public_62b9ea2
#define public_62b9ea5 _public_62b9ea5
#define public_62b9eba _public_62b9eba
#define public_62b9ec5 _public_62b9ec5
#define public_62b9ed0 _public_62b9ed0
#define public_62b9ed3 _public_62b9ed3
#define public_62b9ee7 _public_62b9ee7
#define public_62b9ef3 _public_62b9ef3
#define public_62b9eff _public_62b9eff
#define public_62b9f02 _public_62b9f02
#define public_62b9f20 _public_62b9f20
#define public_62b9f5f _public_62b9f5f
#define public_62b9f72 _public_62b9f72
#define public_62b9f7d _public_62b9f7d
#define public_62b9f80 _public_62b9f80
#define public_62b9f8b _public_62b9f8b
#define public_62b9f9e _public_62b9f9e
#define public_62b9fc5 _public_62b9fc5
#define public_62b9fdf _public_62b9fdf
#define public_62ba005 _public_62ba005
#define public_62ba018 _public_62ba018
#define public_62ba025 _public_62ba025
#define public_62ba027 _public_62ba027
#define public_62ba032 _public_62ba032
#define public_62ba049 _public_62ba049
#define public_62ba061 _public_62ba061
#define public_62ba06e _public_62ba06e
#define public_62ba070 _public_62ba070
#define public_62ba07c _public_62ba07c
#define public_62ba0a6 _public_62ba0a6
#define public_62ba0be _public_62ba0be
#define public_62ba0ce _public_62ba0ce
#define public_62ba0d8 _public_62ba0d8
#define public_62ba0fb _public_62ba0fb
#define public_62ba10e _public_62ba10e
#define public_62ba119 _public_62ba119
#define public_62ba11c _public_62ba11c
#define public_62ba126 _public_62ba126
#define public_62ba14f _public_62ba14f
#define public_62ba162 _public_62ba162
#define public_62ba16f _public_62ba16f
#define public_62ba171 _public_62ba171
#define public_62ba174 _public_62ba174
#define public_62ba177 _public_62ba177
#define public_62ba17e _public_62ba17e

PROC_DECLARE(0x62b9dd0, internal_62b9dd0, public_62b9dd0);
extern "C" NAKED register_t __cdecl internal_62b9dd0()
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
        call public_62bae10
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_62b9e12
        mov eax, dword ptr ds : [esi+8]
        public_62b9df4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_62b9e97
        mov dword ptr ds : [ecx+4], eax
        jmp public_62b9ea5
        public_62b9e12 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_62b9e1d
        mov eax, edx
        jmp public_62b9df4
        public_62b9e1d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        jne public_62b9e31
        public_62b9e26 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        je public_62b9e26
        public_62b9e31 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_62b9df4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62b9e4d
        mov dword ptr ds : [eax+4], ecx
        jmp public_62b9e64
        public_62b9e4d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_62b9e64 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_62b9e71
        mov dword ptr ds : [edx+4], ecx
        jmp public_62b9e7f
        public_62b9e71 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_62b9e7c
        mov dword ptr ds : [edx], ecx
        jmp public_62b9e7f
        public_62b9e7c : nop
        mov dword ptr ds : [edx+8], ecx
        public_62b9e7f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x30]
        mov dl, byte ptr ds : [ecx+0x30]
        mov byte ptr ds : [ecx+0x30], bl
        mov byte ptr ds : [esi+0x30], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_62b9f02
        public_62b9e97 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_62b9ea2
        mov dword ptr ds : [ecx], eax
        jmp public_62b9ea5
        public_62b9ea2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_62b9ea5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_62b9ed3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62b9eba
        mov edx, dword ptr ds : [esi+4]
        jmp public_62b9ed0
        public_62b9eba : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x31]
        test bl, bl
        mov edx, eax
        jne public_62b9ed0
        public_62b9ec5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x31]
        test bl, bl
        je public_62b9ec5
        public_62b9ed0 : nop
        mov dword ptr ss : [ebp], edx
        public_62b9ed3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_62b9f02
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62b9ee7
        mov edx, dword ptr ds : [esi+4]
        jmp public_62b9eff
        public_62b9ee7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x31]
        test bl, bl
        mov edx, eax
        jne public_62b9eff
        public_62b9ef3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x31]
        test bl, bl
        je public_62b9ef3
        public_62b9eff : nop
        mov dword ptr ss : [ebp+8], edx
        public_62b9f02 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x30]
        mov bl, 1
        cmp cl, bl
        jne public_62ba17e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_62ba177
        nop 
        public_62b9f20 : nop
        cmp byte ptr ds : [eax+0x30], bl
        jne public_62ba177
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_62b9fdf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_62b9f8b
        mov byte ptr ds : [ecx+0x30], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x30], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62b9f5f
        mov dword ptr ds : [esi+4], ecx
        public_62b9f5f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62b9f72
        mov dword ptr ds : [esi+4], edx
        jmp public_62b9f80
        public_62b9f72 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62b9f7d
        mov dword ptr ds : [esi], edx
        jmp public_62b9f80
        public_62b9f7d : nop
        mov dword ptr ds : [esi+8], edx
        public_62b9f80 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_62b9f8b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x30], bl
        jne public_62b9f9e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x30], bl
        je public_62ba049
        public_62b9f9e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x30], bl
        jne public_62ba07c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x30], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x30], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62b9fc5
        mov dword ptr ds : [esi+4], ecx
        public_62b9fc5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62ba061
        mov dword ptr ds : [esi+4], edx
        jmp public_62ba070
        public_62b9fdf : nop
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_62ba032
        mov byte ptr ds : [ecx+0x30], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62ba005
        mov dword ptr ds : [esi+4], ecx
        public_62ba005 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62ba018
        mov dword ptr ds : [esi+4], edx
        jmp public_62ba027
        public_62ba018 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62ba025
        mov dword ptr ds : [esi+8], edx
        jmp public_62ba027
        public_62ba025 : nop
        mov dword ptr ds : [esi], edx
        public_62ba027 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_62ba032 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x30], bl
        jne public_62ba0d8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x30], bl
        jne public_62ba0d8
        public_62ba049 : nop
        mov byte ptr ds : [ecx+0x30], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_62b9f20
        jmp public_62ba177
        public_62ba061 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62ba06e
        mov dword ptr ds : [esi+8], edx
        jmp public_62ba070
        public_62ba06e : nop
        mov dword ptr ds : [esi], edx
        public_62ba070 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_62ba07c : nop
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
        je public_62ba0a6
        mov dword ptr ds : [esi+4], ecx
        public_62ba0a6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62ba0be
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62ba174
        public_62ba0be : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62ba0ce
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62ba174
        public_62ba0ce : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62ba174
        public_62ba0d8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x30], bl
        jne public_62ba126
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x30], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x30], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62ba0fb
        mov dword ptr ds : [esi+4], ecx
        public_62ba0fb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62ba10e
        mov dword ptr ds : [esi+4], edx
        jmp public_62ba11c
        public_62ba10e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62ba119
        mov dword ptr ds : [esi], edx
        jmp public_62ba11c
        public_62ba119 : nop
        mov dword ptr ds : [esi+8], edx
        public_62ba11c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_62ba126 : nop
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
        je public_62ba14f
        mov dword ptr ds : [esi+4], ecx
        public_62ba14f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62ba162
        mov dword ptr ds : [esi+4], edx
        jmp public_62ba171
        public_62ba162 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62ba16f
        mov dword ptr ds : [esi+8], edx
        jmp public_62ba171
        public_62ba16f : nop
        mov dword ptr ds : [esi], edx
        public_62ba171 : nop
        mov dword ptr ds : [edx+8], ecx
        public_62ba174 : nop
        mov dword ptr ds : [ecx+4], edx
        public_62ba177 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x30], bl
        public_62ba17e : nop
        lea ecx, ds:[esi+0xC]
        call public_62bb580
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
        UNREACHABLE_TRAP(0x62b9dd0)
    }
}

#undef public_62b9df4
#undef public_62b9e12
#undef public_62b9e1d
#undef public_62b9e26
#undef public_62b9e31
#undef public_62b9e4d
#undef public_62b9e64
#undef public_62b9e71
#undef public_62b9e7c
#undef public_62b9e7f
#undef public_62b9e97
#undef public_62b9ea2
#undef public_62b9ea5
#undef public_62b9eba
#undef public_62b9ec5
#undef public_62b9ed0
#undef public_62b9ed3
#undef public_62b9ee7
#undef public_62b9ef3
#undef public_62b9eff
#undef public_62b9f02
#undef public_62b9f20
#undef public_62b9f5f
#undef public_62b9f72
#undef public_62b9f7d
#undef public_62b9f80
#undef public_62b9f8b
#undef public_62b9f9e
#undef public_62b9fc5
#undef public_62b9fdf
#undef public_62ba005
#undef public_62ba018
#undef public_62ba025
#undef public_62ba027
#undef public_62ba032
#undef public_62ba049
#undef public_62ba061
#undef public_62ba06e
#undef public_62ba070
#undef public_62ba07c
#undef public_62ba0a6
#undef public_62ba0be
#undef public_62ba0ce
#undef public_62ba0d8
#undef public_62ba0fb
#undef public_62ba10e
#undef public_62ba119
#undef public_62ba11c
#undef public_62ba126
#undef public_62ba14f
#undef public_62ba162
#undef public_62ba16f
#undef public_62ba171
#undef public_62ba174
#undef public_62ba177
#undef public_62ba17e
