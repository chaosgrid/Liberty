#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63165f0);
CLANG_FORWARD_PROC_SYMBOL(public_63177f0);
CLANG_FORWARD_PROC_SYMBOL(public_6319c30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6317814 _public_6317814
#define public_6317832 _public_6317832
#define public_631783d _public_631783d
#define public_6317846 _public_6317846
#define public_6317851 _public_6317851
#define public_631786d _public_631786d
#define public_6317884 _public_6317884
#define public_6317891 _public_6317891
#define public_631789c _public_631789c
#define public_631789f _public_631789f
#define public_63178b7 _public_63178b7
#define public_63178c2 _public_63178c2
#define public_63178c5 _public_63178c5
#define public_63178da _public_63178da
#define public_63178e5 _public_63178e5
#define public_63178f0 _public_63178f0
#define public_63178f3 _public_63178f3
#define public_6317907 _public_6317907
#define public_6317913 _public_6317913
#define public_631791f _public_631791f
#define public_6317922 _public_6317922
#define public_6317940 _public_6317940
#define public_631797f _public_631797f
#define public_6317992 _public_6317992
#define public_631799d _public_631799d
#define public_63179a0 _public_63179a0
#define public_63179ab _public_63179ab
#define public_63179be _public_63179be
#define public_63179e5 _public_63179e5
#define public_63179ff _public_63179ff
#define public_6317a25 _public_6317a25
#define public_6317a38 _public_6317a38
#define public_6317a45 _public_6317a45
#define public_6317a47 _public_6317a47
#define public_6317a52 _public_6317a52
#define public_6317a69 _public_6317a69
#define public_6317a81 _public_6317a81
#define public_6317a8e _public_6317a8e
#define public_6317a90 _public_6317a90
#define public_6317a9c _public_6317a9c
#define public_6317ac6 _public_6317ac6
#define public_6317ade _public_6317ade
#define public_6317aee _public_6317aee
#define public_6317af8 _public_6317af8
#define public_6317b1b _public_6317b1b
#define public_6317b2e _public_6317b2e
#define public_6317b39 _public_6317b39
#define public_6317b3c _public_6317b3c
#define public_6317b46 _public_6317b46
#define public_6317b6f _public_6317b6f
#define public_6317b82 _public_6317b82
#define public_6317b8f _public_6317b8f
#define public_6317b91 _public_6317b91
#define public_6317b94 _public_6317b94
#define public_6317b97 _public_6317b97
#define public_6317b9e _public_6317b9e

PROC_DECLARE(0x63177f0, internal_63177f0, public_63177f0);
extern "C" NAKED register_t __cdecl internal_63177f0()
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
        call public_6319c30
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6317832
        mov eax, dword ptr ds : [esi+8]
        public_6317814 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_63178b7
        mov dword ptr ds : [ecx+4], eax
        jmp public_63178c5
        public_6317832 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_631783d
        mov eax, edx
        jmp public_6317814
        public_631783d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x75]
        test bl, bl
        jne public_6317851
        public_6317846 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x75]
        test bl, bl
        je public_6317846
        public_6317851 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6317814
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_631786d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6317884
        public_631786d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6317884 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6317891
        mov dword ptr ds : [edx+4], ecx
        jmp public_631789f
        public_6317891 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_631789c
        mov dword ptr ds : [edx], ecx
        jmp public_631789f
        public_631789c : nop
        mov dword ptr ds : [edx+8], ecx
        public_631789f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x74]
        mov dl, byte ptr ds : [ecx+0x74]
        mov byte ptr ds : [ecx+0x74], bl
        mov byte ptr ds : [esi+0x74], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6317922
        public_63178b7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_63178c2
        mov dword ptr ds : [ecx], eax
        jmp public_63178c5
        public_63178c2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_63178c5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_63178f3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_63178da
        mov edx, dword ptr ds : [esi+4]
        jmp public_63178f0
        public_63178da : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x75]
        test bl, bl
        mov edx, eax
        jne public_63178f0
        public_63178e5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x75]
        test bl, bl
        je public_63178e5
        public_63178f0 : nop
        mov dword ptr ss : [ebp], edx
        public_63178f3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6317922
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6317907
        mov edx, dword ptr ds : [esi+4]
        jmp public_631791f
        public_6317907 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x75]
        test bl, bl
        mov edx, eax
        jne public_631791f
        public_6317913 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x75]
        test bl, bl
        je public_6317913
        public_631791f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6317922 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x74]
        mov bl, 1
        cmp cl, bl
        jne public_6317b9e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6317b97
        nop 
        public_6317940 : nop
        cmp byte ptr ds : [eax+0x74], bl
        jne public_6317b97
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_63179ff
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x74]
        test dl, dl
        jne public_63179ab
        mov byte ptr ds : [ecx+0x74], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x74], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_631797f
        mov dword ptr ds : [esi+4], ecx
        public_631797f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6317992
        mov dword ptr ds : [esi+4], edx
        jmp public_63179a0
        public_6317992 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_631799d
        mov dword ptr ds : [esi], edx
        jmp public_63179a0
        public_631799d : nop
        mov dword ptr ds : [esi+8], edx
        public_63179a0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_63179ab : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x74], bl
        jne public_63179be
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x74], bl
        je public_6317a69
        public_63179be : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x74], bl
        jne public_6317a9c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x74], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x74], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_63179e5
        mov dword ptr ds : [esi+4], ecx
        public_63179e5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6317a81
        mov dword ptr ds : [esi+4], edx
        jmp public_6317a90
        public_63179ff : nop
        mov dl, byte ptr ds : [ecx+0x74]
        test dl, dl
        jne public_6317a52
        mov byte ptr ds : [ecx+0x74], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x74], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6317a25
        mov dword ptr ds : [esi+4], ecx
        public_6317a25 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6317a38
        mov dword ptr ds : [esi+4], edx
        jmp public_6317a47
        public_6317a38 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6317a45
        mov dword ptr ds : [esi+8], edx
        jmp public_6317a47
        public_6317a45 : nop
        mov dword ptr ds : [esi], edx
        public_6317a47 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6317a52 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x74], bl
        jne public_6317af8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x74], bl
        jne public_6317af8
        public_6317a69 : nop
        mov byte ptr ds : [ecx+0x74], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6317940
        jmp public_6317b97
        public_6317a81 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6317a8e
        mov dword ptr ds : [esi+8], edx
        jmp public_6317a90
        public_6317a8e : nop
        mov dword ptr ds : [esi], edx
        public_6317a90 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6317a9c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x74]
        mov byte ptr ds : [ecx+0x74], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x74], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x74], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6317ac6
        mov dword ptr ds : [esi+4], ecx
        public_6317ac6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6317ade
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6317b94
        public_6317ade : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6317aee
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6317b94
        public_6317aee : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6317b94
        public_6317af8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x74], bl
        jne public_6317b46
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x74], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x74], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6317b1b
        mov dword ptr ds : [esi+4], ecx
        public_6317b1b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6317b2e
        mov dword ptr ds : [esi+4], edx
        jmp public_6317b3c
        public_6317b2e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6317b39
        mov dword ptr ds : [esi], edx
        jmp public_6317b3c
        public_6317b39 : nop
        mov dword ptr ds : [esi+8], edx
        public_6317b3c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6317b46 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x74]
        mov byte ptr ds : [ecx+0x74], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x74], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x74], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6317b6f
        mov dword ptr ds : [esi+4], ecx
        public_6317b6f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6317b82
        mov dword ptr ds : [esi+4], edx
        jmp public_6317b91
        public_6317b82 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6317b8f
        mov dword ptr ds : [esi+8], edx
        jmp public_6317b91
        public_6317b8f : nop
        mov dword ptr ds : [esi], edx
        public_6317b91 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6317b94 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6317b97 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x74], bl
        public_6317b9e : nop
        lea ecx, ds:[esi+0xC]
        call public_63165f0
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
        UNREACHABLE_TRAP(0x63177f0)
    }
}

