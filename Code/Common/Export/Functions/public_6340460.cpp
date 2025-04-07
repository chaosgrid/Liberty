#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bcb0);
CLANG_FORWARD_PROC_SYMBOL(public_6340460);
CLANG_FORWARD_PROC_SYMBOL(public_6340e10);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6340484 _public_6340484
#define public_63404a2 _public_63404a2
#define public_63404ad _public_63404ad
#define public_63404c0 _public_63404c0
#define public_63404ce _public_63404ce
#define public_63404ea _public_63404ea
#define public_6340501 _public_6340501
#define public_634050e _public_634050e
#define public_6340519 _public_6340519
#define public_634051c _public_634051c
#define public_6340540 _public_6340540
#define public_634054b _public_634054b
#define public_634054e _public_634054e
#define public_6340563 _public_6340563
#define public_6340571 _public_6340571
#define public_634057f _public_634057f
#define public_6340582 _public_6340582
#define public_6340596 _public_6340596
#define public_63405a5 _public_63405a5
#define public_63405b4 _public_63405b4
#define public_63405b7 _public_63405b7
#define public_63405d7 _public_63405d7
#define public_6340622 _public_6340622
#define public_6340635 _public_6340635
#define public_6340640 _public_6340640
#define public_6340643 _public_6340643
#define public_634064e _public_634064e
#define public_6340667 _public_6340667
#define public_6340697 _public_6340697
#define public_63406b1 _public_63406b1
#define public_63406e0 _public_63406e0
#define public_63406f3 _public_63406f3
#define public_6340700 _public_6340700
#define public_6340702 _public_6340702
#define public_634070d _public_634070d
#define public_634072a _public_634072a
#define public_6340745 _public_6340745
#define public_6340752 _public_6340752
#define public_6340754 _public_6340754
#define public_6340760 _public_6340760
#define public_6340796 _public_6340796
#define public_63407ae _public_63407ae
#define public_63407be _public_63407be
#define public_63407c8 _public_63407c8
#define public_63407f4 _public_63407f4
#define public_6340807 _public_6340807
#define public_6340812 _public_6340812
#define public_6340815 _public_6340815
#define public_634081f _public_634081f
#define public_6340854 _public_6340854
#define public_6340867 _public_6340867
#define public_6340874 _public_6340874
#define public_6340876 _public_6340876
#define public_6340879 _public_6340879
#define public_634087c _public_634087c
#define public_6340886 _public_6340886

