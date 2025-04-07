#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce36f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5750);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce4bf4 _public_6ce4bf4
#define public_6ce4c12 _public_6ce4c12
#define public_6ce4c1d _public_6ce4c1d
#define public_6ce4c26 _public_6ce4c26
#define public_6ce4c31 _public_6ce4c31
#define public_6ce4c4d _public_6ce4c4d
#define public_6ce4c64 _public_6ce4c64
#define public_6ce4c71 _public_6ce4c71
#define public_6ce4c7c _public_6ce4c7c
#define public_6ce4c7f _public_6ce4c7f
#define public_6ce4c97 _public_6ce4c97
#define public_6ce4ca2 _public_6ce4ca2
#define public_6ce4ca5 _public_6ce4ca5
#define public_6ce4cba _public_6ce4cba
#define public_6ce4cc5 _public_6ce4cc5
#define public_6ce4cd0 _public_6ce4cd0
#define public_6ce4cd3 _public_6ce4cd3
#define public_6ce4ce7 _public_6ce4ce7
#define public_6ce4cf3 _public_6ce4cf3
#define public_6ce4cff _public_6ce4cff
#define public_6ce4d02 _public_6ce4d02
#define public_6ce4d20 _public_6ce4d20
#define public_6ce4d5f _public_6ce4d5f
#define public_6ce4d72 _public_6ce4d72
#define public_6ce4d7d _public_6ce4d7d
#define public_6ce4d80 _public_6ce4d80
#define public_6ce4d8b _public_6ce4d8b
#define public_6ce4d9e _public_6ce4d9e
#define public_6ce4dc5 _public_6ce4dc5
#define public_6ce4ddf _public_6ce4ddf
#define public_6ce4e05 _public_6ce4e05
#define public_6ce4e18 _public_6ce4e18
#define public_6ce4e25 _public_6ce4e25
#define public_6ce4e27 _public_6ce4e27
#define public_6ce4e32 _public_6ce4e32
#define public_6ce4e49 _public_6ce4e49
#define public_6ce4e61 _public_6ce4e61
#define public_6ce4e6e _public_6ce4e6e
#define public_6ce4e70 _public_6ce4e70
#define public_6ce4e7c _public_6ce4e7c
#define public_6ce4ea6 _public_6ce4ea6
#define public_6ce4ebe _public_6ce4ebe
#define public_6ce4ece _public_6ce4ece
#define public_6ce4ed8 _public_6ce4ed8
#define public_6ce4efb _public_6ce4efb
#define public_6ce4f0e _public_6ce4f0e
#define public_6ce4f19 _public_6ce4f19
#define public_6ce4f1c _public_6ce4f1c
#define public_6ce4f26 _public_6ce4f26
#define public_6ce4f4f _public_6ce4f4f
#define public_6ce4f62 _public_6ce4f62
#define public_6ce4f6f _public_6ce4f6f
#define public_6ce4f71 _public_6ce4f71
#define public_6ce4f74 _public_6ce4f74
#define public_6ce4f77 _public_6ce4f77
#define public_6ce4f7e _public_6ce4f7e

