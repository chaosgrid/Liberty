#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6277dd0);
CLANG_FORWARD_PROC_SYMBOL(public_62782b0);
CLANG_FORWARD_PROC_SYMBOL(public_6279d90);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6277df4 _public_6277df4
#define public_6277e12 _public_6277e12
#define public_6277e1d _public_6277e1d
#define public_6277e26 _public_6277e26
#define public_6277e31 _public_6277e31
#define public_6277e4d _public_6277e4d
#define public_6277e64 _public_6277e64
#define public_6277e71 _public_6277e71
#define public_6277e7c _public_6277e7c
#define public_6277e7f _public_6277e7f
#define public_6277e97 _public_6277e97
#define public_6277ea2 _public_6277ea2
#define public_6277ea5 _public_6277ea5
#define public_6277eba _public_6277eba
#define public_6277ec5 _public_6277ec5
#define public_6277ed0 _public_6277ed0
#define public_6277ed3 _public_6277ed3
#define public_6277ee7 _public_6277ee7
#define public_6277ef3 _public_6277ef3
#define public_6277eff _public_6277eff
#define public_6277f02 _public_6277f02
#define public_6277f20 _public_6277f20
#define public_6277f5f _public_6277f5f
#define public_6277f72 _public_6277f72
#define public_6277f7d _public_6277f7d
#define public_6277f80 _public_6277f80
#define public_6277f8b _public_6277f8b
#define public_6277f9e _public_6277f9e
#define public_6277fc5 _public_6277fc5
#define public_6277fdf _public_6277fdf
#define public_6278005 _public_6278005
#define public_6278018 _public_6278018
#define public_6278025 _public_6278025
#define public_6278027 _public_6278027
#define public_6278032 _public_6278032
#define public_6278049 _public_6278049
#define public_6278061 _public_6278061
#define public_627806e _public_627806e
#define public_6278070 _public_6278070
#define public_627807c _public_627807c
#define public_62780a6 _public_62780a6
#define public_62780be _public_62780be
#define public_62780ce _public_62780ce
#define public_62780d8 _public_62780d8
#define public_62780fb _public_62780fb
#define public_627810e _public_627810e
#define public_6278119 _public_6278119
#define public_627811c _public_627811c
#define public_6278126 _public_6278126
#define public_627814f _public_627814f
#define public_6278162 _public_6278162
#define public_627816f _public_627816f
#define public_6278171 _public_6278171
#define public_6278174 _public_6278174
#define public_6278177 _public_6278177
#define public_627817e _public_627817e

