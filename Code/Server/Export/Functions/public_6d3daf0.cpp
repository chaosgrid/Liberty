#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3cd20);
CLANG_FORWARD_PROC_SYMBOL(public_6d3daf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3f120);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d3db14 _public_6d3db14
#define public_6d3db32 _public_6d3db32
#define public_6d3db3d _public_6d3db3d
#define public_6d3db46 _public_6d3db46
#define public_6d3db51 _public_6d3db51
#define public_6d3db6d _public_6d3db6d
#define public_6d3db84 _public_6d3db84
#define public_6d3db91 _public_6d3db91
#define public_6d3db9c _public_6d3db9c
#define public_6d3db9f _public_6d3db9f
#define public_6d3dbb7 _public_6d3dbb7
#define public_6d3dbc2 _public_6d3dbc2
#define public_6d3dbc5 _public_6d3dbc5
#define public_6d3dbda _public_6d3dbda
#define public_6d3dbe5 _public_6d3dbe5
#define public_6d3dbf0 _public_6d3dbf0
#define public_6d3dbf3 _public_6d3dbf3
#define public_6d3dc07 _public_6d3dc07
#define public_6d3dc13 _public_6d3dc13
#define public_6d3dc1f _public_6d3dc1f
#define public_6d3dc22 _public_6d3dc22
#define public_6d3dc40 _public_6d3dc40
#define public_6d3dc7f _public_6d3dc7f
#define public_6d3dc92 _public_6d3dc92
#define public_6d3dc9d _public_6d3dc9d
#define public_6d3dca0 _public_6d3dca0
#define public_6d3dcab _public_6d3dcab
#define public_6d3dcbe _public_6d3dcbe
#define public_6d3dce5 _public_6d3dce5
#define public_6d3dcff _public_6d3dcff
#define public_6d3dd25 _public_6d3dd25
#define public_6d3dd38 _public_6d3dd38
#define public_6d3dd45 _public_6d3dd45
#define public_6d3dd47 _public_6d3dd47
#define public_6d3dd52 _public_6d3dd52
#define public_6d3dd69 _public_6d3dd69
#define public_6d3dd81 _public_6d3dd81
#define public_6d3dd8e _public_6d3dd8e
#define public_6d3dd90 _public_6d3dd90
#define public_6d3dd9c _public_6d3dd9c
#define public_6d3ddc6 _public_6d3ddc6
#define public_6d3ddde _public_6d3ddde
#define public_6d3ddee _public_6d3ddee
#define public_6d3ddf8 _public_6d3ddf8
#define public_6d3de1b _public_6d3de1b
#define public_6d3de2e _public_6d3de2e
#define public_6d3de39 _public_6d3de39
#define public_6d3de3c _public_6d3de3c
#define public_6d3de46 _public_6d3de46
#define public_6d3de6f _public_6d3de6f
#define public_6d3de82 _public_6d3de82
#define public_6d3de8f _public_6d3de8f
#define public_6d3de91 _public_6d3de91
#define public_6d3de94 _public_6d3de94
#define public_6d3de97 _public_6d3de97
#define public_6d3de9e _public_6d3de9e

