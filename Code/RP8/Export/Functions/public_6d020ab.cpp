#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d01000);
CLANG_FORWARD_PROC_SYMBOL(public_6d020ab);
CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d16b90);
CLANG_FORWARD_PROC_SYMBOL(public_6d17190);
CLANG_FORWARD_PROC_SYMBOL(public_6d176a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d27d63);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d02153 _public_6d02153
#define public_6d0215d _public_6d0215d
#define public_6d02226 _public_6d02226
#define public_6d022ce _public_6d022ce
#define public_6d022d8 _public_6d022d8
#define public_6d02346 _public_6d02346
#define public_6d02350 _public_6d02350
#define public_6d02385 _public_6d02385
#define public_6d0238f _public_6d0238f
#define public_6d023ba _public_6d023ba
#define public_6d023d9 _public_6d023d9
#define public_6d023f1 _public_6d023f1
#define public_6d024c9 _public_6d024c9
#define public_6d024d3 _public_6d024d3
#define public_6d024ea _public_6d024ea
#define public_6d024f4 _public_6d024f4
#define public_6d029af _public_6d029af
#define public_6d02a68 _public_6d02a68
#define public_6d02b34 _public_6d02b34
#define public_6d02b4d _public_6d02b4d
#define public_6d02b63 _public_6d02b63
#define public_6d02c1c _public_6d02c1c
#define public_6d02cd5 _public_6d02cd5
#define public_6d02d8e _public_6d02d8e
#define public_6d02e5d _public_6d02e5d
#define public_6d02e7f _public_6d02e7f
#define public_6d02f38 _public_6d02f38
#define public_6d03004 _public_6d03004
#define public_6d0301d _public_6d0301d
#define public_6d03033 _public_6d03033
#define public_6d030ff _public_6d030ff
#define public_6d03118 _public_6d03118
#define public_6d0312e _public_6d0312e
#define public_6d031fa _public_6d031fa
#define public_6d03213 _public_6d03213
#define public_6d03229 _public_6d03229
#define public_6d032e2 _public_6d032e2
#define public_6d0339b _public_6d0339b
#define public_6d03454 _public_6d03454
#define public_6d0350d _public_6d0350d
#define public_6d035c6 _public_6d035c6
#define public_6d035d8 _public_6d035d8
#define public_6d03627 _public_6d03627
#define public_6d0364a _public_6d0364a
#define public_6d0366a _public_6d0366a
#define public_6d03675 _public_6d03675
#define public_6d0369a _public_6d0369a
#define public_6d036b1 _public_6d036b1
#define public_6d036bd _public_6d036bd
#define public_6d03720 _public_6d03720
#define public_6d0372f _public_6d0372f
#define public_6d03738 _public_6d03738
#define public_6d0373f _public_6d0373f
#define public_6d03763 _public_6d03763
#define public_6d03768 _public_6d03768

