#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6316580);
CLANG_FORWARD_PROC_SYMBOL(public_6317350);
CLANG_FORWARD_PROC_SYMBOL(public_6319b80);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6317374 _public_6317374
#define public_6317392 _public_6317392
#define public_631739d _public_631739d
#define public_63173a6 _public_63173a6
#define public_63173b1 _public_63173b1
#define public_63173cd _public_63173cd
#define public_63173e4 _public_63173e4
#define public_63173f1 _public_63173f1
#define public_63173fc _public_63173fc
#define public_63173ff _public_63173ff
#define public_6317417 _public_6317417
#define public_6317422 _public_6317422
#define public_6317425 _public_6317425
#define public_631743a _public_631743a
#define public_6317445 _public_6317445
#define public_6317450 _public_6317450
#define public_6317453 _public_6317453
#define public_6317467 _public_6317467
#define public_6317473 _public_6317473
#define public_631747f _public_631747f
#define public_6317482 _public_6317482
#define public_63174a0 _public_63174a0
#define public_63174df _public_63174df
#define public_63174f2 _public_63174f2
#define public_63174fd _public_63174fd
#define public_6317500 _public_6317500
#define public_631750b _public_631750b
#define public_631751e _public_631751e
#define public_6317545 _public_6317545
#define public_631755f _public_631755f
#define public_6317585 _public_6317585
#define public_6317598 _public_6317598
#define public_63175a5 _public_63175a5
#define public_63175a7 _public_63175a7
#define public_63175b2 _public_63175b2
#define public_63175c9 _public_63175c9
#define public_63175e1 _public_63175e1
#define public_63175ee _public_63175ee
#define public_63175f0 _public_63175f0
#define public_63175fc _public_63175fc
#define public_6317626 _public_6317626
#define public_631763e _public_631763e
#define public_631764e _public_631764e
#define public_6317658 _public_6317658
#define public_631767b _public_631767b
#define public_631768e _public_631768e
#define public_6317699 _public_6317699
#define public_631769c _public_631769c
#define public_63176a6 _public_63176a6
#define public_63176cf _public_63176cf
#define public_63176e2 _public_63176e2
#define public_63176ef _public_63176ef
#define public_63176f1 _public_63176f1
#define public_63176f4 _public_63176f4
#define public_63176f7 _public_63176f7
#define public_63176fe _public_63176fe

