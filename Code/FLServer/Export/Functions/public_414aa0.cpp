#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414600);
CLANG_FORWARD_PROC_SYMBOL(public_414aa0);
CLANG_FORWARD_PROC_SYMBOL(public_4153b0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_414ac4 _public_414ac4
#define public_414ae2 _public_414ae2
#define public_414aed _public_414aed
#define public_414af6 _public_414af6
#define public_414b01 _public_414b01
#define public_414b1d _public_414b1d
#define public_414b34 _public_414b34
#define public_414b41 _public_414b41
#define public_414b4c _public_414b4c
#define public_414b4f _public_414b4f
#define public_414b67 _public_414b67
#define public_414b72 _public_414b72
#define public_414b75 _public_414b75
#define public_414b8a _public_414b8a
#define public_414b95 _public_414b95
#define public_414ba0 _public_414ba0
#define public_414ba3 _public_414ba3
#define public_414bb7 _public_414bb7
#define public_414bc3 _public_414bc3
#define public_414bcf _public_414bcf
#define public_414bd2 _public_414bd2
#define public_414bf0 _public_414bf0
#define public_414c2f _public_414c2f
#define public_414c42 _public_414c42
#define public_414c4d _public_414c4d
#define public_414c50 _public_414c50
#define public_414c5b _public_414c5b
#define public_414c6e _public_414c6e
#define public_414c95 _public_414c95
#define public_414caf _public_414caf
#define public_414cd5 _public_414cd5
#define public_414ce8 _public_414ce8
#define public_414cf5 _public_414cf5
#define public_414cf7 _public_414cf7
#define public_414d02 _public_414d02
#define public_414d19 _public_414d19
#define public_414d31 _public_414d31
#define public_414d3e _public_414d3e
#define public_414d40 _public_414d40
#define public_414d4c _public_414d4c
#define public_414d76 _public_414d76
#define public_414d8e _public_414d8e
#define public_414d9e _public_414d9e
#define public_414da8 _public_414da8
#define public_414dcb _public_414dcb
#define public_414dde _public_414dde
#define public_414de9 _public_414de9
#define public_414dec _public_414dec
#define public_414df6 _public_414df6
#define public_414e1f _public_414e1f
#define public_414e32 _public_414e32
#define public_414e3f _public_414e3f
#define public_414e41 _public_414e41
#define public_414e44 _public_414e44
#define public_414e47 _public_414e47
#define public_414e4e _public_414e4e

PROC_DECLARE(0x414aa0, internal_414aa0, public_414aa0);
extern "C" NAKED register_t __cdecl internal_414aa0()
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
        call public_4153b0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_414ae2
        mov eax, dword ptr ds : [esi+8]
        public_414ac4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_414b67
        mov dword ptr ds : [ecx+4], eax
        jmp public_414b75
        public_414ae2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_414aed
        mov eax, edx
        jmp public_414ac4
        public_414aed : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_414b01
        public_414af6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_414af6
        public_414b01 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_414ac4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_414b1d
        mov dword ptr ds : [eax+4], ecx
        jmp public_414b34
        public_414b1d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_414b34 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_414b41
        mov dword ptr ds : [edx+4], ecx
        jmp public_414b4f
        public_414b41 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_414b4c
        mov dword ptr ds : [edx], ecx
        jmp public_414b4f
        public_414b4c : nop
        mov dword ptr ds : [edx+8], ecx
        public_414b4f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x20]
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [ecx+0x20], bl
        mov byte ptr ds : [esi+0x20], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_414bd2
        public_414b67 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_414b72
        mov dword ptr ds : [ecx], eax
        jmp public_414b75
        public_414b72 : nop
        mov dword ptr ds : [ecx+8], eax
        public_414b75 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_414ba3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_414b8a
        mov edx, dword ptr ds : [esi+4]
        jmp public_414ba0
        public_414b8a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_414ba0
        public_414b95 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_414b95
        public_414ba0 : nop
        mov dword ptr ss : [ebp], edx
        public_414ba3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_414bd2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_414bb7
        mov edx, dword ptr ds : [esi+4]
        jmp public_414bcf
        public_414bb7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_414bcf
        public_414bc3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_414bc3
        public_414bcf : nop
        mov dword ptr ss : [ebp+8], edx
        public_414bd2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x20]
        mov bl, 1
        cmp cl, bl
        jne public_414e4e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_414e47
        nop 
        public_414bf0 : nop
        cmp byte ptr ds : [eax+0x20], bl
        jne public_414e47
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_414caf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_414c5b
        mov byte ptr ds : [ecx+0x20], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_414c2f
        mov dword ptr ds : [esi+4], ecx
        public_414c2f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_414c42
        mov dword ptr ds : [esi+4], edx
        jmp public_414c50
        public_414c42 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_414c4d
        mov dword ptr ds : [esi], edx
        jmp public_414c50
        public_414c4d : nop
        mov dword ptr ds : [esi+8], edx
        public_414c50 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_414c5b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_414c6e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        je public_414d19
        public_414c6e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_414d4c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_414c95
        mov dword ptr ds : [esi+4], ecx
        public_414c95 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_414d31
        mov dword ptr ds : [esi+4], edx
        jmp public_414d40
        public_414caf : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_414d02
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_414cd5
        mov dword ptr ds : [esi+4], ecx
        public_414cd5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_414ce8
        mov dword ptr ds : [esi+4], edx
        jmp public_414cf7
        public_414ce8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_414cf5
        mov dword ptr ds : [esi+8], edx
        jmp public_414cf7
        public_414cf5 : nop
        mov dword ptr ds : [esi], edx
        public_414cf7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_414d02 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_414da8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_414da8
        public_414d19 : nop
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_414bf0
        jmp public_414e47
        public_414d31 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_414d3e
        mov dword ptr ds : [esi+8], edx
        jmp public_414d40
        public_414d3e : nop
        mov dword ptr ds : [esi], edx
        public_414d40 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_414d4c : nop
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
        je public_414d76
        mov dword ptr ds : [esi+4], ecx
        public_414d76 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_414d8e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_414e44
        public_414d8e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_414d9e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_414e44
        public_414d9e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_414e44
        public_414da8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_414df6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_414dcb
        mov dword ptr ds : [esi+4], ecx
        public_414dcb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_414dde
        mov dword ptr ds : [esi+4], edx
        jmp public_414dec
        public_414dde : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_414de9
        mov dword ptr ds : [esi], edx
        jmp public_414dec
        public_414de9 : nop
        mov dword ptr ds : [esi+8], edx
        public_414dec : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_414df6 : nop
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
        je public_414e1f
        mov dword ptr ds : [esi+4], ecx
        public_414e1f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_414e32
        mov dword ptr ds : [esi+4], edx
        jmp public_414e41
        public_414e32 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_414e3f
        mov dword ptr ds : [esi+8], edx
        jmp public_414e41
        public_414e3f : nop
        mov dword ptr ds : [esi], edx
        public_414e41 : nop
        mov dword ptr ds : [edx+8], ecx
        public_414e44 : nop
        mov dword ptr ds : [ecx+4], edx
        public_414e47 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x20], bl
        public_414e4e : nop
        lea ecx, ds:[esi+0xC]
        call public_414600
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
        UNREACHABLE_TRAP(0x414aa0)
    }
}

