#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4588f0);
CLANG_FORWARD_PROC_SYMBOL(public_5948b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_458914 _public_458914
#define public_458932 _public_458932
#define public_45893d _public_45893d
#define public_458946 _public_458946
#define public_458951 _public_458951
#define public_45896d _public_45896d
#define public_458984 _public_458984
#define public_458991 _public_458991
#define public_45899c _public_45899c
#define public_45899f _public_45899f
#define public_4589b7 _public_4589b7
#define public_4589c2 _public_4589c2
#define public_4589c5 _public_4589c5
#define public_4589da _public_4589da
#define public_4589e5 _public_4589e5
#define public_4589f0 _public_4589f0
#define public_4589f3 _public_4589f3
#define public_458a07 _public_458a07
#define public_458a13 _public_458a13
#define public_458a1f _public_458a1f
#define public_458a22 _public_458a22
#define public_458a40 _public_458a40
#define public_458a7f _public_458a7f
#define public_458a92 _public_458a92
#define public_458a9d _public_458a9d
#define public_458aa0 _public_458aa0
#define public_458aab _public_458aab
#define public_458abe _public_458abe
#define public_458ae5 _public_458ae5
#define public_458aff _public_458aff
#define public_458b25 _public_458b25
#define public_458b38 _public_458b38
#define public_458b45 _public_458b45
#define public_458b47 _public_458b47
#define public_458b52 _public_458b52
#define public_458b69 _public_458b69
#define public_458b81 _public_458b81
#define public_458b8e _public_458b8e
#define public_458b90 _public_458b90
#define public_458b9c _public_458b9c
#define public_458bc6 _public_458bc6
#define public_458bde _public_458bde
#define public_458bee _public_458bee
#define public_458bf8 _public_458bf8
#define public_458c1b _public_458c1b
#define public_458c2e _public_458c2e
#define public_458c39 _public_458c39
#define public_458c3c _public_458c3c
#define public_458c46 _public_458c46
#define public_458c6f _public_458c6f
#define public_458c82 _public_458c82
#define public_458c8f _public_458c8f
#define public_458c91 _public_458c91
#define public_458c94 _public_458c94
#define public_458c97 _public_458c97
#define public_458c9a _public_458c9a

PROC_DECLARE(0x4588f0, internal_4588f0, public_4588f0);
extern "C" NAKED register_t __cdecl internal_4588f0()
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
        call public_5948b0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_458932
        mov eax, dword ptr ds : [esi+8]
        public_458914 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_4589b7
        mov dword ptr ds : [ecx+4], eax
        jmp public_4589c5
        public_458932 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_45893d
        mov eax, edx
        jmp public_458914
        public_45893d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_458951
        public_458946 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_458946
        public_458951 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_458914
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_45896d
        mov dword ptr ds : [eax+4], ecx
        jmp public_458984
        public_45896d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_458984 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_458991
        mov dword ptr ds : [edx+4], ecx
        jmp public_45899f
        public_458991 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_45899c
        mov dword ptr ds : [edx], ecx
        jmp public_45899f
        public_45899c : nop
        mov dword ptr ds : [edx+8], ecx
        public_45899f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x20]
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [ecx+0x20], bl
        mov byte ptr ds : [esi+0x20], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_458a22
        public_4589b7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_4589c2
        mov dword ptr ds : [ecx], eax
        jmp public_4589c5
        public_4589c2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_4589c5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_4589f3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4589da
        mov edx, dword ptr ds : [esi+4]
        jmp public_4589f0
        public_4589da : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_4589f0
        public_4589e5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_4589e5
        public_4589f0 : nop
        mov dword ptr ss : [ebp], edx
        public_4589f3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_458a22
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_458a07
        mov edx, dword ptr ds : [esi+4]
        jmp public_458a1f
        public_458a07 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_458a1f
        public_458a13 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_458a13
        public_458a1f : nop
        mov dword ptr ss : [ebp+8], edx
        public_458a22 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x20]
        mov bl, 1
        cmp dl, bl
        jne public_458c9a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_458c97
        nop 
        public_458a40 : nop
        cmp byte ptr ds : [eax+0x20], bl
        jne public_458c97
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_458aff
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_458aab
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_458a7f
        mov dword ptr ds : [esi+4], ecx
        public_458a7f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_458a92
        mov dword ptr ds : [esi+4], edx
        jmp public_458aa0
        public_458a92 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_458a9d
        mov dword ptr ds : [esi], edx
        jmp public_458aa0
        public_458a9d : nop
        mov dword ptr ds : [esi+8], edx
        public_458aa0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_458aab : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_458abe
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        je public_458b69
        public_458abe : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_458b9c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_458ae5
        mov dword ptr ds : [esi+4], ecx
        public_458ae5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_458b81
        mov dword ptr ds : [esi+4], edx
        jmp public_458b90
        public_458aff : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_458b52
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_458b25
        mov dword ptr ds : [esi+4], ecx
        public_458b25 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_458b38
        mov dword ptr ds : [esi+4], edx
        jmp public_458b47
        public_458b38 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_458b45
        mov dword ptr ds : [esi+8], edx
        jmp public_458b47
        public_458b45 : nop
        mov dword ptr ds : [esi], edx
        public_458b47 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_458b52 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_458bf8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_458bf8
        public_458b69 : nop
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_458a40
        jmp public_458c97
        public_458b81 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_458b8e
        mov dword ptr ds : [esi+8], edx
        jmp public_458b90
        public_458b8e : nop
        mov dword ptr ds : [esi], edx
        public_458b90 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_458b9c : nop
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
        je public_458bc6
        mov dword ptr ds : [esi+4], ecx
        public_458bc6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_458bde
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_458c94
        public_458bde : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_458bee
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_458c94
        public_458bee : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_458c94
        public_458bf8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_458c46
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_458c1b
        mov dword ptr ds : [esi+4], ecx
        public_458c1b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_458c2e
        mov dword ptr ds : [esi+4], edx
        jmp public_458c3c
        public_458c2e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_458c39
        mov dword ptr ds : [esi], edx
        jmp public_458c3c
        public_458c39 : nop
        mov dword ptr ds : [esi+8], edx
        public_458c3c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_458c46 : nop
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
        je public_458c6f
        mov dword ptr ds : [esi+4], ecx
        public_458c6f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_458c82
        mov dword ptr ds : [esi+4], edx
        jmp public_458c91
        public_458c82 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_458c8f
        mov dword ptr ds : [esi+8], edx
        jmp public_458c91
        public_458c8f : nop
        mov dword ptr ds : [esi], edx
        public_458c91 : nop
        mov dword ptr ds : [edx+8], ecx
        public_458c94 : nop
        mov dword ptr ds : [ecx+4], edx
        public_458c97 : nop
        mov byte ptr ds : [eax+0x20], bl
        public_458c9a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x4588f0)
    }
}

