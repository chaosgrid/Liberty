#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630bfe0);
CLANG_FORWARD_PROC_SYMBOL(public_630c400);
CLANG_FORWARD_PROC_SYMBOL(public_630caf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_630c424 _public_630c424
#define public_630c442 _public_630c442
#define public_630c44d _public_630c44d
#define public_630c456 _public_630c456
#define public_630c461 _public_630c461
#define public_630c47d _public_630c47d
#define public_630c494 _public_630c494
#define public_630c4a1 _public_630c4a1
#define public_630c4ac _public_630c4ac
#define public_630c4af _public_630c4af
#define public_630c4c7 _public_630c4c7
#define public_630c4d2 _public_630c4d2
#define public_630c4d5 _public_630c4d5
#define public_630c4ea _public_630c4ea
#define public_630c4f5 _public_630c4f5
#define public_630c500 _public_630c500
#define public_630c503 _public_630c503
#define public_630c517 _public_630c517
#define public_630c523 _public_630c523
#define public_630c52f _public_630c52f
#define public_630c532 _public_630c532
#define public_630c550 _public_630c550
#define public_630c58f _public_630c58f
#define public_630c5a2 _public_630c5a2
#define public_630c5ad _public_630c5ad
#define public_630c5b0 _public_630c5b0
#define public_630c5bb _public_630c5bb
#define public_630c5ce _public_630c5ce
#define public_630c5f5 _public_630c5f5
#define public_630c60f _public_630c60f
#define public_630c635 _public_630c635
#define public_630c648 _public_630c648
#define public_630c655 _public_630c655
#define public_630c657 _public_630c657
#define public_630c662 _public_630c662
#define public_630c679 _public_630c679
#define public_630c691 _public_630c691
#define public_630c69e _public_630c69e
#define public_630c6a0 _public_630c6a0
#define public_630c6ac _public_630c6ac
#define public_630c6d6 _public_630c6d6
#define public_630c6ee _public_630c6ee
#define public_630c6fe _public_630c6fe
#define public_630c708 _public_630c708
#define public_630c72b _public_630c72b
#define public_630c73e _public_630c73e
#define public_630c749 _public_630c749
#define public_630c74c _public_630c74c
#define public_630c756 _public_630c756
#define public_630c77f _public_630c77f
#define public_630c792 _public_630c792
#define public_630c79f _public_630c79f
#define public_630c7a1 _public_630c7a1
#define public_630c7a4 _public_630c7a4
#define public_630c7a7 _public_630c7a7
#define public_630c7ae _public_630c7ae

PROC_DECLARE(0x630c400, internal_630c400, public_630c400);
extern "C" NAKED register_t __cdecl internal_630c400()
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
        call public_630caf0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_630c442
        mov eax, dword ptr ds : [esi+8]
        public_630c424 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_630c4c7
        mov dword ptr ds : [ecx+4], eax
        jmp public_630c4d5
        public_630c442 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_630c44d
        mov eax, edx
        jmp public_630c424
        public_630c44d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x71]
        test bl, bl
        jne public_630c461
        public_630c456 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x71]
        test bl, bl
        je public_630c456
        public_630c461 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_630c424
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_630c47d
        mov dword ptr ds : [eax+4], ecx
        jmp public_630c494
        public_630c47d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_630c494 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_630c4a1
        mov dword ptr ds : [edx+4], ecx
        jmp public_630c4af
        public_630c4a1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_630c4ac
        mov dword ptr ds : [edx], ecx
        jmp public_630c4af
        public_630c4ac : nop
        mov dword ptr ds : [edx+8], ecx
        public_630c4af : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x70]
        mov dl, byte ptr ds : [ecx+0x70]
        mov byte ptr ds : [ecx+0x70], bl
        mov byte ptr ds : [esi+0x70], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_630c532
        public_630c4c7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_630c4d2
        mov dword ptr ds : [ecx], eax
        jmp public_630c4d5
        public_630c4d2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_630c4d5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_630c503
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_630c4ea
        mov edx, dword ptr ds : [esi+4]
        jmp public_630c500
        public_630c4ea : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x71]
        test bl, bl
        mov edx, eax
        jne public_630c500
        public_630c4f5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x71]
        test bl, bl
        je public_630c4f5
        public_630c500 : nop
        mov dword ptr ss : [ebp], edx
        public_630c503 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_630c532
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_630c517
        mov edx, dword ptr ds : [esi+4]
        jmp public_630c52f
        public_630c517 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x71]
        test bl, bl
        mov edx, eax
        jne public_630c52f
        public_630c523 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x71]
        test bl, bl
        je public_630c523
        public_630c52f : nop
        mov dword ptr ss : [ebp+8], edx
        public_630c532 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x70]
        mov bl, 1
        cmp cl, bl
        jne public_630c7ae
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_630c7a7
        nop 
        public_630c550 : nop
        cmp byte ptr ds : [eax+0x70], bl
        jne public_630c7a7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_630c60f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x70]
        test dl, dl
        jne public_630c5bb
        mov byte ptr ds : [ecx+0x70], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x70], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_630c58f
        mov dword ptr ds : [esi+4], ecx
        public_630c58f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_630c5a2
        mov dword ptr ds : [esi+4], edx
        jmp public_630c5b0
        public_630c5a2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_630c5ad
        mov dword ptr ds : [esi], edx
        jmp public_630c5b0
        public_630c5ad : nop
        mov dword ptr ds : [esi+8], edx
        public_630c5b0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_630c5bb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x70], bl
        jne public_630c5ce
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x70], bl
        je public_630c679
        public_630c5ce : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x70], bl
        jne public_630c6ac
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x70], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x70], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_630c5f5
        mov dword ptr ds : [esi+4], ecx
        public_630c5f5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_630c691
        mov dword ptr ds : [esi+4], edx
        jmp public_630c6a0
        public_630c60f : nop
        mov dl, byte ptr ds : [ecx+0x70]
        test dl, dl
        jne public_630c662
        mov byte ptr ds : [ecx+0x70], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x70], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_630c635
        mov dword ptr ds : [esi+4], ecx
        public_630c635 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_630c648
        mov dword ptr ds : [esi+4], edx
        jmp public_630c657
        public_630c648 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_630c655
        mov dword ptr ds : [esi+8], edx
        jmp public_630c657
        public_630c655 : nop
        mov dword ptr ds : [esi], edx
        public_630c657 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_630c662 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x70], bl
        jne public_630c708
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x70], bl
        jne public_630c708
        public_630c679 : nop
        mov byte ptr ds : [ecx+0x70], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_630c550
        jmp public_630c7a7
        public_630c691 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_630c69e
        mov dword ptr ds : [esi+8], edx
        jmp public_630c6a0
        public_630c69e : nop
        mov dword ptr ds : [esi], edx
        public_630c6a0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_630c6ac : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x70]
        mov byte ptr ds : [ecx+0x70], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x70], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x70], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_630c6d6
        mov dword ptr ds : [esi+4], ecx
        public_630c6d6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_630c6ee
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_630c7a4
        public_630c6ee : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_630c6fe
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_630c7a4
        public_630c6fe : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_630c7a4
        public_630c708 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x70], bl
        jne public_630c756
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x70], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x70], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_630c72b
        mov dword ptr ds : [esi+4], ecx
        public_630c72b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_630c73e
        mov dword ptr ds : [esi+4], edx
        jmp public_630c74c
        public_630c73e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_630c749
        mov dword ptr ds : [esi], edx
        jmp public_630c74c
        public_630c749 : nop
        mov dword ptr ds : [esi+8], edx
        public_630c74c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_630c756 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x70]
        mov byte ptr ds : [ecx+0x70], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x70], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x70], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_630c77f
        mov dword ptr ds : [esi+4], ecx
        public_630c77f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_630c792
        mov dword ptr ds : [esi+4], edx
        jmp public_630c7a1
        public_630c792 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_630c79f
        mov dword ptr ds : [esi+8], edx
        jmp public_630c7a1
        public_630c79f : nop
        mov dword ptr ds : [esi], edx
        public_630c7a1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_630c7a4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_630c7a7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x70], bl
        public_630c7ae : nop
        lea ecx, ds:[esi+0xC]
        call public_630bfe0
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
        UNREACHABLE_TRAP(0x630c400)
    }
}

