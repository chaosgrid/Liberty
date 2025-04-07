#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15b80);
CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f6ee);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc30);

#define public_6d0eaf5 _public_6d0eaf5
#define public_6d0eb18 _public_6d0eb18
#define public_6d0eb9b _public_6d0eb9b
#define public_6d0ec36 _public_6d0ec36
#define public_6d0ec63 _public_6d0ec63
#define public_6d0ec72 _public_6d0ec72
#define public_6d0ecc8 _public_6d0ecc8
#define public_6d0ed09 _public_6d0ed09
#define public_6d0ed0e _public_6d0ed0e
#define public_6d0ed32 _public_6d0ed32
#define public_6d0ed7f _public_6d0ed7f
#define public_6d0ed92 _public_6d0ed92
#define public_6d0edb2 _public_6d0edb2
#define public_6d0edd1 _public_6d0edd1
#define public_6d0eddc _public_6d0eddc
#define public_6d0ee07 _public_6d0ee07
#define public_6d0ee40 _public_6d0ee40
#define public_6d0eea9 _public_6d0eea9
#define public_6d0eee0 _public_6d0eee0
#define public_6d0eeeb _public_6d0eeeb
#define public_6d0efcb _public_6d0efcb
#define public_6d0efed _public_6d0efed
#define public_6d0eff8 _public_6d0eff8
#define public_6d0f008 _public_6d0f008
#define public_6d0f012 _public_6d0f012
#define public_6d0f038 _public_6d0f038
#define public_6d0f047 _public_6d0f047
#define public_6d0f0bc _public_6d0f0bc
#define public_6d0f18e _public_6d0f18e
#define public_6d0f1b0 _public_6d0f1b0
#define public_6d0f1b6 _public_6d0f1b6

PROC_DECLARE(0x6d0ea78, internal_6d0ea78, public_6d0ea78);
extern "C" NAKED register_t __cdecl internal_6d0ea78()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0xA4D8
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0eaf5
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x454]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x454], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x454]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x454], ecx
/*FIXUP push offset public_6d67cf8 @0x6d0eac8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67cf8
        push 0xD1E
/*FIXUP push offset public_6d67d38 @0x6d0ead2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67d38
/*FIXUP push offset public_6d67d84 @0x6d0ead7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67d84
        mov edx, dword ptr ss : [ebp-0x454]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0f1b6
        public_6d0eaf5 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x2C], ecx
        cmp dword ptr ss : [ebp-0x2C], 0
        je public_6d0eb18
        mov edx, dword ptr ss : [ebp-0x2C]
        xor eax, eax
        cmp dword ptr ds : [edx], 0
        setne al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        jne public_6d0eb9b
/*FIXUP public_6d0eb18 : nop
        push offset public_6d67da0 @0x6d0eb18*/
  FIXUP public_6d0eb18 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67da0
        lea edx, ss:[ebp-0x2454]
        push edx
        call public_6d168f0
        add esp, 8
        mov dword ptr ss : [ebp-0x8474], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2458]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2458], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2458]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2458], eax
        mov ecx, dword ptr ss : [ebp-0x8474]
        push ecx
        push 0xD23