#undef public_414ac4
#undef public_414ae2
#undef public_414aed
#undef public_414af6
#undef public_414b01
#undef public_414b1d
#undef public_414b34
#undef public_414b41
#undef public_414b4c
#undef public_414b4f
#undef public_414b67
#undef public_414b72
#undef public_414b75
#undef public_414b8a
#undef public_414b95
#undef public_414ba0
#undef public_414ba3
#undef public_414bb7
#undef public_414bc3
#undef public_414bcf
#undef public_414bd2
#undef public_414bf0
#undef public_414c2f
#undef public_414c42
#undef public_414c4d
#undef public_414c50
#undef public_414c5b
#undef public_414c6e
#undef public_414c95
#undef public_414caf
#undef public_414cd5
#undef public_414ce8
#undef public_414cf5
#undef public_414cf7
#undef public_414d02
#undef public_414d19
#undef public_414d31
#undef public_414d3e
#undef public_414d40
#undef public_414d4c
#undef public_414d76
#undef public_414d8e
#undef public_414d9e
#undef public_414da8
#undef public_414dcb
#undef public_414dde
#undef public_414de9
#undef public_414dec
#undef public_414df6
#undef public_414e1f
#undef public_414e32
#undef public_414e3f
#undef public_414e41
#undef public_414e44
#undef public_414e47
#undef public_414e4e
