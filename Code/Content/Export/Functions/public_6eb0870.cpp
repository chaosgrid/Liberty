#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eabcf0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0870);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0f80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb0894 _public_6eb0894
#define public_6eb08b2 _public_6eb08b2
#define public_6eb08bd _public_6eb08bd
#define public_6eb08d0 _public_6eb08d0
#define public_6eb08de _public_6eb08de
#define public_6eb08fa _public_6eb08fa
#define public_6eb0911 _public_6eb0911
#define public_6eb091e _public_6eb091e
#define public_6eb0929 _public_6eb0929
#define public_6eb092c _public_6eb092c
#define public_6eb0950 _public_6eb0950
#define public_6eb095b _public_6eb095b
#define public_6eb095e _public_6eb095e
#define public_6eb0973 _public_6eb0973
#define public_6eb0981 _public_6eb0981
#define public_6eb098f _public_6eb098f
#define public_6eb0992 _public_6eb0992
#define public_6eb09a6 _public_6eb09a6
#define public_6eb09b5 _public_6eb09b5
#define public_6eb09c4 _public_6eb09c4
#define public_6eb09c7 _public_6eb09c7
#define public_6eb09e7 _public_6eb09e7
#define public_6eb0a32 _public_6eb0a32
#define public_6eb0a45 _public_6eb0a45
#define public_6eb0a50 _public_6eb0a50
#define public_6eb0a53 _public_6eb0a53
#define public_6eb0a5e _public_6eb0a5e
#define public_6eb0a77 _public_6eb0a77
#define public_6eb0aa7 _public_6eb0aa7
#define public_6eb0ac1 _public_6eb0ac1
#define public_6eb0af0 _public_6eb0af0
#define public_6eb0b03 _public_6eb0b03
#define public_6eb0b10 _public_6eb0b10
#define public_6eb0b12 _public_6eb0b12
#define public_6eb0b1d _public_6eb0b1d
#define public_6eb0b3a _public_6eb0b3a
#define public_6eb0b55 _public_6eb0b55
#define public_6eb0b62 _public_6eb0b62
#define public_6eb0b64 _public_6eb0b64
#define public_6eb0b70 _public_6eb0b70
#define public_6eb0ba6 _public_6eb0ba6
#define public_6eb0bbe _public_6eb0bbe
#define public_6eb0bce _public_6eb0bce
#define public_6eb0bd8 _public_6eb0bd8
#define public_6eb0c04 _public_6eb0c04
#define public_6eb0c17 _public_6eb0c17
#define public_6eb0c22 _public_6eb0c22
#define public_6eb0c25 _public_6eb0c25
#define public_6eb0c2f _public_6eb0c2f
#define public_6eb0c64 _public_6eb0c64
#define public_6eb0c77 _public_6eb0c77
#define public_6eb0c84 _public_6eb0c84
#define public_6eb0c86 _public_6eb0c86
#define public_6eb0c89 _public_6eb0c89
#define public_6eb0c8c _public_6eb0c8c
#define public_6eb0c96 _public_6eb0c96

