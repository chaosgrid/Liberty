#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22851);
CLANG_FORWARD_PROC_SYMBOL(public_6d22f4d);
CLANG_FORWARD_PROC_SYMBOL(public_6d236f4);
CLANG_FORWARD_PROC_SYMBOL(public_6d28c70);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d23711 _public_6d23711
#define public_6d2379e _public_6d2379e
#define public_6d237d3 _public_6d237d3
#define public_6d237d8 _public_6d237d8
#define public_6d23828 _public_6d23828
#define public_6d2385d _public_6d2385d
#define public_6d238b5 _public_6d238b5
#define public_6d238d7 _public_6d238d7
#define public_6d238f2 _public_6d238f2
#define public_6d2391f _public_6d2391f
#define public_6d23924 _public_6d23924
#define public_6d2399c _public_6d2399c
#define public_6d239ce _public_6d239ce
#define public_6d239d3 _public_6d239d3
#define public_6d23a2a _public_6d23a2a
#define public_6d23a2c _public_6d23a2c
#define public_6d23a4b _public_6d23a4b
#define public_6d23a7a _public_6d23a7a
#define public_6d23a9b _public_6d23a9b
#define public_6d23b4c _public_6d23b4c
#define public_6d23be4 _public_6d23be4
#define public_6d23be6 _public_6d23be6
#define public_6d23c06 _public_6d23c06
#define public_6d23c35 _public_6d23c35
#define public_6d23c57 _public_6d23c57
#define public_6d23c75 _public_6d23c75
#define public_6d23c77 _public_6d23c77

