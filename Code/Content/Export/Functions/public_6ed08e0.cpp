#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb89b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed08e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1c80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed0904 _public_6ed0904
#define public_6ed0922 _public_6ed0922
#define public_6ed092d _public_6ed092d
#define public_6ed0936 _public_6ed0936
#define public_6ed0941 _public_6ed0941
#define public_6ed095d _public_6ed095d
#define public_6ed0974 _public_6ed0974
#define public_6ed0981 _public_6ed0981
#define public_6ed098c _public_6ed098c
#define public_6ed098f _public_6ed098f
#define public_6ed09a7 _public_6ed09a7
#define public_6ed09b2 _public_6ed09b2
#define public_6ed09b5 _public_6ed09b5
#define public_6ed09ca _public_6ed09ca
#define public_6ed09d5 _public_6ed09d5
#define public_6ed09e0 _public_6ed09e0
#define public_6ed09e3 _public_6ed09e3
#define public_6ed09f7 _public_6ed09f7
#define public_6ed0a03 _public_6ed0a03
#define public_6ed0a0f _public_6ed0a0f
#define public_6ed0a12 _public_6ed0a12
#define public_6ed0a30 _public_6ed0a30
#define public_6ed0a6f _public_6ed0a6f
#define public_6ed0a82 _public_6ed0a82
#define public_6ed0a8d _public_6ed0a8d
#define public_6ed0a90 _public_6ed0a90
#define public_6ed0a9b _public_6ed0a9b
#define public_6ed0aae _public_6ed0aae
#define public_6ed0ad5 _public_6ed0ad5
#define public_6ed0aef _public_6ed0aef
#define public_6ed0b15 _public_6ed0b15
#define public_6ed0b28 _public_6ed0b28
#define public_6ed0b35 _public_6ed0b35
#define public_6ed0b37 _public_6ed0b37
#define public_6ed0b42 _public_6ed0b42
#define public_6ed0b59 _public_6ed0b59
#define public_6ed0b71 _public_6ed0b71
#define public_6ed0b7e _public_6ed0b7e
#define public_6ed0b80 _public_6ed0b80
#define public_6ed0b8c _public_6ed0b8c
#define public_6ed0bb6 _public_6ed0bb6
#define public_6ed0bce _public_6ed0bce
#define public_6ed0bde _public_6ed0bde
#define public_6ed0be8 _public_6ed0be8
#define public_6ed0c0b _public_6ed0c0b
#define public_6ed0c1e _public_6ed0c1e
#define public_6ed0c29 _public_6ed0c29
#define public_6ed0c2c _public_6ed0c2c
#define public_6ed0c36 _public_6ed0c36
#define public_6ed0c5f _public_6ed0c5f
#define public_6ed0c72 _public_6ed0c72
#define public_6ed0c7f _public_6ed0c7f
#define public_6ed0c81 _public_6ed0c81
#define public_6ed0c84 _public_6ed0c84
#define public_6ed0c87 _public_6ed0c87
#define public_6ed0c8e _public_6ed0c8e

