#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f45400);
CLANG_FORWARD_PROC_SYMBOL(public_6f467d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f45424 _public_6f45424
#define public_6f45442 _public_6f45442
#define public_6f4544d _public_6f4544d
#define public_6f45456 _public_6f45456
#define public_6f45461 _public_6f45461
#define public_6f4547d _public_6f4547d
#define public_6f45494 _public_6f45494
#define public_6f454a1 _public_6f454a1
#define public_6f454ac _public_6f454ac
#define public_6f454af _public_6f454af
#define public_6f454c7 _public_6f454c7
#define public_6f454d2 _public_6f454d2
#define public_6f454d5 _public_6f454d5
#define public_6f454ea _public_6f454ea
#define public_6f454f5 _public_6f454f5
#define public_6f45500 _public_6f45500
#define public_6f45503 _public_6f45503
#define public_6f45517 _public_6f45517
#define public_6f45523 _public_6f45523
#define public_6f4552f _public_6f4552f
#define public_6f45532 _public_6f45532
#define public_6f45550 _public_6f45550
#define public_6f4558f _public_6f4558f
#define public_6f455a2 _public_6f455a2
#define public_6f455ad _public_6f455ad
#define public_6f455b0 _public_6f455b0
#define public_6f455bb _public_6f455bb
#define public_6f455ce _public_6f455ce
#define public_6f455f5 _public_6f455f5
#define public_6f4560f _public_6f4560f
#define public_6f45635 _public_6f45635
#define public_6f45648 _public_6f45648
#define public_6f45655 _public_6f45655
#define public_6f45657 _public_6f45657
#define public_6f45662 _public_6f45662
#define public_6f45679 _public_6f45679
#define public_6f45691 _public_6f45691
#define public_6f4569e _public_6f4569e
#define public_6f456a0 _public_6f456a0
#define public_6f456ac _public_6f456ac
#define public_6f456d6 _public_6f456d6
#define public_6f456ee _public_6f456ee
#define public_6f456fe _public_6f456fe
#define public_6f45708 _public_6f45708
#define public_6f4572b _public_6f4572b
#define public_6f4573e _public_6f4573e
#define public_6f45749 _public_6f45749
#define public_6f4574c _public_6f4574c
#define public_6f45756 _public_6f45756
#define public_6f4577f _public_6f4577f
#define public_6f45792 _public_6f45792
#define public_6f4579f _public_6f4579f
#define public_6f457a1 _public_6f457a1
#define public_6f457a4 _public_6f457a4
#define public_6f457a7 _public_6f457a7
#define public_6f457aa _public_6f457aa

PROC_DECLARE(0x6f45400, internal_6f45400, public_6f45400);
extern "C" NAKED register_t __cdecl internal_6f45400()
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
        call public_6f467d0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f45442
        mov eax, dword ptr ds : [esi+8]
        public_6f45424 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f454c7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f454d5
        public_6f45442 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f4544d
        mov eax, edx
        jmp public_6f45424
        public_6f4544d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x69]
        test bl, bl
        jne public_6f45461
        public_6f45456 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x69]
        test bl, bl
        je public_6f45456
        public_6f45461 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f45424
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4547d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f45494
        public_6f4547d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f45494 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f454a1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f454af
        public_6f454a1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f454ac
        mov dword ptr ds : [edx], ecx
        jmp public_6f454af
        public_6f454ac : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f454af : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x68]
        mov dl, byte ptr ds : [ecx+0x68]
        mov byte ptr ds : [ecx+0x68], bl
        mov byte ptr ds : [esi+0x68], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f45532
        public_6f454c7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f454d2
        mov dword ptr ds : [ecx], eax
        jmp public_6f454d5
        public_6f454d2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f454d5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f45503
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f454ea
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f45500
        public_6f454ea : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x69]
        test bl, bl
        mov edx, eax
        jne public_6f45500
        public_6f454f5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x69]
        test bl, bl
        je public_6f454f5
        public_6f45500 : nop
        mov dword ptr ss : [ebp], edx
        public_6f45503 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f45532
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f45517
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f4552f
        public_6f45517 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x69]
        test bl, bl
        mov edx, eax
        jne public_6f4552f
        public_6f45523 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x69]
        test bl, bl
        je public_6f45523
        public_6f4552f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f45532 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x68]
        mov bl, 1
        cmp dl, bl
        jne public_6f457aa
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f457a7
        nop 
        public_6f45550 : nop
        cmp byte ptr ds : [eax+0x68], bl
        jne public_6f457a7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f4560f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x68]
        test dl, dl
        jne public_6f455bb
        mov byte ptr ds : [ecx+0x68], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x68], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4558f
        mov dword ptr ds : [esi+4], ecx
        public_6f4558f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f455a2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f455b0
        public_6f455a2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f455ad
        mov dword ptr ds : [esi], edx
        jmp public_6f455b0
        public_6f455ad : nop
        mov dword ptr ds : [esi+8], edx
        public_6f455b0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f455bb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x68], bl
        jne public_6f455ce
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x68], bl
        je public_6f45679
        public_6f455ce : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x68], bl
        jne public_6f456ac
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x68], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x68], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f455f5
        mov dword ptr ds : [esi+4], ecx
        public_6f455f5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f45691
        mov dword ptr ds : [esi+4], edx
        jmp public_6f456a0
        public_6f4560f : nop
        mov dl, byte ptr ds : [ecx+0x68]
        test dl, dl
        jne public_6f45662
        mov byte ptr ds : [ecx+0x68], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x68], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f45635
        mov dword ptr ds : [esi+4], ecx
        public_6f45635 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f45648
        mov dword ptr ds : [esi+4], edx
        jmp public_6f45657
        public_6f45648 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f45655
        mov dword ptr ds : [esi+8], edx
        jmp public_6f45657
        public_6f45655 : nop
        mov dword ptr ds : [esi], edx
        public_6f45657 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f45662 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x68], bl
        jne public_6f45708
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x68], bl
        jne public_6f45708
        public_6f45679 : nop
        mov byte ptr ds : [ecx+0x68], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f45550
        jmp public_6f457a7
        public_6f45691 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4569e
        mov dword ptr ds : [esi+8], edx
        jmp public_6f456a0
        public_6f4569e : nop
        mov dword ptr ds : [esi], edx
        public_6f456a0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f456ac : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x68]
        mov byte ptr ds : [ecx+0x68], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x68], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x68], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f456d6
        mov dword ptr ds : [esi+4], ecx
        public_6f456d6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f456ee
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f457a4
        public_6f456ee : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f456fe
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f457a4
        public_6f456fe : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f457a4
        public_6f45708 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x68], bl
        jne public_6f45756
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x68], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x68], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4572b
        mov dword ptr ds : [esi+4], ecx
        public_6f4572b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4573e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f4574c
        public_6f4573e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f45749
        mov dword ptr ds : [esi], edx
        jmp public_6f4574c
        public_6f45749 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f4574c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f45756 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x68]
        mov byte ptr ds : [ecx+0x68], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x68], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x68], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4577f
        mov dword ptr ds : [esi+4], ecx
        public_6f4577f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f45792
        mov dword ptr ds : [esi+4], edx
        jmp public_6f457a1
        public_6f45792 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4579f
        mov dword ptr ds : [esi+8], edx
        jmp public_6f457a1
        public_6f4579f : nop
        mov dword ptr ds : [esi], edx
        public_6f457a1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f457a4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f457a7 : nop
        mov byte ptr ds : [eax+0x68], bl
        public_6f457aa : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6fa8fe0
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
        UNREACHABLE_TRAP(0x6f45400)
    }
}