PROC_DECLARE(0x6d236f4, internal_6d236f4, public_6d236f4);
extern "C" NAKED register_t __cdecl internal_6d236f4()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x278
        push esi
        push edi
        mov dword ptr ss : [ebp-0x270], ecx
        lea eax, ss:[ebp-0x208]
        mov dword ptr ss : [ebp-0x104], eax
        public_6d23711 : nop
        mov ecx, dword ptr ss : [ebp-0x270]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx]
        cmp eax, 0x20
        je public_6d237d8
        mov ecx, dword ptr ss : [ebp-0x270]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx]
        cmp eax, 0x3D
        je public_6d237d8
        mov ecx, dword ptr ss : [ebp-0x270]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx]
        cmp eax, 0xD
        je public_6d237d8
        mov ecx, dword ptr ss : [ebp-0x270]
        mov edx, dword ptr ds : [ecx+8]
        mov al, byte ptr ds : [edx]
        mov byte ptr ss : [ebp-0x209], al
        mov ecx, dword ptr ss : [ebp-0x270]
        mov edx, dword ptr ds : [ecx+8]
        add edx, 1
        mov eax, dword ptr ss : [ebp-0x270]
        mov dword ptr ds : [eax+8], edx
        movsx ecx, byte ptr ss : [ebp-0x209]
        cmp ecx, 0x41
        jl public_6d2379e
        movsx edx, byte ptr ss : [ebp-0x209]
        cmp edx, 0x5A
        jg public_6d2379e
        movsx eax, byte ptr ss : [ebp-0x209]
        add eax, 0x20
        mov byte ptr ss : [ebp-0x209], al
        public_6d2379e : nop
        mov ecx, dword ptr ss : [ebp-0x104]
        mov dl, byte ptr ss : [ebp-0x209]
        mov byte ptr ds : [ecx], dl
        mov eax, dword ptr ss : [ebp-0x104]
        add eax, 1
        mov dword ptr ss : [ebp-0x104], eax
        lea ecx, ss:[ebp-0x10A]
        cmp dword ptr ss : [ebp-0x104], ecx
        jne public_6d237d3
        mov eax, offset public_6d6bd94
        jmp public_6d23c77
        public_6d237d3 : nop
        jmp public_6d23711
        public_6d237d8 : nop
        mov edx, dword ptr ss : [ebp-0x104]
        mov byte ptr ds : [edx], 0
        mov ecx, dword ptr ss : [ebp-0x270]
        call public_6d22f4d
        lea eax, ss:[ebp-0x100]
        mov dword ptr ss : [ebp-0x104], eax
        mov ecx, dword ptr ss : [ebp-0x270]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx]
        cmp eax, 0xD
        je public_6d239d3
        mov ecx, dword ptr ss : [ebp-0x270]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx]
        cmp eax, 0x3D
        je public_6d23828
        mov eax, offset public_6d6bda4
        jmp public_6d23c77
        public_6d23828 : nop
        mov ecx, dword ptr ss : [ebp-0x270]
        mov edx, dword ptr ds : [ecx+8]
        add edx, 1
        mov eax, dword ptr ss : [ebp-0x270]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ss : [ebp-0x270]
        call public_6d22f4d
        mov ecx, dword ptr ss : [ebp-0x270]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx]
        cmp eax, 0x22
        jne public_6d23924
        public_6d2385d : nop
        mov ecx, dword ptr ss : [ebp-0x270]
        mov edx, dword ptr ds : [ecx+8]
        mov al, byte ptr ds : [edx]
        mov byte ptr ss : [ebp-0x20A], al
        mov ecx, dword ptr ss : [ebp-0x270]
        mov edx, dword ptr ds : [ecx+8]
        add edx, 1
        mov eax, dword ptr ss : [ebp-0x270]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ss : [ebp-0x104]
        mov dl, byte ptr ss : [ebp-0x20A]
        mov byte ptr ds : [ecx], dl
        mov eax, dword ptr ss : [ebp-0x104]
        add eax, 1
        mov dword ptr ss : [ebp-0x104], eax
        lea ecx, ss:[ebp-2]
        cmp dword ptr ss : [ebp-0x104], ecx
        jne public_6d238b5
        mov eax, offset public_6d6bdb8
        jmp public_6d23c77
        public_6d238b5 : nop
        mov edx, dword ptr ss : [ebp-0x270]
        mov eax, dword ptr ds : [edx+8]
        movsx ecx, byte ptr ds : [eax]
        cmp ecx, 0x22
        je public_6d238d7
        mov edx, dword ptr ss : [ebp-0x270]
        mov eax, dword ptr ds : [edx+8]
        movsx ecx, byte ptr ds : [eax]
        cmp ecx, 0xD
        jne public_6d2385d
        public_6d238d7 : nop
        mov edx, dword ptr ss : [ebp-0x270]
        mov eax, dword ptr ds : [edx+8]
        movsx ecx, byte ptr ds : [eax]
        cmp ecx, 0x22
        je public_6d238f2
        mov eax, offset public_6d6bdc8
        jmp public_6d23c77
        public_6d238f2 : nop
        mov edx, dword ptr ss : [ebp-0x104]
        mov byte ptr ds : [edx], 0x22
        mov eax, dword ptr ss : [ebp-0x104]
        add eax, 1
        mov dword ptr ss : [ebp-0x104], eax
        lea ecx, ss:[ebp-2]
        cmp dword ptr ss : [ebp-0x104], ecx
        jne public_6d2391f
        mov eax, offset public_6d6bdd8
        jmp public_6d23c77
        public_6d2391f : nop
        jmp public_6d239d3
        public_6d23924 : nop
        mov edx, dword ptr ss : [ebp-0x270]
        mov eax, dword ptr ds : [edx+8]
        movsx ecx, byte ptr ds : [eax]
        cmp ecx, 0x20
        je public_6d239d3
        mov edx, dword ptr ss : [ebp-0x270]
        mov eax, dword ptr ds : [edx+8]
        movsx ecx, byte ptr ds : [eax]
        cmp ecx, 0xD
        je public_6d239d3
        mov edx, dword ptr ss : [ebp-0x270]
        mov eax, dword ptr ds : [edx+8]
        mov cl, byte ptr ds : [eax]
        mov byte ptr ss : [ebp-0x20B], cl
        mov edx, dword ptr ss : [ebp-0x270]
        mov eax, dword ptr ds : [edx+8]
        add eax, 1
        mov ecx, dword ptr ss : [ebp-0x270]
        mov dword ptr ds : [ecx+8], eax
        movsx edx, byte ptr ss : [ebp-0x20B]
        cmp edx, 0x41
        jl public_6d2399c
        movsx eax, byte ptr ss : [ebp-0x20B]
        cmp eax, 0x5A
        jg public_6d2399c
        movsx ecx, byte ptr ss : [ebp-0x20B]
        add ecx, 0x20
        mov byte ptr ss : [ebp-0x20B], cl
        public_6d2399c : nop
        mov edx, dword ptr ss : [ebp-0x104]
        mov al, byte ptr ss : [ebp-0x20B]
        mov byte ptr ds : [edx], al
        mov ecx, dword ptr ss : [ebp-0x104]
        add ecx, 1
        mov dword ptr ss : [ebp-0x104], ecx
        lea edx, ss:[ebp-2]
        cmp dword ptr ss : [ebp-0x104], edx
        jne public_6d239ce
        mov eax, offset public_6d6bde8
        jmp public_6d23c77
        public_6d239ce : nop
        jmp public_6d23924
        public_6d239d3 : nop
        mov eax, dword ptr ss : [ebp-0x104]
        mov byte ptr ds : [eax], 0
        lea ecx, ss:[ebp-0x100]
        push ecx
        lea edx, ss:[ebp-0x208]
        push edx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d22851
        lea eax, ss:[ebp-0x208]
        push eax
