#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62029c0);
CLANG_FORWARD_PROC_SYMBOL(public_6202e40);
CLANG_FORWARD_PROC_SYMBOL(public_6202ff0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_62029e4 _public_62029e4
#define public_6202a02 _public_6202a02
#define public_6202a0d _public_6202a0d
#define public_6202a16 _public_6202a16
#define public_6202a21 _public_6202a21
#define public_6202a3f _public_6202a3f
#define public_6202a56 _public_6202a56
#define public_6202a63 _public_6202a63
#define public_6202a6e _public_6202a6e
#define public_6202a71 _public_6202a71
#define public_6202a89 _public_6202a89
#define public_6202a94 _public_6202a94
#define public_6202a97 _public_6202a97
#define public_6202aae _public_6202aae
#define public_6202ab9 _public_6202ab9
#define public_6202ac4 _public_6202ac4
#define public_6202ac7 _public_6202ac7
#define public_6202add _public_6202add
#define public_6202ae9 _public_6202ae9
#define public_6202af5 _public_6202af5
#define public_6202af8 _public_6202af8
#define public_6202b13 _public_6202b13
#define public_6202b52 _public_6202b52
#define public_6202b65 _public_6202b65
#define public_6202b70 _public_6202b70
#define public_6202b73 _public_6202b73
#define public_6202b7e _public_6202b7e
#define public_6202b91 _public_6202b91
#define public_6202bb8 _public_6202bb8
#define public_6202bd2 _public_6202bd2
#define public_6202bf8 _public_6202bf8
#define public_6202c0b _public_6202c0b
#define public_6202c18 _public_6202c18
#define public_6202c1a _public_6202c1a
#define public_6202c25 _public_6202c25
#define public_6202c3c _public_6202c3c
#define public_6202c54 _public_6202c54
#define public_6202c61 _public_6202c61
#define public_6202c63 _public_6202c63
#define public_6202c6f _public_6202c6f
#define public_6202c99 _public_6202c99
#define public_6202cb1 _public_6202cb1
#define public_6202cc1 _public_6202cc1
#define public_6202ccb _public_6202ccb
#define public_6202cee _public_6202cee
#define public_6202d01 _public_6202d01
#define public_6202d0c _public_6202d0c
#define public_6202d0f _public_6202d0f
#define public_6202d19 _public_6202d19
#define public_6202d42 _public_6202d42
#define public_6202d55 _public_6202d55
#define public_6202d62 _public_6202d62
#define public_6202d64 _public_6202d64
#define public_6202d67 _public_6202d67
#define public_6202d6a _public_6202d6a
#define public_6202d71 _public_6202d71

PROC_DECLARE(0x62029c0, internal_62029c0, public_62029c0);
extern "C" NAKED register_t __cdecl internal_62029c0()
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
        call public_6202e40
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6202a02
        mov eax, dword ptr ds : [esi+8]
        public_62029e4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6202a89
        mov dword ptr ds : [ecx+4], eax
        jmp public_6202a97
        public_6202a02 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6202a0d
        mov eax, edx
        jmp public_62029e4
        public_6202a0d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6202a21
        public_6202a16 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6202a16
        public_6202a21 : nop
        mov eax, dword ptr ds : [ecx+8]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], ecx
        je public_62029e4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [esi+8]
        cmp ecx, edx
        jne public_6202a3f
        mov dword ptr ds : [eax+4], ecx
        jmp public_6202a56
        public_6202a3f : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6202a56 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6202a63
        mov dword ptr ds : [edx+4], ecx
        jmp public_6202a71
        public_6202a63 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6202a6e
        mov dword ptr ds : [edx], ecx
        jmp public_6202a71
        public_6202a6e : nop
        mov dword ptr ds : [edx+8], ecx
        public_6202a71 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        jmp public_6202af8
        public_6202a89 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6202a94
        mov dword ptr ds : [ecx], eax
        jmp public_6202a97
        public_6202a94 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6202a97 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6202ac7
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_6202aae
        mov edx, dword ptr ds : [esi+4]
        jmp public_6202ac4
        public_6202aae : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6202ac4
        public_6202ab9 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6202ab9
        public_6202ac4 : nop
        mov dword ptr ss : [ebp], edx
        public_6202ac7 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6202af8
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_6202add
        mov edx, dword ptr ds : [esi+4]
        jmp public_6202af5
        public_6202add : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6202af5
        public_6202ae9 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6202ae9
        public_6202af5 : nop
        mov dword ptr ss : [ebp+8], edx
        public_6202af8 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov bl, 1
        cmp byte ptr ds : [esi+0x14], bl
        jne public_6202d71
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6202d6a
        public_6202b13 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_6202d6a
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6202bd2
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6202b7e
        mov byte ptr ds : [ecx+0x14], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6202b52
        mov dword ptr ds : [esi+4], ecx
        public_6202b52 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6202b65
        mov dword ptr ds : [esi+4], edx
        jmp public_6202b73
        public_6202b65 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6202b70
        mov dword ptr ds : [esi], edx
        jmp public_6202b73
        public_6202b70 : nop
        mov dword ptr ds : [esi+8], edx
        public_6202b73 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6202b7e : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6202b91
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_6202c3c
        public_6202b91 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6202c6f
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6202bb8
        mov dword ptr ds : [esi+4], ecx
        public_6202bb8 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6202c54
        mov dword ptr ds : [esi+4], edx
        jmp public_6202c63
        public_6202bd2 : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6202c25
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6202bf8
        mov dword ptr ds : [esi+4], ecx
        public_6202bf8 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6202c0b
        mov dword ptr ds : [esi+4], edx
        jmp public_6202c1a
        public_6202c0b : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6202c18
        mov dword ptr ds : [esi+8], edx
        jmp public_6202c1a
        public_6202c18 : nop
        mov dword ptr ds : [esi], edx
        public_6202c1a : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6202c25 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6202ccb
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6202ccb
        public_6202c3c : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6202b13
        jmp public_6202d6a
        public_6202c54 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6202c61
        mov dword ptr ds : [esi+8], edx
        jmp public_6202c63
        public_6202c61 : nop
        mov dword ptr ds : [esi], edx
        public_6202c63 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6202c6f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6202c99
        mov dword ptr ds : [esi+4], ecx
        public_6202c99 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6202cb1
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6202d67
        public_6202cb1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6202cc1
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6202d67
        public_6202cc1 : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6202d67
        public_6202ccb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6202d19
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6202cee
        mov dword ptr ds : [esi+4], ecx
        public_6202cee : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6202d01
        mov dword ptr ds : [esi+4], edx
        jmp public_6202d0f
        public_6202d01 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6202d0c
        mov dword ptr ds : [esi], edx
        jmp public_6202d0f
        public_6202d0c : nop
        mov dword ptr ds : [esi+8], edx
        public_6202d0f : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6202d19 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6202d42
        mov dword ptr ds : [esi+4], ecx
        public_6202d42 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6202d55
        mov dword ptr ds : [esi+4], edx
        jmp public_6202d64
        public_6202d55 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6202d62
        mov dword ptr ds : [esi+8], edx
        jmp public_6202d64
        public_6202d62 : nop
        mov dword ptr ds : [esi], edx
        public_6202d64 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6202d67 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6202d6a : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x14], bl
        public_6202d71 : nop
        lea ecx, ds:[esi+0xC]
        call public_6202ff0
        push esi
        call public_62460e0
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
        UNREACHABLE_TRAP(0x62029c0)
    }
}

