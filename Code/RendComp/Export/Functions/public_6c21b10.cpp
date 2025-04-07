#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21b10);
CLANG_FORWARD_PROC_SYMBOL(public_6c304a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c21b34 _public_6c21b34
#define public_6c21b52 _public_6c21b52
#define public_6c21b5d _public_6c21b5d
#define public_6c21b66 _public_6c21b66
#define public_6c21b71 _public_6c21b71
#define public_6c21b8d _public_6c21b8d
#define public_6c21ba4 _public_6c21ba4
#define public_6c21bb1 _public_6c21bb1
#define public_6c21bbc _public_6c21bbc
#define public_6c21bbf _public_6c21bbf
#define public_6c21bd7 _public_6c21bd7
#define public_6c21be2 _public_6c21be2
#define public_6c21be5 _public_6c21be5
#define public_6c21bfa _public_6c21bfa
#define public_6c21c05 _public_6c21c05
#define public_6c21c10 _public_6c21c10
#define public_6c21c13 _public_6c21c13
#define public_6c21c27 _public_6c21c27
#define public_6c21c33 _public_6c21c33
#define public_6c21c3f _public_6c21c3f
#define public_6c21c42 _public_6c21c42
#define public_6c21c60 _public_6c21c60
#define public_6c21c9f _public_6c21c9f
#define public_6c21cb2 _public_6c21cb2
#define public_6c21cbd _public_6c21cbd
#define public_6c21cc0 _public_6c21cc0
#define public_6c21ccb _public_6c21ccb
#define public_6c21cde _public_6c21cde
#define public_6c21d05 _public_6c21d05
#define public_6c21d1f _public_6c21d1f
#define public_6c21d45 _public_6c21d45
#define public_6c21d58 _public_6c21d58
#define public_6c21d65 _public_6c21d65
#define public_6c21d67 _public_6c21d67
#define public_6c21d72 _public_6c21d72
#define public_6c21d89 _public_6c21d89
#define public_6c21da1 _public_6c21da1
#define public_6c21dae _public_6c21dae
#define public_6c21db0 _public_6c21db0
#define public_6c21dbc _public_6c21dbc
#define public_6c21de6 _public_6c21de6
#define public_6c21dfe _public_6c21dfe
#define public_6c21e0e _public_6c21e0e
#define public_6c21e18 _public_6c21e18
#define public_6c21e3b _public_6c21e3b
#define public_6c21e4e _public_6c21e4e
#define public_6c21e59 _public_6c21e59
#define public_6c21e5c _public_6c21e5c
#define public_6c21e66 _public_6c21e66
#define public_6c21e8f _public_6c21e8f
#define public_6c21ea2 _public_6c21ea2
#define public_6c21eaf _public_6c21eaf
#define public_6c21eb1 _public_6c21eb1
#define public_6c21eb4 _public_6c21eb4
#define public_6c21eb7 _public_6c21eb7
#define public_6c21eba _public_6c21eba

PROC_DECLARE(0x6c21b10, internal_6c21b10, public_6c21b10);
extern "C" NAKED register_t __cdecl internal_6c21b10()
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
        call public_6c304a0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6c21b52
        mov eax, dword ptr ds : [esi+8]
        public_6c21b34 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6c21bd7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6c21be5
        public_6c21b52 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6c21b5d
        mov eax, edx
        jmp public_6c21b34
        public_6c21b5d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6c21b71
        public_6c21b66 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6c21b66
        public_6c21b71 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6c21b34
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6c21b8d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6c21ba4
        public_6c21b8d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6c21ba4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6c21bb1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6c21bbf
        public_6c21bb1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6c21bbc
        mov dword ptr ds : [edx], ecx
        jmp public_6c21bbf
        public_6c21bbc : nop
        mov dword ptr ds : [edx+8], ecx
        public_6c21bbf : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6c21c42
        public_6c21bd7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6c21be2
        mov dword ptr ds : [ecx], eax
        jmp public_6c21be5
        public_6c21be2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6c21be5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6c21c13
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6c21bfa
        mov edx, dword ptr ds : [esi+4]
        jmp public_6c21c10
        public_6c21bfa : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6c21c10
        public_6c21c05 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6c21c05
        public_6c21c10 : nop
        mov dword ptr ss : [ebp], edx
        public_6c21c13 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6c21c42
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6c21c27
        mov edx, dword ptr ds : [esi+4]
        jmp public_6c21c3f
        public_6c21c27 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6c21c3f
        public_6c21c33 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6c21c33
        public_6c21c3f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6c21c42 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x14]
        mov bl, 1
        cmp dl, bl
        jne public_6c21eba
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6c21eb7
        nop 
        public_6c21c60 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_6c21eb7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6c21d1f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6c21ccb
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6c21c9f
        mov dword ptr ds : [esi+4], ecx
        public_6c21c9f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6c21cb2
        mov dword ptr ds : [esi+4], edx
        jmp public_6c21cc0
        public_6c21cb2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6c21cbd
        mov dword ptr ds : [esi], edx
        jmp public_6c21cc0
        public_6c21cbd : nop
        mov dword ptr ds : [esi+8], edx
        public_6c21cc0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6c21ccb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6c21cde
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_6c21d89
        public_6c21cde : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6c21dbc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6c21d05
        mov dword ptr ds : [esi+4], ecx
        public_6c21d05 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6c21da1
        mov dword ptr ds : [esi+4], edx
        jmp public_6c21db0
        public_6c21d1f : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6c21d72
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6c21d45
        mov dword ptr ds : [esi+4], ecx
        public_6c21d45 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6c21d58
        mov dword ptr ds : [esi+4], edx
        jmp public_6c21d67
        public_6c21d58 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6c21d65
        mov dword ptr ds : [esi+8], edx
        jmp public_6c21d67
        public_6c21d65 : nop
        mov dword ptr ds : [esi], edx
        public_6c21d67 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6c21d72 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6c21e18
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6c21e18
        public_6c21d89 : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6c21c60
        jmp public_6c21eb7
        public_6c21da1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6c21dae
        mov dword ptr ds : [esi+8], edx
        jmp public_6c21db0
        public_6c21dae : nop
        mov dword ptr ds : [esi], edx
        public_6c21db0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6c21dbc : nop
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
        je public_6c21de6
        mov dword ptr ds : [esi+4], ecx
        public_6c21de6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6c21dfe
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6c21eb4
        public_6c21dfe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6c21e0e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6c21eb4
        public_6c21e0e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6c21eb4
        public_6c21e18 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6c21e66
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6c21e3b
        mov dword ptr ds : [esi+4], ecx
        public_6c21e3b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6c21e4e
        mov dword ptr ds : [esi+4], edx
        jmp public_6c21e5c
        public_6c21e4e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6c21e59
        mov dword ptr ds : [esi], edx
        jmp public_6c21e5c
        public_6c21e59 : nop
        mov dword ptr ds : [esi+8], edx
        public_6c21e5c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6c21e66 : nop
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
        je public_6c21e8f
        mov dword ptr ds : [esi+4], ecx
        public_6c21e8f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6c21ea2
        mov dword ptr ds : [esi+4], edx
        jmp public_6c21eb1
        public_6c21ea2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6c21eaf
        mov dword ptr ds : [esi+8], edx
        jmp public_6c21eb1
        public_6c21eaf : nop
        mov dword ptr ds : [esi], edx
        public_6c21eb1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6c21eb4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6c21eb7 : nop
        mov byte ptr ds : [eax+0x14], bl
        public_6c21eba : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6c34ea0
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
        UNREACHABLE_TRAP(0x6c21b10)
    }
}