PROC_DECLARE(0x6d3daf0, internal_6d3daf0, public_6d3daf0);
extern "C" NAKED register_t __cdecl internal_6d3daf0()
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
        call public_6d3f120
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6d3db32
        mov eax, dword ptr ds : [esi+8]
        public_6d3db14 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6d3dbb7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6d3dbc5
        public_6d3db32 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6d3db3d
        mov eax, edx
        jmp public_6d3db14
        public_6d3db3d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        jne public_6d3db51
        public_6d3db46 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        je public_6d3db46
        public_6d3db51 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d3db14
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d3db6d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d3db84
        public_6d3db6d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6d3db84 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6d3db91
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d3db9f
        public_6d3db91 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6d3db9c
        mov dword ptr ds : [edx], ecx
        jmp public_6d3db9f
        public_6d3db9c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d3db9f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x28]
        mov dl, byte ptr ds : [ecx+0x28]
        mov byte ptr ds : [ecx+0x28], bl
        mov byte ptr ds : [esi+0x28], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6d3dc22
        public_6d3dbb7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6d3dbc2
        mov dword ptr ds : [ecx], eax
        jmp public_6d3dbc5
        public_6d3dbc2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6d3dbc5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6d3dbf3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d3dbda
        mov edx, dword ptr ds : [esi+4]
        jmp public_6d3dbf0
        public_6d3dbda : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        mov edx, eax
        jne public_6d3dbf0
        public_6d3dbe5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        je public_6d3dbe5
        public_6d3dbf0 : nop
        mov dword ptr ss : [ebp], edx
        public_6d3dbf3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6d3dc22
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d3dc07
        mov edx, dword ptr ds : [esi+4]
        jmp public_6d3dc1f
        public_6d3dc07 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        mov edx, eax
        jne public_6d3dc1f
        public_6d3dc13 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        je public_6d3dc13
        public_6d3dc1f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6d3dc22 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x28]
        mov bl, 1
        cmp cl, bl
        jne public_6d3de9e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6d3de97
        nop 
        public_6d3dc40 : nop
        cmp byte ptr ds : [eax+0x28], bl
        jne public_6d3de97
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6d3dcff
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6d3dcab
        mov byte ptr ds : [ecx+0x28], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d3dc7f
        mov dword ptr ds : [esi+4], ecx
        public_6d3dc7f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d3dc92
        mov dword ptr ds : [esi+4], edx
        jmp public_6d3dca0
        public_6d3dc92 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d3dc9d
        mov dword ptr ds : [esi], edx
        jmp public_6d3dca0
        public_6d3dc9d : nop
        mov dword ptr ds : [esi+8], edx
        public_6d3dca0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6d3dcab : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6d3dcbe
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        je public_6d3dd69
        public_6d3dcbe : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6d3dd9c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x28], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x28], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d3dce5
        mov dword ptr ds : [esi+4], ecx
        public_6d3dce5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d3dd81
        mov dword ptr ds : [esi+4], edx
        jmp public_6d3dd90
        public_6d3dcff : nop
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6d3dd52
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d3dd25
        mov dword ptr ds : [esi+4], ecx
        public_6d3dd25 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d3dd38
        mov dword ptr ds : [esi+4], edx
        jmp public_6d3dd47
        public_6d3dd38 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d3dd45
        mov dword ptr ds : [esi+8], edx
        jmp public_6d3dd47
        public_6d3dd45 : nop
        mov dword ptr ds : [esi], edx
        public_6d3dd47 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6d3dd52 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6d3ddf8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6d3ddf8
        public_6d3dd69 : nop
        mov byte ptr ds : [ecx+0x28], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6d3dc40
        jmp public_6d3de97
        public_6d3dd81 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d3dd8e
        mov dword ptr ds : [esi+8], edx
        jmp public_6d3dd90
        public_6d3dd8e : nop
        mov dword ptr ds : [esi], edx
        public_6d3dd90 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6d3dd9c : nop
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
        je public_6d3ddc6
        mov dword ptr ds : [esi+4], ecx
        public_6d3ddc6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d3ddde
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d3de94
        public_6d3ddde : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d3ddee
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d3de94
        public_6d3ddee : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d3de94
        public_6d3ddf8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6d3de46
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x28], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x28], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d3de1b
        mov dword ptr ds : [esi+4], ecx
        public_6d3de1b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d3de2e
        mov dword ptr ds : [esi+4], edx
        jmp public_6d3de3c
        public_6d3de2e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d3de39
        mov dword ptr ds : [esi], edx
        jmp public_6d3de3c
        public_6d3de39 : nop
        mov dword ptr ds : [esi+8], edx
        public_6d3de3c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6d3de46 : nop
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
        je public_6d3de6f
        mov dword ptr ds : [esi+4], ecx
        public_6d3de6f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d3de82
        mov dword ptr ds : [esi+4], edx
        jmp public_6d3de91
        public_6d3de82 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d3de8f
        mov dword ptr ds : [esi+8], edx
        jmp public_6d3de91
        public_6d3de8f : nop
        mov dword ptr ds : [esi], edx
        public_6d3de91 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d3de94 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6d3de97 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x28], bl
        public_6d3de9e : nop
        lea ecx, ds:[esi+0xC]
        call public_6d3cd20
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
        UNREACHABLE_TRAP(0x6d3daf0)
    }
}

#undef public_6d3db14
#undef public_6d3db32
#undef public_6d3db3d
#undef public_6d3db46
#undef public_6d3db51
#undef public_6d3db6d
#undef public_6d3db84
#undef public_6d3db91
#undef public_6d3db9c
#undef public_6d3db9f
#undef public_6d3dbb7
#undef public_6d3dbc2
#undef public_6d3dbc5
#undef public_6d3dbda
#undef public_6d3dbe5
#undef public_6d3dbf0
#undef public_6d3dbf3
#undef public_6d3dc07
#undef public_6d3dc13
#undef public_6d3dc1f
#undef public_6d3dc22
#undef public_6d3dc40
#undef public_6d3dc7f
#undef public_6d3dc92
#undef public_6d3dc9d
#undef public_6d3dca0
#undef public_6d3dcab
#undef public_6d3dcbe
#undef public_6d3dce5
#undef public_6d3dcff
#undef public_6d3dd25
#undef public_6d3dd38
#undef public_6d3dd45
#undef public_6d3dd47
#undef public_6d3dd52
#undef public_6d3dd69
#undef public_6d3dd81
#undef public_6d3dd8e
#undef public_6d3dd90
#undef public_6d3dd9c
#undef public_6d3ddc6
#undef public_6d3ddde
#undef public_6d3ddee
#undef public_6d3ddf8
#undef public_6d3de1b
#undef public_6d3de2e
#undef public_6d3de39
#undef public_6d3de3c
#undef public_6d3de46
#undef public_6d3de6f
#undef public_6d3de82
#undef public_6d3de8f
#undef public_6d3de91
#undef public_6d3de94
#undef public_6d3de97
#undef public_6d3de9e
