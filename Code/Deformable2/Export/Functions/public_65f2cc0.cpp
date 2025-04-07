#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f2cc0);
CLANG_FORWARD_PROC_SYMBOL(public_65f34d0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f2ce4 _public_65f2ce4
#define public_65f2d02 _public_65f2d02
#define public_65f2d0d _public_65f2d0d
#define public_65f2d16 _public_65f2d16
#define public_65f2d21 _public_65f2d21
#define public_65f2d3d _public_65f2d3d
#define public_65f2d54 _public_65f2d54
#define public_65f2d61 _public_65f2d61
#define public_65f2d6c _public_65f2d6c
#define public_65f2d6f _public_65f2d6f
#define public_65f2d87 _public_65f2d87
#define public_65f2d92 _public_65f2d92
#define public_65f2d95 _public_65f2d95
#define public_65f2daa _public_65f2daa
#define public_65f2db5 _public_65f2db5
#define public_65f2dc0 _public_65f2dc0
#define public_65f2dc3 _public_65f2dc3
#define public_65f2dd7 _public_65f2dd7
#define public_65f2de3 _public_65f2de3
#define public_65f2def _public_65f2def
#define public_65f2df2 _public_65f2df2
#define public_65f2e10 _public_65f2e10
#define public_65f2e4f _public_65f2e4f
#define public_65f2e62 _public_65f2e62
#define public_65f2e6d _public_65f2e6d
#define public_65f2e70 _public_65f2e70
#define public_65f2e7b _public_65f2e7b
#define public_65f2e8e _public_65f2e8e
#define public_65f2eb5 _public_65f2eb5
#define public_65f2ecf _public_65f2ecf
#define public_65f2ef5 _public_65f2ef5
#define public_65f2f08 _public_65f2f08
#define public_65f2f15 _public_65f2f15
#define public_65f2f17 _public_65f2f17
#define public_65f2f22 _public_65f2f22
#define public_65f2f39 _public_65f2f39
#define public_65f2f51 _public_65f2f51
#define public_65f2f5e _public_65f2f5e
#define public_65f2f60 _public_65f2f60
#define public_65f2f6c _public_65f2f6c
#define public_65f2f96 _public_65f2f96
#define public_65f2fae _public_65f2fae
#define public_65f2fbe _public_65f2fbe
#define public_65f2fc8 _public_65f2fc8
#define public_65f2feb _public_65f2feb
#define public_65f2ffe _public_65f2ffe
#define public_65f3009 _public_65f3009
#define public_65f300c _public_65f300c
#define public_65f3016 _public_65f3016
#define public_65f303f _public_65f303f
#define public_65f3052 _public_65f3052
#define public_65f305f _public_65f305f
#define public_65f3061 _public_65f3061
#define public_65f3064 _public_65f3064
#define public_65f3067 _public_65f3067
#define public_65f306a _public_65f306a

PROC_DECLARE(0x65f2cc0, internal_65f2cc0, public_65f2cc0);
extern "C" NAKED register_t __cdecl internal_65f2cc0()
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
        call public_65f34d0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_65f2d02
        mov eax, dword ptr ds : [esi+8]
        public_65f2ce4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_65f2d87
        mov dword ptr ds : [ecx+4], eax
        jmp public_65f2d95
        public_65f2d02 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_65f2d0d
        mov eax, edx
        jmp public_65f2ce4
        public_65f2d0d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_65f2d21
        public_65f2d16 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_65f2d16
        public_65f2d21 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_65f2ce4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_65f2d3d
        mov dword ptr ds : [eax+4], ecx
        jmp public_65f2d54
        public_65f2d3d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_65f2d54 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_65f2d61
        mov dword ptr ds : [edx+4], ecx
        jmp public_65f2d6f
        public_65f2d61 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_65f2d6c
        mov dword ptr ds : [edx], ecx
        jmp public_65f2d6f
        public_65f2d6c : nop
        mov dword ptr ds : [edx+8], ecx
        public_65f2d6f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_65f2df2
        public_65f2d87 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_65f2d92
        mov dword ptr ds : [ecx], eax
        jmp public_65f2d95
        public_65f2d92 : nop
        mov dword ptr ds : [ecx+8], eax
        public_65f2d95 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_65f2dc3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_65f2daa
        mov edx, dword ptr ds : [esi+4]
        jmp public_65f2dc0
        public_65f2daa : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_65f2dc0
        public_65f2db5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_65f2db5
        public_65f2dc0 : nop
        mov dword ptr ss : [ebp], edx
        public_65f2dc3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_65f2df2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_65f2dd7
        mov edx, dword ptr ds : [esi+4]
        jmp public_65f2def
        public_65f2dd7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_65f2def
        public_65f2de3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_65f2de3
        public_65f2def : nop
        mov dword ptr ss : [ebp+8], edx
        public_65f2df2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x14]
        mov bl, 1
        cmp dl, bl
        jne public_65f306a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_65f3067
        nop 
        public_65f2e10 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_65f3067
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_65f2ecf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_65f2e7b
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_65f2e4f
        mov dword ptr ds : [esi+4], ecx
        public_65f2e4f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_65f2e62
        mov dword ptr ds : [esi+4], edx
        jmp public_65f2e70
        public_65f2e62 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_65f2e6d
        mov dword ptr ds : [esi], edx
        jmp public_65f2e70
        public_65f2e6d : nop
        mov dword ptr ds : [esi+8], edx
        public_65f2e70 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_65f2e7b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_65f2e8e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_65f2f39
        public_65f2e8e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_65f2f6c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_65f2eb5
        mov dword ptr ds : [esi+4], ecx
        public_65f2eb5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_65f2f51
        mov dword ptr ds : [esi+4], edx
        jmp public_65f2f60
        public_65f2ecf : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_65f2f22
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_65f2ef5
        mov dword ptr ds : [esi+4], ecx
        public_65f2ef5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_65f2f08
        mov dword ptr ds : [esi+4], edx
        jmp public_65f2f17
        public_65f2f08 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_65f2f15
        mov dword ptr ds : [esi+8], edx
        jmp public_65f2f17
        public_65f2f15 : nop
        mov dword ptr ds : [esi], edx
        public_65f2f17 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_65f2f22 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_65f2fc8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_65f2fc8
        public_65f2f39 : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_65f2e10
        jmp public_65f3067
        public_65f2f51 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_65f2f5e
        mov dword ptr ds : [esi+8], edx
        jmp public_65f2f60
        public_65f2f5e : nop
        mov dword ptr ds : [esi], edx
        public_65f2f60 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_65f2f6c : nop
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
        je public_65f2f96
        mov dword ptr ds : [esi+4], ecx
        public_65f2f96 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_65f2fae
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_65f3064
        public_65f2fae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_65f2fbe
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_65f3064
        public_65f2fbe : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_65f3064
        public_65f2fc8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_65f3016
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_65f2feb
        mov dword ptr ds : [esi+4], ecx
        public_65f2feb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_65f2ffe
        mov dword ptr ds : [esi+4], edx
        jmp public_65f300c
        public_65f2ffe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_65f3009
        mov dword ptr ds : [esi], edx
        jmp public_65f300c
        public_65f3009 : nop
        mov dword ptr ds : [esi+8], edx
        public_65f300c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_65f3016 : nop
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
        je public_65f303f
        mov dword ptr ds : [esi+4], ecx
        public_65f303f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_65f3052
        mov dword ptr ds : [esi+4], edx
        jmp public_65f3061
        public_65f3052 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_65f305f
        mov dword ptr ds : [esi+8], edx
        jmp public_65f3061
        public_65f305f : nop
        mov dword ptr ds : [esi], edx
        public_65f3061 : nop
        mov dword ptr ds : [edx+8], ecx
        public_65f3064 : nop
        mov dword ptr ds : [ecx+4], edx
        public_65f3067 : nop
        mov byte ptr ds : [eax+0x14], bl
        public_65f306a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6600bb0
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
        UNREACHABLE_TRAP(0x65f2cc0)
    }
}

