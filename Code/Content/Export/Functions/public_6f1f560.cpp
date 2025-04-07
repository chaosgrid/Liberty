#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1f560);
CLANG_FORWARD_PROC_SYMBOL(public_6f21650);
CLANG_FORWARD_PROC_SYMBOL(public_6f22a00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f1f584 _public_6f1f584
#define public_6f1f5a2 _public_6f1f5a2
#define public_6f1f5ad _public_6f1f5ad
#define public_6f1f5b6 _public_6f1f5b6
#define public_6f1f5c1 _public_6f1f5c1
#define public_6f1f5dd _public_6f1f5dd
#define public_6f1f5f4 _public_6f1f5f4
#define public_6f1f601 _public_6f1f601
#define public_6f1f60c _public_6f1f60c
#define public_6f1f60f _public_6f1f60f
#define public_6f1f627 _public_6f1f627
#define public_6f1f632 _public_6f1f632
#define public_6f1f635 _public_6f1f635
#define public_6f1f64a _public_6f1f64a
#define public_6f1f655 _public_6f1f655
#define public_6f1f660 _public_6f1f660
#define public_6f1f663 _public_6f1f663
#define public_6f1f677 _public_6f1f677
#define public_6f1f683 _public_6f1f683
#define public_6f1f68f _public_6f1f68f
#define public_6f1f692 _public_6f1f692
#define public_6f1f6b0 _public_6f1f6b0
#define public_6f1f6ef _public_6f1f6ef
#define public_6f1f702 _public_6f1f702
#define public_6f1f70d _public_6f1f70d
#define public_6f1f710 _public_6f1f710
#define public_6f1f71b _public_6f1f71b
#define public_6f1f72e _public_6f1f72e
#define public_6f1f755 _public_6f1f755
#define public_6f1f76f _public_6f1f76f
#define public_6f1f795 _public_6f1f795
#define public_6f1f7a8 _public_6f1f7a8
#define public_6f1f7b5 _public_6f1f7b5
#define public_6f1f7b7 _public_6f1f7b7
#define public_6f1f7c2 _public_6f1f7c2
#define public_6f1f7d9 _public_6f1f7d9
#define public_6f1f7f1 _public_6f1f7f1
#define public_6f1f7fe _public_6f1f7fe
#define public_6f1f800 _public_6f1f800
#define public_6f1f80c _public_6f1f80c
#define public_6f1f836 _public_6f1f836
#define public_6f1f84e _public_6f1f84e
#define public_6f1f85e _public_6f1f85e
#define public_6f1f868 _public_6f1f868
#define public_6f1f88b _public_6f1f88b
#define public_6f1f89e _public_6f1f89e
#define public_6f1f8a9 _public_6f1f8a9
#define public_6f1f8ac _public_6f1f8ac
#define public_6f1f8b6 _public_6f1f8b6
#define public_6f1f8df _public_6f1f8df
#define public_6f1f8f2 _public_6f1f8f2
#define public_6f1f8ff _public_6f1f8ff
#define public_6f1f901 _public_6f1f901
#define public_6f1f904 _public_6f1f904
#define public_6f1f907 _public_6f1f907
#define public_6f1f90e _public_6f1f90e

PROC_DECLARE(0x6f1f560, internal_6f1f560, public_6f1f560);
extern "C" NAKED register_t __cdecl internal_6f1f560()
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
        call public_6f21650
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f1f5a2
        mov eax, dword ptr ds : [esi+8]
        public_6f1f584 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f1f627
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f1f635
        public_6f1f5a2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f1f5ad
        mov eax, edx
        jmp public_6f1f584
        public_6f1f5ad : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x39]
        test bl, bl
        jne public_6f1f5c1
        public_6f1f5b6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x39]
        test bl, bl
        je public_6f1f5b6
        public_6f1f5c1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f1f584
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f1f5dd
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f1f5f4
        public_6f1f5dd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f1f5f4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f1f601
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f1f60f
        public_6f1f601 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f1f60c
        mov dword ptr ds : [edx], ecx
        jmp public_6f1f60f
        public_6f1f60c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f1f60f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x38]
        mov dl, byte ptr ds : [ecx+0x38]
        mov byte ptr ds : [ecx+0x38], bl
        mov byte ptr ds : [esi+0x38], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f1f692
        public_6f1f627 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f1f632
        mov dword ptr ds : [ecx], eax
        jmp public_6f1f635
        public_6f1f632 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f1f635 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f1f663
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f1f64a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f1f660
        public_6f1f64a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x39]
        test bl, bl
        mov edx, eax
        jne public_6f1f660
        public_6f1f655 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x39]
        test bl, bl
        je public_6f1f655
        public_6f1f660 : nop
        mov dword ptr ss : [ebp], edx
        public_6f1f663 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f1f692
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f1f677
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f1f68f
        public_6f1f677 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x39]
        test bl, bl
        mov edx, eax
        jne public_6f1f68f
        public_6f1f683 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x39]
        test bl, bl
        je public_6f1f683
        public_6f1f68f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f1f692 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x38]
        mov bl, 1
        cmp cl, bl
        jne public_6f1f90e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6f1f907
        nop 
        public_6f1f6b0 : nop
        cmp byte ptr ds : [eax+0x38], bl
        jne public_6f1f907
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f1f76f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x38]
        test dl, dl
        jne public_6f1f71b
        mov byte ptr ds : [ecx+0x38], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x38], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f1f6ef
        mov dword ptr ds : [esi+4], ecx
        public_6f1f6ef : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f1f702
        mov dword ptr ds : [esi+4], edx
        jmp public_6f1f710
        public_6f1f702 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f1f70d
        mov dword ptr ds : [esi], edx
        jmp public_6f1f710
        public_6f1f70d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f1f710 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f1f71b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x38], bl
        jne public_6f1f72e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x38], bl
        je public_6f1f7d9
        public_6f1f72e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x38], bl
        jne public_6f1f80c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x38], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x38], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f1f755
        mov dword ptr ds : [esi+4], ecx
        public_6f1f755 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f1f7f1
        mov dword ptr ds : [esi+4], edx
        jmp public_6f1f800
        public_6f1f76f : nop
        mov dl, byte ptr ds : [ecx+0x38]
        test dl, dl
        jne public_6f1f7c2
        mov byte ptr ds : [ecx+0x38], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x38], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f1f795
        mov dword ptr ds : [esi+4], ecx
        public_6f1f795 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f1f7a8
        mov dword ptr ds : [esi+4], edx
        jmp public_6f1f7b7
        public_6f1f7a8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f1f7b5
        mov dword ptr ds : [esi+8], edx
        jmp public_6f1f7b7
        public_6f1f7b5 : nop
        mov dword ptr ds : [esi], edx
        public_6f1f7b7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f1f7c2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x38], bl
        jne public_6f1f868
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x38], bl
        jne public_6f1f868
        public_6f1f7d9 : nop
        mov byte ptr ds : [ecx+0x38], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f1f6b0
        jmp public_6f1f907
        public_6f1f7f1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f1f7fe
        mov dword ptr ds : [esi+8], edx
        jmp public_6f1f800
        public_6f1f7fe : nop
        mov dword ptr ds : [esi], edx
        public_6f1f800 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f1f80c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x38]
        mov byte ptr ds : [ecx+0x38], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x38], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x38], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f1f836
        mov dword ptr ds : [esi+4], ecx
        public_6f1f836 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f1f84e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f1f904
        public_6f1f84e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f1f85e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f1f904
        public_6f1f85e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f1f904
        public_6f1f868 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x38], bl
        jne public_6f1f8b6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x38], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x38], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f1f88b
        mov dword ptr ds : [esi+4], ecx
        public_6f1f88b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f1f89e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f1f8ac
        public_6f1f89e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f1f8a9
        mov dword ptr ds : [esi], edx
        jmp public_6f1f8ac
        public_6f1f8a9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f1f8ac : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f1f8b6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x38]
        mov byte ptr ds : [ecx+0x38], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x38], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x38], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f1f8df
        mov dword ptr ds : [esi+4], ecx
        public_6f1f8df : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f1f8f2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f1f901
        public_6f1f8f2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f1f8ff
        mov dword ptr ds : [esi+8], edx
        jmp public_6f1f901
        public_6f1f8ff : nop
        mov dword ptr ds : [esi], edx
        public_6f1f901 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f1f904 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f1f907 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x38], bl
        public_6f1f90e : nop
        lea ecx, ds:[esi+0xC]
        call public_6f22a00
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
        UNREACHABLE_TRAP(0x6f1f560)
    }
}