PROC_DECLARE(0x6d020ab, internal_6d020ab, public_6d020ab);
extern "C" NAKED register_t __cdecl internal_6d020ab()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x2708
        call public_6d2f270
        push edi
        mov dword ptr ss : [ebp-0x26B0], ecx
        mov ecx, 0x14
        xor eax, eax
        mov edi, dword ptr ss : [ebp-0x26B0]
        add edi, 0x3FC
        rep stosd
        mov eax, dword ptr ss : [ebp-0x26B0]
        mov ecx, dword ptr ss : [ebp-0x26B0]
        mov edx, dword ptr ds : [ecx+0x168]
        mov dword ptr ds : [eax+0x408], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x24]
        and ecx, 0x20000
        neg ecx
        sbb ecx, ecx
        neg ecx
        mov edx, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [edx+0x400], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x24]
        and ecx, 0x100000
        neg ecx
        sbb ecx, ecx
        neg ecx
        mov edx, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [edx+0x404], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x1C]
        and ecx, 0x10000
        test ecx, ecx
        je public_6d02153
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x1C]
        and eax, 0x8000
        test eax, eax
        je public_6d02153
        mov dword ptr ss : [ebp-0x26B4], 1
        jmp public_6d0215d
        public_6d02153 : nop
        mov dword ptr ss : [ebp-0x26B4], 0
        public_6d0215d : nop
        mov ecx, dword ptr ss : [ebp-0x26B0]
        mov edx, dword ptr ss : [ebp-0x26B4]
        mov dword ptr ds : [ecx+0x40C], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x24]
        and ecx, 0x80
        neg ecx
        sbb ecx, ecx
        neg ecx
        mov edx, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [edx+0x424], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x24]
        and ecx, 0x100
        neg ecx
        sbb ecx, ecx
        neg ecx
        mov edx, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [edx+0x428], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x24]
        and ecx, 0x10000
        neg ecx
        sbb ecx, ecx
        neg ecx
        mov edx, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [edx+0x42C], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x24]
        and ecx, 0x100000
        test ecx, ecx
        setne dl
        mov byte ptr ss : [ebp-0x19], dl
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x24]
        and ecx, 0x200000
        test ecx, ecx
        setne dl
        mov byte ptr ss : [ebp-0x11], dl
        mov eax, dword ptr ss : [ebp-0x26B0]
        cmp dword ptr ds : [eax+0x40C], 0
        setne cl
        mov byte ptr ss : [ebp-0x12], cl
        mov dl, byte ptr ss : [ebp-0x19]
        mov byte ptr ss : [ebp-3], dl
        movzx eax, byte ptr ss : [ebp-0x19]
        test eax, eax
        je public_6d02226
        movzx ecx, byte ptr ss : [ebp-0x11]
        test ecx, ecx
        je public_6d02226
        movzx edx, byte ptr ss : [ebp-0x12]
        test edx, edx
        jne public_6d02226
        mov byte ptr ss : [ebp-3], 0
        public_6d02226 : nop
        movzx eax, byte ptr ss : [ebp-3]
        mov ecx, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [ecx+0x430], eax
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x24]
        and eax, 0x4000
        neg eax
        sbb eax, eax
        neg eax
        mov ecx, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [ecx+0x420], eax
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x24]
        and eax, 0x1000
        neg eax
        sbb eax, eax
        neg eax
        mov ecx, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [ecx+0x434], eax
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x3C]
        and eax, 0x800
        test eax, eax
        setne cl
        mov byte ptr ss : [ebp-4], cl
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x9C]
        and eax, 1
        test eax, eax
        setne cl
        mov byte ptr ss : [ebp-2], cl
        mov edx, dword ptr ss : [ebp-0x26B0]
        cmp dword ptr ds : [edx+0x40C], 0
        setne al
        mov byte ptr ss : [ebp-1], al
        movzx ecx, byte ptr ss : [ebp-4]
        test ecx, ecx
        je public_6d022ce
        movzx edx, byte ptr ss : [ebp-2]
        test edx, edx
        je public_6d022ce
        movzx eax, byte ptr ss : [ebp-1]
        test eax, eax
        je public_6d022ce
        mov dword ptr ss : [ebp-0x26B8], 1
        jmp public_6d022d8
        public_6d022ce : nop
        mov dword ptr ss : [ebp-0x26B8], 0
        public_6d022d8 : nop
        mov ecx, dword ptr ss : [ebp-0x26B0]
        mov edx, dword ptr ss : [ebp-0x26B8]
        mov dword ptr ds : [ecx+0x41C], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x3C]
        and ecx, 0x20
        neg ecx
        sbb ecx, ecx
        neg ecx
        mov edx, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [edx+0x410], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x40]
        and ecx, 0x20000
        neg ecx
        sbb ecx, ecx
        neg ecx
        mov edx, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [edx+0x43C], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x58]
        mov dword ptr ss : [ebp-0x2540], ecx
        cmp dword ptr ss : [ebp-0x2540], 0
        je public_6d02346
        mov edx, dword ptr ss : [ebp-0x2540]
        mov dword ptr ss : [ebp-0x26BC], edx
        jmp public_6d02350
        public_6d02346 : nop
        mov dword ptr ss : [ebp-0x26BC], 0x100
        public_6d02350 : nop
        mov eax, dword ptr ss : [ebp-0x26B0]
        mov ecx, dword ptr ss : [ebp-0x26BC]
        mov dword ptr ds : [eax+0x414], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x5C]
        mov dword ptr ss : [ebp-0x2544], eax
        cmp dword ptr ss : [ebp-0x2544], 0
        je public_6d02385
        mov ecx, dword ptr ss : [ebp-0x2544]
        mov dword ptr ss : [ebp-0x26C0], ecx
        jmp public_6d0238f
        public_6d02385 : nop
        mov dword ptr ss : [ebp-0x26C0], 0x100
        public_6d0238f : nop
        mov edx, dword ptr ss : [ebp-0x26B0]
        mov eax, dword ptr ss : [ebp-0x26C0]
        mov dword ptr ds : [edx+0x418], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x94]
        mov dword ptr ss : [ebp-0x18], edx
        cmp dword ptr ss : [ebp-0x18], 8
        jb public_6d023ba
        mov dword ptr ss : [ebp-0x18], 7
        public_6d023ba : nop
        mov eax, dword ptr ss : [ebp-0x26B0]
        add eax, 0x39C
        mov dword ptr ss : [ebp-0x2548], eax
        mov ecx, dword ptr ss : [ebp-0x2548]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d023d9
        jmp public_6d023f1
        public_6d023d9 : nop
        mov edx, dword ptr ss : [ebp-0x2548]
        mov dword ptr ds : [edx+8], 1
        mov eax, dword ptr ss : [ebp-0x2548]
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [eax], ecx
        public_6d023f1 : nop
        mov edx, dword ptr ss : [ebp-0x26B0]
        movsx eax, byte ptr ds : [edx+0x1B0]
        test eax, eax
        je public_6d035d8
        call public_6d27d63
        mov dword ptr ss : [ebp-0x20], eax
        cmp dword ptr ss : [ebp-0x20], 0
        je public_6d035d8
        lea ecx, ss:[ebp-0x458]
        push ecx
        push 2
        mov edx, dword ptr ss : [ebp-0x26B0]
        mov eax, dword ptr ds : [edx+0x1A8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x26B0]
        mov edx, dword ptr ds : [ecx+0x12C]
        mov eax, dword ptr ss : [ebp-0x26B0]
        mov ecx, dword ptr ds : [eax+0x12C]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ss : [ebp-0x26B0]
        mov ecx, dword ptr ds : [eax+0x408]
        mov dword ptr ss : [ebp-0x24], ecx
        push 0
        mov edx, dword ptr ss : [ebp-0x24]
        push edx
        push 0
        mov eax, dword ptr ss : [ebp+8]
        push eax
        lea ecx, ss:[ebp-0x458]
        push ecx
        mov edx, dword ptr ss : [ebp-0x26B0]
        add edx, 0x1B0
        push edx
        mov eax, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp-0x20]
        call dword ptr ds : [edx]
        movzx eax, al
        test eax, eax
        je public_6d035c6
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [ebp-0x20]
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x460], eax
        mov eax, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp-0x20]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [ebp-0x45C], eax
        cmp dword ptr ss : [ebp-0x460], 0
        je public_6d024c9
        mov eax, dword ptr ss : [ebp-0x460]
        mov dword ptr ss : [ebp-0x26C4], eax
        jmp public_6d024d3
        public_6d024c9 : nop
        mov dword ptr ss : [ebp-0x26C4], offset public_6d6422c
        public_6d024d3 : nop
        cmp dword ptr ss : [ebp-0x45C], 0
        je public_6d024ea
        mov ecx, dword ptr ss : [ebp-0x45C]
        mov dword ptr ss : [ebp-0x26C8], ecx
        jmp public_6d024f4
        public_6d024ea : nop
        mov dword ptr ss : [ebp-0x26C8], offset public_6d64230
        public_6d024f4 : nop
        mov edx, dword ptr ss : [ebp-0x26C4]
        push edx
        mov eax, dword ptr ss : [ebp-0x26C8]
        push eax