#undef public_6317814
#undef public_6317832
#undef public_631783d
#undef public_6317846
#undef public_6317851
#undef public_631786d
#undef public_6317884
#undef public_6317891
#undef public_631789c
#undef public_631789f
#undef public_63178b7
#undef public_63178c2
#undef public_63178c5
#undef public_63178da
#undef public_63178e5
#undef public_63178f0
#undef public_63178f3
#undef public_6317907
#undef public_6317913
#undef public_631791f
#undef public_6317922
#undef public_6317940
#undef public_631797f
#undef public_6317992
#undef public_631799d
#undef public_63179a0
#undef public_63179ab
#undef public_63179be
#undef public_63179e5
#undef public_63179ff
#undef public_6317a25
#undef public_6317a38
#undef public_6317a45
#undef public_6317a47
#undef public_6317a52
#undef public_6317a69
#undef public_6317a81
#undef public_6317a8e
#undef public_6317a90
#undef public_6317a9c
#undef public_6317ac6
#undef public_6317ade
#undef public_6317aee
#undef public_6317af8
#undef public_6317b1b
#undef public_6317b2e
#undef public_6317b39
#undef public_6317b3c
#undef public_6317b46
#undef public_6317b6f
#undef public_6317b82
#undef public_6317b8f
#undef public_6317b91
#undef public_6317b94
#undef public_6317b97
#undef public_6317b9e