PROC_DECLARE(0x6eb0870, internal_6eb0870, public_6eb0870);
extern "C" NAKED register_t __cdecl internal_6eb0870()
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
        call public_6eb0f80
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6eb08b2
        mov eax, dword ptr ds : [esi+8]
        public_6eb0894 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6eb0950
        mov dword ptr ds : [ecx+4], eax
        jmp public_6eb095e
        public_6eb08b2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6eb08bd
        mov eax, edx
        jmp public_6eb0894
        public_6eb08bd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0xC5]
        test bl, bl
        jne public_6eb08de
        lea esp, ss:[esp]
        public_6eb08d0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0xC5]
        test bl, bl
        je public_6eb08d0
        public_6eb08de : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6eb0894
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eb08fa
        mov dword ptr ds : [eax+4], ecx
        jmp public_6eb0911
        public_6eb08fa : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6eb0911 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6eb091e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eb092c
        public_6eb091e : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6eb0929
        mov dword ptr ds : [edx], ecx
        jmp public_6eb092c
        public_6eb0929 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6eb092c : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0xC4]
        mov dl, byte ptr ds : [ecx+0xC4]
        mov byte ptr ds : [ecx+0xC4], bl
        mov byte ptr ds : [esi+0xC4], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6eb09c7
        public_6eb0950 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6eb095b
        mov dword ptr ds : [ecx], eax
        jmp public_6eb095e
        public_6eb095b : nop
        mov dword ptr ds : [ecx+8], eax
        public_6eb095e : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6eb0992
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6eb0973
        mov edx, dword ptr ds : [esi+4]
        jmp public_6eb098f
        public_6eb0973 : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0xC5]
        test bl, bl
        mov edx, eax
        jne public_6eb098f
        public_6eb0981 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0xC5]
        test bl, bl
        je public_6eb0981
        public_6eb098f : nop
        mov dword ptr ss : [ebp], edx
        public_6eb0992 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6eb09c7
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6eb09a6
        mov edx, dword ptr ds : [esi+4]
        jmp public_6eb09c4
        public_6eb09a6 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0xC5]
        test bl, bl
        mov edx, eax
        jne public_6eb09c4
        public_6eb09b5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0xC5]
        test bl, bl
        je public_6eb09b5
        public_6eb09c4 : nop
        mov dword ptr ss : [ebp+8], edx
        public_6eb09c7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0xC4]
        mov bl, 1
        cmp cl, bl
        jne public_6eb0c96
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6eb0c8c
        public_6eb09e7 : nop
        cmp byte ptr ds : [eax+0xC4], bl
        jne public_6eb0c8c
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6eb0ac1
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0xC4]
        test dl, dl
        jne public_6eb0a5e
        mov byte ptr ds : [ecx+0xC4], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0xC4], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eb0a32
        mov dword ptr ds : [esi+4], ecx
        public_6eb0a32 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eb0a45
        mov dword ptr ds : [esi+4], edx
        jmp public_6eb0a53
        public_6eb0a45 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6eb0a50
        mov dword ptr ds : [esi], edx
        jmp public_6eb0a53
        public_6eb0a50 : nop
        mov dword ptr ds : [esi+8], edx
        public_6eb0a53 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6eb0a5e : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xC4], bl
        jne public_6eb0a77
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xC4], bl
        je public_6eb0b3a
        public_6eb0a77 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xC4], bl
        jne public_6eb0b70
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0xC4], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0xC4], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eb0aa7
        mov dword ptr ds : [esi+4], ecx
        public_6eb0aa7 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eb0b55
        mov dword ptr ds : [esi+4], edx
        jmp public_6eb0b64
        public_6eb0ac1 : nop
        mov dl, byte ptr ds : [ecx+0xC4]
        test dl, dl
        jne public_6eb0b1d
        mov byte ptr ds : [ecx+0xC4], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xC4], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eb0af0
        mov dword ptr ds : [esi+4], ecx
        public_6eb0af0 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eb0b03
        mov dword ptr ds : [esi+4], edx
        jmp public_6eb0b12
        public_6eb0b03 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eb0b10
        mov dword ptr ds : [esi+8], edx
        jmp public_6eb0b12
        public_6eb0b10 : nop
        mov dword ptr ds : [esi], edx
        public_6eb0b12 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6eb0b1d : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xC4], bl
        jne public_6eb0bd8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xC4], bl
        jne public_6eb0bd8
        public_6eb0b3a : nop
        mov byte ptr ds : [ecx+0xC4], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6eb09e7
        jmp public_6eb0c8c
        public_6eb0b55 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eb0b62
        mov dword ptr ds : [esi+8], edx
        jmp public_6eb0b64
        public_6eb0b62 : nop
        mov dword ptr ds : [esi], edx
        public_6eb0b64 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6eb0b70 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0xC4]
        mov byte ptr ds : [ecx+0xC4], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0xC4], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0xC4], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eb0ba6
        mov dword ptr ds : [esi+4], ecx
        public_6eb0ba6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eb0bbe
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6eb0c89
        public_6eb0bbe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6eb0bce
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6eb0c89
        public_6eb0bce : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6eb0c89
        public_6eb0bd8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xC4], bl
        jne public_6eb0c2f
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0xC4], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0xC4], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eb0c04
        mov dword ptr ds : [esi+4], ecx
        public_6eb0c04 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eb0c17
        mov dword ptr ds : [esi+4], edx
        jmp public_6eb0c25
        public_6eb0c17 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6eb0c22
        mov dword ptr ds : [esi], edx
        jmp public_6eb0c25
        public_6eb0c22 : nop
        mov dword ptr ds : [esi+8], edx
        public_6eb0c25 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6eb0c2f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0xC4]
        mov byte ptr ds : [ecx+0xC4], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0xC4], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0xC4], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eb0c64
        mov dword ptr ds : [esi+4], ecx
        public_6eb0c64 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eb0c77
        mov dword ptr ds : [esi+4], edx
        jmp public_6eb0c86
        public_6eb0c77 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eb0c84
        mov dword ptr ds : [esi+8], edx
        jmp public_6eb0c86
        public_6eb0c84 : nop
        mov dword ptr ds : [esi], edx
        public_6eb0c86 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6eb0c89 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6eb0c8c : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0xC4], bl
        public_6eb0c96 : nop
        lea ecx, ds:[esi+0xC]
        call public_6eabcf0
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
        UNREACHABLE_TRAP(0x6eb0870)
    }
}

#undef public_6eb0894
#undef public_6eb08b2
#undef public_6eb08bd
#undef public_6eb08d0
#undef public_6eb08de
#undef public_6eb08fa
#undef public_6eb0911
#undef public_6eb091e
#undef public_6eb0929
#undef public_6eb092c
#undef public_6eb0950
#undef public_6eb095b
#undef public_6eb095e
#undef public_6eb0973
#undef public_6eb0981
#undef public_6eb098f
#undef public_6eb0992
#undef public_6eb09a6
#undef public_6eb09b5
#undef public_6eb09c4
#undef public_6eb09c7
#undef public_6eb09e7
#undef public_6eb0a32
#undef public_6eb0a45
#undef public_6eb0a50
#undef public_6eb0a53
#undef public_6eb0a5e
#undef public_6eb0a77
#undef public_6eb0aa7
#undef public_6eb0ac1
#undef public_6eb0af0
#undef public_6eb0b03
#undef public_6eb0b10
#undef public_6eb0b12
#undef public_6eb0b1d
#undef public_6eb0b3a
#undef public_6eb0b55
#undef public_6eb0b62
#undef public_6eb0b64
#undef public_6eb0b70
#undef public_6eb0ba6
#undef public_6eb0bbe
#undef public_6eb0bce
#undef public_6eb0bd8
#undef public_6eb0c04
#undef public_6eb0c17
#undef public_6eb0c22
#undef public_6eb0c25
#undef public_6eb0c2f
#undef public_6eb0c64
#undef public_6eb0c77
#undef public_6eb0c84
#undef public_6eb0c86
#undef public_6eb0c89
#undef public_6eb0c8c
#undef public_6eb0c96