/*FIXUP push offset public_6d64234 @0x6d02502*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64234
        lea ecx, ss:[ebp-0x246C]
        push ecx
        call public_6d168f0
        add esp, 0x10
        mov dword ptr ss : [ebp-0x254C], eax
        mov edx, 3
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x2470]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x2470], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x2470]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x2470], edx
        mov eax, dword ptr ss : [ebp-0x254C]
        push eax
        push 0x3FB
/*FIXUP push offset public_6d64250 @0x6d02560*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64250
/*FIXUP push offset public_6d6429c @0x6d02565*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6429c
        mov ecx, dword ptr ss : [ebp-0x2470]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        sub esp, 8
        mov dword ptr ss : [ebp-0x2550], esp
        mov eax, dword ptr ss : [ebp-0x2550]
        mov dword ptr ds : [eax], offset public_6d642b8
        mov ecx, dword ptr ss : [ebp-0x2550]
        mov edx, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [public_6d5e010]
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x2550]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        call public_6d01000
        add esp, 0xC
        mov dword ptr ss : [ebp-0x26CC], eax
        cmp dword ptr ss : [ebp-0x26CC], 0
        je public_6d029af
        mov eax, 3
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2478]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2478], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2478]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2478], eax
/*FIXUP push offset public_6d642c4 @0x6d02603*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d642c4
        push 0x3FF
/*FIXUP push offset public_6d642e0 @0x6d0260d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d642e0
/*FIXUP push offset public_6d6432c @0x6d02612*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6432c
        mov ecx, dword ptr ss : [ebp-0x2478]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x26B0]
        add eax, 0x2A0
        mov dword ptr ss : [ebp-0x464], eax
        mov dword ptr ss : [ebp-0x247C], 0xF
        mov dword ptr ss : [ebp-0x248C], 0xF
        mov dword ptr ss : [ebp-0x2490], offset public_6d64348
        mov dword ptr ss : [ebp-0x2488], 0
        mov dword ptr ss : [ebp-0x2484], 0
        mov byte ptr ss : [ebp-0x2480], 1
        push 0
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[ebp-0x2580]
        call public_6d176a0
        lea ecx, ss:[ebp-0x2580]
        push ecx
        lea edx, ss:[ebp-0x247C]
        push edx
        lea ecx, ss:[ebp-0x256C]
        call public_6d17190
        push eax
        lea eax, ss:[ebp-0x2588]
        push eax
        mov ecx, dword ptr ss : [ebp-0x464]
        call public_6d16b90
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x2554], ecx
        mov edx, dword ptr ss : [ebp-0x2554]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x25A0], edx
        mov al, byte ptr ss : [ebp-0x2480]
        mov byte ptr ss : [ebp-0x2599], al
        mov ecx, dword ptr ss : [ebp-0x2484]
        mov dword ptr ss : [ebp-0x2598], ecx
        mov edx, dword ptr ss : [ebp-0x2488]
        mov dword ptr ss : [ebp-0x2594], edx
        mov eax, dword ptr ss : [ebp-0x2490]
        mov dword ptr ss : [ebp-0x2590], eax
        mov ecx, dword ptr ss : [ebp-0x248C]
        mov dword ptr ss : [ebp-0x258C], ecx
        mov edx, dword ptr ss : [ebp-0x25A0]
        mov eax, dword ptr ss : [ebp-0x258C]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-0x25A0]
        mov edx, dword ptr ss : [ebp-0x2590]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-0x25A0]
        mov ecx, dword ptr ss : [ebp-0x2594]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x25A0]
        mov eax, dword ptr ss : [ebp-0x2598]
        mov dword ptr ds : [edx+0xC], eax
        mov ecx, dword ptr ss : [ebp-0x25A0]
        mov dl, byte ptr ss : [ebp-0x2599]
        mov byte ptr ds : [ecx+0x10], dl
        mov dword ptr ss : [ebp-0x2494], 0x18
        mov dword ptr ss : [ebp-0x24A4], 0x18
        mov dword ptr ss : [ebp-0x24A8], offset public_6d64358
        mov dword ptr ss : [ebp-0x24A0], 0
        mov dword ptr ss : [ebp-0x249C], 0
        mov byte ptr ss : [ebp-0x2498], 1
        push 0
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[ebp-0x25D0]
        call public_6d176a0
        lea eax, ss:[ebp-0x25D0]
        push eax
        lea ecx, ss:[ebp-0x2494]
        push ecx
        lea ecx, ss:[ebp-0x25BC]
        call public_6d17190
        push eax
        lea edx, ss:[ebp-0x25D8]
        push edx
        mov ecx, dword ptr ss : [ebp-0x464]
        call public_6d16b90
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x25A4], eax
        mov ecx, dword ptr ss : [ebp-0x25A4]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x25F0], ecx
        mov dl, byte ptr ss : [ebp-0x2498]
        mov byte ptr ss : [ebp-0x25E9], dl
        mov eax, dword ptr ss : [ebp-0x249C]
        mov dword ptr ss : [ebp-0x25E8], eax
        mov ecx, dword ptr ss : [ebp-0x24A0]
        mov dword ptr ss : [ebp-0x25E4], ecx
        mov edx, dword ptr ss : [ebp-0x24A8]
        mov dword ptr ss : [ebp-0x25E0], edx
        mov eax, dword ptr ss : [ebp-0x24A4]
        mov dword ptr ss : [ebp-0x25DC], eax
        mov ecx, dword ptr ss : [ebp-0x25F0]
        mov edx, dword ptr ss : [ebp-0x25DC]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ss : [ebp-0x25F0]
        mov ecx, dword ptr ss : [ebp-0x25E0]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp-0x25F0]
        mov eax, dword ptr ss : [ebp-0x25E4]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [ebp-0x25F0]
        mov edx, dword ptr ss : [ebp-0x25E8]
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ss : [ebp-0x25F0]
        mov cl, byte ptr ss : [ebp-0x25E9]
        mov byte ptr ds : [eax+0x10], cl
        mov dword ptr ss : [ebp-0x24AC], 0x19
        mov dword ptr ss : [ebp-0x24BC], 0x19
        mov dword ptr ss : [ebp-0x24C0], offset public_6d64364
        mov dword ptr ss : [ebp-0x24B8], 8
        mov dword ptr ss : [ebp-0x24B4], 0
        mov byte ptr ss : [ebp-0x24B0], 1
        push 0
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[ebp-0x2620]
        call public_6d176a0
        lea edx, ss:[ebp-0x2620]
        push edx
        lea eax, ss:[ebp-0x24AC]
        push eax
        lea ecx, ss:[ebp-0x260C]
        call public_6d17190
        push eax
        lea ecx, ss:[ebp-0x2628]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x464]
        call public_6d16b90
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x25F4], edx
        mov eax, dword ptr ss : [ebp-0x25F4]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x2640], eax
        mov cl, byte ptr ss : [ebp-0x24B0]
        mov byte ptr ss : [ebp-0x2639], cl
        mov edx, dword ptr ss : [ebp-0x24B4]
        mov dword ptr ss : [ebp-0x2638], edx
        mov eax, dword ptr ss : [ebp-0x24B8]
        mov dword ptr ss : [ebp-0x2634], eax
        mov ecx, dword ptr ss : [ebp-0x24C0]
        mov dword ptr ss : [ebp-0x2630], ecx
        mov edx, dword ptr ss : [ebp-0x24BC]
        mov dword ptr ss : [ebp-0x262C], edx
        mov eax, dword ptr ss : [ebp-0x2640]
        mov ecx, dword ptr ss : [ebp-0x262C]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [ebp-0x2640]
        mov eax, dword ptr ss : [ebp-0x2630]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp-0x2640]
        mov edx, dword ptr ss : [ebp-0x2634]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-0x2640]
        mov ecx, dword ptr ss : [ebp-0x2638]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ss : [ebp-0x2640]
        mov al, byte ptr ss : [ebp-0x2639]
        mov byte ptr ds : [edx+0x10], al
        mov ecx, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [ecx+0x548], 0
        mov edx, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [edx+0x5D8], 0
        mov eax, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [eax+0x5E8], 0
        public_6d029af : nop
        sub esp, 8
        mov dword ptr ss : [ebp-0x2644], esp
        mov ecx, dword ptr ss : [ebp-0x2644]
        mov dword ptr ds : [ecx], offset public_6d64370
        mov edx, dword ptr ss : [ebp-0x2644]
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [public_6d5e010]
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x2644]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        call public_6d01000
        add esp, 0xC
        mov dword ptr ss : [ebp-0x26D0], eax
        cmp dword ptr ss : [ebp-0x26D0], 0
        je public_6d02a68
        mov eax, 3
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x24C8]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x24C8], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x24C8]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x24C8], eax
/*FIXUP push offset public_6d6437c @0x6d02a32*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6437c
        push 0x410
/*FIXUP push offset public_6d643a0 @0x6d02a3c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d643a0
/*FIXUP push offset public_6d643ec @0x6d02a41*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d643ec
        mov ecx, dword ptr ss : [ebp-0x24C8]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [eax+0x43C], 0
        public_6d02a68 : nop
        sub esp, 8
        mov dword ptr ss : [ebp-0x2648], esp
        mov ecx, dword ptr ss : [ebp-0x2648]
        mov dword ptr ds : [ecx], offset public_6d64408
        mov edx, dword ptr ss : [ebp-0x2648]
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [public_6d5e010]
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x2648]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        call public_6d01000
        add esp, 0xC
        mov dword ptr ss : [ebp-0x26D4], eax
        cmp dword ptr ss : [ebp-0x26D4], 0
        je public_6d02b63
        mov eax, 3
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x24D0]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x24D0], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x24D0]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x24D0], eax
/*FIXUP push offset public_6d6441c @0x6d02aef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6441c
        push 0x416
/*FIXUP push offset public_6d64438 @0x6d02af9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64438
/*FIXUP push offset public_6d64484 @0x6d02afe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64484
        mov ecx, dword ptr ss : [ebp-0x24D0]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x26B0]
        add eax, 0x3F0
        mov dword ptr ss : [ebp-0x264C], eax
        mov ecx, dword ptr ss : [ebp-0x264C]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d02b34
        jmp public_6d02b4d
        public_6d02b34 : nop
        mov edx, dword ptr ss : [ebp-0x264C]
        mov dword ptr ds : [edx+8], 1
        mov eax, dword ptr ss : [ebp-0x264C]
        mov dword ptr ds : [eax], 1
        public_6d02b4d : nop
        mov ecx, 1
        neg ecx
        sbb ecx, ecx
        inc ecx
        mov edx, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [edx+0x3F4], ecx
        public_6d02b63 : nop
        sub esp, 8
        mov dword ptr ss : [ebp-0x2650], esp
        mov eax, dword ptr ss : [ebp-0x2650]
        mov dword ptr ds : [eax], offset public_6d644a0
        mov ecx, dword ptr ss : [ebp-0x2650]
        mov edx, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [public_6d5e010]
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x2650]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        call public_6d01000
        add esp, 0xC
        mov dword ptr ss : [ebp-0x26D8], eax
        cmp dword ptr ss : [ebp-0x26D8], 0
        je public_6d02c1c
        mov eax, 3
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x24D8]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x24D8], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x24D8]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x24D8], eax
/*FIXUP push offset public_6d644b0 @0x6d02be6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d644b0
        push 0x421
/*FIXUP push offset public_6d644d0 @0x6d02bf0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d644d0
/*FIXUP push offset public_6d6451c @0x6d02bf5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6451c
        mov ecx, dword ptr ss : [ebp-0x24D8]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [eax+0x448], 1
        public_6d02c1c : nop
        sub esp, 8
        mov dword ptr ss : [ebp-0x2654], esp
        mov ecx, dword ptr ss : [ebp-0x2654]
        mov dword ptr ds : [ecx], offset public_6d64538
        mov edx, dword ptr ss : [ebp-0x2654]
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [public_6d5e010]
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x2654]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        call public_6d01000
        add esp, 0xC
        mov dword ptr ss : [ebp-0x26DC], eax
        cmp dword ptr ss : [ebp-0x26DC], 0
        je public_6d02cd5
        mov eax, 3
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x24E0]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x24E0], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x24E0]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x24E0], eax
/*FIXUP push offset public_6d6454c @0x6d02c9f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6454c
        push 0x428
/*FIXUP push offset public_6d64570 @0x6d02ca9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64570
/*FIXUP push offset public_6d645bc @0x6d02cae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d645bc
        mov ecx, dword ptr ss : [ebp-0x24E0]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [eax+0x440], 0x640
        public_6d02cd5 : nop
        sub esp, 8
        mov dword ptr ss : [ebp-0x2658], esp
        mov ecx, dword ptr ss : [ebp-0x2658]
        mov dword ptr ds : [ecx], offset public_6d645d8
        mov edx, dword ptr ss : [ebp-0x2658]
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [public_6d5e010]
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x2658]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        call public_6d01000
        add esp, 0xC
        mov dword ptr ss : [ebp-0x26E0], eax
        cmp dword ptr ss : [ebp-0x26E0], 0
        je public_6d02d8e
        mov eax, 3
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x24E8]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x24E8], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x24E8]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x24E8], eax
/*FIXUP push offset public_6d645e0 @0x6d02d58*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d645e0
        push 0x42D
/*FIXUP push offset public_6d64600 @0x6d02d62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64600
/*FIXUP push offset public_6d6464c @0x6d02d67*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6464c
        mov ecx, dword ptr ss : [ebp-0x24E8]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [eax+0x444], 1
        public_6d02d8e : nop
        sub esp, 8
        mov dword ptr ss : [ebp-0x265C], esp
        mov ecx, dword ptr ss : [ebp-0x265C]
        mov dword ptr ds : [ecx], offset public_6d64668
        mov edx, dword ptr ss : [ebp-0x265C]
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [public_6d5e010]
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x265C]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        call public_6d01000
        add esp, 0xC
        mov dword ptr ss : [ebp-0x26E4], eax
        cmp dword ptr ss : [ebp-0x26E4], 0
        je public_6d02e7f
        mov eax, 3
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x24F0]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x24F0], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x24F0]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x24F0], eax
/*FIXUP push offset public_6d6467c @0x6d02e15*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6467c
        push 0x432
/*FIXUP push offset public_6d646a0 @0x6d02e1f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d646a0
/*FIXUP push offset public_6d646ec @0x6d02e24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d646ec
        mov ecx, dword ptr ss : [ebp-0x24F0]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x26B0]
        cmp dword ptr ds : [eax+0x414], 0x100
        jbe public_6d02e5d
        mov ecx, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [ecx+0x414], 0x100
        public_6d02e5d : nop
        mov edx, dword ptr ss : [ebp-0x26B0]
        cmp dword ptr ds : [edx+0x418], 0x100
        jbe public_6d02e7f
        mov eax, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [eax+0x418], 0x100
        public_6d02e7f : nop
        sub esp, 8
        mov dword ptr ss : [ebp-0x2660], esp
        mov ecx, dword ptr ss : [ebp-0x2660]
        mov dword ptr ds : [ecx], offset public_6d64708
        mov edx, dword ptr ss : [ebp-0x2660]
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [public_6d5e010]
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x2660]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        call public_6d01000
        add esp, 0xC
        mov dword ptr ss : [ebp-0x26E8], eax
        cmp dword ptr ss : [ebp-0x26E8], 0
        je public_6d02f38
        mov eax, 3
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x24F8]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x24F8], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x24F8]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x24F8], eax
/*FIXUP push offset public_6d6471c @0x6d02f02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6471c
        push 0x43B
/*FIXUP push offset public_6d64740 @0x6d02f0c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64740
/*FIXUP push offset public_6d6478c @0x6d02f11*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6478c
        mov ecx, dword ptr ss : [ebp-0x24F8]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [eax+0x410], 1
        public_6d02f38 : nop
        sub esp, 8
        mov dword ptr ss : [ebp-0x2664], esp
        mov ecx, dword ptr ss : [ebp-0x2664]
        mov dword ptr ds : [ecx], offset public_6d647a8
        mov edx, dword ptr ss : [ebp-0x2664]
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [public_6d5e010]
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x2664]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        call public_6d01000
        add esp, 0xC
        mov dword ptr ss : [ebp-0x26EC], eax
        cmp dword ptr ss : [ebp-0x26EC], 0
        je public_6d03033
        mov eax, 3
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2500]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2500], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2500]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2500], eax
/*FIXUP push offset public_6d647b0 @0x6d02fbf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d647b0
        push 0x440
/*FIXUP push offset public_6d647d0 @0x6d02fc9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d647d0
/*FIXUP push offset public_6d6481c @0x6d02fce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6481c
        mov ecx, dword ptr ss : [ebp-0x2500]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x26B0]
        add eax, 0x384
        mov dword ptr ss : [ebp-0x2668], eax
        mov ecx, dword ptr ss : [ebp-0x2668]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d03004
        jmp public_6d0301d
        public_6d03004 : nop
        mov edx, dword ptr ss : [ebp-0x2668]
        mov dword ptr ds : [edx+8], 1
        mov eax, dword ptr ss : [ebp-0x2668]
        mov dword ptr ds : [eax], 0
        public_6d0301d : nop
        mov ecx, 1
        neg ecx
        sbb ecx, ecx
        inc ecx
        mov edx, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [edx+0x388], ecx
        public_6d03033 : nop
        sub esp, 8
        mov dword ptr ss : [ebp-0x266C], esp
        mov eax, dword ptr ss : [ebp-0x266C]
        mov dword ptr ds : [eax], offset public_6d64838
        mov ecx, dword ptr ss : [ebp-0x266C]
        mov edx, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [public_6d5e010]
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x266C]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        call public_6d01000
        add esp, 0xC
        mov dword ptr ss : [ebp-0x26F0], eax
        cmp dword ptr ss : [ebp-0x26F0], 0
        je public_6d0312e
        mov eax, 3
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2508]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2508], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2508]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2508], eax
/*FIXUP push offset public_6d64844 @0x6d030ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64844
        push 0x449
/*FIXUP push offset public_6d64860 @0x6d030c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64860
/*FIXUP push offset public_6d648ac @0x6d030c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d648ac
        mov ecx, dword ptr ss : [ebp-0x2508]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x26B0]
        add eax, 0x390
        mov dword ptr ss : [ebp-0x2670], eax
        mov ecx, dword ptr ss : [ebp-0x2670]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d030ff
        jmp public_6d03118
        public_6d030ff : nop
        mov edx, dword ptr ss : [ebp-0x2670]
        mov dword ptr ds : [edx+8], 1
        mov eax, dword ptr ss : [ebp-0x2670]
        mov dword ptr ds : [eax], 0
        public_6d03118 : nop
        mov ecx, 1
        neg ecx
        sbb ecx, ecx
        inc ecx
        mov edx, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [edx+0x394], ecx
        public_6d0312e : nop
        sub esp, 8
        mov dword ptr ss : [ebp-0x2674], esp
        mov eax, dword ptr ss : [ebp-0x2674]
        mov dword ptr ds : [eax], offset public_6d648c8
        mov ecx, dword ptr ss : [ebp-0x2674]
        mov edx, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [public_6d5e010]
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x2674]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        call public_6d01000
        add esp, 0xC
        mov dword ptr ss : [ebp-0x26F4], eax
        cmp dword ptr ss : [ebp-0x26F4], 0
        je public_6d03229
        mov eax, 3
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2510]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2510], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2510]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2510], eax
/*FIXUP push offset public_6d648d8 @0x6d031b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d648d8
        push 0x450
/*FIXUP push offset public_6d648f8 @0x6d031bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d648f8
/*FIXUP push offset public_6d64944 @0x6d031c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64944
        mov ecx, dword ptr ss : [ebp-0x2510]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x26B0]
        add eax, 0x3E4
        mov dword ptr ss : [ebp-0x2678], eax
        mov ecx, dword ptr ss : [ebp-0x2678]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d031fa
        jmp public_6d03213
        public_6d031fa : nop
        mov edx, dword ptr ss : [ebp-0x2678]
        mov dword ptr ds : [edx+8], 1
        mov eax, dword ptr ss : [ebp-0x2678]
        mov dword ptr ds : [eax], 1
        public_6d03213 : nop
        mov ecx, 1
        neg ecx
        sbb ecx, ecx
        inc ecx
        mov edx, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [edx+0x3E8], ecx
        public_6d03229 : nop
        sub esp, 8
        mov dword ptr ss : [ebp-0x267C], esp
        mov eax, dword ptr ss : [ebp-0x267C]
        mov dword ptr ds : [eax], offset public_6d64960
        mov ecx, dword ptr ss : [ebp-0x267C]
        mov edx, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [public_6d5e010]
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x267C]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        call public_6d01000
        add esp, 0xC
        mov dword ptr ss : [ebp-0x26F8], eax
        cmp dword ptr ss : [ebp-0x26F8], 0
        je public_6d032e2
        mov eax, 3
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2518]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2518], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2518]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2518], eax
/*FIXUP push offset public_6d64970 @0x6d032ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64970
        push 0x457
/*FIXUP push offset public_6d64990 @0x6d032b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64990
/*FIXUP push offset public_6d649dc @0x6d032bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d649dc
        mov ecx, dword ptr ss : [ebp-0x2518]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [eax+0x41C], 0
        public_6d032e2 : nop
        sub esp, 8
        mov dword ptr ss : [ebp-0x2680], esp
        mov ecx, dword ptr ss : [ebp-0x2680]
        mov dword ptr ds : [ecx], offset public_6d649f8
        mov edx, dword ptr ss : [ebp-0x2680]
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [public_6d5e010]
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x2680]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        call public_6d01000
        add esp, 0xC
        mov dword ptr ss : [ebp-0x26FC], eax
        cmp dword ptr ss : [ebp-0x26FC], 0
        je public_6d0339b
        mov eax, 3
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2520]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2520], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2520]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2520], eax
/*FIXUP push offset public_6d64a04 @0x6d03365*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64a04
        push 0x45D
/*FIXUP push offset public_6d64a20 @0x6d0336f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64a20
/*FIXUP push offset public_6d64a6c @0x6d03374*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64a6c
        mov ecx, dword ptr ss : [ebp-0x2520]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [eax+0x430], 0
        public_6d0339b : nop
        sub esp, 8
        mov dword ptr ss : [ebp-0x2684], esp
        mov ecx, dword ptr ss : [ebp-0x2684]
        mov dword ptr ds : [ecx], offset public_6d64a88
        mov edx, dword ptr ss : [ebp-0x2684]
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [public_6d5e010]
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x2684]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        call public_6d01000
        add esp, 0xC
        mov dword ptr ss : [ebp-0x2700], eax
        cmp dword ptr ss : [ebp-0x2700], 0
        je public_6d03454
        mov eax, 3
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2528]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2528], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2528]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2528], eax
/*FIXUP push offset public_6d64a98 @0x6d0341e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64a98
        push 0x466
/*FIXUP push offset public_6d64ab0 @0x6d03428*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64ab0
/*FIXUP push offset public_6d64afc @0x6d0342d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64afc
        mov ecx, dword ptr ss : [ebp-0x2528]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [eax+0x438], 1
        public_6d03454 : nop
        sub esp, 8
        mov dword ptr ss : [ebp-0x2688], esp
        mov ecx, dword ptr ss : [ebp-0x2688]
        mov dword ptr ds : [ecx], offset public_6d64b18
        mov edx, dword ptr ss : [ebp-0x2688]
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [public_6d5e010]
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x2688]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        call public_6d01000
        add esp, 0xC
        mov dword ptr ss : [ebp-0x2704], eax
        cmp dword ptr ss : [ebp-0x2704], 0
        je public_6d0350d
        mov eax, 3
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2530]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2530], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2530]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2530], eax
/*FIXUP push offset public_6d64b2c @0x6d034d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64b2c
        push 0x46B
/*FIXUP push offset public_6d64b48 @0x6d034e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64b48
/*FIXUP push offset public_6d64b94 @0x6d034e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64b94
        mov ecx, dword ptr ss : [ebp-0x2530]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [eax+0x438], 2
        public_6d0350d : nop
        sub esp, 8
        mov dword ptr ss : [ebp-0x268C], esp
        mov ecx, dword ptr ss : [ebp-0x268C]
        mov dword ptr ds : [ecx], offset public_6d64bb0
        mov edx, dword ptr ss : [ebp-0x268C]
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [public_6d5e010]
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x268C]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        call public_6d01000
        add esp, 0xC
        mov dword ptr ss : [ebp-0x2708], eax
        cmp dword ptr ss : [ebp-0x2708], 0
        je public_6d035c6
        mov eax, 3
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2538]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2538], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2538]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2538], eax
/*FIXUP push offset public_6d64bc4 @0x6d03590*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64bc4
        push 0x470
/*FIXUP push offset public_6d64be0 @0x6d0359a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64be0
/*FIXUP push offset public_6d64c2c @0x6d0359f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64c2c
        mov ecx, dword ptr ss : [ebp-0x2538]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x26B0]
        mov dword ptr ds : [eax+0x438], 3
        public_6d035c6 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [ebp-0x20]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x20], 0
        public_6d035d8 : nop
        mov eax, dword ptr ss : [ebp-0x26B0]
        mov ecx, dword ptr ds : [eax+0x290]
        mov dword ptr ss : [ebp-0x2690], ecx
        mov edx, dword ptr ss : [ebp-0x2690]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x2694], eax
        mov ecx, dword ptr ss : [ebp-0x2694]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-0x26B0]
        mov eax, dword ptr ds : [edx+0x290]
        mov dword ptr ss : [ebp-0x2698], eax
        mov ecx, dword ptr ss : [ebp-0x2698]
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0xC], edx
        jmp public_6d036bd
        public_6d03627 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x269C], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx+0x25]
        test eax, eax
        jne public_6d03675
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x26A4], edx
        public_6d0364a : nop
        mov eax, dword ptr ss : [ebp-0x26A4]
        mov ecx, dword ptr ds : [eax]
        movsx edx, byte ptr ds : [ecx+0x25]
        test edx, edx
        jne public_6d0366a
        mov eax, dword ptr ss : [ebp-0x26A4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x26A4], ecx
        jmp public_6d0364a
        public_6d0366a : nop
        mov edx, dword ptr ss : [ebp-0x26A4]
        mov dword ptr ss : [ebp-0xC], edx
        jmp public_6d036b1
        public_6d03675 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x26A0], ecx
        mov edx, dword ptr ss : [ebp-0x26A0]
        mov eax, dword ptr ss : [ebp-0xC]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d0369a
        mov ecx, dword ptr ss : [ebp-0x26A0]
        mov dword ptr ss : [ebp-0xC], ecx
        jmp public_6d03675
        public_6d0369a : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+8]
        cmp eax, dword ptr ss : [ebp-0x26A0]
        je public_6d036b1
        mov ecx, dword ptr ss : [ebp-0x26A0]
        mov dword ptr ss : [ebp-0xC], ecx
        public_6d036b1 : nop
        mov edx, dword ptr ss : [ebp-0x269C]
        mov dword ptr ss : [ebp-0x253C], edx
        public_6d036bd : nop
        mov eax, dword ptr ss : [ebp-0xC]
        sub eax, dword ptr ss : [ebp-0x10]
        neg eax
        sbb eax, eax
        inc eax
        xor ecx, ecx
        mov cl, al
        neg ecx
        sbb ecx, ecx
        inc ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d03768
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x26A8], eax
        mov ecx, dword ptr ss : [ebp-0x26A8]
        movzx edx, byte ptr ds : [ecx+0x10]
        test edx, edx
        je public_6d03738
        mov eax, dword ptr ss : [ebp-0x26A8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x46C], ecx
        mov edx, 1
        test edx, edx
        je public_6d03720
        mov eax, dword ptr ss : [ebp-0x26A8]
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [ebp-0x468], ecx
        jmp public_6d0372f
        public_6d03720 : nop
        mov edx, dword ptr ss : [ebp-0x26A8]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x468], eax
        public_6d0372f : nop
        mov byte ptr ss : [ebp-0x26A9], 1
        jmp public_6d0373f
        public_6d03738 : nop
        mov byte ptr ss : [ebp-0x26A9], 0
        public_6d0373f : nop
        movzx ecx, byte ptr ss : [ebp-0x26A9]
        test ecx, ecx
        je public_6d03763
        mov edx, dword ptr ss : [ebp-0x46C]
        mov eax, dword ptr ss : [ebp-0x26B0]
        mov ecx, dword ptr ss : [ebp-0x468]
        mov dword ptr ds : [eax+edx*4+0x3FC], ecx
        public_6d03763 : nop
        jmp public_6d03627
        public_6d03768 : nop
        pop edi
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d020ab)
    }
}

#undef public_6d02153
#undef public_6d0215d
#undef public_6d02226
#undef public_6d022ce
#undef public_6d022d8
#undef public_6d02346
#undef public_6d02350
#undef public_6d02385
#undef public_6d0238f
#undef public_6d023ba
#undef public_6d023d9
#undef public_6d023f1
#undef public_6d024c9
#undef public_6d024d3
#undef public_6d024ea
#undef public_6d024f4
#undef public_6d029af
#undef public_6d02a68
#undef public_6d02b34
#undef public_6d02b4d
#undef public_6d02b63
#undef public_6d02c1c
#undef public_6d02cd5
#undef public_6d02d8e
#undef public_6d02e5d
#undef public_6d02e7f
#undef public_6d02f38
#undef public_6d03004
#undef public_6d0301d
#undef public_6d03033
#undef public_6d030ff
#undef public_6d03118
#undef public_6d0312e
#undef public_6d031fa
#undef public_6d03213
#undef public_6d03229
#undef public_6d032e2
#undef public_6d0339b
#undef public_6d03454
#undef public_6d0350d
#undef public_6d035c6
#undef public_6d035d8
#undef public_6d03627
#undef public_6d0364a
#undef public_6d0366a
#undef public_6d03675
#undef public_6d0369a
#undef public_6d036b1
#undef public_6d036bd
#undef public_6d03720
#undef public_6d0372f
#undef public_6d03738
#undef public_6d0373f
#undef public_6d03763
#undef public_6d03768