PROC_DECLARE(0x6317350, internal_6317350, public_6317350);
extern "C" NAKED register_t __cdecl internal_6317350()
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
        call public_6319b80
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6317392
        mov eax, dword ptr ds : [esi+8]
        public_6317374 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6317417
        mov dword ptr ds : [ecx+4], eax
        jmp public_6317425
        public_6317392 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_631739d
        mov eax, edx
        jmp public_6317374
        public_631739d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        jne public_63173b1
        public_63173a6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        je public_63173a6
        public_63173b1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6317374
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_63173cd
        mov dword ptr ds : [eax+4], ecx
        jmp public_63173e4
        public_63173cd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_63173e4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_63173f1
        mov dword ptr ds : [edx+4], ecx
        jmp public_63173ff
        public_63173f1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_63173fc
        mov dword ptr ds : [edx], ecx
        jmp public_63173ff
        public_63173fc : nop
        mov dword ptr ds : [edx+8], ecx
        public_63173ff : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x40]
        mov dl, byte ptr ds : [ecx+0x40]
        mov byte ptr ds : [ecx+0x40], bl
        mov byte ptr ds : [esi+0x40], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6317482
        public_6317417 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6317422
        mov dword ptr ds : [ecx], eax
        jmp public_6317425
        public_6317422 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6317425 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6317453
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_631743a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6317450
        public_631743a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x41]
        test bl, bl
        mov edx, eax
        jne public_6317450
        public_6317445 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x41]
        test bl, bl
        je public_6317445
        public_6317450 : nop
        mov dword ptr ss : [ebp], edx
        public_6317453 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6317482
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6317467
        mov edx, dword ptr ds : [esi+4]
        jmp public_631747f
        public_6317467 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x41]
        test bl, bl
        mov edx, eax
        jne public_631747f
        public_6317473 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x41]
        test bl, bl
        je public_6317473
        public_631747f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6317482 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x40]
        mov bl, 1
        cmp cl, bl
        jne public_63176fe
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_63176f7
        nop 
        public_63174a0 : nop
        cmp byte ptr ds : [eax+0x40], bl
        jne public_63176f7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_631755f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_631750b
        mov byte ptr ds : [ecx+0x40], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x40], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_63174df
        mov dword ptr ds : [esi+4], ecx
        public_63174df : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_63174f2
        mov dword ptr ds : [esi+4], edx
        jmp public_6317500
        public_63174f2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_63174fd
        mov dword ptr ds : [esi], edx
        jmp public_6317500
        public_63174fd : nop
        mov dword ptr ds : [esi+8], edx
        public_6317500 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_631750b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_631751e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x40], bl
        je public_63175c9
        public_631751e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_63175fc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x40], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x40], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6317545
        mov dword ptr ds : [esi+4], ecx
        public_6317545 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_63175e1
        mov dword ptr ds : [esi+4], edx
        jmp public_63175f0
        public_631755f : nop
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_63175b2
        mov byte ptr ds : [ecx+0x40], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6317585
        mov dword ptr ds : [esi+4], ecx
        public_6317585 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6317598
        mov dword ptr ds : [esi+4], edx
        jmp public_63175a7
        public_6317598 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_63175a5
        mov dword ptr ds : [esi+8], edx
        jmp public_63175a7
        public_63175a5 : nop
        mov dword ptr ds : [esi], edx
        public_63175a7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_63175b2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_6317658
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_6317658
        public_63175c9 : nop
        mov byte ptr ds : [ecx+0x40], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_63174a0
        jmp public_63176f7
        public_63175e1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_63175ee
        mov dword ptr ds : [esi+8], edx
        jmp public_63175f0
        public_63175ee : nop
        mov dword ptr ds : [esi], edx
        public_63175f0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_63175fc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x40]
        mov byte ptr ds : [ecx+0x40], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x40], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x40], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6317626
        mov dword ptr ds : [esi+4], ecx
        public_6317626 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_631763e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_63176f4
        public_631763e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_631764e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_63176f4
        public_631764e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_63176f4
        public_6317658 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_63176a6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x40], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x40], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_631767b
        mov dword ptr ds : [esi+4], ecx
        public_631767b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_631768e
        mov dword ptr ds : [esi+4], edx
        jmp public_631769c
        public_631768e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6317699
        mov dword ptr ds : [esi], edx
        jmp public_631769c
        public_6317699 : nop
        mov dword ptr ds : [esi+8], edx
        public_631769c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_63176a6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x40]
        mov byte ptr ds : [ecx+0x40], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x40], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x40], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_63176cf
        mov dword ptr ds : [esi+4], ecx
        public_63176cf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_63176e2
        mov dword ptr ds : [esi+4], edx
        jmp public_63176f1
        public_63176e2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_63176ef
        mov dword ptr ds : [esi+8], edx
        jmp public_63176f1
        public_63176ef : nop
        mov dword ptr ds : [esi], edx
        public_63176f1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_63176f4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_63176f7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x40], bl
        public_63176fe : nop
        lea ecx, ds:[esi+0xC]
        call public_6316580
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
        UNREACHABLE_TRAP(0x6317350)
    }
}

#undef public_6317374
#undef public_6317392
#undef public_631739d
#undef public_63173a6
#undef public_63173b1
#undef public_63173cd
#undef public_63173e4
#undef public_63173f1
#undef public_63173fc
#undef public_63173ff
#undef public_6317417
#undef public_6317422
#undef public_6317425
#undef public_631743a
#undef public_6317445
#undef public_6317450
#undef public_6317453
#undef public_6317467
#undef public_6317473
#undef public_631747f
#undef public_6317482
#undef public_63174a0
#undef public_63174df
#undef public_63174f2
#undef public_63174fd
#undef public_6317500
#undef public_631750b
#undef public_631751e
#undef public_6317545
#undef public_631755f
#undef public_6317585
#undef public_6317598
#undef public_63175a5
#undef public_63175a7
#undef public_63175b2
#undef public_63175c9
#undef public_63175e1
#undef public_63175ee
#undef public_63175f0
#undef public_63175fc
#undef public_6317626
#undef public_631763e
#undef public_631764e
#undef public_6317658
#undef public_631767b
#undef public_631768e
#undef public_6317699
#undef public_631769c
#undef public_63176a6
#undef public_63176cf
#undef public_63176e2
#undef public_63176ef
#undef public_63176f1
#undef public_63176f4
#undef public_63176f7
#undef public_63176fe