#undef public_6f45424
#undef public_6f45442
#undef public_6f4544d
#undef public_6f45456
#undef public_6f45461
#undef public_6f4547d
#undef public_6f45494
#undef public_6f454a1
#undef public_6f454ac
#undef public_6f454af
#undef public_6f454c7
#undef public_6f454d2
#undef public_6f454d5
#undef public_6f454ea
#undef public_6f454f5
#undef public_6f45500
#undef public_6f45503
#undef public_6f45517
#undef public_6f45523
#undef public_6f4552f
#undef public_6f45532
#undef public_6f45550
#undef public_6f4558f
#undef public_6f455a2
#undef public_6f455ad
#undef public_6f455b0
#undef public_6f455bb
#undef public_6f455ce
#undef public_6f455f5
#undef public_6f4560f
#undef public_6f45635
#undef public_6f45648
#undef public_6f45655
#undef public_6f45657
#undef public_6f45662
#undef public_6f45679
#undef public_6f45691
#undef public_6f4569e
#undef public_6f456a0
#undef public_6f456ac
#undef public_6f456d6
#undef public_6f456ee
#undef public_6f456fe
#undef public_6f45708
#undef public_6f4572b
#undef public_6f4573e
#undef public_6f45749
#undef public_6f4574c
#undef public_6f45756
#undef public_6f4577f
#undef public_6f45792
#undef public_6f4579f
#undef public_6f457a1
#undef public_6f457a4
#undef public_6f457a7
#undef public_6f457aa