#undef public_62029e4
#undef public_6202a02
#undef public_6202a0d
#undef public_6202a16
#undef public_6202a21
#undef public_6202a3f
#undef public_6202a56
#undef public_6202a63
#undef public_6202a6e
#undef public_6202a71
#undef public_6202a89
#undef public_6202a94
#undef public_6202a97
#undef public_6202aae
#undef public_6202ab9
#undef public_6202ac4
#undef public_6202ac7
#undef public_6202add
#undef public_6202ae9
#undef public_6202af5
#undef public_6202af8
#undef public_6202b13
#undef public_6202b52
#undef public_6202b65
#undef public_6202b70
#undef public_6202b73
#undef public_6202b7e
#undef public_6202b91
#undef public_6202bb8
#undef public_6202bd2
#undef public_6202bf8
#undef public_6202c0b
#undef public_6202c18
#undef public_6202c1a
#undef public_6202c25
#undef public_6202c3c
#undef public_6202c54
#undef public_6202c61
#undef public_6202c63
#undef public_6202c6f
#undef public_6202c99
#undef public_6202cb1
#undef public_6202cc1
#undef public_6202ccb
#undef public_6202cee
#undef public_6202d01
#undef public_6202d0c
#undef public_6202d0f
#undef public_6202d19
#undef public_6202d42
#undef public_6202d55
#undef public_6202d62
#undef public_6202d64
#undef public_6202d67
#undef public_6202d6a
#undef public_6202d71