/*FIXUP push offset public_6d5eac4 @0x6d239f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5eac4
        call dword ptr ds : [public_6d5e108]
        add esp, 8
        test eax, eax
        jne public_6d23c75
        mov cl, byte ptr ss : [ebp-0x21D]
        mov byte ptr ss : [ebp-0x21C], cl
        xor edx, edx
        test edx, edx
        je public_6d23a2a
        cmp dword ptr ss : [ebp-0x218], 0
        jne public_6d23a2c
        public_6d23a2a : nop
        jmp public_6d23a9b
        public_6d23a2c : nop
        mov eax, dword ptr ss : [ebp-0x218]
        movzx ecx, byte ptr ds : [eax-1]
        test ecx, ecx
        je public_6d23a4b
        mov edx, dword ptr ss : [ebp-0x218]
        movzx eax, byte ptr ds : [edx-1]
        cmp eax, 0xFF
        jne public_6d23a7a
        public_6d23a4b : nop
        mov ecx, dword ptr ss : [ebp-0x210]
        add ecx, 2
        mov dword ptr ss : [ebp-0x228], ecx
        mov edx, dword ptr ss : [ebp-0x218]
        sub edx, 1
        mov dword ptr ss : [ebp-0x224], edx
        mov eax, dword ptr ss : [ebp-0x224]
        push eax
        call public_6d2f249
        add esp, 4
        jmp public_6d23a9b
        public_6d23a7a : nop
        mov ecx, dword ptr ss : [ebp-0x218]
        sub ecx, 1
        mov dword ptr ss : [ebp-0x274], ecx
        mov edx, dword ptr ss : [ebp-0x274]
        mov al, byte ptr ds : [edx]
        sub al, 1
        mov ecx, dword ptr ss : [ebp-0x274]
        mov byte ptr ds : [ecx], al
        public_6d23a9b : nop
        mov dword ptr ss : [ebp-0x218], 0
        mov dword ptr ss : [ebp-0x214], 0
        mov dword ptr ss : [ebp-0x210], 0
        lea edi, ss:[ebp-0x100]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        add ecx, 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x238], ecx
        push 1
        mov edx, dword ptr ss : [ebp-0x238]
        push edx
        lea ecx, ss:[ebp-0x21C]
        call dword ptr ds : [public_6d5e0a8]
        movzx eax, al
        test eax, eax
        je public_6d23b4c
        mov ecx, dword ptr ss : [ebp-0x218]
        mov dword ptr ss : [ebp-0x22C], ecx
        mov ecx, dword ptr ss : [ebp-0x238]
        lea esi, ss:[ebp-0x100]
        mov edi, dword ptr ss : [ebp-0x22C]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [ebp-0x22D], 0
        mov eax, dword ptr ss : [ebp-0x238]
        mov dword ptr ss : [ebp-0x214], eax
        mov ecx, dword ptr ss : [ebp-0x218]
        add ecx, dword ptr ss : [ebp-0x238]
        mov dword ptr ss : [ebp-0x234], ecx
        mov edx, dword ptr ss : [ebp-0x234]
        mov al, byte ptr ss : [ebp-0x22D]
        mov byte ptr ds : [edx], al
        public_6d23b4c : nop
        mov dword ptr ss : [ebp-0x254], 0
        lea ecx, ss:[ebp-0x21C]
        push ecx
        lea ecx, ss:[ebp-0x250]
        call dword ptr ds : [public_6d5e08c]
        mov edx, dword ptr ss : [ebp-0x254]
        mov dword ptr ss : [ebp-0x240], edx
        lea eax, ss:[ebp-0x250]
        push eax
        lea ecx, ss:[ebp-0x264]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x270]
        add ecx, 0x570
        call public_6d28c70
        mov edx, dword ptr ss : [ebp-0x264]
        mov dword ptr ss : [ebp-0x25C], edx
        mov al, byte ptr ss : [ebp-0x260]
        mov byte ptr ss : [ebp-0x258], al
        mov ecx, dword ptr ss : [ebp-0x25C]
        mov dword ptr ss : [ebp-0x23C], ecx
        push 1
        lea ecx, ss:[ebp-0x250]
        call dword ptr ds : [public_6d5e0a4]
        mov edx, dword ptr ss : [ebp-0x23C]
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edx+0x1C], eax
        mov ecx, 1
        test ecx, ecx
        je public_6d23be4
        cmp dword ptr ss : [ebp-0x218], 0
        jne public_6d23be6
        public_6d23be4 : nop
        jmp public_6d23c57
        public_6d23be6 : nop
        mov edx, dword ptr ss : [ebp-0x218]
        movzx eax, byte ptr ds : [edx-1]
        test eax, eax
        je public_6d23c06
        mov ecx, dword ptr ss : [ebp-0x218]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFF
        jne public_6d23c35
        public_6d23c06 : nop
        mov eax, dword ptr ss : [ebp-0x210]
        add eax, 2
        mov dword ptr ss : [ebp-0x26C], eax
        mov ecx, dword ptr ss : [ebp-0x218]
        sub ecx, 1
        mov dword ptr ss : [ebp-0x268], ecx
        mov edx, dword ptr ss : [ebp-0x268]
        push edx
        call public_6d2f249
        add esp, 4
        jmp public_6d23c57
        public_6d23c35 : nop
        mov eax, dword ptr ss : [ebp-0x218]
        sub eax, 1
        mov dword ptr ss : [ebp-0x278], eax
        mov ecx, dword ptr ss : [ebp-0x278]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0x278]
        mov byte ptr ds : [eax], dl
        public_6d23c57 : nop
        mov dword ptr ss : [ebp-0x218], 0
        mov dword ptr ss : [ebp-0x214], 0
        mov dword ptr ss : [ebp-0x210], 0
        public_6d23c75 : nop
        xor eax, eax
        public_6d23c77 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d236f4)
    }
}

#undef public_6d23711
#undef public_6d2379e
#undef public_6d237d3
#undef public_6d237d8
#undef public_6d23828
#undef public_6d2385d
#undef public_6d238b5
#undef public_6d238d7
#undef public_6d238f2
#undef public_6d2391f
#undef public_6d23924
#undef public_6d2399c
#undef public_6d239ce
#undef public_6d239d3
#undef public_6d23a2a
#undef public_6d23a2c
#undef public_6d23a4b
#undef public_6d23a7a
#undef public_6d23a9b
#undef public_6d23b4c
#undef public_6d23be4
#undef public_6d23be6
#undef public_6d23c06
#undef public_6d23c35
#undef public_6d23c57
#undef public_6d23c75
#undef public_6d23c77