#undef public_6c21b34
#undef public_6c21b52
#undef public_6c21b5d
#undef public_6c21b66
#undef public_6c21b71
#undef public_6c21b8d
#undef public_6c21ba4
#undef public_6c21bb1
#undef public_6c21bbc
#undef public_6c21bbf
#undef public_6c21bd7
#undef public_6c21be2
#undef public_6c21be5
#undef public_6c21bfa
#undef public_6c21c05
#undef public_6c21c10
#undef public_6c21c13
#undef public_6c21c27
#undef public_6c21c33
#undef public_6c21c3f
#undef public_6c21c42
#undef public_6c21c60
#undef public_6c21c9f
#undef public_6c21cb2
#undef public_6c21cbd
#undef public_6c21cc0
#undef public_6c21ccb
#undef public_6c21cde
#undef public_6c21d05
#undef public_6c21d1f
#undef public_6c21d45
#undef public_6c21d58
#undef public_6c21d65
#undef public_6c21d67
#undef public_6c21d72
#undef public_6c21d89
#undef public_6c21da1
#undef public_6c21dae
#undef public_6c21db0
#undef public_6c21dbc
#undef public_6c21de6
#undef public_6c21dfe
#undef public_6c21e0e
#undef public_6c21e18
#undef public_6c21e3b
#undef public_6c21e4e
#undef public_6c21e59
#undef public_6c21e5c
#undef public_6c21e66
#undef public_6c21e8f
#undef public_6c21ea2
#undef public_6c21eaf
#undef public_6c21eb1
#undef public_6c21eb4
#undef public_6c21eb7
#undef public_6c21eba
