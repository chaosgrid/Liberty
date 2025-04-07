#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62be424 _public_62be424
#define public_62be442 _public_62be442
#define public_62be44d _public_62be44d
#define public_62be456 _public_62be456
#define public_62be461 _public_62be461
#define public_62be47d _public_62be47d
#define public_62be494 _public_62be494
#define public_62be4a1 _public_62be4a1
#define public_62be4ac _public_62be4ac
#define public_62be4af _public_62be4af
#define public_62be4c7 _public_62be4c7
#define public_62be4d2 _public_62be4d2
#define public_62be4d5 _public_62be4d5
#define public_62be4ea _public_62be4ea
#define public_62be4f5 _public_62be4f5
#define public_62be500 _public_62be500
#define public_62be503 _public_62be503
#define public_62be517 _public_62be517
#define public_62be523 _public_62be523
#define public_62be52f _public_62be52f
#define public_62be532 _public_62be532
#define public_62be550 _public_62be550
#define public_62be58f _public_62be58f
#define public_62be5a2 _public_62be5a2
#define public_62be5ad _public_62be5ad
#define public_62be5b0 _public_62be5b0
#define public_62be5bb _public_62be5bb
#define public_62be5ce _public_62be5ce
#define public_62be5f5 _public_62be5f5
#define public_62be60f _public_62be60f
#define public_62be635 _public_62be635
#define public_62be648 _public_62be648
#define public_62be655 _public_62be655
#define public_62be657 _public_62be657
#define public_62be662 _public_62be662
#define public_62be679 _public_62be679
#define public_62be691 _public_62be691
#define public_62be69e _public_62be69e
#define public_62be6a0 _public_62be6a0
#define public_62be6ac _public_62be6ac
#define public_62be6d6 _public_62be6d6
#define public_62be6ee _public_62be6ee
#define public_62be6fe _public_62be6fe
#define public_62be708 _public_62be708
#define public_62be72b _public_62be72b
#define public_62be73e _public_62be73e
#define public_62be749 _public_62be749
#define public_62be74c _public_62be74c
#define public_62be756 _public_62be756
#define public_62be77f _public_62be77f
#define public_62be792 _public_62be792
#define public_62be79f _public_62be79f
#define public_62be7a1 _public_62be7a1
#define public_62be7a4 _public_62be7a4
#define public_62be7a7 _public_62be7a7
#define public_62be7aa _public_62be7aa