PROC_DECLARE(0x6ed08e0, internal_6ed08e0, public_6ed08e0);
extern "C" NAKED register_t __cdecl internal_6ed08e0()
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
        call public_6ed1c80
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6ed0922
        mov eax, dword ptr ds : [esi+8]
        public_6ed0904 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6ed09a7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6ed09b5
        public_6ed0922 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6ed092d
        mov eax, edx
        jmp public_6ed0904
        public_6ed092d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        jne public_6ed0941
        public_6ed0936 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        je public_6ed0936
        public_6ed0941 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ed0904
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ed095d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6ed0974
        public_6ed095d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6ed0974 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6ed0981
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ed098f
        public_6ed0981 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6ed098c
        mov dword ptr ds : [edx], ecx
        jmp public_6ed098f
        public_6ed098c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ed098f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x40]
        mov dl, byte ptr ds : [ecx+0x40]
        mov byte ptr ds : [ecx+0x40], bl
        mov byte ptr ds : [esi+0x40], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6ed0a12
        public_6ed09a7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6ed09b2
        mov dword ptr ds : [ecx], eax
        jmp public_6ed09b5
        public_6ed09b2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6ed09b5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6ed09e3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ed09ca
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ed09e0
        public_6ed09ca : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x41]
        test bl, bl
        mov edx, eax
        jne public_6ed09e0
        public_6ed09d5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x41]
        test bl, bl
        je public_6ed09d5
        public_6ed09e0 : nop
        mov dword ptr ss : [ebp], edx
        public_6ed09e3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6ed0a12
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ed09f7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ed0a0f
        public_6ed09f7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x41]
        test bl, bl
        mov edx, eax
        jne public_6ed0a0f
        public_6ed0a03 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x41]
        test bl, bl
        je public_6ed0a03
        public_6ed0a0f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6ed0a12 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x40]
        mov bl, 1
        cmp cl, bl
        jne public_6ed0c8e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6ed0c87
        nop 
        public_6ed0a30 : nop
        cmp byte ptr ds : [eax+0x40], bl
        jne public_6ed0c87
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ed0aef
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_6ed0a9b
        mov byte ptr ds : [ecx+0x40], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x40], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ed0a6f
        mov dword ptr ds : [esi+4], ecx
        public_6ed0a6f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ed0a82
        mov dword ptr ds : [esi+4], edx
        jmp public_6ed0a90
        public_6ed0a82 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ed0a8d
        mov dword ptr ds : [esi], edx
        jmp public_6ed0a90
        public_6ed0a8d : nop
        mov dword ptr ds : [esi+8], edx
        public_6ed0a90 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ed0a9b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_6ed0aae
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x40], bl
        je public_6ed0b59
        public_6ed0aae : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_6ed0b8c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x40], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x40], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ed0ad5
        mov dword ptr ds : [esi+4], ecx
        public_6ed0ad5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ed0b71
        mov dword ptr ds : [esi+4], edx
        jmp public_6ed0b80
        public_6ed0aef : nop
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_6ed0b42
        mov byte ptr ds : [ecx+0x40], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ed0b15
        mov dword ptr ds : [esi+4], ecx
        public_6ed0b15 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ed0b28
        mov dword ptr ds : [esi+4], edx
        jmp public_6ed0b37
        public_6ed0b28 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ed0b35
        mov dword ptr ds : [esi+8], edx
        jmp public_6ed0b37
        public_6ed0b35 : nop
        mov dword ptr ds : [esi], edx
        public_6ed0b37 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6ed0b42 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_6ed0be8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_6ed0be8
        public_6ed0b59 : nop
        mov byte ptr ds : [ecx+0x40], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ed0a30
        jmp public_6ed0c87
        public_6ed0b71 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ed0b7e
        mov dword ptr ds : [esi+8], edx
        jmp public_6ed0b80
        public_6ed0b7e : nop
        mov dword ptr ds : [esi], edx
        public_6ed0b80 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ed0b8c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x40]
        mov byte ptr ds : [ecx+0x40], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x40], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x40], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ed0bb6
        mov dword ptr ds : [esi+4], ecx
        public_6ed0bb6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ed0bce
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ed0c84
        public_6ed0bce : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ed0bde
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ed0c84
        public_6ed0bde : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ed0c84
        public_6ed0be8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_6ed0c36
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x40], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x40], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ed0c0b
        mov dword ptr ds : [esi+4], ecx
        public_6ed0c0b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ed0c1e
        mov dword ptr ds : [esi+4], edx
        jmp public_6ed0c2c
        public_6ed0c1e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ed0c29
        mov dword ptr ds : [esi], edx
        jmp public_6ed0c2c
        public_6ed0c29 : nop
        mov dword ptr ds : [esi+8], edx
        public_6ed0c2c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6ed0c36 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x40]
        mov byte ptr ds : [ecx+0x40], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x40], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x40], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ed0c5f
        mov dword ptr ds : [esi+4], ecx
        public_6ed0c5f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ed0c72
        mov dword ptr ds : [esi+4], edx
        jmp public_6ed0c81
        public_6ed0c72 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ed0c7f
        mov dword ptr ds : [esi+8], edx
        jmp public_6ed0c81
        public_6ed0c7f : nop
        mov dword ptr ds : [esi], edx
        public_6ed0c81 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ed0c84 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ed0c87 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x40], bl
        public_6ed0c8e : nop
        lea ecx, ds:[esi+0xC]
        call public_6eb89b0
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
        UNREACHABLE_TRAP(0x6ed08e0)
    }
}

#undef public_6ed0904
#undef public_6ed0922
#undef public_6ed092d
#undef public_6ed0936
#undef public_6ed0941
#undef public_6ed095d
#undef public_6ed0974
#undef public_6ed0981
#undef public_6ed098c
#undef public_6ed098f
#undef public_6ed09a7
#undef public_6ed09b2
#undef public_6ed09b5
#undef public_6ed09ca
#undef public_6ed09d5
#undef public_6ed09e0
#undef public_6ed09e3
#undef public_6ed09f7
#undef public_6ed0a03
#undef public_6ed0a0f
#undef public_6ed0a12
#undef public_6ed0a30
#undef public_6ed0a6f
#undef public_6ed0a82
#undef public_6ed0a8d
#undef public_6ed0a90
#undef public_6ed0a9b
#undef public_6ed0aae
#undef public_6ed0ad5
#undef public_6ed0aef
#undef public_6ed0b15
#undef public_6ed0b28
#undef public_6ed0b35
#undef public_6ed0b37
#undef public_6ed0b42
#undef public_6ed0b59
#undef public_6ed0b71
#undef public_6ed0b7e
#undef public_6ed0b80
#undef public_6ed0b8c
#undef public_6ed0bb6
#undef public_6ed0bce
#undef public_6ed0bde
#undef public_6ed0be8
#undef public_6ed0c0b
#undef public_6ed0c1e
#undef public_6ed0c29
#undef public_6ed0c2c
#undef public_6ed0c36
#undef public_6ed0c5f
#undef public_6ed0c72
#undef public_6ed0c7f
#undef public_6ed0c81
#undef public_6ed0c84
#undef public_6ed0c87
#undef public_6ed0c8e