#undef public_630c424
#undef public_630c442
#undef public_630c44d
#undef public_630c456
#undef public_630c461
#undef public_630c47d
#undef public_630c494
#undef public_630c4a1
#undef public_630c4ac
#undef public_630c4af
#undef public_630c4c7
#undef public_630c4d2
#undef public_630c4d5
#undef public_630c4ea
#undef public_630c4f5
#undef public_630c500
#undef public_630c503
#undef public_630c517
#undef public_630c523
#undef public_630c52f
#undef public_630c532
#undef public_630c550
#undef public_630c58f
#undef public_630c5a2
#undef public_630c5ad
#undef public_630c5b0
#undef public_630c5bb
#undef public_630c5ce
#undef public_630c5f5
#undef public_630c60f
#undef public_630c635
#undef public_630c648
#undef public_630c655
#undef public_630c657
#undef public_630c662
#undef public_630c679
#undef public_630c691
#undef public_630c69e
#undef public_630c6a0
#undef public_630c6ac
#undef public_630c6d6
#undef public_630c6ee
#undef public_630c6fe
#undef public_630c708
#undef public_630c72b
#undef public_630c73e
#undef public_630c749
#undef public_630c74c
#undef public_630c756
#undef public_630c77f
#undef public_630c792
#undef public_630c79f
#undef public_630c7a1
#undef public_630c7a4
#undef public_630c7a7
#undef public_630c7ae