/*FIXUP push offset public_6d67dd8 @0x6d0eb76*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67dd8
/*FIXUP push offset public_6d67e24 @0x6d0eb7b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67e24
        mov edx, dword ptr ss : [ebp-0x2458]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov eax, 0xFFFFFFFE
        jmp public_6d0f1b6
        public_6d0eb9b : nop
        mov ecx, dword ptr ss : [ebp+0x20]
        xor edx, edx
        cmp dword ptr ds : [ecx], 0
        setne dl
        xor eax, eax
        mov al, dl
        test eax, eax
        jne public_6d0ec36
/*FIXUP push offset public_6d67e40 @0x6d0ebb2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67e40
        lea ecx, ss:[ebp-0x4458]
        push ecx
        call public_6d168f0
        add esp, 8
        mov dword ptr ss : [ebp-0x8478], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x445C]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x445C], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x445C]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x445C], edx
        mov eax, dword ptr ss : [ebp-0x8478]
        push eax
        push 0xD29
/*FIXUP push offset public_6d67e78 @0x6d0ec10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67e78
/*FIXUP push offset public_6d67ec4 @0x6d0ec15*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67ec4
        mov ecx, dword ptr ss : [ebp-0x445C]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, 0xFFFFFFFE
        jmp public_6d0f1b6
        public_6d0ec36 : nop
        cmp dword ptr ss : [ebp-0x2C], 0
        je public_6d0ed0e
        mov eax, dword ptr ss : [ebp-0x2C]
        xor ecx, ecx
        cmp dword ptr ds : [eax], 0
        setne cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d0ed0e
        mov dword ptr ss : [ebp-0x847C], 0
        jmp public_6d0ec72
        public_6d0ec63 : nop
        mov eax, dword ptr ss : [ebp-0x847C]
        add eax, 1
        mov dword ptr ss : [ebp-0x847C], eax
        public_6d0ec72 : nop
        cmp dword ptr ss : [ebp-0x847C], 8
        jae public_6d0ed0e
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov dword ptr ss : [ebp-0x848C], edx
        mov eax, dword ptr ss : [ebp-0x847C]
        mov ecx, dword ptr ss : [ebp+8]
        lea edx, ds:[ecx+eax*8+0x1F94]
        mov dword ptr ss : [ebp-0x8488], edx
        mov eax, dword ptr ss : [ebp-0x8488]
        movzx ecx, byte ptr ds : [eax+4]
        test ecx, ecx
        jne public_6d0ecc8
        mov edx, dword ptr ss : [ebp-0x8488]
        mov byte ptr ds : [edx+4], 1
        mov eax, dword ptr ss : [ebp-0x8488]
        mov dword ptr ds : [eax], 0
        public_6d0ecc8 : nop
        mov ecx, dword ptr ss : [ebp-0x8488]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x8490], edx
        mov eax, dword ptr ss : [ebp-0x8490]
        cmp eax, dword ptr ss : [ebp-0x2C]
        jne public_6d0ed09
        push 0
        mov ecx, dword ptr ss : [ebp-0x847C]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        push eax
        mov ecx, dword ptr ss : [ebp-0x847C]
        mov edx, dword ptr ss : [ebp+8]
        lea ecx, ds:[edx+ecx*8+0x1F94]
        call public_6d1b3b0
        public_6d0ed09 : nop
        jmp public_6d0ec63
        public_6d0ed0e : nop
        cmp dword ptr ss : [ebp+0x10], 0
        je public_6d0ed32
        mov eax, dword ptr ss : [ebp+8]
        xor ecx, ecx
        cmp dword ptr ds : [eax+0x36C], 0
        setne cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d0ed32
        xor eax, eax
        jmp public_6d0f1b6
        public_6d0ed32 : nop
        push 0
        call public_6d5cc30
        add esp, 4
        mov dword ptr ss : [ebp-0x34], eax
        lea eax, ss:[ebp-0x84B0]
        push eax
        push 0
        mov ecx, dword ptr ss : [ebp-0x2C]
        call public_6d1b1c0
        mov byte ptr ss : [ebp-0x84B1], al
        movzx ecx, byte ptr ss : [ebp-0x84B1]
        test ecx, ecx
        je public_6d0ed7f
        mov edx, dword ptr ss : [ebp-0x84B0]
        mov dword ptr ss : [ebp-0x84B8], edx
        mov eax, dword ptr ss : [ebp-0x84B8]
        push eax
        call public_6d5cc30
        add esp, 4
        mov dword ptr ss : [ebp-0x34], eax
        public_6d0ed7f : nop
        movzx ecx, byte ptr ss : [ebp-0x84B1]
        test ecx, ecx
        jne public_6d0ed92
        or eax, 0xFFFFFFFF
        jmp public_6d0f1b6
        public_6d0ed92 : nop
        mov dword ptr ss : [ebp-0x30], 0
        cmp dword ptr ss : [ebp-0x30], 0
        je public_6d0edb2
        mov edx, dword ptr ss : [ebp-0x30]
        mov eax, dword ptr ss : [ebp-0x30]
        mov ecx, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x30], 0
        public_6d0edb2 : nop
        mov dword ptr ss : [ebp-0x84C0], 0x80004005
        mov edx, dword ptr ss : [ebp-0x2C]
        cmp dword ptr ds : [edx+4], 0
        je public_6d0edd1
        mov dword ptr ss : [ebp-0x84BC], 0
        jmp public_6d0eddc
        public_6d0edd1 : nop
        mov eax, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x84BC], ecx
        public_6d0eddc : nop
        cmp dword ptr ss : [ebp-0x84BC], 0
        je public_6d0ee07
        lea edx, ss:[ebp-0x30]
        push edx
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-0x84BC]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x84BC]
        push eax
        call dword ptr ds : [edx+0x3C]
        mov dword ptr ss : [ebp-0x84C0], eax
        jmp public_6d0ee40
        public_6d0ee07 : nop
        mov ecx, dword ptr ss : [ebp-0x2C]
        call public_6d1b1a0
        mov dword ptr ss : [ebp-0x84C4], eax
        cmp dword ptr ss : [ebp-0x84C4], 0
        je public_6d0ee40
        lea ecx, ss:[ebp-0x30]
        push ecx
        push 0
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        mov eax, dword ptr ss : [ebp-0x84C4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x84C4]
        push edx
        call dword ptr ds : [ecx+0x3C]
        mov dword ptr ss : [ebp-0x84C0], eax
        public_6d0ee40 : nop
        cmp dword ptr ss : [ebp-0x84C0], 0
        jge public_6d0eea9
        mov eax, dword ptr ss : [ebp-0x84C0]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6affc @0x6d0ee59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6affc
        lea ecx, ss:[ebp-0xA4C4]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0xA4CC], eax
        mov edx, dword ptr ss : [ebp-0xA4CC]
        push edx
        push 0xAB
/*FIXUP push offset public_6d6ae00 @0x6d0ee7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae00
/*FIXUP push offset public_6d6ade0 @0x6d0ee84*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        push 2
        push 0x10000
        lea ecx, ss:[ebp-0xA4C8]
        call public_6d15b80
        mov eax, dword ptr ds : [eax]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d0eea9 : nop
        xor edx, edx
        cmp dword ptr ss : [ebp-0x84C0], 0
        setge dl
        xor eax, eax
        mov al, dl
        test eax, eax
        jne public_6d0eeeb
        mov dword ptr ss : [ebp-0x4460], 0xFFFFFFFF
        cmp dword ptr ss : [ebp-0x30], 0
        je public_6d0eee0
        mov ecx, dword ptr ss : [ebp-0x30]
        mov edx, dword ptr ss : [ebp-0x30]
        mov eax, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x30], 0
        public_6d0eee0 : nop
        mov eax, dword ptr ss : [ebp-0x4460]
        jmp public_6d0f1b6
        public_6d0eeeb : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        push ecx
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        push 0
        push 0
        lea eax, ss:[ebp-0x44C]
        push eax
        call dword ptr ds : [public_6d5e164]
        mov dword ptr ss : [ebp-0x43C], 1
        lea ecx, ss:[ebp-0x28]
        push ecx
        mov edx, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-0xA4D8], edx
        mov eax, dword ptr ss : [ebp-0xA4D8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0xA4D8]
        push edx
        call dword ptr ds : [ecx+0x20]
        mov dword ptr ss : [ebp-0x38], eax
        cmp dword ptr ss : [ebp-0x38], 0
        jge public_6d0eff8
        cmp dword ptr ss : [ebp-0x38], 0
        jge public_6d0efcb
        mov eax, dword ptr ss : [ebp-0x38]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d67ee0 @0x6d0ef51*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67ee0
        lea ecx, ss:[ebp-0x6460]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0xA4D0], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x6464]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x6464], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x6464]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x6464], edx
        mov eax, dword ptr ss : [ebp-0xA4D0]
        push eax
        push 0xD5B
/*FIXUP push offset public_6d67ef8 @0x6d0efaf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67ef8
/*FIXUP push offset public_6d67f44 @0x6d0efb4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67f44
        mov ecx, dword ptr ss : [ebp-0x6464]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d0efcb : nop
        mov eax, dword ptr ss : [ebp-0x38]
        mov dword ptr ss : [ebp-0x6468], eax
        cmp dword ptr ss : [ebp-0x30], 0
        je public_6d0efed
        mov ecx, dword ptr ss : [ebp-0x30]
        mov edx, dword ptr ss : [ebp-0x30]
        mov eax, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x30], 0
        public_6d0efed : nop
        mov eax, dword ptr ss : [ebp-0x6468]
        jmp public_6d0f1b6
        public_6d0eff8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        cmp ecx, dword ptr ss : [ebp+0x14]
        jne public_6d0f008
        mov edx, dword ptr ss : [ebp-0xC]
        cmp edx, dword ptr ss : [ebp+0x18]
        je public_6d0f012
        public_6d0f008 : nop
        mov dword ptr ss : [ebp-0x43C], 4
        public_6d0f012 : nop
        mov dword ptr ss : [ebp-8], 0
        cmp dword ptr ss : [ebp+0x2C], 0
        je public_6d0f0bc
        lea eax, ss:[ebp-0x438]
        mov dword ptr ss : [ebp-8], eax
        mov dword ptr ss : [ebp-0x450], 0
        jmp public_6d0f047
        public_6d0f038 : nop
        mov ecx, dword ptr ss : [ebp-0x450]
        add ecx, 1
        mov dword ptr ss : [ebp-0x450], ecx
        public_6d0f047 : nop
        cmp dword ptr ss : [ebp-0x450], 0x100
        jge public_6d0f0bc
        mov edx, dword ptr ss : [ebp-0x450]
        imul edx, 3
        mov eax, dword ptr ss : [ebp-0x450]
        mov ecx, dword ptr ss : [ebp+0x2C]
        mov dl, byte ptr ds : [ecx+edx]
        mov byte ptr ss : [ebp+eax*4-0x438], dl
        mov eax, dword ptr ss : [ebp-0x450]
        imul eax, 3
        mov ecx, dword ptr ss : [ebp-0x450]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov al, byte ptr ds : [edx+eax+1]
        mov byte ptr ss : [ebp+ecx*4-0x437], al
        mov ecx, dword ptr ss : [ebp-0x450]
        imul ecx, 3
        mov edx, dword ptr ss : [ebp-0x450]
        mov eax, dword ptr ss : [ebp+0x2C]
        mov cl, byte ptr ds : [eax+ecx+2]
        mov byte ptr ss : [ebp+edx*4-0x436], cl
        mov edx, dword ptr ss : [ebp-0x450]
        mov byte ptr ss : [ebp+edx*4-0x435], 0xFF
        jmp public_6d0f038
        public_6d0f0bc : nop
        mov eax, dword ptr ss : [ebp+0x20]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call public_6d5cbb0
        add esp, 4
        mov dword ptr ss : [ebp-4], eax
        push 0
        mov edx, dword ptr ss : [ebp-0x43C]
        push edx
        lea eax, ss:[ebp-0x44C]
        push eax
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        mov edx, dword ptr ss : [ebp+0x1C]
        push edx
        mov eax, dword ptr ss : [ebp-4]
        push eax
        mov ecx, dword ptr ss : [ebp+0x24]
        push ecx
        push 0
        push 0
        mov edx, dword ptr ss : [ebp-0x30]
        push edx
        call public_6d2f6ee
        mov dword ptr ss : [ebp-0x38], eax
        cmp dword ptr ss : [ebp-0x38], 0
        jge public_6d0f18e
        mov eax, dword ptr ss : [ebp-0x38]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d67f60 @0x6d0f114*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67f60
        lea ecx, ss:[ebp-0x8468]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0xA4D4], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x846C]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x846C], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x846C]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x846C], edx
        mov eax, dword ptr ss : [ebp-0xA4D4]
        push eax
        push 0xD7E
/*FIXUP push offset public_6d67f80 @0x6d0f172*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67f80
/*FIXUP push offset public_6d67fcc @0x6d0f177*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67fcc
        mov ecx, dword ptr ss : [ebp-0x846C]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d0f18e : nop
        mov eax, dword ptr ss : [ebp-0x38]
        mov dword ptr ss : [ebp-0x8470], eax
        cmp dword ptr ss : [ebp-0x30], 0
        je public_6d0f1b0
        mov ecx, dword ptr ss : [ebp-0x30]
        mov edx, dword ptr ss : [ebp-0x30]
        mov eax, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x30], 0
        public_6d0f1b0 : nop
        mov eax, dword ptr ss : [ebp-0x8470]
        public_6d0f1b6 : nop
        mov esp, ebp
        pop ebp
        ret 0x28
        UNREACHABLE_TRAP(0x6d0ea78)
    }
}

#undef public_6d0eaf5
#undef public_6d0eb18
#undef public_6d0eb9b
#undef public_6d0ec36
#undef public_6d0ec63
#undef public_6d0ec72
#undef public_6d0ecc8
#undef public_6d0ed09
#undef public_6d0ed0e
#undef public_6d0ed32
#undef public_6d0ed7f
#undef public_6d0ed92
#undef public_6d0edb2
#undef public_6d0edd1
#undef public_6d0eddc
#undef public_6d0ee07
#undef public_6d0ee40
#undef public_6d0eea9
#undef public_6d0eee0
#undef public_6d0eeeb
#undef public_6d0efcb
#undef public_6d0efed
#undef public_6d0eff8
#undef public_6d0f008
#undef public_6d0f012
#undef public_6d0f038
#undef public_6d0f047
#undef public_6d0f0bc
#undef public_6d0f18e
#undef public_6d0f1b0
#undef public_6d0f1b6