PROC_DECLARE(0x6340460, internal_6340460, public_6340460);
extern "C" NAKED register_t __cdecl internal_6340460()
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
        call public_6340e10
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_63404a2
        mov eax, dword ptr ds : [esi+8]
        public_6340484 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6340540
        mov dword ptr ds : [ecx+4], eax
        jmp public_634054e
        public_63404a2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_63404ad
        mov eax, edx
        jmp public_6340484
        public_63404ad : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0xB9]
        test bl, bl
        jne public_63404ce
        lea esp, ss:[esp]
        public_63404c0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0xB9]
        test bl, bl
        je public_63404c0
        public_63404ce : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6340484
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_63404ea
        mov dword ptr ds : [eax+4], ecx
        jmp public_6340501
        public_63404ea : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6340501 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_634050e
        mov dword ptr ds : [edx+4], ecx
        jmp public_634051c
        public_634050e : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6340519
        mov dword ptr ds : [edx], ecx
        jmp public_634051c
        public_6340519 : nop
        mov dword ptr ds : [edx+8], ecx
        public_634051c : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0xB8]
        mov dl, byte ptr ds : [ecx+0xB8]
        mov byte ptr ds : [ecx+0xB8], bl
        mov byte ptr ds : [esi+0xB8], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_63405b7
        public_6340540 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_634054b
        mov dword ptr ds : [ecx], eax
        jmp public_634054e
        public_634054b : nop
        mov dword ptr ds : [ecx+8], eax
        public_634054e : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6340582
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6340563
        mov edx, dword ptr ds : [esi+4]
        jmp public_634057f
        public_6340563 : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0xB9]
        test bl, bl
        mov edx, eax
        jne public_634057f
        public_6340571 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0xB9]
        test bl, bl
        je public_6340571
        public_634057f : nop
        mov dword ptr ss : [ebp], edx
        public_6340582 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_63405b7
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6340596
        mov edx, dword ptr ds : [esi+4]
        jmp public_63405b4
        public_6340596 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0xB9]
        test bl, bl
        mov edx, eax
        jne public_63405b4
        public_63405a5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0xB9]
        test bl, bl
        je public_63405a5
        public_63405b4 : nop
        mov dword ptr ss : [ebp+8], edx
        public_63405b7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0xB8]
        mov bl, 1
        cmp cl, bl
        jne public_6340886
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_634087c
        public_63405d7 : nop
        cmp byte ptr ds : [eax+0xB8], bl
        jne public_634087c
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_63406b1
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0xB8]
        test dl, dl
        jne public_634064e
        mov byte ptr ds : [ecx+0xB8], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0xB8], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6340622
        mov dword ptr ds : [esi+4], ecx
        public_6340622 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6340635
        mov dword ptr ds : [esi+4], edx
        jmp public_6340643
        public_6340635 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6340640
        mov dword ptr ds : [esi], edx
        jmp public_6340643
        public_6340640 : nop
        mov dword ptr ds : [esi+8], edx
        public_6340643 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_634064e : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xB8], bl
        jne public_6340667
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xB8], bl
        je public_634072a
        public_6340667 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xB8], bl
        jne public_6340760
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0xB8], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0xB8], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6340697
        mov dword ptr ds : [esi+4], ecx
        public_6340697 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6340745
        mov dword ptr ds : [esi+4], edx
        jmp public_6340754
        public_63406b1 : nop
        mov dl, byte ptr ds : [ecx+0xB8]
        test dl, dl
        jne public_634070d
        mov byte ptr ds : [ecx+0xB8], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xB8], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_63406e0
        mov dword ptr ds : [esi+4], ecx
        public_63406e0 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_63406f3
        mov dword ptr ds : [esi+4], edx
        jmp public_6340702
        public_63406f3 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6340700
        mov dword ptr ds : [esi+8], edx
        jmp public_6340702
        public_6340700 : nop
        mov dword ptr ds : [esi], edx
        public_6340702 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_634070d : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xB8], bl
        jne public_63407c8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xB8], bl
        jne public_63407c8
        public_634072a : nop
        mov byte ptr ds : [ecx+0xB8], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_63405d7
        jmp public_634087c
        public_6340745 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6340752
        mov dword ptr ds : [esi+8], edx
        jmp public_6340754
        public_6340752 : nop
        mov dword ptr ds : [esi], edx
        public_6340754 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6340760 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0xB8]
        mov byte ptr ds : [ecx+0xB8], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0xB8], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0xB8], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6340796
        mov dword ptr ds : [esi+4], ecx
        public_6340796 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_63407ae
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6340879
        public_63407ae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_63407be
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6340879
        public_63407be : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6340879
        public_63407c8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xB8], bl
        jne public_634081f
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0xB8], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0xB8], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_63407f4
        mov dword ptr ds : [esi+4], ecx
        public_63407f4 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6340807
        mov dword ptr ds : [esi+4], edx
        jmp public_6340815
        public_6340807 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6340812
        mov dword ptr ds : [esi], edx
        jmp public_6340815
        public_6340812 : nop
        mov dword ptr ds : [esi+8], edx
        public_6340815 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_634081f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0xB8]
        mov byte ptr ds : [ecx+0xB8], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0xB8], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0xB8], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6340854
        mov dword ptr ds : [esi+4], ecx
        public_6340854 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6340867
        mov dword ptr ds : [esi+4], edx
        jmp public_6340876
        public_6340867 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6340874
        mov dword ptr ds : [esi+8], edx
        jmp public_6340876
        public_6340874 : nop
        mov dword ptr ds : [esi], edx
        public_6340876 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6340879 : nop
        mov dword ptr ds : [ecx+4], edx
        public_634087c : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0xB8], bl
        public_6340886 : nop
        lea ecx, ds:[esi+0xC]
        call public_633bcb0
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
        UNREACHABLE_TRAP(0x6340460)
    }
}

#undef public_6340484
#undef public_63404a2
#undef public_63404ad
#undef public_63404c0
#undef public_63404ce
#undef public_63404ea
#undef public_6340501
#undef public_634050e
#undef public_6340519
#undef public_634051c
#undef public_6340540
#undef public_634054b
#undef public_634054e
#undef public_6340563
#undef public_6340571
#undef public_634057f
#undef public_6340582
#undef public_6340596
#undef public_63405a5
#undef public_63405b4
#undef public_63405b7
#undef public_63405d7
#undef public_6340622
#undef public_6340635
#undef public_6340640
#undef public_6340643
#undef public_634064e
#undef public_6340667
#undef public_6340697
#undef public_63406b1
#undef public_63406e0
#undef public_63406f3
#undef public_6340700
#undef public_6340702
#undef public_634070d
#undef public_634072a
#undef public_6340745
#undef public_6340752
#undef public_6340754
#undef public_6340760
#undef public_6340796
#undef public_63407ae
#undef public_63407be
#undef public_63407c8
#undef public_63407f4
#undef public_6340807
#undef public_6340812
#undef public_6340815
#undef public_634081f
#undef public_6340854
#undef public_6340867
#undef public_6340874
#undef public_6340876
#undef public_6340879
#undef public_634087c
#undef public_6340886