PROC_DECLARE(0x6277dd0, internal_6277dd0, public_6277dd0);
extern "C" NAKED register_t __cdecl internal_6277dd0()
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
        call public_62782b0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6277e12
        mov eax, dword ptr ds : [esi+8]
        public_6277df4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6277e97
        mov dword ptr ds : [ecx+4], eax
        jmp public_6277ea5
        public_6277e12 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6277e1d
        mov eax, edx
        jmp public_6277df4
        public_6277e1d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        jne public_6277e31
        public_6277e26 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        je public_6277e26
        public_6277e31 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6277df4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6277e4d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6277e64
        public_6277e4d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6277e64 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6277e71
        mov dword ptr ds : [edx+4], ecx
        jmp public_6277e7f
        public_6277e71 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6277e7c
        mov dword ptr ds : [edx], ecx
        jmp public_6277e7f
        public_6277e7c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6277e7f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x34]
        mov dl, byte ptr ds : [ecx+0x34]
        mov byte ptr ds : [ecx+0x34], bl
        mov byte ptr ds : [esi+0x34], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6277f02
        public_6277e97 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6277ea2
        mov dword ptr ds : [ecx], eax
        jmp public_6277ea5
        public_6277ea2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6277ea5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6277ed3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6277eba
        mov edx, dword ptr ds : [esi+4]
        jmp public_6277ed0
        public_6277eba : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        mov edx, eax
        jne public_6277ed0
        public_6277ec5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        je public_6277ec5
        public_6277ed0 : nop
        mov dword ptr ss : [ebp], edx
        public_6277ed3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6277f02
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6277ee7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6277eff
        public_6277ee7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        mov edx, eax
        jne public_6277eff
        public_6277ef3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        je public_6277ef3
        public_6277eff : nop
        mov dword ptr ss : [ebp+8], edx
        public_6277f02 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x34]
        mov bl, 1
        cmp cl, bl
        jne public_627817e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6278177
        nop 
        public_6277f20 : nop
        cmp byte ptr ds : [eax+0x34], bl
        jne public_6278177
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6277fdf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_6277f8b
        mov byte ptr ds : [ecx+0x34], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x34], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6277f5f
        mov dword ptr ds : [esi+4], ecx
        public_6277f5f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6277f72
        mov dword ptr ds : [esi+4], edx
        jmp public_6277f80
        public_6277f72 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6277f7d
        mov dword ptr ds : [esi], edx
        jmp public_6277f80
        public_6277f7d : nop
        mov dword ptr ds : [esi+8], edx
        public_6277f80 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6277f8b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_6277f9e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x34], bl
        je public_6278049
        public_6277f9e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_627807c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x34], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x34], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6277fc5
        mov dword ptr ds : [esi+4], ecx
        public_6277fc5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6278061
        mov dword ptr ds : [esi+4], edx
        jmp public_6278070
        public_6277fdf : nop
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_6278032
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6278005
        mov dword ptr ds : [esi+4], ecx
        public_6278005 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6278018
        mov dword ptr ds : [esi+4], edx
        jmp public_6278027
        public_6278018 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6278025
        mov dword ptr ds : [esi+8], edx
        jmp public_6278027
        public_6278025 : nop
        mov dword ptr ds : [esi], edx
        public_6278027 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6278032 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_62780d8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_62780d8
        public_6278049 : nop
        mov byte ptr ds : [ecx+0x34], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6277f20
        jmp public_6278177
        public_6278061 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_627806e
        mov dword ptr ds : [esi+8], edx
        jmp public_6278070
        public_627806e : nop
        mov dword ptr ds : [esi], edx
        public_6278070 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_627807c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x34]
        mov byte ptr ds : [ecx+0x34], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x34], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62780a6
        mov dword ptr ds : [esi+4], ecx
        public_62780a6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62780be
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6278174
        public_62780be : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62780ce
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6278174
        public_62780ce : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6278174
        public_62780d8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_6278126
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x34], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x34], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62780fb
        mov dword ptr ds : [esi+4], ecx
        public_62780fb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_627810e
        mov dword ptr ds : [esi+4], edx
        jmp public_627811c
        public_627810e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6278119
        mov dword ptr ds : [esi], edx
        jmp public_627811c
        public_6278119 : nop
        mov dword ptr ds : [esi+8], edx
        public_627811c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6278126 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x34]
        mov byte ptr ds : [ecx+0x34], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x34], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_627814f
        mov dword ptr ds : [esi+4], ecx
        public_627814f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6278162
        mov dword ptr ds : [esi+4], edx
        jmp public_6278171
        public_6278162 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_627816f
        mov dword ptr ds : [esi+8], edx
        jmp public_6278171
        public_627816f : nop
        mov dword ptr ds : [esi], edx
        public_6278171 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6278174 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6278177 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x34], bl
        public_627817e : nop
        lea ecx, ds:[esi+0xC]
        call public_6279d90
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
        UNREACHABLE_TRAP(0x6277dd0)
    }
}

#undef public_6277df4
#undef public_6277e12
#undef public_6277e1d
#undef public_6277e26
#undef public_6277e31
#undef public_6277e4d
#undef public_6277e64
#undef public_6277e71
#undef public_6277e7c
#undef public_6277e7f
#undef public_6277e97
#undef public_6277ea2
#undef public_6277ea5
#undef public_6277eba
#undef public_6277ec5
#undef public_6277ed0
#undef public_6277ed3
#undef public_6277ee7
#undef public_6277ef3
#undef public_6277eff
#undef public_6277f02
#undef public_6277f20
#undef public_6277f5f
#undef public_6277f72
#undef public_6277f7d
#undef public_6277f80
#undef public_6277f8b
#undef public_6277f9e
#undef public_6277fc5
#undef public_6277fdf
#undef public_6278005
#undef public_6278018
#undef public_6278025
#undef public_6278027
#undef public_6278032
#undef public_6278049
#undef public_6278061
#undef public_627806e
#undef public_6278070
#undef public_627807c
#undef public_62780a6
#undef public_62780be
#undef public_62780ce
#undef public_62780d8
#undef public_62780fb
#undef public_627810e
#undef public_6278119
#undef public_627811c
#undef public_6278126
#undef public_627814f
#undef public_6278162
#undef public_627816f
#undef public_6278171
#undef public_6278174
#undef public_6278177
#undef public_627817e