#undef public_65f2ce4
#undef public_65f2d02
#undef public_65f2d0d
#undef public_65f2d16
#undef public_65f2d21
#undef public_65f2d3d
#undef public_65f2d54
#undef public_65f2d61
#undef public_65f2d6c
#undef public_65f2d6f
#undef public_65f2d87
#undef public_65f2d92
#undef public_65f2d95
#undef public_65f2daa
#undef public_65f2db5
#undef public_65f2dc0
#undef public_65f2dc3
#undef public_65f2dd7
#undef public_65f2de3
#undef public_65f2def
#undef public_65f2df2
#undef public_65f2e10
#undef public_65f2e4f
#undef public_65f2e62
#undef public_65f2e6d
#undef public_65f2e70
#undef public_65f2e7b
#undef public_65f2e8e
#undef public_65f2eb5
#undef public_65f2ecf
#undef public_65f2ef5
#undef public_65f2f08
#undef public_65f2f15
#undef public_65f2f17
#undef public_65f2f22
#undef public_65f2f39
#undef public_65f2f51
#undef public_65f2f5e
#undef public_65f2f60
#undef public_65f2f6c
#undef public_65f2f96
#undef public_65f2fae
#undef public_65f2fbe
#undef public_65f2fc8
#undef public_65f2feb
#undef public_65f2ffe
#undef public_65f3009
#undef public_65f300c
#undef public_65f3016
#undef public_65f303f
#undef public_65f3052
#undef public_65f305f
#undef public_65f3061
#undef public_65f3064
#undef public_65f3067
#undef public_65f306a