PROC_DECLARE(0x62be400, internal_62be400, public_62be400);
extern "C" NAKED register_t __cdecl internal_62be400()
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
        call public_63429f0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_62be442
        mov eax, dword ptr ds : [esi+8]
        public_62be424 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_62be4c7
        mov dword ptr ds : [ecx+4], eax
        jmp public_62be4d5
        public_62be442 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_62be44d
        mov eax, edx
        jmp public_62be424
        public_62be44d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_62be461
        public_62be456 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_62be456
        public_62be461 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_62be424
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62be47d
        mov dword ptr ds : [eax+4], ecx
        jmp public_62be494
        public_62be47d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_62be494 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_62be4a1
        mov dword ptr ds : [edx+4], ecx
        jmp public_62be4af
        public_62be4a1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_62be4ac
        mov dword ptr ds : [edx], ecx
        jmp public_62be4af
        public_62be4ac : nop
        mov dword ptr ds : [edx+8], ecx
        public_62be4af : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_62be532
        public_62be4c7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_62be4d2
        mov dword ptr ds : [ecx], eax
        jmp public_62be4d5
        public_62be4d2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_62be4d5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_62be503
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62be4ea
        mov edx, dword ptr ds : [esi+4]
        jmp public_62be500
        public_62be4ea : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_62be500
        public_62be4f5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_62be4f5
        public_62be500 : nop
        mov dword ptr ss : [ebp], edx
        public_62be503 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_62be532
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62be517
        mov edx, dword ptr ds : [esi+4]
        jmp public_62be52f
        public_62be517 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_62be52f
        public_62be523 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_62be523
        public_62be52f : nop
        mov dword ptr ss : [ebp+8], edx
        public_62be532 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x14]
        mov bl, 1
        cmp dl, bl
        jne public_62be7aa
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_62be7a7
        nop 
        public_62be550 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_62be7a7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_62be60f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_62be5bb
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62be58f
        mov dword ptr ds : [esi+4], ecx
        public_62be58f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62be5a2
        mov dword ptr ds : [esi+4], edx
        jmp public_62be5b0
        public_62be5a2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62be5ad
        mov dword ptr ds : [esi], edx
        jmp public_62be5b0
        public_62be5ad : nop
        mov dword ptr ds : [esi+8], edx
        public_62be5b0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_62be5bb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_62be5ce
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_62be679
        public_62be5ce : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_62be6ac
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62be5f5
        mov dword ptr ds : [esi+4], ecx
        public_62be5f5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62be691
        mov dword ptr ds : [esi+4], edx
        jmp public_62be6a0
        public_62be60f : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_62be662
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62be635
        mov dword ptr ds : [esi+4], ecx
        public_62be635 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62be648
        mov dword ptr ds : [esi+4], edx
        jmp public_62be657
        public_62be648 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62be655
        mov dword ptr ds : [esi+8], edx
        jmp public_62be657
        public_62be655 : nop
        mov dword ptr ds : [esi], edx
        public_62be657 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_62be662 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_62be708
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_62be708
        public_62be679 : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_62be550
        jmp public_62be7a7
        public_62be691 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62be69e
        mov dword ptr ds : [esi+8], edx
        jmp public_62be6a0
        public_62be69e : nop
        mov dword ptr ds : [esi], edx
        public_62be6a0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_62be6ac : nop
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
        je public_62be6d6
        mov dword ptr ds : [esi+4], ecx
        public_62be6d6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62be6ee
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62be7a4
        public_62be6ee : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62be6fe
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62be7a4
        public_62be6fe : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62be7a4
        public_62be708 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_62be756
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62be72b
        mov dword ptr ds : [esi+4], ecx
        public_62be72b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62be73e
        mov dword ptr ds : [esi+4], edx
        jmp public_62be74c
        public_62be73e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62be749
        mov dword ptr ds : [esi], edx
        jmp public_62be74c
        public_62be749 : nop
        mov dword ptr ds : [esi+8], edx
        public_62be74c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_62be756 : nop
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
        je public_62be77f
        mov dword ptr ds : [esi+4], ecx
        public_62be77f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62be792
        mov dword ptr ds : [esi+4], edx
        jmp public_62be7a1
        public_62be792 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62be79f
        mov dword ptr ds : [esi+8], edx
        jmp public_62be7a1
        public_62be79f : nop
        mov dword ptr ds : [esi], edx
        public_62be7a1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_62be7a4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_62be7a7 : nop
        mov byte ptr ds : [eax+0x14], bl
        public_62be7aa : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6391d5a
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
        UNREACHABLE_TRAP(0x62be400)
    }
}

#undef public_62be424
#undef public_62be442
#undef public_62be44d
#undef public_62be456
#undef public_62be461
#undef public_62be47d
#undef public_62be494
#undef public_62be4a1
#undef public_62be4ac
#undef public_62be4af
#undef public_62be4c7
#undef public_62be4d2
#undef public_62be4d5
#undef public_62be4ea
#undef public_62be4f5
#undef public_62be500
#undef public_62be503
#undef public_62be517
#undef public_62be523
#undef public_62be52f
#undef public_62be532
#undef public_62be550
#undef public_62be58f
#undef public_62be5a2
#undef public_62be5ad
#undef public_62be5b0
#undef public_62be5bb
#undef public_62be5ce
#undef public_62be5f5
#undef public_62be60f
#undef public_62be635
#undef public_62be648
#undef public_62be655
#undef public_62be657
#undef public_62be662
#undef public_62be679
#undef public_62be691
#undef public_62be69e
#undef public_62be6a0
#undef public_62be6ac
#undef public_62be6d6
#undef public_62be6ee
#undef public_62be6fe
#undef public_62be708
#undef public_62be72b
#undef public_62be73e
#undef public_62be749
#undef public_62be74c
#undef public_62be756
#undef public_62be77f
#undef public_62be792
#undef public_62be79f
#undef public_62be7a1
#undef public_62be7a4
#undef public_62be7a7
#undef public_62be7aa