#undef public_6f1f584
#undef public_6f1f5a2
#undef public_6f1f5ad
#undef public_6f1f5b6
#undef public_6f1f5c1
#undef public_6f1f5dd
#undef public_6f1f5f4
#undef public_6f1f601
#undef public_6f1f60c
#undef public_6f1f60f
#undef public_6f1f627
#undef public_6f1f632
#undef public_6f1f635
#undef public_6f1f64a
#undef public_6f1f655
#undef public_6f1f660
#undef public_6f1f663
#undef public_6f1f677
#undef public_6f1f683
#undef public_6f1f68f
#undef public_6f1f692
#undef public_6f1f6b0
#undef public_6f1f6ef
#undef public_6f1f702
#undef public_6f1f70d
#undef public_6f1f710
#undef public_6f1f71b
#undef public_6f1f72e
#undef public_6f1f755
#undef public_6f1f76f
#undef public_6f1f795
#undef public_6f1f7a8
#undef public_6f1f7b5
#undef public_6f1f7b7
#undef public_6f1f7c2
#undef public_6f1f7d9
#undef public_6f1f7f1
#undef public_6f1f7fe
#undef public_6f1f800
#undef public_6f1f80c
#undef public_6f1f836
#undef public_6f1f84e
#undef public_6f1f85e
#undef public_6f1f868
#undef public_6f1f88b
#undef public_6f1f89e
#undef public_6f1f8a9
#undef public_6f1f8ac
#undef public_6f1f8b6
#undef public_6f1f8df
#undef public_6f1f8f2
#undef public_6f1f8ff
#undef public_6f1f901
#undef public_6f1f904
#undef public_6f1f907
#undef public_6f1f90e