#undef public_458914
#undef public_458932
#undef public_45893d
#undef public_458946
#undef public_458951
#undef public_45896d
#undef public_458984
#undef public_458991
#undef public_45899c
#undef public_45899f
#undef public_4589b7
#undef public_4589c2
#undef public_4589c5
#undef public_4589da
#undef public_4589e5
#undef public_4589f0
#undef public_4589f3
#undef public_458a07
#undef public_458a13
#undef public_458a1f
#undef public_458a22
#undef public_458a40
#undef public_458a7f
#undef public_458a92
#undef public_458a9d
#undef public_458aa0
#undef public_458aab
#undef public_458abe
#undef public_458ae5
#undef public_458aff
#undef public_458b25
#undef public_458b38
#undef public_458b45
#undef public_458b47
#undef public_458b52
#undef public_458b69
#undef public_458b81
#undef public_458b8e
#undef public_458b90
#undef public_458b9c
#undef public_458bc6
#undef public_458bde
#undef public_458bee
#undef public_458bf8
#undef public_458c1b
#undef public_458c2e
#undef public_458c39
#undef public_458c3c
#undef public_458c46
#undef public_458c6f
#undef public_458c82
#undef public_458c8f
#undef public_458c91
#undef public_458c94
#undef public_458c97
#undef public_458c9a