PROC_DECLARE(0x6ce4bd0, internal_6ce4bd0, public_6ce4bd0);
extern "C" NAKED register_t __cdecl internal_6ce4bd0()
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
        call public_6ce5750
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6ce4c12
        mov eax, dword ptr ds : [esi+8]
        public_6ce4bf4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6ce4c97
        mov dword ptr ds : [ecx+4], eax
        jmp public_6ce4ca5
        public_6ce4c12 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6ce4c1d
        mov eax, edx
        jmp public_6ce4bf4
        public_6ce4c1d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6ce4c31
        public_6ce4c26 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6ce4c26
        public_6ce4c31 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ce4bf4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ce4c4d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6ce4c64
        public_6ce4c4d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6ce4c64 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6ce4c71
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ce4c7f
        public_6ce4c71 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6ce4c7c
        mov dword ptr ds : [edx], ecx
        jmp public_6ce4c7f
        public_6ce4c7c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ce4c7f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x20]
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [ecx+0x20], bl
        mov byte ptr ds : [esi+0x20], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6ce4d02
        public_6ce4c97 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6ce4ca2
        mov dword ptr ds : [ecx], eax
        jmp public_6ce4ca5
        public_6ce4ca2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6ce4ca5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6ce4cd3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ce4cba
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ce4cd0
        public_6ce4cba : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6ce4cd0
        public_6ce4cc5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6ce4cc5
        public_6ce4cd0 : nop
        mov dword ptr ss : [ebp], edx
        public_6ce4cd3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6ce4d02
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ce4ce7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ce4cff
        public_6ce4ce7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6ce4cff
        public_6ce4cf3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6ce4cf3
        public_6ce4cff : nop
        mov dword ptr ss : [ebp+8], edx
        public_6ce4d02 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x20]
        mov bl, 1
        cmp cl, bl
        jne public_6ce4f7e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6ce4f77
        nop 
        public_6ce4d20 : nop
        cmp byte ptr ds : [eax+0x20], bl
        jne public_6ce4f77
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ce4ddf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6ce4d8b
        mov byte ptr ds : [ecx+0x20], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce4d5f
        mov dword ptr ds : [esi+4], ecx
        public_6ce4d5f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce4d72
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce4d80
        public_6ce4d72 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ce4d7d
        mov dword ptr ds : [esi], edx
        jmp public_6ce4d80
        public_6ce4d7d : nop
        mov dword ptr ds : [esi+8], edx
        public_6ce4d80 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ce4d8b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6ce4d9e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        je public_6ce4e49
        public_6ce4d9e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6ce4e7c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce4dc5
        mov dword ptr ds : [esi+4], ecx
        public_6ce4dc5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce4e61
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce4e70
        public_6ce4ddf : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6ce4e32
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce4e05
        mov dword ptr ds : [esi+4], ecx
        public_6ce4e05 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce4e18
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce4e27
        public_6ce4e18 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ce4e25
        mov dword ptr ds : [esi+8], edx
        jmp public_6ce4e27
        public_6ce4e25 : nop
        mov dword ptr ds : [esi], edx
        public_6ce4e27 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6ce4e32 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6ce4ed8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6ce4ed8
        public_6ce4e49 : nop
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ce4d20
        jmp public_6ce4f77
        public_6ce4e61 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ce4e6e
        mov dword ptr ds : [esi+8], edx
        jmp public_6ce4e70
        public_6ce4e6e : nop
        mov dword ptr ds : [esi], edx
        public_6ce4e70 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ce4e7c : nop
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
        je public_6ce4ea6
        mov dword ptr ds : [esi+4], ecx
        public_6ce4ea6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce4ebe
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ce4f74
        public_6ce4ebe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ce4ece
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ce4f74
        public_6ce4ece : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ce4f74
        public_6ce4ed8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6ce4f26
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce4efb
        mov dword ptr ds : [esi+4], ecx
        public_6ce4efb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce4f0e
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce4f1c
        public_6ce4f0e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ce4f19
        mov dword ptr ds : [esi], edx
        jmp public_6ce4f1c
        public_6ce4f19 : nop
        mov dword ptr ds : [esi+8], edx
        public_6ce4f1c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6ce4f26 : nop
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
        je public_6ce4f4f
        mov dword ptr ds : [esi+4], ecx
        public_6ce4f4f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce4f62
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce4f71
        public_6ce4f62 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ce4f6f
        mov dword ptr ds : [esi+8], edx
        jmp public_6ce4f71
        public_6ce4f6f : nop
        mov dword ptr ds : [esi], edx
        public_6ce4f71 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ce4f74 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ce4f77 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x20], bl
        public_6ce4f7e : nop
        lea ecx, ds:[esi+0xC]
        call public_6ce36f0
        push esi
        call public_6d5ffb0
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
        UNREACHABLE_TRAP(0x6ce4bd0)
    }
}

#undef public_6ce4bf4
#undef public_6ce4c12
#undef public_6ce4c1d
#undef public_6ce4c26
#undef public_6ce4c31
#undef public_6ce4c4d
#undef public_6ce4c64
#undef public_6ce4c71
#undef public_6ce4c7c
#undef public_6ce4c7f
#undef public_6ce4c97
#undef public_6ce4ca2
#undef public_6ce4ca5
#undef public_6ce4cba
#undef public_6ce4cc5
#undef public_6ce4cd0
#undef public_6ce4cd3
#undef public_6ce4ce7
#undef public_6ce4cf3
#undef public_6ce4cff
#undef public_6ce4d02
#undef public_6ce4d20
#undef public_6ce4d5f
#undef public_6ce4d72
#undef public_6ce4d7d
#undef public_6ce4d80
#undef public_6ce4d8b
#undef public_6ce4d9e
#undef public_6ce4dc5
#undef public_6ce4ddf
#undef public_6ce4e05
#undef public_6ce4e18
#undef public_6ce4e25
#undef public_6ce4e27
#undef public_6ce4e32
#undef public_6ce4e49
#undef public_6ce4e61
#undef public_6ce4e6e
#undef public_6ce4e70
#undef public_6ce4e7c
#undef public_6ce4ea6
#undef public_6ce4ebe
#undef public_6ce4ece
#undef public_6ce4ed8
#undef public_6ce4efb
#undef public_6ce4f0e
#undef public_6ce4f19
#undef public_6ce4f1c
#undef public_6ce4f26
#undef public_6ce4f4f
#undef public_6ce4f62
#undef public_6ce4f6f
#undef public_6ce4f71
#undef public_6ce4f74
#undef public_6ce4f77
#undef public_6ce4f7e
